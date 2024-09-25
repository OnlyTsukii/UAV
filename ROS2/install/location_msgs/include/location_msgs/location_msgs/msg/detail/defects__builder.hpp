// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from location_msgs:msg/Defects.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__DEFECTS__BUILDER_HPP_
#define LOCATION_MSGS__MSG__DETAIL__DEFECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "location_msgs/msg/detail/defects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace location_msgs
{

namespace msg
{

namespace builder
{

class Init_Defects_defects
{
public:
  explicit Init_Defects_defects(::location_msgs::msg::Defects & msg)
  : msg_(msg)
  {}
  ::location_msgs::msg::Defects defects(::location_msgs::msg::Defects::_defects_type arg)
  {
    msg_.defects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::location_msgs::msg::Defects msg_;
};

class Init_Defects_img_height
{
public:
  explicit Init_Defects_img_height(::location_msgs::msg::Defects & msg)
  : msg_(msg)
  {}
  Init_Defects_defects img_height(::location_msgs::msg::Defects::_img_height_type arg)
  {
    msg_.img_height = std::move(arg);
    return Init_Defects_defects(msg_);
  }

private:
  ::location_msgs::msg::Defects msg_;
};

class Init_Defects_img_width
{
public:
  Init_Defects_img_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Defects_img_height img_width(::location_msgs::msg::Defects::_img_width_type arg)
  {
    msg_.img_width = std::move(arg);
    return Init_Defects_img_height(msg_);
  }

private:
  ::location_msgs::msg::Defects msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::location_msgs::msg::Defects>()
{
  return location_msgs::msg::builder::Init_Defects_img_width();
}

}  // namespace location_msgs

#endif  // LOCATION_MSGS__MSG__DETAIL__DEFECTS__BUILDER_HPP_
