// Function: FUN_011afb50
// Address: 011afb50
// Size: 4495 bytes
// Class: MUSpectrumShaper
// String references:
//   "bool"
//   "float"
//   "MULSSGenerator"
//   "GNInt"
//   "_parameterSet"
//   "_didRequestCacheValidation"
//   "_canUseSpectrumShaper"
//   "_processSpectrumShaper"
//   "_spectrumShaperParameterSet"
//   "MUSpectrumShaperEnvelope"
//   "_isBypassed"
//   "MUSpectrumShaperSpectrum"
//   "_processEqualizer"
//   "_processLowerSpectrum"
//   "_processUpperSpectrum"
//   "_overallSpectrumFundamentalPitchIndex"
//   "_overallSpectrumFreqPerBin"
//   "_referenceMagnitudeSum"
//   "_maximumMagnitudeSum"
//   "_synthAmps"
//   ... +8 more
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


void FUN_011afb50(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t arg1;
  void*this_ptr;
  void*puVar11;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_02607248;
  this_ptr[7] = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b10b0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_spectrumShaperParameterSet";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MULSSGenerator");
  }
  this_ptr[8] = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b11a0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_parameterSet";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSpectrumShaperSpectrum");
  }
  this_ptr[9] = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b1290();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_parameterSet";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSpectrumShaperSpectrum");
  }
  puVar11 = this_ptr + 10;
  this_ptr[10] = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b1380();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_parameterSet";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSpectrumShaperSpectrum",param_3,param_4,puVar11);
  }
  this_ptr[0xb] = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b1470();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_parameterSet";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSpectrumShaperSpectrum");
  }
  this_ptr[0xc] = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b1560();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_parameterSet";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSpectrumShaperEnvelope");
  }
  this_ptr[0xd] = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b1650();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_parameterSet";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSpectrumShaperEnvelope");
  }
  this_ptr[0xe] = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b1740();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_parameterSet";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSpectrumShaperEnvelope");
  }
  *(void*)(this_ptr + 0xf) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x79) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x7a) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x7b) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x7c) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x7d) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_011b1830();
  FUN_011b1910();
  FUN_011b19f0();
  FUN_011b1ad0();
  FUN_011b1bb0();
  *(void*)(this_ptr + 0x15) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xac) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x16) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb4) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x17) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xbc) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x18) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xc4) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x19) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xcc) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1a) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b1c90();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd4) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd5) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd6) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd7) = 0;
  lVar9 = FUN_006ddb00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

