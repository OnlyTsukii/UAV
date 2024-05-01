// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nmea_msgs:msg/Gpgga.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGGA__BUILDER_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPGGA__BUILDER_HPP_

#include "nmea_msgs/msg/detail/gpgga__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nmea_msgs
{

namespace msg
{

namespace builder
{

class Init_Gpgga_station_id
{
public:
  explicit Init_Gpgga_station_id(::nmea_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  ::nmea_msgs::msg::Gpgga station_id(::nmea_msgs::msg::Gpgga::_station_id_type arg)
  {
    msg_.station_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_diff_age
{
public:
  explicit Init_Gpgga_diff_age(::nmea_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_station_id diff_age(::nmea_msgs::msg::Gpgga::_diff_age_type arg)
  {
    msg_.diff_age = std::move(arg);
    return Init_Gpgga_station_id(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_undulation_units
{
public:
  explicit Init_Gpgga_undulation_units(::nmea_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_diff_age undulation_units(::nmea_msgs::msg::Gpgga::_undulation_units_type arg)
  {
    msg_.undulation_units = std::move(arg);
    return Init_Gpgga_diff_age(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_undulation
{
public:
  explicit Init_Gpgga_undulation(::nmea_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_undulation_units undulation(::nmea_msgs::msg::Gpgga::_undulation_type arg)
  {
    msg_.undulation = std::move(arg);
    return Init_Gpgga_undulation_units(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_altitude_units
{
public:
  explicit Init_Gpgga_altitude_units(::nmea_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_undulation altitude_units(::nmea_msgs::msg::Gpgga::_altitude_units_type arg)
  {
    msg_.altitude_units = std::move(arg);
    return Init_Gpgga_undulation(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_alt
{
public:
  explicit Init_Gpgga_alt(::nmea_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_altitude_units alt(::nmea_msgs::msg::Gpgga::_alt_type arg)
  {
    msg_.alt = std::move(arg);
    return Init_Gpgga_altitude_units(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_hdop
{
public:
  explicit Init_Gpgga_hdop(::nmea_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_alt hdop(::nmea_msgs::msg::Gpgga::_hdop_type arg)
  {
    msg_.hdop = std::move(arg);
    return Init_Gpgga_alt(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_num_sats
{
public:
  explicit Init_Gpgga_num_sats(::nmea_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_hdop num_sats(::nmea_msgs::msg::Gpgga::_num_sats_type arg)
  {
    msg_.num_sats = std::move(arg);
    return Init_Gpgga_hdop(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_gps_qual
{
public:
  explicit Init_Gpgga_gps_qual(::nmea_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_num_sats gps_qual(::nmea_msgs::msg::Gpgga::_gps_qual_type arg)
  {
    msg_.gps_qual = std::move(arg);
    return Init_Gpgga_num_sats(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_lon_dir
{
public:
  explicit Init_Gpgga_lon_dir(::nmea_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_gps_qual lon_dir(::nmea_msgs::msg::Gpgga::_lon_dir_type arg)
  {
    msg_.lon_dir = std::move(arg);
    return Init_Gpgga_gps_qual(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_lat_dir
{
public:
  explicit Init_Gpgga_lat_dir(::nmea_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_lon_dir lat_dir(::nmea_msgs::msg::Gpgga::_lat_dir_type arg)
  {
    msg_.lat_dir = std::move(arg);
    return Init_Gpgga_lon_dir(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_lon
{
public:
  explicit Init_Gpgga_lon(::nmea_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_lat_dir lon(::nmea_msgs::msg::Gpgga::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_Gpgga_lat_dir(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_lat
{
public:
  explicit Init_Gpgga_lat(::nmea_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_lon lat(::nmea_msgs::msg::Gpgga::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_Gpgga_lon(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_utc_seconds
{
public:
  explicit Init_Gpgga_utc_seconds(::nmea_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_lat utc_seconds(::nmea_msgs::msg::Gpgga::_utc_seconds_type arg)
  {
    msg_.utc_seconds = std::move(arg);
    return Init_Gpgga_lat(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_message_id
{
public:
  explicit Init_Gpgga_message_id(::nmea_msgs::msg::Gpgga & msg)
  : msg_(msg)
  {}
  Init_Gpgga_utc_seconds message_id(::nmea_msgs::msg::Gpgga::_message_id_type arg)
  {
    msg_.message_id = std::move(arg);
    return Init_Gpgga_utc_seconds(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgga msg_;
};

class Init_Gpgga_header
{
public:
  Init_Gpgga_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gpgga_message_id header(::nmea_msgs::msg::Gpgga::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Gpgga_message_id(msg_);
  }

private:
  ::nmea_msgs::msg::Gpgga msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nmea_msgs::msg::Gpgga>()
{
  return nmea_msgs::msg::builder::Init_Gpgga_header();
}

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__GPGGA__BUILDER_HPP_
