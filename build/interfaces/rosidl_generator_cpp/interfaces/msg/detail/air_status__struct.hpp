// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/AirStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__AIR_STATUS__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__AIR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__AirStatus __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__AirStatus __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AirStatus_
{
  using Type = AirStatus_<ContainerAllocator>;

  explicit AirStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->t = 0.0f;
      this->rh = 0;
      this->t2 = 0.0f;
      this->rh2 = 0;
      this->co2 = 0;
      this->fan = 0;
      this->aeration = false;
    }
  }

  explicit AirStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->t = 0.0f;
      this->rh = 0;
      this->t2 = 0.0f;
      this->rh2 = 0;
      this->co2 = 0;
      this->fan = 0;
      this->aeration = false;
    }
  }

  // field types and members
  using _t_type =
    float;
  _t_type t;
  using _rh_type =
    int8_t;
  _rh_type rh;
  using _t2_type =
    float;
  _t2_type t2;
  using _rh2_type =
    int8_t;
  _rh2_type rh2;
  using _co2_type =
    int16_t;
  _co2_type co2;
  using _fan_type =
    int8_t;
  _fan_type fan;
  using _aeration_type =
    bool;
  _aeration_type aeration;

  // setters for named parameter idiom
  Type & set__t(
    const float & _arg)
  {
    this->t = _arg;
    return *this;
  }
  Type & set__rh(
    const int8_t & _arg)
  {
    this->rh = _arg;
    return *this;
  }
  Type & set__t2(
    const float & _arg)
  {
    this->t2 = _arg;
    return *this;
  }
  Type & set__rh2(
    const int8_t & _arg)
  {
    this->rh2 = _arg;
    return *this;
  }
  Type & set__co2(
    const int16_t & _arg)
  {
    this->co2 = _arg;
    return *this;
  }
  Type & set__fan(
    const int8_t & _arg)
  {
    this->fan = _arg;
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
    interfaces::msg::AirStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::AirStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::AirStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::AirStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::AirStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::AirStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::AirStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::AirStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::AirStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::AirStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__AirStatus
    std::shared_ptr<interfaces::msg::AirStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__AirStatus
    std::shared_ptr<interfaces::msg::AirStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AirStatus_ & other) const
  {
    if (this->t != other.t) {
      return false;
    }
    if (this->rh != other.rh) {
      return false;
    }
    if (this->t2 != other.t2) {
      return false;
    }
    if (this->rh2 != other.rh2) {
      return false;
    }
    if (this->co2 != other.co2) {
      return false;
    }
    if (this->fan != other.fan) {
      return false;
    }
    if (this->aeration != other.aeration) {
      return false;
    }
    return true;
  }
  bool operator!=(const AirStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AirStatus_

// alias to use template instance with default allocator
using AirStatus =
  interfaces::msg::AirStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__AIR_STATUS__STRUCT_HPP_
