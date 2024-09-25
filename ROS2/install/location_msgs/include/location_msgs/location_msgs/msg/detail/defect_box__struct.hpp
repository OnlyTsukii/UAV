// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from location_msgs:msg/DefectBox.idl
// generated code does not contain a copyright notice

#ifndef LOCATION_MSGS__MSG__DETAIL__DEFECT_BOX__STRUCT_HPP_
#define LOCATION_MSGS__MSG__DETAIL__DEFECT_BOX__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'center'
// Member 'top_left'
// Member 'top_right'
// Member 'bottom_left'
// Member 'bottom_right'
#include "location_msgs/msg/detail/pixel_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__location_msgs__msg__DefectBox __attribute__((deprecated))
#else
# define DEPRECATED__location_msgs__msg__DefectBox __declspec(deprecated)
#endif

namespace location_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DefectBox_
{
  using Type = DefectBox_<ContainerAllocator>;

  explicit DefectBox_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_init),
    top_left(_init),
    top_right(_init),
    bottom_left(_init),
    bottom_right(_init)
  {
    (void)_init;
  }

  explicit DefectBox_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_alloc, _init),
    top_left(_alloc, _init),
    top_right(_alloc, _init),
    bottom_left(_alloc, _init),
    bottom_right(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _center_type =
    location_msgs::msg::PixelPoint_<ContainerAllocator>;
  _center_type center;
  using _top_left_type =
    location_msgs::msg::PixelPoint_<ContainerAllocator>;
  _top_left_type top_left;
  using _top_right_type =
    location_msgs::msg::PixelPoint_<ContainerAllocator>;
  _top_right_type top_right;
  using _bottom_left_type =
    location_msgs::msg::PixelPoint_<ContainerAllocator>;
  _bottom_left_type bottom_left;
  using _bottom_right_type =
    location_msgs::msg::PixelPoint_<ContainerAllocator>;
  _bottom_right_type bottom_right;

  // setters for named parameter idiom
  Type & set__center(
    const location_msgs::msg::PixelPoint_<ContainerAllocator> & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__top_left(
    const location_msgs::msg::PixelPoint_<ContainerAllocator> & _arg)
  {
    this->top_left = _arg;
    return *this;
  }
  Type & set__top_right(
    const location_msgs::msg::PixelPoint_<ContainerAllocator> & _arg)
  {
    this->top_right = _arg;
    return *this;
  }
  Type & set__bottom_left(
    const location_msgs::msg::PixelPoint_<ContainerAllocator> & _arg)
  {
    this->bottom_left = _arg;
    return *this;
  }
  Type & set__bottom_right(
    const location_msgs::msg::PixelPoint_<ContainerAllocator> & _arg)
  {
    this->bottom_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    location_msgs::msg::DefectBox_<ContainerAllocator> *;
  using ConstRawPtr =
    const location_msgs::msg::DefectBox_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<location_msgs::msg::DefectBox_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<location_msgs::msg::DefectBox_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      location_msgs::msg::DefectBox_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<location_msgs::msg::DefectBox_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      location_msgs::msg::DefectBox_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<location_msgs::msg::DefectBox_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<location_msgs::msg::DefectBox_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<location_msgs::msg::DefectBox_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__location_msgs__msg__DefectBox
    std::shared_ptr<location_msgs::msg::DefectBox_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__location_msgs__msg__DefectBox
    std::shared_ptr<location_msgs::msg::DefectBox_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DefectBox_ & other) const
  {
    if (this->center != other.center) {
      return false;
    }
    if (this->top_left != other.top_left) {
      return false;
    }
    if (this->top_right != other.top_right) {
      return false;
    }
    if (this->bottom_left != other.bottom_left) {
      return false;
    }
    if (this->bottom_right != other.bottom_right) {
      return false;
    }
    return true;
  }
  bool operator!=(const DefectBox_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DefectBox_

// alias to use template instance with default allocator
using DefectBox =
  location_msgs::msg::DefectBox_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace location_msgs

#endif  // LOCATION_MSGS__MSG__DETAIL__DEFECT_BOX__STRUCT_HPP_
