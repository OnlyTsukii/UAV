// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nmea_msgs:msg/PixelPoint.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__PIXEL_POINT__TRAITS_HPP_
#define NMEA_MSGS__MSG__DETAIL__PIXEL_POINT__TRAITS_HPP_

#include "nmea_msgs/msg/detail/pixel_point__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const nmea_msgs::msg::PixelPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nmea_msgs::msg::PixelPoint & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nmea_msgs::msg::PixelPoint>()
{
  return "nmea_msgs::msg::PixelPoint";
}

template<>
inline const char * name<nmea_msgs::msg::PixelPoint>()
{
  return "nmea_msgs/msg/PixelPoint";
}

template<>
struct has_fixed_size<nmea_msgs::msg::PixelPoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nmea_msgs::msg::PixelPoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nmea_msgs::msg::PixelPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NMEA_MSGS__MSG__DETAIL__PIXEL_POINT__TRAITS_HPP_
