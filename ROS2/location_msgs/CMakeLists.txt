cmake_minimum_required(VERSION 3.5)

project(location_msgs)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
   "msg/Mix.msg"
   "msg/PixelPoint.msg"
   "msg/DefectBox.msg"
   "msg/Defects.msg"
   "msg/Yaw.msg"
   DEPENDENCIES std_msgs sensor_msgs
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()
