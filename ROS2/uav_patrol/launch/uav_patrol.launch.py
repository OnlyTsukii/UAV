import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros import actions

def generate_launch_description():
    config_file = os.path.join(get_package_share_directory("uav_patrol"), "config", "gps_handler.yaml")
    driver_node = actions.Node(
        package='uav_patrol',
        executable='nmea_serial_driver',
        parameters=[config_file])
    
    return LaunchDescription([
        Node(
            package='uav_patrol',
            executable='cmd_subscriber',
            name='cmd_subscriber'
        ),
        Node(
            package='uav_patrol',
            executable='dft_publisher',
            name='dft_publisher'
        ),
        Node(
            package='uav_patrol',
            executable='tf_converter',
            name='tf_converter'
        ),
        Node(
            package='uav_patrol',
            executable='uav2cam_broadcaster',
            name='uav2cam_broadcaster'
        ),
        driver_node,
        # Node(
        #     package='uav_patrol',
        #     executable='gps_simulator',
        #     name='gps_simulator'
        # ),
    ])