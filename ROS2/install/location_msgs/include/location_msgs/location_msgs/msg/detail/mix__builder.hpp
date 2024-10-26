// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from location_msgs:msg/Mix.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__MIX__BUILDER_HPP_
#define LOCATION_MSGS__MSG__DETAIL__MIX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "location_msgs/msg/detail/mix__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace location_msgs
{

namespace msg
{

namespace builder
{

class Init_Mix_defects
{
public:
  explicit Init_Mix_defects(::location_msgs::msg::Mix & msg)
  : msg_(msg)
  {}
  ::location_msgs::msg::Mix defects(::location_msgs::msg::Mix::_defects_type arg)
  {
    msg_.defects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::location_msgs::msg::Mix msg_;
};

class Init_Mix_yaw
{
public:
  explicit Init_Mix_yaw(::location_msgs::msg::Mix & msg)
  : msg_(msg)
  {}
  Init_Mix_defects yaw(::location_msgs::msg::Mix::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Mix_defects(msg_);
  }

private:
  ::location_msgs::msg::Mix msg_;
};

class Init_Mix_gps_fix
{
public:
  explicit Init_Mix_gps_fix(::location_msgs::msg::Mix & msg)
  : msg_(msg)
  {}
  Init_Mix_yaw gps_fix(::location_msgs::msg::Mix::_gps_fix_type arg)
  {
    msg_.gps_fix = std::move(arg);
    return Init_Mix_yaw(msg_);
  }

private:
  ::location_msgs::msg::Mix msg_;
};

class Init_Mix_id
{
public:
  Init_Mix_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mix_gps_fix id(::location_msgs::msg::Mix::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Mix_gps_fix(msg_);
  }

private:
  ::location_msgs::msg::Mix msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::location_msgs::msg::Mix>()
{
  return location_msgs::msg::builder::Init_Mix_id();
}

}  // namespace location_msgs

#endif  // LOCATION_MSGS__MSG__DETAIL__MIX__BUILDER_HPP_
