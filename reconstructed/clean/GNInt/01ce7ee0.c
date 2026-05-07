// Function: FUN_01ce7ee0
// Address: 01ce7ee0
// Size: 888 bytes
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


void FUN_01ce7ee0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  void*puVar5;
  int64_t *this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  
  FUN_01e3b710();
  *(void*)((int64_t)this_ptr + 0x18a) = 1;
  *(void*)((int64_t)this_ptr + 0x184) = 0x41900000;
  *(void*)(this_ptr + 5) = 1;
  uVar3 = g_0241fce8;
  *(void*)((int64_t)this_ptr + 0x10c) = 0;
  *(void*)((int64_t)this_ptr + 0x114) = uVar3;
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00074c30();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = (int64_t *)this_ptr[0x28];
  if (plVar1 == plVar4) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x28] = (int64_t)plVar4;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)this_ptr[0x28] + 0x4d0))(0,g_0241fcf0);
  FUN_01d9af20();
  (**(code **)(*(int64_t *)this_ptr[0x28] + 0x558))();
  FUN_01d97870();
  (**(code **)(*this_ptr + 0x998))();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_01cf3e00();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = this_ptr[0x28];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x450))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01d94ee0();
  (**(code **)(*this_ptr + 0x570))();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = (int64_t *)this_ptr[0x29];
  if (plVar1 == plVar4) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x29] = (int64_t)plVar4;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)this_ptr[0x29] + 0x4d0))(0,g_0241fcf0);
  (**(code **)(*(int64_t *)this_ptr[0x29] + 0x570))();
  lVar2 = this_ptr[0x29];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_01d978b0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x32) = 1;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar5 + 0x27) = 0;
  puVar5[0x2e] = 0;
  *(void*)(puVar5 + 0x2f) = 0;
  puVar5[0x30] = 0;
  *(void*)(puVar5 + 0x31) = 0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  *(void*)(puVar5 + 0x2a) = 0;
  puVar5[0x2b] = 0;
  puVar5[0x2c] = 0;
  *(void*)((int64_t)puVar5 + 0x165) = 0;
  *(void*)((int64_t)puVar5 + 0x18c) = 0;
  *(void*)((int64_t)puVar5 + 0x194) = 0;
  *(void*)((int64_t)puVar5 + 0x199) = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  puVar5[0x39] = 0;
  *puVar5 = &g_02675388;
  puVar5[2] = &g_02675e68;
  *(void*)(puVar5 + 0x3a) = 0;
  FUN_00d500e0();
  (**(code **)(*this_ptr + 0x918))();
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

