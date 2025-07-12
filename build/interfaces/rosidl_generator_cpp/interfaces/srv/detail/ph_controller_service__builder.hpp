// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/PhControllerService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__PH_CONTROLLER_SERVICE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__PH_CONTROLLER_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/ph_controller_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_PhControllerService_Request_ph
{
public:
  Init_PhControllerService_Request_ph()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::PhControllerService_Request ph(::interfaces::srv::PhControllerService_Request::_ph_type arg)
  {
    msg_.ph = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::PhControllerService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::PhControllerService_Request>()
{
  return interfaces::srv::builder::Init_PhControllerService_Request_ph();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_PhControllerService_Response_volume
{
public:
  explicit Init_PhControllerService_Response_volume(::interfaces::srv::PhControllerService_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::PhControllerService_Response volume(::interfaces::srv::PhControllerService_Response::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::PhControllerService_Response msg_;
};

class Init_PhControllerService_Response_msg
{
public:
  explicit Init_PhControllerService_Response_msg(::interfaces::srv::PhControllerService_Response & msg)
  : msg_(msg)
  {}
  Init_PhControllerService_Response_volume msg(::interfaces::srv::PhControllerService_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_PhControllerService_Response_volume(msg_);
  }

private:
  ::interfaces::srv::PhControllerService_Response msg_;
};

class Init_PhControllerService_Response_warning
{
public:
  Init_PhControllerService_Response_warning()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PhControllerService_Response_msg warning(::interfaces::srv::PhControllerService_Response::_warning_type arg)
  {
    msg_.warning = std::move(arg);
    return Init_PhControllerService_Response_msg(msg_);
  }

private:
  ::interfaces::srv::PhControllerService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::PhControllerService_Response>()
{
  return interfaces::srv::builder::Init_PhControllerService_Response_warning();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__PH_CONTROLLER_SERVICE__BUILDER_HPP_
