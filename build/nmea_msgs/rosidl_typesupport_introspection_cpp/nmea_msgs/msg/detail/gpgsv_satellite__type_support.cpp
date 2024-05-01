// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from nmea_msgs:msg/GpgsvSatellite.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "nmea_msgs/msg/detail/gpgsv_satellite__struct.hpp"
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

void GpgsvSatellite_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nmea_msgs::msg::GpgsvSatellite(_init);
}

void GpgsvSatellite_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nmea_msgs::msg::GpgsvSatellite *>(message_memory);
  typed_message->~GpgsvSatellite();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GpgsvSatellite_message_member_array[4] = {
  {
    "prn",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs::msg::GpgsvSatellite, prn),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "elevation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs::msg::GpgsvSatellite, elevation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "azimuth",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs::msg::GpgsvSatellite, azimuth),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "snr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nmea_msgs::msg::GpgsvSatellite, snr),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GpgsvSatellite_message_members = {
  "nmea_msgs::msg",  // message namespace
  "GpgsvSatellite",  // message name
  4,  // number of fields
  sizeof(nmea_msgs::msg::GpgsvSatellite),
  GpgsvSatellite_message_member_array,  // message members
  GpgsvSatellite_init_function,  // function to initialize message memory (memory has to be allocated)
  GpgsvSatellite_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GpgsvSatellite_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GpgsvSatellite_message_members,
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
get_message_type_support_handle<nmea_msgs::msg::GpgsvSatellite>()
{
  return &::nmea_msgs::msg::rosidl_typesupport_introspection_cpp::GpgsvSatellite_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nmea_msgs, msg, GpgsvSatellite)() {
  return &::nmea_msgs::msg::rosidl_typesupport_introspection_cpp::GpgsvSatellite_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
