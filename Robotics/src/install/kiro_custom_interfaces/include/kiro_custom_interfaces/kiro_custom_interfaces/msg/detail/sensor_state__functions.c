// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kiro_custom_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice
#include "kiro_custom_interfaces/msg/detail/sensor_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sensor_name`
#include "rosidl_runtime_c/string_functions.h"

bool
kiro_custom_interfaces__msg__SensorState__init(kiro_custom_interfaces__msg__SensorState * msg)
{
  if (!msg) {
    return false;
  }
  // sensor_name
  if (!rosidl_runtime_c__String__init(&msg->sensor_name)) {
    kiro_custom_interfaces__msg__SensorState__fini(msg);
    return false;
  }
  // new_readings_ready
  // reading_id
  return true;
}

void
kiro_custom_interfaces__msg__SensorState__fini(kiro_custom_interfaces__msg__SensorState * msg)
{
  if (!msg) {
    return;
  }
  // sensor_name
  rosidl_runtime_c__String__fini(&msg->sensor_name);
  // new_readings_ready
  // reading_id
}

bool
kiro_custom_interfaces__msg__SensorState__are_equal(const kiro_custom_interfaces__msg__SensorState * lhs, const kiro_custom_interfaces__msg__SensorState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sensor_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sensor_name), &(rhs->sensor_name)))
  {
    return false;
  }
  // new_readings_ready
  if (lhs->new_readings_ready != rhs->new_readings_ready) {
    return false;
  }
  // reading_id
  if (lhs->reading_id != rhs->reading_id) {
    return false;
  }
  return true;
}

bool
kiro_custom_interfaces__msg__SensorState__copy(
  const kiro_custom_interfaces__msg__SensorState * input,
  kiro_custom_interfaces__msg__SensorState * output)
{
  if (!input || !output) {
    return false;
  }
  // sensor_name
  if (!rosidl_runtime_c__String__copy(
      &(input->sensor_name), &(output->sensor_name)))
  {
    return false;
  }
  // new_readings_ready
  output->new_readings_ready = input->new_readings_ready;
  // reading_id
  output->reading_id = input->reading_id;
  return true;
}

kiro_custom_interfaces__msg__SensorState *
kiro_custom_interfaces__msg__SensorState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kiro_custom_interfaces__msg__SensorState * msg = (kiro_custom_interfaces__msg__SensorState *)allocator.allocate(sizeof(kiro_custom_interfaces__msg__SensorState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kiro_custom_interfaces__msg__SensorState));
  bool success = kiro_custom_interfaces__msg__SensorState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kiro_custom_interfaces__msg__SensorState__destroy(kiro_custom_interfaces__msg__SensorState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kiro_custom_interfaces__msg__SensorState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kiro_custom_interfaces__msg__SensorState__Sequence__init(kiro_custom_interfaces__msg__SensorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kiro_custom_interfaces__msg__SensorState * data = NULL;

  if (size) {
    data = (kiro_custom_interfaces__msg__SensorState *)allocator.zero_allocate(size, sizeof(kiro_custom_interfaces__msg__SensorState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kiro_custom_interfaces__msg__SensorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kiro_custom_interfaces__msg__SensorState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
kiro_custom_interfaces__msg__SensorState__Sequence__fini(kiro_custom_interfaces__msg__SensorState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kiro_custom_interfaces__msg__SensorState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

kiro_custom_interfaces__msg__SensorState__Sequence *
kiro_custom_interfaces__msg__SensorState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kiro_custom_interfaces__msg__SensorState__Sequence * array = (kiro_custom_interfaces__msg__SensorState__Sequence *)allocator.allocate(sizeof(kiro_custom_interfaces__msg__SensorState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kiro_custom_interfaces__msg__SensorState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kiro_custom_interfaces__msg__SensorState__Sequence__destroy(kiro_custom_interfaces__msg__SensorState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kiro_custom_interfaces__msg__SensorState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kiro_custom_interfaces__msg__SensorState__Sequence__are_equal(const kiro_custom_interfaces__msg__SensorState__Sequence * lhs, const kiro_custom_interfaces__msg__SensorState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kiro_custom_interfaces__msg__SensorState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kiro_custom_interfaces__msg__SensorState__Sequence__copy(
  const kiro_custom_interfaces__msg__SensorState__Sequence * input,
  kiro_custom_interfaces__msg__SensorState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kiro_custom_interfaces__msg__SensorState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kiro_custom_interfaces__msg__SensorState * data =
      (kiro_custom_interfaces__msg__SensorState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kiro_custom_interfaces__msg__SensorState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kiro_custom_interfaces__msg__SensorState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kiro_custom_interfaces__msg__SensorState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
