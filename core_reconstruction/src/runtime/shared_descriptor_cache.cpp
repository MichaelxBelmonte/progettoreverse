#include "mikecore/runtime/shared_descriptor_cache.hpp"
#include <cmath>

namespace mikecore::runtime
{
    bool SharedDescriptorCache::validate() const noexcept
    {
        return sample_rate_like > 0.0
            && fft_size > 0
            && half_fft_size >= 0
            && reference_scale_like > 0.0
            && time_slice_sample_count > 0
            && time_slice_time_distance > 0.0
            && assembled_element_renderer_count >= 0
            && sample_to_index_scale > 0.0
            && max_index_clamp >= 0;
    }

    std::int32_t SharedDescriptorCache::sample_offset_to_index(
        double sample_offset,
        double source_rate_like) const noexcept
    {
        if (source_rate_like <= 0.0 || sample_to_index_scale <= 0.0)
            return 0;

        const auto raw_index = static_cast<std::int32_t>(
            std::floor((sample_offset / source_rate_like) * sample_to_index_scale + 0.5));

        return std::clamp(raw_index, 0, max_index_clamp);
    }
}
