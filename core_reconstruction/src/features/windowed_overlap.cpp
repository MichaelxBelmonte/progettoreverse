#include "mikecore/features/windowed_overlap.hpp"

#include <algorithm>
#include <cmath>

namespace mikecore::features
{
    WindowedOverlapPlan make_windowed_overlap_plan(
        float center_hz,
        float bin_step_hz,
        float window_span_bins,
        int bin_count) noexcept
    {
        WindowedOverlapPlan plan{};
        if (!(bin_step_hz > 0.0f) ||
            !(window_span_bins >= 0.0f) ||
            bin_count <= 0 ||
            !std::isfinite(center_hz) ||
            !std::isfinite(bin_step_hz) ||
            !std::isfinite(window_span_bins)) {
            return plan;
        }

        const int lower = static_cast<int>(
            window_span_bins * windowed_overlap_lower_bin_offset +
            center_hz / bin_step_hz);
        const int upper = static_cast<int>(window_span_bins) + lower + 1;

        const int clamped_lower = std::max(lower, 1);
        const int clamped_upper = std::min(upper, bin_count / 2);
        if (clamped_lower >= clamped_upper) {
            return plan;
        }

        plan.valid = true;
        plan.lower_index = static_cast<std::size_t>(clamped_lower);
        plan.upper_index = static_cast<std::size_t>(clamped_upper);
        plan.fallback_index =
            static_cast<std::size_t>((clamped_lower + clamped_upper) / 2);
        return plan;
    }

    std::size_t windowed_overlap_lut_row_offset(int dimension) noexcept
    {
        int row = 0;
        if (dimension >= 2) {
            row = (dimension / 2) - 1;
        }

        return static_cast<std::size_t>(row * row + row);
    }

    std::span<const float> select_windowed_overlap_lut_row(
        std::span<const float> triangular_lut,
        int dimension) noexcept
    {
        if (dimension < 2 ||
            dimension > windowed_overlap_max_lut_dimension ||
            (dimension % 2) != 0) {
            return {};
        }

        const std::size_t offset = windowed_overlap_lut_row_offset(dimension);
        const auto length = static_cast<std::size_t>(dimension);
        if (offset > triangular_lut.size() ||
            length > triangular_lut.size() - offset) {
            return {};
        }

        return triangular_lut.subspan(offset, length);
    }

    bool fill_windowed_overlap_lut_row(
        std::span<float> output,
        int dimension) noexcept
    {
        if (dimension < 2 ||
            dimension > windowed_overlap_max_lut_dimension ||
            (dimension % 2) != 0 ||
            output.size() < static_cast<std::size_t>(dimension)) {
            return false;
        }

        const double step =
            windowed_overlap_lut_period / static_cast<double>(dimension);
        double phase = windowed_overlap_lut_start_phase;
        for (int index = 0; index < dimension; ++index) {
            output[static_cast<std::size_t>(index)] = static_cast<float>(
                (std::cos(phase) + windowed_overlap_lut_bias) *
                windowed_overlap_lut_scale);
            phase += step;
        }

        return true;
    }

    namespace
    {
        [[nodiscard]] float lookup_overlap_weight(
            std::span<const float> lut,
            float normalized_distance) noexcept
        {
            if (lut.empty()) {
                return 0.0f;
            }

            const int raw_index = static_cast<int>(
                normalized_distance * windowed_overlap_lut_index_scale);
            const std::size_t index = std::min(
                static_cast<std::size_t>(std::max(raw_index, 0)),
                lut.size() - 1);
            return lut[index];
        }
    }

    WindowedOverlapResult compute_windowed_overlap(
        float center_hz,
        float window_hz,
        const WindowedOverlapPlan& plan,
        std::span<const float> frequency_axis_hz,
        std::span<float> energy_buffer,
        std::span<const float> lut,
        std::span<const float> extra_mask,
        float consume_factor) noexcept
    {
        WindowedOverlapResult result{};
        if (!plan.valid ||
            !(window_hz > 0.0f) ||
            !std::isfinite(center_hz) ||
            !std::isfinite(window_hz) ||
            frequency_axis_hz.empty() ||
            energy_buffer.empty() ||
            lut.empty()) {
            return result;
        }

        const bool has_extra_mask = !extra_mask.empty();
        std::size_t upper = std::min(
            plan.upper_index,
            std::min(frequency_axis_hz.size(), energy_buffer.size()));
        if (has_extra_mask) {
            upper = std::min(upper, extra_mask.size());
        }
        if (plan.lower_index >= upper) {
            return result;
        }

        const bool should_consume =
            consume_factor > windowed_overlap_consume_floor;
        const float inverse_window_hz = 1.0f / window_hz;

        for (std::size_t index = plan.lower_index; index < upper; ++index) {
            const float distance =
                std::abs(center_hz - frequency_axis_hz[index]);
            if (!(distance < window_hz)) {
                continue;
            }

            const float normalized_distance =
                (window_hz - distance) * inverse_window_hz;
            const float contribution =
                lookup_overlap_weight(lut, normalized_distance) *
                energy_buffer[index];

            result.raw_contribution += contribution;
            if (has_extra_mask) {
                result.weighted_evidence +=
                    std::min(1.0f, extra_mask[index]) * contribution;
            }

            if (should_consume) {
                energy_buffer[index] -= contribution * consume_factor;
            }

            ++result.visited_bins;
        }

        if (result.raw_contribution < windowed_overlap_raw_sum_floor &&
            plan.fallback_index < energy_buffer.size()) {
            result.weighted_evidence = static_cast<float>(
                static_cast<double>(energy_buffer[plan.fallback_index]) *
                windowed_overlap_fallback_first_scale *
                windowed_overlap_fallback_second_scale);
            result.used_fallback = true;
        }

        return result;
    }
}
