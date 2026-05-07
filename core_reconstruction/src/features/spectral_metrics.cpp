#include "mikecore/features/spectral_metrics.hpp"

#include <algorithm>
#include <numeric>

namespace mikecore::features
{
    std::size_t spectral_median_bin_index(std::span<const float> magnitude_bins) noexcept
    {
        if (magnitude_bins.empty()) {
            return 0;
        }

        const float total_magnitude = std::accumulate(
            magnitude_bins.begin(),
            magnitude_bins.end(),
            0.0f);

        const float threshold = total_magnitude * 0.5f;

        float cumulative_magnitude = 0.0f;
        for (std::size_t bin_index = 0; bin_index < magnitude_bins.size(); ++bin_index) {
            cumulative_magnitude += magnitude_bins[bin_index];
            if (cumulative_magnitude >= threshold) {
                return bin_index;
            }
        }

        /*
         * Reverse-observed fallback: when the cumulative scan does not cross the
         * threshold, the function returns the full bin count (512 in the
         * observed 1024-point path), not the last valid index.
         */
        return magnitude_bins.size();
    }

    double spectral_median_frequency_hz(
        std::span<const float> magnitude_bins,
        double effective_sample_rate_like,
        std::size_t fft_size) noexcept
    {
        if (magnitude_bins.empty() || effective_sample_rate_like <= 0.0 || fft_size == 0) {
            return 0.0;
        }

        const std::size_t median_bin = spectral_median_bin_index(magnitude_bins);
        const double bin_hz = effective_sample_rate_like / static_cast<double>(fft_size);
        return static_cast<double>(median_bin) * bin_hz;
    }
}
