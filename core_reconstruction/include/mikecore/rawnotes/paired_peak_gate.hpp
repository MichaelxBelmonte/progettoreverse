#pragma once

#include "mikecore/rawnotes/raw_note_separation.hpp"

#include <cstddef>
#include <span>

namespace mikecore::rawnotes
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90 for the paired peak-gate kernel
     * inside 014a3550. This module intentionally does not implement the full
     * metric writer, because +0x2c/+0x30 remain lower-confidence names.
     *
     * Reverse refs:
     * - docs/36_INTERVAL_GATE_MODEL_014A3900_014A42B0.md
     * - docs/37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md
     */

    inline constexpr float paired_peak_gate_smoothing_factor = 0.5f;

    struct PairedPeakGateState final
    {
        float lane_a = 0.0f;
        float lane_b = 0.0f;
    };

    struct PairedPeakGateResult final
    {
        float peak_a = 0.0f;
        float peak_b = 0.0f;
    };

    [[nodiscard]] PairedPeakGateState advance_paired_peak_gate_state(
        PairedPeakGateState state,
        float sample_a,
        float sample_b) noexcept;

    [[nodiscard]] PairedPeakGateState advance_paired_peak_gate_state_over_range(
        std::span<const float> lane_a,
        std::span<const float> lane_b,
        std::size_t begin_index,
        std::size_t end_index,
        PairedPeakGateState initial_state = {}) noexcept;

    [[nodiscard]] PairedPeakGateResult accumulate_paired_peak_gates(
        std::span<const float> lane_a,
        std::span<const float> lane_b,
        std::size_t begin_index,
        std::size_t end_index,
        PairedPeakGateState initial_state = {}) noexcept;

    void apply_paired_peak_gates(
        RawNoteSeparation& note,
        const PairedPeakGateResult& gates) noexcept;
}
