// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/LiftMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__LIFT_MESSAGE__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__LIFT_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/lift_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_LiftMessage_height
{
public:
  explicit Init_LiftMessage_height(::interfaces::msg::LiftMessage & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::LiftMessage height(::interfaces::msg::LiftMessage::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::LiftMessage msg_;
};

class Init_LiftMessage_state
{
public:
  explicit Init_LiftMessage_state(::interfaces::msg::LiftMessage & msg)
  : msg_(msg)
  {}
  Init_LiftMessage_height state(::interfaces::msg::LiftMessage::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_LiftMessage_height(msg_);
  }

private:
  ::interfaces::msg::LiftMessage msg_;
};

class Init_LiftMessage_msg
{
public:
  explicit Init_LiftMessage_msg(::interfaces::msg::LiftMessage & msg)
  : msg_(msg)
  {}
  Init_LiftMessage_state msg(::interfaces::msg::LiftMessage::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_LiftMessage_state(msg_);
  }

private:
  ::interfaces::msg::LiftMessage msg_;
};

class Init_LiftMessage_err
{
public:
  Init_LiftMessage_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LiftMessage_msg err(::interfaces::msg::LiftMessage::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_LiftMessage_msg(msg_);
  }

private:
  ::interfaces::msg::LiftMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::LiftMessage>()
{
  return interfaces::msg::builder::Init_LiftMessage_err();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__LIFT_MESSAGE__BUILDER_HPP_
