// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nmea_msgs:msg/Gpgsa.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nmea_msgs/msg/detail/gpgsa__rosidl_typesupport_introspection_c.h"
#include "nmea_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nmea_msgs/msg/detail/gpgsa__functions.h"
#include "nmea_msgs/msg/detail/gpgsa__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `message_id`
// Member `auto_manual_mode`
#include "rosidl_runtime_c/string_functions.h"
// Member `sv_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Gpgsa__rosidl_typesupport_introspection_c__Gpgsa_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nmea_msgs__msg__Gpgsa__init(message_memory);
}

void Gpgsa__rosidl_typesupport_introspection_c__Gpgsa_fini_function(void * message_memory)
{
  nmea_msgs__msg__Gpgsa__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Gpgsa__rosidl_typesupport_introspection_c__Gpgsa_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__Gpgsa, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__Gpgsa, message_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "auto_manual_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__Gpgsa, auto_manual_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fix_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__Gpgsa, fix_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sv_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__Gpgsa, sv_ids),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pdop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__Gpgsa, pdop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hdop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__Gpgsa, hdop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vdop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__Gpgsa, vdop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Gpgsa__rosidl_typesupport_introspection_c__Gpgsa_message_members = {
  "nmea_msgs__msg",  // message namespace
  "Gpgsa",  // message name
  8,  // number of fields
  sizeof(nmea_msgs__msg__Gpgsa),
  Gpgsa__rosidl_typesupport_introspection_c__Gpgsa_message_member_array,  // message members
  Gpgsa__rosidl_typesupport_introspection_c__Gpgsa_init_function,  // function to initialize message memory (memory has to be allocated)
  Gpgsa__rosidl_typesupport_introspection_c__Gpgsa_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Gpgsa__rosidl_typesupport_introspection_c__Gpgsa_message_type_support_handle = {
  0,
  &Gpgsa__rosidl_typesupport_introspection_c__Gpgsa_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nmea_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nmea_msgs, msg, Gpgsa)() {
  Gpgsa__rosidl_typesupport_introspection_c__Gpgsa_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!Gpgsa__rosidl_typesupport_introspection_c__Gpgsa_message_type_support_handle.typesupport_identifier) {
    Gpgsa__rosidl_typesupport_introspection_c__Gpgsa_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Gpgsa__rosidl_typesupport_introspection_c__Gpgsa_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
