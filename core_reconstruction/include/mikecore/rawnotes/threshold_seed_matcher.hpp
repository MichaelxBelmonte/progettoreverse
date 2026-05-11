#pragma once

#include "mikecore/rawnotes/raw_note_separation.hpp"

#include <cstddef>
#include <span>
#include <vector>

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
    inline constexpr std::size_t raw_note_peer_index_not_found =
        static_cast<std::size_t>(-1);

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

    struct Class1PeerPostprocessPlan final
    {
        bool processed = false;
        bool existing_peer = false;
        bool synthetic_peer = false;
        bool peer_index_resolved = false;
        std::size_t search_start_index = 0;
        std::size_t peer_index = raw_note_peer_index_not_found;
        RawNoteSeparation synthetic_peer_value{};
        std::vector<std::size_t> cleanup_original_indices;
    };

    struct Class1PeerPostprocessSequencePlan final
    {
        std::vector<Class1PeerPostprocessPlan> plans;
        std::size_t processed_count = 0;
        std::size_t existing_peer_count = 0;
        std::size_t synthetic_peer_count = 0;
        std::size_t unresolved_peer_count = 0;
        std::size_t final_search_index = 0;
        bool stopped_on_unresolved_peer = false;
    };

    struct PeerPostprocessSequenceResult final
    {
        std::size_t processed_count = 0;
    };

    struct Class2ThresholdSeededPipelineResult final
    {
        ThresholdSeedMatcherSequenceResult matcher;
        PeerPostprocessSequenceResult postprocess;
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

    [[nodiscard]] Class2ThresholdSeededPipelineResult
    run_class2_threshold_seeded_pipeline(
        std::span<RawNoteSeparation> current_items,
        std::span<RawNoteSeparation> candidates,
        float threshold_seed,
        double window_radius,
        double global_end) noexcept;

    bool apply_class2_selected_peer_postprocess(
        RawNoteSeparation& current) noexcept;

    PeerPostprocessSequenceResult apply_class2_selected_peer_postprocess_sequence(
        std::span<RawNoteSeparation> current_items) noexcept;

    bool apply_class1_existing_peer_postprocess(
        RawNoteSeparation& current) noexcept;

    [[nodiscard]] bool peer_cleanup_candidate_is_unclaimed(
        const RawNoteSeparation& peer) noexcept;

    [[nodiscard]] std::size_t find_auxiliary_peer_index(
        std::span<const RawNoteSeparation> auxiliary_peers,
        const RawNoteSeparation* peer) noexcept;

    [[nodiscard]] std::size_t class1_synthetic_peer_insertion_index(
        std::span<const RawNoteSeparation> auxiliary_peers,
        const RawNoteSeparation& current) noexcept;

    [[nodiscard]] std::size_t class1_synthetic_peer_insertion_index(
        std::span<const RawNoteSeparation> auxiliary_peers,
        const RawNoteSeparation& current,
        std::size_t first_search_index) noexcept;

    [[nodiscard]] std::vector<std::size_t> collect_class1_peer_cleanup_indices(
        std::span<const RawNoteSeparation> auxiliary_peers,
        std::size_t first_original_index,
        double current_end);

    [[nodiscard]] Class1PeerPostprocessPlan plan_class1_peer_postprocess(
        const RawNoteSeparation& current,
        std::span<const RawNoteSeparation> auxiliary_peers);

    [[nodiscard]] Class1PeerPostprocessPlan plan_class1_peer_postprocess(
        const RawNoteSeparation& current,
        std::span<const RawNoteSeparation> auxiliary_peers,
        std::size_t first_search_index);

    [[nodiscard]] Class1PeerPostprocessSequencePlan
    plan_class1_peer_postprocess_sequence(
        std::span<const RawNoteSeparation> current_items,
        std::span<const RawNoteSeparation> auxiliary_peers,
        std::size_t first_search_index = 0);
}
