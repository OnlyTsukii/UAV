#!/bin/bash

# SCRIPT_DIR="/home/x650/UAV/Shell"

# SCRIPTS=(
#     "start_camera.sh"
#     "start_mavros.sh"
#     "start_ros2.sh"
# )

# for SCRIPT in $SCRIPTS; do
#     SCRIPT_PATH=$SCRIPT_DIR/$SCRIPT
#     if [[ -x $SCRIPT_PATH ]]; then
#         echo "Starting $SCRIPT_PATH..."
#         $SCRIPT_PATH &
#         /bin/sleep 3
#     else
#         echo "Cannot execute $SCRIPT_PATH: not found or not executable"
#     fi
# done

# wait

# echo "All scripts have been started."

# /bin/sleep 3

# export TERM=xterm-256color
# /home/x650/UAV/Camera/Demo &


# /bin/sleep 3

# source /opt/ros/humble/setup.bash
# ros2 launch rosbridge_server rosbridge_websocket_launch.xml

/bin/sleep 3

source /opt/ros/humble/setup.bash

# ros2 run usb_cam usb_cam_node_exe --ros-args --params-file /home/x650/cam2k_params.yaml &

ros2 launch mavros px4.launch &

/bin/sleep 3

source /home/x650/UAV/ROS2/install/setup.bash
ros2 launch uav_patrol uav_patrol.launch.py 

