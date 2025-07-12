// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/PhControllerMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__PH_CONTROLLER_MESSAGE__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__PH_CONTROLLER_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__PhControllerMessage __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__PhControllerMessage __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PhControllerMessage_
{
  using Type = PhControllerMessage_<ContainerAllocator>;

  explicit PhControllerMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pump_id = "";
      this->warning = false;
      this->msg = "";
      this->volume = 0.0f;
    }
  }

  explicit PhControllerMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pump_id(_alloc),
    msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pump_id = "";
      this->warning = false;
      this->msg = "";
      this->volume = 0.0f;
    }
  }

  // field types and members
  using _pump_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pump_id_type pump_id;
  using _warning_type =
    bool;
  _warning_type warning;
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msg_type msg;
  using _volume_type =
    float;
  _volume_type volume;

  // setters for named parameter idiom
  Type & set__pump_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pump_id = _arg;
    return *this;
  }
  Type & set__warning(
    const bool & _arg)
  {
    this->warning = _arg;
    return *this;
  }
  Type & set__msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->msg = _arg;
    return *this;
  }
  Type & set__volume(
    const float & _arg)
  {
    this->volume = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::PhControllerMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::PhControllerMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::PhControllerMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::PhControllerMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::PhControllerMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::PhControllerMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::PhControllerMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::PhControllerMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::PhControllerMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::PhControllerMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__PhControllerMessage
    std::shared_ptr<interfaces::msg::PhControllerMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__PhControllerMessage
    std::shared_ptr<interfaces::msg::PhControllerMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PhControllerMessage_ & other) const
  {
    if (this->pump_id != other.pump_id) {
      return false;
    }
    if (this->warning != other.warning) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    if (this->volume != other.volume) {
      return false;
    }
    return true;
  }
  bool operator!=(const PhControllerMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PhControllerMessage_

// alias to use template instance with default allocator
using PhControllerMessage =
  interfaces::msg::PhControllerMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__PH_CONTROLLER_MESSAGE__STRUCT_HPP_
