// Function: FUN_008dab96
// Address: 008dab96
// Size: 589 bytes
// Class: MUSpectrumShaper
// String references:
//   ", "
//   "<null>"
//   "PlatformSignatureInfo("
//   "mac="
//   "win="
//   "linux="
//   "ios="
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


void FUN_008dab96(void *param_1)

{
  int64_t this_ptr;
  byte local_38;
  
  FUN_009ad920(param_1,0x16);
  FUN_009ad920();
  if (*(char *)(this_ptr + 0x48) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_008dae10();
    FUN_009ad920();
    if ((local_38 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  FUN_009ad920();
  if (*(char *)(this_ptr + 0x49) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_008dafac();
    FUN_009ad920();
    if ((local_38 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  FUN_009ad920();
  if (*(char *)(this_ptr + 0x4a) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_008db148();
    FUN_009ad920();
    if ((local_38 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  FUN_009ad920();
  if (*(char *)(this_ptr + 0x4b) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_008db2e4();
    FUN_009ad920();
    if ((local_38 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  return;
}

