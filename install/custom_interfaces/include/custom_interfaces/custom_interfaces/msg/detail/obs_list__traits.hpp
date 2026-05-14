// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/ObsList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/obs_list.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__OBS_LIST__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__OBS_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/msg/detail/obs_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObsList & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_list
  {
    if (msg.x_list.size() == 0) {
      out << "x_list: []";
    } else {
      out << "x_list: [";
      size_t pending_items = msg.x_list.size();
      for (auto item : msg.x_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: y_list
  {
    if (msg.y_list.size() == 0) {
      out << "y_list: []";
    } else {
      out << "y_list: [";
      size_t pending_items = msg.y_list.size();
      for (auto item : msg.y_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: d_list
  {
    if (msg.d_list.size() == 0) {
      out << "d_list: []";
    } else {
      out << "d_list: [";
      size_t pending_items = msg.d_list.size();
      for (auto item : msg.d_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObsList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x_list.size() == 0) {
      out << "x_list: []\n";
    } else {
      out << "x_list:\n";
      for (auto item : msg.x_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y_list.size() == 0) {
      out << "y_list: []\n";
    } else {
      out << "y_list:\n";
      for (auto item : msg.y_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: d_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.d_list.size() == 0) {
      out << "d_list: []\n";
    } else {
      out << "d_list:\n";
      for (auto item : msg.d_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObsList & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::msg::ObsList & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::msg::ObsList & msg)
{
  return custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::msg::ObsList>()
{
  return "custom_interfaces::msg::ObsList";
}

template<>
inline const char * name<custom_interfaces::msg::ObsList>()
{
  return "custom_interfaces/msg/ObsList";
}

template<>
struct has_fixed_size<custom_interfaces::msg::ObsList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::msg::ObsList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::msg::ObsList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__OBS_LIST__TRAITS_HPP_
