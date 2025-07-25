// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/IrrigationStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__IRRIGATION_STATUS__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__IRRIGATION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__IrrigationStatus __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__IrrigationStatus __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IrrigationStatus_
{
  using Type = IrrigationStatus_<ContainerAllocator>;

  explicit IrrigationStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valves = "";
      this->pumps = "";
      this->pressure = 0.0;
    }
  }

  explicit IrrigationStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : valves(_alloc),
    pumps(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valves = "";
      this->pumps = "";
      this->pressure = 0.0;
    }
  }

  // field types and members
  using _valves_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _valves_type valves;
  using _pumps_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pumps_type pumps;
  using _pressure_type =
    double;
  _pressure_type pressure;

  // setters for named parameter idiom
  Type & set__valves(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->valves = _arg;
    return *this;
  }
  Type & set__pumps(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pumps = _arg;
    return *this;
  }
  Type & set__pressure(
    const double & _arg)
  {
    this->pressure = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::IrrigationStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::IrrigationStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::IrrigationStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::IrrigationStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::IrrigationStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::IrrigationStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::IrrigationStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::IrrigationStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::IrrigationStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::IrrigationStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__IrrigationStatus
    std::shared_ptr<interfaces::msg::IrrigationStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__IrrigationStatus
    std::shared_ptr<interfaces::msg::IrrigationStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IrrigationStatus_ & other) const
  {
    if (this->valves != other.valves) {
      return false;
    }
    if (this->pumps != other.pumps) {
      return false;
    }
    if (this->pressure != other.pressure) {
      return false;
    }
    return true;
  }
  bool operator!=(const IrrigationStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IrrigationStatus_

// alias to use template instance with default allocator
using IrrigationStatus =
  interfaces::msg::IrrigationStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__IRRIGATION_STATUS__STRUCT_HPP_
