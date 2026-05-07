#pragma once

namespace mikecore::runtime
{
    /*
     * Confidence gate: IMPLEMENTABLE >= 0.90
     * Reverse refs:
     * - docs/48_ANALYZER_GATE_METRIC_CLUSTER_014A74B0_01484BC0.md
     * - docs/07_DATA_STRUCTURES.md
     *
     * Canonical names are now closed by MUElementAnalyzer property registration
     * in 01141790 and by the writer 014a74b0.
     */

    struct AnalyzerGateCluster final
    {
        float all_tonality = 0.0f;                           // +0xf4
        float all_cent_diff_per_millisecond = 0.0f;         // +0xf8
        float all_pitch_range_per_note = 0.0f;              // +0xfc
        float all_energy_relevant_region_ratio = 0.0f;      // +0x100
        float all_attack_peak_quality = 0.0f;               // +0x104
        float all_attack_peak_to_energy_region_ratio = 0.0f; // +0x108
    };
}
