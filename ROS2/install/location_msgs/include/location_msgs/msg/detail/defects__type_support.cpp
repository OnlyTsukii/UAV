// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from location_msgs:msg/Defects.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "location_msgs/msg/detail/defects__struct.hpp"
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

void Defects_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) location_msgs::msg::Defects(_init);
}

void Defects_fini_function(void * message_memory)
{
  auto typed_message = static_cast<location_msgs::msg::Defects *>(message_memory);
  typed_message->~Defects();
}

size_t size_function__Defects__defects(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<location_msgs::msg::DefectBox> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Defects__defects(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<location_msgs::msg::DefectBox> *>(untyped_member);
  return &member[index];
}

void * get_function__Defects__defects(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<location_msgs::msg::DefectBox> *>(untyped_member);
  return &member[index];
}

void resize_function__Defects__defects(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<location_msgs::msg::DefectBox> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Defects_message_member_array[4] = {
  {
    "defect_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(location_msgs::msg::Defects, defect_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "img_width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(location_msgs::msg::Defects, img_width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "img_height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(location_msgs::msg::Defects, img_height),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "defects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<location_msgs::msg::DefectBox>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(location_msgs::msg::Defects, defects),  // bytes offset in struct
    nullptr,  // default value
    size_function__Defects__defects,  // size() function pointer
    get_const_function__Defects__defects,  // get_const(index) function pointer
    get_function__Defects__defects,  // get(index) function pointer
    resize_function__Defects__defects  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Defects_message_members = {
  "location_msgs::msg",  // message namespace
  "Defects",  // message name
  4,  // number of fields
  sizeof(location_msgs::msg::Defects),
  Defects_message_member_array,  // message members
  Defects_init_function,  // function to initialize message memory (memory has to be allocated)
  Defects_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Defects_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Defects_message_members,
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
get_message_type_support_handle<location_msgs::msg::Defects>()
{
  return &::location_msgs::msg::rosidl_typesupport_introspection_cpp::Defects_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, location_msgs, msg, Defects)() {
  return &::location_msgs::msg::rosidl_typesupport_introspection_cpp::Defects_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
