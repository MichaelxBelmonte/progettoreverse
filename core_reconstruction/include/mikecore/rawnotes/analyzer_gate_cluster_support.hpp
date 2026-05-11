#pragma once

#include "mikecore/rawnotes/raw_note_separation.hpp"
#include "mikecore/runtime/analyzer_gate_cluster.hpp"

#include <optional>
#include <span>
#include <vector>

namespace mikecore::rawnotes
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90
     * Reverse refs:
     * - docs/48_ANALYZER_GATE_METRIC_CLUSTER_014A74B0_01484BC0.md
     * - data/analyzer_gate_metric_cluster_014a74b0_01484bc0.tsv
     * - docs/49_THRESHOLD_SEEDED_RAW_NOTE_MATCHER_014AF180.md
     *
     * This module exposes only the closed aggregate contracts:
     * - middle-value extraction after qsort-like ordering
     * - linked-field20 coverage ratio
     * - linked-field20 value collection through item->selected_match->base_gate_strength
     * - reverse-verified default scalar `DAT_02394254 = 0.01f`
     *
     * The +0xfc scalar remains intentionally outside.
     */

    inline constexpr float linked_field20_default_scalar = 0.01f;
    inline constexpr float linked_field20_empty_list_fallback = 0.01f;
    inline constexpr double energy_relevant_region_neighbor_gap_limit = 2.0;
    inline constexpr float energy_relevant_region_empty_fallback = 0.01f;

    struct LinkedField20Aggregates final
    {
        float middle_scalar = linked_field20_default_scalar;
        float coverage_ratio = linked_field20_empty_list_fallback;
    };

    [[nodiscard]] float middle_sorted_value_or_default(
        std::span<const float> values,
        float fallback = linked_field20_default_scalar) noexcept;

    [[nodiscard]] std::vector<float> collect_linked_field20_scalars(
        std::span<const RawNoteSeparation> items);

    [[nodiscard]] std::vector<float> collect_energy_relevant_region_ratios(
        std::span<const RawNoteSeparation> items,
        double neighbor_gap_limit = energy_relevant_region_neighbor_gap_limit);

    [[nodiscard]] float compute_energy_relevant_region_ratio(
        std::span<const RawNoteSeparation> items,
        double neighbor_gap_limit = energy_relevant_region_neighbor_gap_limit);

    [[nodiscard]] float linked_field20_coverage_ratio(
        std::span<const RawNoteSeparation> items) noexcept;

    [[nodiscard]] LinkedField20Aggregates compute_linked_field20_aggregates(
        std::span<const RawNoteSeparation> items) noexcept;

    [[nodiscard]] runtime::AnalyzerGateCluster compute_raw_note_analyzer_gate_cluster_subset(
        std::span<const RawNoteSeparation> items,
        double neighbor_gap_limit = energy_relevant_region_neighbor_gap_limit);
}
