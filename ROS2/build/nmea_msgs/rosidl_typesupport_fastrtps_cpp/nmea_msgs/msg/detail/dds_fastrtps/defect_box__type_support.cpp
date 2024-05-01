// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from nmea_msgs:msg/DefectBox.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/defect_box__rosidl_typesupport_fastrtps_cpp.hpp"
#include "nmea_msgs/msg/detail/defect_box__struct.hpp"

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
namespace nmea_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nmea_msgs::msg::PixelPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nmea_msgs::msg::PixelPoint &);
size_t get_serialized_size(
  const nmea_msgs::msg::PixelPoint &,
  size_t current_alignment);
size_t
max_serialized_size_PixelPoint(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace nmea_msgs

namespace nmea_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nmea_msgs::msg::PixelPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nmea_msgs::msg::PixelPoint &);
size_t get_serialized_size(
  const nmea_msgs::msg::PixelPoint &,
  size_t current_alignment);
size_t
max_serialized_size_PixelPoint(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace nmea_msgs

namespace nmea_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nmea_msgs::msg::PixelPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nmea_msgs::msg::PixelPoint &);
size_t get_serialized_size(
  const nmea_msgs::msg::PixelPoint &,
  size_t current_alignment);
size_t
max_serialized_size_PixelPoint(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace nmea_msgs

namespace nmea_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nmea_msgs::msg::PixelPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nmea_msgs::msg::PixelPoint &);
size_t get_serialized_size(
  const nmea_msgs::msg::PixelPoint &,
  size_t current_alignment);
size_t
max_serialized_size_PixelPoint(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace nmea_msgs

namespace nmea_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nmea_msgs::msg::PixelPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nmea_msgs::msg::PixelPoint &);
size_t get_serialized_size(
  const nmea_msgs::msg::PixelPoint &,
  size_t current_alignment);
size_t
max_serialized_size_PixelPoint(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace nmea_msgs


namespace nmea_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nmea_msgs
cdr_serialize(
  const nmea_msgs::msg::DefectBox & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: defect_id
  cdr << ros_message.defect_id;
  // Member: img_width
  cdr << ros_message.img_width;
  // Member: img_height
  cdr << ros_message.img_height;
  // Member: center
  nmea_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.center,
    cdr);
  // Member: top_left
  nmea_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.top_left,
    cdr);
  // Member: top_right
  nmea_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.top_right,
    cdr);
  // Member: bottom_left
  nmea_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.bottom_left,
    cdr);
  // Member: bottom_right
  nmea_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.bottom_right,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nmea_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nmea_msgs::msg::DefectBox & ros_message)
{
  // Member: defect_id
  cdr >> ros_message.defect_id;

  // Member: img_width
  cdr >> ros_message.img_width;

  // Member: img_height
  cdr >> ros_message.img_height;

  // Member: center
  nmea_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.center);

  // Member: top_left
  nmea_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.top_left);

  // Member: top_right
  nmea_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.top_right);

  // Member: bottom_left
  nmea_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.bottom_left);

  // Member: bottom_right
  nmea_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.bottom_right);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nmea_msgs
get_serialized_size(
  const nmea_msgs::msg::DefectBox & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: defect_id
  {
    size_t item_size = sizeof(ros_message.defect_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
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
  // Member: center

  current_alignment +=
    nmea_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.center, current_alignment);
  // Member: top_left

  current_alignment +=
    nmea_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.top_left, current_alignment);
  // Member: top_right

  current_alignment +=
    nmea_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.top_right, current_alignment);
  // Member: bottom_left

  current_alignment +=
    nmea_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.bottom_left, current_alignment);
  // Member: bottom_right

  current_alignment +=
    nmea_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.bottom_right, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nmea_msgs
max_serialized_size_DefectBox(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: defect_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: img_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: img_height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: center
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nmea_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PixelPoint(
        full_bounded, current_alignment);
    }
  }

  // Member: top_left
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nmea_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PixelPoint(
        full_bounded, current_alignment);
    }
  }

  // Member: top_right
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nmea_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PixelPoint(
        full_bounded, current_alignment);
    }
  }

  // Member: bottom_left
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nmea_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PixelPoint(
        full_bounded, current_alignment);
    }
  }

  // Member: bottom_right
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nmea_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PixelPoint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _DefectBox__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nmea_msgs::msg::DefectBox *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DefectBox__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nmea_msgs::msg::DefectBox *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DefectBox__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nmea_msgs::msg::DefectBox *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DefectBox__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DefectBox(full_bounded, 0);
}

static message_type_support_callbacks_t _DefectBox__callbacks = {
  "nmea_msgs::msg",
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

}  // namespace nmea_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nmea_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nmea_msgs::msg::DefectBox>()
{
  return &nmea_msgs::msg::typesupport_fastrtps_cpp::_DefectBox__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nmea_msgs, msg, DefectBox)() {
  return &nmea_msgs::msg::typesupport_fastrtps_cpp::_DefectBox__handle;
}

#ifdef __cplusplus
}
#endif
