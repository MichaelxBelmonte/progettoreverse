#include "mikecore/features/claim_scoring.hpp"

#include <algorithm>

namespace mikecore::features
{
    namespace
    {
        [[nodiscard]] bool has_matrix_shape(
            std::size_t available_values,
            std::size_t item_count,
            std::size_t harmonic_columns) noexcept
        {
            if (item_count == 0) {
                return false;
            }

            return harmonic_columns <= available_values / item_count;
        }
    }

    bool normalize_claim_template_columns(
        std::span<float> item_major_template,
        std::size_t item_count,
        std::size_t harmonic_columns,
        float column_sum_floor) noexcept
    {
        if (!has_matrix_shape(
                item_major_template.size(),
                item_count,
                harmonic_columns)) {
            return false;
        }

        if (harmonic_columns <= 1) {
            return true;
        }

        for (std::size_t column = 1; column < harmonic_columns; ++column) {
            float column_sum = 0.0f;
            for (std::size_t item = 0; item < item_count; ++item) {
                column_sum += item_major_template[item * harmonic_columns + column];
            }

            if (!(column_sum >= column_sum_floor)) {
                continue;
            }

            const float inverse_sum = 1.0f / column_sum;
            for (std::size_t item = 0; item < item_count; ++item) {
                item_major_template[item * harmonic_columns + column] *=
                    inverse_sum;
            }
        }

        return true;
    }

    std::size_t compute_claim_scores(
        std::span<const float> item_major_template,
        std::size_t item_count,
        std::size_t harmonic_columns,
        std::span<const float> magnitude_data,
        std::span<float> output_scores,
        std::span<const float> tonality_data) noexcept
    {
        if (item_count == 0 || output_scores.size() < item_count) {
            return 0;
        }

        if (harmonic_columns <= 1) {
            std::fill_n(output_scores.begin(), item_count, 0.0f);
            return item_count;
        }

        if (!has_matrix_shape(
                item_major_template.size(),
                item_count,
                harmonic_columns) ||
            magnitude_data.size() < harmonic_columns) {
            return 0;
        }

        const bool use_tonality = !tonality_data.empty();
        if (use_tonality && tonality_data.size() < harmonic_columns) {
            return 0;
        }

        for (std::size_t item = 0; item < item_count; ++item) {
            const std::size_t row_offset = item * harmonic_columns;
            float score = 0.0f;

            for (std::size_t column = 1; column < harmonic_columns; ++column) {
                float weighted_magnitude = magnitude_data[column];
                if (use_tonality) {
                    weighted_magnitude *= std::min(1.0f, tonality_data[column]);
                }

                score += item_major_template[row_offset + column] *
                    weighted_magnitude;
            }

            output_scores[item] = score;
        }

        return item_count;
    }
}
