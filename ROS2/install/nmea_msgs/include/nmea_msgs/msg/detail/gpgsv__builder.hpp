// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nmea_msgs:msg/Gpgsv.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGSV__BUILDER_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPGSV__BUILDER_HPP_

#include "nmea_msgs/msg/detail/gpgsv__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nmea_msgs
{

namespace msg
{

namespace builder
{

class Init_Gpgsv_satellites
{
public:
  explicit Init_Gpgsv_satellites(::nmea_msgs::msg::Gpgsv & msg)
  : msg_(msg)
  {}
  ::nmea_msgs::msg::Gpgsv satellites(::nmea_msgs::msg::Gpgsv::_satellites_type arg)
  {
    msg_.satellites = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgsv msg_;
};

class Init_Gpgsv_n_satellites
{
public:
  explicit Init_Gpgsv_n_satellites(::nmea_msgs::msg::Gpgsv & msg)
  : msg_(msg)
  {}
  Init_Gpgsv_satellites n_satellites(::nmea_msgs::msg::Gpgsv::_n_satellites_type arg)
  {
    msg_.n_satellites = std::move(arg);
    return Init_Gpgsv_satellites(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgsv msg_;
};

class Init_Gpgsv_msg_number
{
public:
  explicit Init_Gpgsv_msg_number(::nmea_msgs::msg::Gpgsv & msg)
  : msg_(msg)
  {}
  Init_Gpgsv_n_satellites msg_number(::nmea_msgs::msg::Gpgsv::_msg_number_type arg)
  {
    msg_.msg_number = std::move(arg);
    return Init_Gpgsv_n_satellites(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgsv msg_;
};

class Init_Gpgsv_n_msgs
{
public:
  explicit Init_Gpgsv_n_msgs(::nmea_msgs::msg::Gpgsv & msg)
  : msg_(msg)
  {}
  Init_Gpgsv_msg_number n_msgs(::nmea_msgs::msg::Gpgsv::_n_msgs_type arg)
  {
    msg_.n_msgs = std::move(arg);
    return Init_Gpgsv_msg_number(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgsv msg_;
};

class Init_Gpgsv_message_id
{
public:
  explicit Init_Gpgsv_message_id(::nmea_msgs::msg::Gpgsv & msg)
  : msg_(msg)
  {}
  Init_Gpgsv_n_msgs message_id(::nmea_msgs::msg::Gpgsv::_message_id_type arg)
  {
    msg_.message_id = std::move(arg);
    return Init_Gpgsv_n_msgs(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgsv msg_;
};

class Init_Gpgsv_header
{
public:
  Init_Gpgsv_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gpgsv_message_id header(::nmea_msgs::msg::Gpgsv::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Gpgsv_message_id(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgsv msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nmea_msgs::msg::Gpgsv>()
{
  return nmea_msgs::msg::builder::Init_Gpgsv_header();
}

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__GPGSV__BUILDER_HPP_
