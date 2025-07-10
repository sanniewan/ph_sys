// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/LightStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__LIGHT_STATUS__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__LIGHT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/light_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_LightStatus_tasklight_state
{
public:
  explicit Init_LightStatus_tasklight_state(::interfaces::msg::LightStatus & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::LightStatus tasklight_state(::interfaces::msg::LightStatus::_tasklight_state_type arg)
  {
    msg_.tasklight_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::LightStatus msg_;
};

class Init_LightStatus_growlight_level
{
public:
  explicit Init_LightStatus_growlight_level(::interfaces::msg::LightStatus & msg)
  : msg_(msg)
  {}
  Init_LightStatus_tasklight_state growlight_level(::interfaces::msg::LightStatus::_growlight_level_type arg)
  {
    msg_.growlight_level = std::move(arg);
    return Init_LightStatus_tasklight_state(msg_);
  }

private:
  ::interfaces::msg::LightStatus msg_;
};

class Init_LightStatus_growlight_state
{
public:
  Init_LightStatus_growlight_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LightStatus_growlight_level growlight_state(::interfaces::msg::LightStatus::_growlight_state_type arg)
  {
    msg_.growlight_state = std::move(arg);
    return Init_LightStatus_growlight_level(msg_);
  }

private:
  ::interfaces::msg::LightStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::LightStatus>()
{
  return interfaces::msg::builder::Init_LightStatus_growlight_state();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__LIGHT_STATUS__BUILDER_HPP_
