// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from location_msgs:msg/Yaw.idl
// generated code does not contain a copyright notice
#include "location_msgs/msg/detail/yaw__rosidl_typesupport_fastrtps_cpp.hpp"
#include "location_msgs/msg/detail/yaw__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace location_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_location_msgs
cdr_serialize(
  const location_msgs::msg::Yaw & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: yaw_id
  cdr << ros_message.yaw_id;
  // Member: yaw
  cdr << ros_message.yaw;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_location_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  location_msgs::msg::Yaw & ros_message)
{
  // Member: yaw_id
  cdr >> ros_message.yaw_id;

  // Member: yaw
  cdr >> ros_message.yaw;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_location_msgs
get_serialized_size(
  const location_msgs::msg::Yaw & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: yaw_id
  {
    size_t item_size = sizeof(ros_message.yaw_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw
  {
    size_t item_size = sizeof(ros_message.yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_location_msgs
max_serialized_size_Yaw(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: yaw_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Yaw__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const location_msgs::msg::Yaw *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Yaw__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<location_msgs::msg::Yaw *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Yaw__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const location_msgs::msg::Yaw *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Yaw__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Yaw(full_bounded, 0);
}

static message_type_support_callbacks_t _Yaw__callbacks = {
  "location_msgs::msg",
  "Yaw",
  _Yaw__cdr_serialize,
  _Yaw__cdr_deserialize,
  _Yaw__get_serialized_size,
  _Yaw__max_serialized_size
};

static rosidl_message_type_support_t _Yaw__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Yaw__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace location_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_location_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<location_msgs::msg::Yaw>()
{
  return &location_msgs::msg::typesupport_fastrtps_cpp::_Yaw__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, location_msgs, msg, Yaw)() {
  return &location_msgs::msg::typesupport_fastrtps_cpp::_Yaw__handle;
}

#ifdef __cplusplus
}
#endif
