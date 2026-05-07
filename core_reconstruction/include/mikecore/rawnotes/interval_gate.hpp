#pragma once

#include "mikecore/rawnotes/raw_note_separation.hpp"

namespace mikecore::rawnotes
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90 for the closed scalar/predicate
     * pieces of 014a3900 / 014a42b0.
     *
     * This module intentionally does not implement list mutation, gap-ranking,
     * or the full 014a42b0 selection loop: several constants and ownership
     * edges remain outside the clean-room gate.
     *
     * Reverse refs:
     * - docs/36_INTERVAL_GATE_MODEL_014A3900_014A42B0.md
     * - docs/37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md
     */

    inline constexpr float raw_note_arbitration_score_target = 1.0f;
    inline constexpr std::uint32_t raw_note_interval_peak_gate_mask =
        raw_note_base_class_1 |
        raw_note_base_class_2 |
        raw_note_observed_flag_0x10 |
        raw_note_selected_by_class2;

    struct PairArbitrationMergePlan final
    {
        // In 014a3900 the <= branch keeps the second object as merge destination.
        // This is branch direction, not a musical "winner" label.
        bool merge_first_into_second = false;
    };

    [[nodiscard]] float raw_note_pair_arbitration_cost(
        const RawNoteSeparation& note) noexcept;

    [[nodiscard]] PairArbitrationMergePlan plan_pair_arbitration_merge(
        const RawNoteSeparation& first,
        const RawNoteSeparation& second) noexcept;

    [[nodiscard]] bool adjacent_pair_passes_class_gap(
        const RawNoteSeparation& first,
        const RawNoteSeparation& second,
        double class1_to_class2_max_start_delta,
        double class2_to_class1_max_start_delta) noexcept;

    [[nodiscard]] bool adjacent_pair_has_no_closer_competing_third(
        const RawNoteSeparation& first,
        const RawNoteSeparation& second,
        const RawNoteSeparation* third) noexcept;

    [[nodiscard]] bool adjacent_pair_is_arbitration_eligible(
        const RawNoteSeparation& first,
        const RawNoteSeparation& second,
        const RawNoteSeparation* third,
        double class1_to_class2_max_start_delta,
        double class2_to_class1_max_start_delta) noexcept;

    void merge_raw_note_max_fields(
        RawNoteSeparation& destination,
        const RawNoteSeparation& source) noexcept;

    [[nodiscard]] bool passes_interval_peak_gate(
        const RawNoteSeparation& note,
        float base_gate_threshold,
        float peak_gate_threshold) noexcept;

    [[nodiscard]] bool passes_class8_base_gate(
        const RawNoteSeparation& note,
        float class8_base_gate_threshold) noexcept;
}
