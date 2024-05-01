// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nmea_msgs:msg/Gpgsv.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGSV__STRUCT_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPGSV__STRUCT_HPP_

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
// Member 'satellites'
#include "nmea_msgs/msg/detail/gpgsv_satellite__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nmea_msgs__msg__Gpgsv __attribute__((deprecated))
#else
# define DEPRECATED__nmea_msgs__msg__Gpgsv __declspec(deprecated)
#endif

namespace nmea_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gpgsv_
{
  using Type = Gpgsv_<ContainerAllocator>;

  explicit Gpgsv_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = "";
      this->n_msgs = 0;
      this->msg_number = 0;
      this->n_satellites = 0;
    }
  }

  explicit Gpgsv_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    message_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = "";
      this->n_msgs = 0;
      this->msg_number = 0;
      this->n_satellites = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _message_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_id_type message_id;
  using _n_msgs_type =
    uint8_t;
  _n_msgs_type n_msgs;
  using _msg_number_type =
    uint8_t;
  _msg_number_type msg_number;
  using _n_satellites_type =
    uint8_t;
  _n_satellites_type n_satellites;
  using _satellites_type =
    std::vector<nmea_msgs::msg::GpgsvSatellite_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nmea_msgs::msg::GpgsvSatellite_<ContainerAllocator>>>;
  _satellites_type satellites;

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
  Type & set__n_msgs(
    const uint8_t & _arg)
  {
    this->n_msgs = _arg;
    return *this;
  }
  Type & set__msg_number(
    const uint8_t & _arg)
  {
    this->msg_number = _arg;
    return *this;
  }
  Type & set__n_satellites(
    const uint8_t & _arg)
  {
    this->n_satellites = _arg;
    return *this;
  }
  Type & set__satellites(
    const std::vector<nmea_msgs::msg::GpgsvSatellite_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nmea_msgs::msg::GpgsvSatellite_<ContainerAllocator>>> & _arg)
  {
    this->satellites = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nmea_msgs::msg::Gpgsv_<ContainerAllocator> *;
  using ConstRawPtr =
    const nmea_msgs::msg::Gpgsv_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nmea_msgs::msg::Gpgsv_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nmea_msgs::msg::Gpgsv_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nmea_msgs::msg::Gpgsv_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nmea_msgs::msg::Gpgsv_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nmea_msgs::msg::Gpgsv_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nmea_msgs::msg::Gpgsv_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nmea_msgs::msg::Gpgsv_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nmea_msgs::msg::Gpgsv_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nmea_msgs__msg__Gpgsv
    std::shared_ptr<nmea_msgs::msg::Gpgsv_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nmea_msgs__msg__Gpgsv
    std::shared_ptr<nmea_msgs::msg::Gpgsv_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gpgsv_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->message_id != other.message_id) {
      return false;
    }
    if (this->n_msgs != other.n_msgs) {
      return false;
    }
    if (this->msg_number != other.msg_number) {
      return false;
    }
    if (this->n_satellites != other.n_satellites) {
      return false;
    }
    if (this->satellites != other.satellites) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gpgsv_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gpgsv_

// alias to use template instance with default allocator
using Gpgsv =
  nmea_msgs::msg::Gpgsv_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__GPGSV__STRUCT_HPP_
