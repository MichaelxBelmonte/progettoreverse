#include "mikecore/rawnotes/pitch_matrix_bridge.hpp"

#include <cmath>

namespace mikecore::rawnotes
{
    int pitch_matrix_bridge_minimum_chain_length(
        int max_chain_length,
        double keep_ratio) noexcept
    {
        if (max_chain_length <= 0) {
            return 0;
        }

        if (max_chain_length == 2) {
            return 2;
        }

        return static_cast<int>(static_cast<double>(max_chain_length) * keep_ratio);
    }

    float pitch_matrix_bridge_frequency_from_pitch_bin(float pitch_bin) noexcept
    {
        return std::exp2(pitch_bin / pitch_matrix_bridge_bins_per_octave) *
               pitch_matrix_bridge_base_frequency_hz;
    }

    PitchMatrixBridgeSelection select_pitch_matrix_bridge_peak(
        std::span<const PitchMatrixPeak> chain,
        double time_step,
        bool average_pitch_bin) noexcept
    {
        PitchMatrixBridgeSelection selection{};
        if (chain.empty()) {
            return selection;
        }

        float best_quality = pitch_matrix_bridge_quality_floor;
        std::size_t best_index = pitch_matrix_bridge_no_index;
        int pitch_bin_sum = 0;

        for (std::size_t index = 0; index < chain.size(); ++index) {
            const PitchMatrixPeak& peak = chain[index];
            pitch_bin_sum += peak.pitch_bin_index;

            if (best_quality < peak.working_peak_quality) {
                best_quality = peak.working_peak_quality;
                best_index = index;
            }
        }

        if (best_index == pitch_matrix_bridge_no_index) {
            return selection;
        }

        const PitchMatrixPeak& best_peak = chain[best_index];
        const float selected_pitch_bin = average_pitch_bin
            ? static_cast<float>(pitch_bin_sum) / static_cast<float>(chain.size())
            : static_cast<float>(best_peak.pitch_bin_index);

        selection.matched = true;
        selection.peak_index = best_index;
        selection.selected_pitch_bin = selected_pitch_bin;
        selection.frequency_hz =
            pitch_matrix_bridge_frequency_from_pitch_bin(selected_pitch_bin);
        selection.anchor_time = static_cast<double>(best_peak.row_index) * time_step;
        return selection;
    }
}
