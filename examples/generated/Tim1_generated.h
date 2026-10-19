#pragma once

#include "Tim1Impl_generated.h"

// Timer instance typedefs and layout checks
template<typename T>
concept tim_device_t = std::derived_from<T, tim1_impl>;

// No concrete port instances created here; TIM instances may be created similarly to GPIO ports

