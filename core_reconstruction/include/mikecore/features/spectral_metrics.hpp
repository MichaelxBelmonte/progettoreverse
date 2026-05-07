#pragma once

#include <cstddef>
#include <span>

namespace mikecore::features
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90
     * Reverse refs:
     * - docs/43_SPECTRAL_MEDIAN_FREQUENCY_0149F6A0.md
     * - data/spectral_median_frequency_0149f6a0.tsv
     *
     * This module intentionally exposes only the feature already closed with
     * very high confidence: spectral median frequency / rolloff 50%.
     */

    [[nodiscard]] std::size_t spectral_median_bin_index(
        std::span<const float> magnitude_bins) noexcept;

    [[nodiscard]] double spectral_median_frequency_hz(
        std::span<const float> magnitude_bins,
        double effective_sample_rate_like,
        std::size_t fft_size) noexcept;
}
