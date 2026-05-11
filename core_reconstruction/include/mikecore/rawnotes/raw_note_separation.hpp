#pragma once

#include <cstdint>

namespace mikecore::rawnotes
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90
     * Reverse refs:
     * - docs/37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md
     * - docs/49_THRESHOLD_SEEDED_RAW_NOTE_MATCHER_014AF180.md
     * - docs/50_CLASSCODE_1_VS_2_MATCHER_PATH_01484BC0_014AF180.md
     *
     * Only fields and state bits already closed with high confidence are exposed.
     */

    inline constexpr std::uint32_t raw_note_base_class_1 = 0x1;
    inline constexpr std::uint32_t raw_note_base_class_2 = 0x2;
    inline constexpr std::uint32_t raw_note_observed_flag_0x8 = 0x8;
    inline constexpr std::uint32_t raw_note_observed_flag_0x10 = 0x10;
    inline constexpr std::uint32_t raw_note_selected_by_class2 = 0x20;
    inline constexpr std::uint32_t raw_note_selected_or_materialized_by_class1 = 0x40;
    inline constexpr std::uint32_t raw_note_peer_claim_mask =
        raw_note_observed_flag_0x10 |
        raw_note_selected_by_class2 |
        raw_note_selected_or_materialized_by_class1;
    inline constexpr float raw_note_synthetic_peer_base_strength = 1.0f;

    struct RawNoteSeparation final
    {
        double interval_start = 0.0;
        double interval_end = 0.0;

        float base_gate_strength = 0.0f;
        float absorbed_class2_base_strength = 0.0f;
        float score_like_scalar = 0.0f;
        float non_class1_ranking_weight = 0.0f;
        float class1_ranking_weight = 0.0f;
        float local_smoothed_peak_gate_a = 0.0f;
        float local_smoothed_peak_gate_b = 0.0f;

        std::uint32_t class_state_flags = 0;
        RawNoteSeparation* selected_match = nullptr;

        [[nodiscard]] bool has_any_flag(std::uint32_t mask) const noexcept
        {
            return (class_state_flags & mask) != 0;
        }

        [[nodiscard]] bool matches_class_code(std::uint32_t class_code) const noexcept
        {
            return class_state_flags == class_code;
        }
    };

    [[nodiscard]] inline RawNoteSeparation make_raw_note_separation(
        double start,
        float base_gate_strength,
        std::uint32_t class_state_flags) noexcept
    {
        RawNoteSeparation note{};
        note.interval_start = start;
        note.interval_end = start;
        note.base_gate_strength = base_gate_strength;
        note.class_state_flags = class_state_flags;
        return note;
    }

    [[nodiscard]] inline RawNoteSeparation clone_raw_note_separation(
        const RawNoteSeparation& source) noexcept
    {
        return source;
    }

    [[nodiscard]] inline RawNoteSeparation make_synthetic_class1_peer(
        const RawNoteSeparation& current) noexcept
    {
        return make_raw_note_separation(
            current.interval_start,
            raw_note_synthetic_peer_base_strength,
            raw_note_selected_or_materialized_by_class1);
    }
}
