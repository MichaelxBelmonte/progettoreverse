#pragma once

#include <cstddef>
#include <span>
#include <vector>

namespace mikecore::features
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90
     * Reverse refs:
     * - docs/43_SPECTRAL_MEDIAN_FREQUENCY_0149F6A0.md
     * - data/spectral_median_frequency_0149f6a0.tsv
     *
     * This module intentionally exposes only the feature already closed with
     * very high confidence: spectral median frequency / rolloff 50%, plus the
     * closed row magnitude floor subset from 014b25b0.
     */

    inline constexpr float spectral_row_floor_value = 9.999999747378752e-06f;

    [[nodiscard]] std::size_t spectral_median_bin_index(
        std::span<const float> magnitude_bins) noexcept;

    [[nodiscard]] double spectral_median_frequency_hz(
        std::span<const float> magnitude_bins,
        double effective_sample_rate_like,
        std::size_t fft_size) noexcept;

    [[nodiscard]] float sum_spectral_bins_excluding_first(
        std::span<const float> magnitude_bins) noexcept;

    [[nodiscard]] std::vector<float> sum_spectral_rows_excluding_first(
        std::span<const float> row_major_magnitude_bins,
        std::size_t row_count,
        std::size_t row_stride);

    std::size_t apply_spectral_row_floor_in_place(
        std::span<float> row_sums,
        float floor_value = spectral_row_floor_value) noexcept;
}
