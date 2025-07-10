// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/IrrigationInstruction.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__IRRIGATION_INSTRUCTION__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__IRRIGATION_INSTRUCTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/irrigation_instruction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_IrrigationInstruction_valves
{
public:
  explicit Init_IrrigationInstruction_valves(::interfaces::msg::IrrigationInstruction & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::IrrigationInstruction valves(::interfaces::msg::IrrigationInstruction::_valves_type arg)
  {
    msg_.valves = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::IrrigationInstruction msg_;
};

class Init_IrrigationInstruction_tank
{
public:
  explicit Init_IrrigationInstruction_tank(::interfaces::msg::IrrigationInstruction & msg)
  : msg_(msg)
  {}
  Init_IrrigationInstruction_valves tank(::interfaces::msg::IrrigationInstruction::_tank_type arg)
  {
    msg_.tank = std::move(arg);
    return Init_IrrigationInstruction_valves(msg_);
  }

private:
  ::interfaces::msg::IrrigationInstruction msg_;
};

class Init_IrrigationInstruction_instruction
{
public:
  Init_IrrigationInstruction_instruction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IrrigationInstruction_tank instruction(::interfaces::msg::IrrigationInstruction::_instruction_type arg)
  {
    msg_.instruction = std::move(arg);
    return Init_IrrigationInstruction_tank(msg_);
  }

private:
  ::interfaces::msg::IrrigationInstruction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::IrrigationInstruction>()
{
  return interfaces::msg::builder::Init_IrrigationInstruction_instruction();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__IRRIGATION_INSTRUCTION__BUILDER_HPP_
