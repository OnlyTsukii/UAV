import rclpy
import time
import threading
import math
import queue
import sys
import os
import cv2

sys.path.append(os.path.dirname(os.path.abspath(__file__)))

from utils import calculate_global_yaw, calculate_local_yaw, get_distance
from constant import *
from waypoint import Waypoint
from linkedlist import DoublyLinkedList

from pid_controller import PIDController
from queue import Queue
from rclpy.node import Node
from copy import deepcopy
from mavros_msgs.srv import CommandBool, SetMode, CommandTOL
from geometry_msgs.msg import PoseStamped, Vector3, Point
from sensor_msgs.msg import NavSatFix, NavSatStatus
from mavros_msgs.msg import GlobalPositionTarget, PositionTarget
from std_msgs.msg import String, Header, Float64
from location_msgs.msg import PanelBox
from copy import deepcopy
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy

class DroneController(Node):

    def __init__(self):
        super().__init__('drone_controller')

        self.gps_fix = None
        self.local_pose = None
        self.yaw = 0.0
        self.rel_alt = 0.0

        self.waypoint_id = 0

        self.frame = None

        self.prev_local_wp: Waypoint = None
        self.prev_type = None

        self.panel_found = 0
        self.panel_loss = 0
        self.panel_detected = False
        self.panel_pos = None
        self.task_finished = False

        self.has_takeoff = False
        self.has_land = False

        self.last_sent_waypoint = None

        self.mutex = threading.Lock()
        self.point_mutex = threading.Lock()

        self.wp_list = DoublyLinkedList()

        self.arming_client = self.create_client(CommandBool, '/mavros/cmd/arming')
        self.mode_client = self.create_client(SetMode, '/mavros/set_mode')
        self.takeoff_client = self.create_client(CommandTOL, '/mavros/cmd/takeoff')
        self.land_client = self.create_client(CommandTOL, '/mavros/cmd/land')

        self.pose_publisher = self.create_publisher(PoseStamped, '/mavros/setpoint_position/local', 10)
        self.global_point_publisher = self.create_publisher(GlobalPositionTarget, '/mavros/setpoint_raw/global', 10)
        self.local_point_publisher = self.create_publisher(PositionTarget, '/mavros/setpoint_raw/local', 10)

        qos_profile = QoSProfile(reliability=ReliabilityPolicy.BEST_EFFORT, history=HistoryPolicy.KEEP_LAST, depth=10)
        self.global_pos_sub = self.create_subscription(NavSatFix, '/mavros/global_position/global', self.global_pos_callback, qos_profile)
        self.local_pos_sub = self.create_subscription(PoseStamped, '/mavros/local_position/pose', self.local_pos_callback, qos_profile)
        self.yaw_sub = self.create_subscription(Float64, '/mavros/global_position/compass_hdg', self.yaw_callback, qos_profile)
        self.rel_alt_sub = self.create_subscription(Float64, '/mavros/global_position/rel_alt', self.rel_alt_callback, qos_profile)
        self.panel_sub = self.create_subscription(PanelBox, '/panel_box', self.panel_callback, 10)

        while not self.arming_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Arming service not available, waiting...')
        
        while not self.mode_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Mode service not available, waiting...')
        
        self.get_logger().info('All services are available, ready to arm and take off.')

        for _ in range(5):
            self.init_pose()
            res = self.set_mode('OFFBOARD')
            if res:
                break
            time.sleep(3)

        # 120.6354505577117,31.31037246991431,0 
        # 120.6358228811144,31.3102331475062,0 

        self.base_altitude = self.gps_fix.altitude
        
        self.add_to_list(TYPE_NAVIGATION, MISSION_NONE, FRAME_GLOBAL_INT, 0, 0, 1, 31.31037246991431, 120.6354505577117, self.base_altitude + 15)
        self.add_to_list(TYPE_NAVIGATION, MISSION_NONE, FRAME_GLOBAL_INT, 0, 0, 0, 31.3102331475062, 120.6358228811144, self.base_altitude + 15)

        self.waypoint_timer = self.create_timer(PUBLISH_FREQUENCY, self.process_waypoint)  # Publish pose at 10Hz

        self.arm_drone()

    def init_pose(self):
        waypoint = PoseStamped()
        waypoint.header = Header()
        waypoint.header.stamp = self.get_clock().now().to_msg()
        waypoint.pose.position.x = 0.0
        waypoint.pose.position.y = 0.0
        waypoint.pose.position.z = 0.0
        waypoint.pose.orientation.x = 0.0
        waypoint.pose.orientation.y = 0.0
        waypoint.pose.orientation.z = 0.0
        waypoint.pose.orientation.w = 1.0

        for _ in range(30):
            self.pose_publisher.publish(waypoint)
            time.sleep(0.05)

    def global_pos_callback(self, msg: NavSatFix):
        # self.get_logger().info(f'{msg}')
        self.gps_fix = msg

    def local_pos_callback(self, msg: PoseStamped):
        self.local_pose = msg

    def yaw_callback(self, msg: Float64):
        self.yaw = msg.data
    
    def rel_alt_callback(self, msg: Float64):
        self.rel_alt = msg.data

    def panel_callback(self, msg):
        if msg.x == 0 and msg.y == 0 and msg.w == 0 and msg.h == 0:
            if not self.panel_detected:
                self.panel_pos = None
            self.panel_loss += 1
            self.panel_found = 0
            if self.panel_loss == 20:
                self.panel_detected = False
                self.panel_loss = 0
                self.panel_pos = None
        else:
            if self.panel_detected:
                self.panel_pos = msg
            self.panel_found += 1
            self.panel_loss = 0
            if self.panel_found == 5:
                self.panel_found = 0
                self.panel_detected = True
                self.panel_pos = msg

    def add_to_list(self, type, mission, frame, vel_x, vel_y, vel_z, pos_x, pos_y, pos_z, yaw=float('nan'), yaw_rate=0.0):
        id = self.waypoint_id
        waypoint = Waypoint(id, type, mission, frame, vel_x, vel_y, vel_z, pos_x, pos_y, pos_z, yaw, yaw_rate)
        self.wp_list.insert_tail(waypoint)
        self.waypoint_id += 1

    def takeoff(self):
        if self.gps_fix == None:
            self.get_logger().warn('Takeoff failed: gps message was invalid')
            return
        wp = Waypoint(0, TYPE_TAKEOFF, MISSION_NONE, FRAME_GLOBAL_INT, 0, 0, 1, self.gps_fix.latitude, self.gps_fix.longitude, self.base_altitude + 15)
        self.goto_global_waypoint(wp)

    def execute_task(self) -> bool:
        if not self.panel_detected:
            return
        self.mutex.acquire()
        panel_pos = deepcopy(self.panel_pos)
        self.mutex.release()
        thres_y = 70
        thres_x = 100
        if panel_pos.y > thres_y or panel_pos.y < -1 * thres_y:
            coefficient = 1
            if panel_pos.y < 0:
                coefficient = -1
            body_wp = Waypoint(-1, TYPE_BODY_MOVE, MISSION_NONE, FRAME_BODY_NED, 0.3*coefficient, 0, 0, 0.3, 0, 0)
            self.goto_local_waypoint(body_wp)
            return False
        elif panel_pos.x > thres_x or panel_pos.x < -1 * thres_x:
            coefficient = 1
            if panel_pos.x < 0:
                coefficient = -1
            body_wp = Waypoint(-1, TYPE_BODY_MOVE, MISSION_NONE, FRAME_BODY_NED, 0, 0.3*coefficient, 0, 0, 0.3, 0)
            self.goto_local_waypoint(body_wp)
            return False
        elif panel_pos.w < IMAGE_WIDTH/2 or panel_pos.h < IMAGE_HEIGHT/2:
            body_wp = Waypoint(-1, TYPE_BODY_MOVE, MISSION_NONE, FRAME_BODY_NED, 0, 0, -0.5, 0, 0, 0.5)
            self.goto_local_waypoint(body_wp)
            return False
        else:
            self.get_logger().info("cleanning...")
            # TODO: CLEAN
            return True

    def process_waypoint(self):
        if self.has_land:
            return
        
        task_executed = False
        if self.panel_detected and not self.task_finished and self.last_sent_waypoint != None and \
           self.last_sent_waypoint.type == TYPE_NAVIGATION:
            if not self.execute_task():
                return
            self.wp_list.insert_head(self.last_sent_waypoint)
            self.task_finished = True
            task_executed = True
            self.get_logger().info("Task finished")
            
        if self.last_sent_waypoint == None or self.reached_target() or task_executed:
            if self.last_sent_waypoint != None and self.last_sent_waypoint.type == TYPE_TAKEOFF:
                self.has_takeoff = True

            if not self.has_takeoff:
                self.takeoff()
                return

            if self.wp_list.length > 0:
                if self.gps_fix == None:
                    self.get_logger().warn('Process waypoint failed: gps message was invalid')
                    return

                self.mutex.acquire()
                latitude = self.gps_fix.latitude
                longitude = self.gps_fix.longitude
                altitude = self.gps_fix.altitude
                self.mutex.release()
                
                wp: Waypoint = self.wp_list.head.waypoint
                self.wp_list.display(self.get_logger())
                if wp.type == TYPE_NAVIGATION:
                    yaw = calculate_global_yaw(latitude, longitude, wp.latitude, wp.longitude)
                    if abs(yaw - self.yaw) <= THRESHOLD_YAW:
                        self.wp_list.pop_head()
                        self.goto_global_waypoint(wp)
                    else:
                        if abs(yaw - self.yaw) > THRESHOLD_YAW:
                            rotate_wp: Waypoint = deepcopy(wp)
                            rotate_wp.latitude = latitude
                            rotate_wp.longitude = longitude
                            rotate_wp.yaw = yaw
                            yaw_diff = yaw - self.yaw
                            rotate_wp.yaw_rate = -1 * DEFAULT_YAW_RATE if yaw_diff > 0 else DEFAULT_YAW_RATE
                            rotate_wp.type = TYPE_ROTATE
                            rotate_wp.mission = MISSION_NONE
                            self.wp_list.insert_head(rotate_wp)

                        # if abs(altitude - wp.altitude) > THRESHOLD_ALTITUDE:
                        #     vertical_wp = deepcopy(wp)
                        #     vertical_wp.type = TYPE_VERTICAL_MOVE
                        #     vertical_wp.mission = MISSION_NONE
                        #     vertical_wp.longitude = longitude
                        #     vertical_wp.latitude = latitude
                        #     vertical_wp.altitude = wp.altitude
                        #     self.wp_list.insert_head(vertical_wp)
                else:
                    self.goto_global_waypoint(wp)
                    self.wp_list.pop_head()
            else:
                self.land()
        else:
            self.goto_global_waypoint(self.last_sent_waypoint)

    def goto_global_waypoint(self, waypoint: Waypoint):
        point = GlobalPositionTarget()
        point.header = Header()
        point.header.stamp = self.get_clock().now().to_msg()
        point.coordinate_frame = waypoint.frame   
        if waypoint.velocity != None:
            point.velocity = waypoint.velocity
        point.latitude = waypoint.latitude
        point.longitude = waypoint.longitude
        point.altitude = waypoint.altitude

        self.setup_params(point, waypoint)

        self.global_point_publisher.publish(point)

        self.last_sent_waypoint = waypoint

    
    def goto_local_waypoint(self, waypoint: Waypoint):
        point = PositionTarget()
        point.header = Header()
        point.header.stamp = self.get_clock().now().to_msg()   
        point.coordinate_frame = waypoint.frame 
        if waypoint.velocity != None:
            point.velocity = waypoint.velocity
        point.position = waypoint.position

        self.setup_params(point, waypoint)
            
        self.local_point_publisher.publish(point)

    def setup_params(self, point, waypoint):
        point.type_mask = IGNORE_YAW | IGNORE_AFX | IGNORE_AFY | IGNORE_AFZ
        if waypoint.type == TYPE_ROTATE:
            point.yaw_rate = waypoint.yaw_rate
            point.type_mask |= IGNORE_VX | IGNORE_VY | IGNORE_VZ
        elif waypoint.type == TYPE_TAKEOFF or waypoint.type == TYPE_LAND or waypoint.type == TYPE_VERTICAL_MOVE:
            point.type_mask |= IGNORE_VX | IGNORE_VY | IGNORE_YAW_RATE
        elif waypoint.type == TYPE_STAND:
            point.type_mask |= IGNORE_VX | IGNORE_VY | IGNORE_VZ | IGNORE_YAW_RATE

    def reached_target(self) -> bool:
        reached = True

        waypoint: Waypoint = self.last_sent_waypoint
        
        self.point_mutex.acquire()
        if waypoint.type == TYPE_ROTATE:
            reached &= abs(waypoint.yaw - self.yaw) <= THRESHOLD_YAW
        elif waypoint.type == TYPE_NAVIGATION or waypoint.type == TYPE_HORIZONTAL_MOVE:
            reached &= abs(waypoint.latitude - self.gps_fix.latitude) <= THRESHOLD_LATITUDE
            reached &= abs(waypoint.longitude - self.gps_fix.longitude) <= THRESHOLD_LONGITUDE
        elif waypoint.type == TYPE_TAKEOFF or waypoint.type == TYPE_VERTICAL_MOVE:
            reached &= abs(waypoint.altitude - self.gps_fix.altitude) <= THRESHOLD_ALTITUDE
        elif waypoint.type == TYPE_LAND:
            reached &= abs(self.rel_alt) <= 0
        else:
            reached &= abs(waypoint.latitude - self.gps_fix.latitude) <= THRESHOLD_LATITUDE
            reached &= abs(waypoint.longitude - self.gps_fix.longitude) <= THRESHOLD_LONGITUDE
            reached &= abs(waypoint.altitude - self.gps_fix.altitude) <= THRESHOLD_ALTITUDE
        self.point_mutex.release()

        if reached:
            self.get_logger().info(f'Drone has reached the {waypoint.type} target')
            self.get_logger().info(f'current {self.gps_fix, self.rel_alt, self.yaw}, target {waypoint.latitude, waypoint.longitude, waypoint.altitude, waypoint.yaw}')
        # else:
        #     self.get_logger().info('Drone does not reached the target')
        #     self.get_logger().info(f'current {self.gps_fix, self.rel_alt, self.yaw}, target {waypoint.latitude, waypoint.longitude, waypoint.altitude, waypoint.yaw}')
        return reached

    def land(self):
        self.get_logger().info('Landing...')
        req = CommandTOL.Request()
        req.latitude = self.gps_fix.latitude
        req.longitude = self.gps_fix.longitude
        future = self.land_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result().success:
            self.get_logger().info('Drone landed successfully.')
        else:
            self.get_logger().error('Failed to land.')

    def arm_drone(self):
        self.get_logger().info('Arming drone...')
        req = CommandBool.Request()
        req.value = True
        future = self.arming_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result().success:
            self.get_logger().info('Drone armed successfully.')
        else:
            self.get_logger().error('Failed to arm drone.')

    def disarm_drone(self):
        self.get_logger().info('Disarming drone...')
        req = CommandBool.Request()
        req.value = False
        future = self.arming_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result().success:
            self.get_logger().info('Drone disarmed successfully.')
        else:
            self.get_logger().error('Failed to disarm drone.')

    def set_mode(self, mode) -> bool:
        self.get_logger().info(f'Setting mode to {mode}...')
        req = SetMode.Request()
        req.custom_mode = mode
        future = self.mode_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result().mode_sent:
            self.get_logger().info(f'Mode set to {mode} successfully.')
            return True
        else:
            self.get_logger().error(f'Failed to set mode to {mode}.')
            return False

def main(args=None):
    rclpy.init(args=args)

    drone_controller = DroneController()

    rclpy.spin(drone_controller)

    rclpy.shutdown()

if __name__ == '__main__':
    main()
