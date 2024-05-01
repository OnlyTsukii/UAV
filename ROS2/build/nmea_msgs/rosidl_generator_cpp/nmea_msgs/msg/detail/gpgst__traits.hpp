// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nmea_msgs:msg/Gpgst.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGST__TRAITS_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPGST__TRAITS_HPP_

#include "nmea_msgs/msg/detail/gpgst__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const nmea_msgs::msg::Gpgst & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: message_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_id: ";
    value_to_yaml(msg.message_id, out);
    out << "\n";
  }

  // member: utc_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_seconds: ";
    value_to_yaml(msg.utc_seconds, out);
    out << "\n";
  }

  // member: rms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rms: ";
    value_to_yaml(msg.rms, out);
    out << "\n";
  }

  // member: semi_major_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "semi_major_dev: ";
    value_to_yaml(msg.semi_major_dev, out);
    out << "\n";
  }

  // member: semi_minor_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "semi_minor_dev: ";
    value_to_yaml(msg.semi_minor_dev, out);
    out << "\n";
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation: ";
    value_to_yaml(msg.orientation, out);
    out << "\n";
  }

  // member: lat_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_dev: ";
    value_to_yaml(msg.lat_dev, out);
    out << "\n";
  }

  // member: lon_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon_dev: ";
    value_to_yaml(msg.lon_dev, out);
    out << "\n";
  }

  // member: alt_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt_dev: ";
    value_to_yaml(msg.alt_dev, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nmea_msgs::msg::Gpgst & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nmea_msgs::msg::Gpgst>()
{
  return "nmea_msgs::msg::Gpgst";
}

template<>
inline const char * name<nmea_msgs::msg::Gpgst>()
{
  return "nmea_msgs/msg/Gpgst";
}

template<>
struct has_fixed_size<nmea_msgs::msg::Gpgst>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nmea_msgs::msg::Gpgst>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nmea_msgs::msg::Gpgst>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NMEA_MSGS__MSG__DETAIL__GPGST__TRAITS_HPP_
