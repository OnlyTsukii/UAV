// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nmea_msgs:msg/Gpgga.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGGA__STRUCT_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPGGA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nmea_msgs__msg__Gpgga __attribute__((deprecated))
#else
# define DEPRECATED__nmea_msgs__msg__Gpgga __declspec(deprecated)
#endif

namespace nmea_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gpgga_
{
  using Type = Gpgga_<ContainerAllocator>;

  explicit Gpgga_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = "";
      this->utc_seconds = 0.0;
      this->lat = 0.0;
      this->lon = 0.0;
      this->lat_dir = "";
      this->lon_dir = "";
      this->gps_qual = 0ul;
      this->num_sats = 0ul;
      this->hdop = 0.0f;
      this->alt = 0.0f;
      this->altitude_units = "";
      this->undulation = 0.0f;
      this->undulation_units = "";
      this->diff_age = 0ul;
      this->station_id = "";
    }
  }

  explicit Gpgga_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    message_id(_alloc),
    lat_dir(_alloc),
    lon_dir(_alloc),
    altitude_units(_alloc),
    undulation_units(_alloc),
    station_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = "";
      this->utc_seconds = 0.0;
      this->lat = 0.0;
      this->lon = 0.0;
      this->lat_dir = "";
      this->lon_dir = "";
      this->gps_qual = 0ul;
      this->num_sats = 0ul;
      this->hdop = 0.0f;
      this->alt = 0.0f;
      this->altitude_units = "";
      this->undulation = 0.0f;
      this->undulation_units = "";
      this->diff_age = 0ul;
      this->station_id = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _message_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_id_type message_id;
  using _utc_seconds_type =
    double;
  _utc_seconds_type utc_seconds;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _lat_dir_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lat_dir_type lat_dir;
  using _lon_dir_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lon_dir_type lon_dir;
  using _gps_qual_type =
    uint32_t;
  _gps_qual_type gps_qual;
  using _num_sats_type =
    uint32_t;
  _num_sats_type num_sats;
  using _hdop_type =
    float;
  _hdop_type hdop;
  using _alt_type =
    float;
  _alt_type alt;
  using _altitude_units_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _altitude_units_type altitude_units;
  using _undulation_type =
    float;
  _undulation_type undulation;
  using _undulation_units_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _undulation_units_type undulation_units;
  using _diff_age_type =
    uint32_t;
  _diff_age_type diff_age;
  using _station_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _station_id_type station_id;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__message_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message_id = _arg;
    return *this;
  }
  Type & set__utc_seconds(
    const double & _arg)
  {
    this->utc_seconds = _arg;
    return *this;
  }
  Type & set__lat(
    const double & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const double & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__lat_dir(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lat_dir = _arg;
    return *this;
  }
  Type & set__lon_dir(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lon_dir = _arg;
    return *this;
  }
  Type & set__gps_qual(
    const uint32_t & _arg)
  {
    this->gps_qual = _arg;
    return *this;
  }
  Type & set__num_sats(
    const uint32_t & _arg)
  {
    this->num_sats = _arg;
    return *this;
  }
  Type & set__hdop(
    const float & _arg)
  {
    this->hdop = _arg;
    return *this;
  }
  Type & set__alt(
    const float & _arg)
  {
    this->alt = _arg;
    return *this;
  }
  Type & set__altitude_units(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->altitude_units = _arg;
    return *this;
  }
  Type & set__undulation(
    const float & _arg)
  {
    this->undulation = _arg;
    return *this;
  }
  Type & set__undulation_units(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->undulation_units = _arg;
    return *this;
  }
  Type & set__diff_age(
    const uint32_t & _arg)
  {
    this->diff_age = _arg;
    return *this;
  }
  Type & set__station_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->station_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nmea_msgs::msg::Gpgga_<ContainerAllocator> *;
  using ConstRawPtr =
    const nmea_msgs::msg::Gpgga_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nmea_msgs::msg::Gpgga_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nmea_msgs::msg::Gpgga_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nmea_msgs::msg::Gpgga_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nmea_msgs::msg::Gpgga_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nmea_msgs::msg::Gpgga_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nmea_msgs::msg::Gpgga_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nmea_msgs::msg::Gpgga_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nmea_msgs::msg::Gpgga_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nmea_msgs__msg__Gpgga
    std::shared_ptr<nmea_msgs::msg::Gpgga_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nmea_msgs__msg__Gpgga
    std::shared_ptr<nmea_msgs::msg::Gpgga_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gpgga_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->message_id != other.message_id) {
      return false;
    }
    if (this->utc_seconds != other.utc_seconds) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->lat_dir != other.lat_dir) {
      return false;
    }
    if (this->lon_dir != other.lon_dir) {
      return false;
    }
    if (this->gps_qual != other.gps_qual) {
      return false;
    }
    if (this->num_sats != other.num_sats) {
      return false;
    }
    if (this->hdop != other.hdop) {
      return false;
    }
    if (this->alt != other.alt) {
      return false;
    }
    if (this->altitude_units != other.altitude_units) {
      return false;
    }
    if (this->undulation != other.undulation) {
      return false;
    }
    if (this->undulation_units != other.undulation_units) {
      return false;
    }
    if (this->diff_age != other.diff_age) {
      return false;
    }
    if (this->station_id != other.station_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gpgga_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gpgga_

// alias to use template instance with default allocator
using Gpgga =
  nmea_msgs::msg::Gpgga_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__GPGGA__STRUCT_HPP_
