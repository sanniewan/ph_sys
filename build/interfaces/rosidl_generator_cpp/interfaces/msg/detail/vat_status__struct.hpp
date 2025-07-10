// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/VatStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__VAT_STATUS__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__VAT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__VatStatus __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__VatStatus __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VatStatus_
{
  using Type = VatStatus_<ContainerAllocator>;

  explicit VatStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level_1 = 0;
      this->level_2 = 0;
      this->level_3 = 0;
      this->level_4 = 0;
    }
  }

  explicit VatStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level_1 = 0;
      this->level_2 = 0;
      this->level_3 = 0;
      this->level_4 = 0;
    }
  }

  // field types and members
  using _level_1_type =
    int8_t;
  _level_1_type level_1;
  using _level_2_type =
    int8_t;
  _level_2_type level_2;
  using _level_3_type =
    int8_t;
  _level_3_type level_3;
  using _level_4_type =
    int8_t;
  _level_4_type level_4;

  // setters for named parameter idiom
  Type & set__level_1(
    const int8_t & _arg)
  {
    this->level_1 = _arg;
    return *this;
  }
  Type & set__level_2(
    const int8_t & _arg)
  {
    this->level_2 = _arg;
    return *this;
  }
  Type & set__level_3(
    const int8_t & _arg)
  {
    this->level_3 = _arg;
    return *this;
  }
  Type & set__level_4(
    const int8_t & _arg)
  {
    this->level_4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::VatStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::VatStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::VatStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::VatStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::VatStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::VatStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::VatStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::VatStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::VatStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::VatStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__VatStatus
    std::shared_ptr<interfaces::msg::VatStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__VatStatus
    std::shared_ptr<interfaces::msg::VatStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VatStatus_ & other) const
  {
    if (this->level_1 != other.level_1) {
      return false;
    }
    if (this->level_2 != other.level_2) {
      return false;
    }
    if (this->level_3 != other.level_3) {
      return false;
    }
    if (this->level_4 != other.level_4) {
      return false;
    }
    return true;
  }
  bool operator!=(const VatStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VatStatus_

// alias to use template instance with default allocator
using VatStatus =
  interfaces::msg::VatStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__VAT_STATUS__STRUCT_HPP_
