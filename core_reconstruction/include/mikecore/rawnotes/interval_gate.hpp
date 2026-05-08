#pragma once

#include "mikecore/rawnotes/raw_note_separation.hpp"

#include <cstddef>
#include <span>
#include <vector>

namespace mikecore::rawnotes
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90 for the closed scalar/predicate
     * pieces of 014a3900 / 014a42b0.
     *
     * This module intentionally does not implement GNList mutation/refcount or
     * the full 014a42b0 selection loop. The closed gap-ranking scalar helpers
     * are exposed separately so callers can keep list ownership out-of-band.
     *
     * Reverse refs:
     * - docs/36_INTERVAL_GATE_MODEL_014A3900_014A42B0.md
     * - docs/37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md
     */

    inline constexpr float raw_note_arbitration_score_target = 1.0f;
    inline constexpr float raw_note_gap_score_base_multiplier = 10.0f;
    inline constexpr float raw_note_gap_score_exponent_power = 0.30000001192092896f;
    inline constexpr float raw_note_gap_score_cap = 1.0f;
    inline constexpr double raw_note_gap_left_fallback = -0.699999988079071;
    inline constexpr double raw_note_gap_scale = 1.4285714626312256;
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

    struct RawNoteGapBoundary final
    {
        const RawNoteSeparation* previous = nullptr;
        const RawNoteSeparation* next = nullptr;
        double left_fallback = raw_note_gap_left_fallback;
        double right_fallback = 0.0;
    };

    struct RawNoteGapCandidateChoice final
    {
        bool found = false;
        bool insertable = false;
        std::size_t candidate_index = 0;
        std::size_t insertion_index = 0;
        float score = 0.0f;
        double gap_span = 0.0;
    };

    struct RawNoteGapSelectionStep final
    {
        bool inserted = false;
        std::size_t original_candidate_index = 0;
        std::size_t remaining_candidate_index = 0;
        std::size_t insertion_index = 0;
        float score = 0.0f;
        double gap_span = 0.0;
    };

    struct RawNoteGapSelectionPlan final
    {
        std::vector<RawNoteGapSelectionStep> steps;
        std::vector<RawNoteSeparation> selected;
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

    [[nodiscard]] bool passes_primary_gap_candidate_gate(
        const RawNoteSeparation& note,
        bool include_class8_candidates,
        float base_gate_threshold,
        float peak_gate_threshold,
        float class8_base_gate_threshold) noexcept;

    [[nodiscard]] float raw_note_gap_selection_exponent(
        float minimum_score_threshold) noexcept;

    [[nodiscard]] double raw_note_gap_span(
        const RawNoteSeparation& note,
        const RawNoteGapBoundary& boundary) noexcept;

    [[nodiscard]] float raw_note_gap_score(
        const RawNoteSeparation& note,
        double gap_span,
        float selection_exponent,
        float class8_extra_scale) noexcept;

    [[nodiscard]] float raw_note_gap_insert_threshold(
        const RawNoteSeparation& note,
        float non_class8_min_gap,
        float class8_min_gap) noexcept;

    [[nodiscard]] bool raw_note_gap_insertable(
        const RawNoteSeparation& note,
        const RawNoteGapBoundary& boundary,
        float non_class8_min_gap,
        float class8_min_gap) noexcept;

    [[nodiscard]] std::size_t raw_note_gap_insertion_index(
        std::span<const RawNoteSeparation> selected,
        const RawNoteSeparation& candidate) noexcept;

    [[nodiscard]] RawNoteGapBoundary raw_note_gap_boundary_at(
        std::span<const RawNoteSeparation> selected,
        std::size_t insertion_index,
        double right_fallback) noexcept;

    [[nodiscard]] RawNoteGapCandidateChoice choose_raw_note_gap_candidate(
        std::span<const RawNoteSeparation> candidates,
        std::span<const RawNoteSeparation> selected,
        float minimum_score_threshold,
        float non_class8_min_gap,
        float class8_min_gap,
        float class8_extra_scale,
        double right_fallback) noexcept;

    [[nodiscard]] RawNoteGapSelectionPlan plan_raw_note_gap_selection(
        std::span<const RawNoteSeparation> candidates,
        std::span<const RawNoteSeparation> initially_selected,
        float minimum_score_threshold,
        float non_class8_min_gap,
        float class8_min_gap,
        float class8_extra_scale,
        double right_fallback);
}
