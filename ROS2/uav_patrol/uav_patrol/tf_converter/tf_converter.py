import rclpy
import math
import threading
import time
import numpy
import os
import shutil
import json
from geopy.distance import geodesic

from queue import Queue
import rclpy.duration
from rclpy.node import Node
from location_msgs.msg import Defects, DefectBox, GpsFix, Yaw
from typing import Tuple, List
import rclpy.time
from tf2_ros import TransformException
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener
from sensor_msgs.msg import NavSatFix
from rosidl_runtime_py.convert import message_to_yaml


LOCATION_PATH = '/home/xs/UAV/ROS2/locations/'

# unit: m
EARTH_RADIUS            = 6378.137     
SOOCHOW_GROUND_ALTITUDE = 7
SOLAR_PANEL_HEIGHT      = 0

# unit: °
CAM_HOR_ANGLE   = 32.9
CAM_VER_ANGLE   = 26.6
# ROTATION_ANGLE  = 20

# unit: °/m
LAT_PER_METER = 0.000009019
LON_PER_METER = 0.000010503


class TF_Converter(Node):
    def __init__(self):
        super().__init__("tf_converter")

        self.dft_subscriber = self.create_subscription(Defects, "dfts", self.dft_callback, 10)
        self.gps_subscriber = self.create_subscription(GpsFix, "gps", self.gps_callback, 10)
        self.yaw_subscriber = self.create_subscription(Yaw, "yaw", self.yaw_callback, 10)

        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        self.queue = Queue()
        self.map = {}
        self.mutex = threading.Lock()
        
        self.init_longitude = 0
        self.init_latitude = 0
        self.init_altitude = 0

        self.clear_folder(LOCATION_PATH)

    def clear_folder(self, folder_path):
        for filename in os.listdir(folder_path):
            file_path = os.path.join(folder_path, filename)
            try:
                if os.path.isfile(file_path) or os.path.islink(file_path):
                    os.unlink(file_path)
                elif os.path.isdir(file_path):
                    shutil.rmtree(file_path)
            except Exception as e:
                print(f'Remove file {file_path} failed: {e}')

    def gps_callback(self, msg: GpsFix):
        self.mutex.acquire()
        if self.map.get(msg.gps_id) == None or \
           self.map[msg.gps_id].get('dfts') == None or \
           self.map[msg.gps_id].get('yaw') == None:
            self.map[msg.gps_id] = {'gps': msg}
        else:
            dfts_msg = self.map[msg.gps_id].get('dfts')
            yaw_msg = self.map[msg.gps_id].get('yaw')
            self.queue.put((msg, dfts_msg, yaw_msg))
            self.map.clear()
        self.mutex.release()
        self.get_logger().info(f"Got a gps message, id: {msg.gps_id}.")
            
    def dft_callback(self, msg: Defects):
        self.mutex.acquire()
        if self.map.get(msg.defect_id) == None or \
           self.map[msg.defect_id].get('gps') == None or \
           self.map[msg.defect_id].get('yaw') == None:
            self.map[msg.defect_id] = {'dfts': msg}
        else:
            gps_msg = self.map[msg.defect_id].get('gps')
            yaw_msg = self.map[msg.defect_id].get('yaw')
            self.queue.put((gps_msg, msg, yaw_msg))
            self.map.clear()
        self.mutex.release()
        self.get_logger().info(f"Got a defects message, id: {msg.defect_id}.")

    def yaw_callback(self, msg: Yaw):
        self.mutex.acquire()
        if self.map.get(msg.yaw_id) == None or \
           self.map[msg.yaw_id].get('gps') == None or \
           self.map[msg.yaw_id].get('dfts') == None:
            self.map[msg.yaw_id] = {'yaw': msg}
        else:
            gps_msg = self.map[msg.yaw_id].get('gps')
            dfts_msg = self.map[msg.yaw_id].get('dfts')
            self.queue.put((gps_msg, dfts_msg, msg))
            self.map.clear()
        self.mutex.release()
        self.get_logger().info(f"Got a yaw message, id: {msg.yaw_id}.")

    def handle_map(self):
        while True:
            if self.queue.empty():
                time.sleep(1.0)
            else:
                gps_msg, dfts_msg, yaw_msg = self.queue.get()

                if len(dfts_msg.defects) == 0:
                    self.get_logger().info('Received a defects message with empty defects.')
                    continue

                self.get_logger().info("Got a GPS & Defects map, locating...")
                self.get_logger().info(f"Gps fix: {gps_msg.gps_fix.longitude} {gps_msg.gps_fix.latitude} {gps_msg.gps_fix.altitude}.")
                self.get_logger().info(f"Defects position: {dfts_msg.defects}.")
                self.get_logger().info(f"Yaw: {yaw_msg.yaw}")

                # _, _, uav_z = self.get_transform(gps_msg)
                uav_z = gps_msg.gps_fix.altitude

                from_frame_rel = 'uav'
                to_frame_rel = 'camera'

                try:
                    # Get tranform from uav frame to camera frame
                    t = self.tf_buffer.lookup_transform(
                        to_frame_rel,
                        from_frame_rel,
                        rclpy.time.Time())
                    
                    # Height relative to the solar panel
                    height_diff = uav_z + t.transform.translation.z - SOLAR_PANEL_HEIGHT - SOOCHOW_GROUND_ALTITUDE
                    # Calculate defects position relative to camera frame
                    dfts_rel_pos = self.calc_dfts_pos(height_diff, dfts_msg)

                    # UAV rotation matrix
                    rot_angle = self.rad(yaw_msg.yaw)
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
                        gps_e = gps_msg.gps_fix.longitude + target[0] * LON_PER_METER
                        gps_n = gps_msg.gps_fix.latitude + target[1] * LAT_PER_METER
                        dfts_abs_pos.append((gps_e, gps_n, SOLAR_PANEL_HEIGHT + SOOCHOW_GROUND_ALTITUDE))

                    distance_x, distance_y, distance_z, distance_2d = self.get_distance(gps_msg)

                    file = open(LOCATION_PATH+'location'+str(gps_msg.gps_id)+'.txt', "w")
                    
                    for i, defect in enumerate(dfts_msg.defects):
                        file.write("----------------------------------------------------------- \n")
                        file.write("DEFECT POSITION IN IMAGE: \n")
                        file.write(message_to_yaml(defect))
                        file.write("\n")
                        file.write("DEFECT POSITION IN WORLD: \n")
                        file.write(str(dfts_abs_pos[i]))
                        file.write("\n")
                        file.write("DISTANCE FROM THE START POINT: \n")
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
    
    def calc_dfts_pos(self, height, msg: Defects) -> List[Tuple[float, float]]:
        half_hon_rad = self.rad(CAM_HOR_ANGLE / 2)
        half_ver_rad = self.rad(CAM_VER_ANGLE / 2)

        # a, b: Object size in real world
        a = 2 * height * math.tan(half_hon_rad)
        b = 2 * height * math.tan(half_ver_rad)

        scale_x = a / msg.img_width
        scale_y = b / msg.img_height

        res = []

        # Defects position relative to center of the image in real world
        for dft in msg.defects:
            x = dft.center.x - msg.img_width / 2
            y = msg.img_height / 2 - dft.center.y
            res.append((scale_x * x, scale_y * y))

        return res
    
    def get_distance(self, msg: GpsFix) -> Tuple[float, float, float, float]:
        if self.init_longitude == 0 and self.init_altitude == 0 \
            and self.init_altitude == 0:
            self.init_longitude = msg.gps_fix.longitude
            self.init_latitude = msg.gps_fix.latitude
            self.init_altitude = msg.gps_fix.altitude

            return 0, 0, 0, 0
        else:
            point1 = (self.init_latitude, self.init_longitude)
            point2 = (msg.gps_fix.latitude, msg.gps_fix.longitude)

            distance_2d = geodesic(point1, point2).m

            avg_lat = (self.init_latitude + msg.gps_fix.latitude) / 2
            avg_lon = (self.init_longitude + msg.gps_fix.longitude) / 2

            x = geodesic((avg_lat, self.init_longitude), (avg_lat, msg.gps_fix.longitude)).m
            y = geodesic((self.init_latitude, avg_lon), (msg.gps_fix.latitude, avg_lon)).m

            # Must be the height relative to the current ground plane.
            z = msg.gps_fix.altitude - SOOCHOW_GROUND_ALTITUDE

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
            
    