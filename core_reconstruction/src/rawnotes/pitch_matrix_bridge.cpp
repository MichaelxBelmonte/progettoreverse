#include "mikecore/rawnotes/pitch_matrix_bridge.hpp"

#include <algorithm>
#include <cmath>
#include <cstdlib>

namespace mikecore::rawnotes
{
    int pitch_matrix_bridge_minimum_chain_length(
        int max_chain_length,
        double keep_ratio) noexcept
    {
        if (max_chain_length <= 0) {
            return 0;
        }

        if (max_chain_length == 2) {
            return 2;
        }

        return static_cast<int>(static_cast<double>(max_chain_length) * keep_ratio);
    }

    float pitch_matrix_bridge_frequency_from_pitch_bin(float pitch_bin) noexcept
    {
        return std::exp2(pitch_bin / pitch_matrix_bridge_bins_per_octave) *
               pitch_matrix_bridge_base_frequency_hz;
    }

    int pitch_matrix_bridge_pitch_bin_from_frequency(float frequency_hz) noexcept
    {
        if (!(frequency_hz > 0.0f) || !std::isfinite(frequency_hz)) {
            return 0;
        }

        const float log_ratio =
            std::log(frequency_hz / pitch_matrix_bridge_base_frequency_hz);
        return static_cast<int>(
            log_ratio * pitch_matrix_bridge_log2e *
            pitch_matrix_bridge_bins_per_octave +
            pitch_matrix_bridge_rounding_bias);
    }

    bool pitch_matrix_bridge_deviation_quality_accepts(
        int pitch_bin_deviation,
        float working_peak_quality) noexcept
    {
        const float adjusted_quality =
            (static_cast<float>(pitch_bin_deviation) /
             pitch_matrix_bridge_deviation_normalizer) *
            pitch_matrix_bridge_deviation_quality_scale +
            working_peak_quality;
        return pitch_matrix_bridge_quality_accept_floor <= adjusted_quality;
    }

    bool pitch_matrix_bridge_duration_is_short(
        double duration_seconds,
        double short_duration) noexcept
    {
        return duration_seconds < short_duration;
    }

    std::size_t select_best_peak_in_open_pitch_bin_range(
        std::span<const PitchMatrixPeak> row,
        int lower_exclusive_pitch_bin,
        int upper_exclusive_pitch_bin) noexcept
    {
        float best_quality = 0.0f;
        std::size_t best_index = pitch_matrix_bridge_no_index;

        for (std::size_t index = 0; index < row.size(); ++index) {
            const PitchMatrixPeak& peak = row[index];
            if (lower_exclusive_pitch_bin < peak.pitch_bin_index &&
                peak.pitch_bin_index < upper_exclusive_pitch_bin &&
                best_quality < peak.working_peak_quality) {
                best_quality = peak.working_peak_quality;
                best_index = index;
            }
        }

        return best_index;
    }

    PitchMatrixFrequencyFallbackResult replace_failed_bridge_frequencies_with_previous(
        std::span<float> frequencies_hz,
        float initial_frequency_hz) noexcept
    {
        PitchMatrixFrequencyFallbackResult result{};
        float last_frequency = initial_frequency_hz;

        for (float& frequency : frequencies_hz) {
            if (frequency <= 0.0f) {
                frequency = last_frequency;
                ++result.replaced_count;
            }
            else {
                last_frequency = frequency;
            }
        }

        result.final_frequency_hz = last_frequency;
        return result;
    }

    float pitch_matrix_mirrored_log2_exponent(
        float pitch_bin,
        float center_log2) noexcept
    {
        const float pitch_log2 = pitch_bin / pitch_matrix_bridge_bins_per_octave;
        if (center_log2 < pitch_log2) {
            return center_log2 + center_log2 - pitch_log2;
        }
        return pitch_log2;
    }

    float pitch_matrix_primary_peak_value(
        float working_peak_quality,
        float pitch_bin,
        float center_log2,
        float weight_base) noexcept
    {
        const float exponent =
            pitch_matrix_mirrored_log2_exponent(pitch_bin, center_log2);
        return std::pow(weight_base, exponent) * working_peak_quality;
    }

    void apply_pitch_matrix_primary_peak_values(
        std::span<PitchMatrixPeak> peaks,
        float center_log2,
        float weight_base) noexcept
    {
        for (PitchMatrixPeak& peak : peaks) {
            peak.primary_peak_value = pitch_matrix_primary_peak_value(
                peak.working_peak_quality,
                static_cast<float>(peak.pitch_bin_index),
                center_log2,
                weight_base);
        }
    }

    std::size_t pitch_matrix_row_envelope_half_window_samples(
        double sample_rate,
        float frequency_hz,
        double window_periods) noexcept
    {
        if (!(sample_rate > 0.0) || !(frequency_hz > 0.0f) ||
            !std::isfinite(sample_rate) || !std::isfinite(frequency_hz)) {
            return 0;
        }

        const double window_samples =
            (sample_rate / static_cast<double>(frequency_hz)) * window_periods;
        if (!(window_samples > 0.0) || !std::isfinite(window_samples)) {
            return 0;
        }

        return static_cast<std::size_t>(static_cast<int>(window_samples) / 2);
    }

    float pitch_matrix_absolute_mean_around_center(
        std::span<const float> signal,
        std::size_t center_sample,
        std::size_t half_window_samples) noexcept
    {
        if (signal.empty()) {
            return 0.0f;
        }

        const std::size_t start =
            center_sample > half_window_samples ? center_sample - half_window_samples : 0;
        const std::size_t unclamped_end = center_sample + half_window_samples;
        const std::size_t end = std::min(unclamped_end, signal.size());
        if (start >= end) {
            return 0.0f;
        }

        float sum = 0.0f;
        for (std::size_t index = start; index < end; ++index) {
            sum += std::abs(signal[index]);
        }
        return sum / static_cast<float>(end - start);
    }

    float interpolate_pitch_matrix_row_value(
        std::span<const float> row_values,
        double row_position) noexcept
    {
        if (row_values.empty()) {
            return 0.0f;
        }
        if (row_values.size() == 1) {
            return row_values.front();
        }

        if (!(row_position > 0.0) || !std::isfinite(row_position)) {
            row_position = 0.0;
        }

        std::size_t index = static_cast<std::size_t>(row_position);
        double fractional_position = row_position;
        const std::size_t max_index = row_values.size() - 2;
        if (max_index < index) {
            index = max_index;
            fractional_position = static_cast<double>(row_values.size() - 1);
        }

        const float current = row_values[index];
        return (row_values[index + 1] - current) *
                   static_cast<float>(fractional_position - static_cast<double>(index)) +
               current;
    }

    void fill_interpolated_pitch_matrix_row_values(
        std::span<const float> row_values,
        std::span<float> output,
        double row_position_per_output_sample) noexcept
    {
        for (std::size_t index = 0; index < output.size(); ++index) {
            output[index] = interpolate_pitch_matrix_row_value(
                row_values,
                static_cast<double>(index) * row_position_per_output_sample);
        }
    }

    bool pitch_matrix_peak_is_below_upper_bin(
        const PitchMatrixPeak& peak,
        int upper_pitch_bin_exclusive) noexcept
    {
        return peak.pitch_bin_index < upper_pitch_bin_exclusive;
    }

    bool pitch_matrix_peak_is_inside_open_bin_range(
        const PitchMatrixPeak& peak,
        int lower_exclusive_pitch_bin,
        int upper_exclusive_pitch_bin) noexcept
    {
        return lower_exclusive_pitch_bin < peak.pitch_bin_index &&
               peak.pitch_bin_index < upper_exclusive_pitch_bin;
    }

    std::vector<PitchMatrixPeak> copy_peaks_below_upper_bin(
        std::span<const PitchMatrixPeak> peaks,
        int upper_pitch_bin_exclusive)
    {
        std::vector<PitchMatrixPeak> kept;
        kept.reserve(peaks.size());
        for (const PitchMatrixPeak& peak : peaks) {
            if (pitch_matrix_peak_is_below_upper_bin(peak, upper_pitch_bin_exclusive)) {
                kept.push_back(peak);
            }
        }
        return kept;
    }

    float pitch_matrix_center_distance_attenuation(
        int peak_pitch_bin,
        int center_pitch_bin) noexcept
    {
        const int distance = std::abs(peak_pitch_bin - center_pitch_bin);
        const float factor =
            static_cast<float>(distance) * pitch_matrix_center_distance_scale +
            1.0f;
        return std::max(0.0f, factor);
    }

    void apply_pitch_matrix_center_distance_attenuation(
        std::span<PitchMatrixPeak> peaks,
        int center_pitch_bin) noexcept
    {
        for (PitchMatrixPeak& peak : peaks) {
            peak.primary_peak_value *= pitch_matrix_center_distance_attenuation(
                peak.pitch_bin_index,
                center_pitch_bin);
        }
    }

    namespace
    {
        [[nodiscard]] std::size_t bounded_row_count(
            std::span<const PitchMatrixPeakRow> rows,
            std::size_t row_count) noexcept
        {
            return std::min(row_count, rows.size());
        }

        [[nodiscard]] std::size_t bounded_peak_count(
            const PitchMatrixPeakRow& row,
            std::size_t max_peaks_per_row) noexcept
        {
            return std::min(max_peaks_per_row, row.peaks.size());
        }
    }

    void reset_pitch_matrix_peak_linkage(
        std::span<PitchMatrixPeakRow> rows,
        std::size_t row_count,
        std::size_t max_peaks_per_row) noexcept
    {
        const std::size_t rows_to_process = bounded_row_count(rows, row_count);
        for (std::size_t row_index = 0; row_index < rows_to_process; ++row_index) {
            PitchMatrixPeakRow& row = rows[row_index];
            const std::size_t peaks_to_process =
                bounded_peak_count(row, max_peaks_per_row);

            for (std::size_t peak_index = 0; peak_index < peaks_to_process; ++peak_index) {
                PitchMatrixPeak& peak = row.peaks[peak_index];
                peak.local_rank = static_cast<int>(peak_index);
                peak.adjacency_claimed = false;
                peak.next_row_link_index = pitch_matrix_bridge_no_index;
                peak.previous_row_link_index = pitch_matrix_bridge_no_index;
            }
        }
    }

    PitchMatrixPeakLinkPlan link_adjacent_pitch_matrix_peak_rows(
        std::span<PitchMatrixPeakRow> rows,
        std::size_t row_count,
        std::size_t max_peaks_per_row)
    {
        PitchMatrixPeakLinkPlan plan{};
        reset_pitch_matrix_peak_linkage(rows, row_count, max_peaks_per_row);

        const std::size_t rows_to_process = bounded_row_count(rows, row_count);
        if (rows_to_process < 2) {
            return plan;
        }

        for (std::size_t source_row_index = 0;
             source_row_index + 1 < rows_to_process;
             ++source_row_index) {
            PitchMatrixPeakRow& source_row = rows[source_row_index];
            PitchMatrixPeakRow& target_row = rows[source_row_index + 1];

            const std::size_t source_count =
                bounded_peak_count(source_row, max_peaks_per_row);
            const std::size_t target_count =
                bounded_peak_count(target_row, max_peaks_per_row);
            if (source_count == 0 || target_count == 0) {
                continue;
            }

            for (std::size_t source_index = 0; source_index < source_count; ++source_index) {
                PitchMatrixPeak& source_peak = source_row.peaks[source_index];

                int best_distance = pitch_matrix_link_initial_max_distance_bins;
                std::size_t best_target_index = pitch_matrix_bridge_no_index;

                for (std::size_t target_index = 0; target_index < target_count; ++target_index) {
                    const PitchMatrixPeak& target_peak = target_row.peaks[target_index];
                    const int distance = std::abs(
                        source_peak.pitch_bin_index - target_peak.pitch_bin_index);

                    if (distance < best_distance && !target_peak.adjacency_claimed) {
                        best_distance = distance;
                        best_target_index = target_index;
                    }
                }

                if (best_target_index == pitch_matrix_bridge_no_index) {
                    continue;
                }

                PitchMatrixPeak& target_peak = target_row.peaks[best_target_index];
                source_peak.next_row_link_index = best_target_index;
                target_peak.previous_row_link_index = source_index;
                target_peak.adjacency_claimed = true;

                plan.links.push_back(PitchMatrixPeakLink{
                    source_row_index,
                    source_index,
                    source_row_index + 1,
                    best_target_index,
                    best_distance});
            }
        }

        return plan;
    }

    PitchMatrixBridgeSelection select_pitch_matrix_bridge_peak(
        std::span<const PitchMatrixPeak> chain,
        double time_step,
        bool average_pitch_bin) noexcept
    {
        PitchMatrixBridgeSelection selection{};
        if (chain.empty()) {
            return selection;
        }

        float best_quality = pitch_matrix_bridge_quality_floor;
        std::size_t best_index = pitch_matrix_bridge_no_index;
        int pitch_bin_sum = 0;

        for (std::size_t index = 0; index < chain.size(); ++index) {
            const PitchMatrixPeak& peak = chain[index];
            pitch_bin_sum += peak.pitch_bin_index;

            if (best_quality < peak.working_peak_quality) {
                best_quality = peak.working_peak_quality;
                best_index = index;
            }
        }

        if (best_index == pitch_matrix_bridge_no_index) {
            return selection;
        }

        const PitchMatrixPeak& best_peak = chain[best_index];
        const float selected_pitch_bin = average_pitch_bin
            ? static_cast<float>(pitch_bin_sum) / static_cast<float>(chain.size())
            : static_cast<float>(best_peak.pitch_bin_index);

        selection.matched = true;
        selection.peak_index = best_index;
        selection.selected_pitch_bin = selected_pitch_bin;
        selection.frequency_hz =
            pitch_matrix_bridge_frequency_from_pitch_bin(selected_pitch_bin);
        selection.anchor_time = static_cast<double>(best_peak.row_index) * time_step;
        return selection;
    }
}
