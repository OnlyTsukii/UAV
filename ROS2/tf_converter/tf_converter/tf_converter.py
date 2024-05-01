import rclpy
import math

from rclpy.node import Node
from nmea_msgs.msg import DefectBox, GpsFix
from typing import Tuple


EARTH_RADIUS = 6378.137

class TF_Converter(Node):
    def __init__(self):
        super().__init__("tf_converter")

        self.dft_subscriber = self.create_subscription(DefectBox, "dft_box", self.dft_callback, 10)
        self.gps_subscriber = self.create_subscription(GpsFix, "fix", self.gps_callback, 10)

        self.map = {}
        
        self.init_longitude = 0
        self.init_latitude = 0
        self.init_altitude = 0

    def gps_callback(self, msg: GpsFix):
        pass

    def dft_callback(self, msg: DefectBox):
        pass

    def handle_map(self, gps_msg: GpsFix, dft_msg: DefectBox):
        # ToDo
        pass

    def rad(self, d):
        return d * math.pi / 180.0
    
    def get_transform(self, msg: GpsFix) -> Tuple[float, float, float]:
        if self.init_longitude == 0 and self.init_altitude == 0 \
            and self.init_altitude == 0:
            self.init_longitude = msg.longitude
            self.init_latitude = msg.latitude
            self.init_altitude = msg.altitude

            return 0, 0, 0
        else:
            radLat1 = self.rad(self.init_latitude)
            radLong1 = self.rad(self.init_longitude)
            radLat2 = self.rad(msg.latitude)
            radLong2 = self.rad(msg.longitude)
            
            delta_lat = radLat2 - radLat1
            delta_long = 0
            
            if delta_lat > 0:
                x = -2 * math.asin(math.sqrt(
                    math.pow(math.sin(delta_lat / 2), 2) +
                    math.cos(radLat1) * math.cos(radLat2) *
                    math.pow(math.sin(delta_long / 2), 2)
                ))
            else:
                x = -2 * math.asin(math.sqrt(
                    math.pow(math.sin(delta_lat / 2), 2) +
                    math.cos(radLat1) * math.cos(radLat2) *
                    math.pow(math.sin(delta_long / 2), 2)
                ))
            x *= EARTH_RADIUS * 1000
            
            delta_lat = 0
            delta_long = radLong2 - radLong1
            if delta_long > 0:
                y = 2 * math.asin(math.sqrt(
                    math.pow(math.sin(delta_lat / 2), 2) +
                    math.cos(radLat2) * math.cos(radLat2) *
                    math.pow(math.sin(delta_long / 2), 2)
                ))
            else:
                y = -2 * math.asin(math.sqrt(
                    math.pow(math.sin(delta_lat / 2), 2) +
                    math.cos(radLat2) * math.cos(radLat2) *
                    math.pow(math.sin(delta_long / 2), 2)
                ))
            y *= EARTH_RADIUS * 1000
            
            z = msg.altitude - self.init_altitude

            return x, y, z
            
    