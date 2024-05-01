// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nmea_msgs:msg/Gprmc.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPRMC__TRAITS_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPRMC__TRAITS_HPP_

#include "nmea_msgs/msg/detail/gprmc__struct.hpp"
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
  const nmea_msgs::msg::Gprmc & msg,
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

  // member: position_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_status: ";
    value_to_yaml(msg.position_status, out);
    out << "\n";
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: lat_dir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_dir: ";
    value_to_yaml(msg.lat_dir, out);
    out << "\n";
  }

  // member: lon_dir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon_dir: ";
    value_to_yaml(msg.lon_dir, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: track
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track: ";
    value_to_yaml(msg.track, out);
    out << "\n";
  }

  // member: date
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "date: ";
    value_to_yaml(msg.date, out);
    out << "\n";
  }

  // member: mag_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_var: ";
    value_to_yaml(msg.mag_var, out);
    out << "\n";
  }

  // member: mag_var_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_var_direction: ";
    value_to_yaml(msg.mag_var_direction, out);
    out << "\n";
  }

  // member: mode_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_indicator: ";
    value_to_yaml(msg.mode_indicator, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nmea_msgs::msg::Gprmc & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nmea_msgs::msg::Gprmc>()
{
  return "nmea_msgs::msg::Gprmc";
}

template<>
inline const char * name<nmea_msgs::msg::Gprmc>()
{
  return "nmea_msgs/msg/Gprmc";
}

template<>
struct has_fixed_size<nmea_msgs::msg::Gprmc>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nmea_msgs::msg::Gprmc>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nmea_msgs::msg::Gprmc>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NMEA_MSGS__MSG__DETAIL__GPRMC__TRAITS_HPP_
