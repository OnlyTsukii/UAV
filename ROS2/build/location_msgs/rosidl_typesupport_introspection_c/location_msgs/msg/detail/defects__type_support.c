// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from location_msgs:msg/Defects.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "location_msgs/msg/detail/defects__rosidl_typesupport_introspection_c.h"
#include "location_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "location_msgs/msg/detail/defects__functions.h"
#include "location_msgs/msg/detail/defects__struct.h"


// Include directives for member types
// Member `defects`
#include "location_msgs/msg/defect_box.h"
// Member `defects`
#include "location_msgs/msg/detail/defect_box__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void location_msgs__msg__Defects__rosidl_typesupport_introspection_c__Defects_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  location_msgs__msg__Defects__init(message_memory);
}

void location_msgs__msg__Defects__rosidl_typesupport_introspection_c__Defects_fini_function(void * message_memory)
{
  location_msgs__msg__Defects__fini(message_memory);
}

size_t location_msgs__msg__Defects__rosidl_typesupport_introspection_c__size_function__Defects__defects(
  const void * untyped_member)
{
  const location_msgs__msg__DefectBox__Sequence * member =
    (const location_msgs__msg__DefectBox__Sequence *)(untyped_member);
  return member->size;
}

const void * location_msgs__msg__Defects__rosidl_typesupport_introspection_c__get_const_function__Defects__defects(
  const void * untyped_member, size_t index)
{
  const location_msgs__msg__DefectBox__Sequence * member =
    (const location_msgs__msg__DefectBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void * location_msgs__msg__Defects__rosidl_typesupport_introspection_c__get_function__Defects__defects(
  void * untyped_member, size_t index)
{
  location_msgs__msg__DefectBox__Sequence * member =
    (location_msgs__msg__DefectBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void location_msgs__msg__Defects__rosidl_typesupport_introspection_c__fetch_function__Defects__defects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const location_msgs__msg__DefectBox * item =
    ((const location_msgs__msg__DefectBox *)
    location_msgs__msg__Defects__rosidl_typesupport_introspection_c__get_const_function__Defects__defects(untyped_member, index));
  location_msgs__msg__DefectBox * value =
    (location_msgs__msg__DefectBox *)(untyped_value);
  *value = *item;
}

void location_msgs__msg__Defects__rosidl_typesupport_introspection_c__assign_function__Defects__defects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  location_msgs__msg__DefectBox * item =
    ((location_msgs__msg__DefectBox *)
    location_msgs__msg__Defects__rosidl_typesupport_introspection_c__get_function__Defects__defects(untyped_member, index));
  const location_msgs__msg__DefectBox * value =
    (const location_msgs__msg__DefectBox *)(untyped_value);
  *item = *value;
}

bool location_msgs__msg__Defects__rosidl_typesupport_introspection_c__resize_function__Defects__defects(
  void * untyped_member, size_t size)
{
  location_msgs__msg__DefectBox__Sequence * member =
    (location_msgs__msg__DefectBox__Sequence *)(untyped_member);
  location_msgs__msg__DefectBox__Sequence__fini(member);
  return location_msgs__msg__DefectBox__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember location_msgs__msg__Defects__rosidl_typesupport_introspection_c__Defects_message_member_array[3] = {
  {
    "img_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(location_msgs__msg__Defects, img_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
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
    offsetof(location_msgs__msg__Defects, img_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
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
    offsetof(location_msgs__msg__Defects, defects),  // bytes offset in struct
    NULL,  // default value
    location_msgs__msg__Defects__rosidl_typesupport_introspection_c__size_function__Defects__defects,  // size() function pointer
    location_msgs__msg__Defects__rosidl_typesupport_introspection_c__get_const_function__Defects__defects,  // get_const(index) function pointer
    location_msgs__msg__Defects__rosidl_typesupport_introspection_c__get_function__Defects__defects,  // get(index) function pointer
    location_msgs__msg__Defects__rosidl_typesupport_introspection_c__fetch_function__Defects__defects,  // fetch(index, &value) function pointer
    location_msgs__msg__Defects__rosidl_typesupport_introspection_c__assign_function__Defects__defects,  // assign(index, value) function pointer
    location_msgs__msg__Defects__rosidl_typesupport_introspection_c__resize_function__Defects__defects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers location_msgs__msg__Defects__rosidl_typesupport_introspection_c__Defects_message_members = {
  "location_msgs__msg",  // message namespace
  "Defects",  // message name
  3,  // number of fields
  sizeof(location_msgs__msg__Defects),
  location_msgs__msg__Defects__rosidl_typesupport_introspection_c__Defects_message_member_array,  // message members
  location_msgs__msg__Defects__rosidl_typesupport_introspection_c__Defects_init_function,  // function to initialize message memory (memory has to be allocated)
  location_msgs__msg__Defects__rosidl_typesupport_introspection_c__Defects_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t location_msgs__msg__Defects__rosidl_typesupport_introspection_c__Defects_message_type_support_handle = {
  0,
  &location_msgs__msg__Defects__rosidl_typesupport_introspection_c__Defects_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_location_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, location_msgs, msg, Defects)() {
  location_msgs__msg__Defects__rosidl_typesupport_introspection_c__Defects_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, location_msgs, msg, DefectBox)();
  if (!location_msgs__msg__Defects__rosidl_typesupport_introspection_c__Defects_message_type_support_handle.typesupport_identifier) {
    location_msgs__msg__Defects__rosidl_typesupport_introspection_c__Defects_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &location_msgs__msg__Defects__rosidl_typesupport_introspection_c__Defects_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
