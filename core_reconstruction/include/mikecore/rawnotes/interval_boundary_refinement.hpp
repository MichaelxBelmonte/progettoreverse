#pragma once

#include "mikecore/rawnotes/raw_note_separation.hpp"

#include <cstddef>
#include <span>

namespace mikecore::rawnotes
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90 for the scalar subset of
     * 014ab140 only.
     *
     * This does not model the original owner object or GNList traversal. The
     * safe subset covers the observed boundary choice:
     * - next linked peer end (+0x40 -> +0x18), when present
     * - otherwise the minimum signal sample in the inter-item gap, gated by
     *   the 0.01 second minimum gap.
     */

    inline constexpr double interval_boundary_min_signal_gap_seconds = 0.01;
    inline constexpr float interval_boundary_signal_min_high_sentinel = 1000.0f;

    struct NextIntervalBoundarySelection final
    {
        double boundary_time = 0.0;
        std::size_t sample_index = 0;
        bool used_linked_peer = false;
        bool used_signal_minimum = false;
    };

    struct RefinedIntervalRange final
    {
        double interval_start = 0.0;
        double interval_end = 0.0;
        double previous_boundary = 0.0;
        double next_boundary = 0.0;
        bool anchor_outside_range = false;
    };

    [[nodiscard]] NextIntervalBoundarySelection choose_next_interval_boundary(
        double current_interval_end,
        double next_interval_start,
        const RawNoteSeparation* next_linked_peer,
        std::span<const float> signal,
        double sample_rate,
        double minimum_signal_gap = interval_boundary_min_signal_gap_seconds) noexcept;

    [[nodiscard]] RefinedIntervalRange refine_interval_range(
        double interval_start,
        double interval_end,
        double anchor_time,
        double previous_boundary,
        double next_boundary) noexcept;
}
