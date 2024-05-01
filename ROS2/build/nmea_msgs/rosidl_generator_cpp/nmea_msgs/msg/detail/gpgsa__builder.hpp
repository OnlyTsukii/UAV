// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nmea_msgs:msg/Gpgsa.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGSA__BUILDER_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPGSA__BUILDER_HPP_

#include "nmea_msgs/msg/detail/gpgsa__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nmea_msgs
{

namespace msg
{

namespace builder
{

class Init_Gpgsa_vdop
{
public:
  explicit Init_Gpgsa_vdop(::nmea_msgs::msg::Gpgsa & msg)
  : msg_(msg)
  {}
  ::nmea_msgs::msg::Gpgsa vdop(::nmea_msgs::msg::Gpgsa::_vdop_type arg)
  {
    msg_.vdop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgsa msg_;
};

class Init_Gpgsa_hdop
{
public:
  explicit Init_Gpgsa_hdop(::nmea_msgs::msg::Gpgsa & msg)
  : msg_(msg)
  {}
  Init_Gpgsa_vdop hdop(::nmea_msgs::msg::Gpgsa::_hdop_type arg)
  {
    msg_.hdop = std::move(arg);
    return Init_Gpgsa_vdop(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgsa msg_;
};

class Init_Gpgsa_pdop
{
public:
  explicit Init_Gpgsa_pdop(::nmea_msgs::msg::Gpgsa & msg)
  : msg_(msg)
  {}
  Init_Gpgsa_hdop pdop(::nmea_msgs::msg::Gpgsa::_pdop_type arg)
  {
    msg_.pdop = std::move(arg);
    return Init_Gpgsa_hdop(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgsa msg_;
};

class Init_Gpgsa_sv_ids
{
public:
  explicit Init_Gpgsa_sv_ids(::nmea_msgs::msg::Gpgsa & msg)
  : msg_(msg)
  {}
  Init_Gpgsa_pdop sv_ids(::nmea_msgs::msg::Gpgsa::_sv_ids_type arg)
  {
    msg_.sv_ids = std::move(arg);
    return Init_Gpgsa_pdop(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgsa msg_;
};

class Init_Gpgsa_fix_mode
{
public:
  explicit Init_Gpgsa_fix_mode(::nmea_msgs::msg::Gpgsa & msg)
  : msg_(msg)
  {}
  Init_Gpgsa_sv_ids fix_mode(::nmea_msgs::msg::Gpgsa::_fix_mode_type arg)
  {
    msg_.fix_mode = std::move(arg);
    return Init_Gpgsa_sv_ids(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgsa msg_;
};

class Init_Gpgsa_auto_manual_mode
{
public:
  explicit Init_Gpgsa_auto_manual_mode(::nmea_msgs::msg::Gpgsa & msg)
  : msg_(msg)
  {}
  Init_Gpgsa_fix_mode auto_manual_mode(::nmea_msgs::msg::Gpgsa::_auto_manual_mode_type arg)
  {
    msg_.auto_manual_mode = std::move(arg);
    return Init_Gpgsa_fix_mode(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgsa msg_;
};

class Init_Gpgsa_message_id
{
public:
  explicit Init_Gpgsa_message_id(::nmea_msgs::msg::Gpgsa & msg)
  : msg_(msg)
  {}
  Init_Gpgsa_auto_manual_mode message_id(::nmea_msgs::msg::Gpgsa::_message_id_type arg)
  {
    msg_.message_id = std::move(arg);
    return Init_Gpgsa_auto_manual_mode(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgsa msg_;
};

class Init_Gpgsa_header
{
public:
  Init_Gpgsa_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gpgsa_message_id header(::nmea_msgs::msg::Gpgsa::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Gpgsa_message_id(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgsa msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nmea_msgs::msg::Gpgsa>()
{
  return nmea_msgs::msg::builder::Init_Gpgsa_header();
}

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__GPGSA__BUILDER_HPP_
