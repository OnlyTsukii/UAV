// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from location_msgs:msg/Mix.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__MIX__TRAITS_HPP_
#define LOCATION_MSGS__MSG__DETAIL__MIX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "location_msgs/msg/detail/mix__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'gps_fix'
#include "sensor_msgs/msg/detail/nav_sat_fix__traits.hpp"
// Member 'defects'
#include "location_msgs/msg/detail/defects__traits.hpp"

namespace location_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Mix & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: gps_fix
  {
    out << "gps_fix: ";
    to_flow_style_yaml(msg.gps_fix, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: defects
  {
    out << "defects: ";
    to_flow_style_yaml(msg.defects, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mix & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: gps_fix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_fix:\n";
    to_block_style_yaml(msg.gps_fix, out, indentation + 2);
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: defects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "defects:\n";
    to_block_style_yaml(msg.defects, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mix & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace location_msgs

namespace rosidl_generator_traits
{

[[deprecated("use location_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const location_msgs::msg::Mix & msg,
  std::ostream & out, size_t indentation = 0)
{
  location_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use location_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const location_msgs::msg::Mix & msg)
{
  return location_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<location_msgs::msg::Mix>()
{
  return "location_msgs::msg::Mix";
}

template<>
inline const char * name<location_msgs::msg::Mix>()
{
  return "location_msgs/msg/Mix";
}

template<>
struct has_fixed_size<location_msgs::msg::Mix>
  : std::integral_constant<bool, has_fixed_size<location_msgs::msg::Defects>::value && has_fixed_size<sensor_msgs::msg::NavSatFix>::value> {};

template<>
struct has_bounded_size<location_msgs::msg::Mix>
  : std::integral_constant<bool, has_bounded_size<location_msgs::msg::Defects>::value && has_bounded_size<sensor_msgs::msg::NavSatFix>::value> {};

template<>
struct is_message<location_msgs::msg::Mix>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOCATION_MSGS__MSG__DETAIL__MIX__TRAITS_HPP_
