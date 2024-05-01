// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nmea_msgs:msg/DefectBox.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__DEFECT_BOX__STRUCT_HPP_
#define NMEA_MSGS__MSG__DETAIL__DEFECT_BOX__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'center'
// Member 'top_left'
// Member 'top_right'
// Member 'bottom_left'
// Member 'bottom_right'
#include "nmea_msgs/msg/detail/pixel_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nmea_msgs__msg__DefectBox __attribute__((deprecated))
#else
# define DEPRECATED__nmea_msgs__msg__DefectBox __declspec(deprecated)
#endif

namespace nmea_msgs
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
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->defect_id = 0l;
      this->img_width = 0.0f;
      this->img_height = 0.0f;
    }
  }

  explicit DefectBox_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_alloc, _init),
    top_left(_alloc, _init),
    top_right(_alloc, _init),
    bottom_left(_alloc, _init),
    bottom_right(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->defect_id = 0l;
      this->img_width = 0.0f;
      this->img_height = 0.0f;
    }
  }

  // field types and members
  using _defect_id_type =
    int32_t;
  _defect_id_type defect_id;
  using _img_width_type =
    float;
  _img_width_type img_width;
  using _img_height_type =
    float;
  _img_height_type img_height;
  using _center_type =
    nmea_msgs::msg::PixelPoint_<ContainerAllocator>;
  _center_type center;
  using _top_left_type =
    nmea_msgs::msg::PixelPoint_<ContainerAllocator>;
  _top_left_type top_left;
  using _top_right_type =
    nmea_msgs::msg::PixelPoint_<ContainerAllocator>;
  _top_right_type top_right;
  using _bottom_left_type =
    nmea_msgs::msg::PixelPoint_<ContainerAllocator>;
  _bottom_left_type bottom_left;
  using _bottom_right_type =
    nmea_msgs::msg::PixelPoint_<ContainerAllocator>;
  _bottom_right_type bottom_right;

  // setters for named parameter idiom
  Type & set__defect_id(
    const int32_t & _arg)
  {
    this->defect_id = _arg;
    return *this;
  }
  Type & set__img_width(
    const float & _arg)
  {
    this->img_width = _arg;
    return *this;
  }
  Type & set__img_height(
    const float & _arg)
  {
    this->img_height = _arg;
    return *this;
  }
  Type & set__center(
    const nmea_msgs::msg::PixelPoint_<ContainerAllocator> & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__top_left(
    const nmea_msgs::msg::PixelPoint_<ContainerAllocator> & _arg)
  {
    this->top_left = _arg;
    return *this;
  }
  Type & set__top_right(
    const nmea_msgs::msg::PixelPoint_<ContainerAllocator> & _arg)
  {
    this->top_right = _arg;
    return *this;
  }
  Type & set__bottom_left(
    const nmea_msgs::msg::PixelPoint_<ContainerAllocator> & _arg)
  {
    this->bottom_left = _arg;
    return *this;
  }
  Type & set__bottom_right(
    const nmea_msgs::msg::PixelPoint_<ContainerAllocator> & _arg)
  {
    this->bottom_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nmea_msgs::msg::DefectBox_<ContainerAllocator> *;
  using ConstRawPtr =
    const nmea_msgs::msg::DefectBox_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nmea_msgs::msg::DefectBox_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nmea_msgs::msg::DefectBox_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nmea_msgs::msg::DefectBox_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nmea_msgs::msg::DefectBox_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nmea_msgs::msg::DefectBox_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nmea_msgs::msg::DefectBox_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nmea_msgs::msg::DefectBox_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nmea_msgs::msg::DefectBox_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nmea_msgs__msg__DefectBox
    std::shared_ptr<nmea_msgs::msg::DefectBox_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nmea_msgs__msg__DefectBox
    std::shared_ptr<nmea_msgs::msg::DefectBox_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DefectBox_ & other) const
  {
    if (this->defect_id != other.defect_id) {
      return false;
    }
    if (this->img_width != other.img_width) {
      return false;
    }
    if (this->img_height != other.img_height) {
      return false;
    }
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
  nmea_msgs::msg::DefectBox_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__DEFECT_BOX__STRUCT_HPP_
