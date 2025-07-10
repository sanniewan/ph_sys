// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/LiftInstruction.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__LIFT_INSTRUCTION__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__LIFT_INSTRUCTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/lift_instruction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_LiftInstruction_level
{
public:
  explicit Init_LiftInstruction_level(::interfaces::msg::LiftInstruction & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::LiftInstruction level(::interfaces::msg::LiftInstruction::_level_type arg)
  {
    msg_.level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::LiftInstruction msg_;
};

class Init_LiftInstruction_instruction
{
public:
  Init_LiftInstruction_instruction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LiftInstruction_level instruction(::interfaces::msg::LiftInstruction::_instruction_type arg)
  {
    msg_.instruction = std::move(arg);
    return Init_LiftInstruction_level(msg_);
  }

private:
  ::interfaces::msg::LiftInstruction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::LiftInstruction>()
{
  return interfaces::msg::builder::Init_LiftInstruction_instruction();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__LIFT_INSTRUCTION__BUILDER_HPP_
