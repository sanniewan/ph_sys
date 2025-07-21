// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/PhControllerService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__PH_CONTROLLER_SERVICE__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__PH_CONTROLLER_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__PhControllerService_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__PhControllerService_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PhControllerService_Request_
{
  using Type = PhControllerService_Request_<ContainerAllocator>;

  explicit PhControllerService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ph = 0.0f;
      this->pump_type = "";
    }
  }

  explicit PhControllerService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pump_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ph = 0.0f;
      this->pump_type = "";
    }
  }

  // field types and members
  using _ph_type =
    float;
  _ph_type ph;
  using _pump_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pump_type_type pump_type;

  // setters for named parameter idiom
  Type & set__ph(
    const float & _arg)
  {
    this->ph = _arg;
    return *this;
  }
  Type & set__pump_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pump_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::PhControllerService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::PhControllerService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::PhControllerService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::PhControllerService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::PhControllerService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::PhControllerService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::PhControllerService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::PhControllerService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::PhControllerService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::PhControllerService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__PhControllerService_Request
    std::shared_ptr<interfaces::srv::PhControllerService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__PhControllerService_Request
    std::shared_ptr<interfaces::srv::PhControllerService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PhControllerService_Request_ & other) const
  {
    if (this->ph != other.ph) {
      return false;
    }
    if (this->pump_type != other.pump_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const PhControllerService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PhControllerService_Request_

// alias to use template instance with default allocator
using PhControllerService_Request =
  interfaces::srv::PhControllerService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__PhControllerService_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__PhControllerService_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PhControllerService_Response_
{
  using Type = PhControllerService_Response_<ContainerAllocator>;

  explicit PhControllerService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pump_type = "";
      this->warning = false;
      this->msg = "";
      this->volume = 0.0f;
    }
  }

  explicit PhControllerService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pump_type(_alloc),
    msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pump_type = "";
      this->warning = false;
      this->msg = "";
      this->volume = 0.0f;
    }
  }

  // field types and members
  using _pump_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pump_type_type pump_type;
  using _warning_type =
    bool;
  _warning_type warning;
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msg_type msg;
  using _volume_type =
    float;
  _volume_type volume;

  // setters for named parameter idiom
  Type & set__pump_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pump_type = _arg;
    return *this;
  }
  Type & set__warning(
    const bool & _arg)
  {
    this->warning = _arg;
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
    interfaces::srv::PhControllerService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::PhControllerService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::PhControllerService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::PhControllerService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::PhControllerService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::PhControllerService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::PhControllerService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::PhControllerService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::PhControllerService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::PhControllerService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__PhControllerService_Response
    std::shared_ptr<interfaces::srv::PhControllerService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__PhControllerService_Response
    std::shared_ptr<interfaces::srv::PhControllerService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PhControllerService_Response_ & other) const
  {
    if (this->pump_type != other.pump_type) {
      return false;
    }
    if (this->warning != other.warning) {
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
  bool operator!=(const PhControllerService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PhControllerService_Response_

// alias to use template instance with default allocator
using PhControllerService_Response =
  interfaces::srv::PhControllerService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct PhControllerService
{
  using Request = interfaces::srv::PhControllerService_Request;
  using Response = interfaces::srv::PhControllerService_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__PH_CONTROLLER_SERVICE__STRUCT_HPP_
