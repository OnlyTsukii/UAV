// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from nmea_msgs:msg/Sentence.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "nmea_msgs/msg/detail/sentence__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nmea_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Sentence_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nmea_msgs::msg::Sentence(_init);
}

void Sentence_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nmea_msgs::msg::Sentence *>(message_memory);
  typed_message->~Sentence();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Sentence_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs::msg::Sentence, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sentence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs::msg::Sentence, sentence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Sentence_message_members = {
  "nmea_msgs::msg",  // message namespace
  "Sentence",  // message name
  2,  // number of fields
  sizeof(nmea_msgs::msg::Sentence),
  Sentence_message_member_array,  // message members
  Sentence_init_function,  // function to initialize message memory (memory has to be allocated)
  Sentence_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Sentence_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Sentence_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace nmea_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nmea_msgs::msg::Sentence>()
{
  return &::nmea_msgs::msg::rosidl_typesupport_introspection_cpp::Sentence_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nmea_msgs, msg, Sentence)() {
  return &::nmea_msgs::msg::rosidl_typesupport_introspection_cpp::Sentence_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
