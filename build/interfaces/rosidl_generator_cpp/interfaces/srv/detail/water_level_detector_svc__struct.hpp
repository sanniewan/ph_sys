// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/WaterLevelDetectorSvc.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__WATER_LEVEL_DETECTOR_SVC__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__WATER_LEVEL_DETECTOR_SVC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__WaterLevelDetectorSvc_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__WaterLevelDetectorSvc_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WaterLevelDetectorSvc_Request_
{
  using Type = WaterLevelDetectorSvc_Request_<ContainerAllocator>;

  explicit WaterLevelDetectorSvc_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->threshold = false;
    }
  }

  explicit WaterLevelDetectorSvc_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->threshold = false;
    }
  }

  // field types and members
  using _threshold_type =
    bool;
  _threshold_type threshold;

  // setters for named parameter idiom
  Type & set__threshold(
    const bool & _arg)
  {
    this->threshold = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::WaterLevelDetectorSvc_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::WaterLevelDetectorSvc_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::WaterLevelDetectorSvc_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::WaterLevelDetectorSvc_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::WaterLevelDetectorSvc_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::WaterLevelDetectorSvc_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::WaterLevelDetectorSvc_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::WaterLevelDetectorSvc_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::WaterLevelDetectorSvc_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::WaterLevelDetectorSvc_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__WaterLevelDetectorSvc_Request
    std::shared_ptr<interfaces::srv::WaterLevelDetectorSvc_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__WaterLevelDetectorSvc_Request
    std::shared_ptr<interfaces::srv::WaterLevelDetectorSvc_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaterLevelDetectorSvc_Request_ & other) const
  {
    if (this->threshold != other.threshold) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaterLevelDetectorSvc_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaterLevelDetectorSvc_Request_

// alias to use template instance with default allocator
using WaterLevelDetectorSvc_Request =
  interfaces::srv::WaterLevelDetectorSvc_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__WaterLevelDetectorSvc_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__WaterLevelDetectorSvc_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WaterLevelDetectorSvc_Response_
{
  using Type = WaterLevelDetectorSvc_Response_<ContainerAllocator>;

  explicit WaterLevelDetectorSvc_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err = false;
      this->msg = "";
      this->result = false;
    }
  }

  explicit WaterLevelDetectorSvc_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    interfaces::srv::WaterLevelDetectorSvc_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::WaterLevelDetectorSvc_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::WaterLevelDetectorSvc_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::WaterLevelDetectorSvc_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::WaterLevelDetectorSvc_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::WaterLevelDetectorSvc_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::WaterLevelDetectorSvc_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::WaterLevelDetectorSvc_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::WaterLevelDetectorSvc_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::WaterLevelDetectorSvc_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__WaterLevelDetectorSvc_Response
    std::shared_ptr<interfaces::srv::WaterLevelDetectorSvc_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__WaterLevelDetectorSvc_Response
    std::shared_ptr<interfaces::srv::WaterLevelDetectorSvc_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaterLevelDetectorSvc_Response_ & other) const
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
  bool operator!=(const WaterLevelDetectorSvc_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaterLevelDetectorSvc_Response_

// alias to use template instance with default allocator
using WaterLevelDetectorSvc_Response =
  interfaces::srv::WaterLevelDetectorSvc_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct WaterLevelDetectorSvc
{
  using Request = interfaces::srv::WaterLevelDetectorSvc_Request;
  using Response = interfaces::srv::WaterLevelDetectorSvc_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__WATER_LEVEL_DETECTOR_SVC__STRUCT_HPP_
