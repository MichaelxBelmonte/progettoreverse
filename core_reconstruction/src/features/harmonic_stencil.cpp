#include "mikecore/features/harmonic_stencil.hpp"

#include <algorithm>
#include <cmath>

namespace mikecore::features
{
    HarmonicStencilPlan make_harmonic_stencil_plan(
        float center_hz,
        float window_hz,
        float bin_step_hz,
        float window_span_bins,
        int bin_count) noexcept
    {
        HarmonicStencilPlan plan{};
        if (!(window_hz > 0.0f) ||
            !(bin_step_hz > 0.0f) ||
            !(window_span_bins >= 0.0f) ||
            bin_count <= 0 ||
            !std::isfinite(center_hz) ||
            !std::isfinite(window_hz) ||
            !std::isfinite(bin_step_hz) ||
            !std::isfinite(window_span_bins)) {
            return plan;
        }

        const float half_span =
            window_span_bins * harmonic_stencil_span_half_scale;
        const int raw_lower = static_cast<int>(
            ((center_hz - window_hz) / bin_step_hz) - half_span);
        const int raw_upper = static_cast<int>(
            ((center_hz + window_hz) / bin_step_hz) + half_span);

        const int clamped_lower = std::max(raw_lower, 1);
        const int clamped_upper = std::min(raw_upper, bin_count);
        if (clamped_lower >= clamped_upper) {
            return plan;
        }

        plan.valid = true;
        plan.lower_index = static_cast<std::size_t>(clamped_lower);
        plan.upper_index = static_cast<std::size_t>(clamped_upper);
        return plan;
    }

    namespace
    {
        [[nodiscard]] float lookup_stencil_weight(
            std::span<const float> lut,
            float normalized_distance,
            float lut_index_scale) noexcept
        {
            if (lut.empty() || !(lut_index_scale > 0.0f)) {
                return 0.0f;
            }

            const int raw_index = static_cast<int>(
                normalized_distance * lut_index_scale);
            const std::size_t index = std::min(
                static_cast<std::size_t>(std::max(raw_index, 0)),
                lut.size() - 1);
            return lut[index];
        }
    }

    HarmonicStencilResult stamp_harmonic_stencil(
        float center_hz,
        float window_hz,
        const HarmonicStencilPlan& plan,
        std::span<const float> frequency_axis_hz,
        std::span<float> row_buffer,
        std::span<const float> lut,
        float harmonic_weight,
        float lut_index_scale) noexcept
    {
        HarmonicStencilResult result{};
        if (!plan.valid ||
            !(window_hz > 0.0f) ||
            !std::isfinite(center_hz) ||
            !std::isfinite(window_hz) ||
            !std::isfinite(harmonic_weight) ||
            !std::isfinite(lut_index_scale) ||
            frequency_axis_hz.empty() ||
            row_buffer.empty() ||
            lut.empty()) {
            return result;
        }

        const std::size_t upper = std::min(
            plan.upper_index,
            std::min(frequency_axis_hz.size(), row_buffer.size()));
        if (plan.lower_index >= upper) {
            return result;
        }

        const float inverse_window_hz = 1.0f / window_hz;
        for (std::size_t index = plan.lower_index; index < upper; ++index) {
            const float distance =
                std::abs(center_hz - frequency_axis_hz[index]);
            if (!(distance < window_hz)) {
                continue;
            }

            const float normalized_distance =
                (window_hz - distance) * inverse_window_hz;
            const float delta =
                lookup_stencil_weight(lut, normalized_distance, lut_index_scale) *
                harmonic_weight;
            row_buffer[index] += delta;
            result.accumulated_delta += delta;
            ++result.stamped_bins;
        }

        return result;
    }
}
