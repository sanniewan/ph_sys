// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/GetBool.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__GET_BOOL__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__GET_BOOL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/get_bool__struct.hpp"
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
auto build<::interfaces::srv::GetBool_Request>()
{
  return ::interfaces::srv::GetBool_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_GetBool_Response_result
{
public:
  Init_GetBool_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::GetBool_Response result(::interfaces::srv::GetBool_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::GetBool_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::GetBool_Response>()
{
  return interfaces::srv::builder::Init_GetBool_Response_result();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__GET_BOOL__BUILDER_HPP_
