// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/LightInstruction.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__LIGHT_INSTRUCTION__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__LIGHT_INSTRUCTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__LightInstruction __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__LightInstruction __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LightInstruction_
{
  using Type = LightInstruction_<ContainerAllocator>;

  explicit LightInstruction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->instruction = "";
      this->level = 0;
    }
  }

  explicit LightInstruction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : instruction(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->instruction = "";
      this->level = 0;
    }
  }

  // field types and members
  using _instruction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _instruction_type instruction;
  using _level_type =
    int8_t;
  _level_type level;

  // setters for named parameter idiom
  Type & set__instruction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->instruction = _arg;
    return *this;
  }
  Type & set__level(
    const int8_t & _arg)
  {
    this->level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::LightInstruction_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::LightInstruction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::LightInstruction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::LightInstruction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::LightInstruction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::LightInstruction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::LightInstruction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::LightInstruction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::LightInstruction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::LightInstruction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__LightInstruction
    std::shared_ptr<interfaces::msg::LightInstruction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__LightInstruction
    std::shared_ptr<interfaces::msg::LightInstruction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LightInstruction_ & other) const
  {
    if (this->instruction != other.instruction) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    return true;
  }
  bool operator!=(const LightInstruction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LightInstruction_

// alias to use template instance with default allocator
using LightInstruction =
  interfaces::msg::LightInstruction_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__LIGHT_INSTRUCTION__STRUCT_HPP_
