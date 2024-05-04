// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from location_msgs:msg/GpsFix.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__GPS_FIX__STRUCT_HPP_
#define LOCATION_MSGS__MSG__DETAIL__GPS_FIX__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'gps_fix'
#include "sensor_msgs/msg/detail/nav_sat_fix__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__location_msgs__msg__GpsFix __attribute__((deprecated))
#else
# define DEPRECATED__location_msgs__msg__GpsFix __declspec(deprecated)
#endif

namespace location_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GpsFix_
{
  using Type = GpsFix_<ContainerAllocator>;

  explicit GpsFix_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gps_fix(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gps_id = 0l;
    }
  }

  explicit GpsFix_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gps_fix(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gps_id = 0l;
    }
  }

  // field types and members
  using _gps_id_type =
    int32_t;
  _gps_id_type gps_id;
  using _gps_fix_type =
    sensor_msgs::msg::NavSatFix_<ContainerAllocator>;
  _gps_fix_type gps_fix;

  // setters for named parameter idiom
  Type & set__gps_id(
    const int32_t & _arg)
  {
    this->gps_id = _arg;
    return *this;
  }
  Type & set__gps_fix(
    const sensor_msgs::msg::NavSatFix_<ContainerAllocator> & _arg)
  {
    this->gps_fix = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    location_msgs::msg::GpsFix_<ContainerAllocator> *;
  using ConstRawPtr =
    const location_msgs::msg::GpsFix_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<location_msgs::msg::GpsFix_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<location_msgs::msg::GpsFix_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      location_msgs::msg::GpsFix_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<location_msgs::msg::GpsFix_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      location_msgs::msg::GpsFix_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<location_msgs::msg::GpsFix_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<location_msgs::msg::GpsFix_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<location_msgs::msg::GpsFix_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__location_msgs__msg__GpsFix
    std::shared_ptr<location_msgs::msg::GpsFix_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__location_msgs__msg__GpsFix
    std::shared_ptr<location_msgs::msg::GpsFix_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GpsFix_ & other) const
  {
    if (this->gps_id != other.gps_id) {
      return false;
    }
    if (this->gps_fix != other.gps_fix) {
      return false;
    }
    return true;
  }
  bool operator!=(const GpsFix_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GpsFix_

// alias to use template instance with default allocator
using GpsFix =
  location_msgs::msg::GpsFix_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace location_msgs

#endif  // LOCATION_MSGS__MSG__DETAIL__GPS_FIX__STRUCT_HPP_
