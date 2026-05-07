#include "mikecore/runtime/spectral_time_slice.hpp"

namespace mikecore::runtime
{
    bool SpectralTimeSlice::has_payload(SlicePayload payload) const noexcept
    {
        switch (payload)
        {
            case SlicePayload::complex_spectrum: return !complex_spectrum.empty();
            case SlicePayload::magnitude_data: return !magnitude_data.empty();
            case SlicePayload::phase_data: return !phase_data.empty();
            case SlicePayload::true_frequency_data: return !true_frequency_data.empty();
            case SlicePayload::tonality_data: return !tonality_data.empty();
            case SlicePayload::true_time_sample_offset_data: return !true_time_sample_offset_data.empty();
            case SlicePayload::transiency_data: return !transiency_data.empty();
            case SlicePayload::vector_data: return !vector_data.empty();
        }

        return false;
    }

    SlicePayloadMask SpectralTimeSlice::available_payloads() const noexcept
    {
        SlicePayloadMask mask = 0;

        if (!complex_spectrum.empty()) mask |= to_mask(SlicePayload::complex_spectrum);
        if (!magnitude_data.empty()) mask |= to_mask(SlicePayload::magnitude_data);
        if (!phase_data.empty()) mask |= to_mask(SlicePayload::phase_data);
        if (!true_frequency_data.empty()) mask |= to_mask(SlicePayload::true_frequency_data);
        if (!tonality_data.empty()) mask |= to_mask(SlicePayload::tonality_data);
        if (!true_time_sample_offset_data.empty()) mask |= to_mask(SlicePayload::true_time_sample_offset_data);
        if (!transiency_data.empty()) mask |= to_mask(SlicePayload::transiency_data);
        if (!vector_data.empty()) mask |= to_mask(SlicePayload::vector_data);

        return mask;
    }

    bool SpectralTimeSlice::validate_payload_sizes() const noexcept
    {
        const auto expected = static_cast<std::size_t>(bin_count);
        auto same_size = [expected](std::size_t size) noexcept
        {
            return size == expected;
        };

        if (!complex_spectrum.empty() && !same_size(complex_spectrum.size())) return false;
        if (!magnitude_data.empty() && !same_size(magnitude_data.size())) return false;
        if (!phase_data.empty() && !same_size(phase_data.size())) return false;
        if (!true_frequency_data.empty() && !same_size(true_frequency_data.size())) return false;
        if (!tonality_data.empty() && !same_size(tonality_data.size())) return false;
        if (!true_time_sample_offset_data.empty() && !same_size(true_time_sample_offset_data.size())) return false;
        if (!transiency_data.empty() && !same_size(transiency_data.size())) return false;
        if (!vector_data.empty() && !same_size(vector_data.size())) return false;
        return true;
    }

    void SpectralTimeSlice::clear()
    {
        bin_count = 0;
        complex_spectrum.clear();
        magnitude_data.clear();
        phase_data.clear();
        true_frequency_data.clear();
        tonality_data.clear();
        true_time_sample_offset_data.clear();
        transiency_data.clear();
        vector_data.clear();
    }

    void SpectralTimeSlice::copy_requested_payloads_from(
        const SpectralTimeSlice& other,
        SlicePayloadMask requested_payloads)
    {
        bin_count = other.bin_count;

        if (requested_payloads & to_mask(SlicePayload::complex_spectrum))
            complex_spectrum = other.complex_spectrum;
        if (requested_payloads & to_mask(SlicePayload::magnitude_data))
            magnitude_data = other.magnitude_data;
        if (requested_payloads & to_mask(SlicePayload::phase_data))
            phase_data = other.phase_data;
        if (requested_payloads & to_mask(SlicePayload::true_frequency_data))
            true_frequency_data = other.true_frequency_data;
        if (requested_payloads & to_mask(SlicePayload::tonality_data))
            tonality_data = other.tonality_data;
        if (requested_payloads & to_mask(SlicePayload::true_time_sample_offset_data))
            true_time_sample_offset_data = other.true_time_sample_offset_data;
        if (requested_payloads & to_mask(SlicePayload::transiency_data))
            transiency_data = other.transiency_data;
        if (requested_payloads & to_mask(SlicePayload::vector_data))
            vector_data = other.vector_data;
    }
}
