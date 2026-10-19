#pragma once

#include <new>

#include "GpioImpl_generated.h"

// gpio instances
template<gpio_base_t base>
struct gpio_t : gpio_impl {

private:
    ~gpio_t() {}
    // copy operator ?
};

// port instances
using gpioa_t = gpio_t<gpio_base_t::portA>;
using gpiob_t = gpio_t<gpio_base_t::portB>;
using gpioc_t = gpio_t<gpio_base_t::portC>;
using gpiod_t = gpio_t<gpio_base_t::portD>;
using gpioe_t = gpio_t<gpio_base_t::portE>;
using gpioh_t = gpio_t<gpio_base_t::portH>;

// gpio concepts 
template <typename T>
    concept gpio_device_t = std::derived_from<T, gpio_impl>;

// layout sanity check 
template<typename T>
    requires( gpio_device_t<T>)
    void consteval check_gpio_layout() {
    static_assert(
    std::is_standard_layout<T>::value
    && sizeof(T) == 40 
    && offsetof(T,moder)  == 0x00
    && offsetof(T,otyper) == 0x04
    && offsetof(T,ospeedr)== 0x08
    && offsetof(T,pupdr)  == 0x0C      
    && offsetof(T,idr)    == 0x10      
    && offsetof(T,odr)    == 0x14      
    && offsetof(T,bsrr)   == 0x18      
    && offsetof(T,lckr)   == 0x1C      
    && offsetof(T,afr[0]) == 0x20       
    && offsetof(T,afr[1]) == 0x24
    ,
    "gpio class layout check failed");
};

template <typename T>
  concept gpio_device = std::derived_from<T,gpio_impl>; 

template <typename T>
    concept is_gpio_A = std::is_same_v<T, gpioa_t>;

    template <typename T>
    concept is_gpio_B = std::is_same_v<T, gpiob_t>;

    template <typename T>
    concept is_gpio_C = std::is_same_v<T, gpioc_t>;

    template <typename T>
    concept is_gpio_D = std::is_same_v<T, gpiod_t>;

    template <typename T>
    concept is_gpio_E = std::is_same_v<T, gpioe_t>;

    template <typename T>
    concept is_gpio_H = std::is_same_v<T, gpioh_t>;


// compile time port tests 
template void check_gpio_layout<gpioa_t>();
template void check_gpio_layout<gpiob_t>();
template void check_gpio_layout<gpioc_t>();
template void check_gpio_layout<gpiod_t>();
template void check_gpio_layout<gpioe_t>();
template void check_gpio_layout<gpioh_t>();

// port instances
inline gpioa_t& PortA = *::new (reinterpret_cast<void*>(static_cast<device_base>(gpio_base_t::portA))) gpioa_t;
inline gpiob_t& PortB = *::new (reinterpret_cast<void*>(static_cast<device_base>(gpio_base_t::portB))) gpiob_t;
inline gpioc_t& PortC = *::new (reinterpret_cast<void*>(static_cast<device_base>(gpio_base_t::portC))) gpioc_t;
inline gpiod_t& PortD = *::new (reinterpret_cast<void*>(static_cast<device_base>(gpio_base_t::portD))) gpiod_t;
inline gpioe_t& PortE = *::new (reinterpret_cast<void*>(static_cast<device_base>(gpio_base_t::portE))) gpioe_t;
inline gpioh_t& PortH = *::new (reinterpret_cast<void*>(static_cast<device_base>(gpio_base_t::portH))) gpioh_t;
