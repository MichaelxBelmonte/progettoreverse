#pragma once

#include "mikecore/rawnotes/raw_note_separation.hpp"

#include <cstddef>
#include <span>
#include <vector>

namespace mikecore::rawnotes
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90 for the class-8 pipeline shape,
     * constants and mode-0 smoother loop. The owner-specific mapping from
     * linked items to protected ranges is still caller-supplied.
     *
     * Reverse refs:
     * - docs/37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md
     * - docs/60_EXPONENTIAL_SMOOTHER_015C1480_015C0B60.md
     */

    inline constexpr double raw_note_class8_positive_run_window_seconds = 0.05;
    inline constexpr double raw_note_class8_contrast_window_seconds = 0.0227;
    inline constexpr double raw_note_class8_sample_rate_normalizer = 441.0;
    inline constexpr float raw_note_class8_contrast_scale = 0.00999999978f;
    inline constexpr float raw_note_class8_contrast_clamp = 4.0f;
    inline constexpr float raw_note_class8_short_smoothing_factor = 5.0f;
    inline constexpr float raw_note_class8_long_smoothing_factor = 30.0f;
    inline constexpr float raw_note_class8_acceptance_threshold = 0.100000001f;
    inline constexpr float raw_note_class8_min_search_sentinel = 10000.0f;

    struct Class8BuilderConfig final
    {
        double sample_rate_like = 0.0;
    };

    struct Class8ProtectedRange final
    {
        std::size_t begin_index = 0;
        std::size_t end_index = 0;
    };

    struct Class8LinkedItemSpan final
    {
        double interval_start = 0.0;
        double interval_end = 0.0;
        double protected_until = 0.0;
        bool has_selected_match = false;
    };

    [[nodiscard]] std::size_t class8_window_sample_count(
        double seconds,
        double sample_rate_like) noexcept;

    [[nodiscard]] std::vector<bool> build_positive_mask(
        std::span<const float> input) noexcept;

    void clear_short_positive_runs(
        std::vector<bool>& mask,
        std::size_t minimum_run_length) noexcept;

    void clear_mask_ranges(
        std::vector<bool>& mask,
        std::span<const Class8ProtectedRange> protected_ranges) noexcept;

    [[nodiscard]] std::vector<Class8ProtectedRange> build_linked_successor_protected_ranges(
        std::span<const Class8LinkedItemSpan> items,
        double sample_rate_like);

    [[nodiscard]] std::vector<float> first_difference(
        std::span<const float> input);

    [[nodiscard]] std::vector<float> centered_moving_contrast(
        std::span<const float> delta,
        double sample_rate_like);

    [[nodiscard]] std::vector<float> smooth_class8_contrast(
        std::span<const float> contrast,
        double sample_rate_like);

    [[nodiscard]] std::vector<RawNoteSeparation> build_class8_raw_note_candidates(
        std::span<const float> input,
        const Class8BuilderConfig& config,
        std::span<const Class8ProtectedRange> protected_ranges = {});
}
