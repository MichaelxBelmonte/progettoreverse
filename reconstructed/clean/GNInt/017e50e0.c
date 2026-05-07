// Function: FUN_017e50e0
// Address: 017e50e0
// Size: 812 bytes
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


void FUN_017e50e0(void)

{
  int64_t lVar1;
  code *pcVar2;
  char cVar3;
  int64_t *plVar4;
  void *pvVar5;
  uint64_t uVar6;
  code *pcVar7;
  void*puVar8;
  void* pVar9;
  int64_t this_ptr;
  uint64_t local_a0;
  code *local_98;
  int64_t local_70;
  char local_68;
  void*local_58;
  char local_50;
  int local_40;
  
  plVar4 = (int64_t *)FUN_010eca10();
  (**(code **)(*plVar4 + 0x18))();
  lVar1 = *(int64_t *)(this_ptr + 0x58);
  *(int64_t **)(this_ptr + 0x58) = plVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pcVar2 = g_02572370;
  local_68 = '\0';
  local_70 = 0;
  pcVar7 = g_02572370;
  do {
    do {
      pvVar5 = _pthread_getspecific((void*)pcVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = FUN_00e7bdb0();
      pcVar7 = FUN_00e7bdb0();
      cVar3 = FUN_01252960(pcVar7,uVar6,&local_70,&local_a0);
      pVar9 = (void*)pcVar7;
      if (cVar3 == '\0') {
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        return;
      }
    } while (local_70 == 0);
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_02572358;
    (*pcVar2)();
    FUN_017e4b40();
    if (local_50 == '\0') {
      if (local_58 != (void*)0x0) {
        FUN_00d50b00();
        goto LAB_017e5251;
      }
    }
    else if (local_58 != (void*)0x0) {
LAB_017e5251:
      local_40 = -1;
      while (local_40 = local_40 + 1, local_40 < *(int *)((int64_t)local_58 + 0xc)) {
        pvVar5 = _pthread_getspecific((void*)local_58[2]);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_017dde70();
        if (cVar3 != '\0') {
          FUN_00d24b60(0,FUN_017db4e0,0);
        }
      }
      FUN_01916320();
      pVar9 = (void*)local_58;
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = '\0';
    pcVar7 = local_98;
    FUN_012502a0(local_98,local_a0,0);
    local_58 = puVar8;
    if (puVar8 != (void*)0x0) {
      FUN_00d50b20();
    }
  } while( true );
}

