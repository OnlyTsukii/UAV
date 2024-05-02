// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nmea_msgs:msg/Defects.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nmea_msgs/msg/detail/defects__rosidl_typesupport_introspection_c.h"
#include "nmea_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nmea_msgs/msg/detail/defects__functions.h"
#include "nmea_msgs/msg/detail/defects__struct.h"


// Include directives for member types
// Member `defects`
#include "nmea_msgs/msg/defect_box.h"
// Member `defects`
#include "nmea_msgs/msg/detail/defect_box__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Defects__rosidl_typesupport_introspection_c__Defects_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nmea_msgs__msg__Defects__init(message_memory);
}

void Defects__rosidl_typesupport_introspection_c__Defects_fini_function(void * message_memory)
{
  nmea_msgs__msg__Defects__fini(message_memory);
}

size_t Defects__rosidl_typesupport_introspection_c__size_function__DefectBox__defects(
  const void * untyped_member)
{
  const nmea_msgs__msg__DefectBox__Sequence * member =
    (const nmea_msgs__msg__DefectBox__Sequence *)(untyped_member);
  return member->size;
}

const void * Defects__rosidl_typesupport_introspection_c__get_const_function__DefectBox__defects(
  const void * untyped_member, size_t index)
{
  const nmea_msgs__msg__DefectBox__Sequence * member =
    (const nmea_msgs__msg__DefectBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Defects__rosidl_typesupport_introspection_c__get_function__DefectBox__defects(
  void * untyped_member, size_t index)
{
  nmea_msgs__msg__DefectBox__Sequence * member =
    (nmea_msgs__msg__DefectBox__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Defects__rosidl_typesupport_introspection_c__resize_function__DefectBox__defects(
  void * untyped_member, size_t size)
{
  nmea_msgs__msg__DefectBox__Sequence * member =
    (nmea_msgs__msg__DefectBox__Sequence *)(untyped_member);
  nmea_msgs__msg__DefectBox__Sequence__fini(member);
  return nmea_msgs__msg__DefectBox__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Defects__rosidl_typesupport_introspection_c__Defects_message_member_array[4] = {
  {
    "defect_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__Defects, defect_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "img_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__Defects, img_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "img_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__Defects, img_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "defects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__Defects, defects),  // bytes offset in struct
    NULL,  // default value
    Defects__rosidl_typesupport_introspection_c__size_function__DefectBox__defects,  // size() function pointer
    Defects__rosidl_typesupport_introspection_c__get_const_function__DefectBox__defects,  // get_const(index) function pointer
    Defects__rosidl_typesupport_introspection_c__get_function__DefectBox__defects,  // get(index) function pointer
    Defects__rosidl_typesupport_introspection_c__resize_function__DefectBox__defects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Defects__rosidl_typesupport_introspection_c__Defects_message_members = {
  "nmea_msgs__msg",  // message namespace
  "Defects",  // message name
  4,  // number of fields
  sizeof(nmea_msgs__msg__Defects),
  Defects__rosidl_typesupport_introspection_c__Defects_message_member_array,  // message members
  Defects__rosidl_typesupport_introspection_c__Defects_init_function,  // function to initialize message memory (memory has to be allocated)
  Defects__rosidl_typesupport_introspection_c__Defects_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Defects__rosidl_typesupport_introspection_c__Defects_message_type_support_handle = {
  0,
  &Defects__rosidl_typesupport_introspection_c__Defects_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nmea_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nmea_msgs, msg, Defects)() {
  Defects__rosidl_typesupport_introspection_c__Defects_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nmea_msgs, msg, DefectBox)();
  if (!Defects__rosidl_typesupport_introspection_c__Defects_message_type_support_handle.typesupport_identifier) {
    Defects__rosidl_typesupport_introspection_c__Defects_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Defects__rosidl_typesupport_introspection_c__Defects_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
