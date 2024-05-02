// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nmea_msgs:msg/DefectBox.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__DEFECT_BOX__TRAITS_HPP_
#define NMEA_MSGS__MSG__DETAIL__DEFECT_BOX__TRAITS_HPP_

#include "nmea_msgs/msg/detail/defect_box__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'center'
// Member 'top_left'
// Member 'top_right'
// Member 'bottom_left'
// Member 'bottom_right'
#include "nmea_msgs/msg/detail/pixel_point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const nmea_msgs::msg::DefectBox & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_yaml(msg.center, out, indentation + 2);
  }

  // member: top_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "top_left:\n";
    to_yaml(msg.top_left, out, indentation + 2);
  }

  // member: top_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "top_right:\n";
    to_yaml(msg.top_right, out, indentation + 2);
  }

  // member: bottom_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bottom_left:\n";
    to_yaml(msg.bottom_left, out, indentation + 2);
  }

  // member: bottom_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bottom_right:\n";
    to_yaml(msg.bottom_right, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nmea_msgs::msg::DefectBox & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nmea_msgs::msg::DefectBox>()
{
  return "nmea_msgs::msg::DefectBox";
}

template<>
inline const char * name<nmea_msgs::msg::DefectBox>()
{
  return "nmea_msgs/msg/DefectBox";
}

template<>
struct has_fixed_size<nmea_msgs::msg::DefectBox>
  : std::integral_constant<bool, has_fixed_size<nmea_msgs::msg::PixelPoint>::value> {};

template<>
struct has_bounded_size<nmea_msgs::msg::DefectBox>
  : std::integral_constant<bool, has_bounded_size<nmea_msgs::msg::PixelPoint>::value> {};

template<>
struct is_message<nmea_msgs::msg::DefectBox>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NMEA_MSGS__MSG__DETAIL__DEFECT_BOX__TRAITS_HPP_
