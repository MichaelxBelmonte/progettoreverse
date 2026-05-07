#include "mikecore/rawnotes/exponential_smoother.hpp"

#include <algorithm>
#include <cmath>
#include <limits>

namespace mikecore::rawnotes
{
    bool passes_float_min_guard(float value) noexcept
    {
        return !(value < std::numeric_limits<float>::min());
    }

    std::optional<float> exponential_alpha_from_width(float width) noexcept
    {
        if (!passes_float_min_guard(width)) {
            return std::nullopt;
        }

        const float alpha = std::exp(exponential_smoother_numerator_f / width);
        if (!passes_float_min_guard(alpha)) {
            return std::nullopt;
        }

        return alpha;
    }

    int exponential_radius_from_alpha(float alpha) noexcept
    {
        const double alpha_log = static_cast<double>(std::log(alpha));
        if (alpha_log == 0.0 || !std::isfinite(alpha_log)) {
            return 1;
        }

        const double raw_radius = exponential_smoother_numerator / alpha_log;
        if (!std::isfinite(raw_radius)) {
            return 1;
        }

        const int radius = static_cast<int>(std::trunc(raw_radius));
        return std::max(radius, 1);
    }

    std::optional<ExponentialSmootherParameters>
    make_exponential_smoother_parameters(float width) noexcept
    {
        const std::optional<float> alpha = exponential_alpha_from_width(width);
        if (!alpha.has_value()) {
            return std::nullopt;
        }

        return ExponentialSmootherParameters{
            .width = width,
            .alpha = *alpha,
            .radius = exponential_radius_from_alpha(*alpha),
        };
    }

    float advance_exponential_state(
        float previous_state,
        float sample,
        float alpha) noexcept
    {
        return sample + alpha * (previous_state - sample);
    }

    void smooth_exponential_forward_in_place(
        std::span<float> samples,
        float& state,
        float alpha) noexcept
    {
        for (float& sample : samples) {
            state = advance_exponential_state(state, sample, alpha);
            sample = state;
        }
    }

    void smooth_exponential_reverse_in_place(
        std::span<float> samples,
        float& state,
        float alpha) noexcept
    {
        for (auto it = samples.rbegin(); it != samples.rend(); ++it) {
            state = advance_exponential_state(state, *it, alpha);
            *it = state;
        }
    }

    std::size_t mode0_scratch_capacity(int radius) noexcept
    {
        const int safe_radius = std::max(radius, 1);
        return static_cast<std::size_t>(safe_radius * 2 + 1);
    }

    std::size_t mode0_scratch_bzero_prefix_count(int radius) noexcept
    {
        const int safe_radius = std::max(radius, 1);
        return static_cast<std::size_t>(safe_radius * 2);
    }
}
