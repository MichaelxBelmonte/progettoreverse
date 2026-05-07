#include "mikecore/rawnotes/interval_gate.hpp"

#include <algorithm>

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
}
