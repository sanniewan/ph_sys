// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/PotentiometerMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__POTENTIOMETER_MESSAGE__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__POTENTIOMETER_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/potentiometer_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_PotentiometerMessage_wiper
{
public:
  explicit Init_PotentiometerMessage_wiper(::interfaces::msg::PotentiometerMessage & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::PotentiometerMessage wiper(::interfaces::msg::PotentiometerMessage::_wiper_type arg)
  {
    msg_.wiper = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::PotentiometerMessage msg_;
};

class Init_PotentiometerMessage_msg
{
public:
  explicit Init_PotentiometerMessage_msg(::interfaces::msg::PotentiometerMessage & msg)
  : msg_(msg)
  {}
  Init_PotentiometerMessage_wiper msg(::interfaces::msg::PotentiometerMessage::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_PotentiometerMessage_wiper(msg_);
  }

private:
  ::interfaces::msg::PotentiometerMessage msg_;
};

class Init_PotentiometerMessage_err
{
public:
  Init_PotentiometerMessage_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PotentiometerMessage_msg err(::interfaces::msg::PotentiometerMessage::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_PotentiometerMessage_msg(msg_);
  }

private:
  ::interfaces::msg::PotentiometerMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::PotentiometerMessage>()
{
  return interfaces::msg::builder::Init_PotentiometerMessage_err();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__POTENTIOMETER_MESSAGE__BUILDER_HPP_
