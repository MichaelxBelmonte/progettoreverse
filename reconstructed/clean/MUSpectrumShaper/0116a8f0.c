// Function: FUN_0116a8f0
// Address: 0116a8f0
// Size: 913 bytes
// Class: MUSpectrumShaper
// String references:
//   "MUElement"
//   "MULSSGenerator"
//   "GNInt"
//   "MUComponentSpectrumRenderer"
//   "MULSSComponentRenderer"
//   "MULSSElementRenderer"
//   "_assembledElementRendererCount"
//   "MUSpectrumShaperDisplayInfoBuffer"
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


void FUN_0116a8f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_010f3160();
  *this_ptr = &g_025e3768;
  this_ptr[0x1d] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116ae80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSGenerator");
  }
  puVar4 = this_ptr + 0x1e;
  this_ptr[0x1e] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116af70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSElementRenderer",param_3,param_4,puVar4);
  }
  this_ptr[0x1f] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116b060();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSElementRenderer");
  }
  *(void*)(this_ptr + 0x20) = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_0116b150();
  this_ptr[0x22] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116b230();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSComponentRenderer");
  }
  this_ptr[0x23] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116b320();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUComponentSpectrumRenderer");
  }
  this_ptr[0x24] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116b410();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  this_ptr[0x25] = 0;
  lVar2 = FUN_0116a2e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0116b500();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSpectrumShaperDisplayInfoBuffer");
  }
  return;
}

