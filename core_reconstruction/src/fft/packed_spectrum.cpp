#include "mikecore/fft/packed_spectrum.hpp"
#include <stdexcept>

namespace mikecore::fft
{
    std::size_t packed_float_count_for_fft_size(std::size_t fft_size) noexcept
    {
        return fft_size;
    }

    std::size_t spectral_bin_count_for_fft_size(std::size_t fft_size) noexcept
    {
        return fft_size > 0 ? (fft_size / 2) + 1 : 0;
    }

    bool validate_packed_real_fft_layout(
        std::span<const float> packed,
        std::size_t fft_size) noexcept
    {
        return fft_size >= 2
            && (fft_size % 2) == 0
            && packed.size() == packed_float_count_for_fft_size(fft_size);
    }

    std::complex<float> unpack_bin(
        std::span<const float> packed,
        std::size_t fft_size,
        std::size_t bin_index)
    {
        if (!validate_packed_real_fft_layout(packed, fft_size))
            throw std::invalid_argument("invalid packed real-FFT buffer");

        const auto bin_count = spectral_bin_count_for_fft_size(fft_size);
        if (bin_index >= bin_count)
            throw std::out_of_range("bin index out of range");

        if (bin_index == 0)
            return {packed[0], 0.0f};

        if (bin_index == bin_count - 1)
            return {packed[1], 0.0f};

        const auto base = 2 + ((bin_index - 1) * 2);
        return {packed[base], packed[base + 1]};
    }

    std::vector<std::complex<float>> unpack_complex_spectrum(
        std::span<const float> packed,
        std::size_t fft_size)
    {
        if (!validate_packed_real_fft_layout(packed, fft_size))
            throw std::invalid_argument("invalid packed real-FFT buffer");

        const auto bin_count = spectral_bin_count_for_fft_size(fft_size);
        std::vector<std::complex<float>> spectrum;
        spectrum.reserve(bin_count);

        for (std::size_t bin = 0; bin < bin_count; ++bin)
            spectrum.push_back(unpack_bin(packed, fft_size, bin));

        return spectrum;
    }
}
