// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/SensorMessageInt16.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__SENSOR_MESSAGE_INT16__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__SENSOR_MESSAGE_INT16__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/sensor_message_int16__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_SensorMessageInt16_data
{
public:
  explicit Init_SensorMessageInt16_data(::interfaces::msg::SensorMessageInt16 & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::SensorMessageInt16 data(::interfaces::msg::SensorMessageInt16::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::SensorMessageInt16 msg_;
};

class Init_SensorMessageInt16_msg
{
public:
  explicit Init_SensorMessageInt16_msg(::interfaces::msg::SensorMessageInt16 & msg)
  : msg_(msg)
  {}
  Init_SensorMessageInt16_data msg(::interfaces::msg::SensorMessageInt16::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_SensorMessageInt16_data(msg_);
  }

private:
  ::interfaces::msg::SensorMessageInt16 msg_;
};

class Init_SensorMessageInt16_err
{
public:
  Init_SensorMessageInt16_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorMessageInt16_msg err(::interfaces::msg::SensorMessageInt16::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_SensorMessageInt16_msg(msg_);
  }

private:
  ::interfaces::msg::SensorMessageInt16 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::SensorMessageInt16>()
{
  return interfaces::msg::builder::Init_SensorMessageInt16_err();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__SENSOR_MESSAGE_INT16__BUILDER_HPP_
