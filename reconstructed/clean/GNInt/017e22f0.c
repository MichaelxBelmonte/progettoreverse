// Function: FUN_017e22f0
// Address: 017e22f0
// Size: 4758 bytes
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


void FUN_017e22f0(int64_t *param_1,int64_t *param_2,uint32_t param_3)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  void*puVar4;
  int64_t *plVar5;
  uint32_t unaff_ESI;
  int64_t *this_ptr;
  bool bVar6;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  void*local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  void*local_120;
  char local_118;
  void*local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  void*local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  void*local_d0;
  char local_c8;
  void*local_c0;
  char local_b8;
  void*local_b0;
  char local_a8;
  void*local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  void*local_80;
  char local_78;
  void*local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  uint32_t local_34;
  
  local_40 = param_1;
  local_34 = param_3;
  if ((g_028af4e8 == (void*)0x0) || (g_028af4f1 == '\0')) {
    FUN_00e8cb50();
    if (g_028af4e8 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_025683c0;
      (*g_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar6 = g_028af4e8 == (void*)0x0;
      g_028af4e8 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), g_028af4e8 != (void*)0x0)) && (g_028af4f0 == '\0')
         ) {
        g_028af4f0 = '\x01';
        FUN_00e8cb90();
      }
      puVar4 = g_028af4e8;
      iVar1 = *(int *)(g_028af4e8 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 0;
      puVar4 = g_028af4e8;
      iVar1 = *(int *)(g_028af4e8 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 3;
      puVar4 = g_028af4e8;
      iVar1 = *(int *)(g_028af4e8 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 5;
      puVar4 = g_028af4e8;
      iVar1 = *(int *)(g_028af4e8 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 7;
      puVar4 = g_028af4e8;
      iVar1 = *(int *)(g_028af4e8 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 10;
      g_028af4f1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028af4f1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028af4f8 == (void*)0x0) || (g_028af501 == '\0')) {
    FUN_00e8cb50();
    if (g_028af4f8 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_025683c0;
      (*g_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar6 = g_028af4f8 == (void*)0x0;
      g_028af4f8 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), g_028af4f8 != (void*)0x0)) && (g_028af500 == '\0')
         ) {
        g_028af500 = '\x01';
        FUN_00e8cb90();
      }
      puVar4 = g_028af4f8;
      iVar1 = *(int *)(g_028af4f8 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 0;
      puVar4 = g_028af4f8;
      iVar1 = *(int *)(g_028af4f8 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 2;
      puVar4 = g_028af4f8;
      iVar1 = *(int *)(g_028af4f8 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 4;
      puVar4 = g_028af4f8;
      iVar1 = *(int *)(g_028af4f8 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 7;
      puVar4 = g_028af4f8;
      iVar1 = *(int *)(g_028af4f8 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 9;
      g_028af501 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028af501 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028af508 == (void*)0x0) || (g_028af511 == '\0')) {
    FUN_00e8cb50();
    if (g_028af508 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_025683c0;
      (*g_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar6 = g_028af508 == (void*)0x0;
      g_028af508 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), g_028af508 != (void*)0x0)) && (g_028af510 == '\0')
         ) {
        g_028af510 = '\x01';
        FUN_00e8cb90();
      }
      puVar4 = g_028af508;
      iVar1 = *(int *)(g_028af508 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 0;
      puVar4 = g_028af508;
      iVar1 = *(int *)(g_028af508 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 3;
      puVar4 = g_028af508;
      iVar1 = *(int *)(g_028af508 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 6;
      puVar4 = g_028af508;
      iVar1 = *(int *)(g_028af508 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 8;
      puVar4 = g_028af508;
      iVar1 = *(int *)(g_028af508 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 10;
      g_028af511 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028af511 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028af518 == (void*)0x0) || (g_028af521 == '\0')) {
    FUN_00e8cb50();
    if (g_028af518 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_025683c0;
      (*g_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar6 = g_028af518 == (void*)0x0;
      g_028af518 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), g_028af518 != (void*)0x0)) && (g_028af520 == '\0')
         ) {
        g_028af520 = '\x01';
        FUN_00e8cb90();
      }
      puVar4 = g_028af518;
      iVar1 = *(int *)(g_028af518 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 0;
      puVar4 = g_028af518;
      iVar1 = *(int *)(g_028af518 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 3;
      puVar4 = g_028af518;
      iVar1 = *(int *)(g_028af518 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 5;
      puVar4 = g_028af518;
      iVar1 = *(int *)(g_028af518 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 8;
      puVar4 = g_028af518;
      iVar1 = *(int *)(g_028af518 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 10;
      g_028af521 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028af521 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028af528 == (void*)0x0) || (g_028af531 == '\0')) {
    FUN_00e8cb50();
    if (g_028af528 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_025683c0;
      (*g_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar6 = g_028af528 == (void*)0x0;
      g_028af528 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), g_028af528 != (void*)0x0)) && (g_028af530 == '\0')
         ) {
        g_028af530 = '\x01';
        FUN_00e8cb90();
      }
      puVar4 = g_028af528;
      iVar1 = *(int *)(g_028af528 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 0;
      puVar4 = g_028af528;
      iVar1 = *(int *)(g_028af528 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 2;
      puVar4 = g_028af528;
      iVar1 = *(int *)(g_028af528 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 4;
      puVar4 = g_028af528;
      iVar1 = *(int *)(g_028af528 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 8;
      puVar4 = g_028af528;
      iVar1 = *(int *)(g_028af528 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 10;
      g_028af531 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028af531 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028af538 == (void*)0x0) || (g_028af541 == '\0')) {
    FUN_00e8cb50();
    if (g_028af538 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_025683c0;
      (*g_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar6 = g_028af538 == (void*)0x0;
      g_028af538 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), g_028af538 != (void*)0x0)) && (g_028af540 == '\0')
         ) {
        g_028af540 = '\x01';
        FUN_00e8cb90();
      }
      puVar4 = g_028af538;
      iVar1 = *(int *)(g_028af538 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 0;
      puVar4 = g_028af538;
      iVar1 = *(int *)(g_028af538 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 2;
      puVar4 = g_028af538;
      iVar1 = *(int *)(g_028af538 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 3;
      puVar4 = g_028af538;
      iVar1 = *(int *)(g_028af538 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 6;
      puVar4 = g_028af538;
      iVar1 = *(int *)(g_028af538 + 3);
      FUN_00c8e340();
      *(void*)(puVar4[2] + (int64_t)iVar1) = 10;
      g_028af541 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028af541 = '\x01';
      FUN_00e8cb70();
    }
  }
  switch(unaff_ESI) {
  case 0:
    FUN_01794400(&switchD_017e2c7e::switchdataD_017e3c28,local_34);
    break;
  case 1:
    FUN_017936d0(&switchD_017e2c7e::switchdataD_017e3c28,local_34);
    break;
  case 2:
    local_170 = *local_40;
    local_168 = '\0';
    FUN_017921e0(local_34,&local_170,0);
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 3:
    local_160 = *param_2;
    local_158 = '\0';
    local_150 = *local_40;
    local_148 = '\0';
    FUN_017921e0(local_34,&local_150,1);
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 4:
    cVar3 = FUN_017176e0();
    if (cVar3 == '\0') {
      local_130 = *local_40;
      local_128 = '\0';
      cVar3 = FUN_017175c0();
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        cVar3 = FUN_01717530();
        if (cVar3 == '\0') {
          cVar3 = FUN_01716be0();
          plVar5 = (int64_t *)&g_028af4f8;
          if (cVar3 == '\0') {
            cVar3 = FUN_01716c00();
            if (cVar3 == '\0') {
              FUN_01715480();
              cVar3 = FUN_01716980();
              if (cVar3 == '\0') {
                FUN_01715480();
                FUN_01716980();
                plVar5 = (int64_t *)&g_028af4e8;
              }
            }
            else {
              plVar5 = (int64_t *)&g_028af4e8;
            }
          }
          FUN_01715620();
          local_100 = *plVar5;
          if (local_100 != 0) {
            FUN_00d50b00();
          }
          local_f8 = '\x01';
          FUN_017167a0();
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_01715620();
          local_110 = g_028af508;
          if (g_028af508 != (void*)0x0) {
            FUN_00d50b00();
          }
          local_108 = '\x01';
          FUN_017167a0();
          if ((local_108 != '\0') && (local_110 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_01715620();
        local_120 = g_028af518;
        if (g_028af518 != (void*)0x0) {
          FUN_00d50b00();
        }
        local_118 = '\x01';
        FUN_017167a0();
        if ((local_118 != '\0') && (local_120 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_01715620();
      local_140 = g_028af4f8;
      if (g_028af4f8 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_138 = '\x01';
      FUN_017167a0();
      if ((local_138 != '\0') && (local_140 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    break;
  case 5:
    cVar3 = FUN_017176e0();
    if (cVar3 == '\0') {
      local_e0 = *local_40;
      local_d8 = '\0';
      cVar3 = FUN_017175c0();
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        cVar3 = FUN_01717530();
        FUN_01715620();
        puVar4 = g_028af508;
        local_b0 = g_028af4e8;
        if (cVar3 == '\0') {
          if (g_028af4e8 != (void*)0x0) {
            FUN_00d50b00();
          }
          local_a8 = '\x01';
          FUN_017167a0();
          if ((local_a8 != '\0') && (local_b0 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (g_028af508 != (void*)0x0) {
            FUN_00d50b00();
          }
          local_c0 = puVar4;
          local_b8 = '\x01';
          FUN_017167a0();
          if ((local_b8 != '\0') && (local_c0 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_01715620();
        local_d0 = g_028af518;
        if (g_028af518 != (void*)0x0) {
          FUN_00d50b00();
        }
        local_c8 = '\x01';
        FUN_017167a0();
        if ((local_c8 != '\0') && (local_d0 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_01715620();
      local_f0 = g_028af4e8;
      if (g_028af4e8 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_e8 = '\x01';
      FUN_017167a0();
      if ((local_e8 != '\0') && (local_f0 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    break;
  case 6:
    cVar3 = FUN_017176e0();
    if (cVar3 != '\0') {
      FUN_01715620();
      local_a0 = g_028af528;
      if (g_028af528 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_98 = '\x01';
      FUN_017167a0();
      if (local_98 == '\0') {
        return;
      }
      if (local_a0 == (void*)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    cVar3 = FUN_01717530();
    if (cVar3 != '\0') {
      local_90 = *local_40;
      local_88 = '\0';
      cVar3 = FUN_017175c0();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      FUN_01715620();
      puVar4 = g_028af538;
      local_70 = g_028af508;
      if (cVar3 != '\0') {
        if (g_028af538 != (void*)0x0) {
          FUN_00d50b00();
        }
        local_80 = puVar4;
        local_78 = '\x01';
        FUN_017167a0();
        if (local_78 == '\0') {
          return;
        }
        if (local_80 == (void*)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      if (g_028af508 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      FUN_017167a0();
      if (local_68 == '\0') {
        return;
      }
      if (local_70 == (void*)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    cVar3 = FUN_01716be0();
    bVar6 = true;
    if (cVar3 == '\0') {
      cVar3 = FUN_01716c00();
      if (cVar3 == '\0') {
        FUN_01715480();
        cVar3 = FUN_01716980();
        if (cVar3 != '\0') goto LAB_017e31ef;
        FUN_01715480();
        FUN_01716980();
      }
      bVar6 = false;
    }
LAB_017e31ef:
    FUN_01715620();
    local_48 = 0;
    plVar5 = (int64_t *)&g_028af4e8;
    if (bVar6) {
      plVar5 = (int64_t *)&g_028af4f8;
    }
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar2;
    FUN_017167a0();
    lVar2 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != 0) && (FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6) {
      if ((~*(uint64_t *)(*param_2 + 0x18) & 0xf0000000000) != 0) {
        FUN_017163c0();
        FUN_01715d40();
      }
    }
    else if ((~*(uint64_t *)(*param_2 + 0x18) & 0xf00000000000) != 0) {
      FUN_017163c0();
      FUN_01715d40();
    }
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
    break;
  default:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  return;
}

