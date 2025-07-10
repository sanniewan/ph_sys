// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/LightInstruction.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__LIGHT_INSTRUCTION__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__LIGHT_INSTRUCTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/light_instruction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_LightInstruction_level
{
public:
  explicit Init_LightInstruction_level(::interfaces::msg::LightInstruction & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::LightInstruction level(::interfaces::msg::LightInstruction::_level_type arg)
  {
    msg_.level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::LightInstruction msg_;
};

class Init_LightInstruction_instruction
{
public:
  Init_LightInstruction_instruction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LightInstruction_level instruction(::interfaces::msg::LightInstruction::_instruction_type arg)
  {
    msg_.instruction = std::move(arg);
    return Init_LightInstruction_level(msg_);
  }

private:
  ::interfaces::msg::LightInstruction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::LightInstruction>()
{
  return interfaces::msg::builder::Init_LightInstruction_instruction();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__LIGHT_INSTRUCTION__BUILDER_HPP_
