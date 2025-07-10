// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/SensorServiceInt16.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__SENSOR_SERVICE_INT16__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__SENSOR_SERVICE_INT16__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/sensor_service_int16__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::SensorServiceInt16_Request>()
{
  return ::interfaces::srv::SensorServiceInt16_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_SensorServiceInt16_Response_data
{
public:
  explicit Init_SensorServiceInt16_Response_data(::interfaces::srv::SensorServiceInt16_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::SensorServiceInt16_Response data(::interfaces::srv::SensorServiceInt16_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::SensorServiceInt16_Response msg_;
};

class Init_SensorServiceInt16_Response_msg
{
public:
  explicit Init_SensorServiceInt16_Response_msg(::interfaces::srv::SensorServiceInt16_Response & msg)
  : msg_(msg)
  {}
  Init_SensorServiceInt16_Response_data msg(::interfaces::srv::SensorServiceInt16_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_SensorServiceInt16_Response_data(msg_);
  }

private:
  ::interfaces::srv::SensorServiceInt16_Response msg_;
};

class Init_SensorServiceInt16_Response_err
{
public:
  Init_SensorServiceInt16_Response_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorServiceInt16_Response_msg err(::interfaces::srv::SensorServiceInt16_Response::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_SensorServiceInt16_Response_msg(msg_);
  }

private:
  ::interfaces::srv::SensorServiceInt16_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::SensorServiceInt16_Response>()
{
  return interfaces::srv::builder::Init_SensorServiceInt16_Response_err();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__SENSOR_SERVICE_INT16__BUILDER_HPP_
