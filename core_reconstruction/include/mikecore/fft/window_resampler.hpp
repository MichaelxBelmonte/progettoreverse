#pragma once

#include <cstddef>
#include <span>

namespace mikecore::fft
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90 for the closed sampling subset
     * of MUElementAnalyzer::014b2ee0.
     *
     * This module models only the 256-sample window resampling kernel:
     * - seven stage step sizes: (1 << (12 - stage)) / 256 * scale
     * - start sample: max(0, center - 128 * step)
     * - mode switch from int(step + 0.4): nearest, interpolation, averaging
     *
     * FFT execution, lookup tables, weighted accumulation and GN owner state
     * stay outside this clean-room slice.
     */

    inline constexpr std::size_t spectral_window_resample_size = 256;
    inline constexpr int spectral_window_resample_stage_count = 7;
    inline constexpr float spectral_window_stage_base = 0.00390625f;
    inline constexpr double spectral_window_start_offset_scale = -128.0;
    inline constexpr double spectral_window_integer_width_bias = 0.4;
    inline constexpr double spectral_window_nearest_sample_bias = 0.5;

    struct SpectralWindowResamplePlan final
    {
        bool valid = false;
        int stage_index = 0;
        double center_sample = 0.0;
        double sample_step = 0.0;
        double start_sample = 0.0;
        int integer_width = 0;
    };

    [[nodiscard]] double spectral_window_stage_step(
        int stage_index,
        double scale) noexcept;

    [[nodiscard]] SpectralWindowResamplePlan make_spectral_window_resample_plan(
        double center_sample,
        double scale,
        int stage_index) noexcept;

    void resample_spectral_window_256(
        std::span<const float> signal,
        const SpectralWindowResamplePlan& plan,
        std::span<float> output) noexcept;
}
