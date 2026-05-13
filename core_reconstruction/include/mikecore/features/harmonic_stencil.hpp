#pragma once

#include <cstddef>
#include <span>

namespace mikecore::features
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90 for the local writer subset of
     * MUElementAnalyzer::014b74f0.
     *
     * The original receives a wrapper in RCX and reads the LUT pointer at
     * wrapper->+0x10. Clean-room code receives the LUT as a span and models
     * only the numeric stamping primitive.
     */

    inline constexpr float harmonic_stencil_span_half_scale = 0.5f;

    struct HarmonicStencilPlan final
    {
        bool valid = false;
        std::size_t lower_index = 0;
        std::size_t upper_index = 0;
    };

    struct HarmonicStencilResult final
    {
        std::size_t stamped_bins = 0;
        float accumulated_delta = 0.0f;
    };

    [[nodiscard]] HarmonicStencilPlan make_harmonic_stencil_plan(
        float center_hz,
        float window_hz,
        float bin_step_hz,
        float window_span_bins,
        int bin_count) noexcept;

    [[nodiscard]] HarmonicStencilResult stamp_harmonic_stencil(
        float center_hz,
        float window_hz,
        const HarmonicStencilPlan& plan,
        std::span<const float> frequency_axis_hz,
        std::span<float> row_buffer,
        std::span<const float> lut,
        float harmonic_weight,
        float lut_index_scale) noexcept;
}
