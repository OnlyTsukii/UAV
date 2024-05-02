import rclpy
import math
import threading
import queue
import time
import numpy

from rclpy.node import Node
from nmea_msgs.msg import Defects, DefectBox, GpsFix
from typing import Tuple, List
from tf2_ros import TransformException
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener


# unit: m
EARTH_RADIUS            = 6378.137     
SOOCHOW_GROUND_ALTITUDE = 8
SOLAR_PANEL_HEIGHT      = 2

# unit: °
CAM_HOR_ANGLE   = 32.9
CAM_VER_ANGLE   = 26.6
ROTATION_ANGLE  = 20    # UNKNOWN

# ° / m
LAT_PER_METER = 0.00000905
LON_PER_METER = 0.0000103

class TF_Converter(Node):
    def __init__(self):
        super().__init__("tf_converter")

        self.dft_subscriber = self.create_subscription(Defects, "dfts", self.dft_callback, 10)
        self.gps_subscriber = self.create_subscription(GpsFix, "gps", self.gps_callback, 10)

        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        self.map = {}
        self.queue = queue.Queue()
        self.mutex = threading.Lock()
        
        self.init_longitude = 0
        self.init_latitude = 0
        self.init_altitude = 0

    def gps_callback(self, msg: GpsFix):
        self.mutex.acquire()
        self.map['gps'] = msg
        if self.map.get('dfts') != None:
            self.queue.put(self.map)
        self.mutex.release()
            
    def dft_callback(self, msg: Defects):
        self.mutex.acquire()
        self.map['dfts'] = msg
        if self.map.get('gps') != None:
            self.queue.put(self.map)
        self.mutex.release()

    def handle_map(self):
        while True:
            if self.queue.empty():
                time.sleep(1.0)
            else:
                map = self.queue.get()
                gps_msg = map['gps']
                dfts_msg = map['dfts']

                # _, _, uav_z = self.get_transform(gps_msg)
                uav_z = gps_msg.altitude

                from_frame_rel = 'uav'
                to_frame_rel = 'camera'

                try:
                    # Get tranform from uav frame to camera frame
                    t = self.tf_buffer.lookup_transform(
                        to_frame_rel,
                        from_frame_rel,
                        rclpy.time.Time())
                    
                    # Height relative to the solar panel
                    height_diff = uav_z - t.transform.translation.z - SOLAR_PANEL_HEIGHT
                    # Calculate defects position relative to camera frame
                    dfts_rel_pos = self.calc_dfts_pos(height_diff, dfts_msg)

                    # UAV rotation matrix
                    rot_angle = self.rad(ROTATION_ANGLE)
                    R = numpy.array(
                        [math.cos(rot_angle), -1 * math.sin(rot_angle)],
                        [math.sin(rot_angle), -1 * math.cos(rot_angle)]
                    )

                    for i, dft_pos in enumerate(dfts_rel_pos):
                        x, y, z = dft_pos

                        # Transform position from camera frame to uav frame
                        uav_x = x + t.transform.translation.x
                        uav_y = y + t.transform.translation.y
                        
                        # Calculate GPS position of defects
                        offset = numpy.array([uav_x, uav_y]).reshape(-1, 1)
                        target = numpy.dot(R, offset)
                        gps_e = gps_msg.longitude + target[0] * LON_PER_METER
                        gps_n = gps_msg.latitude + target[1] * LAT_PER_METER
                        dfts_rel_pos[i] = (gps_e, gps_n, uav_z)
                    
                    # Print the final absolute position of defects
                    print(dfts_rel_pos)

                except TransformException as ex:
                    self.get_logger().info(
                        f'Could not transform {from_frame_rel} to {to_frame_rel}: {ex}')

    # Transform angle to radian
    def rad(self, d):
        return d * math.pi / 180.0
    
    def calc_dfts_pos(self, height, msg: Defects) -> List[Tuple[float, float, float]]:
        half_hon_rad = self.rad(CAM_HOR_ANGLE / 2)
        half_ver_rad = self.rad(CAM_VER_ANGLE / 2)

        # a, b: Object size in real world
        a = 2 * height / math.tan(half_hon_rad)
        b = 2 * height / math.tan(half_ver_rad)

        scale_x = a / msg.img_width
        scale_y = b / msg.img_height

        res = []

        # Defects position relative to center of the image in real world
        for dft in msg.defects:
            x = dft.center.x - msg.img_width / 2
            y = msg.img_height / 2 - dft.center.y
            res.append((scale_x * x, scale_y * y, height))

        return res
    
    # def get_transform(self, msg: GpsFix) -> Tuple[float, float, float]:
    #     if self.init_longitude == 0 and self.init_altitude == 0 \
    #         and self.init_altitude == 0:
    #         self.init_longitude = msg.longitude
    #         self.init_latitude = msg.latitude
    #         self.init_altitude = msg.altitude

    #         return 0, 0, 0
    #     else:
    #         radLat1 = self.rad(self.init_latitude)
    #         radLong1 = self.rad(self.init_longitude)
    #         radLat2 = self.rad(msg.latitude)
    #         radLong2 = self.rad(msg.longitude)
            
    #         delta_lat = radLat2 - radLat1
    #         delta_long = 0
            
    #         if delta_lat > 0:
    #             x = -2 * math.asin(math.sqrt(
    #                 math.pow(math.sin(delta_lat / 2), 2) +
    #                 math.cos(radLat1) * math.cos(radLat2) *
    #                 math.pow(math.sin(delta_long / 2), 2)
    #             ))
    #         else:
    #             x = -2 * math.asin(math.sqrt(
    #                 math.pow(math.sin(delta_lat / 2), 2) +
    #                 math.cos(radLat1) * math.cos(radLat2) *
    #                 math.pow(math.sin(delta_long / 2), 2)
    #             ))
    #         x *= EARTH_RADIUS * 1000
            
    #         delta_lat = 0
    #         delta_long = radLong2 - radLong1
    #         if delta_long > 0:
    #             y = 2 * math.asin(math.sqrt(
    #                 math.pow(math.sin(delta_lat / 2), 2) +
    #                 math.cos(radLat2) * math.cos(radLat2) *
    #                 math.pow(math.sin(delta_long / 2), 2)
    #             ))
    #         else:
    #             y = -2 * math.asin(math.sqrt(
    #                 math.pow(math.sin(delta_lat / 2), 2) +
    #                 math.cos(radLat2) * math.cos(radLat2) *
    #                 math.pow(math.sin(delta_long / 2), 2)
    #             ))
    #         y *= EARTH_RADIUS * 1000
            
    #         # Must be the height relative to the current ground plane.
    #         z = msg.altitude - SOOCHOW_GROUND_ALTITUDE

    #         return x, y, z
            
    