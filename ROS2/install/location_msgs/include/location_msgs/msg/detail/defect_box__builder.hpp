// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from location_msgs:msg/DefectBox.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__DEFECT_BOX__BUILDER_HPP_
#define LOCATION_MSGS__MSG__DETAIL__DEFECT_BOX__BUILDER_HPP_

#include "location_msgs/msg/detail/defect_box__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace location_msgs
{

namespace msg
{

namespace builder
{

class Init_DefectBox_bottom_right
{
public:
  explicit Init_DefectBox_bottom_right(::location_msgs::msg::DefectBox & msg)
  : msg_(msg)
  {}
  ::location_msgs::msg::DefectBox bottom_right(::location_msgs::msg::DefectBox::_bottom_right_type arg)
  {
    msg_.bottom_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::location_msgs::msg::DefectBox msg_;
};

class Init_DefectBox_bottom_left
{
public:
  explicit Init_DefectBox_bottom_left(::location_msgs::msg::DefectBox & msg)
  : msg_(msg)
  {}
  Init_DefectBox_bottom_right bottom_left(::location_msgs::msg::DefectBox::_bottom_left_type arg)
  {
    msg_.bottom_left = std::move(arg);
    return Init_DefectBox_bottom_right(msg_);
  }

private:
  ::location_msgs::msg::DefectBox msg_;
};

class Init_DefectBox_top_right
{
public:
  explicit Init_DefectBox_top_right(::location_msgs::msg::DefectBox & msg)
  : msg_(msg)
  {}
  Init_DefectBox_bottom_left top_right(::location_msgs::msg::DefectBox::_top_right_type arg)
  {
    msg_.top_right = std::move(arg);
    return Init_DefectBox_bottom_left(msg_);
  }

private:
  ::location_msgs::msg::DefectBox msg_;
};

class Init_DefectBox_top_left
{
public:
  explicit Init_DefectBox_top_left(::location_msgs::msg::DefectBox & msg)
  : msg_(msg)
  {}
  Init_DefectBox_top_right top_left(::location_msgs::msg::DefectBox::_top_left_type arg)
  {
    msg_.top_left = std::move(arg);
    return Init_DefectBox_top_right(msg_);
  }

private:
  ::location_msgs::msg::DefectBox msg_;
};

class Init_DefectBox_center
{
public:
  Init_DefectBox_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DefectBox_top_left center(::location_msgs::msg::DefectBox::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_DefectBox_top_left(msg_);
  }

private:
  ::location_msgs::msg::DefectBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::location_msgs::msg::DefectBox>()
{
  return location_msgs::msg::builder::Init_DefectBox_center();
}

}  // namespace location_msgs

#endif  // LOCATION_MSGS__MSG__DETAIL__DEFECT_BOX__BUILDER_HPP_
