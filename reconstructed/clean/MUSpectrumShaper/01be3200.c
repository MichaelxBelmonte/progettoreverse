// Function: FUN_01be3200
// Address: 01be3200
// Size: 677 bytes
// Class: MUSpectrumShaper
// String references:
//   "GNEditingContext"
//   "GNPropertyObserver"
//   "MULSSGenerator"
//   "MUSpectrumShaperController"
//   "_multipleSelectionHandler"
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


void FUN_01be3200(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_00006550();
  this_ptr[2] = &g_025768d0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_0265abf8;
  this_ptr[2] = &g_0265b060;
  this_ptr[3] = 0;
  lVar2 = FUN_01bdac40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01be35b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_multipleSelectionHandler";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSpectrumShaperController");
  }
  this_ptr[4] = 0;
  lVar2 = FUN_01bdac40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01be36a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSGenerator");
  }
  this_ptr[5] = 0;
  lVar2 = FUN_01bdac40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01be3790();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSGenerator");
  }
  this_ptr[6] = 0;
  lVar2 = FUN_01bdac40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01be3880();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSGenerator");
  }
  this_ptr[7] = 0;
  lVar2 = FUN_01bdac40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01be3970();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSGenerator");
  }
  this_ptr[8] = 0;
  lVar2 = FUN_01bdac40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01be3a60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingContext");
  }
  return;
}

