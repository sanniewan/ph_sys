// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/LiftStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__LIFT_STATUS__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__LIFT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/lift_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_LiftStatus_level
{
public:
  explicit Init_LiftStatus_level(::interfaces::msg::LiftStatus & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::LiftStatus level(::interfaces::msg::LiftStatus::_level_type arg)
  {
    msg_.level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::LiftStatus msg_;
};

class Init_LiftStatus_status
{
public:
  Init_LiftStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LiftStatus_level status(::interfaces::msg::LiftStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LiftStatus_level(msg_);
  }

private:
  ::interfaces::msg::LiftStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::LiftStatus>()
{
  return interfaces::msg::builder::Init_LiftStatus_status();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__LIFT_STATUS__BUILDER_HPP_
