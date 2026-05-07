// Function: FUN_01be64b0
// Address: 01be64b0
// Size: 615 bytes
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


void* FUN_01be64b0(void)

{
  char cVar1;
  int64_t arg1;
  void*this_ptr;
  bool bVar2;
  int64_t lVar4;
  int64_t local_b0;
  char local_a8;
  int64_t local_88;
  char local_80;
  int64_t local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  bool bVar3;
  
  if (*(int64_t *)(arg1 + 0x138) == 0) {
    local_38 = '\0';
    local_40 = (int64_t *)0x0;
  }
  else {
    FUN_01bbfb40();
  }
  FUN_01beead0();
  if ((local_80 == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    if (0 < *(int *)(local_88 + 0xc)) {
      lVar4 = 0;
      bVar3 = false;
      bVar2 = false;
      do {
        if (bVar2) {
          FUN_01bc0650();
          FUN_00d4efa0();
          FUN_00d4efa0();
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          cVar1 = (**(code **)(*local_40 + 0x50))();
          if (local_60 != 0) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          if (cVar1 != '\0') {
            FUN_01bc0650();
            FUN_002e0650();
            FUN_00d50b20();
            return this_ptr;
          }
        }
        else {
          bVar2 = bVar3;
          if (*(int64_t *)(*(int64_t *)(local_88 + 0x10) + lVar4 * 8) ==
              *(int64_t *)(arg1 + 0x138)) {
            bVar3 = true;
            bVar2 = true;
          }
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(local_88 + 0xc));
    }
    FUN_002e0650();
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

