// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nmea_msgs:msg/Sentence.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__SENTENCE__TRAITS_HPP_
#define NMEA_MSGS__MSG__DETAIL__SENTENCE__TRAITS_HPP_

#include "nmea_msgs/msg/detail/sentence__struct.hpp"
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
  const nmea_msgs::msg::Sentence & msg,
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

  // member: sentence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sentence: ";
    value_to_yaml(msg.sentence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nmea_msgs::msg::Sentence & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nmea_msgs::msg::Sentence>()
{
  return "nmea_msgs::msg::Sentence";
}

template<>
inline const char * name<nmea_msgs::msg::Sentence>()
{
  return "nmea_msgs/msg/Sentence";
}

template<>
struct has_fixed_size<nmea_msgs::msg::Sentence>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nmea_msgs::msg::Sentence>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nmea_msgs::msg::Sentence>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NMEA_MSGS__MSG__DETAIL__SENTENCE__TRAITS_HPP_
