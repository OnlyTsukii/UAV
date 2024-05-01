// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nmea_msgs:msg/Gpgsa.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGSA__TRAITS_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPGSA__TRAITS_HPP_

#include "nmea_msgs/msg/detail/gpgsa__struct.hpp"
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
  const nmea_msgs::msg::Gpgsa & msg,
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

  // member: auto_manual_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_manual_mode: ";
    value_to_yaml(msg.auto_manual_mode, out);
    out << "\n";
  }

  // member: fix_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix_mode: ";
    value_to_yaml(msg.fix_mode, out);
    out << "\n";
  }

  // member: sv_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sv_ids.size() == 0) {
      out << "sv_ids: []\n";
    } else {
      out << "sv_ids:\n";
      for (auto item : msg.sv_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pdop: ";
    value_to_yaml(msg.pdop, out);
    out << "\n";
  }

  // member: hdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hdop: ";
    value_to_yaml(msg.hdop, out);
    out << "\n";
  }

  // member: vdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vdop: ";
    value_to_yaml(msg.vdop, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nmea_msgs::msg::Gpgsa & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nmea_msgs::msg::Gpgsa>()
{
  return "nmea_msgs::msg::Gpgsa";
}

template<>
inline const char * name<nmea_msgs::msg::Gpgsa>()
{
  return "nmea_msgs/msg/Gpgsa";
}

template<>
struct has_fixed_size<nmea_msgs::msg::Gpgsa>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nmea_msgs::msg::Gpgsa>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nmea_msgs::msg::Gpgsa>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NMEA_MSGS__MSG__DETAIL__GPGSA__TRAITS_HPP_
