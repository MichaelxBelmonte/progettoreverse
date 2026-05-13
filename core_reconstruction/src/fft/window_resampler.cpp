#include "mikecore/fft/window_resampler.hpp"

#include <algorithm>
#include <cmath>

namespace mikecore::fft
{
    double spectral_window_stage_step(int stage_index, double scale) noexcept
    {
        if (stage_index < 0 ||
            stage_index >= spectral_window_resample_stage_count ||
            !(scale > 0.0) ||
            !std::isfinite(scale)) {
            return 0.0;
        }

        const int shift = 12 - stage_index;
        const float stage_multiplier =
            static_cast<float>(1U << static_cast<unsigned>(shift)) *
            spectral_window_stage_base;
        return static_cast<double>(stage_multiplier) * scale;
    }

    SpectralWindowResamplePlan make_spectral_window_resample_plan(
        double center_sample,
        double scale,
        int stage_index) noexcept
    {
        SpectralWindowResamplePlan plan{};
        const double sample_step = spectral_window_stage_step(stage_index, scale);
        if (!(sample_step > 0.0) ||
            !std::isfinite(sample_step) ||
            !std::isfinite(center_sample)) {
            return plan;
        }

        double start_sample =
            sample_step * spectral_window_start_offset_scale + center_sample;
        if (start_sample < 0.0) {
            start_sample = 0.0;
        }

        int integer_width =
            static_cast<int>(sample_step + spectral_window_integer_width_bias);
        if (integer_width < 0) {
            integer_width = 0;
        }

        plan.valid = true;
        plan.stage_index = stage_index;
        plan.center_sample = center_sample;
        plan.sample_step = sample_step;
        plan.start_sample = start_sample;
        plan.integer_width = integer_width;
        return plan;
    }

    namespace
    {
        [[nodiscard]] std::size_t bounded_output_count(
            std::span<const float> output) noexcept
        {
            return std::min(output.size(), spectral_window_resample_size);
        }
    }

    void resample_spectral_window_256(
        std::span<const float> signal,
        const SpectralWindowResamplePlan& plan,
        std::span<float> output) noexcept
    {
        std::fill(output.begin(), output.end(), 0.0f);

        const std::size_t output_count = bounded_output_count(output);
        if (!plan.valid || signal.empty() || output_count == 0) {
            return;
        }

        double position = plan.start_sample;

        if (plan.integer_width == 1) {
            for (std::size_t output_index = 0;
                 output_index < output_count;
                 ++output_index) {
                const auto source_index = static_cast<std::size_t>(
                    position + spectral_window_nearest_sample_bias);
                if (source_index >= signal.size()) {
                    return;
                }

                output[output_index] = signal[source_index];
                position += plan.sample_step;
            }
            return;
        }

        if (plan.integer_width < 1) {
            for (std::size_t output_index = 0;
                 output_index < output_count;
                 ++output_index) {
                const auto base_index = static_cast<std::size_t>(position);
                if (base_index + 1 >= signal.size()) {
                    return;
                }

                const float current = signal[base_index];
                output[output_index] =
                    (signal[base_index + 1] - current) *
                        static_cast<float>(position - static_cast<double>(base_index)) +
                    current;
                position += plan.sample_step;
            }
            return;
        }

        const std::size_t averaging_width =
            static_cast<std::size_t>(plan.integer_width);
        const float normalizer = 1.0f / static_cast<float>(averaging_width);
        for (std::size_t output_index = 0;
             output_index < output_count;
             ++output_index) {
            const auto base_index = static_cast<std::size_t>(position);
            if (base_index + averaging_width >= signal.size()) {
                return;
            }

            float sum = 0.0f;
            for (std::size_t sample_index = 0;
                 sample_index < averaging_width;
                 ++sample_index) {
                sum += signal[base_index + sample_index];
            }

            output[output_index] = sum * normalizer;
            position += plan.sample_step;
        }
    }
}
