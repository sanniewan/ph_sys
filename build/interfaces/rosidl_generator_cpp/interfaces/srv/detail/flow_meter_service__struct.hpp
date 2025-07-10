// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/FlowMeterService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__FLOW_METER_SERVICE__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__FLOW_METER_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__FlowMeterService_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__FlowMeterService_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FlowMeterService_Request_
{
  using Type = FlowMeterService_Request_<ContainerAllocator>;

  explicit FlowMeterService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit FlowMeterService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::FlowMeterService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::FlowMeterService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::FlowMeterService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::FlowMeterService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::FlowMeterService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::FlowMeterService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::FlowMeterService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::FlowMeterService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::FlowMeterService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::FlowMeterService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__FlowMeterService_Request
    std::shared_ptr<interfaces::srv::FlowMeterService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__FlowMeterService_Request
    std::shared_ptr<interfaces::srv::FlowMeterService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FlowMeterService_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const FlowMeterService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FlowMeterService_Request_

// alias to use template instance with default allocator
using FlowMeterService_Request =
  interfaces::srv::FlowMeterService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__FlowMeterService_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__FlowMeterService_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FlowMeterService_Response_
{
  using Type = FlowMeterService_Response_<ContainerAllocator>;

  explicit FlowMeterService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  explicit FlowMeterService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    interfaces::srv::FlowMeterService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::FlowMeterService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::FlowMeterService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::FlowMeterService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::FlowMeterService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::FlowMeterService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::FlowMeterService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::FlowMeterService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::FlowMeterService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::FlowMeterService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__FlowMeterService_Response
    std::shared_ptr<interfaces::srv::FlowMeterService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__FlowMeterService_Response
    std::shared_ptr<interfaces::srv::FlowMeterService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FlowMeterService_Response_ & other) const
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
  bool operator!=(const FlowMeterService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FlowMeterService_Response_

// alias to use template instance with default allocator
using FlowMeterService_Response =
  interfaces::srv::FlowMeterService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct FlowMeterService
{
  using Request = interfaces::srv::FlowMeterService_Request;
  using Response = interfaces::srv::FlowMeterService_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__FLOW_METER_SERVICE__STRUCT_HPP_
