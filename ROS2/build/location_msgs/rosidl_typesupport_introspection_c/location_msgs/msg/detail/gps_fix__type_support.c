// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from location_msgs:msg/GpsFix.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "location_msgs/msg/detail/gps_fix__rosidl_typesupport_introspection_c.h"
#include "location_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "location_msgs/msg/detail/gps_fix__functions.h"
#include "location_msgs/msg/detail/gps_fix__struct.h"


// Include directives for member types
// Member `gps_fix`
#include "sensor_msgs/msg/nav_sat_fix.h"
// Member `gps_fix`
#include "sensor_msgs/msg/detail/nav_sat_fix__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GpsFix__rosidl_typesupport_introspection_c__GpsFix_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  location_msgs__msg__GpsFix__init(message_memory);
}

void GpsFix__rosidl_typesupport_introspection_c__GpsFix_fini_function(void * message_memory)
{
  location_msgs__msg__GpsFix__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GpsFix__rosidl_typesupport_introspection_c__GpsFix_message_member_array[2] = {
  {
    "gps_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(location_msgs__msg__GpsFix, gps_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gps_fix",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(location_msgs__msg__GpsFix, gps_fix),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GpsFix__rosidl_typesupport_introspection_c__GpsFix_message_members = {
  "location_msgs__msg",  // message namespace
  "GpsFix",  // message name
  2,  // number of fields
  sizeof(location_msgs__msg__GpsFix),
  GpsFix__rosidl_typesupport_introspection_c__GpsFix_message_member_array,  // message members
  GpsFix__rosidl_typesupport_introspection_c__GpsFix_init_function,  // function to initialize message memory (memory has to be allocated)
  GpsFix__rosidl_typesupport_introspection_c__GpsFix_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GpsFix__rosidl_typesupport_introspection_c__GpsFix_message_type_support_handle = {
  0,
  &GpsFix__rosidl_typesupport_introspection_c__GpsFix_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_location_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, location_msgs, msg, GpsFix)() {
  GpsFix__rosidl_typesupport_introspection_c__GpsFix_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, NavSatFix)();
  if (!GpsFix__rosidl_typesupport_introspection_c__GpsFix_message_type_support_handle.typesupport_identifier) {
    GpsFix__rosidl_typesupport_introspection_c__GpsFix_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GpsFix__rosidl_typesupport_introspection_c__GpsFix_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
