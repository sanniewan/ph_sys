// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/AirSensorService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__AIR_SENSOR_SERVICE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__AIR_SENSOR_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/air_sensor_service__struct.hpp"
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
auto build<::interfaces::srv::AirSensorService_Request>()
{
  return ::interfaces::srv::AirSensorService_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_AirSensorService_Response_co2
{
public:
  explicit Init_AirSensorService_Response_co2(::interfaces::srv::AirSensorService_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::AirSensorService_Response co2(::interfaces::srv::AirSensorService_Response::_co2_type arg)
  {
    msg_.co2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::AirSensorService_Response msg_;
};

class Init_AirSensorService_Response_rh
{
public:
  explicit Init_AirSensorService_Response_rh(::interfaces::srv::AirSensorService_Response & msg)
  : msg_(msg)
  {}
  Init_AirSensorService_Response_co2 rh(::interfaces::srv::AirSensorService_Response::_rh_type arg)
  {
    msg_.rh = std::move(arg);
    return Init_AirSensorService_Response_co2(msg_);
  }

private:
  ::interfaces::srv::AirSensorService_Response msg_;
};

class Init_AirSensorService_Response_t
{
public:
  explicit Init_AirSensorService_Response_t(::interfaces::srv::AirSensorService_Response & msg)
  : msg_(msg)
  {}
  Init_AirSensorService_Response_rh t(::interfaces::srv::AirSensorService_Response::_t_type arg)
  {
    msg_.t = std::move(arg);
    return Init_AirSensorService_Response_rh(msg_);
  }

private:
  ::interfaces::srv::AirSensorService_Response msg_;
};

class Init_AirSensorService_Response_msg
{
public:
  explicit Init_AirSensorService_Response_msg(::interfaces::srv::AirSensorService_Response & msg)
  : msg_(msg)
  {}
  Init_AirSensorService_Response_t msg(::interfaces::srv::AirSensorService_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_AirSensorService_Response_t(msg_);
  }

private:
  ::interfaces::srv::AirSensorService_Response msg_;
};

class Init_AirSensorService_Response_err
{
public:
  Init_AirSensorService_Response_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AirSensorService_Response_msg err(::interfaces::srv::AirSensorService_Response::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_AirSensorService_Response_msg(msg_);
  }

private:
  ::interfaces::srv::AirSensorService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::AirSensorService_Response>()
{
  return interfaces::srv::builder::Init_AirSensorService_Response_err();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__AIR_SENSOR_SERVICE__BUILDER_HPP_
