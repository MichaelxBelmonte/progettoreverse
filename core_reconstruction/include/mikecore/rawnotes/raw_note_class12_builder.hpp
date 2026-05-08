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

    struct Class12PreparedBuilderConfig final
    {
        double sample_rate_like = 0.0;
        double minimum_run_seconds = 0.0;
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

    [[nodiscard]] std::vector<RawNoteSeparation>
    build_class12_raw_note_candidates_from_prepared_branch(
        const Class12PreparedBranch& branch,
        const Class12PreparedBuilderConfig& config);

    [[nodiscard]] std::vector<RawNoteSeparation>
    build_class12_raw_note_candidates_from_prepared_buffers(
        const Class12PreparedBranch& class1_branch,
        const Class12PreparedBranch& class2_branch,
        const Class12PreparedBuilderConfig& config);
}
