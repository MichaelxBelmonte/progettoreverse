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

    void smooth_exponential_mode0_bidirectional_in_place(
        std::span<float> samples,
        ExponentialSmootherMode0State& state,
        const ExponentialSmootherParameters& parameters)
    {
        if (samples.empty()) {
            return;
        }

        const int safe_radius = std::max(parameters.radius, 1);
        const std::size_t radius = static_cast<std::size_t>(safe_radius);
        const std::size_t required_capacity = mode0_scratch_capacity(safe_radius);
        const std::size_t zero_prefix_count = mode0_scratch_bzero_prefix_count(safe_radius);

        if (state.scratch.size() < required_capacity) {
            state.scratch.resize(required_capacity);
        }

        std::fill_n(state.scratch.begin(), zero_prefix_count, 0.0f);

        float current = state.scratch[0];

        for (std::size_t index = 1; index < radius; ++index) {
            current = advance_exponential_state(current, state.scratch[index], parameters.alpha);
        }

        for (float& sample : samples) {
            current = advance_exponential_state(current, sample, parameters.alpha);
            sample = current;
        }

        float* const right_scratch = state.scratch.data() + radius;
        for (std::size_t index = 0; index < radius; ++index) {
            current = advance_exponential_state(current, right_scratch[index], parameters.alpha);
            right_scratch[index] = current;
        }

        for (std::size_t index = radius; index > 0; --index) {
            current = advance_exponential_state(
                current,
                right_scratch[index - 1],
                parameters.alpha);
        }

        for (auto it = samples.rbegin(); it != samples.rend(); ++it) {
            current = advance_exponential_state(current, *it, parameters.alpha);
            *it = current;
        }
    }
}
