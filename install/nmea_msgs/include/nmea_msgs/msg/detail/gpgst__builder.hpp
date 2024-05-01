// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nmea_msgs:msg/Gpgst.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGST__BUILDER_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPGST__BUILDER_HPP_

#include "nmea_msgs/msg/detail/gpgst__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nmea_msgs
{

namespace msg
{

namespace builder
{

class Init_Gpgst_alt_dev
{
public:
  explicit Init_Gpgst_alt_dev(::nmea_msgs::msg::Gpgst & msg)
  : msg_(msg)
  {}
  ::nmea_msgs::msg::Gpgst alt_dev(::nmea_msgs::msg::Gpgst::_alt_dev_type arg)
  {
    msg_.alt_dev = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgst msg_;
};

class Init_Gpgst_lon_dev
{
public:
  explicit Init_Gpgst_lon_dev(::nmea_msgs::msg::Gpgst & msg)
  : msg_(msg)
  {}
  Init_Gpgst_alt_dev lon_dev(::nmea_msgs::msg::Gpgst::_lon_dev_type arg)
  {
    msg_.lon_dev = std::move(arg);
    return Init_Gpgst_alt_dev(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgst msg_;
};

class Init_Gpgst_lat_dev
{
public:
  explicit Init_Gpgst_lat_dev(::nmea_msgs::msg::Gpgst & msg)
  : msg_(msg)
  {}
  Init_Gpgst_lon_dev lat_dev(::nmea_msgs::msg::Gpgst::_lat_dev_type arg)
  {
    msg_.lat_dev = std::move(arg);
    return Init_Gpgst_lon_dev(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgst msg_;
};

class Init_Gpgst_orientation
{
public:
  explicit Init_Gpgst_orientation(::nmea_msgs::msg::Gpgst & msg)
  : msg_(msg)
  {}
  Init_Gpgst_lat_dev orientation(::nmea_msgs::msg::Gpgst::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_Gpgst_lat_dev(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgst msg_;
};

class Init_Gpgst_semi_minor_dev
{
public:
  explicit Init_Gpgst_semi_minor_dev(::nmea_msgs::msg::Gpgst & msg)
  : msg_(msg)
  {}
  Init_Gpgst_orientation semi_minor_dev(::nmea_msgs::msg::Gpgst::_semi_minor_dev_type arg)
  {
    msg_.semi_minor_dev = std::move(arg);
    return Init_Gpgst_orientation(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgst msg_;
};

class Init_Gpgst_semi_major_dev
{
public:
  explicit Init_Gpgst_semi_major_dev(::nmea_msgs::msg::Gpgst & msg)
  : msg_(msg)
  {}
  Init_Gpgst_semi_minor_dev semi_major_dev(::nmea_msgs::msg::Gpgst::_semi_major_dev_type arg)
  {
    msg_.semi_major_dev = std::move(arg);
    return Init_Gpgst_semi_minor_dev(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgst msg_;
};

class Init_Gpgst_rms
{
public:
  explicit Init_Gpgst_rms(::nmea_msgs::msg::Gpgst & msg)
  : msg_(msg)
  {}
  Init_Gpgst_semi_major_dev rms(::nmea_msgs::msg::Gpgst::_rms_type arg)
  {
    msg_.rms = std::move(arg);
    return Init_Gpgst_semi_major_dev(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgst msg_;
};

class Init_Gpgst_utc_seconds
{
public:
  explicit Init_Gpgst_utc_seconds(::nmea_msgs::msg::Gpgst & msg)
  : msg_(msg)
  {}
  Init_Gpgst_rms utc_seconds(::nmea_msgs::msg::Gpgst::_utc_seconds_type arg)
  {
    msg_.utc_seconds = std::move(arg);
    return Init_Gpgst_rms(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgst msg_;
};

class Init_Gpgst_message_id
{
public:
  explicit Init_Gpgst_message_id(::nmea_msgs::msg::Gpgst & msg)
  : msg_(msg)
  {}
  Init_Gpgst_utc_seconds message_id(::nmea_msgs::msg::Gpgst::_message_id_type arg)
  {
    msg_.message_id = std::move(arg);
    return Init_Gpgst_utc_seconds(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgst msg_;
};

class Init_Gpgst_header
{
public:
  Init_Gpgst_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gpgst_message_id header(::nmea_msgs::msg::Gpgst::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Gpgst_message_id(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgst msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nmea_msgs::msg::Gpgst>()
{
  return nmea_msgs::msg::builder::Init_Gpgst_header();
}

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__GPGST__BUILDER_HPP_
