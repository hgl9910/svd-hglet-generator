#pragma once

#include <cstddef>
#include <type_traits>
#include <utility>

#include "Access.h"
#include "Concepts.h"
#include "Fields.h"
#include "Gpiodef.h"
#include "Register.h"
#include "Types.h"
#include "Utils.h"

// Generated gpio_regs (parameterized using make_mask expressions)
struct gpio_regs {

    // MODER (0x00) - per-pin 2-bit fields MODER0..MODER15
    register_t<register_policy::mW,
        (make_mask<register_value,2,0>::value | make_mask<register_value,2,2>::value | make_mask<register_value,2,4>::value | make_mask<register_value,2,6>::value |
         make_mask<register_value,2,8>::value | make_mask<register_value,2,10>::value | make_mask<register_value,2,12>::value | make_mask<register_value,2,14>::value |
         make_mask<register_value,2,16>::value | make_mask<register_value,2,18>::value | make_mask<register_value,2,20>::value | make_mask<register_value,2,22>::value |
         make_mask<register_value,2,24>::value | make_mask<register_value,2,26>::value | make_mask<register_value,2,28>::value | make_mask<register_value,2,30>::value),
        (make_mask<register_value,2,0>::value | make_mask<register_value,2,2>::value | make_mask<register_value,2,4>::value | make_mask<register_value,2,6>::value |
         make_mask<register_value,2,8>::value | make_mask<register_value,2,10>::value | make_mask<register_value,2,12>::value | make_mask<register_value,2,14>::value |
         make_mask<register_value,2,16>::value | make_mask<register_value,2,18>::value | make_mask<register_value,2,20>::value | make_mask<register_value,2,22>::value |
         make_mask<register_value,2,24>::value | make_mask<register_value,2,26>::value | make_mask<register_value,2,28>::value | make_mask<register_value,2,30>::value)>
    moder; // 0x00

    // OTYPER (0x04) - per-pin 1-bit fields OT0..OT15
    register_t<register_policy::mW,
        (make_mask<register_value,1,0>::value | make_mask<register_value,1,1>::value | make_mask<register_value,1,2>::value | make_mask<register_value,1,3>::value |
         make_mask<register_value,1,4>::value | make_mask<register_value,1,5>::value | make_mask<register_value,1,6>::value | make_mask<register_value,1,7>::value |
         make_mask<register_value,1,8>::value | make_mask<register_value,1,9>::value | make_mask<register_value,1,10>::value | make_mask<register_value,1,11>::value |
         make_mask<register_value,1,12>::value | make_mask<register_value,1,13>::value | make_mask<register_value,1,14>::value | make_mask<register_value,1,15>::value),
        (make_mask<register_value,1,0>::value | make_mask<register_value,1,1>::value | make_mask<register_value,1,2>::value | make_mask<register_value,1,3>::value |
         make_mask<register_value,1,4>::value | make_mask<register_value,1,5>::value | make_mask<register_value,1,6>::value | make_mask<register_value,1,7>::value |
         make_mask<register_value,1,8>::value | make_mask<register_value,1,9>::value | make_mask<register_value,1,10>::value | make_mask<register_value,1,11>::value |
         make_mask<register_value,1,12>::value | make_mask<register_value,1,13>::value | make_mask<register_value,1,14>::value | make_mask<register_value,1,15>::value)>
    otyper; // 0x04

    // OSPEEDR (0x08) - per-pin 2-bit fields
    register_t<register_policy::mW,
        (make_mask<register_value,2,0>::value | make_mask<register_value,2,2>::value | make_mask<register_value,2,4>::value | make_mask<register_value,2,6>::value |
         make_mask<register_value,2,8>::value | make_mask<register_value,2,10>::value | make_mask<register_value,2,12>::value | make_mask<register_value,2,14>::value |
         make_mask<register_value,2,16>::value | make_mask<register_value,2,18>::value | make_mask<register_value,2,20>::value | make_mask<register_value,2,22>::value |
         make_mask<register_value,2,24>::value | make_mask<register_value,2,26>::value | make_mask<register_value,2,28>::value | make_mask<register_value,2,30>::value),
        (make_mask<register_value,2,0>::value | make_mask<register_value,2,2>::value | make_mask<register_value,2,4>::value | make_mask<register_value,2,6>::value |
         make_mask<register_value,2,8>::value | make_mask<register_value,2,10>::value | make_mask<register_value,2,12>::value | make_mask<register_value,2,14>::value |
         make_mask<register_value,2,16>::value | make_mask<register_value,2,18>::value | make_mask<register_value,2,20>::value | make_mask<register_value,2,22>::value |
         make_mask<register_value,2,24>::value | make_mask<register_value,2,26>::value | make_mask<register_value,2,28>::value | make_mask<register_value,2,30>::value)>
    ospeedr; // 0x08

    // PUPDR (0x0C) - per-pin 2-bit fields
    register_t<register_policy::mW,
        (make_mask<register_value,2,0>::value | make_mask<register_value,2,2>::value | make_mask<register_value,2,4>::value | make_mask<register_value,2,6>::value |
         make_mask<register_value,2,8>::value | make_mask<register_value,2,10>::value | make_mask<register_value,2,12>::value | make_mask<register_value,2,14>::value |
         make_mask<register_value,2,16>::value | make_mask<register_value,2,18>::value | make_mask<register_value,2,20>::value | make_mask<register_value,2,22>::value |
         make_mask<register_value,2,24>::value | make_mask<register_value,2,26>::value | make_mask<register_value,2,28>::value | make_mask<register_value,2,30>::value),
        (make_mask<register_value,2,0>::value | make_mask<register_value,2,2>::value | make_mask<register_value,2,4>::value | make_mask<register_value,2,6>::value |
         make_mask<register_value,2,8>::value | make_mask<register_value,2,10>::value | make_mask<register_value,2,12>::value | make_mask<register_value,2,14>::value |
         make_mask<register_value,2,16>::value | make_mask<register_value,2,18>::value | make_mask<register_value,2,20>::value | make_mask<register_value,2,22>::value |
         make_mask<register_value,2,24>::value | make_mask<register_value,2,26>::value | make_mask<register_value,2,28>::value | make_mask<register_value,2,30>::value)>
    pupdr; // 0x0C

    // IDR (0x10) - read-only 1-bit fields
    register_t<register_policy::dW,
        (make_mask<register_value,1,0>::value | make_mask<register_value,1,1>::value | make_mask<register_value,1,2>::value | make_mask<register_value,1,3>::value |
         make_mask<register_value,1,4>::value | make_mask<register_value,1,5>::value | make_mask<register_value,1,6>::value | make_mask<register_value,1,7>::value |
         make_mask<register_value,1,8>::value | make_mask<register_value,1,9>::value | make_mask<register_value,1,10>::value | make_mask<register_value,1,11>::value |
         make_mask<register_value,1,12>::value | make_mask<register_value,1,13>::value | make_mask<register_value,1,14>::value | make_mask<register_value,1,15>::value),
        0u>
    idr; // 0x10

    // ODR (0x14) - read-write 1-bit fields
    register_t<register_policy::mW,
        (make_mask<register_value,1,0>::value | make_mask<register_value,1,1>::value | make_mask<register_value,1,2>::value | make_mask<register_value,1,3>::value |
         make_mask<register_value,1,4>::value | make_mask<register_value,1,5>::value | make_mask<register_value,1,6>::value | make_mask<register_value,1,7>::value |
         make_mask<register_value,1,8>::value | make_mask<register_value,1,9>::value | make_mask<register_value,1,10>::value | make_mask<register_value,1,11>::value |
         make_mask<register_value,1,12>::value | make_mask<register_value,1,13>::value | make_mask<register_value,1,14>::value | make_mask<register_value,1,15>::value),
        (make_mask<register_value,1,0>::value | make_mask<register_value,1,1>::value | make_mask<register_value,1,2>::value | make_mask<register_value,1,3>::value |
         make_mask<register_value,1,4>::value | make_mask<register_value,1,5>::value | make_mask<register_value,1,6>::value | make_mask<register_value,1,7>::value |
         make_mask<register_value,1,8>::value | make_mask<register_value,1,9>::value | make_mask<register_value,1,10>::value | make_mask<register_value,1,11>::value |
         make_mask<register_value,1,12>::value | make_mask<register_value,1,13>::value | make_mask<register_value,1,14>::value | make_mask<register_value,1,15>::value)>
    odr; // 0x14

    // BSRR (0x18) - write-only bits 0..31 (BS0..BS15, BR0..BR15)
    register_t<register_policy::wo_policy,
        0u,
        (make_mask<register_value,1,0>::value | make_mask<register_value,1,1>::value | make_mask<register_value,1,2>::value | make_mask<register_value,1,3>::value |
         make_mask<register_value,1,4>::value | make_mask<register_value,1,5>::value | make_mask<register_value,1,6>::value | make_mask<register_value,1,7>::value |
         make_mask<register_value,1,8>::value | make_mask<register_value,1,9>::value | make_mask<register_value,1,10>::value | make_mask<register_value,1,11>::value |
         make_mask<register_value,1,12>::value | make_mask<register_value,1,13>::value | make_mask<register_value,1,14>::value | make_mask<register_value,1,15>::value |
         make_mask<register_value,1,16>::value | make_mask<register_value,1,17>::value | make_mask<register_value,1,18>::value | make_mask<register_value,1,19>::value |
         make_mask<register_value,1,20>::value | make_mask<register_value,1,21>::value | make_mask<register_value,1,22>::value | make_mask<register_value,1,23>::value |
         make_mask<register_value,1,24>::value | make_mask<register_value,1,25>::value | make_mask<register_value,1,26>::value | make_mask<register_value,1,27>::value |
         make_mask<register_value,1,28>::value | make_mask<register_value,1,29>::value | make_mask<register_value,1,30>::value | make_mask<register_value,1,31>::value)>
    bsrr; // 0x18

    // LCKR (0x1C) - LCK0..LCK15 (bits 0..15) and LCKK bit 16
    register_t<register_policy::mW,
        (make_mask<register_value,1,0>::value | make_mask<register_value,1,1>::value | make_mask<register_value,1,2>::value | make_mask<register_value,1,3>::value |
         make_mask<register_value,1,4>::value | make_mask<register_value,1,5>::value | make_mask<register_value,1,6>::value | make_mask<register_value,1,7>::value |
         make_mask<register_value,1,8>::value | make_mask<register_value,1,9>::value | make_mask<register_value,1,10>::value | make_mask<register_value,1,11>::value |
         make_mask<register_value,1,12>::value | make_mask<register_value,1,13>::value | make_mask<register_value,1,14>::value | make_mask<register_value,1,15>::value |
         make_mask<register_value,1,16>::value),
        (make_mask<register_value,1,0>::value | make_mask<register_value,1,1>::value | make_mask<register_value,1,2>::value | make_mask<register_value,1,3>::value |
         make_mask<register_value,1,4>::value | make_mask<register_value,1,5>::value | make_mask<register_value,1,6>::value | make_mask<register_value,1,7>::value |
         make_mask<register_value,1,8>::value | make_mask<register_value,1,9>::value | make_mask<register_value,1,10>::value | make_mask<register_value,1,11>::value |
         make_mask<register_value,1,12>::value | make_mask<register_value,1,13>::value | make_mask<register_value,1,14>::value | make_mask<register_value,1,15>::value |
         make_mask<register_value,1,16>::value)>
    lckr; // 0x1C

    // AFR[2] (0x20 / 0x24) - alternate function low/high: 8 fields of 4 bits each
    register_t<register_policy::mW,
        (make_mask<register_value,4,0>::value | make_mask<register_value,4,4>::value | make_mask<register_value,4,8>::value | make_mask<register_value,4,12>::value |
         make_mask<register_value,4,16>::value | make_mask<register_value,4,20>::value | make_mask<register_value,4,24>::value | make_mask<register_value,4,28>::value),
        (make_mask<register_value,4,0>::value | make_mask<register_value,4,4>::value | make_mask<register_value,4,8>::value | make_mask<register_value,4,12>::value |
         make_mask<register_value,4,16>::value | make_mask<register_value,4,20>::value | make_mask<register_value,4,24>::value | make_mask<register_value,4,28>::value)>
    afr[2]; // 0x20/0x24

    // field aliases (per HGETL style: pos=0 for per-pin aliases)
    using mode_field      = field_t<mode_t,  0,2,rw_policy>;
    using otype_field     = field_t<otype_t, 0,1,rw_policy>;
    using ospeed_field    = field_t<ospeed_t,0,2,rw_policy>;
    using pupd_field      = field_t<pupd_t,  0,2,rw_policy>;
    using altf_field      = field_t<altf_t,  0,4,rw_policy>;
    using bsrr_field      = field_t<pin_value_t,  0,1,rw_policy>;

    using odr_field      = field_t<pin_value_t,  0,1,wo_policy>;
    using idr_field      = field_t<pin_value_t,  0,1,ro_policy>;

};

struct gpio_impl : gpio_regs{

public:

    gpio_impl() = default;
    // no copy or move allowed
    gpio_impl(gpio_impl const&) = delete;
    gpio_impl& operator=(gpio_impl const&) = delete;
    gpio_impl(gpio_impl&&) = delete;
    gpio_impl& operator=(gpio_impl&&) = delete;

    // single pin get mode (result shifted to 0-position)
    template<typename T = mode_field>
    typename T::value_type get_mode(pin_t pin){
       return moder.template get<T>(std::to_underlying(pin));
    }

    // single pin set mode
    template<typename T = mode_field>
    void set_mode(typename T::value_type mode, pin_t pin)
    {
       moder.template set<T>(mode, std::to_underlying(pin));
    }

    // varadic set mode
    template<typename T = mode_field, typename ... Args>
    void set_mode(typename T::value_type mode, Args&& ... args )
    requires all_same_as<pin_t, std::remove_cvref_t<Args>...> {
       moder.template vset<T>(mode, std::forward<Args>(args) ...);
    }

    // single pin get output type (result shifted to 0-position)
    template<typename T = otype_field>
    typename T::value_type get_otype(pin_t pin){
       return otyper.template get<T>(std::to_underlying(pin));
    }

    // single pin set output type
    template<typename T = otype_field>
    void set_otype(typename T::value_type otyp, pin_t pin)
    {
       otyper.template set<T>(otyp, std::to_underlying(pin));
    }

    // varadic set output type
    template<typename T = otype_field, typename ... Args>
    void set_otype(typename T::value_type otype, Args&& ... args )
    requires all_same_as<pin_t, std::remove_cvref_t<Args>...> {
       otyper.template vset<T>(otype, std::forward<Args>(args) ...);
    }

    // single pin get output speed (result shifted to 0-position)
    template<typename T = ospeed_field>
    typename T::value_type get_ospeed(pin_t pin){
       return ospeedr.template get<T>(std::to_underlying(pin));
    }

    // single pin set output speed
    template<typename T = ospeed_field>
    void set_ospeed(typename T::value_type ospeed, pin_t pin)
    {
       ospeedr.template set<T>(ospeed, std::to_underlying(pin));
    }

    // varadic set output speed
    template<typename T = ospeed_field, typename ... Args>
    void set_ospeed(typename T::value_type ospeed, Args&& ... args )
    requires all_same_as<pin_t, std::remove_cvref_t<Args>...> {
       ospeedr.template vset<T>(ospeed, std::forward<Args>(args) ...);
    }

    // single pin get pullup/pulldown (result shifted to 0-position)
    template<typename T = pupd_field>
    typename T::value_type get_pupd(pin_t pin){
       return pupdr.template get<T>(std::to_underlying(pin));
    }

    // single pin set pullup/pulldown
    template<typename T = pupd_field>
    void set_pupd(typename T::value_type pupd, pin_t pin)
    {
       pupdr.template set<T>(pupd, std::to_underlying(pin));
    }

    // variadic set pullup/pulldown
    template<typename T = pupd_field, typename ... Args>
    void set_pupd(typename T::value_type pupd, Args&& ... args )
    requires all_same_as<pin_t, std::remove_cvref_t<Args>...> {
       pupdr.template vset<T>(pupd, std::forward<Args>(args) ...);
    }

    template<typename T = bsrr_field>
    void set_pin(typename T::value_type value, pin_t pin)
    {
        constexpr auto pin_count = 16u;
        const auto pos = std::to_underlying(pin);
       const auto bit = value == T::value_type::SET
          ? pos
          : pos + pin_count;

       bsrr.write(register_value{1} << bit);
    }

    // single pin get pin value
    template<typename T = idr_field>
    typename T::value_type get_pin(pin_t pin){
         return idr.template get<T>(std::to_underlying(pin));
    }

    // single pin get alternate function (result shifted to 0-position)
    template<typename T = altf_field>
    typename T::value_type get_altf(pin_t pin){
        auto p = std::to_underlying(pin);
        if( p < 8 )
           return afr[0].template get<T>(p);
        else
           return afr[1].template get<T>(p-8);
    }

    // single pin set alternate function
    template<typename T = altf_field>
    void set_altf(typename T::value_type altf, pin_t pin)
    {
        auto p = std::to_underlying(pin);
        if( p < 8 )
           return afr[0].template set<T>(altf, p);
        else
           return afr[1].template set<T>(altf, p-8);
    }

protected:
    ~gpio_impl();

};
