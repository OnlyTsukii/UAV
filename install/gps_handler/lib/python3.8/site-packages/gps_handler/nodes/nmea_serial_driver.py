import rclpy
import serial
import serial.tools.list_ports


from gps_handler.driver import Ros2NMEADriver


def find_serial_port(vid, pid) -> str:
    ports = serial.tools.list_ports.comports()
    for port in sorted(ports):
        if port.vid == vid and port.pid == pid:
            return port.device
    return None

def main(args=None):
    rclpy.init(args=args)

    driver = Ros2NMEADriver()
    frame_id = driver.get_frame_id()

    vid = driver.declare_parameter('vid', 0x0001).value
    pid = driver.declare_parameter('pid', 0x0002).value
    baud_rate = driver.declare_parameter('baud_rate', 9600).value

    try:
        port = find_serial_port(vid,pid)
        GPS = serial.Serial(port=port, baudrate=baud_rate, timeout=2)
        driver.get_logger().info("Successfully connected to {0} at {1}.".format(port, baud_rate))
        try:
            while rclpy.ok():
                data = GPS.readline().strip()
                try:
                    if isinstance(data, bytes):
                        data = data.decode("utf-8")
                    driver.add_sentence(data, frame_id)
                except ValueError as e:
                    driver.get_logger().warn(
                        "Value error, likely due to missing fields in the NMEA message. Error was: %s. "
                        "Please report this issue at github.com/ros-drivers/nmea_navsat_driver, including a bag file "
                        "with the NMEA sentences that caused it." % e)

        except Exception as e:
            driver.get_logger().error("Ros error: {0}".format(e))
            GPS.close()  # Close GPS serial port
    except serial.SerialException as ex:
        driver.get_logger().fatal("Could not open serial port: I/O error({0}): {1}".format(ex.errno, ex.strerror))
