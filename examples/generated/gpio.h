#pragma once
#include <cstdint>

// Generated from peripheral: GPIOH
namespace GPIOH {

constexpr std::uint32_t BASE = 0x40021C00;

 // MODER (GPIO port mode register)
constexpr std::uint32_t MODER_OFFSET = 0x0;
constexpr std::uint32_t MODER = BASE + MODER_OFFSET;
constexpr std::uint32_t MODER_MODER15_Pos = 30u;
constexpr std::uint32_t MODER_MODER15_Mask = 0xc0000000u;
constexpr std::uint32_t MODER_MODER14_Pos = 28u;
constexpr std::uint32_t MODER_MODER14_Mask = 0x30000000u;
constexpr std::uint32_t MODER_MODER13_Pos = 26u;
constexpr std::uint32_t MODER_MODER13_Mask = 0x0c000000u;
// ... weitere Felder

 // OTYPER (GPIO port output type register)
constexpr std::uint32_t OTYPER_OFFSET = 0x4;
constexpr std::uint32_t OTYPER = BASE + OTYPER_OFFSET;
constexpr std::uint32_t OTYPER_OT15_Pos = 15u;
constexpr std::uint32_t OTYPER_OT15_Mask = 0x00008000u;
// ... usw.

} // namespace GPIOH
