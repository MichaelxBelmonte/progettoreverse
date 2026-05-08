#pragma once

#include "mikecore/rawnotes/raw_note_separation.hpp"

#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <vector>

namespace mikecore::rawnotes
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90 for the prepared-buffer materializer
     * subset of 014a2170. The baseline/smoothing preprocessing via 015c2d90 is
     * intentionally caller-supplied until that helper is closed independently.
     *
     * Reverse refs:
     * - docs/37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md
     */

    inline constexpr float raw_note_class12_local_max_gate = 0.0f;
    inline constexpr float raw_note_class12_max_search_sentinel = -1000.0f;
    inline constexpr double raw_note_class12_sample_to_time_numerator = 1.0;
    inline constexpr float raw_note_class12_reference_cutoff_scale = 0.30000001192092896f;
    inline constexpr float raw_note_class12_initial_cutoff_floor = 15.0f;
    inline constexpr float raw_note_class12_initial_cutoff_ceiling = 30.0f;
    inline constexpr float raw_note_class12_shared_baseline_cutoff = 7.0f;
    inline constexpr float raw_note_class12_baseline_gain_db = -40.0f;
    inline constexpr float raw_note_class12_baseline_shape_scalar = 0.800000011920929f;
    inline constexpr float raw_note_class12_nyquist_cutoff_scale = 0.5f;
    inline constexpr double raw_note_class12_gain_exp10_divisor = 40.0;
    inline constexpr double raw_note_class12_two_pi = 6.283185307179586;

    struct Class12PreparedBuilderConfig final
    {
        double sample_rate_like = 0.0;
        double minimum_run_seconds = 0.0;
    };

    struct Class12PreprocessConfig final
    {
        double sample_rate_like = 0.0;
        float reference_scalar = 0.0f;
    };

    struct Class12PreparedBranch final
    {
        std::span<const float> prepared_values;
        std::span<const RawNoteSeparation> existing_items;
        std::uint32_t class_state_flags = 0;
    };

    struct Class12RunPeak final
    {
        std::size_t sample_index = 0;
        float value = 0.0f;
    };

    struct Class12PreprocessedBuffers final
    {
        std::vector<float> class1_values;
        std::vector<float> class2_values;
    };

    [[nodiscard]] std::size_t class12_minimum_run_sample_count(
        double minimum_run_seconds,
        double sample_rate_like) noexcept;

    [[nodiscard]] std::optional<Class12RunPeak> find_class12_run_peak(
        std::span<const float> prepared_values,
        std::size_t run_begin,
        std::size_t run_end) noexcept;

    [[nodiscard]] double class12_aligned_start_time(
        std::span<const RawNoteSeparation> existing_items,
        std::size_t run_begin,
        std::size_t run_end,
        std::size_t peak_index,
        double sample_rate_like) noexcept;

    [[nodiscard]] float class12_initial_baseline_cutoff(
        float reference_scalar) noexcept;

    [[nodiscard]] std::vector<float> class12_zero_phase_high_shelf_baseline(
        std::span<const float> input,
        double sample_rate_like,
        float cutoff) noexcept;

    [[nodiscard]] Class12PreprocessedBuffers preprocess_class12_detection_buffers(
        std::span<const float> class1_input,
        std::span<const float> class2_input,
        const Class12PreprocessConfig& config);

    [[nodiscard]] std::vector<RawNoteSeparation>
    build_class12_raw_note_candidates_from_prepared_branch(
        const Class12PreparedBranch& branch,
        const Class12PreparedBuilderConfig& config);

    [[nodiscard]] std::vector<RawNoteSeparation>
    build_class12_raw_note_candidates_from_prepared_buffers(
        const Class12PreparedBranch& class1_branch,
        const Class12PreparedBranch& class2_branch,
        const Class12PreparedBuilderConfig& config);

    [[nodiscard]] std::vector<RawNoteSeparation>
    build_class12_raw_note_candidates_from_raw_buffers(
        std::span<const float> class1_input,
        std::span<const float> class2_input,
        std::span<const RawNoteSeparation> class1_existing_items,
        std::span<const RawNoteSeparation> class2_existing_items,
        const Class12PreprocessConfig& preprocess_config,
        const Class12PreparedBuilderConfig& builder_config);
}
