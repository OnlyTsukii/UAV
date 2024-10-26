// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from location_msgs:msg/Yaw.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__YAW__BUILDER_HPP_
#define LOCATION_MSGS__MSG__DETAIL__YAW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "location_msgs/msg/detail/yaw__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace location_msgs
{

namespace msg
{

namespace builder
{

class Init_Yaw_yaw
{
public:
  Init_Yaw_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::location_msgs::msg::Yaw yaw(::location_msgs::msg::Yaw::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::location_msgs::msg::Yaw msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::location_msgs::msg::Yaw>()
{
  return location_msgs::msg::builder::Init_Yaw_yaw();
}

}  // namespace location_msgs

#endif  // LOCATION_MSGS__MSG__DETAIL__YAW__BUILDER_HPP_
