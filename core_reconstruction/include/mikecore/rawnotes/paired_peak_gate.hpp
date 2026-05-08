#pragma once

#include "mikecore/rawnotes/raw_note_separation.hpp"

#include <cstddef>
#include <span>

namespace mikecore::rawnotes
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90 for the numeric subset of the
     * 014a3550 metric writer. GNList traversal/refcounting stays caller-side.
     *
     * Reverse refs:
     * - docs/36_INTERVAL_GATE_MODEL_014A3900_014A42B0.md
     * - docs/37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md
     * - docs/63_RAW_NOTE_METRIC_WRITER_014A3550.md
     */

    inline constexpr float paired_peak_gate_smoothing_factor = 0.5f;
    inline constexpr float raw_note_metric_writer_half = 0.5f;
    inline constexpr float raw_note_metric_writer_unity = 1.0f;

    struct PairedPeakGateState final
    {
        float lane_a = 0.0f;
        float lane_b = 0.0f;
    };

    struct PairedPeakGateResult final
    {
        float peak_a = 0.0f;
        float peak_b = 0.0f;
    };

    struct RawNoteMetricWriterConfig final
    {
        double sample_rate_like = 0.0;
        float peak_scan_seconds = 0.0f;
        float local_average_seconds = 0.0f;
    };

    struct RawNoteMetricFields final
    {
        float score_like_scalar = 0.0f;
        float non_class1_ranking_weight = 0.0f;
        float class1_ranking_weight = 0.0f;
        PairedPeakGateResult peak_gates;
    };

    [[nodiscard]] PairedPeakGateState advance_paired_peak_gate_state(
        PairedPeakGateState state,
        float sample_a,
        float sample_b) noexcept;

    [[nodiscard]] PairedPeakGateState advance_paired_peak_gate_state_over_range(
        std::span<const float> lane_a,
        std::span<const float> lane_b,
        std::size_t begin_index,
        std::size_t end_index,
        PairedPeakGateState initial_state = {}) noexcept;

    [[nodiscard]] PairedPeakGateResult accumulate_paired_peak_gates(
        std::span<const float> lane_a,
        std::span<const float> lane_b,
        std::size_t begin_index,
        std::size_t end_index,
        PairedPeakGateState initial_state = {}) noexcept;

    void apply_paired_peak_gates(
        RawNoteSeparation& note,
        const PairedPeakGateResult& gates) noexcept;

    [[nodiscard]] std::size_t raw_note_metric_writer_window_samples(
        float seconds,
        double sample_rate_like) noexcept;

    [[nodiscard]] RawNoteMetricFields compute_raw_note_metric_fields(
        const RawNoteSeparation& note,
        std::span<const float> non_class1_lane,
        std::span<const float> class1_lane,
        const RawNoteMetricWriterConfig& config) noexcept;

    void apply_raw_note_metric_fields(
        RawNoteSeparation& note,
        const RawNoteMetricFields& fields) noexcept;

    void write_raw_note_metric_fields(
        std::span<RawNoteSeparation> notes,
        std::span<const float> non_class1_lane,
        std::span<const float> class1_lane,
        const RawNoteMetricWriterConfig& config) noexcept;
}
