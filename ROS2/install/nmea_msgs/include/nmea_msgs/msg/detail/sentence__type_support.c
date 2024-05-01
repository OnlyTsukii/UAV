// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nmea_msgs:msg/Sentence.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nmea_msgs/msg/detail/sentence__rosidl_typesupport_introspection_c.h"
#include "nmea_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nmea_msgs/msg/detail/sentence__functions.h"
#include "nmea_msgs/msg/detail/sentence__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `sentence`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Sentence__rosidl_typesupport_introspection_c__Sentence_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nmea_msgs__msg__Sentence__init(message_memory);
}

void Sentence__rosidl_typesupport_introspection_c__Sentence_fini_function(void * message_memory)
{
  nmea_msgs__msg__Sentence__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Sentence__rosidl_typesupport_introspection_c__Sentence_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__Sentence, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sentence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs__msg__Sentence, sentence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Sentence__rosidl_typesupport_introspection_c__Sentence_message_members = {
  "nmea_msgs__msg",  // message namespace
  "Sentence",  // message name
  2,  // number of fields
  sizeof(nmea_msgs__msg__Sentence),
  Sentence__rosidl_typesupport_introspection_c__Sentence_message_member_array,  // message members
  Sentence__rosidl_typesupport_introspection_c__Sentence_init_function,  // function to initialize message memory (memory has to be allocated)
  Sentence__rosidl_typesupport_introspection_c__Sentence_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Sentence__rosidl_typesupport_introspection_c__Sentence_message_type_support_handle = {
  0,
  &Sentence__rosidl_typesupport_introspection_c__Sentence_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nmea_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nmea_msgs, msg, Sentence)() {
  Sentence__rosidl_typesupport_introspection_c__Sentence_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!Sentence__rosidl_typesupport_introspection_c__Sentence_message_type_support_handle.typesupport_identifier) {
    Sentence__rosidl_typesupport_introspection_c__Sentence_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Sentence__rosidl_typesupport_introspection_c__Sentence_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
