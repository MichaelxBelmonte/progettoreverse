#include "mikecore/rawnotes/paired_peak_gate.hpp"

#include <algorithm>

namespace mikecore::rawnotes
{
    namespace
    {
        [[nodiscard]] std::size_t clamped_end(
            std::span<const float> lane_a,
            std::span<const float> lane_b,
            std::size_t end_index) noexcept
        {
            return std::min({lane_a.size(), lane_b.size(), end_index});
        }
    }

    PairedPeakGateState advance_paired_peak_gate_state(
        PairedPeakGateState state,
        float sample_a,
        float sample_b) noexcept
    {
        state.lane_a = (state.lane_a + sample_a) * paired_peak_gate_smoothing_factor;
        state.lane_b = (state.lane_b + sample_b) * paired_peak_gate_smoothing_factor;
        return state;
    }

    PairedPeakGateState advance_paired_peak_gate_state_over_range(
        std::span<const float> lane_a,
        std::span<const float> lane_b,
        std::size_t begin_index,
        std::size_t end_index,
        PairedPeakGateState initial_state) noexcept
    {
        PairedPeakGateState state = initial_state;
        const std::size_t end = clamped_end(lane_a, lane_b, end_index);
        for (std::size_t index = std::min(begin_index, end); index < end; ++index) {
            state = advance_paired_peak_gate_state(state, lane_a[index], lane_b[index]);
        }

        return state;
    }

    PairedPeakGateResult accumulate_paired_peak_gates(
        std::span<const float> lane_a,
        std::span<const float> lane_b,
        std::size_t begin_index,
        std::size_t end_index,
        PairedPeakGateState initial_state) noexcept
    {
        PairedPeakGateState state = initial_state;
        PairedPeakGateResult result{};

        const std::size_t end = clamped_end(lane_a, lane_b, end_index);
        for (std::size_t index = std::min(begin_index, end); index < end; ++index) {
            state = advance_paired_peak_gate_state(state, lane_a[index], lane_b[index]);
            result.peak_a = std::max(result.peak_a, state.lane_a);
            result.peak_b = std::max(result.peak_b, state.lane_b);
        }

        return result;
    }

    void apply_paired_peak_gates(
        RawNoteSeparation& note,
        const PairedPeakGateResult& gates) noexcept
    {
        note.local_smoothed_peak_gate_a = gates.peak_a;
        note.local_smoothed_peak_gate_b = gates.peak_b;
    }
}
