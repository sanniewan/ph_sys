// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/SensorMessageFloat32.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__SENSOR_MESSAGE_FLOAT32__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__SENSOR_MESSAGE_FLOAT32__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/sensor_message_float32__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_SensorMessageFloat32_data
{
public:
  explicit Init_SensorMessageFloat32_data(::interfaces::msg::SensorMessageFloat32 & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::SensorMessageFloat32 data(::interfaces::msg::SensorMessageFloat32::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::SensorMessageFloat32 msg_;
};

class Init_SensorMessageFloat32_msg
{
public:
  explicit Init_SensorMessageFloat32_msg(::interfaces::msg::SensorMessageFloat32 & msg)
  : msg_(msg)
  {}
  Init_SensorMessageFloat32_data msg(::interfaces::msg::SensorMessageFloat32::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_SensorMessageFloat32_data(msg_);
  }

private:
  ::interfaces::msg::SensorMessageFloat32 msg_;
};

class Init_SensorMessageFloat32_err
{
public:
  Init_SensorMessageFloat32_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorMessageFloat32_msg err(::interfaces::msg::SensorMessageFloat32::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_SensorMessageFloat32_msg(msg_);
  }

private:
  ::interfaces::msg::SensorMessageFloat32 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::SensorMessageFloat32>()
{
  return interfaces::msg::builder::Init_SensorMessageFloat32_err();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__SENSOR_MESSAGE_FLOAT32__BUILDER_HPP_
