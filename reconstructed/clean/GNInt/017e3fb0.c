// Function: FUN_017e3fb0
// Address: 017e3fb0
// Size: 569 bytes
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


void FUN_017e3fb0(void)

{
  int64_t lVar1;
  code *pcVar2;
  void*puVar3;
  int64_t *plVar4;
  int64_t this_ptr;
  int64_t local_38;
  char local_30;
  
  FUN_00d50100();
  FUN_00c8e710();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(int64_t *)(this_ptr + 0x50);
  if (lVar1 == local_38) {
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x50) = local_38;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e710();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(int64_t *)(this_ptr + 0x58);
  if (lVar1 == local_38) {
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x58) = local_38;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025683c0;
  pcVar2 = g_025683d8;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(int64_t *)(this_ptr + 0x68);
  *(void**)(this_ptr + 0x68) = puVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025683c0;
  (*pcVar2)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(int64_t *)(this_ptr + 0x60);
  *(void**)(this_ptr + 0x60) = puVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025683c0;
  (*pcVar2)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(int64_t *)(this_ptr + 0x70);
  *(void**)(this_ptr + 0x70) = puVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  lVar1 = *(int64_t *)(this_ptr + 0xd0);
  *(int64_t **)(this_ptr + 0xd0) = plVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

