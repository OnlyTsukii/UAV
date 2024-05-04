// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from location_msgs:msg/PixelPoint.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__PIXEL_POINT__BUILDER_HPP_
#define LOCATION_MSGS__MSG__DETAIL__PIXEL_POINT__BUILDER_HPP_

#include "location_msgs/msg/detail/pixel_point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace location_msgs
{

namespace msg
{

namespace builder
{

class Init_PixelPoint_y
{
public:
  explicit Init_PixelPoint_y(::location_msgs::msg::PixelPoint & msg)
  : msg_(msg)
  {}
  ::location_msgs::msg::PixelPoint y(::location_msgs::msg::PixelPoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::location_msgs::msg::PixelPoint msg_;
};

class Init_PixelPoint_x
{
public:
  Init_PixelPoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PixelPoint_y x(::location_msgs::msg::PixelPoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PixelPoint_y(msg_);
  }

private:
  ::location_msgs::msg::PixelPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::location_msgs::msg::PixelPoint>()
{
  return location_msgs::msg::builder::Init_PixelPoint_x();
}

}  // namespace location_msgs

#endif  // LOCATION_MSGS__MSG__DETAIL__PIXEL_POINT__BUILDER_HPP_
