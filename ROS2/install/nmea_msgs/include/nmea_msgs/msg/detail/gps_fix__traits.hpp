// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nmea_msgs:msg/GpsFix.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPS_FIX__TRAITS_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPS_FIX__TRAITS_HPP_

#include "nmea_msgs/msg/detail/gps_fix__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'gps_fix'
#include "sensor_msgs/msg/detail/nav_sat_fix__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const nmea_msgs::msg::GpsFix & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: msg_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_id: ";
    value_to_yaml(msg.msg_id, out);
    out << "\n";
  }

  // member: gps_fix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_fix:\n";
    to_yaml(msg.gps_fix, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nmea_msgs::msg::GpsFix & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nmea_msgs::msg::GpsFix>()
{
  return "nmea_msgs::msg::GpsFix";
}

template<>
inline const char * name<nmea_msgs::msg::GpsFix>()
{
  return "nmea_msgs/msg/GpsFix";
}

template<>
struct has_fixed_size<nmea_msgs::msg::GpsFix>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::NavSatFix>::value> {};

template<>
struct has_bounded_size<nmea_msgs::msg::GpsFix>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::NavSatFix>::value> {};

template<>
struct is_message<nmea_msgs::msg::GpsFix>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NMEA_MSGS__MSG__DETAIL__GPS_FIX__TRAITS_HPP_
