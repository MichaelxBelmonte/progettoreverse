#pragma once

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <vector>

namespace mikecore::runtime
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90
     * Reverse refs:
     * - docs/29_SHARED_DESCRIPTOR_CACHE_0132D640_0132D790_15C6EF0.md
     *
     * Only fields with high / very high confidence are exposed here.
     * Medium-confidence fields remain intentionally absent.
     */

    struct SharedDescriptorCache final
    {
        double sample_rate_like = 0.0;              // +0x10
        std::int32_t fft_size = 0;                  // +0x20
        std::int32_t half_fft_size = 0;             // +0x24
        double reference_scale_like = 0.0;          // +0x2c
        std::int32_t time_slice_sample_count = 0;   // +0x30
        double time_slice_time_distance = 0.0;      // +0x38
        std::int32_t assembled_element_renderer_count = 0; // +0x88
        double sample_to_index_scale = 0.0;         // +0xa0
        std::int32_t max_index_clamp = 0;           // +0xa8

        std::vector<float> cache_true_frequency_reference; // +0x68
        std::vector<float> cache_time_offset_reference;    // +0x70
        std::vector<float> cache_heap_buffer;              // +0x80

        [[nodiscard]] bool validate() const noexcept;

        [[nodiscard]] std::int32_t sample_offset_to_index(
            double sample_offset,
            double source_rate_like) const noexcept;
    };
}
