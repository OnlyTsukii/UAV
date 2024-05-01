// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nmea_msgs:msg/GpgsvSatellite.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGSV_SATELLITE__BUILDER_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPGSV_SATELLITE__BUILDER_HPP_

#include "nmea_msgs/msg/detail/gpgsv_satellite__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nmea_msgs
{

namespace msg
{

namespace builder
{

class Init_GpgsvSatellite_snr
{
public:
  explicit Init_GpgsvSatellite_snr(::nmea_msgs::msg::GpgsvSatellite & msg)
  : msg_(msg)
  {}
  ::nmea_msgs::msg::GpgsvSatellite snr(::nmea_msgs::msg::GpgsvSatellite::_snr_type arg)
  {
    msg_.snr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nmea_msgs::msg::GpgsvSatellite msg_;
};

class Init_GpgsvSatellite_azimuth
{
public:
  explicit Init_GpgsvSatellite_azimuth(::nmea_msgs::msg::GpgsvSatellite & msg)
  : msg_(msg)
  {}
  Init_GpgsvSatellite_snr azimuth(::nmea_msgs::msg::GpgsvSatellite::_azimuth_type arg)
  {
    msg_.azimuth = std::move(arg);
    return Init_GpgsvSatellite_snr(msg_);
  }

private:
  ::nmea_msgs::msg::GpgsvSatellite msg_;
};

class Init_GpgsvSatellite_elevation
{
public:
  explicit Init_GpgsvSatellite_elevation(::nmea_msgs::msg::GpgsvSatellite & msg)
  : msg_(msg)
  {}
  Init_GpgsvSatellite_azimuth elevation(::nmea_msgs::msg::GpgsvSatellite::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_GpgsvSatellite_azimuth(msg_);
  }

private:
  ::nmea_msgs::msg::GpgsvSatellite msg_;
};

class Init_GpgsvSatellite_prn
{
public:
  Init_GpgsvSatellite_prn()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpgsvSatellite_elevation prn(::nmea_msgs::msg::GpgsvSatellite::_prn_type arg)
  {
    msg_.prn = std::move(arg);
    return Init_GpgsvSatellite_elevation(msg_);
  }

private:
  ::nmea_msgs::msg::GpgsvSatellite msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nmea_msgs::msg::GpgsvSatellite>()
{
  return nmea_msgs::msg::builder::Init_GpgsvSatellite_prn();
}

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__GPGSV_SATELLITE__BUILDER_HPP_
