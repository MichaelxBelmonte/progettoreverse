// Function: FUN_01e3b960
// Address: 01e3b960
// Size: 630 bytes
// Class: GNInt
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


void FUN_01e3b960(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint8_t uVar2;
  uint32_t uVar3;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar4;
  int64_t local_28;
  char local_20;
  
  FUN_01d81f40();
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  this_ptr[3] = local_28;
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x450))();
  *(void*)((int64_t)this_ptr + 0x10c) = uVar4;
  *(void*)((int64_t)this_ptr + 0x114) = param_2;
  (**(code **)(*(int64_t *)*arg1 + 0x428))();
  (**(code **)(*this_ptr + 0x558))();
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  this_ptr[6] = local_28;
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = this_ptr[8];
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        this_ptr[8] = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = this_ptr[8];
        this_ptr[8] = local_28;
      }
    }
    else {
      local_20 = '\0';
      this_ptr[8] = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
  *(void*)(this_ptr + 9) = uVar2;
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = this_ptr[10];
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        this_ptr[10] = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = this_ptr[10];
        this_ptr[10] = local_28;
      }
    }
    else {
      local_20 = '\0';
      this_ptr[10] = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
  *(void*)(this_ptr + 0xb) = uVar3;
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = this_ptr[0xc];
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        this_ptr[0xc] = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = this_ptr[0xc];
        this_ptr[0xc] = local_28;
      }
    }
    else {
      local_20 = '\0';
      this_ptr[0xc] = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  FUN_00e88810();
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  return;
}

