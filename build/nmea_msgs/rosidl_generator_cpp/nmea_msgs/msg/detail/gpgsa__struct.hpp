// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nmea_msgs:msg/Gpgsa.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGSA__STRUCT_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPGSA__STRUCT_HPP_

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
# define DEPRECATED__nmea_msgs__msg__Gpgsa __attribute__((deprecated))
#else
# define DEPRECATED__nmea_msgs__msg__Gpgsa __declspec(deprecated)
#endif

namespace nmea_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gpgsa_
{
  using Type = Gpgsa_<ContainerAllocator>;

  explicit Gpgsa_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = "";
      this->auto_manual_mode = "";
      this->fix_mode = 0;
      this->pdop = 0.0f;
      this->hdop = 0.0f;
      this->vdop = 0.0f;
    }
  }

  explicit Gpgsa_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    message_id(_alloc),
    auto_manual_mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = "";
      this->auto_manual_mode = "";
      this->fix_mode = 0;
      this->pdop = 0.0f;
      this->hdop = 0.0f;
      this->vdop = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _message_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_id_type message_id;
  using _auto_manual_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _auto_manual_mode_type auto_manual_mode;
  using _fix_mode_type =
    uint8_t;
  _fix_mode_type fix_mode;
  using _sv_ids_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _sv_ids_type sv_ids;
  using _pdop_type =
    float;
  _pdop_type pdop;
  using _hdop_type =
    float;
  _hdop_type hdop;
  using _vdop_type =
    float;
  _vdop_type vdop;

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
  Type & set__auto_manual_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->auto_manual_mode = _arg;
    return *this;
  }
  Type & set__fix_mode(
    const uint8_t & _arg)
  {
    this->fix_mode = _arg;
    return *this;
  }
  Type & set__sv_ids(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->sv_ids = _arg;
    return *this;
  }
  Type & set__pdop(
    const float & _arg)
  {
    this->pdop = _arg;
    return *this;
  }
  Type & set__hdop(
    const float & _arg)
  {
    this->hdop = _arg;
    return *this;
  }
  Type & set__vdop(
    const float & _arg)
  {
    this->vdop = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nmea_msgs::msg::Gpgsa_<ContainerAllocator> *;
  using ConstRawPtr =
    const nmea_msgs::msg::Gpgsa_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nmea_msgs::msg::Gpgsa_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nmea_msgs::msg::Gpgsa_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nmea_msgs::msg::Gpgsa_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nmea_msgs::msg::Gpgsa_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nmea_msgs::msg::Gpgsa_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nmea_msgs::msg::Gpgsa_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nmea_msgs::msg::Gpgsa_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nmea_msgs::msg::Gpgsa_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nmea_msgs__msg__Gpgsa
    std::shared_ptr<nmea_msgs::msg::Gpgsa_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nmea_msgs__msg__Gpgsa
    std::shared_ptr<nmea_msgs::msg::Gpgsa_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gpgsa_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->message_id != other.message_id) {
      return false;
    }
    if (this->auto_manual_mode != other.auto_manual_mode) {
      return false;
    }
    if (this->fix_mode != other.fix_mode) {
      return false;
    }
    if (this->sv_ids != other.sv_ids) {
      return false;
    }
    if (this->pdop != other.pdop) {
      return false;
    }
    if (this->hdop != other.hdop) {
      return false;
    }
    if (this->vdop != other.vdop) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gpgsa_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gpgsa_

// alias to use template instance with default allocator
using Gpgsa =
  nmea_msgs::msg::Gpgsa_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__GPGSA__STRUCT_HPP_
