// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from location_msgs:msg/Yaw.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__YAW__STRUCT_HPP_
#define LOCATION_MSGS__MSG__DETAIL__YAW__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__location_msgs__msg__Yaw __attribute__((deprecated))
#else
# define DEPRECATED__location_msgs__msg__Yaw __declspec(deprecated)
#endif

namespace location_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Yaw_
{
  using Type = Yaw_<ContainerAllocator>;

  explicit Yaw_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw_id = 0l;
      this->yaw = 0.0;
    }
  }

  explicit Yaw_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw_id = 0l;
      this->yaw = 0.0;
    }
  }

  // field types and members
  using _yaw_id_type =
    int32_t;
  _yaw_id_type yaw_id;
  using _yaw_type =
    double;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__yaw_id(
    const int32_t & _arg)
  {
    this->yaw_id = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    location_msgs::msg::Yaw_<ContainerAllocator> *;
  using ConstRawPtr =
    const location_msgs::msg::Yaw_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<location_msgs::msg::Yaw_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<location_msgs::msg::Yaw_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      location_msgs::msg::Yaw_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<location_msgs::msg::Yaw_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      location_msgs::msg::Yaw_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<location_msgs::msg::Yaw_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<location_msgs::msg::Yaw_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<location_msgs::msg::Yaw_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__location_msgs__msg__Yaw
    std::shared_ptr<location_msgs::msg::Yaw_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__location_msgs__msg__Yaw
    std::shared_ptr<location_msgs::msg::Yaw_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Yaw_ & other) const
  {
    if (this->yaw_id != other.yaw_id) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const Yaw_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Yaw_

// alias to use template instance with default allocator
using Yaw =
  location_msgs::msg::Yaw_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace location_msgs

#endif  // LOCATION_MSGS__MSG__DETAIL__YAW__STRUCT_HPP_
