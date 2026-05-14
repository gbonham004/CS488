// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:msg/ObsList.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/msg/detail/obs_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__ObsList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x75, 0x48, 0x08, 0x54, 0x0c, 0x8c, 0xd1, 0x85,
      0xdc, 0x45, 0xc0, 0xda, 0x10, 0x6b, 0x8c, 0x53,
      0xb5, 0xa3, 0x84, 0xf4, 0x4b, 0xfe, 0x0a, 0xdd,
      0x98, 0xac, 0xc0, 0xf6, 0x6e, 0xa7, 0xe2, 0x91,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_interfaces__msg__ObsList__TYPE_NAME[] = "custom_interfaces/msg/ObsList";

// Define type names, field names, and default values
static char custom_interfaces__msg__ObsList__FIELD_NAME__x_list[] = "x_list";
static char custom_interfaces__msg__ObsList__FIELD_NAME__y_list[] = "y_list";
static char custom_interfaces__msg__ObsList__FIELD_NAME__d_list[] = "d_list";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__ObsList__FIELDS[] = {
  {
    {custom_interfaces__msg__ObsList__FIELD_NAME__x_list, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__ObsList__FIELD_NAME__y_list, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__ObsList__FIELD_NAME__d_list, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interfaces__msg__ObsList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__msg__ObsList__TYPE_NAME, 29, 29},
      {custom_interfaces__msg__ObsList__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64[] x_list\n"
  "float64[] y_list\n"
  "float64[] d_list";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__msg__ObsList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__msg__ObsList__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 50, 50},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__ObsList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__msg__ObsList__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
