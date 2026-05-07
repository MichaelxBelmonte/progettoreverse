// Function: FUN_0197d460
// Address: 0197d460
// Size: 1032 bytes
// Class: MUSpectrumShaper
// String references:
//   "MUSpectrumShaperSlider"
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


void FUN_0197d460(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t *local_30;
  char local_28;
  
  lVar2 = g_027e0c20;
  if (g_027e0c20 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_90 = lVar2;
  local_88 = '\x01';
  pplVar5 = &local_30;
  uVar6 = FUN_01e57490(param_1,&local_90);
  plVar1 = local_30;
  // [STATIC_INIT: property registration]
  if (plVar1 == (int64_t *)0x0) {
LAB_0197d4db:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_0197d4db;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  lVar2 = g_027e4c48;
  if (plVar1 != (int64_t *)0x0) {
    if (g_027e4c48 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar2;
    local_78 = '\x01';
    FUN_01bd1950(0);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027e0c28;
    if (g_027e0c28 != 0) {
      FUN_00d50b00();
    }
    local_70 = lVar2;
    local_68 = '\x01';
    FUN_01bd1950(g_02390124);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    uVar6 = FUN_00d50b20();
  }
  lVar2 = g_027e0c30;
  if (g_027e0c30 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  pplVar5 = &local_30;
  FUN_01e57490(uVar6,&local_60);
  plVar1 = local_30;
  // [STATIC_INIT: property registration]
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_0197d629;
  }
  pplVar5 = (int64_t **)&g_02802688;
LAB_0197d629:
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027e0c38;
  if (plVar1 != (int64_t *)0x0) {
    if (g_027e0c38 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar2;
    local_48 = '\x01';
    FUN_01bd1950(0);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027e0c40;
    if (g_027e0c40 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar2;
    local_38 = '\x01';
    FUN_01bd1950(g_02390124);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_01e534b0();
  return;
}

