// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/PeristalticPumpMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__PERISTALTIC_PUMP_MESSAGE__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__PERISTALTIC_PUMP_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/peristaltic_pump_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_PeristalticPumpMessage_volume
{
public:
  explicit Init_PeristalticPumpMessage_volume(::interfaces::msg::PeristalticPumpMessage & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::PeristalticPumpMessage volume(::interfaces::msg::PeristalticPumpMessage::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::PeristalticPumpMessage msg_;
};

class Init_PeristalticPumpMessage_msg
{
public:
  explicit Init_PeristalticPumpMessage_msg(::interfaces::msg::PeristalticPumpMessage & msg)
  : msg_(msg)
  {}
  Init_PeristalticPumpMessage_volume msg(::interfaces::msg::PeristalticPumpMessage::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_PeristalticPumpMessage_volume(msg_);
  }

private:
  ::interfaces::msg::PeristalticPumpMessage msg_;
};

class Init_PeristalticPumpMessage_err
{
public:
  Init_PeristalticPumpMessage_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PeristalticPumpMessage_msg err(::interfaces::msg::PeristalticPumpMessage::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_PeristalticPumpMessage_msg(msg_);
  }

private:
  ::interfaces::msg::PeristalticPumpMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::PeristalticPumpMessage>()
{
  return interfaces::msg::builder::Init_PeristalticPumpMessage_err();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__PERISTALTIC_PUMP_MESSAGE__BUILDER_HPP_
