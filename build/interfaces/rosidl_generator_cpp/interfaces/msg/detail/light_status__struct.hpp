// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/LightStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__LIGHT_STATUS__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__LIGHT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__LightStatus __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__LightStatus __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LightStatus_
{
  using Type = LightStatus_<ContainerAllocator>;

  explicit LightStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->growlight_state = false;
      this->growlight_level = 0;
      this->tasklight_state = false;
    }
  }

  explicit LightStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->growlight_state = false;
      this->growlight_level = 0;
      this->tasklight_state = false;
    }
  }

  // field types and members
  using _growlight_state_type =
    bool;
  _growlight_state_type growlight_state;
  using _growlight_level_type =
    int8_t;
  _growlight_level_type growlight_level;
  using _tasklight_state_type =
    bool;
  _tasklight_state_type tasklight_state;

  // setters for named parameter idiom
  Type & set__growlight_state(
    const bool & _arg)
  {
    this->growlight_state = _arg;
    return *this;
  }
  Type & set__growlight_level(
    const int8_t & _arg)
  {
    this->growlight_level = _arg;
    return *this;
  }
  Type & set__tasklight_state(
    const bool & _arg)
  {
    this->tasklight_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::LightStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::LightStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::LightStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::LightStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::LightStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::LightStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::LightStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::LightStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::LightStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::LightStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__LightStatus
    std::shared_ptr<interfaces::msg::LightStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__LightStatus
    std::shared_ptr<interfaces::msg::LightStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LightStatus_ & other) const
  {
    if (this->growlight_state != other.growlight_state) {
      return false;
    }
    if (this->growlight_level != other.growlight_level) {
      return false;
    }
    if (this->tasklight_state != other.tasklight_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const LightStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LightStatus_

// alias to use template instance with default allocator
using LightStatus =
  interfaces::msg::LightStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__LIGHT_STATUS__STRUCT_HPP_
