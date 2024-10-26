// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from location_msgs:msg/Mix.idl
// generated code does not contain a copyright notice
#include "location_msgs/msg/detail/mix__rosidl_typesupport_fastrtps_cpp.hpp"
#include "location_msgs/msg/detail/mix__struct.hpp"

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
namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::NavSatFix &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::NavSatFix &);
size_t get_serialized_size(
  const sensor_msgs::msg::NavSatFix &,
  size_t current_alignment);
size_t
max_serialized_size_NavSatFix(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs

namespace location_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const location_msgs::msg::Defects &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  location_msgs::msg::Defects &);
size_t get_serialized_size(
  const location_msgs::msg::Defects &,
  size_t current_alignment);
size_t
max_serialized_size_Defects(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace location_msgs


namespace location_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_location_msgs
cdr_serialize(
  const location_msgs::msg::Mix & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;
  // Member: gps_fix
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.gps_fix,
    cdr);
  // Member: yaw
  cdr << ros_message.yaw;
  // Member: defects
  location_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.defects,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_location_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  location_msgs::msg::Mix & ros_message)
{
  // Member: id
  cdr >> ros_message.id;

  // Member: gps_fix
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.gps_fix);

  // Member: yaw
  cdr >> ros_message.yaw;

  // Member: defects
  location_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.defects);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_location_msgs
get_serialized_size(
  const location_msgs::msg::Mix & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_fix

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.gps_fix, current_alignment);
  // Member: yaw
  {
    size_t item_size = sizeof(ros_message.yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: defects

  current_alignment +=
    location_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.defects, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_location_msgs
max_serialized_size_Mix(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gps_fix
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NavSatFix(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: defects
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        location_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Defects(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = location_msgs::msg::Mix;
    is_plain =
      (
      offsetof(DataType, defects) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Mix__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const location_msgs::msg::Mix *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Mix__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<location_msgs::msg::Mix *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Mix__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const location_msgs::msg::Mix *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Mix__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Mix(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Mix__callbacks = {
  "location_msgs::msg",
  "Mix",
  _Mix__cdr_serialize,
  _Mix__cdr_deserialize,
  _Mix__get_serialized_size,
  _Mix__max_serialized_size
};

static rosidl_message_type_support_t _Mix__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Mix__callbacks,
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
get_message_type_support_handle<location_msgs::msg::Mix>()
{
  return &location_msgs::msg::typesupport_fastrtps_cpp::_Mix__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, location_msgs, msg, Mix)() {
  return &location_msgs::msg::typesupport_fastrtps_cpp::_Mix__handle;
}

#ifdef __cplusplus
}
#endif
