#pragma once

// TIM1 generated definitions (parameterized using make_mask expressions)

#include "Types.h"
#include "Register.h"
#include "Fields.h"
#include "Access.h"
#include "Concepts.h"

// Note: this file is generated from TIM1_svd.txt and uses make_mask expressions
// to compose read/write masks for register_t template parameters. It does not
// introduce new constexprs — it parameterizes your existing HGETL templates.

struct tim1_regs {
    // CR1 (0x00)
    register_t<register_policy::mW,
        (make_mask<register_value,2,8>::value | make_mask<register_value,1,7>::value | make_mask<register_value,2,5>::value | make_mask<register_value,1,4>::value |
         make_mask<register_value,1,3>::value | make_mask<register_value,1,2>::value | make_mask<register_value,1,1>::value | make_mask<register_value,1,0>::value),
        (make_mask<register_value,2,8>::value | make_mask<register_value,1,7>::value | make_mask<register_value,2,5>::value | make_mask<register_value,1,4>::value |
         make_mask<register_value,1,3>::value | make_mask<register_value,1,2>::value | make_mask<register_value,1,1>::value | make_mask<register_value,1,0>::value)>
    cr1; // 0x00

    // CR2 (0x04)
    register_t<register_policy::mW,
        (make_mask<register_value,1,14>::value | make_mask<register_value,1,13>::value | make_mask<register_value,1,12>::value | make_mask<register_value,1,11>::value |
         make_mask<register_value,1,10>::value | make_mask<register_value,1,9>::value  | make_mask<register_value,1,8>::value  | make_mask<register_value,1,7>::value |
         make_mask<register_value,3,4>::value  | make_mask<register_value,1,3>::value  | make_mask<register_value,1,2>::value  | make_mask<register_value,1,0>::value),
        (make_mask<register_value,1,14>::value | make_mask<register_value,1,13>::value | make_mask<register_value,1,12>::value | make_mask<register_value,1,11>::value |
         make_mask<register_value,1,10>::value | make_mask<register_value,1,9>::value  | make_mask<register_value,1,8>::value  | make_mask<register_value,1,7>::value |
         make_mask<register_value,3,4>::value  | make_mask<register_value,1,3>::value  | make_mask<register_value,1,2>::value  | make_mask<register_value,1,0>::value)>
    cr2; // 0x04

    // SMCR (0x08)
    register_t<register_policy::mW,
        (make_mask<register_value,1,15>::value | make_mask<register_value,1,14>::value | make_mask<register_value,2,12>::value | make_mask<register_value,4,8>::value |
         make_mask<register_value,1,7>::value  | make_mask<register_value,3,4>::value  | make_mask<register_value,3,0>::value),
        (make_mask<register_value,1,15>::value | make_mask<register_value,1,14>::value | make_mask<register_value,2,12>::value | make_mask<register_value,4,8>::value |
         make_mask<register_value,1,7>::value  | make_mask<register_value,3,4>::value  | make_mask<register_value,3,0>::value)>
    smcr; // 0x08

    // DIER (0x0C)
    register_t<register_policy::mW,
        (make_mask<register_value,1,14>::value | make_mask<register_value,1,13>::value | make_mask<register_value,1,12>::value | make_mask<register_value,1,11>::value |
         make_mask<register_value,1,10>::value | make_mask<register_value,1,9>::value  | make_mask<register_value,1,8>::value  | make_mask<register_value,1,7>::value |
         make_mask<register_value,1,6>::value  | make_mask<register_value,1,5>::value  | make_mask<register_value,1,4>::value  | make_mask<register_value,1,3>::value |
         make_mask<register_value,1,2>::value  | make_mask<register_value,1,1>::value  | make_mask<register_value,1,0>::value),
        (make_mask<register_value,1,14>::value | make_mask<register_value,1,13>::value | make_mask<register_value,1,12>::value | make_mask<register_value,1,11>::value |
         make_mask<register_value,1,10>::value | make_mask<register_value,1,9>::value  | make_mask<register_value,1,8>::value  | make_mask<register_value,1,7>::value |
         make_mask<register_value,1,6>::value  | make_mask<register_value,1,5>::value  | make_mask<register_value,1,4>::value  | make_mask<register_value,1,3>::value |
         make_mask<register_value,1,2>::value  | make_mask<register_value,1,1>::value  | make_mask<register_value,1,0>::value)>
    dier; // 0x0C

    // SR (0x10)
    register_t<register_policy::mW,
        (make_mask<register_value,1,12>::value | make_mask<register_value,1,11>::value | make_mask<register_value,1,10>::value | make_mask<register_value,1,9>::value |
         make_mask<register_value,1,7>::value  | make_mask<register_value,1,6>::value  | make_mask<register_value,1,5>::value  | make_mask<register_value,1,4>::value |
         make_mask<register_value,1,3>::value  | make_mask<register_value,1,2>::value  | make_mask<register_value,1,1>::value  | make_mask<register_value,1,0>::value),
        (make_mask<register_value,1,12>::value | make_mask<register_value,1,11>::value | make_mask<register_value,1,10>::value | make_mask<register_value,1,9>::value |
         make_mask<register_value,1,7>::value  | make_mask<register_value,1,6>::value  | make_mask<register_value,1,5>::value  | make_mask<register_value,1,4>::value |
         make_mask<register_value,1,3>::value  | make_mask<register_value,1,2>::value  | make_mask<register_value,1,1>::value  | make_mask<register_value,1,0>::value)>
    sr; // 0x10

    // EGR (0x14) - write-only
    register_t<register_policy::wo_policy,
        0u,
        (make_mask<register_value,1,7>::value | make_mask<register_value,1,6>::value | make_mask<register_value,1,5>::value | make_mask<register_value,1,4>::value |
         make_mask<register_value,1,3>::value | make_mask<register_value,1,2>::value | make_mask<register_value,1,1>::value | make_mask<register_value,1,0>::value)>
    egr; // 0x14

    // CCMR1_Output / CCMR1_Input (0x18)
    register_t<register_policy::mW,
        (make_mask<register_value,1,15>::value | make_mask<register_value,3,12>::value | make_mask<register_value,1,11>::value | make_mask<register_value,1,10>::value |
         make_mask<register_value,2,8>::value  | make_mask<register_value,1,7>::value  | make_mask<register_value,3,4>::value  | make_mask<register_value,1,3>::value |
         make_mask<register_value,1,2>::value  | make_mask<register_value,2,0>::value),
        (make_mask<register_value,1,15>::value | make_mask<register_value,3,12>::value | make_mask<register_value,1,11>::value | make_mask<register_value,1,10>::value |
         make_mask<register_value,2,8>::value  | make_mask<register_value,1,7>::value  | make_mask<register_value,3,4>::value  | make_mask<register_value,1,3>::value |
         make_mask<register_value,1,2>::value  | make_mask<register_value,2,0>::value)>
    ccmr1; // 0x18

    // CCMR2_Output / CCMR2_Input (0x1C)
    register_t<register_policy::mW,
        (make_mask<register_value,1,15>::value | make_mask<register_value,3,12>::value | make_mask<register_value,1,11>::value | make_mask<register_value,1,10>::value |
         make_mask<register_value,2,8>::value  | make_mask<register_value,1,7>::value  | make_mask<register_value,3,4>::value  | make_mask<register_value,1,3>::value |
         make_mask<register_value,1,2>::value  | make_mask<register_value,2,0>::value),
        (make_mask<register_value,1,15>::value | make_mask<register_value,3,12>::value | make_mask<register_value,1,11>::value | make_mask<register_value,1,10>::value |
         make_mask<register_value,2,8>::value  | make_mask<register_value,1,7>::value  | make_mask<register_value,3,4>::value  | make_mask<register_value,1,3>::value |
         make_mask<register_value,1,2>::value  | make_mask<register_value,2,0>::value)>
    ccmr2; // 0x1C

    // CCER (0x20)
    register_t<register_policy::mW,
        (make_mask<register_value,1,13>::value | make_mask<register_value,1,12>::value | make_mask<register_value,1,11>::value | make_mask<register_value,1,10>::value |
         make_mask<register_value,1,9>::value  | make_mask<register_value,1,8>::value  | make_mask<register_value,1,7>::value  | make_mask<register_value,1,6>::value |
         make_mask<register_value,1,5>::value  | make_mask<register_value,1,4>::value  | make_mask<register_value,1,3>::value  | make_mask<register_value,1,2>::value |
         make_mask<register_value,1,1>::value  | make_mask<register_value,1,0>::value),
        (make_mask<register_value,1,13>::value | make_mask<register_value,1,12>::value | make_mask<register_value,1,11>::value | make_mask<register_value,1,10>::value |
         make_mask<register_value,1,9>::value  | make_mask<register_value,1,8>::value  | make_mask<register_value,1,7>::value  | make_mask<register_value,1,6>::value |
         make_mask<register_value,1,5>::value  | make_mask<register_value,1,4>::value  | make_mask<register_value,1,3>::value  | make_mask<register_value,1,2>::value |
         make_mask<register_value,1,1>::value  | make_mask<register_value,1,0>::value)>
    ccer; // 0x20

    // CNT (0x24)
    register_t<register_policy::mW,
        make_mask<register_value,16,0>::value,
        make_mask<register_value,16,0>::value>
    cnt; // 0x24

    // PSC (0x28)
    register_t<register_policy::mW,
        make_mask<register_value,16,0>::value,
        make_mask<register_value,16,0>::value>
    psc; // 0x28

    // ARR (0x2C)
    register_t<register_policy::mW,
        make_mask<register_value,16,0>::value,
        make_mask<register_value,16,0>::value>
    arr; // 0x2C

    // CCR1..CCR4 (0x34,0x38,0x3C,0x40)
    register_t<register_policy::mW, make_mask<register_value,16,0>::value, make_mask<register_value,16,0>::value> ccr1; // 0x34
    register_t<register_policy::mW, make_mask<register_value,16,0>::value, make_mask<register_value,16,0>::value> ccr2; // 0x38
    register_t<register_policy::mW, make_mask<register_value,16,0>::value, make_mask<register_value,16,0>::value> ccr3; // 0x3C
    register_t<register_policy::mW, make_mask<register_value,16,0>::value, make_mask<register_value,16,0>::value> ccr4; // 0x40

    // Field type aliases (where meaningful) - leave specifics to consumer
    // For many TIM fields there are enums; generator can create them if desired.
};

struct tim1_impl : tim1_regs {
    // minimal wrapper - keep as simple struct to match HGETL style
protected:
    ~tim1_impl();
};
