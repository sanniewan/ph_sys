// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/IrrigationMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__IRRIGATION_MESSAGE__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__IRRIGATION_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/irrigation_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_IrrigationMessage_state
{
public:
  explicit Init_IrrigationMessage_state(::interfaces::msg::IrrigationMessage & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::IrrigationMessage state(::interfaces::msg::IrrigationMessage::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::IrrigationMessage msg_;
};

class Init_IrrigationMessage_msg
{
public:
  explicit Init_IrrigationMessage_msg(::interfaces::msg::IrrigationMessage & msg)
  : msg_(msg)
  {}
  Init_IrrigationMessage_state msg(::interfaces::msg::IrrigationMessage::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_IrrigationMessage_state(msg_);
  }

private:
  ::interfaces::msg::IrrigationMessage msg_;
};

class Init_IrrigationMessage_err
{
public:
  explicit Init_IrrigationMessage_err(::interfaces::msg::IrrigationMessage & msg)
  : msg_(msg)
  {}
  Init_IrrigationMessage_msg err(::interfaces::msg::IrrigationMessage::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_IrrigationMessage_msg(msg_);
  }

private:
  ::interfaces::msg::IrrigationMessage msg_;
};

class Init_IrrigationMessage_valve
{
public:
  explicit Init_IrrigationMessage_valve(::interfaces::msg::IrrigationMessage & msg)
  : msg_(msg)
  {}
  Init_IrrigationMessage_err valve(::interfaces::msg::IrrigationMessage::_valve_type arg)
  {
    msg_.valve = std::move(arg);
    return Init_IrrigationMessage_err(msg_);
  }

private:
  ::interfaces::msg::IrrigationMessage msg_;
};

class Init_IrrigationMessage_tank
{
public:
  Init_IrrigationMessage_tank()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IrrigationMessage_valve tank(::interfaces::msg::IrrigationMessage::_tank_type arg)
  {
    msg_.tank = std::move(arg);
    return Init_IrrigationMessage_valve(msg_);
  }

private:
  ::interfaces::msg::IrrigationMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::IrrigationMessage>()
{
  return interfaces::msg::builder::Init_IrrigationMessage_tank();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__IRRIGATION_MESSAGE__BUILDER_HPP_
