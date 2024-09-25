// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from location_msgs:msg/PixelPoint.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "location_msgs/msg/detail/pixel_point__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace location_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PixelPoint_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) location_msgs::msg::PixelPoint(_init);
}

void PixelPoint_fini_function(void * message_memory)
{
  auto typed_message = static_cast<location_msgs::msg::PixelPoint *>(message_memory);
  typed_message->~PixelPoint();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PixelPoint_message_member_array[2] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(location_msgs::msg::PixelPoint, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(location_msgs::msg::PixelPoint, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PixelPoint_message_members = {
  "location_msgs::msg",  // message namespace
  "PixelPoint",  // message name
  2,  // number of fields
  sizeof(location_msgs::msg::PixelPoint),
  PixelPoint_message_member_array,  // message members
  PixelPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  PixelPoint_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PixelPoint_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PixelPoint_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace location_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<location_msgs::msg::PixelPoint>()
{
  return &::location_msgs::msg::rosidl_typesupport_introspection_cpp::PixelPoint_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, location_msgs, msg, PixelPoint)() {
  return &::location_msgs::msg::rosidl_typesupport_introspection_cpp::PixelPoint_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
