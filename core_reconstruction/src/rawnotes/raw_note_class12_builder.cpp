#include "mikecore/rawnotes/raw_note_class12_builder.hpp"

namespace mikecore::rawnotes
{
    namespace
    {
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
}
