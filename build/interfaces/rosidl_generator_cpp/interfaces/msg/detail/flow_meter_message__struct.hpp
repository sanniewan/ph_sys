// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/FlowMeterMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FLOW_METER_MESSAGE__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__FLOW_METER_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__FlowMeterMessage __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__FlowMeterMessage __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FlowMeterMessage_
{
  using Type = FlowMeterMessage_<ContainerAllocator>;

  explicit FlowMeterMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err = false;
      this->msg = "";
      this->flow_volume = 0.0f;
      this->flow_rate = 0.0f;
    }
  }

  explicit FlowMeterMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err = false;
      this->msg = "";
      this->flow_volume = 0.0f;
      this->flow_rate = 0.0f;
    }
  }

  // field types and members
  using _err_type =
    bool;
  _err_type err;
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msg_type msg;
  using _flow_volume_type =
    float;
  _flow_volume_type flow_volume;
  using _flow_rate_type =
    float;
  _flow_rate_type flow_rate;

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

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::FlowMeterMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::FlowMeterMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::FlowMeterMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::FlowMeterMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::FlowMeterMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::FlowMeterMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::FlowMeterMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::FlowMeterMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::FlowMeterMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::FlowMeterMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__FlowMeterMessage
    std::shared_ptr<interfaces::msg::FlowMeterMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__FlowMeterMessage
    std::shared_ptr<interfaces::msg::FlowMeterMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FlowMeterMessage_ & other) const
  {
    if (this->err != other.err) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    if (this->flow_volume != other.flow_volume) {
      return false;
    }
    if (this->flow_rate != other.flow_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const FlowMeterMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FlowMeterMessage_

// alias to use template instance with default allocator
using FlowMeterMessage =
  interfaces::msg::FlowMeterMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__FLOW_METER_MESSAGE__STRUCT_HPP_
