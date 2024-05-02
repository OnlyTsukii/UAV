// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nmea_msgs:msg/Defects.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__DEFECTS__STRUCT_HPP_
#define NMEA_MSGS__MSG__DETAIL__DEFECTS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'defects'
#include "nmea_msgs/msg/detail/defect_box__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nmea_msgs__msg__Defects __attribute__((deprecated))
#else
# define DEPRECATED__nmea_msgs__msg__Defects __declspec(deprecated)
#endif

namespace nmea_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Defects_
{
  using Type = Defects_<ContainerAllocator>;

  explicit Defects_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->defect_id = 0l;
      this->img_width = 0.0f;
      this->img_height = 0.0f;
    }
  }

  explicit Defects_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
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
  using _defects_type =
    std::vector<nmea_msgs::msg::DefectBox_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nmea_msgs::msg::DefectBox_<ContainerAllocator>>>;
  _defects_type defects;

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
  Type & set__defects(
    const std::vector<nmea_msgs::msg::DefectBox_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nmea_msgs::msg::DefectBox_<ContainerAllocator>>> & _arg)
  {
    this->defects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nmea_msgs::msg::Defects_<ContainerAllocator> *;
  using ConstRawPtr =
    const nmea_msgs::msg::Defects_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nmea_msgs::msg::Defects_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nmea_msgs::msg::Defects_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nmea_msgs::msg::Defects_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nmea_msgs::msg::Defects_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nmea_msgs::msg::Defects_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nmea_msgs::msg::Defects_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nmea_msgs::msg::Defects_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nmea_msgs::msg::Defects_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nmea_msgs__msg__Defects
    std::shared_ptr<nmea_msgs::msg::Defects_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nmea_msgs__msg__Defects
    std::shared_ptr<nmea_msgs::msg::Defects_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Defects_ & other) const
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
    if (this->defects != other.defects) {
      return false;
    }
    return true;
  }
  bool operator!=(const Defects_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Defects_

// alias to use template instance with default allocator
using Defects =
  nmea_msgs::msg::Defects_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__DEFECTS__STRUCT_HPP_
