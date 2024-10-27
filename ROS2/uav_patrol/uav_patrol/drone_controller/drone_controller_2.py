import rclpy
import time
import threading
import math
import asyncio
import websockets
import json

from queue import Queue
from geopy.distance import geodesic
from rclpy.node import Node
from mavros_msgs.srv import CommandBool, SetMode, CommandTOLLocal, WaypointPush
from mavros_msgs.msg import Waypoint, WaypointList
from geometry_msgs.msg import PoseStamped
from std_msgs.msg import String
from copy import deepcopy
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy, qos_profile_sensor_data
from sensor_msgs.msg import NavSatFix, NavSatStatus


MAV_CMD_NAV_WAYPOINT        = 16
MAV_CMD_NAV_LAND            = 21
MAV_CMD_NAV_TAKEOFF         = 22
MAV_CMD_NAV_TAKEOFF_LOCAL   = 24

class DroneController(Node):

    def __init__(self):
        super().__init__('drone_controller')
        self.arming_client = self.create_client(CommandBool, '/mavros/cmd/arming')
        self.mode_client = self.create_client(SetMode, '/mavros/set_mode')
        self.mission_client = self.create_client(WaypointPush, '/mavros/mission/push')

        self.pose_publisher = self.create_publisher(PoseStamped, '/mavros/setpoint_position/local', 10)

        self.gps_subscriber = self.create_subscription(NavSatFix, "/mavros/global_position/global", self.gps_callback, qos_profile_sensor_data)
        # self.mission_subscriber = self.create_subscription(WaypointList, '/mavros/mission/waypoints', self.mission_callback, 10)

        while not self.arming_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Arming service not available, waiting...')
        
        while not self.mode_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Mode service not available, waiting...')

        while not self.mission_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Mission service not available, waiting...')
        
        self.get_logger().info('All services are available, ready to arm and start mission')

        self.mission_index = 0
        self.gps_initialized = False
        self.gps_count = 0
        self.init_gps = None
        self.armed = False
        self.mutex = threading.Lock()

        while self.arm_drone() == False:
            time.sleep(3)

        time.sleep(1)
            
        self.set_mode('AUTO.MISSION')

        self.waypoints = []
        self.init_mission()
        self.push_mission(self.waypoints)

    def gps_callback(self, msg: NavSatFix):
        # self.get_logger().info(f"{self.gps_count}")
        if self.gps_initialized == False and self.armed == True:
            self.init_gps = deepcopy(msg)
            self.gps_initialized = True
            # self.gps_count += 1
            # if self.gps_count == 50:
            #     self.init_gps = deepcopy(msg)
            #     self.gps_initialized = True

    def mission_callback(self, msg: WaypointList):
       self.push_mission(msg.waypoints)

    def init_mission(self):
        wp0 = Waypoint(frame=Waypoint.FRAME_GLOBAL_RELATIVE_ALT_INT, command=MAV_CMD_NAV_TAKEOFF, is_current=True, 
                       autocontinue=True, param1=0.0, param3=2.0, param4=float('nan'), x_lat=31.31054100212869, y_long=120.6359935433749, z_alt=3.0)
        wp1 = Waypoint(frame=Waypoint.FRAME_BODY_OFFSET_NED, command=MAV_CMD_NAV_WAYPOINT, is_current=False, 
                       autocontinue=True, param4=float('nan'), x_lat=3.0, y_long=3.0, z_alt=3.0)
        # wp1 = Waypoint(frame=Waypoint.FRAME_GLOBAL_RELATIVE_ALT_INT, command=MAV_CMD_NAV_WAYPOINT, is_current=False, 
        #                autocontinue=True, param4=float('nan'), x_lat=31.3103428, y_long=120.6356525, z_alt=3.0)
        # wp2 = Waypoint(frame=Waypoint.FRAME_GLOBAL_RELATIVE_ALT_INT, command=MAV_CMD_NAV_WAYPOINT, is_current=False, 
        #                autocontinue=True, param4=float('nan'), x_lat=31.3102927, y_long=120.6358282, z_alt=3.0)
        # wp3 = Waypoint(frame=Waypoint.FRAME_GLOBAL_RELATIVE_ALT_INT, command=MAV_CMD_NAV_WAYPOINT, is_current=False, 
        #                autocontinue=True, param4=float('nan'), x_lat=31.3104184, y_long=120.6358413, z_alt=3.0)
        # wp4 = Waypoint(frame=Waypoint.FRAME_GLOBAL_RELATIVE_ALT_INT, command=MAV_CMD_NAV_LAND, is_current=False, 
        #                autocontinue=True, param4=float('nan'), x_lat=31.3104184, y_long=120.6358413, z_alt=0.0)
       
        self.waypoints.append(wp0)
        self.waypoints.append(wp1)
        # self.waypoints.append(wp2)
        # self.waypoints.append(wp3)
        # self.waypoints.append(wp4)

    def get_waypoint(self, frame, command, is_current, autocontinue, x, y, z):
        origin_point = (self.init_gps.latitude, self.init_gps.longitude)

        lon_direction = geodesic(meters=x).destination(origin_point, bearing=90) 
        lat_direction = geodesic(meters=y).destination((lon_direction.latitude, lon_direction.longitude), 0) 

        new_lat = lat_direction.latitude
        new_lon = lat_direction.longitude
        new_alt = 0.0
 
        if frame == Waypoint.FRAME_GLOBAL:
            new_alt = self.init_gps.altitude + z
        elif frame == Waypoint.FRAME_GLOBAL_REL_ALT:
            new_alt = z
        
        return Waypoint(frame=frame, command=command, is_current=is_current, autocontinue=autocontinue, param4=float('nan'), x_lat=new_lat, y_long=new_lon, z_alt=new_alt)

    def arm_drone(self) -> bool:
        self.get_logger().info('Arming drone...')
        req = CommandBool.Request()
        req.value = True
        future = self.arming_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result().success:
            self.armed = True
            self.get_logger().info('Drone armed successfully.')
            return True
        else:
            self.get_logger().error('Failed to arm drone.')
            return False

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

    def push_mission(self, waypoints):
        self.get_logger().info(f"Uploading mission...")
        req = WaypointPush.Request()
        req.start_index = self.mission_index
        self.mission_index += 1
        req.waypoints = waypoints
        future = self.mission_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result().success:
            self.get_logger().info('Mission uploaded successfully.')
        else:
            self.get_logger().error(f'Fail to upload mission.')

def main(args=None):
    rclpy.init(args=args)
    drone_controller = DroneController()
    rclpy.spin(drone_controller)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
