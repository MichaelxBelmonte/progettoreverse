// Function: FUN_0176f970
// Address: 0176f970
// Size: 717 bytes
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


int64_t * FUN_0176f970(void* param_1)

{
  int64_t lVar1;
  code *pcVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t lVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *this_ptr;
  int iVar9;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_01a016a0();
  local_38 = plVar3;
  (**(code **)(*plVar3 + 0x18))();
  pvVar4 = _pthread_getspecific(param_1);
  lVar7 = g_027cd5a0;
  plVar3 = local_38;
  if ((pvVar4 != (void *)0x0) &&
     (lVar5 = FUN_00e8b990(), lVar7 = g_027cd5a0, plVar3 = local_38, lVar5 != 0)) {
    plVar3 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  g_027cd5a0 = lVar7;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  lVar5 = g_027cd5c0;
  if (g_027cd5c0 != 0) {
    FUN_00d50b00();
  }
  local_68 = lVar5;
  local_60 = '\x01';
  local_58 = 0;
  local_50 = '\0';
  plVar8 = &local_58;
  FUN_00d31230(plVar8,&local_68);
  lVar5 = local_48;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if (plVar3[8] != lVar5) {
    FUN_00d64850();
    lVar1 = plVar3[8];
    if (lVar1 != lVar5) {
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      plVar3[8] = lVar5;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  pcVar2 = g_025ffd78;
  iVar9 = 0;
  do {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_025ffd60;
    puVar6[7] = 0;
    puVar6[8] = 0;
    (*pcVar2)();
    pvVar4 = _pthread_getspecific((void*)plVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01779ed0((float)iVar9 * g_023908e0);
    pvVar4 = _pthread_getspecific((void*)plVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01779f40();
    pvVar4 = _pthread_getspecific((void*)plVar8);
    if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      plVar8 = local_38;
    }
    FUN_0176fde0();
    FUN_00d50b20();
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0xd);
  *this_ptr = (int64_t)local_38;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

