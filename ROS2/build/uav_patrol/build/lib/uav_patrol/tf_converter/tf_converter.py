import rclpy
import math
import threading
import time
import numpy
import os
import shutil
import json
import rclpy.duration
import rclpy.time

from copy import deepcopy
from geopy.distance import geodesic
from queue import Queue
from rclpy.node import Node
from location_msgs.msg import Mix
from typing import Tuple, List
from tf2_ros import TransformException
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener
from rosidl_runtime_py.convert import message_to_yaml


# unit: m 
SOOCHOW_GROUND_ALTITUDE = 7
SOLAR_PANEL_HEIGHT      = 0

# unit: °
CAM_HOR_ANGLE   = 32.9
CAM_VER_ANGLE   = 26.6
# ROTATION_ANGLE  = 20

# unit: °/m
LAT_PER_METER = 0.000009019
LON_PER_METER = 0.000010503

RESULTS_FILE_PREFIX = "/home/x650/UAV/Results"
LOCATIONS_FILE_PREFIX = "/locations"


class TF_Converter(Node):
    def __init__(self):
        super().__init__("tf_converter")

        self.mix_sub = self.create_subscription(Mix, "/mix", self.mix_callback, 10)

        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        self.msg_queue = Queue()
        
        self.init_longitude = 0
        self.init_latitude = 0
        self.init_altitude = 0

        self.initialized = False

        self.rst_path = None

    def mix_callback(self, msg: Mix):
        self.rst_path = self.init_dir()

        self.get_logger().info("Got a mix message from publisher")
        self.msg_queue.put(msg)

        if self.initialized == False:
            self.init_altitude = msg.gps_fix.altitude
            self.init_latitude = msg.gps_fix.latitude
            self.init_longitude = msg.gps_fix.longitude
            self.initialized = True

    def init_dir(self) -> str:
        try:
            existing_numbers = [int(name[3:]) for name in os.listdir(RESULTS_FILE_PREFIX) if name.startswith("run")]
            max_number = max(existing_numbers) if existing_numbers else 0

            path = os.path.join(RESULTS_FILE_PREFIX, "run{}".format(max_number))
            return path
        
        except Exception as e:
            self.get_logger().error(e)
            return None

    def handle_map(self):
        while rclpy.ok():
            if self.msg_queue.empty():
                time.sleep(1.0)
            else:
                mix = self.msg_queue.get()

                if len(mix.defects.defects) == 0:
                    self.get_logger().info('Received a mix message with empty defects')
                    continue

                self.get_logger().info("Got a valid mix message, locating...")
                self.get_logger().info(f"Gps fix: {mix.gps_fix.longitude} {mix.gps_fix.latitude} {mix.gps_fix.altitude}")
                self.get_logger().info(f"Defects position: {mix.defects}")
                self.get_logger().info(f"Yaw: {mix.yaw}")

                # _, _, uav_z = self.get_transform(gps_msg)
                uav_z = mix.gps_fix.altitude

                from_frame_rel = 'uav'
                to_frame_rel = 'camera'

                try:
                    # Get transform from uav frame to camera frame
                    t = self.tf_buffer.lookup_transform(
                        to_frame_rel,
                        from_frame_rel,
                        rclpy.time.Time())
                    
                    # Height relative to the solar panel
                    # NEED TO BE RECACULATED WITH REAL PARAMS !!!
                    height_diff = uav_z + t.transform.translation.z - SOLAR_PANEL_HEIGHT - SOOCHOW_GROUND_ALTITUDE
                    self.get_logger().info(f"current height: {height_diff}")

                    # Calculate defects position relative to camera frame
                    dfts_rel_pos = self.calc_dfts_pos(height_diff, mix.defects)
                    self.get_logger().info(f"defects relative position: {dfts_rel_pos}")

                    # UAV rotation matrix
                    rot_angle = self.rad(mix.yaw)
                    R = numpy.array([
                        [math.cos(rot_angle), -1 * math.sin(rot_angle)],
                        [math.sin(rot_angle), -1 * math.cos(rot_angle)]
                    ])

                    dfts_abs_pos = []

                    for i, dft_pos in enumerate(dfts_rel_pos):
                        x, y = dft_pos

                        # Transform position from camera frame to uav frame
                        uav_x = x + t.transform.translation.x
                        uav_y = y + t.transform.translation.y
                        
                        # Calculate GPS position of defects
                        offset = numpy.array([uav_x, uav_y]).reshape(-1, 1)
                        target = numpy.dot(R, offset)
                        gps_e = mix.gps_fix.longitude + target[0] * LON_PER_METER
                        gps_n = mix.gps_fix.latitude + target[1] * LAT_PER_METER
                        dfts_abs_pos.append((gps_e, gps_n, self.init_altitude))

                    self.get_logger().info(f"current height: {dfts_abs_pos}")
                    
                    file = open(self.rst_path+LOCATIONS_FILE_PREFIX+'/location'+str(mix.id)+'.txt', "w")

                    file.write(message_to_yaml(mix))
                    file.write("\n")
                    
                    for i, defect in enumerate(mix.defects.defects):
                        file.write("----------------------------------------------------------- \n")
                        file.write("DEFECT POSITION IN IMAGE: \n")
                        file.write(message_to_yaml(defect))
                        file.write("\n")
                        file.write("DEFECT POSITION IN WORLD: \n")
                        file.write(str(dfts_abs_pos[i]))
                        file.write("\n")
                        file.write("\n")
                        file.write("DISTANCE FROM THE START POINT: \n")
                        distance_x, distance_y, distance_z, distance_2d = self.get_distance(dfts_abs_pos[i])
                        file.write(str((distance_x, distance_y, distance_z, distance_2d)))
                        file.write("\n")
                        file.write("\n")

                    file.close()

                    # Print the final absolute position of defects
                    self.get_logger().info(f"Defects location finished, results: {dfts_abs_pos}")

                except TransformException as ex:
                    self.get_logger().info(
                        f'Could not transform {from_frame_rel} to {to_frame_rel}: {ex}')

    # Convert angle to radian
    def rad(self, d):
        return d * math.pi / 180.0
    
    def calc_dfts_pos(self, height, defects) -> List[Tuple[float, float]]:
        half_hon_rad = self.rad(CAM_HOR_ANGLE / 2)
        half_ver_rad = self.rad(CAM_VER_ANGLE / 2)

        self.get_logger().info(f"half_hon_rad: {half_hon_rad}  half_ver_rad: {half_ver_rad}")

        # Object size in real world
        a = 2 * height * math.tan(half_hon_rad)
        b = 2 * height * math.tan(half_ver_rad)

        self.get_logger().info(f"a: {a}  b: {b}")

        scale_x = a / defects.img_width
        scale_y = b / defects.img_height

        self.get_logger().info(f"scale_x: {scale_x}  scale_y: {scale_y}")
        self.get_logger().info(f"msg.img_width: {defects.img_width}  msg.img_height: {defects.img_height}")

        res = []

        # Defects position relative to center of the image in real world
        for dft in defects.defects:
            x = dft.center.x - defects.img_width / 2
            y = defects.img_height / 2 - dft.center.y
            res.append((scale_x * x, scale_y * y))

        return res
    
    # Get distance from the start point 
    def get_distance(self, dft_abs_pos) -> Tuple[float, float, float, float]:

        if self.init_latitude == 0 and self.init_longitude == 0 and self.init_altitude == 0:
            return 0.0, 0.0, 0.0, 0.0
        
        lon, lat, alt = dft_abs_pos
        point1 = (self.init_latitude, self.init_longitude)
        point2 = (lat, lon)

        distance_2d = geodesic(point1, point2).m

        avg_lat = (self.init_latitude + lat) / 2
        avg_lon = (self.init_longitude + lon) / 2

        x = geodesic((avg_lat, self.init_longitude), (avg_lat, lon)).m
        y = geodesic((self.init_latitude, avg_lon), (lat, avg_lon)).m

        z = alt - self.init_altitude

        return x, y, z, distance_2d
        
        
def main(args=None):
    rclpy.init(args=args)

    tf_converter = TF_Converter()

    handle_threading = threading.Thread(target=tf_converter.handle_map)
    handle_threading.start()

    rclpy.spin(tf_converter)

    tf_converter.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
            
    