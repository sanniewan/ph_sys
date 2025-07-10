// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/IrrigationMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__IRRIGATION_MESSAGE__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__IRRIGATION_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__IrrigationMessage __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__IrrigationMessage __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IrrigationMessage_
{
  using Type = IrrigationMessage_<ContainerAllocator>;

  explicit IrrigationMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tank = "";
      this->valve = 0;
      this->err = false;
      this->msg = "";
      this->state = false;
    }
  }

  explicit IrrigationMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tank(_alloc),
    msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tank = "";
      this->valve = 0;
      this->err = false;
      this->msg = "";
      this->state = false;
    }
  }

  // field types and members
  using _tank_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tank_type tank;
  using _valve_type =
    int8_t;
  _valve_type valve;
  using _err_type =
    bool;
  _err_type err;
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msg_type msg;
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__tank(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tank = _arg;
    return *this;
  }
  Type & set__valve(
    const int8_t & _arg)
  {
    this->valve = _arg;
    return *this;
  }
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
  Type & set__state(
    const bool & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::IrrigationMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::IrrigationMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::IrrigationMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::IrrigationMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::IrrigationMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::IrrigationMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::IrrigationMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::IrrigationMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::IrrigationMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::IrrigationMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__IrrigationMessage
    std::shared_ptr<interfaces::msg::IrrigationMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__IrrigationMessage
    std::shared_ptr<interfaces::msg::IrrigationMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IrrigationMessage_ & other) const
  {
    if (this->tank != other.tank) {
      return false;
    }
    if (this->valve != other.valve) {
      return false;
    }
    if (this->err != other.err) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const IrrigationMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IrrigationMessage_

// alias to use template instance with default allocator
using IrrigationMessage =
  interfaces::msg::IrrigationMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__IRRIGATION_MESSAGE__STRUCT_HPP_
