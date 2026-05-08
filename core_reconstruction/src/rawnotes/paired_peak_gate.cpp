#include "mikecore/rawnotes/paired_peak_gate.hpp"

#include <algorithm>
#include <cstdint>

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

        [[nodiscard]] std::size_t clamped_index(
            std::int64_t index,
            std::size_t sample_count) noexcept
        {
            if (sample_count == 0 || index <= 0) {
                return 0;
            }

            const std::size_t unsigned_index = static_cast<std::size_t>(index);
            return std::min(unsigned_index, sample_count - 1);
        }

        [[nodiscard]] float sum_range(
            std::span<const float> samples,
            std::size_t begin_index,
            std::size_t end_index) noexcept
        {
            const std::size_t begin = std::min(begin_index, samples.size());
            const std::size_t end = std::min(end_index, samples.size());

            float sum = 0.0f;
            for (std::size_t index = begin; index < end; ++index) {
                sum += samples[index];
            }

            return sum;
        }

        [[nodiscard]] std::int64_t note_start_sample_index(
            const RawNoteSeparation& note,
            double sample_rate_like) noexcept
        {
            return static_cast<std::int64_t>(note.interval_start * sample_rate_like);
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

    std::size_t raw_note_metric_writer_window_samples(
        float seconds,
        double sample_rate_like) noexcept
    {
        if (seconds <= 0.0f || sample_rate_like <= 0.0) {
            return 1;
        }

        return std::max<std::size_t>(
            1,
            static_cast<std::size_t>(
                static_cast<double>(seconds) * sample_rate_like));
    }

    RawNoteMetricFields compute_raw_note_metric_fields(
        const RawNoteSeparation& note,
        std::span<const float> non_class1_lane,
        std::span<const float> class1_lane,
        const RawNoteMetricWriterConfig& config) noexcept
    {
        RawNoteMetricFields fields;
        const std::size_t sample_count = std::min(non_class1_lane.size(), class1_lane.size());
        if (sample_count == 0 || config.sample_rate_like <= 0.0) {
            return fields;
        }

        const std::size_t last_index = sample_count - 1;
        const std::size_t peak_scan_samples =
            raw_note_metric_writer_window_samples(
                config.peak_scan_seconds,
                config.sample_rate_like);
        const std::size_t average_samples =
            raw_note_metric_writer_window_samples(
                config.local_average_seconds,
                config.sample_rate_like);
        const float average_scale =
            raw_note_metric_writer_unity / static_cast<float>(average_samples);

        const std::int64_t start_sample =
            note_start_sample_index(note, config.sample_rate_like);
        const std::int64_t center_sample = start_sample + 1;

        const std::size_t center_index = clamped_index(center_sample, sample_count);
        const std::size_t previous_index = clamped_index(start_sample, sample_count);

        const std::size_t pre_end =
            std::min<std::size_t>(center_index, last_index);
        const std::size_t pre_begin =
            pre_end > average_samples ? pre_end - average_samples : 0;

        const std::size_t future_begin = center_index;
        const std::size_t future_end =
            std::min<std::size_t>(future_begin + peak_scan_samples, last_index);
        const std::size_t future_average_end =
            std::min<std::size_t>(future_begin + average_samples, last_index);

        const float previous_non_class1_sum =
            sum_range(non_class1_lane, pre_begin, pre_end);
        const float previous_class1_sum =
            sum_range(class1_lane, pre_begin, pre_end);
        const float future_non_class1_sum =
            sum_range(non_class1_lane, future_begin, future_average_end);
        const float future_class1_sum =
            sum_range(class1_lane, future_begin, future_average_end);

        float score_like = non_class1_lane[center_index];
        if (start_sample >= 0) {
            score_like =
                (score_like + non_class1_lane[previous_index]) *
                raw_note_metric_writer_half;
        }

        const float previous_non_class1_average = previous_non_class1_sum * average_scale;
        const float center_or_previous_average =
            std::min(score_like, previous_non_class1_average);

        fields.score_like_scalar = score_like;
        fields.non_class1_ranking_weight =
            future_non_class1_sum * average_scale - center_or_previous_average;
        fields.class1_ranking_weight =
            (future_class1_sum - previous_class1_sum) * average_scale;

        const PairedPeakGateState initial_state =
            advance_paired_peak_gate_state_over_range(
                non_class1_lane,
                class1_lane,
                pre_begin,
                pre_end);
        fields.peak_gates =
            accumulate_paired_peak_gates(
                non_class1_lane,
                class1_lane,
                future_begin,
                future_end,
                initial_state);

        return fields;
    }

    void apply_raw_note_metric_fields(
        RawNoteSeparation& note,
        const RawNoteMetricFields& fields) noexcept
    {
        note.score_like_scalar = fields.score_like_scalar;
        note.non_class1_ranking_weight = fields.non_class1_ranking_weight;
        note.class1_ranking_weight = fields.class1_ranking_weight;
        apply_paired_peak_gates(note, fields.peak_gates);
    }

    void write_raw_note_metric_fields(
        std::span<RawNoteSeparation> notes,
        std::span<const float> non_class1_lane,
        std::span<const float> class1_lane,
        const RawNoteMetricWriterConfig& config) noexcept
    {
        for (RawNoteSeparation& note : notes) {
            apply_raw_note_metric_fields(
                note,
                compute_raw_note_metric_fields(
                    note,
                    non_class1_lane,
                    class1_lane,
                    config));
        }
    }
}
