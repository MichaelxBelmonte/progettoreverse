// Function: FUN_00d045f0
// Address: 00d045f0
// Size: 1387 bytes
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


float FUN_00d045f0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  char *pcVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar6;
  float fVar7;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  float local_50;
  float local_4c;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar2 = g_027259e0;
  if (*arg1 == 0) {
    return 0.0;
  }
  if (g_027259e0 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  FUN_00d91000(1,&local_a0);
  plVar1 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  local_4c = 0.0;
  if (*(int *)((int64_t)plVar1 + 0xc) == 0) goto LAB_00d04b3f;
  FUN_00d23310();
  plVar3 = local_48;
  local_38[0] = local_40[0];
  pcVar5 = local_40;
  if (local_40[0] == '\0') {
    pcVar5 = local_38;
  }
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_0270b790;
  if (g_0270b790 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar2;
  local_88 = '\x01';
  cVar4 = (**(code **)(*plVar3 + 0x50))();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d23310();
    plVar3 = local_48;
    local_38[0] = local_40[0];
    pcVar5 = local_40;
    if (local_40[0] == '\0') {
      pcVar5 = local_38;
    }
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = g_026fce10;
    if (g_026fce10 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar2;
    local_78 = '\x01';
    cVar4 = (**(code **)(*plVar3 + 0x50))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d23310();
      plVar3 = local_48;
      local_38[0] = local_40[0];
      pcVar5 = local_40;
      if (local_40[0] == '\0') {
        pcVar5 = local_38;
      }
      *pcVar5 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38[0] == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_40[0] = '\0';
      FUN_00d23f50();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d23310();
    plVar3 = local_48;
    local_38[0] = local_40[0];
    pcVar5 = local_40;
    if (local_40[0] == '\0') {
      pcVar5 = local_38;
    }
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_40[0] = '\0';
    FUN_00d23f50();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int *)((int64_t)plVar1 + 0xc) == 2) {
    FUN_00d23310();
    plVar3 = local_48;
    pcVar5 = local_40;
    if (local_40[0] == '\0') {
      pcVar5 = local_38;
    }
    local_38[0] = local_40[0];
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_4c = (float)FUN_00d8d7b0();
    if ((local_38[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(plVar1[2] + 8);
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00d99300();
    plVar3 = local_48;
    plVar6 = plVar1;
    if (local_48 == plVar1) {
LAB_00d04a51:
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar6 = plVar3;
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_00d04a51;
      }
      plVar6 = local_48;
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    lVar2 = g_0277c3f8;
    if (g_0277c3f8 != 0) {
      FUN_00d50b00();
    }
    local_70 = lVar2;
    local_68 = '\x01';
    cVar4 = (**(code **)(*plVar6 + 0x50))();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_0277c400;
    local_50 = g_02393944;
    if (cVar4 == '\0') {
      if (g_0277c400 != 0) {
        FUN_00d50b00();
      }
      local_60 = lVar2;
      local_58 = '\x01';
      cVar4 = (**(code **)(*plVar6 + 0x50))();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_50 = g_0240e358;
      if (cVar4 == '\0') {
        local_50 = g_02390124;
      }
    }
    FUN_00d50b20();
    local_4c = local_4c * local_50;
  }
  else {
    if (*(int *)((int64_t)plVar1 + 0xc) != 1) goto LAB_00d04b3f;
    FUN_00d23310();
    pcVar5 = local_40;
    if (local_40[0] == '\0') {
      pcVar5 = local_38;
    }
    local_38[0] = local_40[0];
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_4c = (float)FUN_00d8d7b0();
    if ((local_38[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  fVar7 = *(float *)(this_ptr + 0x18);
  if (*(float *)(this_ptr + 0x18) <= local_4c) {
    fVar7 = local_4c;
  }
  local_4c = fVar7;
  if (*(float *)(this_ptr + 0x1c) < fVar7) {
    local_4c = *(float *)(this_ptr + 0x1c);
  }
LAB_00d04b3f:
  FUN_00d50b20();
  return local_4c;
}

