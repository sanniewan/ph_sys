// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/AirInstruction.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__AIR_INSTRUCTION__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__AIR_INSTRUCTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__AirInstruction __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__AirInstruction __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AirInstruction_
{
  using Type = AirInstruction_<ContainerAllocator>;

  explicit AirInstruction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->instruction = "";
      this->t_target = 0.0f;
    }
  }

  explicit AirInstruction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : instruction(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->instruction = "";
      this->t_target = 0.0f;
    }
  }

  // field types and members
  using _instruction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _instruction_type instruction;
  using _t_target_type =
    float;
  _t_target_type t_target;

  // setters for named parameter idiom
  Type & set__instruction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->instruction = _arg;
    return *this;
  }
  Type & set__t_target(
    const float & _arg)
  {
    this->t_target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::AirInstruction_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::AirInstruction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::AirInstruction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::AirInstruction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::AirInstruction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::AirInstruction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::AirInstruction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::AirInstruction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::AirInstruction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::AirInstruction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__AirInstruction
    std::shared_ptr<interfaces::msg::AirInstruction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__AirInstruction
    std::shared_ptr<interfaces::msg::AirInstruction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AirInstruction_ & other) const
  {
    if (this->instruction != other.instruction) {
      return false;
    }
    if (this->t_target != other.t_target) {
      return false;
    }
    return true;
  }
  bool operator!=(const AirInstruction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AirInstruction_

// alias to use template instance with default allocator
using AirInstruction =
  interfaces::msg::AirInstruction_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__AIR_INSTRUCTION__STRUCT_HPP_
