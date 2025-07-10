// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/PeristalticPumpService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__PERISTALTIC_PUMP_SERVICE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__PERISTALTIC_PUMP_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/peristaltic_pump_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_PeristalticPumpService_Request_volume
{
public:
  Init_PeristalticPumpService_Request_volume()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::PeristalticPumpService_Request volume(::interfaces::srv::PeristalticPumpService_Request::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::PeristalticPumpService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::PeristalticPumpService_Request>()
{
  return interfaces::srv::builder::Init_PeristalticPumpService_Request_volume();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_PeristalticPumpService_Response_volume
{
public:
  explicit Init_PeristalticPumpService_Response_volume(::interfaces::srv::PeristalticPumpService_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::PeristalticPumpService_Response volume(::interfaces::srv::PeristalticPumpService_Response::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::PeristalticPumpService_Response msg_;
};

class Init_PeristalticPumpService_Response_msg
{
public:
  explicit Init_PeristalticPumpService_Response_msg(::interfaces::srv::PeristalticPumpService_Response & msg)
  : msg_(msg)
  {}
  Init_PeristalticPumpService_Response_volume msg(::interfaces::srv::PeristalticPumpService_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_PeristalticPumpService_Response_volume(msg_);
  }

private:
  ::interfaces::srv::PeristalticPumpService_Response msg_;
};

class Init_PeristalticPumpService_Response_err
{
public:
  Init_PeristalticPumpService_Response_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PeristalticPumpService_Response_msg err(::interfaces::srv::PeristalticPumpService_Response::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_PeristalticPumpService_Response_msg(msg_);
  }

private:
  ::interfaces::srv::PeristalticPumpService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::PeristalticPumpService_Response>()
{
  return interfaces::srv::builder::Init_PeristalticPumpService_Response_err();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__PERISTALTIC_PUMP_SERVICE__BUILDER_HPP_
