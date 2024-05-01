// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nmea_msgs:msg/Gprmc.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPRMC__STRUCT_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPRMC__STRUCT_HPP_

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
# define DEPRECATED__nmea_msgs__msg__Gprmc __attribute__((deprecated))
#else
# define DEPRECATED__nmea_msgs__msg__Gprmc __declspec(deprecated)
#endif

namespace nmea_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gprmc_
{
  using Type = Gprmc_<ContainerAllocator>;

  explicit Gprmc_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = "";
      this->utc_seconds = 0.0;
      this->position_status = "";
      this->lat = 0.0;
      this->lon = 0.0;
      this->lat_dir = "";
      this->lon_dir = "";
      this->speed = 0.0f;
      this->track = 0.0f;
      this->date = "";
      this->mag_var = 0.0f;
      this->mag_var_direction = "";
      this->mode_indicator = "";
    }
  }

  explicit Gprmc_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    message_id(_alloc),
    position_status(_alloc),
    lat_dir(_alloc),
    lon_dir(_alloc),
    date(_alloc),
    mag_var_direction(_alloc),
    mode_indicator(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = "";
      this->utc_seconds = 0.0;
      this->position_status = "";
      this->lat = 0.0;
      this->lon = 0.0;
      this->lat_dir = "";
      this->lon_dir = "";
      this->speed = 0.0f;
      this->track = 0.0f;
      this->date = "";
      this->mag_var = 0.0f;
      this->mag_var_direction = "";
      this->mode_indicator = "";
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
  using _position_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _position_status_type position_status;
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
  using _speed_type =
    float;
  _speed_type speed;
  using _track_type =
    float;
  _track_type track;
  using _date_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _date_type date;
  using _mag_var_type =
    float;
  _mag_var_type mag_var;
  using _mag_var_direction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mag_var_direction_type mag_var_direction;
  using _mode_indicator_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_indicator_type mode_indicator;

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
  Type & set__position_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->position_status = _arg;
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
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__track(
    const float & _arg)
  {
    this->track = _arg;
    return *this;
  }
  Type & set__date(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->date = _arg;
    return *this;
  }
  Type & set__mag_var(
    const float & _arg)
  {
    this->mag_var = _arg;
    return *this;
  }
  Type & set__mag_var_direction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mag_var_direction = _arg;
    return *this;
  }
  Type & set__mode_indicator(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode_indicator = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nmea_msgs::msg::Gprmc_<ContainerAllocator> *;
  using ConstRawPtr =
    const nmea_msgs::msg::Gprmc_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nmea_msgs::msg::Gprmc_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nmea_msgs::msg::Gprmc_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nmea_msgs::msg::Gprmc_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nmea_msgs::msg::Gprmc_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nmea_msgs::msg::Gprmc_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nmea_msgs::msg::Gprmc_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nmea_msgs::msg::Gprmc_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nmea_msgs::msg::Gprmc_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nmea_msgs__msg__Gprmc
    std::shared_ptr<nmea_msgs::msg::Gprmc_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nmea_msgs__msg__Gprmc
    std::shared_ptr<nmea_msgs::msg::Gprmc_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gprmc_ & other) const
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
    if (this->position_status != other.position_status) {
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
    if (this->speed != other.speed) {
      return false;
    }
    if (this->track != other.track) {
      return false;
    }
    if (this->date != other.date) {
      return false;
    }
    if (this->mag_var != other.mag_var) {
      return false;
    }
    if (this->mag_var_direction != other.mag_var_direction) {
      return false;
    }
    if (this->mode_indicator != other.mode_indicator) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gprmc_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gprmc_

// alias to use template instance with default allocator
using Gprmc =
  nmea_msgs::msg::Gprmc_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__GPRMC__STRUCT_HPP_
