// Function: FUN_017e6420
// Address: 017e6420
// Size: 1471 bytes
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


void FUN_017e6420(char *param_1)

{
  void *pvVar1;
  int64_t lVar2;
  char *pcVar3;
  char *pcVar4;
  void* pVar5;
  int iVar6;
  int64_t this_ptr;
  uint64_t uVar7;
  uint uVar8;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58 [8];
  char *local_50;
  uint64_t local_48;
  int local_40;
  char local_38 [8];
  
  uVar8 = *(uint *)(*(int64_t *)(this_ptr + 0x48) + 0xc);
  uVar7 = (uint64_t)uVar8;
  if (0 < (int)uVar8) {
    while( true ) {
      uVar8 = uVar8 - 1;
      param_1 = (char *)(uint64_t)uVar8;
      pvVar1 = _pthread_getspecific(uVar8);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017e1840();
      if ((int64_t)uVar7 < 2) break;
      uVar7 = uVar7 - 1;
    }
  }
  if (*(char **)(this_ptr + 0x50) != (char *)0x0) {
    local_58[0] = '\0';
    local_60 = 0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_50 = *(char **)(this_ptr + 0x50);
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar6 = -local_48._4_4_;
        }
        else {
          iVar6 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar6);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar6 = 0;
        }
        local_48 = CONCAT44(iVar6,(int)local_48);
      }
      lVar2 = (int64_t)(int)local_48;
      iVar6 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar6);
      if (*(int *)(local_50 + 0xc) <= iVar6) break;
      local_60 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar2 * 8);
      pvVar1 = _pthread_getspecific((void*)*(int64_t *)(local_50 + 0x10));
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017e0330();
    }
    param_1 = local_50;
    FUN_017e8120();
  }
  pvVar1 = _pthread_getspecific((void*)param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017de950();
  if ((local_58[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    pvVar1 = _pthread_getspecific((void*)param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017de950();
    pvVar1 = _pthread_getspecific((void*)param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017deb20();
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific((void*)param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017de970();
  }
  while( true ) {
    pVar5 = (void*)param_1;
    pvVar1 = _pthread_getspecific(pVar5);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017de9c0();
    iVar6 = *(int *)(local_60 + 0xc);
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (iVar6 == 0) break;
    pvVar1 = _pthread_getspecific(pVar5);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017de9c0();
    FUN_00d23340();
    local_38[0] = local_58[0];
    pcVar4 = local_38;
    pcVar3 = local_58;
    if (local_58[0] == '\0') {
      pcVar3 = pcVar4;
    }
    *pcVar3 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    pVar5 = (void*)pcVar4;
    pvVar1 = _pthread_getspecific(pVar5);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017de970();
    if ((local_38[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar5);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar1 = _pthread_getspecific(pVar5);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017de9c0();
    FUN_00d23340();
    local_38[0] = local_58[0];
    param_1 = local_38;
    pcVar4 = local_58;
    if (local_58[0] == '\0') {
      pcVar4 = param_1;
    }
    *pcVar4 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    FUN_017deb20();
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

