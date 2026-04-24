// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/ObsList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/obs_list.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__OBS_LIST__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__OBS_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/obs_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_ObsList_y_list
{
public:
  explicit Init_ObsList_y_list(::custom_interfaces::msg::ObsList & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::ObsList y_list(::custom_interfaces::msg::ObsList::_y_list_type arg)
  {
    msg_.y_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::ObsList msg_;
};

class Init_ObsList_x_list
{
public:
  Init_ObsList_x_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObsList_y_list x_list(::custom_interfaces::msg::ObsList::_x_list_type arg)
  {
    msg_.x_list = std::move(arg);
    return Init_ObsList_y_list(msg_);
  }

private:
  ::custom_interfaces::msg::ObsList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::ObsList>()
{
  return custom_interfaces::msg::builder::Init_ObsList_x_list();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__OBS_LIST__BUILDER_HPP_
