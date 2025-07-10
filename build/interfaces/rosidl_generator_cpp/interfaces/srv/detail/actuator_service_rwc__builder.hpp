// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/ActuatorServiceRWC.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__ACTUATOR_SERVICE_RWC__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__ACTUATOR_SERVICE_RWC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/actuator_service_rwc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_ActuatorServiceRWC_Request_instruction
{
public:
  Init_ActuatorServiceRWC_Request_instruction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::ActuatorServiceRWC_Request instruction(::interfaces::srv::ActuatorServiceRWC_Request::_instruction_type arg)
  {
    msg_.instruction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::ActuatorServiceRWC_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::ActuatorServiceRWC_Request>()
{
  return interfaces::srv::builder::Init_ActuatorServiceRWC_Request_instruction();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_ActuatorServiceRWC_Response_result
{
public:
  explicit Init_ActuatorServiceRWC_Response_result(::interfaces::srv::ActuatorServiceRWC_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::ActuatorServiceRWC_Response result(::interfaces::srv::ActuatorServiceRWC_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::ActuatorServiceRWC_Response msg_;
};

class Init_ActuatorServiceRWC_Response_msg
{
public:
  explicit Init_ActuatorServiceRWC_Response_msg(::interfaces::srv::ActuatorServiceRWC_Response & msg)
  : msg_(msg)
  {}
  Init_ActuatorServiceRWC_Response_result msg(::interfaces::srv::ActuatorServiceRWC_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_ActuatorServiceRWC_Response_result(msg_);
  }

private:
  ::interfaces::srv::ActuatorServiceRWC_Response msg_;
};

class Init_ActuatorServiceRWC_Response_err
{
public:
  Init_ActuatorServiceRWC_Response_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorServiceRWC_Response_msg err(::interfaces::srv::ActuatorServiceRWC_Response::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_ActuatorServiceRWC_Response_msg(msg_);
  }

private:
  ::interfaces::srv::ActuatorServiceRWC_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::ActuatorServiceRWC_Response>()
{
  return interfaces::srv::builder::Init_ActuatorServiceRWC_Response_err();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__ACTUATOR_SERVICE_RWC__BUILDER_HPP_
