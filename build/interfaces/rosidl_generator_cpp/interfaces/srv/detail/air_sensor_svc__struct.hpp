// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/AirSensorSvc.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__AIR_SENSOR_SVC__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__AIR_SENSOR_SVC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__AirSensorSvc_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__AirSensorSvc_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AirSensorSvc_Request_
{
  using Type = AirSensorSvc_Request_<ContainerAllocator>;

  explicit AirSensorSvc_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->threshold_t = 0.0f;
    }
  }

  explicit AirSensorSvc_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->threshold_t = 0.0f;
    }
  }

  // field types and members
  using _threshold_t_type =
    float;
  _threshold_t_type threshold_t;

  // setters for named parameter idiom
  Type & set__threshold_t(
    const float & _arg)
  {
    this->threshold_t = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::AirSensorSvc_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::AirSensorSvc_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::AirSensorSvc_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::AirSensorSvc_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::AirSensorSvc_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::AirSensorSvc_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::AirSensorSvc_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::AirSensorSvc_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::AirSensorSvc_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::AirSensorSvc_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__AirSensorSvc_Request
    std::shared_ptr<interfaces::srv::AirSensorSvc_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__AirSensorSvc_Request
    std::shared_ptr<interfaces::srv::AirSensorSvc_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AirSensorSvc_Request_ & other) const
  {
    if (this->threshold_t != other.threshold_t) {
      return false;
    }
    return true;
  }
  bool operator!=(const AirSensorSvc_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AirSensorSvc_Request_

// alias to use template instance with default allocator
using AirSensorSvc_Request =
  interfaces::srv::AirSensorSvc_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__AirSensorSvc_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__AirSensorSvc_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AirSensorSvc_Response_
{
  using Type = AirSensorSvc_Response_<ContainerAllocator>;

  explicit AirSensorSvc_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  explicit AirSensorSvc_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    interfaces::srv::AirSensorSvc_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::AirSensorSvc_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::AirSensorSvc_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::AirSensorSvc_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::AirSensorSvc_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::AirSensorSvc_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::AirSensorSvc_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::AirSensorSvc_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::AirSensorSvc_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::AirSensorSvc_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__AirSensorSvc_Response
    std::shared_ptr<interfaces::srv::AirSensorSvc_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__AirSensorSvc_Response
    std::shared_ptr<interfaces::srv::AirSensorSvc_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AirSensorSvc_Response_ & other) const
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
  bool operator!=(const AirSensorSvc_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AirSensorSvc_Response_

// alias to use template instance with default allocator
using AirSensorSvc_Response =
  interfaces::srv::AirSensorSvc_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct AirSensorSvc
{
  using Request = interfaces::srv::AirSensorSvc_Request;
  using Response = interfaces::srv::AirSensorSvc_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__AIR_SENSOR_SVC__STRUCT_HPP_
