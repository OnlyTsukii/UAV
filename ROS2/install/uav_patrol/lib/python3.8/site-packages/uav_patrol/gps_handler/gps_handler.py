import rclpy
import rclpy.logging
import threading
import time 
import subprocess

from rclpy.qos import qos_profile_sensor_data
from rclpy.node import Node
from std_msgs.msg import Header, Int32, Float64, Float32
from sensor_msgs.msg import NavSatFix, NavSatStatus
from location_msgs.msg import GpsFix, Yaw
from mavros_msgs.msg import VfrHud


SYS_PASSWORD    = '123'
SPEED_THRESHOLD = 0.1


class GPS_Handler(Node):

    def __init__(self):
        super().__init__("gps_handler")

        self.fix_pub = self.create_publisher(GpsFix, 'gps', 10)
        self.ctrl_pub = self.create_publisher(Int32, "ctrl_cmd", 10)
        self.yaw_pub = self.create_publisher(Yaw, "yaw", 10)

        self.gps_sub = self.create_subscription(NavSatFix, "/mavros/global_position/global", self.gps_callback, qos_profile_sensor_data)
        self.yaw_sub = self.create_subscription(Float64, "/mavros/global_position/compass_hdg", self.yaw_callback, qos_profile_sensor_data)
        self.vel_sub = self.create_subscription(VfrHud, "/mavros/vfr_hud", self.vel_callback, qos_profile_sensor_data)

        self.current_yaw = 0.0     # 20.0 for test, 0 in default
        self.timestamp = 0 
        self.mutex = threading.Lock()
        self.mutex2 = threading.Lock()

        self.start_flag = False
        self.time_thres = 1
        self.gps_id = 0

    def vel_callback(self, msg):
        # self.time_thres = int(msg.groundspeed / 2) + 1
        self.time_thres = 0.5
        self.get_logger().info(f"time threshold: {self.time_thres}")

        if msg.groundspeed >= SPEED_THRESHOLD and not self.start_flag:
            self.start_patrol()
            self.get_logger().info("uav patrol has started")
            self.start_flag = True

    def yaw_callback(self, msg):
        # self.get_logger().info(f"Yaw message: {msg}")
        self.current_yaw = msg.data

    def gps_callback(self, msg):
        # self.get_logger().info(f"Gps message: {msg}")
        if self.start_flag:
            self.send_ctrl(msg)

    def start_patrol(self):
        start_camera = ['sudo', '-S', 'systemctl', 'start', 'camera']
        self.run_command(start_camera)

    def stop_patrol(self):
        stop_camera = ['sudo', '-S', 'systemctl', 'stop', 'camera']
        self.run_command(stop_camera)

    def run_command(self, command):
        process = subprocess.Popen(command, stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
        stdout, stderr = process.communicate(SYS_PASSWORD + '\n')
        if process.returncode == 0:
            print(f"Command succeeded: {stdout}")
        else:
            print(f"Command failed: {stderr}")

    def send_ctrl(self, current_fix):
        cur_ts = time.time()
        ts_dev = cur_ts - self.timestamp

        self.mutex2.acquire()
        thres = self.time_thres
        self.mutex2.release()

        if self.timestamp == 0 or ts_dev > thres:
            if self.timestamp == 0:
                # Wait for defetcts publisher initialization to complete
                time.sleep(2)

            self.timestamp = time.time()

            if self.gps_id % 2 == 0:
                fix = GpsFix()
                fix.gps_fix = current_fix
                fix.gps_id = self.gps_id
                self.fix_pub.publish(fix)
                self.get_logger().info(f"Publishing GPS message {fix.gps_id}")

                yaw = Yaw()
                yaw.yaw_id = self.gps_id
                self.mutex.acquire()
                yaw.yaw = self.current_yaw
                self.mutex.release()
                self.yaw_pub.publish(yaw)
                self.get_logger().info(f"Publishing Yaw message { yaw }")

            ctrl_cmd = Int32()
            ctrl_cmd.data = self.gps_id
            self.ctrl_pub.publish(ctrl_cmd)
            self.get_logger().info(f"Publishing IR camera control message { ctrl_cmd }")

            self.gps_id += 1


def main(args=None):

    rclpy.init(args=args)

    gps_simulator = GPS_Handler()

    rclpy.spin(gps_simulator)

    gps_simulator.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()