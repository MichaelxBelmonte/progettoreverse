// Function: FUN_01be7d10
// Address: 01be7d10
// Size: 557 bytes
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


void FUN_01be7d10(void)

{
  int64_t lVar1;
  int64_t *arg1;
  void*this_ptr;
  int64_t *local_38;
  char local_30;
  
  (**(code **)(*arg1 + 0x958))();
  if (local_30 == '\0') {
    if (local_38 == (int64_t *)0x0) goto LAB_01be7f25;
    FUN_00d50b00();
  }
  else if (local_38 == (int64_t *)0x0) goto LAB_01be7f25;
  lVar1 = arg1[0x34];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_38 + 0x968))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = arg1[0x2f];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_38 + 0x988))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = arg1[0x30];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_38 + 0x990))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = arg1[0x31];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_38 + 0x998))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = arg1[0x32];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_0010acd0();
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  (**(code **)(*local_38 + 0x9e8))();
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_01be7f25:
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
  return;
}

