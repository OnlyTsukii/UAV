// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nmea_msgs:msg/Defects.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/defects__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nmea_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nmea_msgs/msg/detail/defects__struct.h"
#include "nmea_msgs/msg/detail/defects__functions.h"
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

#include "nmea_msgs/msg/detail/defect_box__functions.h"  // defects

// forward declare type support functions
size_t get_serialized_size_nmea_msgs__msg__DefectBox(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nmea_msgs__msg__DefectBox(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nmea_msgs, msg, DefectBox)();


using _Defects__ros_msg_type = nmea_msgs__msg__Defects;

static bool _Defects__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Defects__ros_msg_type * ros_message = static_cast<const _Defects__ros_msg_type *>(untyped_ros_message);
  // Field name: defect_id
  {
    cdr << ros_message->defect_id;
  }

  // Field name: img_width
  {
    cdr << ros_message->img_width;
  }

  // Field name: img_height
  {
    cdr << ros_message->img_height;
  }

  // Field name: defects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nmea_msgs, msg, DefectBox
      )()->data);
    size_t size = ros_message->defects.size;
    auto array_ptr = ros_message->defects.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _Defects__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Defects__ros_msg_type * ros_message = static_cast<_Defects__ros_msg_type *>(untyped_ros_message);
  // Field name: defect_id
  {
    cdr >> ros_message->defect_id;
  }

  // Field name: img_width
  {
    cdr >> ros_message->img_width;
  }

  // Field name: img_height
  {
    cdr >> ros_message->img_height;
  }

  // Field name: defects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nmea_msgs, msg, DefectBox
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->defects.data) {
      nmea_msgs__msg__DefectBox__Sequence__fini(&ros_message->defects);
    }
    if (!nmea_msgs__msg__DefectBox__Sequence__init(&ros_message->defects, size)) {
      fprintf(stderr, "failed to create array for field 'defects'");
      return false;
    }
    auto array_ptr = ros_message->defects.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nmea_msgs
size_t get_serialized_size_nmea_msgs__msg__Defects(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Defects__ros_msg_type * ros_message = static_cast<const _Defects__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name defect_id
  {
    size_t item_size = sizeof(ros_message->defect_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name img_width
  {
    size_t item_size = sizeof(ros_message->img_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name img_height
  {
    size_t item_size = sizeof(ros_message->img_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name defects
  {
    size_t array_size = ros_message->defects.size;
    auto array_ptr = ros_message->defects.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_nmea_msgs__msg__DefectBox(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Defects__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nmea_msgs__msg__Defects(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nmea_msgs
size_t max_serialized_size_nmea_msgs__msg__Defects(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: defect_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: img_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: img_height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: defects
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nmea_msgs__msg__DefectBox(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Defects__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nmea_msgs__msg__Defects(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Defects = {
  "nmea_msgs::msg",
  "Defects",
  _Defects__cdr_serialize,
  _Defects__cdr_deserialize,
  _Defects__get_serialized_size,
  _Defects__max_serialized_size
};

static rosidl_message_type_support_t _Defects__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Defects,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nmea_msgs, msg, Defects)() {
  return &_Defects__type_support;
}

#if defined(__cplusplus)
}
#endif
