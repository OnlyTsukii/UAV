// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from location_msgs:msg/Yaw.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__YAW__TRAITS_HPP_
#define LOCATION_MSGS__MSG__DETAIL__YAW__TRAITS_HPP_

#include "location_msgs/msg/detail/yaw__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const location_msgs::msg::Yaw & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: yaw_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_id: ";
    value_to_yaml(msg.yaw_id, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const location_msgs::msg::Yaw & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<location_msgs::msg::Yaw>()
{
  return "location_msgs::msg::Yaw";
}

template<>
inline const char * name<location_msgs::msg::Yaw>()
{
  return "location_msgs/msg/Yaw";
}

template<>
struct has_fixed_size<location_msgs::msg::Yaw>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<location_msgs::msg::Yaw>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<location_msgs::msg::Yaw>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOCATION_MSGS__MSG__DETAIL__YAW__TRAITS_HPP_
