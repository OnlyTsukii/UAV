// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from nmea_msgs:msg/Gpgsa.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/gpgsa__rosidl_typesupport_fastrtps_cpp.hpp"
#include "nmea_msgs/msg/detail/gpgsa__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace nmea_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nmea_msgs
cdr_serialize(
  const nmea_msgs::msg::Gpgsa & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: message_id
  cdr << ros_message.message_id;
  // Member: auto_manual_mode
  cdr << ros_message.auto_manual_mode;
  // Member: fix_mode
  cdr << ros_message.fix_mode;
  // Member: sv_ids
  {
    cdr << ros_message.sv_ids;
  }
  // Member: pdop
  cdr << ros_message.pdop;
  // Member: hdop
  cdr << ros_message.hdop;
  // Member: vdop
  cdr << ros_message.vdop;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nmea_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nmea_msgs::msg::Gpgsa & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: message_id
  cdr >> ros_message.message_id;

  // Member: auto_manual_mode
  cdr >> ros_message.auto_manual_mode;

  // Member: fix_mode
  cdr >> ros_message.fix_mode;

  // Member: sv_ids
  {
    cdr >> ros_message.sv_ids;
  }

  // Member: pdop
  cdr >> ros_message.pdop;

  // Member: hdop
  cdr >> ros_message.hdop;

  // Member: vdop
  cdr >> ros_message.vdop;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nmea_msgs
get_serialized_size(
  const nmea_msgs::msg::Gpgsa & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: message_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message_id.size() + 1);
  // Member: auto_manual_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.auto_manual_mode.size() + 1);
  // Member: fix_mode
  {
    size_t item_size = sizeof(ros_message.fix_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sv_ids
  {
    size_t array_size = ros_message.sv_ids.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.sv_ids[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pdop
  {
    size_t item_size = sizeof(ros_message.pdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hdop
  {
    size_t item_size = sizeof(ros_message.hdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vdop
  {
    size_t item_size = sizeof(ros_message.vdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nmea_msgs
max_serialized_size_Gpgsa(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: message_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: auto_manual_mode
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: fix_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sv_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pdop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hdop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vdop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Gpgsa__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nmea_msgs::msg::Gpgsa *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Gpgsa__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nmea_msgs::msg::Gpgsa *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Gpgsa__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nmea_msgs::msg::Gpgsa *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Gpgsa__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Gpgsa(full_bounded, 0);
}

static message_type_support_callbacks_t _Gpgsa__callbacks = {
  "nmea_msgs::msg",
  "Gpgsa",
  _Gpgsa__cdr_serialize,
  _Gpgsa__cdr_deserialize,
  _Gpgsa__get_serialized_size,
  _Gpgsa__max_serialized_size
};

static rosidl_message_type_support_t _Gpgsa__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Gpgsa__callbacks,
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
get_message_type_support_handle<nmea_msgs::msg::Gpgsa>()
{
  return &nmea_msgs::msg::typesupport_fastrtps_cpp::_Gpgsa__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nmea_msgs, msg, Gpgsa)() {
  return &nmea_msgs::msg::typesupport_fastrtps_cpp::_Gpgsa__handle;
}

#ifdef __cplusplus
}
#endif
