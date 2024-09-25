import rclpy
import rclpy.logging
import time
import subprocess
import threading

from rclpy.node import Node
from std_msgs.msg import Header, Int32, Float64
from sensor_msgs.msg import NavSatFix, NavSatStatus
from rclpy.qos import qos_profile_sensor_data


# unit: °/m
LAT_PER_METER = 0.000009019
LON_PER_METER = 0.000010503


class GPS_Simulator(Node):

    def __init__(self):
        super().__init__("gps_simulator")

        self.fix_pub = self.create_publisher(NavSatFix, "gps", 10)

        self.timer = self.create_timer(0.1, self.timer_callback)

        self.init_lon = 120.652158
        self.init_lat = 31.307415
        self.init_alt = 10.0

        self.mutex = threading.Lock()

    def timer_callback(self):
        gps_fix = NavSatFix()

        header = Header()
        header.stamp = self.get_clock().now().to_msg()
        header.frame_id = 'gps'
        gps_fix.header = header

        status = NavSatStatus()
        status.status = NavSatStatus.STATUS_FIX
        status.service = NavSatStatus.SERVICE_GPS
        gps_fix.status = status

        gps_fix.latitude = self.init_lat
        gps_fix.longitude = self.init_lon
        gps_fix.altitude = self.init_alt

        self.init_lat += LAT_PER_METER
        self.init_lon += LON_PER_METER

        gps_fix.position_covariance = (51.84, 0.0, 0.0, 0.0, 51.84, 0.0, 0.0, 0.0, 829.44)
        gps_fix.position_covariance_type = NavSatFix.COVARIANCE_TYPE_APPROXIMATED

        self.fix_pub.publish(gps_fix)

def main(args=None):

    rclpy.init(args=args)

    gps_simulator = GPS_Simulator()

    rclpy.spin(gps_simulator)

    gps_simulator.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()