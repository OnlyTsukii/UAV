// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from location_msgs:msg/GpsFix.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__GPS_FIX__BUILDER_HPP_
#define LOCATION_MSGS__MSG__DETAIL__GPS_FIX__BUILDER_HPP_

#include "location_msgs/msg/detail/gps_fix__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace location_msgs
{

namespace msg
{

namespace builder
{

class Init_GpsFix_gps_fix
{
public:
  explicit Init_GpsFix_gps_fix(::location_msgs::msg::GpsFix & msg)
  : msg_(msg)
  {}
  ::location_msgs::msg::GpsFix gps_fix(::location_msgs::msg::GpsFix::_gps_fix_type arg)
  {
    msg_.gps_fix = std::move(arg);
    return std::move(msg_);
  }

private:
  ::location_msgs::msg::GpsFix msg_;
};

class Init_GpsFix_gps_id
{
public:
  Init_GpsFix_gps_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpsFix_gps_fix gps_id(::location_msgs::msg::GpsFix::_gps_id_type arg)
  {
    msg_.gps_id = std::move(arg);
    return Init_GpsFix_gps_fix(msg_);
  }

private:
  ::location_msgs::msg::GpsFix msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::location_msgs::msg::GpsFix>()
{
  return location_msgs::msg::builder::Init_GpsFix_gps_id();
}

}  // namespace location_msgs

#endif  // LOCATION_MSGS__MSG__DETAIL__GPS_FIX__BUILDER_HPP_
