// Function: FUN_010e8f80
// Address: 010e8f80
// Size: 534 bytes
// Class: MUTimeSliceParameterBuffer
// String references:
//   "MUTimeSliceParameterBuffer"
// === MUTimeSliceParameterBuffer properties ===
//                   _updateDecomposedAudioSignalsIsSuspended
//                   _shouldHandleSibilants
//                   _didPerformBreathSeparation
//                   _findMonophonicPitchInFrequencyDomain
//                   _referenceMidiDocument
//                   _changedAttackItems
//                   _modifiedSourceElements
//                   _noiseRanges
//                   _isSingleInstrument
//                   _recordingInfoString
//                   _audioSourceInstrumentPortions


void FUN_010e8f80(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_c0;
  int64_t local_b8;
  int64_t local_b0;
  
  if ((g_027b6c08 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027b6b58 = FUN_00d4fe50();
    g_027b6b40 = "MUTimeSliceParameterBuffer";
    g_027b6b48 = 0x88;
    g_027b6b50 = FUN_011c5b40;
    g_027b6b60 = 0;
    ram_00000000027b6b68 = 0;
    g_027b6b70 = 0;
    ram_00000000027b6b78 = 0;
    g_027b6b80 = 0;
    ram_00000000027b6b88 = 0;
    g_027b6b90 = 0;
    ram_00000000027b6b98 = 0;
    g_027b6ba0 = 0;
    ram_00000000027b6ba8 = 0;
    g_027b6bb0 = 0;
    ram_00000000027b6bb8 = 0;
    g_027b6bc0 = 0;
    ram_00000000027b6bc8 = 0;
    g_027b6bd0 = 0;
    ram_00000000027b6bd8 = 0;
    g_027b6be0 = 0;
    ram_00000000027b6be8 = 0;
    g_027b6bf0 = 0;
    _ram_00000000027b6bf8 = 0;
    g_027b6c00 = 0;
    ___cxa_guard_release();
  }
  if (g_027b6bfb == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_011c5bb0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_b0 != 0) {
      FUN_00d50b20();
    }
    if (local_b8 != 0) {
      FUN_00d50b20();
    }
    if (local_c0 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}

