// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from location_msgs:msg/Defects.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__DEFECTS__TRAITS_HPP_
#define LOCATION_MSGS__MSG__DETAIL__DEFECTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "location_msgs/msg/detail/defects__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'defects'
#include "location_msgs/msg/detail/defect_box__traits.hpp"

namespace location_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Defects & msg,
  std::ostream & out)
{
  out << "{";
  // member: img_width
  {
    out << "img_width: ";
    rosidl_generator_traits::value_to_yaml(msg.img_width, out);
    out << ", ";
  }

  // member: img_height
  {
    out << "img_height: ";
    rosidl_generator_traits::value_to_yaml(msg.img_height, out);
    out << ", ";
  }

  // member: defects
  {
    if (msg.defects.size() == 0) {
      out << "defects: []";
    } else {
      out << "defects: [";
      size_t pending_items = msg.defects.size();
      for (auto item : msg.defects) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Defects & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: img_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "img_width: ";
    rosidl_generator_traits::value_to_yaml(msg.img_width, out);
    out << "\n";
  }

  // member: img_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "img_height: ";
    rosidl_generator_traits::value_to_yaml(msg.img_height, out);
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
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Defects & msg, bool use_flow_style = false)
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
  const location_msgs::msg::Defects & msg,
  std::ostream & out, size_t indentation = 0)
{
  location_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use location_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const location_msgs::msg::Defects & msg)
{
  return location_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<location_msgs::msg::Defects>()
{
  return "location_msgs::msg::Defects";
}

template<>
inline const char * name<location_msgs::msg::Defects>()
{
  return "location_msgs/msg/Defects";
}

template<>
struct has_fixed_size<location_msgs::msg::Defects>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<location_msgs::msg::Defects>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<location_msgs::msg::Defects>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LOCATION_MSGS__MSG__DETAIL__DEFECTS__TRAITS_HPP_
