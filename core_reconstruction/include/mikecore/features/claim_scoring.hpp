#pragma once

#include <cstddef>
#include <span>

namespace mikecore::features
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90 for the final scoring tail of
     * MUElementAnalyzer::013924d0.
     *
     * The original normalizes the item-major row template per harmonic column
     * and stores each final score to item->+0x28. Clean-room code keeps the
     * numeric primitive only: caller-owned spans in, caller-owned score span out.
     */

    inline constexpr float claim_score_column_sum_floor =
        1.1754943508222875e-38f;

    [[nodiscard]] bool normalize_claim_template_columns(
        std::span<float> item_major_template,
        std::size_t item_count,
        std::size_t harmonic_columns,
        float column_sum_floor = claim_score_column_sum_floor) noexcept;

    [[nodiscard]] std::size_t compute_claim_scores(
        std::span<const float> item_major_template,
        std::size_t item_count,
        std::size_t harmonic_columns,
        std::span<const float> magnitude_data,
        std::span<float> output_scores,
        std::span<const float> tonality_data = {}) noexcept;
}
