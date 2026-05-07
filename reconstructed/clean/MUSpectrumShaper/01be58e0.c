// Function: FUN_01be58e0
// Address: 01be58e0
// Size: 701 bytes
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


int FUN_01be58e0(void)

{
  int iVar1;
  int64_t *this_ptr;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t local_b0;
  char local_a8;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_40;
  char local_38;
  
  if (this_ptr[0x27] != 0) {
    FUN_01bbfb40();
    plVar2 = local_40;
    if (local_38 != '\0') goto LAB_01be593f;
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01be593f;
    }
  }
  plVar2 = (int64_t *)0x0;
LAB_01be593f:
  FUN_01bf21a0();
  uVar3 = (**(code **)(*this_ptr + 0x920))();
  if (this_ptr[0x27] == 0) {
    local_68 = '\0';
    local_70 = 0;
  }
  else {
    FUN_01bbfb40();
  }
  FUN_01be8270();
  FUN_01bcee20();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_80 = local_40;
  local_78 = '\0';
  iVar1 = (**(code **)(*(int64_t *)this_ptr[0x27] + 0x388))(0,&local_80);
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar1 == 0) {
    FUN_01c023b0();
  }
  else {
    (**(code **)(*plVar2 + 0x930))();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d50b00();
    FUN_01c025c0(uVar3,&stack0xffffffffffffffa0,0);
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return iVar1;
}

