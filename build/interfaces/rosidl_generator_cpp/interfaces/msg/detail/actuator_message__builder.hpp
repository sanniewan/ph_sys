// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/ActuatorMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__ACTUATOR_MESSAGE__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__ACTUATOR_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/actuator_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_ActuatorMessage_state
{
public:
  explicit Init_ActuatorMessage_state(::interfaces::msg::ActuatorMessage & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::ActuatorMessage state(::interfaces::msg::ActuatorMessage::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::ActuatorMessage msg_;
};

class Init_ActuatorMessage_msg
{
public:
  explicit Init_ActuatorMessage_msg(::interfaces::msg::ActuatorMessage & msg)
  : msg_(msg)
  {}
  Init_ActuatorMessage_state msg(::interfaces::msg::ActuatorMessage::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_ActuatorMessage_state(msg_);
  }

private:
  ::interfaces::msg::ActuatorMessage msg_;
};

class Init_ActuatorMessage_err
{
public:
  Init_ActuatorMessage_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorMessage_msg err(::interfaces::msg::ActuatorMessage::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_ActuatorMessage_msg(msg_);
  }

private:
  ::interfaces::msg::ActuatorMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::ActuatorMessage>()
{
  return interfaces::msg::builder::Init_ActuatorMessage_err();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__ACTUATOR_MESSAGE__BUILDER_HPP_
