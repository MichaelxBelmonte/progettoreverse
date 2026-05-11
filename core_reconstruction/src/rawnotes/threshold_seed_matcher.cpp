#include "mikecore/rawnotes/threshold_seed_matcher.hpp"

#include <algorithm>
#include <cmath>

namespace mikecore::rawnotes
{
    float derive_direct_threshold_seed(float cached_spectral_reference) noexcept
    {
        return std::max(
            raw_note_threshold_seed_floor,
            cached_spectral_reference * raw_note_threshold_seed_reference_scale);
    }

    float derive_bridge_threshold_seed(float cached_spectral_reference) noexcept
    {
        return derive_direct_threshold_seed(cached_spectral_reference) *
               raw_note_threshold_seed_bridge_scale;
    }

    LocalMatchWindow derive_local_match_window(
        const RawNoteSeparation& current,
        const RawNoteSeparation* previous,
        double window_radius,
        double global_end) noexcept
    {
        LocalMatchWindow window{};

        const double current_start = current.interval_start;
        const double current_end = current.interval_end;

        window.lower_time_bound = std::max(0.0, current_start - window_radius);
        if (previous != nullptr) {
            const double previous_midpoint =
                (previous->interval_start + current_start) * raw_note_match_window_midpoint_factor;
            window.lower_time_bound = std::max(window.lower_time_bound, previous_midpoint);
        }

        const double midpoint_upper =
            (current_end + current_start) * raw_note_match_window_midpoint_factor;
        const double radius_upper = std::min(current_start + window_radius, global_end);
        window.upper_time_bound = std::min(midpoint_upper, radius_upper);

        return window;
    }

    ThresholdSeedMatcherQuery make_threshold_seed_matcher_query(
        const RawNoteSeparation& current,
        const RawNoteSeparation* previous,
        std::uint32_t class_code,
        float threshold_seed,
        double global_end) noexcept
    {
        return make_threshold_seed_matcher_query(
            current,
            previous,
            class_code,
            threshold_seed,
            raw_note_match_window_radius,
            global_end);
    }

    ThresholdSeedMatcherQuery make_threshold_seed_matcher_query(
        const RawNoteSeparation& current,
        const RawNoteSeparation* previous,
        std::uint32_t class_code,
        float threshold_seed,
        double window_radius,
        double global_end) noexcept
    {
        const LocalMatchWindow window = derive_local_match_window(
            current,
            previous,
            window_radius,
            global_end);

        ThresholdSeedMatcherQuery query{};
        query.class_code = class_code;
        query.threshold_seed = threshold_seed;
        query.lower_time_bound = window.lower_time_bound;
        query.upper_time_bound = window.upper_time_bound;
        query.window_radius = window_radius;
        return query;
    }

    bool candidate_is_inside_window(
        const RawNoteSeparation& candidate,
        const ThresholdSeedMatcherQuery& query) noexcept
    {
        return query.lower_time_bound < candidate.interval_start &&
               candidate.interval_start <= query.upper_time_bound;
    }

    bool candidate_passes_threshold_seed(
        const RawNoteSeparation& candidate,
        float threshold_seed) noexcept
    {
        return threshold_seed < candidate.base_gate_strength;
    }

    bool candidate_is_match_eligible(
        const RawNoteSeparation& candidate,
        const ThresholdSeedMatcherQuery& query) noexcept
    {
        return candidate.matches_class_code(query.class_code) &&
               candidate_is_inside_window(candidate, query) &&
               candidate_passes_threshold_seed(candidate, query.threshold_seed);
    }

    float class_specific_ranking_weight(
        const RawNoteSeparation& candidate,
        std::uint32_t class_code) noexcept
    {
        return class_code == raw_note_base_class_1
                   ? candidate.class1_ranking_weight
                   : candidate.non_class1_ranking_weight;
    }

    double candidate_match_score(
        const RawNoteSeparation& current,
        const RawNoteSeparation& candidate,
        const ThresholdSeedMatcherQuery& query) noexcept
    {
        if (query.window_radius <= 0.0) {
            return 0.0;
        }

        const double distance_weight =
            1.0 - (std::abs(current.interval_start - candidate.interval_start) /
                   query.window_radius);
        return distance_weight *
               static_cast<double>(class_specific_ranking_weight(candidate, query.class_code)) *
               static_cast<double>(candidate.base_gate_strength);
    }

    RawNoteSeparation* select_best_candidate_match(
        const RawNoteSeparation& current,
        std::span<RawNoteSeparation> candidates,
        const ThresholdSeedMatcherQuery& query) noexcept
    {
        RawNoteSeparation* winner = nullptr;
        double best_score = raw_note_match_initial_best_score;

        for (RawNoteSeparation& candidate : candidates) {
            if (!candidate_is_match_eligible(candidate, query)) {
                continue;
            }

            const double score = candidate_match_score(current, candidate, query);
            if (best_score < score) {
                best_score = score;
                winner = &candidate;
            }
        }

        return winner;
    }

    void materialize_selected_match(
        RawNoteSeparation& current,
        RawNoteSeparation* winner) noexcept
    {
        current.selected_match = winner;
    }

    ThresholdSeedMatcherStep match_threshold_seeded_item(
        std::span<RawNoteSeparation> current_items,
        std::size_t current_index,
        std::span<RawNoteSeparation> candidates,
        std::uint32_t class_code,
        float threshold_seed,
        double window_radius,
        double global_end) noexcept
    {
        ThresholdSeedMatcherStep step{};
        step.current_index = current_index;

        if (current_index >= current_items.size()) {
            return step;
        }

        RawNoteSeparation& current = current_items[current_index];
        if (!current.matches_class_code(class_code)) {
            return step;
        }

        const RawNoteSeparation* previous =
            current_index > 0 ? &current_items[current_index - 1] : nullptr;
        const ThresholdSeedMatcherQuery query = make_threshold_seed_matcher_query(
            current,
            previous,
            class_code,
            threshold_seed,
            window_radius,
            global_end);

        RawNoteSeparation* winner =
            select_best_candidate_match(current, candidates, query);
        materialize_selected_match(current, winner);

        step.processed = true;
        if (winner != nullptr) {
            step.matched = true;
            step.candidate_index =
                static_cast<std::size_t>(winner - candidates.data());
        }
        return step;
    }

    ThresholdSeedMatcherSequenceResult match_threshold_seeded_sequence(
        std::span<RawNoteSeparation> current_items,
        std::span<RawNoteSeparation> candidates,
        std::uint32_t class_code,
        float threshold_seed,
        double window_radius,
        double global_end) noexcept
    {
        ThresholdSeedMatcherSequenceResult result{};
        for (std::size_t index = 0; index < current_items.size(); ++index) {
            const ThresholdSeedMatcherStep step = match_threshold_seeded_item(
                current_items,
                index,
                candidates,
                class_code,
                threshold_seed,
                window_radius,
                global_end);

            if (step.processed) {
                ++result.processed_count;
            }
            if (step.matched) {
                ++result.matched_count;
            }
        }
        return result;
    }

    bool apply_class2_selected_peer_postprocess(
        RawNoteSeparation& current) noexcept
    {
        if (!current.matches_class_code(raw_note_base_class_2) ||
            current.selected_match == nullptr) {
            return false;
        }

        current.interval_start = current.selected_match->interval_start;
        current.selected_match->class_state_flags |= raw_note_selected_by_class2;
        return true;
    }

    bool apply_class1_existing_peer_postprocess(
        RawNoteSeparation& current) noexcept
    {
        if (!current.matches_class_code(raw_note_base_class_1) ||
            current.selected_match == nullptr) {
            return false;
        }

        current.interval_start = current.selected_match->interval_start;
        current.selected_match->class_state_flags |=
            raw_note_selected_or_materialized_by_class1;
        return true;
    }

    bool peer_cleanup_candidate_is_unclaimed(
        const RawNoteSeparation& peer) noexcept
    {
        return (peer.class_state_flags & raw_note_peer_claim_mask) == 0;
    }
}
