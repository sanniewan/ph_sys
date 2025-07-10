// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/SensorServiceFloat32.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__SENSOR_SERVICE_FLOAT32__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__SENSOR_SERVICE_FLOAT32__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/sensor_service_float32__struct.hpp"
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
auto build<::interfaces::srv::SensorServiceFloat32_Request>()
{
  return ::interfaces::srv::SensorServiceFloat32_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_SensorServiceFloat32_Response_data
{
public:
  explicit Init_SensorServiceFloat32_Response_data(::interfaces::srv::SensorServiceFloat32_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::SensorServiceFloat32_Response data(::interfaces::srv::SensorServiceFloat32_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::SensorServiceFloat32_Response msg_;
};

class Init_SensorServiceFloat32_Response_msg
{
public:
  explicit Init_SensorServiceFloat32_Response_msg(::interfaces::srv::SensorServiceFloat32_Response & msg)
  : msg_(msg)
  {}
  Init_SensorServiceFloat32_Response_data msg(::interfaces::srv::SensorServiceFloat32_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_SensorServiceFloat32_Response_data(msg_);
  }

private:
  ::interfaces::srv::SensorServiceFloat32_Response msg_;
};

class Init_SensorServiceFloat32_Response_err
{
public:
  Init_SensorServiceFloat32_Response_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorServiceFloat32_Response_msg err(::interfaces::srv::SensorServiceFloat32_Response::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_SensorServiceFloat32_Response_msg(msg_);
  }

private:
  ::interfaces::srv::SensorServiceFloat32_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::SensorServiceFloat32_Response>()
{
  return interfaces::srv::builder::Init_SensorServiceFloat32_Response_err();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__SENSOR_SERVICE_FLOAT32__BUILDER_HPP_
