// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/ExpanderService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__EXPANDER_SERVICE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__EXPANDER_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/expander_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_ExpanderService_Request_value
{
public:
  explicit Init_ExpanderService_Request_value(::interfaces::srv::ExpanderService_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::ExpanderService_Request value(::interfaces::srv::ExpanderService_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::ExpanderService_Request msg_;
};

class Init_ExpanderService_Request_instruction
{
public:
  explicit Init_ExpanderService_Request_instruction(::interfaces::srv::ExpanderService_Request & msg)
  : msg_(msg)
  {}
  Init_ExpanderService_Request_value instruction(::interfaces::srv::ExpanderService_Request::_instruction_type arg)
  {
    msg_.instruction = std::move(arg);
    return Init_ExpanderService_Request_value(msg_);
  }

private:
  ::interfaces::srv::ExpanderService_Request msg_;
};

class Init_ExpanderService_Request_port
{
public:
  explicit Init_ExpanderService_Request_port(::interfaces::srv::ExpanderService_Request & msg)
  : msg_(msg)
  {}
  Init_ExpanderService_Request_instruction port(::interfaces::srv::ExpanderService_Request::_port_type arg)
  {
    msg_.port = std::move(arg);
    return Init_ExpanderService_Request_instruction(msg_);
  }

private:
  ::interfaces::srv::ExpanderService_Request msg_;
};

class Init_ExpanderService_Request_address
{
public:
  explicit Init_ExpanderService_Request_address(::interfaces::srv::ExpanderService_Request & msg)
  : msg_(msg)
  {}
  Init_ExpanderService_Request_port address(::interfaces::srv::ExpanderService_Request::_address_type arg)
  {
    msg_.address = std::move(arg);
    return Init_ExpanderService_Request_port(msg_);
  }

private:
  ::interfaces::srv::ExpanderService_Request msg_;
};

class Init_ExpanderService_Request_sender
{
public:
  Init_ExpanderService_Request_sender()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExpanderService_Request_address sender(::interfaces::srv::ExpanderService_Request::_sender_type arg)
  {
    msg_.sender = std::move(arg);
    return Init_ExpanderService_Request_address(msg_);
  }

private:
  ::interfaces::srv::ExpanderService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::ExpanderService_Request>()
{
  return interfaces::srv::builder::Init_ExpanderService_Request_sender();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_ExpanderService_Response_result
{
public:
  explicit Init_ExpanderService_Response_result(::interfaces::srv::ExpanderService_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::ExpanderService_Response result(::interfaces::srv::ExpanderService_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::ExpanderService_Response msg_;
};

class Init_ExpanderService_Response_msg
{
public:
  explicit Init_ExpanderService_Response_msg(::interfaces::srv::ExpanderService_Response & msg)
  : msg_(msg)
  {}
  Init_ExpanderService_Response_result msg(::interfaces::srv::ExpanderService_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_ExpanderService_Response_result(msg_);
  }

private:
  ::interfaces::srv::ExpanderService_Response msg_;
};

class Init_ExpanderService_Response_err
{
public:
  Init_ExpanderService_Response_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExpanderService_Response_msg err(::interfaces::srv::ExpanderService_Response::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_ExpanderService_Response_msg(msg_);
  }

private:
  ::interfaces::srv::ExpanderService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::ExpanderService_Response>()
{
  return interfaces::srv::builder::Init_ExpanderService_Response_err();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__EXPANDER_SERVICE__BUILDER_HPP_
