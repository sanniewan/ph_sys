// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/ActuatorStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ACTUATOR_STATUS__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__ACTUATOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/actuator_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_ActuatorStatus_state
{
public:
  explicit Init_ActuatorStatus_state(::interfaces::msg::ActuatorStatus & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::ActuatorStatus state(::interfaces::msg::ActuatorStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::ActuatorStatus msg_;
};

class Init_ActuatorStatus_msg
{
public:
  explicit Init_ActuatorStatus_msg(::interfaces::msg::ActuatorStatus & msg)
  : msg_(msg)
  {}
  Init_ActuatorStatus_state msg(::interfaces::msg::ActuatorStatus::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_ActuatorStatus_state(msg_);
  }

private:
  ::interfaces::msg::ActuatorStatus msg_;
};

class Init_ActuatorStatus_err
{
public:
  Init_ActuatorStatus_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorStatus_msg err(::interfaces::msg::ActuatorStatus::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_ActuatorStatus_msg(msg_);
  }

private:
  ::interfaces::msg::ActuatorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::ActuatorStatus>()
{
  return interfaces::msg::builder::Init_ActuatorStatus_err();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__ACTUATOR_STATUS__BUILDER_HPP_
