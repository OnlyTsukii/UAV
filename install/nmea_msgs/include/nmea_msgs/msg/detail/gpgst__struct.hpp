// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nmea_msgs:msg/Gpgst.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGST__STRUCT_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPGST__STRUCT_HPP_

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
# define DEPRECATED__nmea_msgs__msg__Gpgst __attribute__((deprecated))
#else
# define DEPRECATED__nmea_msgs__msg__Gpgst __declspec(deprecated)
#endif

namespace nmea_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gpgst_
{
  using Type = Gpgst_<ContainerAllocator>;

  explicit Gpgst_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = "";
      this->utc_seconds = 0.0;
      this->rms = 0.0f;
      this->semi_major_dev = 0.0f;
      this->semi_minor_dev = 0.0f;
      this->orientation = 0.0f;
      this->lat_dev = 0.0f;
      this->lon_dev = 0.0f;
      this->alt_dev = 0.0f;
    }
  }

  explicit Gpgst_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    message_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = "";
      this->utc_seconds = 0.0;
      this->rms = 0.0f;
      this->semi_major_dev = 0.0f;
      this->semi_minor_dev = 0.0f;
      this->orientation = 0.0f;
      this->lat_dev = 0.0f;
      this->lon_dev = 0.0f;
      this->alt_dev = 0.0f;
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
  using _rms_type =
    float;
  _rms_type rms;
  using _semi_major_dev_type =
    float;
  _semi_major_dev_type semi_major_dev;
  using _semi_minor_dev_type =
    float;
  _semi_minor_dev_type semi_minor_dev;
  using _orientation_type =
    float;
  _orientation_type orientation;
  using _lat_dev_type =
    float;
  _lat_dev_type lat_dev;
  using _lon_dev_type =
    float;
  _lon_dev_type lon_dev;
  using _alt_dev_type =
    float;
  _alt_dev_type alt_dev;

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
  Type & set__rms(
    const float & _arg)
  {
    this->rms = _arg;
    return *this;
  }
  Type & set__semi_major_dev(
    const float & _arg)
  {
    this->semi_major_dev = _arg;
    return *this;
  }
  Type & set__semi_minor_dev(
    const float & _arg)
  {
    this->semi_minor_dev = _arg;
    return *this;
  }
  Type & set__orientation(
    const float & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__lat_dev(
    const float & _arg)
  {
    this->lat_dev = _arg;
    return *this;
  }
  Type & set__lon_dev(
    const float & _arg)
  {
    this->lon_dev = _arg;
    return *this;
  }
  Type & set__alt_dev(
    const float & _arg)
  {
    this->alt_dev = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nmea_msgs::msg::Gpgst_<ContainerAllocator> *;
  using ConstRawPtr =
    const nmea_msgs::msg::Gpgst_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nmea_msgs::msg::Gpgst_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nmea_msgs::msg::Gpgst_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nmea_msgs::msg::Gpgst_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nmea_msgs::msg::Gpgst_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nmea_msgs::msg::Gpgst_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nmea_msgs::msg::Gpgst_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nmea_msgs::msg::Gpgst_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nmea_msgs::msg::Gpgst_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nmea_msgs__msg__Gpgst
    std::shared_ptr<nmea_msgs::msg::Gpgst_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nmea_msgs__msg__Gpgst
    std::shared_ptr<nmea_msgs::msg::Gpgst_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gpgst_ & other) const
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
    if (this->rms != other.rms) {
      return false;
    }
    if (this->semi_major_dev != other.semi_major_dev) {
      return false;
    }
    if (this->semi_minor_dev != other.semi_minor_dev) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->lat_dev != other.lat_dev) {
      return false;
    }
    if (this->lon_dev != other.lon_dev) {
      return false;
    }
    if (this->alt_dev != other.alt_dev) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gpgst_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gpgst_

// alias to use template instance with default allocator
using Gpgst =
  nmea_msgs::msg::Gpgst_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__GPGST__STRUCT_HPP_
