#pragma once

#include <array>
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
    inline constexpr float pitch_matrix_bridge_log2e = 1.4426950216293335f;
    inline constexpr float pitch_matrix_bridge_rounding_bias = 0.5f;
    inline constexpr double pitch_matrix_bridge_short_duration_seconds = 0.05;
    inline constexpr float pitch_matrix_bridge_quality_accept_floor = 0.6499999761581421f;
    inline constexpr float pitch_matrix_bridge_deviation_normalizer = -60.0f;
    inline constexpr float pitch_matrix_bridge_deviation_quality_scale = 0.10000000149011612f;
    inline constexpr double pitch_matrix_row_envelope_window_periods = 2.1;
    inline constexpr float pitch_matrix_center_distance_scale = -0.008333333767950535f;
    inline constexpr std::size_t pitch_matrix_quality_histogram_bin_count = 96;
    inline constexpr int pitch_matrix_quality_histogram_pitch_bins_per_slot = 5;
    inline constexpr float pitch_matrix_quality_histogram_offset = -0.5f;
    inline constexpr float pitch_matrix_quality_histogram_smoothing_width = 12.0f;
    inline constexpr float pitch_matrix_quality_histogram_bins_per_octave = 12.0f;
    inline constexpr float pitch_matrix_quality_histogram_half_height = 0.5f;
    inline constexpr float pitch_matrix_quality_histogram_focus_start_threshold =
        0.8999999761581421f;
    inline constexpr float pitch_matrix_quality_histogram_focus_threshold_step =
        -0.10000000149011612f;
    inline constexpr int pitch_matrix_quality_histogram_focus_min_width = 12;
    inline constexpr int pitch_matrix_quality_histogram_focus_max_width = 13;
    inline constexpr int pitch_matrix_quality_histogram_focus_fallback_radius = 6;
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

    struct PitchMatrixFrequencyFallbackResult final
    {
        std::size_t replaced_count = 0;
        float final_frequency_hz = 0.0f;
    };

    struct PitchMatrixWeightBaseResult final
    {
        bool valid = false;
        float log2_span = 0.0f;
        float weight_base = 0.0f;
    };

    struct PitchMatrixPeakRunCollection final
    {
        std::vector<PitchMatrixPeak> peaks;
        float row_max_value = 0.0f;
    };

    struct PitchMatrixHistogramPeak final
    {
        bool found = false;
        std::size_t index = 0;
        float value = 0.0f;
    };

    using PitchMatrixQualityHistogram =
        std::array<float, pitch_matrix_quality_histogram_bin_count>;

    struct PitchMatrixHistogramRange final
    {
        bool found = false;
        int center_index = 0;
        int first_peak_index = 0;
        int last_peak_index = 0;
        int lower_floor_index = 0;
        int upper_floor_index = 0;
        int lower_half_height_index = 0;
        int lower_focus_index = 0;
        int upper_focus_index = 0;
    };

    struct PitchMatrixHistogramFrequencyRange final
    {
        bool found = false;
        float center_frequency_hz = 0.0f;
        float last_peak_frequency_hz = 0.0f;
        float lower_half_height_frequency_hz = 0.0f;
        float upper_floor_frequency_hz = 0.0f;
        float lower_floor_frequency_hz = 0.0f;
        float upper_focus_frequency_hz = 0.0f;
        float lower_focus_frequency_hz = 0.0f;
    };

    [[nodiscard]] int pitch_matrix_bridge_minimum_chain_length(
        int max_chain_length,
        double keep_ratio = pitch_matrix_bridge_chain_keep_ratio) noexcept;

    [[nodiscard]] float pitch_matrix_bridge_frequency_from_pitch_bin(
        float pitch_bin) noexcept;

    [[nodiscard]] int pitch_matrix_bridge_pitch_bin_from_frequency(
        float frequency_hz) noexcept;

    [[nodiscard]] bool pitch_matrix_bridge_deviation_quality_accepts(
        int pitch_bin_deviation,
        float working_peak_quality) noexcept;

    [[nodiscard]] bool pitch_matrix_bridge_duration_is_short(
        double duration_seconds,
        double short_duration = pitch_matrix_bridge_short_duration_seconds) noexcept;

    [[nodiscard]] std::size_t select_best_peak_in_open_pitch_bin_range(
        std::span<const PitchMatrixPeak> row,
        int lower_exclusive_pitch_bin,
        int upper_exclusive_pitch_bin) noexcept;

    [[nodiscard]] PitchMatrixFrequencyFallbackResult
    replace_failed_bridge_frequencies_with_previous(
        std::span<float> frequencies_hz,
        float initial_frequency_hz) noexcept;

    [[nodiscard]] float pitch_matrix_mirrored_log2_exponent(
        float pitch_bin,
        float center_log2) noexcept;

    [[nodiscard]] float pitch_matrix_primary_peak_value(
        float working_peak_quality,
        float pitch_bin,
        float center_log2,
        float weight_base) noexcept;

    [[nodiscard]] PitchMatrixWeightBaseResult
    pitch_matrix_weight_base_from_frequency_span(
        float lower_frequency_hz,
        float upper_frequency_hz,
        float base_offset,
        float span_scale) noexcept;

    void apply_pitch_matrix_primary_peak_values(
        std::span<PitchMatrixPeak> peaks,
        float center_log2,
        float weight_base) noexcept;

    [[nodiscard]] PitchMatrixPeakRunCollection
    collect_pitch_matrix_row_positive_run_peaks(
        std::span<const float> row_values,
        int row_index);

    [[nodiscard]] std::vector<PitchMatrixPeak>
    filter_pitch_matrix_peaks_by_relative_row_max(
        std::span<const PitchMatrixPeak> peaks,
        float row_max_value,
        float keep_ratio);

    [[nodiscard]] std::size_t pitch_matrix_row_envelope_half_window_samples(
        double sample_rate,
        float frequency_hz,
        double window_periods = pitch_matrix_row_envelope_window_periods) noexcept;

    [[nodiscard]] float pitch_matrix_absolute_mean_around_center(
        std::span<const float> signal,
        std::size_t center_sample,
        std::size_t half_window_samples) noexcept;

    [[nodiscard]] float interpolate_pitch_matrix_row_value(
        std::span<const float> row_values,
        double row_position) noexcept;

    void fill_interpolated_pitch_matrix_row_values(
        std::span<const float> row_values,
        std::span<float> output,
        double row_position_per_output_sample) noexcept;

    [[nodiscard]] bool pitch_matrix_peak_is_below_upper_bin(
        const PitchMatrixPeak& peak,
        int upper_pitch_bin_exclusive) noexcept;

    [[nodiscard]] bool pitch_matrix_peak_is_inside_open_bin_range(
        const PitchMatrixPeak& peak,
        int lower_exclusive_pitch_bin,
        int upper_exclusive_pitch_bin) noexcept;

    [[nodiscard]] bool pitch_matrix_peak_is_inside_closed_bin_range(
        const PitchMatrixPeak& peak,
        int lower_inclusive_pitch_bin,
        int upper_inclusive_pitch_bin) noexcept;

    [[nodiscard]] std::vector<PitchMatrixPeak> copy_peaks_below_upper_bin(
        std::span<const PitchMatrixPeak> peaks,
        int upper_pitch_bin_exclusive);

    [[nodiscard]] std::vector<PitchMatrixPeak> copy_peaks_inside_closed_bin_range(
        std::span<const PitchMatrixPeak> peaks,
        int lower_inclusive_pitch_bin,
        int upper_inclusive_pitch_bin);

    [[nodiscard]] float pitch_matrix_center_distance_attenuation(
        int peak_pitch_bin,
        int center_pitch_bin) noexcept;

    void apply_pitch_matrix_center_distance_attenuation(
        std::span<PitchMatrixPeak> peaks,
        int center_pitch_bin) noexcept;

    [[nodiscard]] PitchMatrixQualityHistogram make_empty_pitch_matrix_quality_histogram() noexcept;

    void accumulate_pitch_matrix_quality_histogram(
        std::span<const PitchMatrixPeak> first_peaks_per_row,
        std::span<float> histogram) noexcept;

    [[nodiscard]] PitchMatrixHistogramPeak normalize_pitch_matrix_quality_histogram(
        std::span<float> histogram) noexcept;

    [[nodiscard]] float pitch_matrix_histogram_frequency_from_index(
        int histogram_index) noexcept;

    [[nodiscard]] PitchMatrixHistogramRange find_pitch_matrix_quality_histogram_range(
        std::span<const float> histogram,
        float peak_threshold) noexcept;

    [[nodiscard]] PitchMatrixHistogramFrequencyRange
    pitch_matrix_histogram_range_to_frequencies(
        const PitchMatrixHistogramRange& range) noexcept;

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
