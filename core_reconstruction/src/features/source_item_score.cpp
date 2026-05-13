#include "mikecore/features/source_item_score.hpp"

#include <algorithm>
#include <cmath>

namespace mikecore::features
{
    float source_item_instant_score(
        const SourceItemScoreFields& item,
        SourceItemScoreMode mode) noexcept
    {
        if (std::isnan(item.descriptor)) {
            return 0.0f;
        }

        const float squared_descriptor = item.descriptor * item.descriptor;
        if (mode == SourceItemScoreMode::full_weighted_descriptor_and_spacing) {
            if (std::isnan(item.spacing_or_base)) {
                return 0.0f;
            }

            return std::sqrt(item.spacing_or_base * item.secondary_weight) *
                squared_descriptor;
        }

        return item.secondary_weight * squared_descriptor;
    }

    float source_item_score_envelope(
        std::span<const SourceItemScoreFields> items,
        SourceItemScoreMode mode,
        std::size_t start_index,
        std::size_t end_index_exclusive) noexcept
    {
        if (items.empty() || start_index >= items.size()) {
            return 0.0f;
        }

        const std::size_t end_index = std::min(
            end_index_exclusive,
            items.size());
        if (start_index >= end_index) {
            return 0.0f;
        }

        float envelope = 0.0f;
        float smoothed = 0.0f;
        for (std::size_t index = start_index; index < end_index; ++index) {
            const float instant = source_item_instant_score(items[index], mode);
            smoothed = instant * source_item_score_current_weight +
                smoothed * source_item_score_previous_weight;

            if (smoothed <= envelope) {
                smoothed = envelope;
            }

            envelope = smoothed;
        }

        return smoothed;
    }
}
