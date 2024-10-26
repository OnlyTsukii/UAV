// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from location_msgs:msg/DefectBox.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__DEFECT_BOX__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define LOCATION_MSGS__MSG__DETAIL__DEFECT_BOX__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "location_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "location_msgs/msg/detail/defect_box__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace location_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_location_msgs
cdr_serialize(
  const location_msgs::msg::DefectBox & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_location_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  location_msgs::msg::DefectBox & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_location_msgs
get_serialized_size(
  const location_msgs::msg::DefectBox & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_location_msgs
max_serialized_size_DefectBox(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace location_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_location_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, location_msgs, msg, DefectBox)();

#ifdef __cplusplus
}
#endif

#endif  // LOCATION_MSGS__MSG__DETAIL__DEFECT_BOX__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
