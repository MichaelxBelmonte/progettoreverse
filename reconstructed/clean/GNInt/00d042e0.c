// Function: FUN_00d042e0
// Address: 00d042e0
// Size: 508 bytes
// Class: GNInt
// String references:
//   "%@ Hz"
//   "%@ kHz"
//   "%@ MHz"
// === GNInt properties ===
//   GNInt           _assembledElementRendererCount
//   bool            _processPeriodBased
//   bool            _usesPososc
//   bool            _resetAllPhasesAtAttack
//   bool            _continueAllPhasesByDefault
//   bool            _renderWithOriginalTime
//   float           _freqDomainFormantResolution
//   GNInt           _freqDomainFourierSize
//   float           _freqDomainPhaseResetParametersScale
//   float           _formantPitchUpCompensationFactor
//   float           _formantPitchDownCompensationFactor
//   bool            _didFail
//   GNInt           _expectedResultLength
//   GNInt           _httpStatusCode
//   bool            _isSuspended
//   SInt64          _uploadLength
//   GNInt           _receivedResultLength
//   bool            _didTimeOut
//   float           _cent
//   GNInt           _westernStandardPitchIndexOffset
//   bool            _isLoop
//   GNInt           _numerator
//   GNInt           _denominator
//   GNInt           _beats
//   GNInt           _tonalKey
//   GNInt           _tonalGender
//   float           _time
//   float           _nextBeepStartTime
//   float           _beepTime
//   float           _beepLength
//   ... +133 more


void FUN_00d042e0(float param_1)

{
  int64_t arg1;
  float fVar1;
  uint32_t uVar2;
  float fVar3;
  void*local_50;
  uint32_t local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  fVar3 = *(float *)(arg1 + 0x18);
  if (*(float *)(arg1 + 0x18) <= param_1) {
    fVar3 = param_1;
  }
  fVar1 = *(float *)(arg1 + 0x1c);
  if (fVar3 <= *(float *)(arg1 + 0x1c)) {
    fVar1 = fVar3;
  }
  if (g_02393944 <= fVar1) {
    if (g_0240e358 <= fVar1) {
      uVar2 = (**(code **)(**(int64_t **)(arg1 + 0x10) + 0x378))(fVar1 / g_0240e358);
      local_40 = local_30;
      local_48 = 1;
      local_50 = &g_024c5048;
      local_38 = 0;
      if (local_30 != 0) {
        uVar2 = FUN_00d50b00();
      }
      local_38 = '\x01';
      FUN_00d8cb40(uVar2,&local_50);
      local_50 = &g_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar2 = (**(code **)(**(int64_t **)(arg1 + 0x10) + 0x378))(fVar1 / g_02393944);
      local_40 = local_30;
      local_48 = 1;
      local_50 = &g_024c5048;
      local_38 = 0;
      if (local_30 != 0) {
        uVar2 = FUN_00d50b00();
      }
      local_38 = '\x01';
      FUN_00d8cb40(uVar2,&local_50);
      local_50 = &g_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar2 = (**(code **)(**(int64_t **)(arg1 + 0x10) + 0x378))();
    local_40 = local_30;
    local_48 = 1;
    local_50 = &g_024c5048;
    local_38 = 0;
    if (local_30 != 0) {
      uVar2 = FUN_00d50b00();
    }
    local_38 = '\x01';
    FUN_00d8cb40(uVar2,&local_50);
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

