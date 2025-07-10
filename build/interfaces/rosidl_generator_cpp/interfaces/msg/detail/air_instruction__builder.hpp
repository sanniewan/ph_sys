// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/AirInstruction.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__AIR_INSTRUCTION__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__AIR_INSTRUCTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/air_instruction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_AirInstruction_t_target
{
public:
  explicit Init_AirInstruction_t_target(::interfaces::msg::AirInstruction & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::AirInstruction t_target(::interfaces::msg::AirInstruction::_t_target_type arg)
  {
    msg_.t_target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::AirInstruction msg_;
};

class Init_AirInstruction_instruction
{
public:
  Init_AirInstruction_instruction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AirInstruction_t_target instruction(::interfaces::msg::AirInstruction::_instruction_type arg)
  {
    msg_.instruction = std::move(arg);
    return Init_AirInstruction_t_target(msg_);
  }

private:
  ::interfaces::msg::AirInstruction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::AirInstruction>()
{
  return interfaces::msg::builder::Init_AirInstruction_instruction();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__AIR_INSTRUCTION__BUILDER_HPP_
