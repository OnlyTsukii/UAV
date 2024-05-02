// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nmea_msgs:msg/Defects.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__DEFECTS__BUILDER_HPP_
#define NMEA_MSGS__MSG__DETAIL__DEFECTS__BUILDER_HPP_

#include "nmea_msgs/msg/detail/defects__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nmea_msgs
{

namespace msg
{

namespace builder
{

class Init_Defects_defects
{
public:
  explicit Init_Defects_defects(::nmea_msgs::msg::Defects & msg)
  : msg_(msg)
  {}
  ::nmea_msgs::msg::Defects defects(::nmea_msgs::msg::Defects::_defects_type arg)
  {
    msg_.defects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nmea_msgs::msg::Defects msg_;
};

class Init_Defects_img_height
{
public:
  explicit Init_Defects_img_height(::nmea_msgs::msg::Defects & msg)
  : msg_(msg)
  {}
  Init_Defects_defects img_height(::nmea_msgs::msg::Defects::_img_height_type arg)
  {
    msg_.img_height = std::move(arg);
    return Init_Defects_defects(msg_);
  }

private:
  ::nmea_msgs::msg::Defects msg_;
};

class Init_Defects_img_width
{
public:
  explicit Init_Defects_img_width(::nmea_msgs::msg::Defects & msg)
  : msg_(msg)
  {}
  Init_Defects_img_height img_width(::nmea_msgs::msg::Defects::_img_width_type arg)
  {
    msg_.img_width = std::move(arg);
    return Init_Defects_img_height(msg_);
  }

private:
  ::nmea_msgs::msg::Defects msg_;
};

class Init_Defects_defect_id
{
public:
  Init_Defects_defect_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Defects_img_width defect_id(::nmea_msgs::msg::Defects::_defect_id_type arg)
  {
    msg_.defect_id = std::move(arg);
    return Init_Defects_img_width(msg_);
  }

private:
  ::nmea_msgs::msg::Defects msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nmea_msgs::msg::Defects>()
{
  return nmea_msgs::msg::builder::Init_Defects_defect_id();
}

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__DEFECTS__BUILDER_HPP_
