#include "mikecore/rawnotes/interval_boundary_refinement.hpp"

#include <algorithm>
#include <cmath>

namespace mikecore::rawnotes
{
    namespace
    {
        [[nodiscard]] std::size_t time_to_bounded_sample_index(
            double time,
            double sample_rate,
            std::size_t sample_count) noexcept
        {
            const double scaled = time * sample_rate;
            if (!std::isfinite(scaled) || scaled <= 0.0) {
                return 0;
            }

            if (scaled >= static_cast<double>(sample_count)) {
                return sample_count;
            }

            return static_cast<std::size_t>(scaled);
        }
    }

    NextIntervalBoundarySelection choose_next_interval_boundary(
        double current_interval_end,
        double next_interval_start,
        const RawNoteSeparation* next_linked_peer,
        std::span<const float> signal,
        double sample_rate,
        double minimum_signal_gap) noexcept
    {
        NextIntervalBoundarySelection selection{};
        selection.boundary_time = next_interval_start;

        if (next_linked_peer != nullptr) {
            selection.boundary_time = next_linked_peer->interval_end;
            selection.used_linked_peer = true;
            return selection;
        }

        if (sample_rate <= 0.0 || signal.empty() ||
            next_interval_start - current_interval_end < minimum_signal_gap) {
            return selection;
        }

        const std::size_t start_index = time_to_bounded_sample_index(
            current_interval_end,
            sample_rate,
            signal.size());
        const std::size_t end_index = time_to_bounded_sample_index(
            next_interval_start,
            sample_rate,
            signal.size());
        if (start_index >= end_index) {
            return selection;
        }

        float best_value = interval_boundary_signal_min_high_sentinel;
        std::size_t best_index = start_index;
        for (std::size_t index = start_index; index < end_index; ++index) {
            if (signal[index] < best_value) {
                best_value = signal[index];
                best_index = index;
            }
        }

        selection.boundary_time = static_cast<double>(best_index) / sample_rate;
        selection.sample_index = best_index;
        selection.used_signal_minimum = true;
        return selection;
    }

    RefinedIntervalRange refine_interval_range(
        double interval_start,
        double interval_end,
        double anchor_time,
        double previous_boundary,
        double next_boundary) noexcept
    {
        RefinedIntervalRange refined{};
        refined.previous_boundary = previous_boundary;
        refined.next_boundary = next_boundary;
        refined.interval_start = std::max(interval_start, previous_boundary);
        refined.interval_end = std::min(interval_end, next_boundary);
        refined.anchor_outside_range =
            anchor_time < refined.interval_start ||
            refined.interval_end < anchor_time;
        return refined;
    }
}
