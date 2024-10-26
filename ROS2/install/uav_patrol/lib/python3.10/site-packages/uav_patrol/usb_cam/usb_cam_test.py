from copy import deepcopy
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import Bool, Header, Float64
from sensor_msgs.msg import NavSatFix
from cv_bridge import CvBridge
from pygeodesy.geoids import GeoidPGM
from rclpy.qos import qos_profile_sensor_data
import threading
import cv2

_egm96 = GeoidPGM("/usr/share/GeographicLib/geoids/egm96-5.pgm", kind=-3)


class cam_node(Node):
    def __init__(self, name):
        super().__init__(name)
        self.gps = None
        self.rel_alt = None
        self.cv_bridge = CvBridge()
        self.cam_sub = self.create_subscription(
            Image, "/image_raw", self.cam_callback, 10
        )
        self.gps_sub = self.create_subscription(
            NavSatFix,
            "/mavros/global_position/global",
            self.gps_callback,
            qos_profile_sensor_data,
        )
        self.rel_alt_sub = self.create_subscription(
            Float64,
            "/mavros/global_position/rel_alt",
            self.rel_alt_callback,
            qos_profile_sensor_data
        )

    def rel_alt_callback(self,alt):
        self.rel_alt=alt.data

    def geoid_height(self, lat, lon):
        return _egm96.height(lat, lon)

    def gps_callback(self, msg):
        self.gps = msg
        if self.gps is not None:
            self.gps.altitude = msg.altitude - self.geoid_height(
                msg.latitude, msg.longitude
            )
            # self.get_logger().info(f"new altitude is {self.gps.altitude}")
        else:
            self.get_logger().info("gps none")

    def cam_callback(self, image):
        pic = self.cv_bridge.imgmsg_to_cv2(image, "bgr8")
        if pic is not None and self.gps is not None:
            self.get_logger().info('saving pic and gps')
            timestamp = self.gps.header.stamp.sec
            f = open('/home/x650/UAV/USB_CAM/' + str(timestamp) + ".txt", "w")
            f.write(f"timestamp: {timestamp} \n")
            f.write(f"latitude: {self.gps.latitude} \n")
            f.write(f"longitude: {self.gps.longitude} \n")
            f.write(f"AMSL altitude: {self.gps.altitude} \n")
            f.write(f"REL altitude: {self.rel_alt} \n")
            f.close()
            cv2.imwrite('/home/x650/UAV/USB_CAM/' + str(timestamp) + ".jpg", pic)
            self.get_logger().info('pic saved')
        elif pic is None:
            self.get_logger().warn("Received None photo.")
        elif self.gps is None:
            self.get_logger().warn("Received None gps.")


def main(args=None):
    rclpy.init(args=args)
    node = cam_node("cam_node")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
