import rclpy
import rclpy.logging

from rclpy.node import Node
from std_msgs.msg import Header, Int32
from sensor_msgs.msg import NavSatFix, NavSatStatus
from location_msgs.msg import GpsFix


LAT_PER_METER = 0.00000905
LON_PER_METER = 0.0000103

class GPS_Simulator(Node):

    def __init__(self):
        super().__init__("gps_simulator")

        self.gps_publisher = self.create_publisher(GpsFix, "gps", 10)
        self.ctrl_publisher = self.create_publisher(Int32, "ctrl_cmd", 10)

        self.timer = self.create_timer(2, self.timer_callback)
        self.gps_id = 0

        self.init_lon = 120.652158
        self.init_lat = 31.307415
        self.init_alt = 10.0

        self.lat_dif_thr = 0.000009
        self.lon_dif_thr = 0.00001
        self.alt_dif_thr = 1.0

        self.pre_lon = 0
        self.pre_lat = 0
        self.pre_alt = 0

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

        # self.init_lat += LAT_PER_METER
        # self.init_lon += LON_PER_METER
        self.init_alt += 1.0

        gps_fix.position_covariance = (51.84, 0.0, 0.0, 0.0, 51.84, 0.0, 0.0, 0.0, 829.44)
        gps_fix.position_covariance_type = NavSatFix.COVARIANCE_TYPE_APPROXIMATED

        self.send_ctrl(gps_fix)

    def send_ctrl(self, gps_fix):
        if self.pre_alt != 0:
            # lon_cur_dev = abs(gps_fix.longitude - self.pre_lon)
            # lat_cur_dev = abs(gps_fix.latitude - self.pre_lat)
            alt_cur_dev = abs(gps_fix.altitude - self.pre_alt)

            # self.get_logger().info(f"gps position deviation: {lon_cur_dev, lat_cur_dev, alt_cur_dev}")

            # if lon_cur_dev >= self.lon_dif_thr or lat_cur_dev >= self.lat_dif_thr \
            #     or alt_cur_dev >= self.alt_dif_thr:
            if alt_cur_dev >= self.alt_dif_thr:
                fix = GpsFix()
                fix.gps_fix = gps_fix
                fix.gps_id = self.gps_id
                self.gps_publisher.publish(fix)
                self.get_logger().info(f"Publishing GPS message {fix.gps_id}")

                ctrl_cmd = Int32()
                ctrl_cmd.data = self.gps_id
                self.ctrl_publisher.publish(ctrl_cmd)
                self.get_logger().info(f"Publishing IR camera control message { ctrl_cmd.data }")

                self.gps_id += 1
                # self.pre_lon = gps_fix.longitude
                # self.pre_lat = gps_fix.latitude
                self.pre_alt = gps_fix.altitude
        else:
            fix = GpsFix()
            fix.gps_fix = gps_fix
            fix.gps_id = self.gps_id
            self.gps_publisher.publish(fix)
            self.get_logger().info(f"Publishing GPS message {fix.gps_id}")

            ctrl_cmd = Int32()
            ctrl_cmd.data = self.gps_id
            self.ctrl_publisher.publish(ctrl_cmd)
            self.get_logger().info(f"Publishing IR camera control message { ctrl_cmd.data }")

            self.gps_id += 1
            # self.pre_lon = gps_fix.longitude
            # self.pre_lat = gps_fix.latitude
            self.pre_alt = gps_fix.altitude


def main(args=None):

    rclpy.init(args=args)

    gps_simulator = GPS_Simulator()

    rclpy.spin(gps_simulator)

    gps_simulator.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()