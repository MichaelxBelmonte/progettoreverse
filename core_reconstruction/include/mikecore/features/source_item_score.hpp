#pragma once

#include <cstddef>
#include <span>

namespace mikecore::features
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90 for the numeric envelope subset
     * of MUAudioSourceItem::014eccd0.
     *
     * The original traverses a retained item list and performs caller-specific
     * range translation. Clean-room code receives the already selected item
     * span and models only the two observed instantaneous formulas plus the
     * 0.3/0.7 smoothed running-maximum envelope.
     */

    inline constexpr float source_item_score_current_weight =
        0.30000001192092896f;
    inline constexpr float source_item_score_previous_weight = 0.7f;

    enum class SourceItemScoreMode
    {
        reduced_weighted_descriptor,
        full_weighted_descriptor_and_spacing
    };

    struct SourceItemScoreFields final
    {
        float descriptor = 0.0f;       // observed item +0x10
        float spacing_or_base = 0.0f;  // observed item +0x20
        float secondary_weight = 0.0f; // observed item +0x58
    };

    [[nodiscard]] float source_item_instant_score(
        const SourceItemScoreFields& item,
        SourceItemScoreMode mode) noexcept;

    [[nodiscard]] float source_item_score_envelope(
        std::span<const SourceItemScoreFields> items,
        SourceItemScoreMode mode,
        std::size_t start_index = 0,
        std::size_t end_index_exclusive = static_cast<std::size_t>(-1)) noexcept;
}
