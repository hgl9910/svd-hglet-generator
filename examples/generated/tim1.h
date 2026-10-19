#pragma once
#include <cstdint>

// Generated from peripheral: TIM1
namespace TIM1 {

constexpr std::uint32_t BASE = 0x40010000u;

// CR1 (control register 1) - offset 0x00
constexpr std::uint32_t CR1_OFFSET = 0x0u;
constexpr std::uint32_t CR1 = BASE + CR1_OFFSET;
constexpr std::uint32_t CR1_CKD_Pos = 8u;
constexpr std::uint32_t CR1_CKD_Mask = 0x300u; // 2 bits at pos 8
constexpr std::uint32_t CR1_ARPE_Pos = 7u;
constexpr std::uint32_t CR1_ARPE_Mask = 0x80u;
constexpr std::uint32_t CR1_CMS_Pos = 5u;
constexpr std::uint32_t CR1_CMS_Mask = 0x60u; // 2 bits at pos 5
constexpr std::uint32_t CR1_DIR_Pos = 4u;
constexpr std::uint32_t CR1_DIR_Mask = 0x10u;
constexpr std::uint32_t CR1_OPM_Pos = 3u;
constexpr std::uint32_t CR1_OPM_Mask = 0x8u;
constexpr std::uint32_t CR1_URS_Pos = 2u;
constexpr std::uint32_t CR1_URS_Mask = 0x4u;
constexpr std::uint32_t CR1_UDIS_Pos = 1u;
constexpr std::uint32_t CR1_UDIS_Mask = 0x2u;
constexpr std::uint32_t CR1_CEN_Pos = 0u;
constexpr std::uint32_t CR1_CEN_Mask = 0x1u;

// CR2 (control register 2) - offset 0x04
constexpr std::uint32_t CR2_OFFSET = 0x4u;
constexpr std::uint32_t CR2 = BASE + CR2_OFFSET;

// SMCR - offset 0x08
constexpr std::uint32_t SMCR_OFFSET = 0x8u;
constexpr std::uint32_t SMCR = BASE + SMCR_OFFSET;

// DIER - DMA/Interrupt enable register - offset 0x0C
constexpr std::uint32_t DIER_OFFSET = 0xCu;
constexpr std::uint32_t DIER = BASE + DIER_OFFSET;

// SR - status register - offset 0x10
constexpr std::uint32_t SR_OFFSET = 0x10u;
constexpr std::uint32_t SR = BASE + SR_OFFSET;

// EGR - event generation register - offset 0x14
constexpr std::uint32_t EGR_OFFSET = 0x14u;
constexpr std::uint32_t EGR = BASE + EGR_OFFSET;

// CCMR1 (output) - offset 0x18
constexpr std::uint32_t CCMR1_OFFSET = 0x18u;
constexpr std::uint32_t CCMR1 = BASE + CCMR1_OFFSET;

// CCER - capture/compare enable register - offset 0x20
constexpr std::uint32_t CCER_OFFSET = 0x20u;
constexpr std::uint32_t CCER = BASE + CCER_OFFSET;

// CNT - counter - offset 0x24
constexpr std::uint32_t CNT_OFFSET = 0x24u;
constexpr std::uint32_t CNT = BASE + CNT_OFFSET;
constexpr std::uint32_t CNT_Cnt_Pos = 0u;
constexpr std::uint32_t CNT_Cnt_Mask = 0xFFFFu;

// PSC - prescaler - offset 0x28
constexpr std::uint32_t PSC_OFFSET = 0x28u;
constexpr std::uint32_t PSC = BASE + PSC_OFFSET;
constexpr std::uint32_t PSC_PSC_Pos = 0u;
constexpr std::uint32_t PSC_PSC_Mask = 0xFFFFu;

// ARR - auto-reload - offset 0x2C
constexpr std::uint32_t ARR_OFFSET = 0x2Cu;
constexpr std::uint32_t ARR = BASE + ARR_OFFSET;
constexpr std::uint32_t ARR_ARR_Pos = 0u;
constexpr std::uint32_t ARR_ARR_Mask = 0xFFFFu;

// CCR1..CCR4 - capture/compare registers
constexpr std::uint32_t CCR1_OFFSET = 0x34u;
constexpr std::uint32_t CCR1 = BASE + CCR1_OFFSET;
constexpr std::uint32_t CCR1_CCR1_Pos = 0u;
constexpr std::uint32_t CCR1_CCR1_Mask = 0xFFFFu;

constexpr std::uint32_t CCR2_OFFSET = 0x38u;
constexpr std::uint32_t CCR2 = BASE + CCR2_OFFSET;
constexpr std::uint32_t CCR2_CCR2_Pos = 0u;
constexpr std::uint32_t CCR2_CCR2_Mask = 0xFFFFu;

constexpr std::uint32_t CCR3_OFFSET = 0x3Cu;
constexpr std::uint32_t CCR3 = BASE + CCR3_OFFSET;
constexpr std::uint32_t CCR3_CCR3_Pos = 0u;
constexpr std::uint32_t CCR3_CCR3_Mask = 0xFFFFu;

constexpr std::uint32_t CCR4_OFFSET = 0x40u;
constexpr std::uint32_t CCR4 = BASE + CCR4_OFFSET;
constexpr std::uint32_t CCR4_CCR4_Pos = 0u;
constexpr std::uint32_t CCR4_CCR4_Mask = 0xFFFFu;

} // namespace TIM1
