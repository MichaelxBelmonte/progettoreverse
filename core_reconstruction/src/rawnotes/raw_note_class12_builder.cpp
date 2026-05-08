#include "mikecore/rawnotes/raw_note_class12_builder.hpp"

#include <algorithm>
#include <cmath>

namespace mikecore::rawnotes
{
    namespace
    {
        struct Class12BiquadCoefficients final
        {
            float b0 = 0.0f;
            float b1 = 0.0f;
            float b2 = 0.0f;
            float a1 = 0.0f;
            float a2 = 0.0f;
        };

        [[nodiscard]] double sample_index_to_time(
            std::size_t index,
            double sample_rate_like) noexcept
        {
            return static_cast<double>(index) *
                   (raw_note_class12_sample_to_time_numerator / sample_rate_like);
        }

        [[nodiscard]] bool is_positive_run_end(
            float previous,
            float current) noexcept
        {
            return 0.0f < previous && current <= 0.0f;
        }

        [[nodiscard]] bool is_positive_run_start(
            float previous,
            float current) noexcept
        {
            return previous <= 0.0f && 0.0f < current;
        }

        [[nodiscard]] std::optional<Class12BiquadCoefficients>
        make_class12_high_shelf_coefficients(
            double sample_rate_like,
            float cutoff) noexcept
        {
            if (sample_rate_like <= 0.0 ||
                cutoff <= 0.0f ||
                raw_note_class12_baseline_shape_scalar <= 0.0f) {
                return std::nullopt;
            }

            const double clamped_cutoff = std::min<double>(
                cutoff,
                static_cast<double>(raw_note_class12_nyquist_cutoff_scale) *
                    sample_rate_like);
            if (clamped_cutoff <= 0.0) {
                return std::nullopt;
            }

            const double gain = std::pow(
                10.0,
                static_cast<double>(raw_note_class12_baseline_gain_db) /
                    raw_note_class12_gain_exp10_divisor);
            const double omega = raw_note_class12_two_pi * clamped_cutoff / sample_rate_like;
            const double sin_omega = std::sin(omega);
            const double cos_omega = std::cos(omega);
            const double alpha =
                sin_omega * (std::sqrt(gain) /
                             static_cast<double>(raw_note_class12_baseline_shape_scalar));

            const double gain_plus_one = gain + 1.0;
            const double gain_minus_one = gain - 1.0;
            const double a0 =
                gain_plus_one - gain_minus_one * cos_omega + alpha;
            if (a0 == 0.0) {
                return std::nullopt;
            }

            return Class12BiquadCoefficients{
                .b0 = static_cast<float>(
                    gain * (gain_plus_one + gain_minus_one * cos_omega + alpha) / a0),
                .b1 = static_cast<float>(
                    -2.0 * gain * (gain_minus_one + gain_plus_one * cos_omega) / a0),
                .b2 = static_cast<float>(
                    gain * (gain_plus_one + gain_minus_one * cos_omega - alpha) / a0),
                .a1 = static_cast<float>(
                    2.0 * (gain_minus_one - gain_plus_one * cos_omega) / a0),
                .a2 = static_cast<float>(
                    (gain_plus_one - gain_minus_one * cos_omega - alpha) / a0),
            };
        }

        void apply_biquad_forward(
            std::span<float> samples,
            const Class12BiquadCoefficients& coefficients) noexcept
        {
            float x1 = 0.0f;
            float x2 = 0.0f;
            float y1 = 0.0f;
            float y2 = 0.0f;

            for (float& sample : samples) {
                const float x0 = sample;
                const float y0 =
                    coefficients.b0 * x0 +
                    coefficients.b1 * x1 +
                    coefficients.b2 * x2 -
                    coefficients.a1 * y1 -
                    coefficients.a2 * y2;

                sample = y0;
                x2 = x1;
                x1 = x0;
                y2 = y1;
                y1 = y0;
            }
        }

        void apply_biquad_reverse(
            std::span<float> samples,
            const Class12BiquadCoefficients& coefficients) noexcept
        {
            float x1 = 0.0f;
            float x2 = 0.0f;
            float y1 = 0.0f;
            float y2 = 0.0f;

            for (std::size_t offset = samples.size(); offset != 0; --offset) {
                float& sample = samples[offset - 1];
                const float x0 = sample;
                const float y0 =
                    coefficients.b0 * x0 +
                    coefficients.b1 * x1 +
                    coefficients.b2 * x2 -
                    coefficients.a1 * y1 -
                    coefficients.a2 * y2;

                sample = y0;
                x2 = x1;
                x1 = x0;
                y2 = y1;
                y1 = y0;
            }
        }
    }

    std::size_t class12_minimum_run_sample_count(
        double minimum_run_seconds,
        double sample_rate_like) noexcept
    {
        if (minimum_run_seconds <= 0.0 || sample_rate_like <= 0.0) {
            return 0;
        }

        return static_cast<std::size_t>(minimum_run_seconds * sample_rate_like);
    }

    std::optional<Class12RunPeak> find_class12_run_peak(
        std::span<const float> prepared_values,
        std::size_t run_begin,
        std::size_t run_end) noexcept
    {
        if (run_begin >= run_end || prepared_values.size() < run_end) {
            return std::nullopt;
        }

        Class12RunPeak peak{
            .sample_index = run_begin,
            .value = raw_note_class12_max_search_sentinel,
        };

        for (std::size_t index = run_begin; index < run_end; ++index) {
            const float value = prepared_values[index];
            if (peak.value < value) {
                peak.sample_index = index;
                peak.value = value;
            }
        }

        if (raw_note_class12_local_max_gate < peak.value) {
            return peak;
        }

        return std::nullopt;
    }

    double class12_aligned_start_time(
        std::span<const RawNoteSeparation> existing_items,
        std::size_t run_begin,
        std::size_t run_end,
        std::size_t peak_index,
        double sample_rate_like) noexcept
    {
        if (sample_rate_like <= 0.0) {
            return 0.0;
        }

        const double run_start_time = sample_index_to_time(run_begin, sample_rate_like);
        const double run_end_time = sample_index_to_time(run_end, sample_rate_like);

        bool found_overlap = false;
        double selected_start_time = 0.0;
        double selected_interval_end = 0.0;

        for (const RawNoteSeparation& item : existing_items) {
            if (run_end_time < item.interval_start) {
                break;
            }

            if (run_start_time < item.interval_start &&
                (!found_overlap || selected_interval_end < item.interval_end)) {
                found_overlap = true;
                selected_start_time = item.interval_start;
                selected_interval_end = item.interval_end;
            }
        }

        if (found_overlap) {
            return selected_start_time;
        }

        return sample_index_to_time(peak_index, sample_rate_like);
    }

    float class12_initial_baseline_cutoff(float reference_scalar) noexcept
    {
        return std::clamp(
            reference_scalar * raw_note_class12_reference_cutoff_scale,
            raw_note_class12_initial_cutoff_floor,
            raw_note_class12_initial_cutoff_ceiling);
    }

    std::vector<float> class12_zero_phase_high_shelf_baseline(
        std::span<const float> input,
        double sample_rate_like,
        float cutoff) noexcept
    {
        std::vector<float> baseline(input.begin(), input.end());
        const std::optional<Class12BiquadCoefficients> coefficients =
            make_class12_high_shelf_coefficients(sample_rate_like, cutoff);
        if (baseline.empty()) {
            return baseline;
        }

        if (!coefficients.has_value()) {
            std::fill(baseline.begin(), baseline.end(), 0.0f);
            return baseline;
        }

        apply_biquad_forward(baseline, *coefficients);
        apply_biquad_reverse(baseline, *coefficients);
        return baseline;
    }

    Class12PreprocessedBuffers preprocess_class12_detection_buffers(
        std::span<const float> class1_input,
        std::span<const float> class2_input,
        const Class12PreprocessConfig& config)
    {
        Class12PreprocessedBuffers prepared{
            .class1_values = std::vector<float>(class1_input.begin(), class1_input.end()),
            .class2_values = std::vector<float>(class2_input.begin(), class2_input.end()),
        };

        if (prepared.class1_values.empty() ||
            prepared.class2_values.empty() ||
            prepared.class1_values.size() != prepared.class2_values.size() ||
            config.sample_rate_like <= 0.0) {
            return prepared;
        }

        const float adaptive_cutoff =
            class12_initial_baseline_cutoff(config.reference_scalar);

        const std::vector<float> class1_baseline =
            class12_zero_phase_high_shelf_baseline(
                prepared.class1_values,
                config.sample_rate_like,
                adaptive_cutoff);
        const std::vector<float> class2_baseline =
            class12_zero_phase_high_shelf_baseline(
                prepared.class2_values,
                config.sample_rate_like,
                adaptive_cutoff);

        for (std::size_t index = 0; index < prepared.class1_values.size(); ++index) {
            prepared.class1_values[index] -= class1_baseline[index];
            prepared.class2_values[index] -= class2_baseline[index];
        }

        std::vector<float> shared_baseline_source(prepared.class1_values.size(), 0.0f);
        for (std::size_t index = 0; index < shared_baseline_source.size(); ++index) {
            shared_baseline_source[index] =
                std::max(prepared.class1_values[index], prepared.class2_values[index]);
        }

        const std::vector<float> shared_baseline =
            class12_zero_phase_high_shelf_baseline(
                shared_baseline_source,
                config.sample_rate_like,
                raw_note_class12_shared_baseline_cutoff);

        for (std::size_t index = 0; index < prepared.class1_values.size(); ++index) {
            prepared.class1_values[index] -= shared_baseline[index];
            prepared.class2_values[index] -= shared_baseline[index];
        }

        return prepared;
    }

    std::vector<RawNoteSeparation> build_class12_raw_note_candidates_from_prepared_branch(
        const Class12PreparedBranch& branch,
        const Class12PreparedBuilderConfig& config)
    {
        std::vector<RawNoteSeparation> candidates;
        if (branch.prepared_values.size() < 2 || config.sample_rate_like <= 0.0) {
            return candidates;
        }

        const std::size_t minimum_samples =
            class12_minimum_run_sample_count(
                config.minimum_run_seconds,
                config.sample_rate_like);

        std::size_t run_start = branch.prepared_values[0] > 0.0f ? 0 : 1;

        for (std::size_t index = 1; index < branch.prepared_values.size(); ++index) {
            const float previous = branch.prepared_values[index - 1];
            const float current = branch.prepared_values[index];

            if (is_positive_run_start(previous, current)) {
                run_start = index;
            }

            if (!is_positive_run_end(previous, current)) {
                continue;
            }

            const std::size_t run_end = index;
            if (run_start + minimum_samples >= run_end) {
                continue;
            }

            const std::optional<Class12RunPeak> peak =
                find_class12_run_peak(branch.prepared_values, run_start, run_end);
            if (!peak.has_value()) {
                continue;
            }

            const double start = class12_aligned_start_time(
                branch.existing_items,
                run_start,
                run_end,
                peak->sample_index,
                config.sample_rate_like);

            candidates.push_back(
                make_raw_note_separation(
                    start,
                    peak->value,
                    branch.class_state_flags));
        }

        return candidates;
    }

    std::vector<RawNoteSeparation> build_class12_raw_note_candidates_from_prepared_buffers(
        const Class12PreparedBranch& class1_branch,
        const Class12PreparedBranch& class2_branch,
        const Class12PreparedBuilderConfig& config)
    {
        Class12PreparedBranch canonical_class1_branch = class1_branch;
        canonical_class1_branch.class_state_flags = raw_note_base_class_1;

        Class12PreparedBranch canonical_class2_branch = class2_branch;
        canonical_class2_branch.class_state_flags = raw_note_base_class_2;

        std::vector<RawNoteSeparation> candidates =
            build_class12_raw_note_candidates_from_prepared_branch(
                canonical_class1_branch,
                config);

        std::vector<RawNoteSeparation> class2_candidates =
            build_class12_raw_note_candidates_from_prepared_branch(
                canonical_class2_branch,
                config);

        candidates.insert(
            candidates.end(),
            class2_candidates.begin(),
            class2_candidates.end());

        return candidates;
    }

    std::vector<RawNoteSeparation> build_class12_raw_note_candidates_from_raw_buffers(
        std::span<const float> class1_input,
        std::span<const float> class2_input,
        std::span<const RawNoteSeparation> class1_existing_items,
        std::span<const RawNoteSeparation> class2_existing_items,
        const Class12PreprocessConfig& preprocess_config,
        const Class12PreparedBuilderConfig& builder_config)
    {
        const Class12PreprocessedBuffers prepared =
            preprocess_class12_detection_buffers(
                class1_input,
                class2_input,
                preprocess_config);

        return build_class12_raw_note_candidates_from_prepared_buffers(
            Class12PreparedBranch{
                .prepared_values = prepared.class1_values,
                .existing_items = class1_existing_items,
                .class_state_flags = raw_note_base_class_1,
            },
            Class12PreparedBranch{
                .prepared_values = prepared.class2_values,
                .existing_items = class2_existing_items,
                .class_state_flags = raw_note_base_class_2,
            },
            builder_config);
    }
}
