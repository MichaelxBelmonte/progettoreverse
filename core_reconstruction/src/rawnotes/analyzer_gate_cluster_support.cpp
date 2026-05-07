#include "mikecore/rawnotes/analyzer_gate_cluster_support.hpp"

#include <algorithm>

namespace mikecore::rawnotes
{
    float middle_sorted_value_or_default(
        std::span<const float> values,
        float fallback) noexcept
    {
        if (values.empty()) {
            return fallback;
        }

        std::vector<float> ordered(values.begin(), values.end());
        std::sort(ordered.begin(), ordered.end());
        return ordered[ordered.size() / 2];
    }

    std::vector<float> collect_linked_field20_scalars(std::span<const RawNoteSeparation> items)
    {
        std::vector<float> scalars;
        scalars.reserve(items.size());

        for (const RawNoteSeparation& item : items) {
            if (item.selected_match != nullptr) {
                scalars.push_back(item.selected_match->base_gate_strength);
            }
            else {
                scalars.push_back(linked_field20_default_scalar);
            }
        }

        return scalars;
    }

    float linked_field20_coverage_ratio(std::span<const RawNoteSeparation> items) noexcept
    {
        if (items.empty()) {
            return linked_field20_empty_list_fallback;
        }

        std::size_t linked_count = 0;
        for (const RawNoteSeparation& item : items) {
            if (item.selected_match != nullptr) {
                ++linked_count;
            }
        }

        return static_cast<float>(linked_count) / static_cast<float>(items.size());
    }

    LinkedField20Aggregates compute_linked_field20_aggregates(
        std::span<const RawNoteSeparation> items) noexcept
    {
        LinkedField20Aggregates aggregates{};
        const std::vector<float> scalars = collect_linked_field20_scalars(items);

        aggregates.middle_scalar = middle_sorted_value_or_default(scalars);
        aggregates.coverage_ratio = linked_field20_coverage_ratio(items);
        return aggregates;
    }
}
