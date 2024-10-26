// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from location_msgs:msg/DefectBox.idl
// generated code does not contain a copyright notice
#include "location_msgs/msg/detail/defect_box__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "location_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "location_msgs/msg/detail/defect_box__struct.h"
#include "location_msgs/msg/detail/defect_box__functions.h"
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

#include "location_msgs/msg/detail/pixel_point__functions.h"  // bottom_left, bottom_right, center, top_left, top_right

// forward declare type support functions
size_t get_serialized_size_location_msgs__msg__PixelPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_location_msgs__msg__PixelPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, location_msgs, msg, PixelPoint)();


using _DefectBox__ros_msg_type = location_msgs__msg__DefectBox;

static bool _DefectBox__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DefectBox__ros_msg_type * ros_message = static_cast<const _DefectBox__ros_msg_type *>(untyped_ros_message);
  // Field name: center
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, location_msgs, msg, PixelPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->center, cdr))
    {
      return false;
    }
  }

  // Field name: top_left
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, location_msgs, msg, PixelPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->top_left, cdr))
    {
      return false;
    }
  }

  // Field name: top_right
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, location_msgs, msg, PixelPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->top_right, cdr))
    {
      return false;
    }
  }

  // Field name: bottom_left
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, location_msgs, msg, PixelPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bottom_left, cdr))
    {
      return false;
    }
  }

  // Field name: bottom_right
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, location_msgs, msg, PixelPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bottom_right, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _DefectBox__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DefectBox__ros_msg_type * ros_message = static_cast<_DefectBox__ros_msg_type *>(untyped_ros_message);
  // Field name: center
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, location_msgs, msg, PixelPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->center))
    {
      return false;
    }
  }

  // Field name: top_left
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, location_msgs, msg, PixelPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->top_left))
    {
      return false;
    }
  }

  // Field name: top_right
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, location_msgs, msg, PixelPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->top_right))
    {
      return false;
    }
  }

  // Field name: bottom_left
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, location_msgs, msg, PixelPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bottom_left))
    {
      return false;
    }
  }

  // Field name: bottom_right
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, location_msgs, msg, PixelPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bottom_right))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_location_msgs
size_t get_serialized_size_location_msgs__msg__DefectBox(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DefectBox__ros_msg_type * ros_message = static_cast<const _DefectBox__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name center

  current_alignment += get_serialized_size_location_msgs__msg__PixelPoint(
    &(ros_message->center), current_alignment);
  // field.name top_left

  current_alignment += get_serialized_size_location_msgs__msg__PixelPoint(
    &(ros_message->top_left), current_alignment);
  // field.name top_right

  current_alignment += get_serialized_size_location_msgs__msg__PixelPoint(
    &(ros_message->top_right), current_alignment);
  // field.name bottom_left

  current_alignment += get_serialized_size_location_msgs__msg__PixelPoint(
    &(ros_message->bottom_left), current_alignment);
  // field.name bottom_right

  current_alignment += get_serialized_size_location_msgs__msg__PixelPoint(
    &(ros_message->bottom_right), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _DefectBox__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_location_msgs__msg__DefectBox(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_location_msgs
size_t max_serialized_size_location_msgs__msg__DefectBox(
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

  // member: center
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_location_msgs__msg__PixelPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: top_left
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_location_msgs__msg__PixelPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: top_right
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_location_msgs__msg__PixelPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: bottom_left
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_location_msgs__msg__PixelPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: bottom_right
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_location_msgs__msg__PixelPoint(
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
    using DataType = location_msgs__msg__DefectBox;
    is_plain =
      (
      offsetof(DataType, bottom_right) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DefectBox__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_location_msgs__msg__DefectBox(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DefectBox = {
  "location_msgs::msg",
  "DefectBox",
  _DefectBox__cdr_serialize,
  _DefectBox__cdr_deserialize,
  _DefectBox__get_serialized_size,
  _DefectBox__max_serialized_size
};

static rosidl_message_type_support_t _DefectBox__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DefectBox,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, location_msgs, msg, DefectBox)() {
  return &_DefectBox__type_support;
}

#if defined(__cplusplus)
}
#endif
