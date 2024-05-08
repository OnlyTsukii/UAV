#!/bin/bash

source /home/xs/UAV/ROS2/install/setup.bash

ros2 launch uav_patrol uav_patrol.launch.py &

# ros2 launch ctrl_relayer ctrl_relayer.launch.py &
# ros2 launch gps_handler gps_simulator.launch.py &
# ros2 launch object_detector object_detector.launch.py &
# ros2 launch tf_converter tf_converter.launch.py &

exit 0
