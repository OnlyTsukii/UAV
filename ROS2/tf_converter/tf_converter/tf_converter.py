import rclpy
import math

from rclpy.node import Node
from nmea_msgs.msg import DefectBox, GpsFix


class TF_Converter(Node):
    def __init__(self):
        super().__init__("tf_converter")
        self.dft_subscriber = self.create_subscription(DefectBox, "dft_box", self.dft_callback, 10)
        self.gps_subscriber = self.create_subscription(GpsFix, "fix", self.gps_callback, 10)
