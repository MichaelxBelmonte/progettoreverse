#include "mikecore/rawnotes/interval_gate.hpp"

#include <algorithm>
#include <cmath>

namespace mikecore::rawnotes
{
    float raw_note_pair_arbitration_cost(
        const RawNoteSeparation& note) noexcept
    {
        const float score_delta = raw_note_arbitration_score_target - note.score_like_scalar;
        return score_delta *
               score_delta *
               note.base_gate_strength *
               note.non_class1_ranking_weight;
    }

    PairArbitrationMergePlan plan_pair_arbitration_merge(
        const RawNoteSeparation& first,
        const RawNoteSeparation& second) noexcept
    {
        PairArbitrationMergePlan plan{};
        plan.merge_first_into_second =
            raw_note_pair_arbitration_cost(first) <= raw_note_pair_arbitration_cost(second);
        return plan;
    }

    bool adjacent_pair_passes_class_gap(
        const RawNoteSeparation& first,
        const RawNoteSeparation& second,
        double class1_to_class2_max_start_delta,
        double class2_to_class1_max_start_delta) noexcept
    {
        const double start_delta = second.interval_start - first.interval_start;
        if (first.matches_class_code(raw_note_base_class_1) &&
            second.matches_class_code(raw_note_base_class_2)) {
            return start_delta < class1_to_class2_max_start_delta;
        }

        if (first.matches_class_code(raw_note_base_class_2) &&
            second.matches_class_code(raw_note_base_class_1)) {
            return start_delta < class2_to_class1_max_start_delta;
        }

        return false;
    }

    bool adjacent_pair_has_no_closer_competing_third(
        const RawNoteSeparation& first,
        const RawNoteSeparation& second,
        const RawNoteSeparation* third) noexcept
    {
        if (third == nullptr) {
            return true;
        }

        if (second.class_state_flags == third->class_state_flags) {
            return true;
        }

        return second.interval_start - first.interval_start <=
               third->interval_start - second.interval_start;
    }

    bool adjacent_pair_is_arbitration_eligible(
        const RawNoteSeparation& first,
        const RawNoteSeparation& second,
        const RawNoteSeparation* third,
        double class1_to_class2_max_start_delta,
        double class2_to_class1_max_start_delta) noexcept
    {
        return adjacent_pair_passes_class_gap(
                   first,
                   second,
                   class1_to_class2_max_start_delta,
                   class2_to_class1_max_start_delta) &&
               adjacent_pair_has_no_closer_competing_third(first, second, third);
    }

    void merge_raw_note_max_fields(
        RawNoteSeparation& destination,
        const RawNoteSeparation& source) noexcept
    {
        destination.base_gate_strength =
            std::max(destination.base_gate_strength, source.base_gate_strength);
        destination.score_like_scalar =
            std::max(destination.score_like_scalar, source.score_like_scalar);
        destination.non_class1_ranking_weight =
            std::max(destination.non_class1_ranking_weight, source.non_class1_ranking_weight);
        destination.class1_ranking_weight =
            std::max(destination.class1_ranking_weight, source.class1_ranking_weight);
        destination.local_smoothed_peak_gate_a =
            std::max(destination.local_smoothed_peak_gate_a, source.local_smoothed_peak_gate_a);
        destination.local_smoothed_peak_gate_b =
            std::max(destination.local_smoothed_peak_gate_b, source.local_smoothed_peak_gate_b);
        destination.class_state_flags |= source.class_state_flags;
    }

    bool passes_interval_peak_gate(
        const RawNoteSeparation& note,
        float base_gate_threshold,
        float peak_gate_threshold) noexcept
    {
        return (note.class_state_flags & raw_note_interval_peak_gate_mask) != 0 &&
               base_gate_threshold < note.base_gate_strength &&
               (peak_gate_threshold < note.local_smoothed_peak_gate_a ||
                peak_gate_threshold < note.local_smoothed_peak_gate_b);
    }

    bool passes_class8_base_gate(
        const RawNoteSeparation& note,
        float class8_base_gate_threshold) noexcept
    {
        return note.class_state_flags == raw_note_observed_flag_0x8 &&
               class8_base_gate_threshold < note.base_gate_strength;
    }

    bool passes_primary_gap_candidate_gate(
        const RawNoteSeparation& note,
        bool include_class8_candidates,
        float base_gate_threshold,
        float peak_gate_threshold,
        float class8_base_gate_threshold) noexcept
    {
        if (passes_interval_peak_gate(
                note,
                base_gate_threshold,
                peak_gate_threshold)) {
            return true;
        }

        return include_class8_candidates &&
               passes_class8_base_gate(note, class8_base_gate_threshold);
    }

    float raw_note_gap_selection_exponent(
        float minimum_score_threshold) noexcept
    {
        return std::min(
            raw_note_gap_score_cap,
            std::pow(
                raw_note_gap_score_base_multiplier * minimum_score_threshold,
                raw_note_gap_score_exponent_power));
    }

    double raw_note_gap_span(
        const RawNoteSeparation& note,
        const RawNoteGapBoundary& boundary) noexcept
    {
        const double left_boundary =
            boundary.previous != nullptr ? boundary.previous->interval_start
                                         : boundary.left_fallback;
        const double right_boundary =
            boundary.next != nullptr ? boundary.next->interval_end
                                     : boundary.right_fallback;

        const double left_span = note.interval_end - left_boundary;
        const double right_span = right_boundary - note.interval_start;
        return std::min(left_span, right_span);
    }

    float raw_note_gap_score(
        const RawNoteSeparation& note,
        double gap_span,
        float selection_exponent,
        float class8_extra_scale) noexcept
    {
        const double scaled_gap = gap_span * raw_note_gap_scale;
        const float gap_weight =
            scaled_gap >= 1.0
                ? raw_note_gap_score_cap
                : static_cast<float>(std::pow(scaled_gap, selection_exponent));

        float score = gap_weight * note.base_gate_strength;
        if (note.class_state_flags == raw_note_observed_flag_0x8) {
            score *= class8_extra_scale;
        }
        return score;
    }

    float raw_note_gap_insert_threshold(
        const RawNoteSeparation& note,
        float non_class8_min_gap,
        float class8_min_gap) noexcept
    {
        return note.class_state_flags == raw_note_observed_flag_0x8
                   ? class8_min_gap
                   : non_class8_min_gap;
    }

    bool raw_note_gap_insertable(
        const RawNoteSeparation& note,
        const RawNoteGapBoundary& boundary,
        float non_class8_min_gap,
        float class8_min_gap) noexcept
    {
        const double gap_span = raw_note_gap_span(note, boundary);
        const double threshold = raw_note_gap_insert_threshold(
            note,
            non_class8_min_gap,
            class8_min_gap);
        return threshold < gap_span;
    }

    std::size_t raw_note_gap_insertion_index(
        std::span<const RawNoteSeparation> selected,
        const RawNoteSeparation& candidate) noexcept
    {
        std::size_t index = 0;
        while (index < selected.size() &&
               selected[index].interval_start < candidate.interval_start) {
            ++index;
        }
        return index;
    }

    RawNoteGapBoundary raw_note_gap_boundary_at(
        std::span<const RawNoteSeparation> selected,
        std::size_t insertion_index,
        double right_fallback) noexcept
    {
        RawNoteGapBoundary boundary{};
        boundary.right_fallback = right_fallback;

        if (insertion_index > 0 && insertion_index <= selected.size()) {
            boundary.previous = &selected[insertion_index - 1];
        }

        if (insertion_index < selected.size()) {
            boundary.next = &selected[insertion_index];
        }

        return boundary;
    }

    RawNoteGapCandidateChoice choose_raw_note_gap_candidate(
        std::span<const RawNoteSeparation> candidates,
        std::span<const RawNoteSeparation> selected,
        float minimum_score_threshold,
        float non_class8_min_gap,
        float class8_min_gap,
        float class8_extra_scale,
        double right_fallback) noexcept
    {
        RawNoteGapCandidateChoice choice{};
        float best_score = minimum_score_threshold;
        const float selection_exponent =
            raw_note_gap_selection_exponent(minimum_score_threshold);

        for (std::size_t index = 0; index < candidates.size(); ++index) {
            const RawNoteSeparation& candidate = candidates[index];
            const std::size_t insertion_index =
                raw_note_gap_insertion_index(selected, candidate);
            const RawNoteGapBoundary boundary =
                raw_note_gap_boundary_at(selected, insertion_index, right_fallback);
            const double gap_span = raw_note_gap_span(candidate, boundary);
            const float score = raw_note_gap_score(
                candidate,
                gap_span,
                selection_exponent,
                class8_extra_scale);

            if (best_score < score && minimum_score_threshold < score) {
                best_score = score;
                choice.found = true;
                choice.candidate_index = index;
                choice.insertion_index = insertion_index;
                choice.score = score;
                choice.gap_span = gap_span;
            }
        }

        if (choice.found) {
            const RawNoteSeparation& candidate = candidates[choice.candidate_index];
            const RawNoteGapBoundary boundary = raw_note_gap_boundary_at(
                selected,
                choice.insertion_index,
                right_fallback);
            choice.gap_span = raw_note_gap_span(candidate, boundary);
            choice.insertable = raw_note_gap_insertable(
                candidate,
                boundary,
                non_class8_min_gap,
                class8_min_gap);
        }

        return choice;
    }
}
