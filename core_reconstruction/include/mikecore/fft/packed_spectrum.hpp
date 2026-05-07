#pragma once

#include <complex>
#include <cstddef>
#include <span>
#include <vector>

namespace mikecore::fft
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90
     * Reverse refs:
     * - docs/46_FFT_BUFFER_ALIAS_AND_PACKED_LAYOUT_00E83530_00E83640.md
     * - docs/42_SHARED_SPECTRAL_PREAMBLE_00E83120_00E83530_015C4D90.md
     *
     * Packed layout:
     *   buffer[0] = DC real
     *   buffer[1] = Nyquist real
     *   buffer[2], buffer[3] = bin1 re/im
     *   ...
     */

    [[nodiscard]] std::size_t packed_float_count_for_fft_size(std::size_t fft_size) noexcept;
    [[nodiscard]] std::size_t spectral_bin_count_for_fft_size(std::size_t fft_size) noexcept;
    [[nodiscard]] bool validate_packed_real_fft_layout(
        std::span<const float> packed,
        std::size_t fft_size) noexcept;

    [[nodiscard]] std::complex<float> unpack_bin(
        std::span<const float> packed,
        std::size_t fft_size,
        std::size_t bin_index);

    [[nodiscard]] std::vector<std::complex<float>> unpack_complex_spectrum(
        std::span<const float> packed,
        std::size_t fft_size);
}
