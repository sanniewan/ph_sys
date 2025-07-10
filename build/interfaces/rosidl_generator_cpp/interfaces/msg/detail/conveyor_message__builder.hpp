// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/ConveyorMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__CONVEYOR_MESSAGE__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__CONVEYOR_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/conveyor_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_ConveyorMessage_speed
{
public:
  explicit Init_ConveyorMessage_speed(::interfaces::msg::ConveyorMessage & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::ConveyorMessage speed(::interfaces::msg::ConveyorMessage::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::ConveyorMessage msg_;
};

class Init_ConveyorMessage_status
{
public:
  explicit Init_ConveyorMessage_status(::interfaces::msg::ConveyorMessage & msg)
  : msg_(msg)
  {}
  Init_ConveyorMessage_speed status(::interfaces::msg::ConveyorMessage::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ConveyorMessage_speed(msg_);
  }

private:
  ::interfaces::msg::ConveyorMessage msg_;
};

class Init_ConveyorMessage_msg
{
public:
  explicit Init_ConveyorMessage_msg(::interfaces::msg::ConveyorMessage & msg)
  : msg_(msg)
  {}
  Init_ConveyorMessage_status msg(::interfaces::msg::ConveyorMessage::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_ConveyorMessage_status(msg_);
  }

private:
  ::interfaces::msg::ConveyorMessage msg_;
};

class Init_ConveyorMessage_err
{
public:
  Init_ConveyorMessage_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConveyorMessage_msg err(::interfaces::msg::ConveyorMessage::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_ConveyorMessage_msg(msg_);
  }

private:
  ::interfaces::msg::ConveyorMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::ConveyorMessage>()
{
  return interfaces::msg::builder::Init_ConveyorMessage_err();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__CONVEYOR_MESSAGE__BUILDER_HPP_
