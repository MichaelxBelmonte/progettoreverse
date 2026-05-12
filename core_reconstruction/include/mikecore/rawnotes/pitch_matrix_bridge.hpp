#pragma once

#include <cstddef>
#include <span>
#include <vector>

namespace mikecore::rawnotes
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90 for the reset/link subset of
     * 014b3460 and the final scalar selection subset of 014b3ce0.
     *
     * This does not model GNList ownership, candidate-chain construction, or
     * the smoothing pass. It captures the closed lattice/link and bridge tail:
     * - reset local rank and adjacency fields for bounded rows
     * - link each peak to the nearest unclaimed next-row peak under 20 bins
     * - pick the peak with max +0x1c above the 0.4 floor
     * - convert pitch bin to Hz through exp2(pitchBin / 60) * 21.533203125
     * - emit the semantic equivalents of item +0x38 and item +0x30
     */

    inline constexpr float pitch_matrix_bridge_quality_floor = 0.4000000059604645f;
    inline constexpr float pitch_matrix_bridge_bins_per_octave = 60.0f;
    inline constexpr float pitch_matrix_bridge_base_frequency_hz = 21.533203125f;
    inline constexpr double pitch_matrix_bridge_chain_keep_ratio = 0.7;
    inline constexpr float pitch_matrix_bridge_failed_frequency = -1.0f;
    inline constexpr double pitch_matrix_bridge_failed_anchor_time = -1.0;
    inline constexpr int pitch_matrix_link_initial_max_distance_bins = 20;
    inline constexpr std::size_t pitch_matrix_bridge_no_index =
        static_cast<std::size_t>(-1);

    struct PitchMatrixPeak final
    {
        int row_index = 0;
        int pitch_bin_index = 0;
        int local_rank = 0;
        float primary_peak_value = 0.0f;
        float working_peak_quality = 0.0f;
        bool adjacency_claimed = false;
        std::size_t next_row_link_index = pitch_matrix_bridge_no_index;
        std::size_t previous_row_link_index = pitch_matrix_bridge_no_index;
    };

    struct PitchMatrixPeakRow final
    {
        std::span<PitchMatrixPeak> peaks;
    };

    struct PitchMatrixPeakLink final
    {
        std::size_t source_row = 0;
        std::size_t source_index = 0;
        std::size_t target_row = 0;
        std::size_t target_index = 0;
        int pitch_bin_distance = 0;
    };

    struct PitchMatrixPeakLinkPlan final
    {
        std::vector<PitchMatrixPeakLink> links;
    };

    struct PitchMatrixBridgeSelection final
    {
        bool matched = false;
        std::size_t peak_index = pitch_matrix_bridge_no_index;
        float selected_pitch_bin = 0.0f;
        float frequency_hz = pitch_matrix_bridge_failed_frequency;
        double anchor_time = pitch_matrix_bridge_failed_anchor_time;
    };

    [[nodiscard]] int pitch_matrix_bridge_minimum_chain_length(
        int max_chain_length,
        double keep_ratio = pitch_matrix_bridge_chain_keep_ratio) noexcept;

    [[nodiscard]] float pitch_matrix_bridge_frequency_from_pitch_bin(
        float pitch_bin) noexcept;

    void reset_pitch_matrix_peak_linkage(
        std::span<PitchMatrixPeakRow> rows,
        std::size_t row_count,
        std::size_t max_peaks_per_row) noexcept;

    [[nodiscard]] PitchMatrixPeakLinkPlan link_adjacent_pitch_matrix_peak_rows(
        std::span<PitchMatrixPeakRow> rows,
        std::size_t row_count,
        std::size_t max_peaks_per_row);

    [[nodiscard]] PitchMatrixBridgeSelection select_pitch_matrix_bridge_peak(
        std::span<const PitchMatrixPeak> chain,
        double time_step,
        bool average_pitch_bin) noexcept;
}
