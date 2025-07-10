// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/CameraStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__CAMERA_STATUS__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__CAMERA_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/camera_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_CameraStatus_state
{
public:
  Init_CameraStatus_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::msg::CameraStatus state(::interfaces::msg::CameraStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::CameraStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::CameraStatus>()
{
  return interfaces::msg::builder::Init_CameraStatus_state();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__CAMERA_STATUS__BUILDER_HPP_
