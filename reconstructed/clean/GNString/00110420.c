// Function: FUN_00110420
// Address: 00110420
// Size: 1308 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


bool FUN_00110420(uint32_t param_1,void*param_2,void*param_3)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  void*puVar4;
  void*puVar5;
  char cVar6;
  int iVar7;
  void*in_RCX;
  void*arg1;
  int64_t **pplVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t uVar9;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint64_t uVar10;
  int64_t local_d8;
  uint8_t local_d0;
  int64_t *local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t *local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t *local_88;
  uint8_t local_80;
  int64_t local_78;
  uint8_t local_70;
  void*local_68;
  int64_t local_60;
  char local_58;
  void*local_50;
  int64_t *local_40;
  char local_38;
  
  lVar3 = g_026e1378;
  local_68 = param_2;
  if (g_026e1378 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_60 = lVar3;
  local_58 = '\x01';
  local_50 = param_3;
  FUN_01cacbe0(param_1,&local_60);
  plVar1 = local_40;
  uVar9 = extraout_XMM0_Da;
  if ((g_026fdd40 == '\0') &&
     (iVar7 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Da_05, iVar7 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
    g_026cd0e0 = FUN_00022d20;
    g_026cd0f0 = 0;
    ram_00000000026cd0f8 = 0;
    g_026cd100 = 0;
    g_026cd178 = 0;
    ram_00000000026cd180 = 0;
    g_026cd188 = 0;
    g_026cd18a = 6;
    g_026cd108 = 0;
    ram_00000000026cd110 = 0;
    g_026cd118 = 0;
    ram_00000000026cd120 = 0;
    g_026cd128 = 0;
    ram_00000000026cd130 = 0;
    g_026cd138 = 0;
    ram_00000000026cd140 = 0;
    g_026cd148 = 0;
    ram_00000000026cd150 = 0;
    g_026cd158 = 0;
    ram_00000000026cd160 = 0;
    g_026cd168 = 0;
    ram_00000000026cd170 = 0;
    g_026cd193 = 0;
    g_026cd18b = 0;
    ___cxa_guard_release();
    uVar9 = extraout_XMM0_Da_06;
  }
  pplVar8 = (int64_t **)&g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    uVar9 = extraout_XMM0_Da_00;
    if (cVar6 != '\0') {
      if ((g_026fd0c0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        ___cxa_guard_release();
      }
      cVar6 = FUN_00e8db60();
      pplVar8 = &local_40;
      uVar9 = extraout_XMM0_Da_01;
      if (cVar6 == '\0') {
        pplVar8 = (int64_t **)&g_02802688;
      }
    }
  }
  puVar5 = local_50;
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
      uVar9 = extraout_XMM0_Da_02;
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
    uVar9 = extraout_XMM0_Da_03;
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
    uVar9 = extraout_XMM0_Da_04;
  }
  lVar3 = g_026e1388;
  if (plVar1 == (int64_t *)0x0) goto LAB_001107ae;
  if (in_RCX != (void*)0x0) {
    if (g_026e1388 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_d8 = lVar3;
    local_d0 = 1;
    FUN_00110b00(uVar9,&local_d8);
    plVar2 = local_40;
    uVar10 = FUN_00d45bc0();
    uVar9 = (uint32_t)uVar10;
    *in_RCX = uVar10;
    if ((local_38 != '\0') && (plVar2 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    if (lVar3 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  puVar4 = local_68;
  lVar3 = g_026fe480;
  if (arg1 != (void*)0x0) {
    local_c0 = 0;
    local_c8 = plVar1;
    if (g_026fe480 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_b8 = lVar3;
    local_b0 = 1;
    FUN_00110b00(uVar9,&local_b8);
    plVar2 = local_40;
    uVar10 = FUN_00d45bc0();
    uVar9 = (uint32_t)uVar10;
    *arg1 = uVar10;
    if ((local_38 != '\0') && (plVar2 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    if (lVar3 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  lVar3 = g_026e1390;
  if (puVar4 != (void*)0x0) {
    local_a0 = 0;
    local_a8 = plVar1;
    if (g_026e1390 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_98 = lVar3;
    local_90 = 1;
    FUN_00110b00(uVar9,&local_98);
    plVar2 = local_40;
    uVar10 = FUN_00d45bc0();
    uVar9 = (uint32_t)uVar10;
    *puVar4 = uVar10;
    if ((local_38 != '\0') && (plVar2 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    if (lVar3 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  lVar3 = g_026e1398;
  if (puVar5 != (void*)0x0) {
    local_80 = 0;
    local_88 = plVar1;
    if (g_026e1398 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_78 = lVar3;
    local_70 = 1;
    FUN_00110c20(uVar9,&local_78);
    plVar2 = (int64_t *)*puVar5;
    if (plVar2 == local_40) {
      if ((*(char *)(puVar5 + 1) == '\0') && (local_40 != (int64_t *)0x0)) {
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_00110792;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      cVar6 = *(char *)(puVar5 + 1);
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *local_50 = local_40;
        if ((cVar6 != '\0') && (plVar2 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        *puVar5 = local_40;
        if ((cVar6 != '\0') && (plVar2 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_00110792:
      *(void*)(puVar5 + 1) = 1;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_001107ae:
  return plVar1 != (int64_t *)0x0;
}

