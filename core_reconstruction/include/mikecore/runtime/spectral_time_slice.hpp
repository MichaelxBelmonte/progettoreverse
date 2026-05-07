#pragma once

#include <complex>
#include <cstdint>
#include <span>
#include <vector>

namespace mikecore::runtime
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90
     * Reverse refs:
     * - docs/20_SPECTRAL_SLICE_FIELD_MAP.md
     * - docs/07_DATA_STRUCTURES.md
     *
     * This layout only exposes payloads and masks already closed with high confidence.
     */

    enum class SlicePayload : std::uint32_t
    {
        complex_spectrum = 0x01,
        magnitude_data = 0x02,
        phase_data = 0x04,
        true_frequency_data = 0x08,
        tonality_data = 0x10,
        true_time_sample_offset_data = 0x20,
        transiency_data = 0x40,
        vector_data = 0x80,
    };

    using SlicePayloadMask = std::uint32_t;

    constexpr SlicePayloadMask to_mask(SlicePayload payload) noexcept
    {
        return static_cast<SlicePayloadMask>(payload);
    }

    struct SpectralTimeSlice final
    {
        std::uint32_t bin_count = 0;

        std::vector<std::complex<float>> complex_spectrum;
        std::vector<float> magnitude_data;
        std::vector<float> phase_data;
        std::vector<float> true_frequency_data;
        std::vector<float> tonality_data;
        std::vector<float> true_time_sample_offset_data;
        std::vector<float> transiency_data;
        std::vector<float> vector_data;

        [[nodiscard]] bool has_payload(SlicePayload payload) const noexcept;
        [[nodiscard]] SlicePayloadMask available_payloads() const noexcept;
        [[nodiscard]] bool validate_payload_sizes() const noexcept;

        void clear();
        void copy_requested_payloads_from(
            const SpectralTimeSlice& other,
            SlicePayloadMask requested_payloads);

        [[nodiscard]] std::span<const std::complex<float>> complex_spectrum_view() const noexcept
        {
            return complex_spectrum;
        }

        [[nodiscard]] std::span<const float> magnitude_view() const noexcept
        {
            return magnitude_data;
        }

        [[nodiscard]] std::span<const float> phase_view() const noexcept
        {
            return phase_data;
        }
    };
}
