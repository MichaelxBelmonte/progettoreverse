#include "mikecore/fft/stft_frontend.hpp"
#include "mikecore/fft/packed_spectrum.hpp"
#include <cmath>
#include <stdexcept>

namespace mikecore::fft
{
    StftFrontend::StftFrontend(StftFrontendConfig config)
        : config_(config)
    {
    }

    runtime::SpectralTimeSlice StftFrontend::materialize_slice_from_packed(
        std::span<const float> packed_interleaved) const
    {
        if (!validate_packed_real_fft_layout(packed_interleaved, config_.fft_size))
            throw std::invalid_argument("packed buffer does not match configured fft_size");

        runtime::SpectralTimeSlice slice;
        slice.bin_count = static_cast<std::uint32_t>(
            spectral_bin_count_for_fft_size(config_.fft_size));

        const auto complex_spectrum = unpack_complex_spectrum(
            packed_interleaved, config_.fft_size);

        if (config_.payload_mask & runtime::to_mask(runtime::SlicePayload::complex_spectrum))
            slice.complex_spectrum = complex_spectrum;

        if ((config_.payload_mask & runtime::to_mask(runtime::SlicePayload::magnitude_data)) != 0U)
        {
            slice.magnitude_data.reserve(complex_spectrum.size());
            for (const auto& value : complex_spectrum)
                slice.magnitude_data.push_back(std::abs(value));
        }

        if ((config_.payload_mask & runtime::to_mask(runtime::SlicePayload::phase_data)) != 0U)
        {
            slice.phase_data.reserve(complex_spectrum.size());
            for (const auto& value : complex_spectrum)
                slice.phase_data.push_back(std::atan2(value.imag(), value.real()));
        }

        return slice;
    }
}
