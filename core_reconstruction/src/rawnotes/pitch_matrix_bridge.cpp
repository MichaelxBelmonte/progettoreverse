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

    PitchMatrixWeightBaseResult pitch_matrix_weight_base_from_frequency_span(
        float lower_frequency_hz,
        float upper_frequency_hz,
        float base_offset,
        float span_scale) noexcept
    {
        PitchMatrixWeightBaseResult result{};
        if (!(lower_frequency_hz > 0.0f) ||
            !(upper_frequency_hz >= lower_frequency_hz) ||
            !std::isfinite(lower_frequency_hz) ||
            !std::isfinite(upper_frequency_hz)) {
            return result;
        }

        const float log2_span =
            std::log(upper_frequency_hz / lower_frequency_hz) *
            pitch_matrix_bridge_log2e;
        if (!std::isfinite(log2_span)) {
            return result;
        }

        result.valid = true;
        result.log2_span = log2_span;
        result.weight_base = log2_span * span_scale + base_offset;
        return result;
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

    float pitch_matrix_per_bin_ratio_from_octave_ratio(float octave_ratio) noexcept
    {
        if (!(octave_ratio > 0.0f) || !std::isfinite(octave_ratio)) {
            return 1.0f;
        }

        return std::exp(std::log(octave_ratio) / pitch_matrix_bridge_bins_per_octave);
    }

    void apply_pitch_matrix_descending_bin_weight(
        std::span<float> row_values,
        float per_bin_ratio) noexcept
    {
        float weight = 1.0f;
        for (auto it = row_values.rbegin(); it != row_values.rend(); ++it) {
            *it *= weight;
            weight *= per_bin_ratio;
        }
    }

    PitchMatrixPeakRunCollection collect_pitch_matrix_row_positive_run_peaks(
        std::span<const float> row_values,
        int row_index)
    {
        PitchMatrixPeakRunCollection result{};
        result.peaks.reserve(row_values.size() / 2);

        bool inside_positive_run = false;
        int run_peak_index = 0;
        float run_peak_value = 0.0f;
        float previous_value = 0.0f;

        const auto emit_peak = [&] {
            PitchMatrixPeak peak{};
            peak.row_index = row_index;
            peak.pitch_bin_index = run_peak_index;
            peak.primary_peak_value = run_peak_value;
            peak.working_peak_quality = run_peak_value;
            result.peaks.push_back(peak);

            if (result.row_max_value < run_peak_value) {
                result.row_max_value = run_peak_value;
            }
        };

        for (std::size_t index = 0; index < row_values.size(); ++index) {
            const float value = row_values[index];

            if (previous_value <= 0.0f && value > 0.0f) {
                inside_positive_run = true;
                run_peak_index = static_cast<int>(index);
                run_peak_value = value;
            }

            if (inside_positive_run && previous_value > 0.0f && value <= 0.0f) {
                emit_peak();
                inside_positive_run = false;
            }
            else if (inside_positive_run && run_peak_value < value) {
                run_peak_index = static_cast<int>(index);
                run_peak_value = value;
            }

            previous_value = value;
        }

        if (inside_positive_run) {
            emit_peak();
        }

        return result;
    }

    std::vector<PitchMatrixPeak> filter_pitch_matrix_peaks_by_relative_row_max(
        std::span<const PitchMatrixPeak> peaks,
        float row_max_value,
        float keep_ratio)
    {
        const float threshold = row_max_value * keep_ratio;

        std::vector<PitchMatrixPeak> kept;
        kept.reserve(peaks.size());
        for (const PitchMatrixPeak& peak : peaks) {
            if (!(peak.working_peak_quality < threshold)) {
                kept.push_back(peak);
            }
        }
        return kept;
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

    bool pitch_matrix_peak_is_inside_closed_bin_range(
        const PitchMatrixPeak& peak,
        int lower_inclusive_pitch_bin,
        int upper_inclusive_pitch_bin) noexcept
    {
        return lower_inclusive_pitch_bin <= peak.pitch_bin_index &&
               peak.pitch_bin_index <= upper_inclusive_pitch_bin;
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

    std::vector<PitchMatrixPeak> copy_peaks_inside_closed_bin_range(
        std::span<const PitchMatrixPeak> peaks,
        int lower_inclusive_pitch_bin,
        int upper_inclusive_pitch_bin)
    {
        std::vector<PitchMatrixPeak> kept;
        kept.reserve(peaks.size());
        for (const PitchMatrixPeak& peak : peaks) {
            if (pitch_matrix_peak_is_inside_closed_bin_range(
                    peak,
                    lower_inclusive_pitch_bin,
                    upper_inclusive_pitch_bin)) {
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
        [[nodiscard]] std::size_t bounded_histogram_bin_count(
            std::span<const float> histogram) noexcept
        {
            return std::min(
                histogram.size(),
                pitch_matrix_quality_histogram_bin_count);
        }

        [[nodiscard]] float histogram_value(
            std::span<const float> histogram,
            int index) noexcept
        {
            if (index < 0 ||
                static_cast<std::size_t>(index) >= bounded_histogram_bin_count(histogram)) {
                return 0.0f;
            }

            return histogram[static_cast<std::size_t>(index)];
        }

        [[nodiscard]] int find_histogram_max_index(
            std::span<const float> histogram) noexcept
        {
            const std::size_t bin_count = bounded_histogram_bin_count(histogram);
            float best_value = 0.0f;
            int best_index = 0;

            for (std::size_t index = 0; index < bin_count; ++index) {
                if (best_value < histogram[index]) {
                    best_value = histogram[index];
                    best_index = static_cast<int>(index);
                }
            }

            return best_index;
        }

        [[nodiscard]] bool histogram_has_positive_peak(
            std::span<const float> histogram) noexcept
        {
            const std::size_t bin_count = bounded_histogram_bin_count(histogram);
            for (std::size_t index = 0; index < bin_count; ++index) {
                if (histogram[index] > 0.0f) {
                    return true;
                }
            }
            return false;
        }

        [[nodiscard]] int find_first_histogram_local_peak_above(
            std::span<const float> histogram,
            float peak_threshold) noexcept
        {
            const std::size_t bin_count = bounded_histogram_bin_count(histogram);
            if (bin_count < 3) {
                return 0;
            }

            const int last_inner_index = static_cast<int>(bin_count) - 2;
            for (int index = 1; index <= last_inner_index; ++index) {
                const float previous_slope =
                    histogram_value(histogram, index) -
                    histogram_value(histogram, index - 1);
                const float next_slope =
                    histogram_value(histogram, index + 1) -
                    histogram_value(histogram, index);
                if (previous_slope >= 0.0f &&
                    next_slope < 0.0f &&
                    peak_threshold < histogram_value(histogram, index)) {
                    return index;
                }
            }

            return 0;
        }

        [[nodiscard]] int find_last_histogram_local_peak_above(
            std::span<const float> histogram,
            float peak_threshold,
            int first_peak_index,
            int center_index) noexcept
        {
            const std::size_t bin_count = bounded_histogram_bin_count(histogram);
            if (bin_count < 3) {
                return first_peak_index;
            }

            const int last_index = static_cast<int>(bin_count) - 1;
            if (center_index > last_index - 1) {
                return last_index;
            }

            for (int index = last_index - 1; index >= 1; --index) {
                const float previous_slope =
                    histogram_value(histogram, index) -
                    histogram_value(histogram, index - 1);
                const float next_slope =
                    histogram_value(histogram, index + 1) -
                    histogram_value(histogram, index);
                if (previous_slope > 0.0f &&
                    next_slope <= 0.0f &&
                    peak_threshold < histogram_value(histogram, index)) {
                    return index;
                }
            }

            return first_peak_index;
        }

        [[nodiscard]] float histogram_floor_for_peak(
            std::span<const float> histogram,
            int peak_index,
            float peak_threshold) noexcept
        {
            return std::min(
                peak_threshold,
                histogram_value(histogram, peak_index) *
                    pitch_matrix_quality_histogram_half_height);
        }

        [[nodiscard]] int find_upper_histogram_floor_index(
            std::span<const float> histogram,
            int start_index,
            float floor) noexcept
        {
            const std::size_t bin_count = bounded_histogram_bin_count(histogram);
            if (bin_count == 0) {
                return 0;
            }

            const int last_index = static_cast<int>(bin_count) - 1;
            const int first_index = std::clamp(start_index, 0, last_index);
            for (int index = first_index; index <= last_index; ++index) {
                if (histogram_value(histogram, index) < floor) {
                    return index;
                }
            }

            return last_index;
        }

        [[nodiscard]] int find_lower_histogram_floor_index(
            std::span<const float> histogram,
            int start_index,
            float floor) noexcept
        {
            const std::size_t bin_count = bounded_histogram_bin_count(histogram);
            if (bin_count == 0) {
                return 0;
            }

            const int last_index = static_cast<int>(bin_count) - 1;
            const int first_index = std::clamp(start_index, 0, last_index);
            for (int index = first_index; index >= 0; --index) {
                if (histogram_value(histogram, index) < floor) {
                    return index;
                }
            }

            return 0;
        }

        [[nodiscard]] int find_lower_histogram_half_height_index(
            std::span<const float> histogram,
            int first_peak_index) noexcept
        {
            if (histogram_value(histogram, first_peak_index) <
                pitch_matrix_quality_histogram_half_height) {
                return 0;
            }

            return find_lower_histogram_floor_index(
                histogram,
                first_peak_index,
                pitch_matrix_quality_histogram_half_height);
        }

        void apply_histogram_focus_range(
            std::span<const float> histogram,
            PitchMatrixHistogramRange& range) noexcept
        {
            const std::size_t bin_count = bounded_histogram_bin_count(histogram);
            if (bin_count == 0) {
                return;
            }

            const int last_index = static_cast<int>(bin_count) - 1;

            if (range.lower_floor_index < range.center_index &&
                range.center_index < range.upper_floor_index) {
                float threshold =
                    pitch_matrix_quality_histogram_focus_start_threshold;

                while (true) {
                    int upper = last_index;
                    for (int index = range.center_index; index <= last_index; ++index) {
                        if (histogram_value(histogram, index) <= threshold) {
                            upper = index;
                            break;
                        }
                    }

                    int lower = 0;
                    for (int index = range.center_index; index >= 0; --index) {
                        if (histogram_value(histogram, index) <= threshold) {
                            lower = index;
                            break;
                        }
                    }

                    const int width = upper - lower;
                    if (width >= pitch_matrix_quality_histogram_focus_min_width) {
                        if (width > pitch_matrix_quality_histogram_focus_max_width) {
                            upper = std::min(
                                last_index,
                                range.center_index +
                                    pitch_matrix_quality_histogram_focus_fallback_radius);
                            lower = std::max(
                                0,
                                range.center_index -
                                    pitch_matrix_quality_histogram_focus_fallback_radius);
                        }

                        range.upper_focus_index = upper;
                        range.lower_focus_index = lower;
                        return;
                    }

                    if (upper >= last_index && lower <= 0) {
                        range.upper_focus_index = upper;
                        range.lower_focus_index = lower;
                        return;
                    }

                    threshold += pitch_matrix_quality_histogram_focus_threshold_step;
                }
            }

            const int center_sum =
                range.lower_floor_index + range.upper_floor_index;
            range.center_index = center_sum / 2;
            range.upper_focus_index = last_index;
            if (center_sum <
                (last_index - pitch_matrix_quality_histogram_focus_fallback_radius) * 2) {
                range.upper_focus_index =
                    range.center_index +
                    pitch_matrix_quality_histogram_focus_fallback_radius;
            }
            range.lower_focus_index = 0;
            if (pitch_matrix_quality_histogram_focus_fallback_radius * 2 - 1 <
                center_sum) {
                range.lower_focus_index =
                    range.center_index -
                    pitch_matrix_quality_histogram_focus_fallback_radius;
            }
        }
    }

    PitchMatrixQualityHistogram make_empty_pitch_matrix_quality_histogram() noexcept
    {
        return {};
    }

    void accumulate_pitch_matrix_quality_histogram(
        std::span<const PitchMatrixPeak> first_peaks_per_row,
        std::span<float> histogram) noexcept
    {
        const std::size_t bin_count =
            std::min(histogram.size(), pitch_matrix_quality_histogram_bin_count);

        for (const PitchMatrixPeak& peak : first_peaks_per_row) {
            const float contribution =
                peak.working_peak_quality + pitch_matrix_quality_histogram_offset;
            if (!(contribution > 0.0f)) {
                continue;
            }

            const int histogram_bin =
                peak.pitch_bin_index / pitch_matrix_quality_histogram_pitch_bins_per_slot;
            if (histogram_bin < 0 ||
                static_cast<std::size_t>(histogram_bin) >= bin_count) {
                continue;
            }

            histogram[static_cast<std::size_t>(histogram_bin)] += contribution;
        }
    }

    PitchMatrixHistogramPeak normalize_pitch_matrix_quality_histogram(
        std::span<float> histogram) noexcept
    {
        const std::size_t bin_count =
            std::min(histogram.size(), pitch_matrix_quality_histogram_bin_count);

        PitchMatrixHistogramPeak peak{};
        for (std::size_t index = 0; index < bin_count; ++index) {
            if (peak.value < histogram[index]) {
                peak.found = true;
                peak.index = index;
                peak.value = histogram[index];
            }
        }

        if (!(peak.value > 0.0f)) {
            return {};
        }

        for (std::size_t index = 0; index < bin_count; ++index) {
            histogram[index] /= peak.value;
        }

        return peak;
    }

    float pitch_matrix_histogram_frequency_from_index(int histogram_index) noexcept
    {
        return std::exp2(
                   static_cast<float>(histogram_index) /
                   pitch_matrix_quality_histogram_bins_per_octave) *
               pitch_matrix_bridge_base_frequency_hz;
    }

    PitchMatrixHistogramRange find_pitch_matrix_quality_histogram_range(
        std::span<const float> histogram,
        float peak_threshold) noexcept
    {
        PitchMatrixHistogramRange range{};
        if (bounded_histogram_bin_count(histogram) == 0) {
            return range;
        }

        range.found = histogram_has_positive_peak(histogram);
        range.center_index = find_histogram_max_index(histogram);
        range.first_peak_index =
            range.center_index < 1
                ? 0
                : find_first_histogram_local_peak_above(histogram, peak_threshold);
        range.last_peak_index = find_last_histogram_local_peak_above(
            histogram,
            peak_threshold,
            range.first_peak_index,
            range.center_index);

        range.upper_floor_index = find_upper_histogram_floor_index(
            histogram,
            range.last_peak_index,
            histogram_floor_for_peak(histogram, range.last_peak_index, peak_threshold));
        range.lower_floor_index = find_lower_histogram_floor_index(
            histogram,
            range.first_peak_index,
            histogram_floor_for_peak(histogram, range.first_peak_index, peak_threshold));
        range.lower_half_height_index =
            find_lower_histogram_half_height_index(histogram, range.first_peak_index);

        apply_histogram_focus_range(histogram, range);
        return range;
    }

    PitchMatrixHistogramFrequencyRange pitch_matrix_histogram_range_to_frequencies(
        const PitchMatrixHistogramRange& range) noexcept
    {
        return PitchMatrixHistogramFrequencyRange{
            .found = range.found,
            .center_frequency_hz =
                pitch_matrix_histogram_frequency_from_index(range.center_index),
            .last_peak_frequency_hz =
                pitch_matrix_histogram_frequency_from_index(range.last_peak_index),
            .lower_half_height_frequency_hz =
                pitch_matrix_histogram_frequency_from_index(
                    range.lower_half_height_index),
            .upper_floor_frequency_hz =
                pitch_matrix_histogram_frequency_from_index(range.upper_floor_index),
            .lower_floor_frequency_hz =
                pitch_matrix_histogram_frequency_from_index(range.lower_floor_index),
            .upper_focus_frequency_hz =
                pitch_matrix_histogram_frequency_from_index(range.upper_focus_index),
            .lower_focus_frequency_hz =
                pitch_matrix_histogram_frequency_from_index(range.lower_focus_index),
        };
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
