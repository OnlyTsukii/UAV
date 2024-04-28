from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='cmd_handler',
            namespace='cmd_handler',
            executable='cmd_publisher',
            name='cmd_publisher'
        ),
        Node(
            package='cmd_handler',
            namespace='cmd_handler',
            executable='cmd_subscriber',
            name='cmd_subscriber'
        ),
    ])