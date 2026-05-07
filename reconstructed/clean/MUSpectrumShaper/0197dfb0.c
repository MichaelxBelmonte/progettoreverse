// Function: FUN_0197dfb0
// Address: 0197dfb0
// Size: 1147 bytes
// Class: MUSpectrumShaper
// === MUSpectrumShaper properties ===
//   GNInt           _assembledElementRendererCount
//   MUSpectrumShaperSpectrumType _spectrumType
//   bool            _processSpectrumShaper
//   bool            _canUseSpectrumShaper
//   bool            _processEqualizer
//   bool            _processLowerSpectrum
//   bool            _processUpperSpectrum
//   bool            _isBypassed
//   GNInt           _overallSpectrumFundamentalPitchIndex
//   float           _overallSpectrumFreqPerBin
//   float           _referenceMagnitudeSum
//   float           _maximumMagnitudeSum
//   float           _synthAmps
//   float           _synthPhases
//   float           _emphasizePow
//   float           _allGain
//   float           _ampDifferencePow
//   float           _clipLimit
//   bool            _didRequestCacheValidation
//   bool            _appliedEqualizerFactorsAreValid
//   bool            _appliedEqualizerFormantFactorsAreValid
//   bool            _processSpectrumShaperIsValid
//   float           _startValue
//   float           _riseDuration
//   float           _riseEndValue
//   float           _decayStartTime
//   float           _decayEndTime
//   float           _decayFactor
//   float           _endValue
//   bool            _needsProcessEnvelope
//   ... +35 more


void FUN_0197dfb0(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t this_ptr;
  int64_t local_38;
  char local_30;
  int64_t local_28;
  char local_20;
  
  FUN_01989e10();
  *(void*)(this_ptr + 0x140) = 1;
  *(void*)(this_ptr + 0x18c) = 0;
  *(void*)(this_ptr + 0x198) = 0;
  if ((g_028b0ed8 == 0) || (g_028b0ee1 == '\0')) {
    FUN_00e8cb50();
    lVar2 = g_027eb4b0;
    if (g_028b0ed8 == 0) {
      if (g_027eb4b0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d20ca0(g_0241ea30);
      lVar3 = g_028b0ed8;
      if (g_028b0ed8 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_00d50b00();
            lVar3 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar3 = local_28;
        }
        bVar1 = g_028b0ed8 != 0;
        g_028b0ed8 = lVar3;
        if (bVar1) {
          FUN_00d50b20();
          lVar3 = local_28;
        }
      }
      if ((lVar3 != 0) && (g_028b0ee0 == '\0')) {
        g_028b0ee0 = '\x01';
        FUN_00e8cb90();
        lVar3 = local_28;
      }
      if ((local_20 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_027e0cb0;
      if (g_027e0cb0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d20ca0(g_0241ea30);
      lVar3 = g_028b0ee8;
      if (g_028b0ee8 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_00d50b00();
            lVar3 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar3 = local_28;
        }
        bVar1 = g_028b0ee8 != 0;
        g_028b0ee8 = lVar3;
        if (bVar1) {
          FUN_00d50b20();
          lVar3 = local_28;
        }
      }
      if ((lVar3 != 0) && (g_028b0ef0 == '\0')) {
        g_028b0ef0 = '\x01';
        FUN_00e8cb90();
        lVar3 = local_28;
      }
      if ((local_20 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_027e0cb8;
      if (g_027e0cb8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d20ca0(g_0241ea30);
      lVar3 = g_028b0ef8;
      if (g_028b0ef8 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_00d50b00();
            lVar3 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar3 = local_28;
        }
        bVar1 = g_028b0ef8 != 0;
        g_028b0ef8 = lVar3;
        if (bVar1) {
          FUN_00d50b20();
          lVar3 = local_28;
        }
      }
      if ((lVar3 != 0) && (g_028b0f00 == '\0')) {
        g_028b0f00 = '\x01';
        FUN_00e8cb90();
        lVar3 = local_28;
      }
      if ((local_20 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      g_028b0ee1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b0ee1 = '\x01';
      FUN_00e8cb70();
    }
  }
  *(void*)(this_ptr + 0x194) = 1;
  return;
}

