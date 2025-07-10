// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/TankStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__TANK_STATUS__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__TANK_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__TankStatus __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__TankStatus __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TankStatus_
{
  using Type = TankStatus_<ContainerAllocator>;

  explicit TankStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tank = "";
      this->ph = 0.0f;
      this->ec = 0.0f;
      this->t = 0.0f;
      this->flow_volume = 0.0f;
      this->flow_rate = 0.0f;
      this->circuit_p = 0.0f;
      this->critical_low = false;
      this->critical_high = false;
      this->water_level = 0.0f;
      this->pump = false;
      this->recycling = false;
      this->intake = false;
      this->drain = false;
      this->aeration = false;
    }
  }

  explicit TankStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tank(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tank = "";
      this->ph = 0.0f;
      this->ec = 0.0f;
      this->t = 0.0f;
      this->flow_volume = 0.0f;
      this->flow_rate = 0.0f;
      this->circuit_p = 0.0f;
      this->critical_low = false;
      this->critical_high = false;
      this->water_level = 0.0f;
      this->pump = false;
      this->recycling = false;
      this->intake = false;
      this->drain = false;
      this->aeration = false;
    }
  }

  // field types and members
  using _tank_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tank_type tank;
  using _ph_type =
    float;
  _ph_type ph;
  using _ec_type =
    float;
  _ec_type ec;
  using _t_type =
    float;
  _t_type t;
  using _flow_volume_type =
    float;
  _flow_volume_type flow_volume;
  using _flow_rate_type =
    float;
  _flow_rate_type flow_rate;
  using _circuit_p_type =
    float;
  _circuit_p_type circuit_p;
  using _critical_low_type =
    bool;
  _critical_low_type critical_low;
  using _critical_high_type =
    bool;
  _critical_high_type critical_high;
  using _water_level_type =
    float;
  _water_level_type water_level;
  using _pump_type =
    bool;
  _pump_type pump;
  using _recycling_type =
    bool;
  _recycling_type recycling;
  using _intake_type =
    bool;
  _intake_type intake;
  using _drain_type =
    bool;
  _drain_type drain;
  using _aeration_type =
    bool;
  _aeration_type aeration;

  // setters for named parameter idiom
  Type & set__tank(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tank = _arg;
    return *this;
  }
  Type & set__ph(
    const float & _arg)
  {
    this->ph = _arg;
    return *this;
  }
  Type & set__ec(
    const float & _arg)
  {
    this->ec = _arg;
    return *this;
  }
  Type & set__t(
    const float & _arg)
  {
    this->t = _arg;
    return *this;
  }
  Type & set__flow_volume(
    const float & _arg)
  {
    this->flow_volume = _arg;
    return *this;
  }
  Type & set__flow_rate(
    const float & _arg)
  {
    this->flow_rate = _arg;
    return *this;
  }
  Type & set__circuit_p(
    const float & _arg)
  {
    this->circuit_p = _arg;
    return *this;
  }
  Type & set__critical_low(
    const bool & _arg)
  {
    this->critical_low = _arg;
    return *this;
  }
  Type & set__critical_high(
    const bool & _arg)
  {
    this->critical_high = _arg;
    return *this;
  }
  Type & set__water_level(
    const float & _arg)
  {
    this->water_level = _arg;
    return *this;
  }
  Type & set__pump(
    const bool & _arg)
  {
    this->pump = _arg;
    return *this;
  }
  Type & set__recycling(
    const bool & _arg)
  {
    this->recycling = _arg;
    return *this;
  }
  Type & set__intake(
    const bool & _arg)
  {
    this->intake = _arg;
    return *this;
  }
  Type & set__drain(
    const bool & _arg)
  {
    this->drain = _arg;
    return *this;
  }
  Type & set__aeration(
    const bool & _arg)
  {
    this->aeration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::TankStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::TankStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::TankStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::TankStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::TankStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::TankStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::TankStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::TankStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::TankStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::TankStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__TankStatus
    std::shared_ptr<interfaces::msg::TankStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__TankStatus
    std::shared_ptr<interfaces::msg::TankStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TankStatus_ & other) const
  {
    if (this->tank != other.tank) {
      return false;
    }
    if (this->ph != other.ph) {
      return false;
    }
    if (this->ec != other.ec) {
      return false;
    }
    if (this->t != other.t) {
      return false;
    }
    if (this->flow_volume != other.flow_volume) {
      return false;
    }
    if (this->flow_rate != other.flow_rate) {
      return false;
    }
    if (this->circuit_p != other.circuit_p) {
      return false;
    }
    if (this->critical_low != other.critical_low) {
      return false;
    }
    if (this->critical_high != other.critical_high) {
      return false;
    }
    if (this->water_level != other.water_level) {
      return false;
    }
    if (this->pump != other.pump) {
      return false;
    }
    if (this->recycling != other.recycling) {
      return false;
    }
    if (this->intake != other.intake) {
      return false;
    }
    if (this->drain != other.drain) {
      return false;
    }
    if (this->aeration != other.aeration) {
      return false;
    }
    return true;
  }
  bool operator!=(const TankStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TankStatus_

// alias to use template instance with default allocator
using TankStatus =
  interfaces::msg::TankStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__TANK_STATUS__STRUCT_HPP_
