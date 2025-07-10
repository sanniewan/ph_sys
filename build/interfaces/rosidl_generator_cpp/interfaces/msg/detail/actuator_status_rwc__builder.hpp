// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/ActuatorStatusRWC.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ACTUATOR_STATUS_RWC__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__ACTUATOR_STATUS_RWC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/actuator_status_rwc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_ActuatorStatusRWC_state
{
public:
  explicit Init_ActuatorStatusRWC_state(::interfaces::msg::ActuatorStatusRWC & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::ActuatorStatusRWC state(::interfaces::msg::ActuatorStatusRWC::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::ActuatorStatusRWC msg_;
};

class Init_ActuatorStatusRWC_msg
{
public:
  explicit Init_ActuatorStatusRWC_msg(::interfaces::msg::ActuatorStatusRWC & msg)
  : msg_(msg)
  {}
  Init_ActuatorStatusRWC_state msg(::interfaces::msg::ActuatorStatusRWC::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_ActuatorStatusRWC_state(msg_);
  }

private:
  ::interfaces::msg::ActuatorStatusRWC msg_;
};

class Init_ActuatorStatusRWC_err
{
public:
  Init_ActuatorStatusRWC_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorStatusRWC_msg err(::interfaces::msg::ActuatorStatusRWC::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_ActuatorStatusRWC_msg(msg_);
  }

private:
  ::interfaces::msg::ActuatorStatusRWC msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::ActuatorStatusRWC>()
{
  return interfaces::msg::builder::Init_ActuatorStatusRWC_err();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__ACTUATOR_STATUS_RWC__BUILDER_HPP_
