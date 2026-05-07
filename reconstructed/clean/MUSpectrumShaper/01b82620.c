// Function: FUN_01b82620
// Address: 01b82620
// Size: 744 bytes
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


void FUN_01b82620(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *this_ptr;
  int64_t lVar3;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (this_ptr[0x3c] == 0) {
    plVar1 = (int64_t *)FUN_01b83030();
    (**(code **)(*plVar1 + 0x18))();
    lVar3 = this_ptr[0x3c];
    this_ptr[0x3c] = (int64_t)plVar1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x978))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *local_60 + 0x20))();
    local_70 = local_40;
    local_68 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        (**(code **)(*local_40 + 0x10))();
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    FUN_01aa6800();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      (**(code **)(*local_70 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x3d] == 0) {
    plVar1 = (int64_t *)FUN_01b83030();
    (**(code **)(*plVar1 + 0x18))();
    lVar3 = this_ptr[0x3d];
    this_ptr[0x3d] = (int64_t)plVar1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x978))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *local_60 + 0x20))();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        (**(code **)(*local_40 + 0x10))();
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_01aa6800();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = 0;
  if (this_ptr[0x3e] != 0) {
    FUN_019214e0();
    lVar3 = this_ptr[0x3e];
  }
  lVar2 = this_ptr[0x3c];
  if ((lVar3 != lVar2) || (lVar2 = this_ptr[0x3d], lVar3 != lVar2)) {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0x3e] = lVar2;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  local_80 = *param_2;
  local_78 = '\0';
  FUN_0191dac0(param_1,&local_80);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  return;
}

