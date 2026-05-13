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

    float sum_spectral_bins_excluding_first(
        std::span<const float> magnitude_bins) noexcept
    {
        if (magnitude_bins.size() < 2) {
            return 0.0f;
        }

        return std::accumulate(
            magnitude_bins.begin() + 1,
            magnitude_bins.end(),
            0.0f);
    }

    std::vector<float> sum_spectral_rows_excluding_first(
        std::span<const float> row_major_magnitude_bins,
        std::size_t row_count,
        std::size_t row_stride)
    {
        std::vector<float> row_sums;
        row_sums.reserve(row_count);

        for (std::size_t row_index = 0; row_index < row_count; ++row_index) {
            const std::size_t start = row_index * row_stride;
            if (row_stride == 0 || start >= row_major_magnitude_bins.size()) {
                row_sums.push_back(0.0f);
                continue;
            }

            const std::size_t available =
                std::min(row_stride, row_major_magnitude_bins.size() - start);
            const std::span<const float> row{
                row_major_magnitude_bins.data() + start,
                available};
            row_sums.push_back(sum_spectral_bins_excluding_first(row));
        }

        return row_sums;
    }

    std::size_t apply_spectral_row_floor_in_place(
        std::span<float> row_sums,
        float floor_value) noexcept
    {
        std::size_t replaced_count = 0;
        for (float& row_sum : row_sums) {
            if (row_sum < floor_value) {
                row_sum = floor_value;
                ++replaced_count;
            }
        }
        return replaced_count;
    }
}
