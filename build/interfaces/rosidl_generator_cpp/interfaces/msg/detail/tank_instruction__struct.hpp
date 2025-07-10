// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/TankInstruction.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__TANK_INSTRUCTION__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__TANK_INSTRUCTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__TankInstruction __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__TankInstruction __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TankInstruction_
{
  using Type = TankInstruction_<ContainerAllocator>;

  explicit TankInstruction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->instruction = "";
      this->tank = "";
      this->vat = 0;
      this->quantity = 0.0f;
      this->ph_target = 0.0f;
      this->ec_target = 0.0f;
    }
  }

  explicit TankInstruction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : instruction(_alloc),
    tank(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->instruction = "";
      this->tank = "";
      this->vat = 0;
      this->quantity = 0.0f;
      this->ph_target = 0.0f;
      this->ec_target = 0.0f;
    }
  }

  // field types and members
  using _instruction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _instruction_type instruction;
  using _tank_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tank_type tank;
  using _vat_type =
    int8_t;
  _vat_type vat;
  using _quantity_type =
    float;
  _quantity_type quantity;
  using _ph_target_type =
    float;
  _ph_target_type ph_target;
  using _ec_target_type =
    float;
  _ec_target_type ec_target;

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
  Type & set__vat(
    const int8_t & _arg)
  {
    this->vat = _arg;
    return *this;
  }
  Type & set__quantity(
    const float & _arg)
  {
    this->quantity = _arg;
    return *this;
  }
  Type & set__ph_target(
    const float & _arg)
  {
    this->ph_target = _arg;
    return *this;
  }
  Type & set__ec_target(
    const float & _arg)
  {
    this->ec_target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::TankInstruction_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::TankInstruction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::TankInstruction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::TankInstruction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::TankInstruction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::TankInstruction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::TankInstruction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::TankInstruction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::TankInstruction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::TankInstruction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__TankInstruction
    std::shared_ptr<interfaces::msg::TankInstruction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__TankInstruction
    std::shared_ptr<interfaces::msg::TankInstruction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TankInstruction_ & other) const
  {
    if (this->instruction != other.instruction) {
      return false;
    }
    if (this->tank != other.tank) {
      return false;
    }
    if (this->vat != other.vat) {
      return false;
    }
    if (this->quantity != other.quantity) {
      return false;
    }
    if (this->ph_target != other.ph_target) {
      return false;
    }
    if (this->ec_target != other.ec_target) {
      return false;
    }
    return true;
  }
  bool operator!=(const TankInstruction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TankInstruction_

// alias to use template instance with default allocator
using TankInstruction =
  interfaces::msg::TankInstruction_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__TANK_INSTRUCTION__STRUCT_HPP_
