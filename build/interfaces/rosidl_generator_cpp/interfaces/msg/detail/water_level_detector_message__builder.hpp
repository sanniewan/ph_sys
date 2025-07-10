// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/WaterLevelDetectorMessage.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__WATER_LEVEL_DETECTOR_MESSAGE__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__WATER_LEVEL_DETECTOR_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/water_level_detector_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_WaterLevelDetectorMessage_critical
{
public:
  explicit Init_WaterLevelDetectorMessage_critical(::interfaces::msg::WaterLevelDetectorMessage & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::WaterLevelDetectorMessage critical(::interfaces::msg::WaterLevelDetectorMessage::_critical_type arg)
  {
    msg_.critical = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::WaterLevelDetectorMessage msg_;
};

class Init_WaterLevelDetectorMessage_msg
{
public:
  explicit Init_WaterLevelDetectorMessage_msg(::interfaces::msg::WaterLevelDetectorMessage & msg)
  : msg_(msg)
  {}
  Init_WaterLevelDetectorMessage_critical msg(::interfaces::msg::WaterLevelDetectorMessage::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_WaterLevelDetectorMessage_critical(msg_);
  }

private:
  ::interfaces::msg::WaterLevelDetectorMessage msg_;
};

class Init_WaterLevelDetectorMessage_err
{
public:
  Init_WaterLevelDetectorMessage_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaterLevelDetectorMessage_msg err(::interfaces::msg::WaterLevelDetectorMessage::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_WaterLevelDetectorMessage_msg(msg_);
  }

private:
  ::interfaces::msg::WaterLevelDetectorMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::WaterLevelDetectorMessage>()
{
  return interfaces::msg::builder::Init_WaterLevelDetectorMessage_err();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__WATER_LEVEL_DETECTOR_MESSAGE__BUILDER_HPP_
