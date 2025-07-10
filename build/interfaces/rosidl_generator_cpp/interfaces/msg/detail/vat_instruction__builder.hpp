// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/VatInstruction.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__VAT_INSTRUCTION__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__VAT_INSTRUCTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/vat_instruction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_VatInstruction_volume
{
public:
  explicit Init_VatInstruction_volume(::interfaces::msg::VatInstruction & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::VatInstruction volume(::interfaces::msg::VatInstruction::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::VatInstruction msg_;
};

class Init_VatInstruction_tank
{
public:
  explicit Init_VatInstruction_tank(::interfaces::msg::VatInstruction & msg)
  : msg_(msg)
  {}
  Init_VatInstruction_volume tank(::interfaces::msg::VatInstruction::_tank_type arg)
  {
    msg_.tank = std::move(arg);
    return Init_VatInstruction_volume(msg_);
  }

private:
  ::interfaces::msg::VatInstruction msg_;
};

class Init_VatInstruction_vat
{
public:
  explicit Init_VatInstruction_vat(::interfaces::msg::VatInstruction & msg)
  : msg_(msg)
  {}
  Init_VatInstruction_tank vat(::interfaces::msg::VatInstruction::_vat_type arg)
  {
    msg_.vat = std::move(arg);
    return Init_VatInstruction_tank(msg_);
  }

private:
  ::interfaces::msg::VatInstruction msg_;
};

class Init_VatInstruction_instruction
{
public:
  Init_VatInstruction_instruction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VatInstruction_vat instruction(::interfaces::msg::VatInstruction::_instruction_type arg)
  {
    msg_.instruction = std::move(arg);
    return Init_VatInstruction_vat(msg_);
  }

private:
  ::interfaces::msg::VatInstruction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::VatInstruction>()
{
  return interfaces::msg::builder::Init_VatInstruction_instruction();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__VAT_INSTRUCTION__BUILDER_HPP_
