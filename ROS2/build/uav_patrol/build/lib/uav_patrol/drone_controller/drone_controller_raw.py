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
from pid_controller import PIDController
from queue import Queue
from rclpy.node import Node
from copy import deepcopy
from mavros_msgs.srv import CommandBool, SetMode, CommandTOLLocal
from geometry_msgs.msg import PoseStamped, Vector3, Point
from sensor_msgs.msg import NavSatFix, NavSatStatus
from mavros_msgs.msg import GlobalPositionTarget, PositionTarget
from std_msgs.msg import String, Header, Float64
from copy import deepcopy
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy


GLOBAL_WAYPOINT     = 0
LOCAL_WAYPOINT      = 1

MISSION_TAKEOFF     = 0
MISSION_WAYPOINT    = 1
MISSION_LAND        = 2
MISSION_ROTATE      = 3
MISSION_CLIMB       = 4
MISSION_STAND       = 5
MISSION_TRANSLATION = 6

FRAME_GLOBAL_INT            = 5
FRAME_GLOBAL_REL_ALT        = 6
FRAME_GLOBAL_TERRAIN_ALT    = 11
FRAME_LOCAL_NED         = 1
FRAME_LOCAL_OFFSET_NED  = 7
FRAME_BODY_NED          = 8
FRAME_BODY_OFFSET_NED   = 9

IGNORE_LATITUDE = 1	
IGNORE_LONGITUDE = 2
IGNORE_ALTITUDE = 4
IGNORE_VX = 8	
IGNORE_VY = 16
IGNORE_VZ = 32
IGNORE_AFX = 64	
IGNORE_AFY = 128
IGNORE_AFZ = 256
FORCE = 512	
IGNORE_YAW = 1024
IGNORE_YAW_RATE = 2048

PUBLISH_FREQUENCY   = 0.1
FRAME_PER_SECOND    = 5

THRESHOLD_POSITION  = 1
THRESHOLD_LATITUDE  = 0.000001
THRESHOLD_LONGITUDE = 0.000001
THRESHOLD_ALTITUDE  = 5
THRESHOLD_YAW       = 5

IMAGE_WIDTH         = 1920
IMAGE_HEIGHT        = 1080
DIRECTORY_PREFIX    = '/home/x650/UAV/USB_CAM/'

class Waypoint():
    def __init__(self, type, mission, frame, vel_x, vel_y, vel_z, pos_x, pos_y, pos_z, yaw=float('nan'), yaw_rate=0.0):
        self.type = type
        self.mission = mission
        self.frame = frame

        self.velocity = None

        if vel_x != 0 or vel_y != 0 or vel_z != 0:
            vel = Vector3()
            vel.x = float(vel_x)
            vel.y = float(vel_y)
            vel.z = float(vel_z)
            self.velocity = vel
        
        if type == GLOBAL_WAYPOINT:
            self.latitude = float(pos_x)
            self.longitude = float(pos_y)
            self.altitude = float(pos_z)
        elif type == LOCAL_WAYPOINT:
            pos = Point()
            pos.x = float(pos_x)
            pos.y = float(pos_y)
            pos.z = float(pos_z)
            self.position = pos

        self.yaw = yaw
        self.yaw_rate = yaw_rate

class DroneController(Node):

    def __init__(self):
        super().__init__('drone_controller')

        self.gps_fix = None
        self.local_pose = None
        self.yaw = 0.0
        self.rel_alt = 0.0

        self.frame = None

        self.yaw_reached_counter = 0
        self.stand_reached_counter = 0

        self.prev_global_wp: Waypoint = None
        self.prev_local_wp: Waypoint = None
        self.prev_type = None

        self.point_mutex = threading.Lock()

        self.wp_queue = queue.Queue()

        self.yaw_rate_controller = PIDController()

        self.arming_client = self.create_client(CommandBool, '/mavros/cmd/arming')
        self.mode_client = self.create_client(SetMode, '/mavros/set_mode')

        self.pose_publisher = self.create_publisher(PoseStamped, '/mavros/setpoint_position/local', 10)
        self.global_point_publisher = self.create_publisher(GlobalPositionTarget, '/mavros/setpoint_raw/global', 10)
        self.local_point_publisher = self.create_publisher(PositionTarget, '/mavros/setpoint_raw/local', 10)

        qos_profile = QoSProfile(reliability=ReliabilityPolicy.BEST_EFFORT, history=HistoryPolicy.KEEP_LAST, depth=10)
        self.global_pos_sub = self.create_subscription(NavSatFix, '/mavros/global_position/global', self.global_pos_callback, qos_profile)
        self.local_pos_sub = self.create_subscription(PoseStamped, '/mavros/local_position/pose', self.local_pos_callback, qos_profile)
        self.yaw_sub = self.create_subscription(Float64, '/mavros/global_position/compass_hdg', self.yaw_callback, qos_profile)
        self.rel_alt_sub = self.create_subscription(Float64, '/mavros/global_position/rel_alt', self.rel_alt_callback, qos_profile)

        while not self.arming_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Arming service not available, waiting...')
        
        while not self.mode_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Mode service not available, waiting...')
        
        self.get_logger().info('All services are available, ready to arm and take off.')

        res = self.init_camera()
        if not res:
            return

        self.init_pose()
        self.set_mode('OFFBOARD')

        # 120.6353107229669,31.31042380244442,0 
        # 120.6359937333954,31.31052009867697,0 
        # 120.6360121711551,31.31043048899635,0 
        # 120.635327504867,31.31033174015581,0 
        # 120.6353443654622,31.31024197255429,0 
        # 120.6360313712927,31.31034231571467,0  

        self.add_to_queue(Waypoint(GLOBAL_WAYPOINT, MISSION_TAKEOFF, FRAME_GLOBAL_REL_ALT, 0, 0, 1, 31.31042380244442, 120.6353107229669, 30))
        self.add_to_queue(Waypoint(GLOBAL_WAYPOINT, MISSION_WAYPOINT, FRAME_GLOBAL_REL_ALT, 0, 0, 0, 31.31052009867697, 120.6359937333954, 30))
        self.add_to_queue(Waypoint(GLOBAL_WAYPOINT, MISSION_WAYPOINT, FRAME_GLOBAL_REL_ALT, 0, 0, 0, 31.31043048899635, 120.6360121711551, 30))
        self.add_to_queue(Waypoint(GLOBAL_WAYPOINT, MISSION_WAYPOINT, FRAME_GLOBAL_REL_ALT, 0, 0, 0, 31.31033174015581, 120.635327504867, 30))
        self.add_to_queue(Waypoint(GLOBAL_WAYPOINT, MISSION_WAYPOINT, FRAME_GLOBAL_REL_ALT, 0, 0, 0, 31.31024197255429, 120.6353443654622, 30))
        self.add_to_queue(Waypoint(GLOBAL_WAYPOINT, MISSION_WAYPOINT, FRAME_GLOBAL_REL_ALT, 0, 0, 0, 31.31034231571467, 120.6360313712927, 30))
        self.add_to_queue(Waypoint(GLOBAL_WAYPOINT, MISSION_LAND, FRAME_GLOBAL_REL_ALT, 0, 0, -1, 31.31034231571467, 120.6360313712927, 0))

        self.waypoint_timer = self.create_timer(PUBLISH_FREQUENCY, self.goto_waypoint)  # Publish pose at 10Hz
        
        self.capture_flag = True

        for _ in range(3):
            res = self.arm_drone()
            if not res:
                time.sleep(2)
            else:
                break

    def global_pos_callback(self, msg: NavSatFix):
        self.gps_fix = msg

    def local_pos_callback(self, msg: PoseStamped):
        self.local_pose = msg

    def yaw_callback(self, msg: Float64):
        self.yaw = msg.data
    
    def rel_alt_callback(self, msg: Float64):
        self.rel_alt = msg.data

    def add_to_queue(self, wp: Waypoint):
        length = self.wp_queue.qsize()
        if length > 0:
            top: Waypoint = self.wp_queue.queue[length - 1]
            if top.type == wp.type and wp.type == GLOBAL_WAYPOINT:
                if wp.altitude != top.altitude:
                    climb_wp = deepcopy(top)
                    climb_wp.altitude = wp.altitude
                    climb_wp.mission = MISSION_CLIMB
                    self.wp_queue.put(climb_wp)

                if wp.mission == MISSION_WAYPOINT:
                    yaw = calculate_global_yaw(top.latitude, top.longitude, wp.latitude, wp.longitude)
                    rotate_wp: Waypoint = deepcopy(top)
                    if yaw < 0:
                        rotate_wp.yaw = 360 + yaw
                    else:
                        rotate_wp.yaw = yaw
                    rotate_wp.yaw_rate = 0.3
                    rotate_wp.mission = MISSION_ROTATE
                    self.wp_queue.put(rotate_wp)
                    wp.yaw = yaw
                
                distance = get_distance(top.latitude, top.longitude, wp.latitude, wp.longitude)
                num_waypoints = int(distance/4) - 1
                for i in range(1, num_waypoints + 1):
                    lat = top.latitude + i * (wp.latitude - top.latitude) / (num_waypoints + 1)
                    lon = top.longitude + i * (wp.longitude - top.longitude) / (num_waypoints + 1)
                    new_wp = deepcopy(wp)
                    new_wp.latitude = lat
                    new_wp.longitude = lon
                    new_wp.mission = MISSION_WAYPOINT
                    self.wp_queue.put(new_wp)
            self.wp_queue.put(wp)

        elif wp.type == GLOBAL_WAYPOINT and self.gps_fix != None:
            new_wp = deepcopy(wp)
            wp.latitude = self.gps_fix.latitude
            wp.longitude = self.gps_fix.longitude
            self.wp_queue.put(wp)
            new_wp.mission == MISSION_TRANSLATION
            self.wp_queue.put(new_wp)
                
    def init_camera(self) -> bool:
        self.cap = cv2.VideoCapture(0)

        if not self.cap.isOpened():
            self.get_logger().info("Can't open the camera")
            return False

        self.cap.set(cv2.CAP_PROP_FRAME_WIDTH, IMAGE_WIDTH)
        self.cap.set(cv2.CAP_PROP_FRAME_HEIGHT, IMAGE_HEIGHT)
        self.cap.set(cv2.CAP_PROP_FPS, FRAME_PER_SECOND)

        return True

    def capture(self):
        while self.capture_flag:
            ret, frame = self.cap.read()
            if not ret:
                self.get_logger().info("Read frame failed")
                return

            self.frame = frame

    def write_frame(self):
        timestamp = time.time()
        if self.gps_fix is not None:
            f = open(DIRECTORY_PREFIX + str(timestamp) + ".txt", "w")
            f.write(f"timestamp: {timestamp} \n")
            self.point_mutex.acquire()
            f.write(f"latitude: {self.gps_fix.latitude} \n")
            f.write(f"longitude: {self.gps_fix.longitude} \n")
            f.write(f"AMSL altitude: {self.gps_fix.altitude} \n")
            f.write(f"REL altitude: {self.rel_alt} \n")
            cv2.imwrite(DIRECTORY_PREFIX + str(timestamp) + ".jpg", self.frame)
            self.point_mutex.release()
            f.close()
            self.get_logger().info('image saved')

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

        for i in range(20):
            self.pose_publisher.publish(waypoint)
            time.sleep(0.05)

    def reached_target(self, isStand: bool) -> bool:
        reached = True

        if isStand:
            self.stand_reached_counter += 1
            if  self.stand_reached_counter == 3 / PUBLISH_FREQUENCY:
                self.write_frame()
                reached = False
            elif  self.stand_reached_counter == 4 / PUBLISH_FREQUENCY:
                self.write_frame()
                reached = False
            elif self.stand_reached_counter == 5 / PUBLISH_FREQUENCY:
                self.write_frame()
                self.stand_reached_counter = 0
            else:
                reached = False
            # self.get_logger().info(f"{time.time()}")
            return reached
        
        self.point_mutex.acquire()
        if self.prev_type == LOCAL_WAYPOINT:
            if self.local_pose == None:
                reached = False
            elif self.prev_local_wp.mission == MISSION_ROTATE:
                reached &= abs(self.prev_local_wp.yaw - self.yaw) <= THRESHOLD_YAW
            elif self.prev_local_wp.mission == MISSION_WAYPOINT or self.prev_local_wp.mission == MISSION_TRANSLATION:
                reached &= abs(self.prev_local_wp.position.x - self.local_pose.pose.position.x) <= THRESHOLD_POSITION
                reached &= abs(self.prev_local_wp.position.y - self.local_pose.pose.position.y) <= THRESHOLD_POSITION
            elif self.prev_local_wp.mission == MISSION_TAKEOFF or self.prev_local_wp.mission == MISSION_CLIMB or self.prev_local_wp == MISSION_LAND:
                reached &= abs(self.prev_local_wp.position.z - self.local_pose.pose.position.z) <= THRESHOLD_POSITION
            else:
                reached &= abs(self.prev_local_wp.position.x - self.local_pose.pose.position.x) <= THRESHOLD_POSITION
                reached &= abs(self.prev_local_wp.position.y - self.local_pose.pose.position.y) <= THRESHOLD_POSITION
                reached &= abs(self.prev_local_wp.position.z - self.local_pose.pose.position.z) <= THRESHOLD_POSITION
        elif self.prev_type == GLOBAL_WAYPOINT:
            if self.gps_fix == None:
                reached = False
            elif self.prev_global_wp.mission == MISSION_ROTATE:
                reached &= abs(self.prev_global_wp.yaw - self.yaw) <= THRESHOLD_YAW
            elif self.prev_global_wp.mission == MISSION_WAYPOINT or self.prev_global_wp.mission == MISSION_TRANSLATION:
                reached &= abs(self.prev_global_wp.latitude - self.gps_fix.latitude) <= THRESHOLD_LATITUDE
                reached &= abs(self.prev_global_wp.longitude - self.gps_fix.longitude) <= THRESHOLD_LONGITUDE
            elif self.prev_global_wp.mission == MISSION_TAKEOFF or self.prev_global_wp.mission == MISSION_CLIMB or self.prev_global_wp == MISSION_LAND:
                reached &= abs(self.prev_global_wp.altitude - self.rel_alt) <= THRESHOLD_ALTITUDE
            else:
                reached &= abs(self.prev_global_wp.latitude - self.gps_fix.latitude) <= THRESHOLD_LATITUDE
                reached &= abs(self.prev_global_wp.longitude - self.gps_fix.longitude) <= THRESHOLD_LONGITUDE
                reached &= abs(self.prev_global_wp.altitude - self.rel_alt) <= THRESHOLD_ALTITUDE
        self.point_mutex.release()

        if reached:
            self.get_logger().info('Drone has reached the target')
            self.get_logger().info(f'current {self.gps_fix, self.rel_alt, self.yaw}, target {self.prev_global_wp.latitude, self.prev_global_wp.longitude, self.prev_global_wp.altitude, self.prev_global_wp.yaw}')
        # else:
        #     self.get_logger().info('Drone does not reached the target')
        #     self.get_logger().info(f'current {self.yaw}, target {self.prev_global_wp.yaw}')

        return reached

    def arm_drone(self) -> bool:
        self.get_logger().info('Arming drone...')
        req = CommandBool.Request()
        req.value = True
        future = self.arming_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result().success:
            self.get_logger().info('Drone armed successfully.')
            return True
        else:
            self.get_logger().error('Failed to arm drone.')
            return False

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

    def set_mode(self, mode):
        self.get_logger().info(f'Setting mode to {mode}...')
        req = SetMode.Request()
        req.custom_mode = mode
        future = self.mode_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result().mode_sent:
            self.get_logger().info(f'Mode set to {mode} successfully.')
        else:
            self.get_logger().error(f'Failed to set mode to {mode}.')

    def goto_waypoint(self):
        if not self.wp_queue.empty():
            wp: Waypoint = self.wp_queue.queue[0]
            if wp.mission == MISSION_ROTATE:
                yaw_diff = wp.yaw - self.yaw
                if yaw_diff > 0:
                    wp.yaw_rate = -1 * abs(wp.yaw_rate)
                else:
                    wp.yaw_rate = abs(wp.yaw_rate)
            if wp.type == LOCAL_WAYPOINT and (self.prev_local_wp == None or self.reached_target(self.prev_local_wp.mission == MISSION_STAND)):
                if wp.mission == MISSION_WAYPOINT and self.prev_local_wp.mission != MISSION_STAND:
                    stand_wp = deepcopy(self.prev_local_wp)
                    stand_wp.mission = MISSION_STAND
                    self.goto_local_point(stand_wp)
                    self.prev_local_wp = stand_wp
                else:
                    self.goto_local_point(wp)
                    self.prev_local_wp = self.wp_queue.get()
                self.prev_type = LOCAL_WAYPOINT
            elif wp.type == GLOBAL_WAYPOINT and (self.prev_global_wp == None or self.reached_target(self.prev_global_wp.mission == MISSION_STAND)):
                if wp.mission == MISSION_WAYPOINT and self.prev_global_wp.mission != MISSION_STAND:
                    stand_wp = deepcopy(self.prev_global_wp)
                    stand_wp.mission = MISSION_STAND
                    self.goto_global_point(stand_wp)
                    self.prev_global_wp = stand_wp
                else:
                    self.goto_global_point(wp)
                    self.prev_global_wp = self.wp_queue.get()
                self.prev_type = GLOBAL_WAYPOINT
            else:       
                if self.prev_type == LOCAL_WAYPOINT and self.prev_local_wp != None:
                    self.goto_local_point(self.prev_local_wp)
                elif self.prev_type == GLOBAL_WAYPOINT and self.prev_global_wp != None:
                    self.goto_global_point(self.prev_global_wp)
        # elif self.gps_fix != None:
        #     lat = self.gps_fix.latitude
        #     lon = self.gps_fix.longitude
        #     land_wp = Waypoint(GLOBAL_WAYPOINT, MISSION_LAND, FRAME_GLOBAL_REL_ALT, 0, 0, -1, lat, lon, 0)
        #     self.goto_global_point(land_wp)

    def goto_global_point(self, waypoint: Waypoint):
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
    
    def goto_local_point(self, waypoint: Waypoint):
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
        if waypoint.mission == MISSION_ROTATE:
            point.yaw_rate = waypoint.yaw_rate
            point.type_mask |= IGNORE_VX | IGNORE_VY | IGNORE_VZ
        elif waypoint.mission == MISSION_TAKEOFF or waypoint.mission == MISSION_LAND or waypoint.mission == MISSION_CLIMB:
            point.type_mask |= IGNORE_VX | IGNORE_VY | IGNORE_YAW_RATE
        elif waypoint.mission == MISSION_STAND:
            point.type_mask |= IGNORE_VX | IGNORE_VY | IGNORE_VZ | IGNORE_YAW_RATE

def main(args=None):
    rclpy.init(args=args)

    drone_controller = DroneController()

    capture_thread = threading.Thread(target=drone_controller.capture)
    capture_thread.start()

    rclpy.spin(drone_controller)

    drone_controller.capture_flag = False
    drone_controller.cap.release()

    rclpy.shutdown()

if __name__ == '__main__':
    main()
