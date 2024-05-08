import rclpy
import serial
import time

from serial.tools import list_ports
from uav_patrol.gps_handler.driver import Ros2NMEADriver


def find_serial_port(vid, pid) -> str:
    ports = list_ports.comports()
    for port in sorted(ports):
        if port.vid == vid and port.pid == pid:
            return port.device
    return None

def get_port(driver, vid, pid) -> str:
    port = find_serial_port(vid,pid)
    while port == None:
        driver.get_logger().info("GPS port is None!")
        time.sleep(1)
        port = find_serial_port(vid,pid)
    return port

def main(args=None):
    rclpy.init(args=args)

    driver = Ros2NMEADriver()
    frame_id = driver.get_frame_id()

    vid = driver.declare_parameter('vid', 0x10c4).value
    pid = driver.declare_parameter('pid', 0xea60).value
    baud_rate = driver.declare_parameter('baud_rate', 9600).value

    try:
        port = get_port(driver, vid, pid)
        GPS = serial.Serial(port=port, baudrate=baud_rate, timeout=2)
        driver.get_logger().info("Successfully connected to {0} at {1}.".format(port, baud_rate))

        while rclpy.ok():
            try:
                data = GPS.readline().strip()
            except:
                port = get_port(driver, vid, pid)
                GPS = serial.Serial(port=port, baudrate=baud_rate, timeout=2)
                driver.get_logger().info("GPS device has reconnected.")
                continue

            try:
                if isinstance(data, bytes):
                    data = data.decode("utf-8")
                driver.add_sentence(data, frame_id)
            except ValueError as e:
                driver.get_logger().warn(
                    "Value error, likely due to missing fields in the NMEA message. Error was: %s. "
                    "Please report this issue at github.com/ros-drivers/nmea_navsat_driver, including a bag file "
                    "with the NMEA sentences that caused it." % e)

    except serial.SerialException as ex:
        driver.get_logger().fatal("Could not open serial port: I/O error({0}): {1}".format(ex.errno, ex.strerror))
