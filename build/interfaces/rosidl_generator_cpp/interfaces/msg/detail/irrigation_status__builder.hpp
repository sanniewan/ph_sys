// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/IrrigationStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__IRRIGATION_STATUS__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__IRRIGATION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/irrigation_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_IrrigationStatus_pressure
{
public:
  explicit Init_IrrigationStatus_pressure(::interfaces::msg::IrrigationStatus & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::IrrigationStatus pressure(::interfaces::msg::IrrigationStatus::_pressure_type arg)
  {
    msg_.pressure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::IrrigationStatus msg_;
};

class Init_IrrigationStatus_pumps
{
public:
  explicit Init_IrrigationStatus_pumps(::interfaces::msg::IrrigationStatus & msg)
  : msg_(msg)
  {}
  Init_IrrigationStatus_pressure pumps(::interfaces::msg::IrrigationStatus::_pumps_type arg)
  {
    msg_.pumps = std::move(arg);
    return Init_IrrigationStatus_pressure(msg_);
  }

private:
  ::interfaces::msg::IrrigationStatus msg_;
};

class Init_IrrigationStatus_valves
{
public:
  Init_IrrigationStatus_valves()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IrrigationStatus_pumps valves(::interfaces::msg::IrrigationStatus::_valves_type arg)
  {
    msg_.valves = std::move(arg);
    return Init_IrrigationStatus_pumps(msg_);
  }

private:
  ::interfaces::msg::IrrigationStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::IrrigationStatus>()
{
  return interfaces::msg::builder::Init_IrrigationStatus_valves();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__IRRIGATION_STATUS__BUILDER_HPP_
