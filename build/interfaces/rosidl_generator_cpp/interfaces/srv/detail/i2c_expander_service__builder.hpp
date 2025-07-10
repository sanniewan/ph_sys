// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/I2cExpanderService.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__I2C_EXPANDER_SERVICE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__I2C_EXPANDER_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/i2c_expander_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_I2cExpanderService_Request_value
{
public:
  explicit Init_I2cExpanderService_Request_value(::interfaces::srv::I2cExpanderService_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::I2cExpanderService_Request value(::interfaces::srv::I2cExpanderService_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::I2cExpanderService_Request msg_;
};

class Init_I2cExpanderService_Request_instruction
{
public:
  explicit Init_I2cExpanderService_Request_instruction(::interfaces::srv::I2cExpanderService_Request & msg)
  : msg_(msg)
  {}
  Init_I2cExpanderService_Request_value instruction(::interfaces::srv::I2cExpanderService_Request::_instruction_type arg)
  {
    msg_.instruction = std::move(arg);
    return Init_I2cExpanderService_Request_value(msg_);
  }

private:
  ::interfaces::srv::I2cExpanderService_Request msg_;
};

class Init_I2cExpanderService_Request_port
{
public:
  explicit Init_I2cExpanderService_Request_port(::interfaces::srv::I2cExpanderService_Request & msg)
  : msg_(msg)
  {}
  Init_I2cExpanderService_Request_instruction port(::interfaces::srv::I2cExpanderService_Request::_port_type arg)
  {
    msg_.port = std::move(arg);
    return Init_I2cExpanderService_Request_instruction(msg_);
  }

private:
  ::interfaces::srv::I2cExpanderService_Request msg_;
};

class Init_I2cExpanderService_Request_address
{
public:
  explicit Init_I2cExpanderService_Request_address(::interfaces::srv::I2cExpanderService_Request & msg)
  : msg_(msg)
  {}
  Init_I2cExpanderService_Request_port address(::interfaces::srv::I2cExpanderService_Request::_address_type arg)
  {
    msg_.address = std::move(arg);
    return Init_I2cExpanderService_Request_port(msg_);
  }

private:
  ::interfaces::srv::I2cExpanderService_Request msg_;
};

class Init_I2cExpanderService_Request_sender
{
public:
  Init_I2cExpanderService_Request_sender()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_I2cExpanderService_Request_address sender(::interfaces::srv::I2cExpanderService_Request::_sender_type arg)
  {
    msg_.sender = std::move(arg);
    return Init_I2cExpanderService_Request_address(msg_);
  }

private:
  ::interfaces::srv::I2cExpanderService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::I2cExpanderService_Request>()
{
  return interfaces::srv::builder::Init_I2cExpanderService_Request_sender();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_I2cExpanderService_Response_state
{
public:
  explicit Init_I2cExpanderService_Response_state(::interfaces::srv::I2cExpanderService_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::I2cExpanderService_Response state(::interfaces::srv::I2cExpanderService_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::I2cExpanderService_Response msg_;
};

class Init_I2cExpanderService_Response_msg
{
public:
  explicit Init_I2cExpanderService_Response_msg(::interfaces::srv::I2cExpanderService_Response & msg)
  : msg_(msg)
  {}
  Init_I2cExpanderService_Response_state msg(::interfaces::srv::I2cExpanderService_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_I2cExpanderService_Response_state(msg_);
  }

private:
  ::interfaces::srv::I2cExpanderService_Response msg_;
};

class Init_I2cExpanderService_Response_err
{
public:
  Init_I2cExpanderService_Response_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_I2cExpanderService_Response_msg err(::interfaces::srv::I2cExpanderService_Response::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_I2cExpanderService_Response_msg(msg_);
  }

private:
  ::interfaces::srv::I2cExpanderService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::I2cExpanderService_Response>()
{
  return interfaces::srv::builder::Init_I2cExpanderService_Response_err();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__I2C_EXPANDER_SERVICE__BUILDER_HPP_
