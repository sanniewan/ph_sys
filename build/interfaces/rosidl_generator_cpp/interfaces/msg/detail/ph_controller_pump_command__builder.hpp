// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/PhControllerPumpCommand.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__PH_CONTROLLER_PUMP_COMMAND__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__PH_CONTROLLER_PUMP_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/ph_controller_pump_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_PhControllerPumpCommand_volume
{
public:
  explicit Init_PhControllerPumpCommand_volume(::interfaces::msg::PhControllerPumpCommand & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::PhControllerPumpCommand volume(::interfaces::msg::PhControllerPumpCommand::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::PhControllerPumpCommand msg_;
};

class Init_PhControllerPumpCommand_msg
{
public:
  explicit Init_PhControllerPumpCommand_msg(::interfaces::msg::PhControllerPumpCommand & msg)
  : msg_(msg)
  {}
  Init_PhControllerPumpCommand_volume msg(::interfaces::msg::PhControllerPumpCommand::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_PhControllerPumpCommand_volume(msg_);
  }

private:
  ::interfaces::msg::PhControllerPumpCommand msg_;
};

class Init_PhControllerPumpCommand_err
{
public:
  explicit Init_PhControllerPumpCommand_err(::interfaces::msg::PhControllerPumpCommand & msg)
  : msg_(msg)
  {}
  Init_PhControllerPumpCommand_msg err(::interfaces::msg::PhControllerPumpCommand::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_PhControllerPumpCommand_msg(msg_);
  }

private:
  ::interfaces::msg::PhControllerPumpCommand msg_;
};

class Init_PhControllerPumpCommand_pump_id
{
public:
  Init_PhControllerPumpCommand_pump_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PhControllerPumpCommand_err pump_id(::interfaces::msg::PhControllerPumpCommand::_pump_id_type arg)
  {
    msg_.pump_id = std::move(arg);
    return Init_PhControllerPumpCommand_err(msg_);
  }

private:
  ::interfaces::msg::PhControllerPumpCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::PhControllerPumpCommand>()
{
  return interfaces::msg::builder::Init_PhControllerPumpCommand_pump_id();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__PH_CONTROLLER_PUMP_COMMAND__BUILDER_HPP_
