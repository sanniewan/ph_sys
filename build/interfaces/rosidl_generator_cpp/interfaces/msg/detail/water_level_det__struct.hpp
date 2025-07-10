// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/WaterLevelDet.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__WATER_LEVEL_DET__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__WATER_LEVEL_DET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__WaterLevelDet __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__WaterLevelDet __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaterLevelDet_
{
  using Type = WaterLevelDet_<ContainerAllocator>;

  explicit WaterLevelDet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err = false;
      this->msg = "";
      this->result = false;
    }
  }

  explicit WaterLevelDet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err = false;
      this->msg = "";
      this->result = false;
    }
  }

  // field types and members
  using _err_type =
    bool;
  _err_type err;
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msg_type msg;
  using _result_type =
    bool;
  _result_type result;

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
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::WaterLevelDet_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::WaterLevelDet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::WaterLevelDet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::WaterLevelDet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::WaterLevelDet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::WaterLevelDet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::WaterLevelDet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::WaterLevelDet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::WaterLevelDet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::WaterLevelDet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__WaterLevelDet
    std::shared_ptr<interfaces::msg::WaterLevelDet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__WaterLevelDet
    std::shared_ptr<interfaces::msg::WaterLevelDet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaterLevelDet_ & other) const
  {
    if (this->err != other.err) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaterLevelDet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaterLevelDet_

// alias to use template instance with default allocator
using WaterLevelDet =
  interfaces::msg::WaterLevelDet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__WATER_LEVEL_DET__STRUCT_HPP_
