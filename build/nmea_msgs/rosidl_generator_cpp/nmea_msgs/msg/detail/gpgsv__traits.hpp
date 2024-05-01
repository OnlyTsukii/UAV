// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nmea_msgs:msg/Gpgsv.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGSV__TRAITS_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPGSV__TRAITS_HPP_

#include "nmea_msgs/msg/detail/gpgsv__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'satellites'
#include "nmea_msgs/msg/detail/gpgsv_satellite__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const nmea_msgs::msg::Gpgsv & msg,
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

  // member: n_msgs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_msgs: ";
    value_to_yaml(msg.n_msgs, out);
    out << "\n";
  }

  // member: msg_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_number: ";
    value_to_yaml(msg.msg_number, out);
    out << "\n";
  }

  // member: n_satellites
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_satellites: ";
    value_to_yaml(msg.n_satellites, out);
    out << "\n";
  }

  // member: satellites
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.satellites.size() == 0) {
      out << "satellites: []\n";
    } else {
      out << "satellites:\n";
      for (auto item : msg.satellites) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nmea_msgs::msg::Gpgsv & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nmea_msgs::msg::Gpgsv>()
{
  return "nmea_msgs::msg::Gpgsv";
}

template<>
inline const char * name<nmea_msgs::msg::Gpgsv>()
{
  return "nmea_msgs/msg/Gpgsv";
}

template<>
struct has_fixed_size<nmea_msgs::msg::Gpgsv>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nmea_msgs::msg::Gpgsv>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nmea_msgs::msg::Gpgsv>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NMEA_MSGS__MSG__DETAIL__GPGSV__TRAITS_HPP_
