from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='ctrl_relayer',
            executable='cmd_subscriber',
            name='cmd_subscriber'
        ),
    ])