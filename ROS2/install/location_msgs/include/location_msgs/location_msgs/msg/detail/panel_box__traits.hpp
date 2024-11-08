// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from location_msgs:msg/PanelBox.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__PANEL_BOX__TRAITS_HPP_
#define LOCATION_MSGS__MSG__DETAIL__PANEL_BOX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "location_msgs/msg/detail/panel_box__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace location_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PanelBox & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: w
  {
    out << "w: ";
    rosidl_generator_traits::value_to_yaml(msg.w, out);
    out << ", ";
  }

  // member: h
  {
    out << "h: ";
    rosidl_generator_traits::value_to_yaml(msg.h, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PanelBox & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "w: ";
    rosidl_generator_traits::value_to_yaml(msg.w, out);
    out << "\n";
  }

  // member: h
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h: ";
    rosidl_generator_traits::value_to_yaml(msg.h, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PanelBox & msg, bool use_flow_style = false)
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
  const location_msgs::msg::PanelBox & msg,
  std::ostream & out, size_t indentation = 0)
{
  location_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use location_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const location_msgs::msg::PanelBox & msg)
{
  return location_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<location_msgs::msg::PanelBox>()
{
  return "location_msgs::msg::PanelBox";
}

template<>
inline const char * name<location_msgs::msg::PanelBox>()
{
  return "location_msgs/msg/PanelBox";
}

template<>
struct has_fixed_size<location_msgs::msg::PanelBox>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<location_msgs::msg::PanelBox>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<location_msgs::msg::PanelBox>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOCATION_MSGS__MSG__DETAIL__PANEL_BOX__TRAITS_HPP_
