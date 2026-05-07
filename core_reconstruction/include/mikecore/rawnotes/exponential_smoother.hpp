#pragma once

#include <cstddef>
#include <optional>
#include <span>

namespace mikecore::rawnotes
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90 for closed scalar pieces.
     * Reverse refs:
     * - docs/37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md
     * - docs/60_EXPONENTIAL_SMOOTHER_015C1480_015C0B60.md
     *
     * This module intentionally exposes only the parts closed by disassembly:
     * - width -> alpha through expf(-2.5f / width)
     * - alpha -> radius through trunc(-2.5 / logf(alpha)), min 1
     * - one-pole recurrence state = sample + alpha * (state - sample)
     * - mode-0 scratch sizing and bzero-prefix length
     *
     * The full mode-0 edge pass is not generalized here. It must be transcribed
     * from 015c0b60 before claiming bit-perfect class-8 smoothing.
     */

    inline constexpr float exponential_smoother_numerator_f = -2.5f;
    inline constexpr double exponential_smoother_numerator = -2.5;

    struct ExponentialSmootherParameters final
    {
        float width = 0.0f;
        float alpha = 0.0f;
        int radius = 1;
    };

    [[nodiscard]] bool passes_float_min_guard(float value) noexcept;

    [[nodiscard]] std::optional<float> exponential_alpha_from_width(float width) noexcept;

    [[nodiscard]] int exponential_radius_from_alpha(float alpha) noexcept;

    [[nodiscard]] std::optional<ExponentialSmootherParameters>
    make_exponential_smoother_parameters(float width) noexcept;

    [[nodiscard]] float advance_exponential_state(
        float previous_state,
        float sample,
        float alpha) noexcept;

    void smooth_exponential_forward_in_place(
        std::span<float> samples,
        float& state,
        float alpha) noexcept;

    void smooth_exponential_reverse_in_place(
        std::span<float> samples,
        float& state,
        float alpha) noexcept;

    [[nodiscard]] std::size_t mode0_scratch_capacity(int radius) noexcept;

    [[nodiscard]] std::size_t mode0_scratch_bzero_prefix_count(int radius) noexcept;
}
