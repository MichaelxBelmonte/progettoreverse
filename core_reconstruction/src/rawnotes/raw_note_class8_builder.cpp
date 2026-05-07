#include "mikecore/rawnotes/raw_note_class8_builder.hpp"

#include "mikecore/rawnotes/exponential_smoother.hpp"

#include <algorithm>
#include <cstddef>
#include <cmath>
#include <optional>

namespace mikecore::rawnotes
{
    namespace
    {
        [[nodiscard]] float clamp_contrast(float value) noexcept
        {
            return std::clamp(value, 0.0f, raw_note_class8_contrast_clamp);
        }

        void smooth_forward_reverse_zero_state(std::span<float> samples, float width) noexcept
        {
            const std::optional<ExponentialSmootherParameters> params =
                make_exponential_smoother_parameters(width);
            if (!params.has_value()) {
                return;
            }

            float forward_state = 0.0f;
            smooth_exponential_forward_in_place(samples, forward_state, params->alpha);

            float reverse_state = 0.0f;
            smooth_exponential_reverse_in_place(samples, reverse_state, params->alpha);
        }

        [[nodiscard]] bool is_valley_boundary(
            std::span<const float> values,
            std::size_t index) noexcept
        {
            if (index == 0 || index + 1 >= values.size()) {
                return false;
            }

            const float prev_slope = values[index] - values[index - 1];
            const float next_slope = values[index + 1] - values[index];
            return prev_slope < 0.0f && 0.0f <= next_slope;
        }
    }

    std::size_t class8_window_sample_count(double seconds, double sample_rate_like) noexcept
    {
        if (seconds <= 0.0 || sample_rate_like <= 0.0) {
            return 0;
        }

        return static_cast<std::size_t>(seconds * sample_rate_like);
    }

    std::vector<bool> build_positive_mask(std::span<const float> input) noexcept
    {
        std::vector<bool> mask;
        mask.reserve(input.size());

        for (float value : input) {
            mask.push_back(0.0f < value);
        }

        return mask;
    }

    void clear_short_positive_runs(
        std::vector<bool>& mask,
        std::size_t minimum_run_length) noexcept
    {
        if (minimum_run_length == 0 || mask.empty()) {
            return;
        }

        std::size_t run_start = 0;
        while (run_start < mask.size()) {
            while (run_start < mask.size() && !mask[run_start]) {
                ++run_start;
            }

            std::size_t run_end = run_start;
            while (run_end < mask.size() && mask[run_end]) {
                ++run_end;
            }

            if (run_start < run_end && run_end - run_start < minimum_run_length) {
                std::fill(mask.begin() + static_cast<std::ptrdiff_t>(run_start),
                          mask.begin() + static_cast<std::ptrdiff_t>(run_end),
                          false);
            }

            run_start = run_end;
        }
    }

    void clear_mask_ranges(
        std::vector<bool>& mask,
        std::span<const Class8ProtectedRange> protected_ranges) noexcept
    {
        for (const Class8ProtectedRange range : protected_ranges) {
            const std::size_t begin = std::min(range.begin_index, mask.size());
            const std::size_t end = std::min(range.end_index, mask.size());
            if (begin < end) {
                std::fill(mask.begin() + static_cast<std::ptrdiff_t>(begin),
                          mask.begin() + static_cast<std::ptrdiff_t>(end),
                          false);
            }
        }
    }

    std::vector<float> first_difference(std::span<const float> input)
    {
        std::vector<float> delta(input.size(), 0.0f);
        for (std::size_t index = 1; index < input.size(); ++index) {
            delta[index] = input[index] - input[index - 1];
        }

        return delta;
    }

    std::vector<float> centered_moving_contrast(
        std::span<const float> delta,
        double sample_rate_like)
    {
        std::vector<float> contrast(delta.size(), 0.0f);
        const std::size_t radius =
            class8_window_sample_count(raw_note_class8_contrast_window_seconds, sample_rate_like);
        if (delta.empty()) {
            return contrast;
        }

        for (std::size_t index = 0; index < delta.size(); ++index) {
            const std::size_t begin = index > radius ? index - radius : 0;
            const std::size_t end = std::min(delta.size(), index + radius + 1);

            float sum = 0.0f;
            for (std::size_t cursor = begin; cursor < end; ++cursor) {
                sum += delta[cursor];
            }

            contrast[index] = clamp_contrast(std::abs(sum) * raw_note_class8_contrast_scale);
        }

        return contrast;
    }

    std::vector<float> smooth_class8_contrast(
        std::span<const float> contrast,
        double sample_rate_like)
    {
        std::vector<float> short_smoothed(contrast.begin(), contrast.end());
        if (short_smoothed.empty() || sample_rate_like <= 0.0) {
            return short_smoothed;
        }

        const double rate_scale = sample_rate_like / raw_note_class8_sample_rate_normalizer;
        const float short_width =
            static_cast<float>(raw_note_class8_short_smoothing_factor * rate_scale);
        smooth_forward_reverse_zero_state(short_smoothed, short_width);
        return short_smoothed;
    }

    std::vector<RawNoteSeparation> build_class8_raw_note_candidates(
        std::span<const float> input,
        const Class8BuilderConfig& config,
        std::span<const Class8ProtectedRange> protected_ranges)
    {
        std::vector<RawNoteSeparation> candidates;
        if (input.empty() || config.sample_rate_like <= 0.0) {
            return candidates;
        }

        std::vector<bool> mask = build_positive_mask(input);
        clear_short_positive_runs(
            mask,
            class8_window_sample_count(
                raw_note_class8_positive_run_window_seconds,
                config.sample_rate_like));
        clear_mask_ranges(mask, protected_ranges);

        const std::vector<float> delta = first_difference(input);
        const std::vector<float> contrast =
            centered_moving_contrast(delta, config.sample_rate_like);
        const std::vector<float> short_smoothed =
            smooth_class8_contrast(contrast, config.sample_rate_like);

        std::vector<float> long_smoothed(short_smoothed.begin(), short_smoothed.end());
        const double rate_scale = config.sample_rate_like / raw_note_class8_sample_rate_normalizer;
        const float long_width =
            static_cast<float>(raw_note_class8_long_smoothing_factor * rate_scale);
        smooth_forward_reverse_zero_state(long_smoothed, long_width);

        std::vector<std::size_t> boundaries;
        boundaries.push_back(0);
        for (std::size_t index = 1; index + 1 < long_smoothed.size(); ++index) {
            if (is_valley_boundary(long_smoothed, index)) {
                boundaries.push_back(index);
            }
        }
        boundaries.push_back(long_smoothed.size());

        for (std::size_t segment = 0; segment + 1 < boundaries.size(); ++segment) {
            const std::size_t begin = boundaries[segment];
            const std::size_t end = boundaries[segment + 1];
            if (begin >= end) {
                continue;
            }

            float min_value = raw_note_class8_min_search_sentinel;
            float max_value = 0.0f;
            std::size_t max_index = begin;

            for (std::size_t index = begin; index < end; ++index) {
                const float value = short_smoothed[index];
                if (value < min_value) {
                    min_value = value;
                }
                if (max_value < value) {
                    max_value = value;
                    max_index = index;
                }
            }

            const float strength = max_value - min_value;
            if (max_index < mask.size() && mask[max_index] &&
                raw_note_class8_acceptance_threshold < strength) {
                const double start =
                    static_cast<double>(max_index) / config.sample_rate_like;

                RawNoteSeparation note{};
                note.interval_start = start;
                note.interval_end = start;
                note.base_gate_strength = strength;
                note.class_state_flags = raw_note_observed_flag_0x8;
                candidates.push_back(note);
            }
        }

        return candidates;
    }
}
