// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nmea_msgs:msg/PixelPoint.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__PIXEL_POINT__BUILDER_HPP_
#define NMEA_MSGS__MSG__DETAIL__PIXEL_POINT__BUILDER_HPP_

#include "nmea_msgs/msg/detail/pixel_point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nmea_msgs
{

namespace msg
{

namespace builder
{

class Init_PixelPoint_y
{
public:
  explicit Init_PixelPoint_y(::nmea_msgs::msg::PixelPoint & msg)
  : msg_(msg)
  {}
  ::nmea_msgs::msg::PixelPoint y(::nmea_msgs::msg::PixelPoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nmea_msgs::msg::PixelPoint msg_;
};

class Init_PixelPoint_x
{
public:
  Init_PixelPoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PixelPoint_y x(::nmea_msgs::msg::PixelPoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PixelPoint_y(msg_);
  }

private:
  ::nmea_msgs::msg::PixelPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nmea_msgs::msg::PixelPoint>()
{
  return nmea_msgs::msg::builder::Init_PixelPoint_x();
}

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__PIXEL_POINT__BUILDER_HPP_
