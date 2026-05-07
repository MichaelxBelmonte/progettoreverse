// Function: FUN_01bd0660
// Address: 01bd0660
// Size: 818 bytes
// Class: MUSpectrumShaper
// String references:
//   "MUSpectrumShaperController"
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


void FUN_01bd0660(uint64_t param_1,float param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int64_t *this_ptr;
  int iVar7;
  bool bVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar9;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01e41c80();
  if ((g_02725b90 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027e5c58 = FUN_00015ff0();
    g_027e5c40 = "MUSpectrumShaperController";
    g_027e5c48 = 0xa0;
    g_027e5c50 = FUN_006594f0;
    g_027e5c60 = 0;
    ram_00000000027e5c68 = 0;
    g_027e5c70 = 0;
    ram_00000000027e5c78 = 0;
    g_027e5c80 = 0;
    ram_00000000027e5c88 = 0;
    g_027e5c90 = 0;
    ram_00000000027e5c98 = 0;
    g_027e5ca0 = 0;
    ram_00000000027e5ca8 = 0;
    g_027e5cb0 = 0;
    ram_00000000027e5cb8 = 0;
    g_027e5cc0 = 0;
    ram_00000000027e5cc8 = 0;
    g_027e5cd0 = 0;
    ram_00000000027e5cd8 = 0;
    g_027e5ce0 = 0;
    ram_00000000027e5ce8 = 0;
    g_027e5cf0 = 0;
    ram_00000000027e5cf8 = 0;
    g_027e5d00 = 0;
    ___cxa_guard_release();
  }
  local_50 = FUN_00e86210();
  local_48 = 0;
  uVar9 = extraout_XMM0_Da;
  if (local_50 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_48 = '\x01';
  FUN_01d824e0(uVar9,&local_50);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    (**(code **)(*this_ptr + 0x4d8))();
    iVar5 = 1;
    if (*(int64_t **)(lVar2 + 0x88) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar2 + 0x88) + 0x4a0))();
      iVar4 = *(int *)(local_40 + 0xc);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      if (iVar4 != 0 && 0.0 < param_2) {
        iVar4 = FUN_00e7d780(param_2 / g_0241df1c);
        iVar5 = 1;
        if (0 < iVar4) {
          iVar5 = iVar4;
        }
      }
    }
    lVar1 = *(int64_t *)(lVar2 + 0x90);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00c8e4f0();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00c92170();
    uVar9 = FUN_00c92160();
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b20();
    }
    iVar4 = *(int *)(lVar3 + 0x18);
    iVar7 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar7 = iVar4;
    }
    if (iVar5 < iVar7 >> 2) {
      do {
        bVar8 = iVar4 != 0;
        iVar4 = 0;
        if (bVar8) {
          uVar9 = FUN_00c8e340(uVar9,0);
          iVar4 = *(int *)(lVar3 + 0x18);
        }
        iVar6 = iVar4 + 3;
        if (-1 < iVar4) {
          iVar6 = iVar4;
        }
      } while (iVar5 < iVar6 >> 2);
      FUN_01bd0ba0();
      if (lVar3 != 0) goto LAB_01bd088c;
    }
    else {
LAB_01bd088c:
      FUN_00d50b20();
    }
    if (iVar5 < iVar7 >> 2) goto LAB_01bd08a1;
  }
  FUN_01bd0d90();
LAB_01bd08a1:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}

