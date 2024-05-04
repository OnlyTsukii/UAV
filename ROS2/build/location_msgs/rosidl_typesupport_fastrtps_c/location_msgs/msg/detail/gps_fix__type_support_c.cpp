// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from location_msgs:msg/GpsFix.idl
// generated code does not contain a copyright notice
#include "location_msgs/msg/detail/gps_fix__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "location_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "location_msgs/msg/detail/gps_fix__struct.h"
#include "location_msgs/msg/detail/gps_fix__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "sensor_msgs/msg/detail/nav_sat_fix__functions.h"  // gps_fix

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_location_msgs
size_t get_serialized_size_sensor_msgs__msg__NavSatFix(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_location_msgs
size_t max_serialized_size_sensor_msgs__msg__NavSatFix(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_location_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, NavSatFix)();


using _GpsFix__ros_msg_type = location_msgs__msg__GpsFix;

static bool _GpsFix__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GpsFix__ros_msg_type * ros_message = static_cast<const _GpsFix__ros_msg_type *>(untyped_ros_message);
  // Field name: gps_id
  {
    cdr << ros_message->gps_id;
  }

  // Field name: gps_fix
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, NavSatFix
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gps_fix, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GpsFix__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GpsFix__ros_msg_type * ros_message = static_cast<_GpsFix__ros_msg_type *>(untyped_ros_message);
  // Field name: gps_id
  {
    cdr >> ros_message->gps_id;
  }

  // Field name: gps_fix
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, NavSatFix
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gps_fix))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_location_msgs
size_t get_serialized_size_location_msgs__msg__GpsFix(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GpsFix__ros_msg_type * ros_message = static_cast<const _GpsFix__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name gps_id
  {
    size_t item_size = sizeof(ros_message->gps_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_fix

  current_alignment += get_serialized_size_sensor_msgs__msg__NavSatFix(
    &(ros_message->gps_fix), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GpsFix__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_location_msgs__msg__GpsFix(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_location_msgs
size_t max_serialized_size_location_msgs__msg__GpsFix(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: gps_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gps_fix
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__NavSatFix(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GpsFix__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_location_msgs__msg__GpsFix(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GpsFix = {
  "location_msgs::msg",
  "GpsFix",
  _GpsFix__cdr_serialize,
  _GpsFix__cdr_deserialize,
  _GpsFix__get_serialized_size,
  _GpsFix__max_serialized_size
};

static rosidl_message_type_support_t _GpsFix__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GpsFix,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, location_msgs, msg, GpsFix)() {
  return &_GpsFix__type_support;
}

#if defined(__cplusplus)
}
#endif
