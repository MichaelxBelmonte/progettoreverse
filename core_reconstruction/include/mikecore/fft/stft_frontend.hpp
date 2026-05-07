#pragma once

#include "mikecore/runtime/spectral_time_slice.hpp"
#include <cstddef>
#include <span>
#include <vector>

namespace mikecore::fft
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90
     * Reverse refs:
     * - docs/03_FFT.md
     * - docs/42_SHARED_SPECTRAL_PREAMBLE_00E83120_00E83530_015C4D90.md
     * - docs/46_FFT_BUFFER_ALIAS_AND_PACKED_LAYOUT_00E83530_00E83640.md
     *
     * This module intentionally stops at:
     * - packed real-FFT contract
     * - complex spectrum materialization
     * - magnitude and phase derivation
     *
     * true-frequency, tonality, transiency and time-offset derivation remain outside
     * this first runtime/FFT milestone.
     */

    struct StftFrontendConfig final
    {
        std::size_t fft_size = 0;
        std::size_t hop_size = 0;
        runtime::SlicePayloadMask payload_mask = 0;
    };

    class PackedFftBackend
    {
    public:
        virtual ~PackedFftBackend() = default;

        virtual void forward_packed(
            std::span<const float> src_interleaved,
            std::span<float> dst_interleaved) = 0;

        virtual void inverse_packed_like(
            std::span<const float> src_interleaved,
            std::span<float> dst_interleaved) = 0;
    };

    class StftFrontend final
    {
    public:
        explicit StftFrontend(StftFrontendConfig config);

        [[nodiscard]] const StftFrontendConfig& config() const noexcept
        {
            return config_;
        }

        [[nodiscard]] runtime::SpectralTimeSlice materialize_slice_from_packed(
            std::span<const float> packed_interleaved) const;

    private:
        StftFrontendConfig config_;
    };
}
