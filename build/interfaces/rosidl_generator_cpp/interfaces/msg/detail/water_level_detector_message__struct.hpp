// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/WaterLevelDetectorMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__WATER_LEVEL_DETECTOR_MESSAGE__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__WATER_LEVEL_DETECTOR_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__WaterLevelDetectorMessage __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__WaterLevelDetectorMessage __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaterLevelDetectorMessage_
{
  using Type = WaterLevelDetectorMessage_<ContainerAllocator>;

  explicit WaterLevelDetectorMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err = false;
      this->msg = "";
      this->critical = false;
    }
  }

  explicit WaterLevelDetectorMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err = false;
      this->msg = "";
      this->critical = false;
    }
  }

  // field types and members
  using _err_type =
    bool;
  _err_type err;
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msg_type msg;
  using _critical_type =
    bool;
  _critical_type critical;

  // setters for named parameter idiom
  Type & set__err(
    const bool & _arg)
  {
    this->err = _arg;
    return *this;
  }
  Type & set__msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->msg = _arg;
    return *this;
  }
  Type & set__critical(
    const bool & _arg)
  {
    this->critical = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::WaterLevelDetectorMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::WaterLevelDetectorMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::WaterLevelDetectorMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::WaterLevelDetectorMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::WaterLevelDetectorMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::WaterLevelDetectorMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::WaterLevelDetectorMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::WaterLevelDetectorMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::WaterLevelDetectorMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::WaterLevelDetectorMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__WaterLevelDetectorMessage
    std::shared_ptr<interfaces::msg::WaterLevelDetectorMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__WaterLevelDetectorMessage
    std::shared_ptr<interfaces::msg::WaterLevelDetectorMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaterLevelDetectorMessage_ & other) const
  {
    if (this->err != other.err) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    if (this->critical != other.critical) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaterLevelDetectorMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaterLevelDetectorMessage_

// alias to use template instance with default allocator
using WaterLevelDetectorMessage =
  interfaces::msg::WaterLevelDetectorMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__WATER_LEVEL_DETECTOR_MESSAGE__STRUCT_HPP_
