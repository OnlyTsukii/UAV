import rclpy
import time
import threading
import math

from queue import Queue
from rclpy.node import Node
from mavros_msgs.srv import CommandBool, SetMode, CommandTOLLocal
from geometry_msgs.msg import PoseStamped
from std_msgs.msg import String
from copy import deepcopy
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy


class DroneController(Node):

    def __init__(self):
        super().__init__('drone_controller')
        self.arming_client = self.create_client(CommandBool, '/mavros/cmd/arming')
        self.mode_client = self.create_client(SetMode, '/mavros/set_mode')
        self.takeoff_client = self.create_client(CommandTOLLocal, '/mavros/cmd/takeoff_local')
        self.pose_publisher = self.create_publisher(PoseStamped, '/mavros/setpoint_position/local', 10)

        while not self.arming_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Arming service not available, waiting...')
        
        while not self.mode_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Mode service not available, waiting...')
        
        self.get_logger().info('All services are available, ready to arm and take off.')

        self.init_pose()

        self.counter = 0
        self.pose_mutex = threading.Lock()
        self.cur_sub_pose = self.get_waypoint([0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0])
        self.cur_pub_pose = self.get_waypoint([0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0])
        self.waypoints = Queue(-1)
        self.orient = 0

        self.set_waypoint(self.get_pose(0.0, 0.0, 3.0, 0.0))
        self.set_waypoint(self.get_pose(0.0, 0.0, 3.0, 180.0))
        self.set_waypoint(self.get_pose(5.0, 0.0, 3.0, 180.0))
        self.set_waypoint(self.get_pose(5.0, 0.0, 3.0, 90.0))
        self.set_waypoint(self.get_pose(5.0, -5.0, 3.0, 90.0))
        self.set_waypoint(self.get_pose(5.0, -5.0, 3.0, 0))
        self.set_waypoint(self.get_pose(0.0, -5.0, 3.0, 0))
        self.set_waypoint(self.get_pose(0.0, -5.0, 3.0, -90.0))
        self.set_waypoint(self.get_pose(0.0, 0.0, 3.0, -90.0))
        self.set_waypoint(self.get_pose(0.0, 0.0, 3.0, 0.0))
        self.set_waypoint(self.get_pose(0.0, 0.0, 0.0, 0.0))
       
        self.set_mode('OFFBOARD')
        self.arm_drone()

        self.pose_timer = self.create_timer(0.1, self.publish_pose)  # Publish pose at 10Hz

        time.sleep(1)

        qos_profile = QoSProfile(reliability=ReliabilityPolicy.BEST_EFFORT, history=HistoryPolicy.KEEP_LAST, depth=10)
        self.pose_subscriber = self.create_subscription(PoseStamped, '/mavros/local_position/pose', self.pose_callback, qos_profile)

    def pose_callback(self, msg: PoseStamped):
        self.pose_mutex.acquire()
        self.cur_sub_pose = deepcopy(msg)
        self.pose_mutex.release()

    def init_pose(self):
        waypoint = self.get_waypoint([0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0])
        for i in range(20):
            self.pose_publisher.publish(waypoint)
            time.sleep(0.05)

    def get_pose(self, px: float, py: float, pz: float, yaw_angle: float, pitch_angle: float = 0.0, roll_angle: float = 0.0):
        yaw = math.radians(yaw_angle)
        pitch = math.radians(pitch_angle)
        roll = math.radians(roll_angle)

        cy = math.cos(yaw * 0.5)
        sy = math.sin(yaw * 0.5)
        cp = math.cos(pitch * 0.5)
        sp = math.sin(pitch * 0.5)
        cr = math.cos(roll * 0.5)
        sr = math.sin(roll * 0.5)

        ow = cr * cp * cy + sr * sp * sy
        ox = sr * cp * cy - cr * sp * sy
        oy = cr * sp * cy + sr * cp * sy
        oz = cr * cp * sy - sr * sp * cy

        return [px, py, pz, ox, oy, oz, ow]
    
    def set_waypoint(self, params):
        waypoint = self.get_waypoint(params)
        self.waypoints.put(waypoint)

    def get_waypoint(self, params) -> PoseStamped:
        waypoint = PoseStamped()
        waypoint.header.stamp = self.get_clock().now().to_msg()
        waypoint.header.frame_id = 'base_link'

        waypoint.pose.position.x = float(params[0])
        waypoint.pose.position.y = float(params[1])
        waypoint.pose.position.z = float(params[2])
        waypoint.pose.orientation.x = float(params[3])
        waypoint.pose.orientation.y = float(params[4])
        waypoint.pose.orientation.z = float(params[5])
        waypoint.pose.orientation.w = float(params[6])
        return waypoint

    def reached_target(self) -> bool:
        flag = True

        self.pose_mutex.acquire()
        flag &= abs(self.cur_sub_pose.pose.position.x - self.cur_pub_pose.pose.position.x) <= 0.3
        flag &= abs(self.cur_sub_pose.pose.position.y - self.cur_pub_pose.pose.position.y) <= 0.3
        flag &= abs(self.cur_sub_pose.pose.position.z - self.cur_pub_pose.pose.position.z) <= 0.3
        flag &= abs(self.cur_sub_pose.pose.orientation.x) - abs(self.cur_pub_pose.pose.orientation.x) <= 0.02
        flag &= abs(self.cur_sub_pose.pose.orientation.y) - abs(self.cur_pub_pose.pose.orientation.y) <= 0.02
        flag &= abs(self.cur_sub_pose.pose.orientation.z) - abs(self.cur_pub_pose.pose.orientation.z) <= 0.02
        flag &= abs(self.cur_sub_pose.pose.orientation.w) - abs(self.cur_pub_pose.pose.orientation.w) <= 0.02
        
        if flag:
            self.get_logger().info(f"{self.cur_sub_pose.pose.position.x, self.cur_sub_pose.pose.position.y, self.cur_sub_pose.pose.position.z}")
            self.get_logger().info(f"{self.cur_pub_pose.pose.position.x, self.cur_pub_pose.pose.position.y, self.cur_pub_pose.pose.position.z}")
        self.pose_mutex.release()

        return flag

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

    def publish_pose(self):
        if self.waypoints.empty() == False and self.reached_target():
            self.get_logger().info("Drone has reached the target waypoint, get next waypoint from queue.")
            self.cur_pub_pose = self.waypoints.get()
        elif self.waypoints.empty():
            self.disarm_drone()

        self.cur_pub_pose.header.stamp = self.get_clock().now().to_msg()
        self.pose_publisher.publish(self.cur_pub_pose)

def main(args=None):
    rclpy.init(args=args)
    drone_controller = DroneController()
    rclpy.spin(drone_controller)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
