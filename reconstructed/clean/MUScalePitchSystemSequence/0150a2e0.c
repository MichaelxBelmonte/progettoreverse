// Function: FUN_0150a2e0
// Address: 0150a2e0
// Size: 561 bytes
// Class: MUScalePitchSystemSequence
// String references:
//   "MUScalePitchSystemSequence"
// === MUScalePitchSystemSequence properties ===
//                   _derivedKeySequenceCache
//                   _isPitchSystemCacheValid
//                   _isDerivedKeySequenceCacheValid
//                   _noteMappingsPerQuarterRangeCache
//                   _isVoicingValid
//                   _weightedPitchDelta
//                   _reservedMinPitchIndex
//                   _reservedMaxPitchIndex
//                   _playedSourceDegrees
//                   _playedSourcePitchClasses
//                   _addressedTargetPitchIndexes
//                   _addressedTargetPitchClasses
//                   _targetPitchIndexesMatchingSourceVoicing
//                   _mappingStorage


void FUN_0150a2e0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_a0;
  int64_t local_90;
  int64_t local_88;
  void*local_40;
  
  if ((g_027c3428 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027c3378 = FUN_010ec850();
    g_027c3360 = "MUScalePitchSystemSequence";
    g_027c3368 = 0x60;
    g_027c3370 = FUN_0151fdc0;
    g_027c3380 = 0;
    ram_00000000027c3388 = 0;
    g_027c3390 = 0;
    ram_00000000027c3398 = 0;
    g_027c33a0 = 0;
    ram_00000000027c33a8 = 0;
    g_027c33b0 = 0;
    ram_00000000027c33b8 = 0;
    g_027c33c0 = 0;
    ram_00000000027c33c8 = 0;
    g_027c33d0 = 0;
    ram_00000000027c33d8 = 0;
    g_027c33e0 = 0;
    ram_00000000027c33e8 = 0;
    g_027c33f0 = 0;
    ram_00000000027c33f8 = 0;
    g_027c3400 = 0;
    ram_00000000027c3408 = 0;
    g_027c3410 = 0;
    _ram_00000000027c3418 = 0;
    g_027c3420 = 0;
    ___cxa_guard_release();
  }
  if (g_027c341b == '\0') {
    FUN_0151fab0();
    FUN_00e87760();
    FUN_00d4ff40();
    local_40 = (void*)0x0;
    if (1 < g_02802630) {
      local_40 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_40 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_010ecad0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    FUN_0151bc40();
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if (local_a0 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (local_40 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}

