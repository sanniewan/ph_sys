// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/IrrigationInstruction.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__IRRIGATION_INSTRUCTION__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__IRRIGATION_INSTRUCTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__IrrigationInstruction __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__IrrigationInstruction __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IrrigationInstruction_
{
  using Type = IrrigationInstruction_<ContainerAllocator>;

  explicit IrrigationInstruction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->instruction = "";
      this->tank = "";
    }
  }

  explicit IrrigationInstruction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : instruction(_alloc),
    tank(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->instruction = "";
      this->tank = "";
    }
  }

  // field types and members
  using _instruction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _instruction_type instruction;
  using _tank_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tank_type tank;
  using _valves_type =
    rosidl_runtime_cpp::BoundedVector<int8_t, 64, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>>;
  _valves_type valves;

  // setters for named parameter idiom
  Type & set__instruction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->instruction = _arg;
    return *this;
  }
  Type & set__tank(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tank = _arg;
    return *this;
  }
  Type & set__valves(
    const rosidl_runtime_cpp::BoundedVector<int8_t, 64, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> & _arg)
  {
    this->valves = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::IrrigationInstruction_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::IrrigationInstruction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::IrrigationInstruction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::IrrigationInstruction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::IrrigationInstruction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::IrrigationInstruction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::IrrigationInstruction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::IrrigationInstruction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::IrrigationInstruction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::IrrigationInstruction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__IrrigationInstruction
    std::shared_ptr<interfaces::msg::IrrigationInstruction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__IrrigationInstruction
    std::shared_ptr<interfaces::msg::IrrigationInstruction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IrrigationInstruction_ & other) const
  {
    if (this->instruction != other.instruction) {
      return false;
    }
    if (this->tank != other.tank) {
      return false;
    }
    if (this->valves != other.valves) {
      return false;
    }
    return true;
  }
  bool operator!=(const IrrigationInstruction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IrrigationInstruction_

// alias to use template instance with default allocator
using IrrigationInstruction =
  interfaces::msg::IrrigationInstruction_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__IRRIGATION_INSTRUCTION__STRUCT_HPP_
