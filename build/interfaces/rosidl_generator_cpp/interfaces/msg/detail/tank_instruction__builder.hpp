// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/TankInstruction.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__TANK_INSTRUCTION__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__TANK_INSTRUCTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/tank_instruction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_TankInstruction_ec_target
{
public:
  explicit Init_TankInstruction_ec_target(::interfaces::msg::TankInstruction & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::TankInstruction ec_target(::interfaces::msg::TankInstruction::_ec_target_type arg)
  {
    msg_.ec_target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::TankInstruction msg_;
};

class Init_TankInstruction_ph_target
{
public:
  explicit Init_TankInstruction_ph_target(::interfaces::msg::TankInstruction & msg)
  : msg_(msg)
  {}
  Init_TankInstruction_ec_target ph_target(::interfaces::msg::TankInstruction::_ph_target_type arg)
  {
    msg_.ph_target = std::move(arg);
    return Init_TankInstruction_ec_target(msg_);
  }

private:
  ::interfaces::msg::TankInstruction msg_;
};

class Init_TankInstruction_quantity
{
public:
  explicit Init_TankInstruction_quantity(::interfaces::msg::TankInstruction & msg)
  : msg_(msg)
  {}
  Init_TankInstruction_ph_target quantity(::interfaces::msg::TankInstruction::_quantity_type arg)
  {
    msg_.quantity = std::move(arg);
    return Init_TankInstruction_ph_target(msg_);
  }

private:
  ::interfaces::msg::TankInstruction msg_;
};

class Init_TankInstruction_vat
{
public:
  explicit Init_TankInstruction_vat(::interfaces::msg::TankInstruction & msg)
  : msg_(msg)
  {}
  Init_TankInstruction_quantity vat(::interfaces::msg::TankInstruction::_vat_type arg)
  {
    msg_.vat = std::move(arg);
    return Init_TankInstruction_quantity(msg_);
  }

private:
  ::interfaces::msg::TankInstruction msg_;
};

class Init_TankInstruction_tank
{
public:
  explicit Init_TankInstruction_tank(::interfaces::msg::TankInstruction & msg)
  : msg_(msg)
  {}
  Init_TankInstruction_vat tank(::interfaces::msg::TankInstruction::_tank_type arg)
  {
    msg_.tank = std::move(arg);
    return Init_TankInstruction_vat(msg_);
  }

private:
  ::interfaces::msg::TankInstruction msg_;
};

class Init_TankInstruction_instruction
{
public:
  Init_TankInstruction_instruction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TankInstruction_tank instruction(::interfaces::msg::TankInstruction::_instruction_type arg)
  {
    msg_.instruction = std::move(arg);
    return Init_TankInstruction_tank(msg_);
  }

private:
  ::interfaces::msg::TankInstruction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::TankInstruction>()
{
  return interfaces::msg::builder::Init_TankInstruction_instruction();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__TANK_INSTRUCTION__BUILDER_HPP_
