// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from location_msgs:msg/DefectBox.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "location_msgs/msg/detail/defect_box__rosidl_typesupport_introspection_c.h"
#include "location_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "location_msgs/msg/detail/defect_box__functions.h"
#include "location_msgs/msg/detail/defect_box__struct.h"


// Include directives for member types
// Member `center`
// Member `top_left`
// Member `top_right`
// Member `bottom_left`
// Member `bottom_right`
#include "location_msgs/msg/pixel_point.h"
// Member `center`
// Member `top_left`
// Member `top_right`
// Member `bottom_left`
// Member `bottom_right`
#include "location_msgs/msg/detail/pixel_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void location_msgs__msg__DefectBox__rosidl_typesupport_introspection_c__DefectBox_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  location_msgs__msg__DefectBox__init(message_memory);
}

void location_msgs__msg__DefectBox__rosidl_typesupport_introspection_c__DefectBox_fini_function(void * message_memory)
{
  location_msgs__msg__DefectBox__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember location_msgs__msg__DefectBox__rosidl_typesupport_introspection_c__DefectBox_message_member_array[5] = {
  {
    "center",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(location_msgs__msg__DefectBox, center),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "top_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(location_msgs__msg__DefectBox, top_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "top_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(location_msgs__msg__DefectBox, top_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bottom_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(location_msgs__msg__DefectBox, bottom_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bottom_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(location_msgs__msg__DefectBox, bottom_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers location_msgs__msg__DefectBox__rosidl_typesupport_introspection_c__DefectBox_message_members = {
  "location_msgs__msg",  // message namespace
  "DefectBox",  // message name
  5,  // number of fields
  sizeof(location_msgs__msg__DefectBox),
  location_msgs__msg__DefectBox__rosidl_typesupport_introspection_c__DefectBox_message_member_array,  // message members
  location_msgs__msg__DefectBox__rosidl_typesupport_introspection_c__DefectBox_init_function,  // function to initialize message memory (memory has to be allocated)
  location_msgs__msg__DefectBox__rosidl_typesupport_introspection_c__DefectBox_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t location_msgs__msg__DefectBox__rosidl_typesupport_introspection_c__DefectBox_message_type_support_handle = {
  0,
  &location_msgs__msg__DefectBox__rosidl_typesupport_introspection_c__DefectBox_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_location_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, location_msgs, msg, DefectBox)() {
  location_msgs__msg__DefectBox__rosidl_typesupport_introspection_c__DefectBox_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, location_msgs, msg, PixelPoint)();
  location_msgs__msg__DefectBox__rosidl_typesupport_introspection_c__DefectBox_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, location_msgs, msg, PixelPoint)();
  location_msgs__msg__DefectBox__rosidl_typesupport_introspection_c__DefectBox_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, location_msgs, msg, PixelPoint)();
  location_msgs__msg__DefectBox__rosidl_typesupport_introspection_c__DefectBox_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, location_msgs, msg, PixelPoint)();
  location_msgs__msg__DefectBox__rosidl_typesupport_introspection_c__DefectBox_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, location_msgs, msg, PixelPoint)();
  if (!location_msgs__msg__DefectBox__rosidl_typesupport_introspection_c__DefectBox_message_type_support_handle.typesupport_identifier) {
    location_msgs__msg__DefectBox__rosidl_typesupport_introspection_c__DefectBox_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &location_msgs__msg__DefectBox__rosidl_typesupport_introspection_c__DefectBox_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
