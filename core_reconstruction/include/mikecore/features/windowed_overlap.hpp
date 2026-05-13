#pragma once

#include <cstddef>
#include <span>

namespace mikecore::features
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90 for the local overlap subset of
     * MUElementAnalyzer::014b71e0.
     *
     * This helper does not own the original LUT. The caller supplies the LUT
     * returned by the original runtime helper; this module only models the
     * closed window geometry, contribution accumulation, optional mask weight,
     * optional energy depletion and fallback scalar.
     */

    inline constexpr float windowed_overlap_lower_bin_offset = -0.5f;
    inline constexpr float windowed_overlap_lut_index_scale = 64.0f;
    inline constexpr float windowed_overlap_consume_floor = 9.999999747378752e-06f;
    inline constexpr float windowed_overlap_raw_sum_floor = 1.1754943508222875e-38f;
    inline constexpr double windowed_overlap_fallback_first_scale = 0.01;
    inline constexpr double windowed_overlap_fallback_second_scale = 0.1;

    struct WindowedOverlapPlan final
    {
        bool valid = false;
        std::size_t lower_index = 0;
        std::size_t upper_index = 0;
        std::size_t fallback_index = 0;
    };

    struct WindowedOverlapResult final
    {
        float raw_contribution = 0.0f;
        float weighted_evidence = 0.0f;
        bool used_fallback = false;
        std::size_t visited_bins = 0;
    };

    [[nodiscard]] WindowedOverlapPlan make_windowed_overlap_plan(
        float center_hz,
        float bin_step_hz,
        float window_span_bins,
        int bin_count) noexcept;

    [[nodiscard]] WindowedOverlapResult compute_windowed_overlap(
        float center_hz,
        float window_hz,
        const WindowedOverlapPlan& plan,
        std::span<const float> frequency_axis_hz,
        std::span<float> energy_buffer,
        std::span<const float> lut,
        std::span<const float> extra_mask = {},
        float consume_factor = 0.0f) noexcept;
}
