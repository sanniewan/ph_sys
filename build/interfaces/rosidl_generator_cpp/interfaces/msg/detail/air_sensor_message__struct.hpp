// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/AirSensorMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__AIR_SENSOR_MESSAGE__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__AIR_SENSOR_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__AirSensorMessage __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__AirSensorMessage __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AirSensorMessage_
{
  using Type = AirSensorMessage_<ContainerAllocator>;

  explicit AirSensorMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err = false;
      this->msg = "";
      this->t = 0.0f;
      this->rh = 0;
      this->co2 = 0;
    }
  }

  explicit AirSensorMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err = false;
      this->msg = "";
      this->t = 0.0f;
      this->rh = 0;
      this->co2 = 0;
    }
  }

  // field types and members
  using _err_type =
    bool;
  _err_type err;
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msg_type msg;
  using _t_type =
    float;
  _t_type t;
  using _rh_type =
    int8_t;
  _rh_type rh;
  using _co2_type =
    int16_t;
  _co2_type co2;

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
  Type & set__co2(
    const int16_t & _arg)
  {
    this->co2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::AirSensorMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::AirSensorMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::AirSensorMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::AirSensorMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::AirSensorMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::AirSensorMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::AirSensorMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::AirSensorMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::AirSensorMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::AirSensorMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__AirSensorMessage
    std::shared_ptr<interfaces::msg::AirSensorMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__AirSensorMessage
    std::shared_ptr<interfaces::msg::AirSensorMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AirSensorMessage_ & other) const
  {
    if (this->err != other.err) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    if (this->t != other.t) {
      return false;
    }
    if (this->rh != other.rh) {
      return false;
    }
    if (this->co2 != other.co2) {
      return false;
    }
    return true;
  }
  bool operator!=(const AirSensorMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AirSensorMessage_

// alias to use template instance with default allocator
using AirSensorMessage =
  interfaces::msg::AirSensorMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__AIR_SENSOR_MESSAGE__STRUCT_HPP_
