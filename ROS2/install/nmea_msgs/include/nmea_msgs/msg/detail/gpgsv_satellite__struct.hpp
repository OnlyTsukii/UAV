// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nmea_msgs:msg/GpgsvSatellite.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPGSV_SATELLITE__STRUCT_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPGSV_SATELLITE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__nmea_msgs__msg__GpgsvSatellite __attribute__((deprecated))
#else
# define DEPRECATED__nmea_msgs__msg__GpgsvSatellite __declspec(deprecated)
#endif

namespace nmea_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GpgsvSatellite_
{
  using Type = GpgsvSatellite_<ContainerAllocator>;

  explicit GpgsvSatellite_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prn = 0;
      this->elevation = 0;
      this->azimuth = 0;
      this->snr = 0;
    }
  }

  explicit GpgsvSatellite_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prn = 0;
      this->elevation = 0;
      this->azimuth = 0;
      this->snr = 0;
    }
  }

  // field types and members
  using _prn_type =
    uint8_t;
  _prn_type prn;
  using _elevation_type =
    uint8_t;
  _elevation_type elevation;
  using _azimuth_type =
    uint16_t;
  _azimuth_type azimuth;
  using _snr_type =
    int8_t;
  _snr_type snr;

  // setters for named parameter idiom
  Type & set__prn(
    const uint8_t & _arg)
  {
    this->prn = _arg;
    return *this;
  }
  Type & set__elevation(
    const uint8_t & _arg)
  {
    this->elevation = _arg;
    return *this;
  }
  Type & set__azimuth(
    const uint16_t & _arg)
  {
    this->azimuth = _arg;
    return *this;
  }
  Type & set__snr(
    const int8_t & _arg)
  {
    this->snr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nmea_msgs::msg::GpgsvSatellite_<ContainerAllocator> *;
  using ConstRawPtr =
    const nmea_msgs::msg::GpgsvSatellite_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nmea_msgs::msg::GpgsvSatellite_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nmea_msgs::msg::GpgsvSatellite_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nmea_msgs::msg::GpgsvSatellite_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nmea_msgs::msg::GpgsvSatellite_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nmea_msgs::msg::GpgsvSatellite_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nmea_msgs::msg::GpgsvSatellite_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nmea_msgs::msg::GpgsvSatellite_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nmea_msgs::msg::GpgsvSatellite_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nmea_msgs__msg__GpgsvSatellite
    std::shared_ptr<nmea_msgs::msg::GpgsvSatellite_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nmea_msgs__msg__GpgsvSatellite
    std::shared_ptr<nmea_msgs::msg::GpgsvSatellite_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GpgsvSatellite_ & other) const
  {
    if (this->prn != other.prn) {
      return false;
    }
    if (this->elevation != other.elevation) {
      return false;
    }
    if (this->azimuth != other.azimuth) {
      return false;
    }
    if (this->snr != other.snr) {
      return false;
    }
    return true;
  }
  bool operator!=(const GpgsvSatellite_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GpgsvSatellite_

// alias to use template instance with default allocator
using GpgsvSatellite =
  nmea_msgs::msg::GpgsvSatellite_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__GPGSV_SATELLITE__STRUCT_HPP_
