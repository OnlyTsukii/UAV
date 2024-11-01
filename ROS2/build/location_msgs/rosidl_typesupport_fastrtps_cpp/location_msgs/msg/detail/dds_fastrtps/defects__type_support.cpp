// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from location_msgs:msg/Defects.idl
// generated code does not contain a copyright notice
#include "location_msgs/msg/detail/defects__rosidl_typesupport_fastrtps_cpp.hpp"
#include "location_msgs/msg/detail/defects__struct.hpp"

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
  const location_msgs::msg::DefectBox &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  location_msgs::msg::DefectBox &);
size_t get_serialized_size(
  const location_msgs::msg::DefectBox &,
  size_t current_alignment);
size_t
max_serialized_size_DefectBox(
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
  const location_msgs::msg::Defects & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: img_width
  cdr << ros_message.img_width;
  // Member: img_height
  cdr << ros_message.img_height;
  // Member: defects
  {
    size_t size = ros_message.defects.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      location_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.defects[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_location_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  location_msgs::msg::Defects & ros_message)
{
  // Member: img_width
  cdr >> ros_message.img_width;

  // Member: img_height
  cdr >> ros_message.img_height;

  // Member: defects
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.defects.resize(size);
    for (size_t i = 0; i < size; i++) {
      location_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.defects[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_location_msgs
get_serialized_size(
  const location_msgs::msg::Defects & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: img_width
  {
    size_t item_size = sizeof(ros_message.img_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: img_height
  {
    size_t item_size = sizeof(ros_message.img_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: defects
  {
    size_t array_size = ros_message.defects.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        location_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.defects[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_location_msgs
max_serialized_size_Defects(
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


  // Member: img_width
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: img_height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: defects
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        location_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DefectBox(
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
    using DataType = location_msgs::msg::Defects;
    is_plain =
      (
      offsetof(DataType, defects) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Defects__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const location_msgs::msg::Defects *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Defects__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<location_msgs::msg::Defects *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Defects__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const location_msgs::msg::Defects *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Defects__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Defects(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Defects__callbacks = {
  "location_msgs::msg",
  "Defects",
  _Defects__cdr_serialize,
  _Defects__cdr_deserialize,
  _Defects__get_serialized_size,
  _Defects__max_serialized_size
};

static rosidl_message_type_support_t _Defects__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Defects__callbacks,
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
get_message_type_support_handle<location_msgs::msg::Defects>()
{
  return &location_msgs::msg::typesupport_fastrtps_cpp::_Defects__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, location_msgs, msg, Defects)() {
  return &location_msgs::msg::typesupport_fastrtps_cpp::_Defects__handle;
}

#ifdef __cplusplus
}
#endif
