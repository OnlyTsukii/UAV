// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from nmea_msgs:msg/Defects.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/defects__rosidl_typesupport_fastrtps_cpp.hpp"
#include "nmea_msgs/msg/detail/defects__struct.hpp"

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
  const nmea_msgs::msg::DefectBox &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nmea_msgs::msg::DefectBox &);
size_t get_serialized_size(
  const nmea_msgs::msg::DefectBox &,
  size_t current_alignment);
size_t
max_serialized_size_DefectBox(
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
  const nmea_msgs::msg::Defects & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: defect_id
  cdr << ros_message.defect_id;
  // Member: img_width
  cdr << ros_message.img_width;
  // Member: img_height
  cdr << ros_message.img_height;
  // Member: defects
  {
    size_t size = ros_message.defects.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      nmea_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.defects[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nmea_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nmea_msgs::msg::Defects & ros_message)
{
  // Member: defect_id
  cdr >> ros_message.defect_id;

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
      nmea_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.defects[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nmea_msgs
get_serialized_size(
  const nmea_msgs::msg::Defects & ros_message,
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
  // Member: defects
  {
    size_t array_size = ros_message.defects.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nmea_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.defects[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nmea_msgs
max_serialized_size_Defects(
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

  // Member: defects
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nmea_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DefectBox(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Defects__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nmea_msgs::msg::Defects *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Defects__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nmea_msgs::msg::Defects *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Defects__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nmea_msgs::msg::Defects *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Defects__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Defects(full_bounded, 0);
}

static message_type_support_callbacks_t _Defects__callbacks = {
  "nmea_msgs::msg",
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

}  // namespace nmea_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nmea_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nmea_msgs::msg::Defects>()
{
  return &nmea_msgs::msg::typesupport_fastrtps_cpp::_Defects__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nmea_msgs, msg, Defects)() {
  return &nmea_msgs::msg::typesupport_fastrtps_cpp::_Defects__handle;
}

#ifdef __cplusplus
}
#endif
