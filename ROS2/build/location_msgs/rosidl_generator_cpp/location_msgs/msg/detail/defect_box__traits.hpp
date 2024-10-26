// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from location_msgs:msg/DefectBox.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__DEFECT_BOX__TRAITS_HPP_
#define LOCATION_MSGS__MSG__DETAIL__DEFECT_BOX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "location_msgs/msg/detail/defect_box__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'center'
// Member 'top_left'
// Member 'top_right'
// Member 'bottom_left'
// Member 'bottom_right'
#include "location_msgs/msg/detail/pixel_point__traits.hpp"

namespace location_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DefectBox & msg,
  std::ostream & out)
{
  out << "{";
  // member: center
  {
    out << "center: ";
    to_flow_style_yaml(msg.center, out);
    out << ", ";
  }

  // member: top_left
  {
    out << "top_left: ";
    to_flow_style_yaml(msg.top_left, out);
    out << ", ";
  }

  // member: top_right
  {
    out << "top_right: ";
    to_flow_style_yaml(msg.top_right, out);
    out << ", ";
  }

  // member: bottom_left
  {
    out << "bottom_left: ";
    to_flow_style_yaml(msg.bottom_left, out);
    out << ", ";
  }

  // member: bottom_right
  {
    out << "bottom_right: ";
    to_flow_style_yaml(msg.bottom_right, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DefectBox & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_block_style_yaml(msg.center, out, indentation + 2);
  }

  // member: top_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "top_left:\n";
    to_block_style_yaml(msg.top_left, out, indentation + 2);
  }

  // member: top_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "top_right:\n";
    to_block_style_yaml(msg.top_right, out, indentation + 2);
  }

  // member: bottom_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bottom_left:\n";
    to_block_style_yaml(msg.bottom_left, out, indentation + 2);
  }

  // member: bottom_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bottom_right:\n";
    to_block_style_yaml(msg.bottom_right, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DefectBox & msg, bool use_flow_style = false)
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
  const location_msgs::msg::DefectBox & msg,
  std::ostream & out, size_t indentation = 0)
{
  location_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use location_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const location_msgs::msg::DefectBox & msg)
{
  return location_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<location_msgs::msg::DefectBox>()
{
  return "location_msgs::msg::DefectBox";
}

template<>
inline const char * name<location_msgs::msg::DefectBox>()
{
  return "location_msgs/msg/DefectBox";
}

template<>
struct has_fixed_size<location_msgs::msg::DefectBox>
  : std::integral_constant<bool, has_fixed_size<location_msgs::msg::PixelPoint>::value> {};

template<>
struct has_bounded_size<location_msgs::msg::DefectBox>
  : std::integral_constant<bool, has_bounded_size<location_msgs::msg::PixelPoint>::value> {};

template<>
struct is_message<location_msgs::msg::DefectBox>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOCATION_MSGS__MSG__DETAIL__DEFECT_BOX__TRAITS_HPP_
