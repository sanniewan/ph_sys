// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/WaterLevelDetectorSvc.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__WATER_LEVEL_DETECTOR_SVC__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__WATER_LEVEL_DETECTOR_SVC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/water_level_detector_svc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_WaterLevelDetectorSvc_Request_threshold
{
public:
  Init_WaterLevelDetectorSvc_Request_threshold()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::WaterLevelDetectorSvc_Request threshold(::interfaces::srv::WaterLevelDetectorSvc_Request::_threshold_type arg)
  {
    msg_.threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::WaterLevelDetectorSvc_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::WaterLevelDetectorSvc_Request>()
{
  return interfaces::srv::builder::Init_WaterLevelDetectorSvc_Request_threshold();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_WaterLevelDetectorSvc_Response_result
{
public:
  explicit Init_WaterLevelDetectorSvc_Response_result(::interfaces::srv::WaterLevelDetectorSvc_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::WaterLevelDetectorSvc_Response result(::interfaces::srv::WaterLevelDetectorSvc_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::WaterLevelDetectorSvc_Response msg_;
};

class Init_WaterLevelDetectorSvc_Response_msg
{
public:
  explicit Init_WaterLevelDetectorSvc_Response_msg(::interfaces::srv::WaterLevelDetectorSvc_Response & msg)
  : msg_(msg)
  {}
  Init_WaterLevelDetectorSvc_Response_result msg(::interfaces::srv::WaterLevelDetectorSvc_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_WaterLevelDetectorSvc_Response_result(msg_);
  }

private:
  ::interfaces::srv::WaterLevelDetectorSvc_Response msg_;
};

class Init_WaterLevelDetectorSvc_Response_err
{
public:
  Init_WaterLevelDetectorSvc_Response_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaterLevelDetectorSvc_Response_msg err(::interfaces::srv::WaterLevelDetectorSvc_Response::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_WaterLevelDetectorSvc_Response_msg(msg_);
  }

private:
  ::interfaces::srv::WaterLevelDetectorSvc_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::WaterLevelDetectorSvc_Response>()
{
  return interfaces::srv::builder::Init_WaterLevelDetectorSvc_Response_err();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__WATER_LEVEL_DETECTOR_SVC__BUILDER_HPP_
