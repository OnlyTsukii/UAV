// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from location_msgs:msg/Mix.idl
// generated code does not contain a copyright notice
#include "location_msgs/msg/detail/mix__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "location_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "location_msgs/msg/detail/mix__struct.h"
#include "location_msgs/msg/detail/mix__functions.h"
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

#include "location_msgs/msg/detail/defects__functions.h"  // defects
#include "sensor_msgs/msg/detail/nav_sat_fix__functions.h"  // gps_fix

// forward declare type support functions
size_t get_serialized_size_location_msgs__msg__Defects(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_location_msgs__msg__Defects(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, location_msgs, msg, Defects)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_location_msgs
size_t get_serialized_size_sensor_msgs__msg__NavSatFix(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_location_msgs
size_t max_serialized_size_sensor_msgs__msg__NavSatFix(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_location_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, NavSatFix)();


using _Mix__ros_msg_type = location_msgs__msg__Mix;

static bool _Mix__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Mix__ros_msg_type * ros_message = static_cast<const _Mix__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
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

  // Field name: yaw
  {
    cdr << ros_message->yaw;
  }

  // Field name: defects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, location_msgs, msg, Defects
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->defects, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Mix__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Mix__ros_msg_type * ros_message = static_cast<_Mix__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
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

  // Field name: yaw
  {
    cdr >> ros_message->yaw;
  }

  // Field name: defects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, location_msgs, msg, Defects
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->defects))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_location_msgs
size_t get_serialized_size_location_msgs__msg__Mix(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Mix__ros_msg_type * ros_message = static_cast<const _Mix__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_fix

  current_alignment += get_serialized_size_sensor_msgs__msg__NavSatFix(
    &(ros_message->gps_fix), current_alignment);
  // field.name yaw
  {
    size_t item_size = sizeof(ros_message->yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name defects

  current_alignment += get_serialized_size_location_msgs__msg__Defects(
    &(ros_message->defects), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Mix__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_location_msgs__msg__Mix(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_location_msgs
size_t max_serialized_size_location_msgs__msg__Mix(
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

  // member: id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gps_fix
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__NavSatFix(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: defects
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_location_msgs__msg__Defects(
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
    using DataType = location_msgs__msg__Mix;
    is_plain =
      (
      offsetof(DataType, defects) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Mix__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_location_msgs__msg__Mix(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Mix = {
  "location_msgs::msg",
  "Mix",
  _Mix__cdr_serialize,
  _Mix__cdr_deserialize,
  _Mix__get_serialized_size,
  _Mix__max_serialized_size
};

static rosidl_message_type_support_t _Mix__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Mix,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, location_msgs, msg, Mix)() {
  return &_Mix__type_support;
}

#if defined(__cplusplus)
}
#endif
