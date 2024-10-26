// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from location_msgs:msg/Mix.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__MIX__STRUCT_HPP_
#define LOCATION_MSGS__MSG__DETAIL__MIX__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'gps_fix'
#include "sensor_msgs/msg/detail/nav_sat_fix__struct.hpp"
// Member 'defects'
#include "location_msgs/msg/detail/defects__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__location_msgs__msg__Mix __attribute__((deprecated))
#else
# define DEPRECATED__location_msgs__msg__Mix __declspec(deprecated)
#endif

namespace location_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Mix_
{
  using Type = Mix_<ContainerAllocator>;

  explicit Mix_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gps_fix(_init),
    defects(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->yaw = 0.0;
    }
  }

  explicit Mix_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gps_fix(_alloc, _init),
    defects(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->yaw = 0.0;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _gps_fix_type =
    sensor_msgs::msg::NavSatFix_<ContainerAllocator>;
  _gps_fix_type gps_fix;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _defects_type =
    location_msgs::msg::Defects_<ContainerAllocator>;
  _defects_type defects;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__gps_fix(
    const sensor_msgs::msg::NavSatFix_<ContainerAllocator> & _arg)
  {
    this->gps_fix = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__defects(
    const location_msgs::msg::Defects_<ContainerAllocator> & _arg)
  {
    this->defects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    location_msgs::msg::Mix_<ContainerAllocator> *;
  using ConstRawPtr =
    const location_msgs::msg::Mix_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<location_msgs::msg::Mix_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<location_msgs::msg::Mix_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      location_msgs::msg::Mix_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<location_msgs::msg::Mix_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      location_msgs::msg::Mix_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<location_msgs::msg::Mix_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<location_msgs::msg::Mix_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<location_msgs::msg::Mix_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__location_msgs__msg__Mix
    std::shared_ptr<location_msgs::msg::Mix_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__location_msgs__msg__Mix
    std::shared_ptr<location_msgs::msg::Mix_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mix_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->gps_fix != other.gps_fix) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->defects != other.defects) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mix_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mix_

// alias to use template instance with default allocator
using Mix =
  location_msgs::msg::Mix_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace location_msgs

#endif  // LOCATION_MSGS__MSG__DETAIL__MIX__STRUCT_HPP_
