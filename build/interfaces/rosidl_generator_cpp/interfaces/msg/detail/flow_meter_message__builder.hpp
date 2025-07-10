// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/FlowMeterMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__FLOW_METER_MESSAGE__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__FLOW_METER_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/flow_meter_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_FlowMeterMessage_flow_rate
{
public:
  explicit Init_FlowMeterMessage_flow_rate(::interfaces::msg::FlowMeterMessage & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::FlowMeterMessage flow_rate(::interfaces::msg::FlowMeterMessage::_flow_rate_type arg)
  {
    msg_.flow_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::FlowMeterMessage msg_;
};

class Init_FlowMeterMessage_flow_volume
{
public:
  explicit Init_FlowMeterMessage_flow_volume(::interfaces::msg::FlowMeterMessage & msg)
  : msg_(msg)
  {}
  Init_FlowMeterMessage_flow_rate flow_volume(::interfaces::msg::FlowMeterMessage::_flow_volume_type arg)
  {
    msg_.flow_volume = std::move(arg);
    return Init_FlowMeterMessage_flow_rate(msg_);
  }

private:
  ::interfaces::msg::FlowMeterMessage msg_;
};

class Init_FlowMeterMessage_msg
{
public:
  explicit Init_FlowMeterMessage_msg(::interfaces::msg::FlowMeterMessage & msg)
  : msg_(msg)
  {}
  Init_FlowMeterMessage_flow_volume msg(::interfaces::msg::FlowMeterMessage::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_FlowMeterMessage_flow_volume(msg_);
  }

private:
  ::interfaces::msg::FlowMeterMessage msg_;
};

class Init_FlowMeterMessage_err
{
public:
  Init_FlowMeterMessage_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FlowMeterMessage_msg err(::interfaces::msg::FlowMeterMessage::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_FlowMeterMessage_msg(msg_);
  }

private:
  ::interfaces::msg::FlowMeterMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::FlowMeterMessage>()
{
  return interfaces::msg::builder::Init_FlowMeterMessage_err();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__FLOW_METER_MESSAGE__BUILDER_HPP_
