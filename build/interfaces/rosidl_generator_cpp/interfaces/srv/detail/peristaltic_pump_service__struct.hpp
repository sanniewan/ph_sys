// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/PeristalticPumpService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__PERISTALTIC_PUMP_SERVICE__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__PERISTALTIC_PUMP_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__PeristalticPumpService_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__PeristalticPumpService_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PeristalticPumpService_Request_
{
  using Type = PeristalticPumpService_Request_<ContainerAllocator>;

  explicit PeristalticPumpService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->volume = 0.0f;
    }
  }

  explicit PeristalticPumpService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->volume = 0.0f;
    }
  }

  // field types and members
  using _volume_type =
    float;
  _volume_type volume;

  // setters for named parameter idiom
  Type & set__volume(
    const float & _arg)
  {
    this->volume = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::PeristalticPumpService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::PeristalticPumpService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::PeristalticPumpService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::PeristalticPumpService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::PeristalticPumpService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::PeristalticPumpService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::PeristalticPumpService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::PeristalticPumpService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::PeristalticPumpService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::PeristalticPumpService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__PeristalticPumpService_Request
    std::shared_ptr<interfaces::srv::PeristalticPumpService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__PeristalticPumpService_Request
    std::shared_ptr<interfaces::srv::PeristalticPumpService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PeristalticPumpService_Request_ & other) const
  {
    if (this->volume != other.volume) {
      return false;
    }
    return true;
  }
  bool operator!=(const PeristalticPumpService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PeristalticPumpService_Request_

// alias to use template instance with default allocator
using PeristalticPumpService_Request =
  interfaces::srv::PeristalticPumpService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__PeristalticPumpService_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__PeristalticPumpService_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PeristalticPumpService_Response_
{
  using Type = PeristalticPumpService_Response_<ContainerAllocator>;

  explicit PeristalticPumpService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err = false;
      this->msg = "";
      this->volume = 0.0f;
    }
  }

  explicit PeristalticPumpService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err = false;
      this->msg = "";
      this->volume = 0.0f;
    }
  }

  // field types and members
  using _err_type =
    bool;
  _err_type err;
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msg_type msg;
  using _volume_type =
    float;
  _volume_type volume;

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
  Type & set__volume(
    const float & _arg)
  {
    this->volume = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::PeristalticPumpService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::PeristalticPumpService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::PeristalticPumpService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::PeristalticPumpService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::PeristalticPumpService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::PeristalticPumpService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::PeristalticPumpService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::PeristalticPumpService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::PeristalticPumpService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::PeristalticPumpService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__PeristalticPumpService_Response
    std::shared_ptr<interfaces::srv::PeristalticPumpService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__PeristalticPumpService_Response
    std::shared_ptr<interfaces::srv::PeristalticPumpService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PeristalticPumpService_Response_ & other) const
  {
    if (this->err != other.err) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    if (this->volume != other.volume) {
      return false;
    }
    return true;
  }
  bool operator!=(const PeristalticPumpService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PeristalticPumpService_Response_

// alias to use template instance with default allocator
using PeristalticPumpService_Response =
  interfaces::srv::PeristalticPumpService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct PeristalticPumpService
{
  using Request = interfaces::srv::PeristalticPumpService_Request;
  using Response = interfaces::srv::PeristalticPumpService_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__PERISTALTIC_PUMP_SERVICE__STRUCT_HPP_
