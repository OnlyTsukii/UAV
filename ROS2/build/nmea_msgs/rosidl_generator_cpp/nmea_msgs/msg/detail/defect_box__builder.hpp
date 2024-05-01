// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nmea_msgs:msg/DefectBox.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__DEFECT_BOX__BUILDER_HPP_
#define NMEA_MSGS__MSG__DETAIL__DEFECT_BOX__BUILDER_HPP_

#include "nmea_msgs/msg/detail/defect_box__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nmea_msgs
{

namespace msg
{

namespace builder
{

class Init_DefectBox_bottom_right
{
public:
  explicit Init_DefectBox_bottom_right(::nmea_msgs::msg::DefectBox & msg)
  : msg_(msg)
  {}
  ::nmea_msgs::msg::DefectBox bottom_right(::nmea_msgs::msg::DefectBox::_bottom_right_type arg)
  {
    msg_.bottom_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nmea_msgs::msg::DefectBox msg_;
};

class Init_DefectBox_bottom_left
{
public:
  explicit Init_DefectBox_bottom_left(::nmea_msgs::msg::DefectBox & msg)
  : msg_(msg)
  {}
  Init_DefectBox_bottom_right bottom_left(::nmea_msgs::msg::DefectBox::_bottom_left_type arg)
  {
    msg_.bottom_left = std::move(arg);
    return Init_DefectBox_bottom_right(msg_);
  }

private:
  ::nmea_msgs::msg::DefectBox msg_;
};

class Init_DefectBox_top_right
{
public:
  explicit Init_DefectBox_top_right(::nmea_msgs::msg::DefectBox & msg)
  : msg_(msg)
  {}
  Init_DefectBox_bottom_left top_right(::nmea_msgs::msg::DefectBox::_top_right_type arg)
  {
    msg_.top_right = std::move(arg);
    return Init_DefectBox_bottom_left(msg_);
  }

private:
  ::nmea_msgs::msg::DefectBox msg_;
};

class Init_DefectBox_top_left
{
public:
  explicit Init_DefectBox_top_left(::nmea_msgs::msg::DefectBox & msg)
  : msg_(msg)
  {}
  Init_DefectBox_top_right top_left(::nmea_msgs::msg::DefectBox::_top_left_type arg)
  {
    msg_.top_left = std::move(arg);
    return Init_DefectBox_top_right(msg_);
  }

private:
  ::nmea_msgs::msg::DefectBox msg_;
};

class Init_DefectBox_center
{
public:
  explicit Init_DefectBox_center(::nmea_msgs::msg::DefectBox & msg)
  : msg_(msg)
  {}
  Init_DefectBox_top_left center(::nmea_msgs::msg::DefectBox::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_DefectBox_top_left(msg_);
  }

private:
  ::nmea_msgs::msg::DefectBox msg_;
};

class Init_DefectBox_img_height
{
public:
  explicit Init_DefectBox_img_height(::nmea_msgs::msg::DefectBox & msg)
  : msg_(msg)
  {}
  Init_DefectBox_center img_height(::nmea_msgs::msg::DefectBox::_img_height_type arg)
  {
    msg_.img_height = std::move(arg);
    return Init_DefectBox_center(msg_);
  }

private:
  ::nmea_msgs::msg::DefectBox msg_;
};

class Init_DefectBox_img_width
{
public:
  explicit Init_DefectBox_img_width(::nmea_msgs::msg::DefectBox & msg)
  : msg_(msg)
  {}
  Init_DefectBox_img_height img_width(::nmea_msgs::msg::DefectBox::_img_width_type arg)
  {
    msg_.img_width = std::move(arg);
    return Init_DefectBox_img_height(msg_);
  }

private:
  ::nmea_msgs::msg::DefectBox msg_;
};

class Init_DefectBox_defect_id
{
public:
  Init_DefectBox_defect_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DefectBox_img_width defect_id(::nmea_msgs::msg::DefectBox::_defect_id_type arg)
  {
    msg_.defect_id = std::move(arg);
    return Init_DefectBox_img_width(msg_);
  }

private:
  ::nmea_msgs::msg::DefectBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nmea_msgs::msg::DefectBox>()
{
  return nmea_msgs::msg::builder::Init_DefectBox_defect_id();
}

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__DEFECT_BOX__BUILDER_HPP_
