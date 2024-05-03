from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='gps_handler',
            executable='gps_simulator',
            name='gps_simulator'
        ),
    ])