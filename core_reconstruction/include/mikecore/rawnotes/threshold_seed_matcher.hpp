#pragma once

#include "mikecore/rawnotes/raw_note_separation.hpp"

#include <cstddef>
#include <span>

namespace mikecore::rawnotes
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90
     * Reverse refs:
     * - docs/47_SPECTRAL_MEDIAN_CONSUMER_MAP_0149F6A0_01484BC0.md
     * - docs/49_THRESHOLD_SEEDED_RAW_NOTE_MATCHER_014AF180.md
     * - docs/50_CLASSCODE_1_VS_2_MATCHER_PATH_01484BC0_014AF180.md
     *
     * This module exposes only the verified contract of the matcher:
     * - class-code filter
     * - local time window derivation
     * - thresholdSeed gate on field +0x20
     * - caller-derived thresholdSeed formulas
     * - class-specific ranking weight selection
     * - best-candidate selection score
     * - link materialization into +0x40
     */

    inline constexpr double raw_note_match_window_midpoint_factor = 0.5;
    inline constexpr double raw_note_match_window_radius = 0.07;
    inline constexpr double raw_note_match_initial_best_score = -1000.0;
    inline constexpr float raw_note_threshold_seed_floor = 0.7f;
    inline constexpr float raw_note_threshold_seed_reference_scale = 0.3f;
    inline constexpr float raw_note_threshold_seed_bridge_scale = 0.5f;

    struct LocalMatchWindow final
    {
        double lower_time_bound = 0.0;
        double upper_time_bound = 0.0;
    };

    struct ThresholdSeedMatcherQuery final
    {
        std::uint32_t class_code = 0;
        float threshold_seed = 0.0f;
        double lower_time_bound = 0.0;
        double upper_time_bound = 0.0;
        double window_radius = raw_note_match_window_radius;
    };

    struct ThresholdSeedMatcherStep final
    {
        bool processed = false;
        bool matched = false;
        std::size_t current_index = 0;
        std::size_t candidate_index = 0;
    };

    struct ThresholdSeedMatcherSequenceResult final
    {
        std::size_t processed_count = 0;
        std::size_t matched_count = 0;
    };

    [[nodiscard]] float derive_direct_threshold_seed(
        float cached_spectral_reference) noexcept;

    [[nodiscard]] float derive_bridge_threshold_seed(
        float cached_spectral_reference) noexcept;

    [[nodiscard]] LocalMatchWindow derive_local_match_window(
        const RawNoteSeparation& current,
        const RawNoteSeparation* previous,
        double window_radius,
        double global_end) noexcept;

    [[nodiscard]] ThresholdSeedMatcherQuery make_threshold_seed_matcher_query(
        const RawNoteSeparation& current,
        const RawNoteSeparation* previous,
        std::uint32_t class_code,
        float threshold_seed,
        double global_end) noexcept;

    [[nodiscard]] ThresholdSeedMatcherQuery make_threshold_seed_matcher_query(
        const RawNoteSeparation& current,
        const RawNoteSeparation* previous,
        std::uint32_t class_code,
        float threshold_seed,
        double window_radius,
        double global_end) noexcept;

    [[nodiscard]] bool candidate_is_inside_window(
        const RawNoteSeparation& candidate,
        const ThresholdSeedMatcherQuery& query) noexcept;

    [[nodiscard]] bool candidate_passes_threshold_seed(
        const RawNoteSeparation& candidate,
        float threshold_seed) noexcept;

    [[nodiscard]] bool candidate_is_match_eligible(
        const RawNoteSeparation& candidate,
        const ThresholdSeedMatcherQuery& query) noexcept;

    [[nodiscard]] float class_specific_ranking_weight(
        const RawNoteSeparation& candidate,
        std::uint32_t class_code) noexcept;

    [[nodiscard]] double candidate_match_score(
        const RawNoteSeparation& current,
        const RawNoteSeparation& candidate,
        const ThresholdSeedMatcherQuery& query) noexcept;

    [[nodiscard]] RawNoteSeparation* select_best_candidate_match(
        const RawNoteSeparation& current,
        std::span<RawNoteSeparation> candidates,
        const ThresholdSeedMatcherQuery& query) noexcept;

    void materialize_selected_match(
        RawNoteSeparation& current,
        RawNoteSeparation* winner) noexcept;

    [[nodiscard]] ThresholdSeedMatcherStep match_threshold_seeded_item(
        std::span<RawNoteSeparation> current_items,
        std::size_t current_index,
        std::span<RawNoteSeparation> candidates,
        std::uint32_t class_code,
        float threshold_seed,
        double window_radius,
        double global_end) noexcept;

    [[nodiscard]] ThresholdSeedMatcherSequenceResult match_threshold_seeded_sequence(
        std::span<RawNoteSeparation> current_items,
        std::span<RawNoteSeparation> candidates,
        std::uint32_t class_code,
        float threshold_seed,
        double window_radius,
        double global_end) noexcept;
}
