// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nmea_msgs:msg/Gprmc.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPRMC__BUILDER_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPRMC__BUILDER_HPP_

#include "nmea_msgs/msg/detail/gprmc__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nmea_msgs
{

namespace msg
{

namespace builder
{

class Init_Gprmc_mode_indicator
{
public:
  explicit Init_Gprmc_mode_indicator(::nmea_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  ::nmea_msgs::msg::Gprmc mode_indicator(::nmea_msgs::msg::Gprmc::_mode_indicator_type arg)
  {
    msg_.mode_indicator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nmea_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_mag_var_direction
{
public:
  explicit Init_Gprmc_mag_var_direction(::nmea_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_mode_indicator mag_var_direction(::nmea_msgs::msg::Gprmc::_mag_var_direction_type arg)
  {
    msg_.mag_var_direction = std::move(arg);
    return Init_Gprmc_mode_indicator(msg_);
  }

private:
  ::nmea_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_mag_var
{
public:
  explicit Init_Gprmc_mag_var(::nmea_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_mag_var_direction mag_var(::nmea_msgs::msg::Gprmc::_mag_var_type arg)
  {
    msg_.mag_var = std::move(arg);
    return Init_Gprmc_mag_var_direction(msg_);
  }

private:
  ::nmea_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_date
{
public:
  explicit Init_Gprmc_date(::nmea_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_mag_var date(::nmea_msgs::msg::Gprmc::_date_type arg)
  {
    msg_.date = std::move(arg);
    return Init_Gprmc_mag_var(msg_);
  }

private:
  ::nmea_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_track
{
public:
  explicit Init_Gprmc_track(::nmea_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_date track(::nmea_msgs::msg::Gprmc::_track_type arg)
  {
    msg_.track = std::move(arg);
    return Init_Gprmc_date(msg_);
  }

private:
  ::nmea_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_speed
{
public:
  explicit Init_Gprmc_speed(::nmea_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_track speed(::nmea_msgs::msg::Gprmc::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Gprmc_track(msg_);
  }

private:
  ::nmea_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_lon_dir
{
public:
  explicit Init_Gprmc_lon_dir(::nmea_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_speed lon_dir(::nmea_msgs::msg::Gprmc::_lon_dir_type arg)
  {
    msg_.lon_dir = std::move(arg);
    return Init_Gprmc_speed(msg_);
  }

private:
  ::nmea_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_lat_dir
{
public:
  explicit Init_Gprmc_lat_dir(::nmea_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_lon_dir lat_dir(::nmea_msgs::msg::Gprmc::_lat_dir_type arg)
  {
    msg_.lat_dir = std::move(arg);
    return Init_Gprmc_lon_dir(msg_);
  }

private:
  ::nmea_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_lon
{
public:
  explicit Init_Gprmc_lon(::nmea_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_lat_dir lon(::nmea_msgs::msg::Gprmc::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_Gprmc_lat_dir(msg_);
  }

private:
  ::nmea_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_lat
{
public:
  explicit Init_Gprmc_lat(::nmea_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_lon lat(::nmea_msgs::msg::Gprmc::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_Gprmc_lon(msg_);
  }

private:
  ::nmea_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_position_status
{
public:
  explicit Init_Gprmc_position_status(::nmea_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_lat position_status(::nmea_msgs::msg::Gprmc::_position_status_type arg)
  {
    msg_.position_status = std::move(arg);
    return Init_Gprmc_lat(msg_);
  }

private:
  ::nmea_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_utc_seconds
{
public:
  explicit Init_Gprmc_utc_seconds(::nmea_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_position_status utc_seconds(::nmea_msgs::msg::Gprmc::_utc_seconds_type arg)
  {
    msg_.utc_seconds = std::move(arg);
    return Init_Gprmc_position_status(msg_);
  }

private:
  ::nmea_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_message_id
{
public:
  explicit Init_Gprmc_message_id(::nmea_msgs::msg::Gprmc & msg)
  : msg_(msg)
  {}
  Init_Gprmc_utc_seconds message_id(::nmea_msgs::msg::Gprmc::_message_id_type arg)
  {
    msg_.message_id = std::move(arg);
    return Init_Gprmc_utc_seconds(msg_);
  }

private:
  ::nmea_msgs::msg::Gprmc msg_;
};

class Init_Gprmc_header
{
public:
  Init_Gprmc_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gprmc_message_id header(::nmea_msgs::msg::Gprmc::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Gprmc_message_id(msg_);
  }

private:
  ::nmea_msgs::msg::Gprmc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nmea_msgs::msg::Gprmc>()
{
  return nmea_msgs::msg::builder::Init_Gprmc_header();
}

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__GPRMC__BUILDER_HPP_
