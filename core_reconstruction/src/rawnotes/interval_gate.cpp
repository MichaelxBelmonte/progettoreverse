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
