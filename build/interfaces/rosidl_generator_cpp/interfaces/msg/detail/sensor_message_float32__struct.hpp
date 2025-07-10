// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/SensorMessageFloat32.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__SENSOR_MESSAGE_FLOAT32__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__SENSOR_MESSAGE_FLOAT32__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__SensorMessageFloat32 __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__SensorMessageFloat32 __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorMessageFloat32_
{
  using Type = SensorMessageFloat32_<ContainerAllocator>;

  explicit SensorMessageFloat32_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err = false;
      this->msg = "";
      this->data = 0.0f;
    }
  }

  explicit SensorMessageFloat32_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err = false;
      this->msg = "";
      this->data = 0.0f;
    }
  }

  // field types and members
  using _err_type =
    bool;
  _err_type err;
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msg_type msg;
  using _data_type =
    float;
  _data_type data;

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
  Type & set__data(
    const float & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::SensorMessageFloat32_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::SensorMessageFloat32_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::SensorMessageFloat32_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::SensorMessageFloat32_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::SensorMessageFloat32_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::SensorMessageFloat32_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::SensorMessageFloat32_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::SensorMessageFloat32_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::SensorMessageFloat32_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::SensorMessageFloat32_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__SensorMessageFloat32
    std::shared_ptr<interfaces::msg::SensorMessageFloat32_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__SensorMessageFloat32
    std::shared_ptr<interfaces::msg::SensorMessageFloat32_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorMessageFloat32_ & other) const
  {
    if (this->err != other.err) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorMessageFloat32_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorMessageFloat32_

// alias to use template instance with default allocator
using SensorMessageFloat32 =
  interfaces::msg::SensorMessageFloat32_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__SENSOR_MESSAGE_FLOAT32__STRUCT_HPP_
