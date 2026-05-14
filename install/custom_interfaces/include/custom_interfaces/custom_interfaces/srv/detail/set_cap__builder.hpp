// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/SetCap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/srv/set_cap.hpp"


#ifndef CUSTOM_INTERFACES__SRV__DETAIL__SET_CAP__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__SET_CAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/set_cap__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCap_Request_new_cap
{
public:
  Init_SetCap_Request_new_cap()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::SetCap_Request new_cap(::custom_interfaces::srv::SetCap_Request::_new_cap_type arg)
  {
    msg_.new_cap = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::SetCap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::SetCap_Request>()
{
  return custom_interfaces::srv::builder::Init_SetCap_Request_new_cap();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCap_Response_confirmation
{
public:
  explicit Init_SetCap_Response_confirmation(::custom_interfaces::srv::SetCap_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::SetCap_Response confirmation(::custom_interfaces::srv::SetCap_Response::_confirmation_type arg)
  {
    msg_.confirmation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::SetCap_Response msg_;
};

class Init_SetCap_Response_success
{
public:
  Init_SetCap_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCap_Response_confirmation success(::custom_interfaces::srv::SetCap_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetCap_Response_confirmation(msg_);
  }

private:
  ::custom_interfaces::srv::SetCap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::SetCap_Response>()
{
  return custom_interfaces::srv::builder::Init_SetCap_Response_success();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCap_Event_response
{
public:
  explicit Init_SetCap_Event_response(::custom_interfaces::srv::SetCap_Event & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::SetCap_Event response(::custom_interfaces::srv::SetCap_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::SetCap_Event msg_;
};

class Init_SetCap_Event_request
{
public:
  explicit Init_SetCap_Event_request(::custom_interfaces::srv::SetCap_Event & msg)
  : msg_(msg)
  {}
  Init_SetCap_Event_response request(::custom_interfaces::srv::SetCap_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetCap_Event_response(msg_);
  }

private:
  ::custom_interfaces::srv::SetCap_Event msg_;
};

class Init_SetCap_Event_info
{
public:
  Init_SetCap_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCap_Event_request info(::custom_interfaces::srv::SetCap_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetCap_Event_request(msg_);
  }

private:
  ::custom_interfaces::srv::SetCap_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::SetCap_Event>()
{
  return custom_interfaces::srv::builder::Init_SetCap_Event_info();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__SET_CAP__BUILDER_HPP_
