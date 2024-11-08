// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from location_msgs:msg/PanelBox.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__PANEL_BOX__BUILDER_HPP_
#define LOCATION_MSGS__MSG__DETAIL__PANEL_BOX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "location_msgs/msg/detail/panel_box__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace location_msgs
{

namespace msg
{

namespace builder
{

class Init_PanelBox_h
{
public:
  explicit Init_PanelBox_h(::location_msgs::msg::PanelBox & msg)
  : msg_(msg)
  {}
  ::location_msgs::msg::PanelBox h(::location_msgs::msg::PanelBox::_h_type arg)
  {
    msg_.h = std::move(arg);
    return std::move(msg_);
  }

private:
  ::location_msgs::msg::PanelBox msg_;
};

class Init_PanelBox_w
{
public:
  explicit Init_PanelBox_w(::location_msgs::msg::PanelBox & msg)
  : msg_(msg)
  {}
  Init_PanelBox_h w(::location_msgs::msg::PanelBox::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_PanelBox_h(msg_);
  }

private:
  ::location_msgs::msg::PanelBox msg_;
};

class Init_PanelBox_y
{
public:
  explicit Init_PanelBox_y(::location_msgs::msg::PanelBox & msg)
  : msg_(msg)
  {}
  Init_PanelBox_w y(::location_msgs::msg::PanelBox::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PanelBox_w(msg_);
  }

private:
  ::location_msgs::msg::PanelBox msg_;
};

class Init_PanelBox_x
{
public:
  Init_PanelBox_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PanelBox_y x(::location_msgs::msg::PanelBox::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PanelBox_y(msg_);
  }

private:
  ::location_msgs::msg::PanelBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::location_msgs::msg::PanelBox>()
{
  return location_msgs::msg::builder::Init_PanelBox_x();
}

}  // namespace location_msgs

#endif  // LOCATION_MSGS__MSG__DETAIL__PANEL_BOX__BUILDER_HPP_
