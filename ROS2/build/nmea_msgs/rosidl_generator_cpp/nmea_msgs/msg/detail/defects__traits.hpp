// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nmea_msgs:msg/Defects.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__DEFECTS__TRAITS_HPP_
#define NMEA_MSGS__MSG__DETAIL__DEFECTS__TRAITS_HPP_

#include "nmea_msgs/msg/detail/defects__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'defects'
#include "nmea_msgs/msg/detail/defect_box__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const nmea_msgs::msg::Defects & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: defect_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "defect_id: ";
    value_to_yaml(msg.defect_id, out);
    out << "\n";
  }

  // member: img_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "img_width: ";
    value_to_yaml(msg.img_width, out);
    out << "\n";
  }

  // member: img_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "img_height: ";
    value_to_yaml(msg.img_height, out);
    out << "\n";
  }

  // member: defects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.defects.size() == 0) {
      out << "defects: []\n";
    } else {
      out << "defects:\n";
      for (auto item : msg.defects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nmea_msgs::msg::Defects & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nmea_msgs::msg::Defects>()
{
  return "nmea_msgs::msg::Defects";
}

template<>
inline const char * name<nmea_msgs::msg::Defects>()
{
  return "nmea_msgs/msg/Defects";
}

template<>
struct has_fixed_size<nmea_msgs::msg::Defects>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nmea_msgs::msg::Defects>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nmea_msgs::msg::Defects>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NMEA_MSGS__MSG__DETAIL__DEFECTS__TRAITS_HPP_
