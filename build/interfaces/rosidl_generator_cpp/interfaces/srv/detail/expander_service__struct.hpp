// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/ExpanderService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__EXPANDER_SERVICE__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__EXPANDER_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__ExpanderService_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__ExpanderService_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExpanderService_Request_
{
  using Type = ExpanderService_Request_<ContainerAllocator>;

  explicit ExpanderService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sender = "";
      this->address = 0;
      this->port = 0;
      this->instruction = "";
      this->value = false;
    }
  }

  explicit ExpanderService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sender(_alloc),
    instruction(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sender = "";
      this->address = 0;
      this->port = 0;
      this->instruction = "";
      this->value = false;
    }
  }

  // field types and members
  using _sender_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sender_type sender;
  using _address_type =
    int8_t;
  _address_type address;
  using _port_type =
    int8_t;
  _port_type port;
  using _instruction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _instruction_type instruction;
  using _value_type =
    bool;
  _value_type value;

  // setters for named parameter idiom
  Type & set__sender(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sender = _arg;
    return *this;
  }
  Type & set__address(
    const int8_t & _arg)
  {
    this->address = _arg;
    return *this;
  }
  Type & set__port(
    const int8_t & _arg)
  {
    this->port = _arg;
    return *this;
  }
  Type & set__instruction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->instruction = _arg;
    return *this;
  }
  Type & set__value(
    const bool & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::ExpanderService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::ExpanderService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::ExpanderService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::ExpanderService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ExpanderService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ExpanderService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ExpanderService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ExpanderService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::ExpanderService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::ExpanderService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__ExpanderService_Request
    std::shared_ptr<interfaces::srv::ExpanderService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__ExpanderService_Request
    std::shared_ptr<interfaces::srv::ExpanderService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExpanderService_Request_ & other) const
  {
    if (this->sender != other.sender) {
      return false;
    }
    if (this->address != other.address) {
      return false;
    }
    if (this->port != other.port) {
      return false;
    }
    if (this->instruction != other.instruction) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExpanderService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExpanderService_Request_

// alias to use template instance with default allocator
using ExpanderService_Request =
  interfaces::srv::ExpanderService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__ExpanderService_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__ExpanderService_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExpanderService_Response_
{
  using Type = ExpanderService_Response_<ContainerAllocator>;

  explicit ExpanderService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err = false;
      this->msg = "";
      this->result = false;
    }
  }

  explicit ExpanderService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    interfaces::srv::ExpanderService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::ExpanderService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::ExpanderService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::ExpanderService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ExpanderService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ExpanderService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ExpanderService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ExpanderService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::ExpanderService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::ExpanderService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__ExpanderService_Response
    std::shared_ptr<interfaces::srv::ExpanderService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__ExpanderService_Response
    std::shared_ptr<interfaces::srv::ExpanderService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExpanderService_Response_ & other) const
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
  bool operator!=(const ExpanderService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExpanderService_Response_

// alias to use template instance with default allocator
using ExpanderService_Response =
  interfaces::srv::ExpanderService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct ExpanderService
{
  using Request = interfaces::srv::ExpanderService_Request;
  using Response = interfaces::srv::ExpanderService_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__EXPANDER_SERVICE__STRUCT_HPP_
