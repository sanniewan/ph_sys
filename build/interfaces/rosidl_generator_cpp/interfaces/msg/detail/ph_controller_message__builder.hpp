// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/PhControllerMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__PH_CONTROLLER_MESSAGE__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__PH_CONTROLLER_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/ph_controller_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_PhControllerMessage_volume
{
public:
  explicit Init_PhControllerMessage_volume(::interfaces::msg::PhControllerMessage & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::PhControllerMessage volume(::interfaces::msg::PhControllerMessage::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::PhControllerMessage msg_;
};

class Init_PhControllerMessage_msg
{
public:
  explicit Init_PhControllerMessage_msg(::interfaces::msg::PhControllerMessage & msg)
  : msg_(msg)
  {}
  Init_PhControllerMessage_volume msg(::interfaces::msg::PhControllerMessage::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_PhControllerMessage_volume(msg_);
  }

private:
  ::interfaces::msg::PhControllerMessage msg_;
};

class Init_PhControllerMessage_warning
{
public:
  explicit Init_PhControllerMessage_warning(::interfaces::msg::PhControllerMessage & msg)
  : msg_(msg)
  {}
  Init_PhControllerMessage_msg warning(::interfaces::msg::PhControllerMessage::_warning_type arg)
  {
    msg_.warning = std::move(arg);
    return Init_PhControllerMessage_msg(msg_);
  }

private:
  ::interfaces::msg::PhControllerMessage msg_;
};

class Init_PhControllerMessage_pump_id
{
public:
  Init_PhControllerMessage_pump_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PhControllerMessage_warning pump_id(::interfaces::msg::PhControllerMessage::_pump_id_type arg)
  {
    msg_.pump_id = std::move(arg);
    return Init_PhControllerMessage_warning(msg_);
  }

private:
  ::interfaces::msg::PhControllerMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::PhControllerMessage>()
{
  return interfaces::msg::builder::Init_PhControllerMessage_pump_id();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__PH_CONTROLLER_MESSAGE__BUILDER_HPP_
