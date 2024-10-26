
import rclpy
import cv2
import threading
import time 
import signal
import sys

from copy import deepcopy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import Bool, Header, Float64
from sensor_msgs.msg import NavSatFix
from cv_bridge import CvBridge
from pygeodesy.geoids import GeoidPGM
from rclpy.qos import qos_profile_sensor_data

_egm96 = GeoidPGM("/usr/share/GeographicLib/geoids/egm96-5.pgm", kind=-3)

IMAGE_WIDTH         = 1920
IMAGE_HEIGHT        = 1080
DIRECTORY_PREFIX    = '/home/x650/UAV/USB_CAM/'

class cam_node(Node):
    def __init__(self, name):
        super().__init__(name)
        self.gps = None
        self.rel_alt = None
        self.stop = False

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
    
    def start_capture(self):
        cap = cv2.VideoCapture(0)

        if not cap.isOpened():
            self.get_logger().info("Can't open the camera")
            exit()

        cap.set(cv2.CAP_PROP_FRAME_WIDTH, IMAGE_WIDTH)
        cap.set(cv2.CAP_PROP_FRAME_HEIGHT, IMAGE_HEIGHT)
        cap.set(cv2.CAP_PROP_FPS, 30)

        while True:
            ret, frame = cap.read()
            if not ret:
                self.get_logger().info("Read frame failed")
                break
            
            print(time.time())
            # self.write_frame(frame)

            if cv2.waitKey(1) & 0xFF == ord('q') or self.stop:
                break

        cap.release()
        cv2.destroyAllWindows()

    def signal_handler(self):
        self.stop = True

    def write_frame(self, frame):
        timestamp = time.time()
        if self.gps is not None:
            self.get_logger().info('saving pic and gps')
            f = open(DIRECTORY_PREFIX + str(timestamp) + ".txt", "w")
            f.write(f"timestamp: {timestamp} \n")
            f.write(f"latitude: {self.gps.latitude} \n")
            f.write(f"longitude: {self.gps.longitude} \n")
            f.write(f"AMSL altitude: {self.gps.altitude} \n")
            f.write(f"REL altitude: {self.rel_alt} \n")
            f.close()
            cv2.imwrite(DIRECTORY_PREFIX + str(timestamp) + ".jpg", frame)
            self.get_logger().info('pic saved')
    
    def gps_callback(self, msg):
        self.gps = msg
        if self.gps is not None:
            self.gps.altitude = msg.altitude - self.geoid_height(
                msg.latitude, msg.longitude
            )
            # self.get_logger().info(f"new altitude is {self.gps.altitude}")
        else:
            self.get_logger().info("gps none")


def main(args=None):
    rclpy.init(args=args)
    node = cam_node("cam_node")

    signal.signal(signal.SIGINT, node.signal_handler)
    
    capture = threading.Thread(target=node.start_capture, args=())
    capture.start()

    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
