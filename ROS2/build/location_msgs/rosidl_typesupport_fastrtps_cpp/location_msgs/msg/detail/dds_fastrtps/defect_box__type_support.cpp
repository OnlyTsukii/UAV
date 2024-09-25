// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from location_msgs:msg/DefectBox.idl
// generated code does not contain a copyright notice
#include "location_msgs/msg/detail/defect_box__rosidl_typesupport_fastrtps_cpp.hpp"
#include "location_msgs/msg/detail/defect_box__struct.hpp"

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
bool cdr_serialize(
  const location_msgs::msg::PixelPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  location_msgs::msg::PixelPoint &);
size_t get_serialized_size(
  const location_msgs::msg::PixelPoint &,
  size_t current_alignment);
size_t
max_serialized_size_PixelPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace location_msgs

// functions for location_msgs::msg::PixelPoint already declared above

// functions for location_msgs::msg::PixelPoint already declared above

// functions for location_msgs::msg::PixelPoint already declared above

// functions for location_msgs::msg::PixelPoint already declared above


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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: center
  location_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.center,
    cdr);
  // Member: top_left
  location_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.top_left,
    cdr);
  // Member: top_right
  location_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.top_right,
    cdr);
  // Member: bottom_left
  location_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.bottom_left,
    cdr);
  // Member: bottom_right
  location_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.bottom_right,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_location_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  location_msgs::msg::DefectBox & ros_message)
{
  // Member: center
  location_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.center);

  // Member: top_left
  location_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.top_left);

  // Member: top_right
  location_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.top_right);

  // Member: bottom_left
  location_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.bottom_left);

  // Member: bottom_right
  location_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.bottom_right);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_location_msgs
get_serialized_size(
  const location_msgs::msg::DefectBox & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: center

  current_alignment +=
    location_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.center, current_alignment);
  // Member: top_left

  current_alignment +=
    location_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.top_left, current_alignment);
  // Member: top_right

  current_alignment +=
    location_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.top_right, current_alignment);
  // Member: bottom_left

  current_alignment +=
    location_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.bottom_left, current_alignment);
  // Member: bottom_right

  current_alignment +=
    location_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.bottom_right, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_location_msgs
max_serialized_size_DefectBox(
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


  // Member: center
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        location_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PixelPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: top_left
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        location_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PixelPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: top_right
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        location_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PixelPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: bottom_left
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        location_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PixelPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: bottom_right
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        location_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PixelPoint(
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
    using DataType = location_msgs::msg::DefectBox;
    is_plain =
      (
      offsetof(DataType, bottom_right) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _DefectBox__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const location_msgs::msg::DefectBox *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DefectBox__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<location_msgs::msg::DefectBox *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DefectBox__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const location_msgs::msg::DefectBox *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DefectBox__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DefectBox(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DefectBox__callbacks = {
  "location_msgs::msg",
  "DefectBox",
  _DefectBox__cdr_serialize,
  _DefectBox__cdr_deserialize,
  _DefectBox__get_serialized_size,
  _DefectBox__max_serialized_size
};

static rosidl_message_type_support_t _DefectBox__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DefectBox__callbacks,
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
get_message_type_support_handle<location_msgs::msg::DefectBox>()
{
  return &location_msgs::msg::typesupport_fastrtps_cpp::_DefectBox__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, location_msgs, msg, DefectBox)() {
  return &location_msgs::msg::typesupport_fastrtps_cpp::_DefectBox__handle;
}

#ifdef __cplusplus
}
#endif
