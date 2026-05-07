// Function: FUN_01f329a0
// Address: 01f329a0
// Size: 2721 bytes
// Class: Unknown

void FUN_01f329a0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar8;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  lVar1 = *arg1;
  lVar2 = this_ptr[8];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    this_ptr[8] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x4a0))();
  if (local_40 == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_01f333aa;
    FUN_00d50b00();
  }
  else if (local_48 == (int64_t *)0x0) goto LAB_01f333aa;
  cVar5 = FUN_01d64c70();
  if (cVar5 == '\0') {
    local_38 = (int64_t *)FUN_00e8fc40();
    FUN_001d7da0();
    (**(code **)(*local_38 + 0x18))();
    FUN_01d654e0();
    bVar3 = true;
  }
  else {
    FUN_01d64cb0();
    local_38 = local_48;
    if (local_48 == (int64_t *)0x0) {
      local_38 = (int64_t *)0x0;
      bVar3 = false;
    }
    else {
      bVar3 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar6 = (int64_t)&g_026846d0;
  plVar6[2] = (int64_t)&g_02684a60;
  *(void*)(plVar6 + 3) = 0;
  *(void*)((int64_t)plVar6 + 0x1c) = 0;
  *(void*)((int64_t)plVar6 + 0x24) = 0;
  *(void*)((int64_t)plVar6 + 0x2c) = 0;
  *(void*)((int64_t)plVar6 + 0x34) = 0;
  *(void*)((int64_t)plVar6 + 0x3a) = 0;
  *(void*)((int64_t)plVar6 + 0x42) = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  *(void*)(plVar6 + 0xe) = 0;
  pcVar4 = g_026846e8;
  (*g_026846e8)();
  if (local_48 == plVar6) {
    FUN_00d50b20();
  }
  else {
    FUN_00d50b20();
    local_48 = plVar6;
  }
  lVar1 = g_02800048;
  if (g_02800048 != 0) {
    FUN_00d50b00();
  }
  FUN_01d64eb0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_02800050;
  if (g_02800050 != 0) {
    FUN_00d50b00();
  }
  FUN_01d65120();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_02800058;
  if (g_02800058 != 0) {
    FUN_00d50b00();
  }
  uVar8 = FUN_01d65190();
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b20();
  }
  FUN_01d5d7f0(uVar8,0);
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar6 = (int64_t)&g_026846d0;
  plVar6[2] = (int64_t)&g_02684a60;
  *(void*)(plVar6 + 3) = 0;
  *(void*)((int64_t)plVar6 + 0x1c) = 0;
  *(void*)((int64_t)plVar6 + 0x24) = 0;
  *(void*)((int64_t)plVar6 + 0x2c) = 0;
  *(void*)((int64_t)plVar6 + 0x34) = 0;
  *(void*)((int64_t)plVar6 + 0x3a) = 0;
  *(void*)((int64_t)plVar6 + 0x42) = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  *(void*)(plVar6 + 0xe) = 0;
  (*pcVar4)();
  if (plVar6 == local_48) {
    FUN_00d50b20();
    plVar6 = local_48;
    lVar1 = g_02800060;
  }
  else {
    lVar1 = g_02800060;
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b20();
      lVar1 = g_02800060;
    }
  }
  g_02800060 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d64eb0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_02800068;
  if (g_02800068 != 0) {
    FUN_00d50b00();
  }
  FUN_01d65120();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_02800070;
  if (g_02800070 != 0) {
    FUN_00d50b00();
  }
  uVar8 = FUN_01d65190();
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b20();
  }
  FUN_01d5d7f0(uVar8,1);
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar7 = (int64_t)&g_026846d0;
  plVar7[2] = (int64_t)&g_02684a60;
  *(void*)(plVar7 + 3) = 0;
  *(void*)((int64_t)plVar7 + 0x1c) = 0;
  *(void*)((int64_t)plVar7 + 0x24) = 0;
  *(void*)((int64_t)plVar7 + 0x2c) = 0;
  *(void*)((int64_t)plVar7 + 0x34) = 0;
  *(void*)((int64_t)plVar7 + 0x3a) = 0;
  *(void*)((int64_t)plVar7 + 0x42) = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  *(void*)(plVar7 + 0xe) = 0;
  (*pcVar4)();
  if (plVar7 == plVar6) {
    FUN_00d50b20();
    plVar7 = plVar6;
    lVar1 = g_02800078;
  }
  else {
    lVar1 = g_02800078;
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
      lVar1 = g_02800078;
    }
  }
  g_02800078 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d64eb0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_02800080;
  if (g_02800080 != 0) {
    FUN_00d50b00();
  }
  FUN_01d65120();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_02800088;
  if (g_02800088 != 0) {
    FUN_00d50b00();
  }
  uVar8 = FUN_01d65190();
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b20();
  }
  FUN_01d5d7f0(uVar8,2);
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar6 = (int64_t)&g_026846d0;
  plVar6[2] = (int64_t)&g_02684a60;
  *(void*)(plVar6 + 3) = 0;
  *(void*)((int64_t)plVar6 + 0x1c) = 0;
  *(void*)((int64_t)plVar6 + 0x24) = 0;
  *(void*)((int64_t)plVar6 + 0x2c) = 0;
  *(void*)((int64_t)plVar6 + 0x34) = 0;
  *(void*)((int64_t)plVar6 + 0x3a) = 0;
  *(void*)((int64_t)plVar6 + 0x42) = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  *(void*)(plVar6 + 0xe) = 0;
  (*pcVar4)();
  if (plVar6 == plVar7) {
    FUN_00d50b20();
    plVar6 = plVar7;
    lVar1 = g_02800090;
  }
  else {
    lVar1 = g_02800090;
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
      lVar1 = g_02800090;
    }
  }
  g_02800090 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d64eb0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_02800098;
  if (g_02800098 != 0) {
    FUN_00d50b00();
  }
  uVar8 = FUN_01d65120();
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b20();
  }
  FUN_01d5d7f0(uVar8,3);
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar7 = (int64_t)&g_026846d0;
  plVar7[2] = (int64_t)&g_02684a60;
  *(void*)(plVar7 + 3) = 0;
  *(void*)((int64_t)plVar7 + 0x1c) = 0;
  *(void*)((int64_t)plVar7 + 0x24) = 0;
  *(void*)((int64_t)plVar7 + 0x2c) = 0;
  *(void*)((int64_t)plVar7 + 0x34) = 0;
  *(void*)((int64_t)plVar7 + 0x3a) = 0;
  *(void*)((int64_t)plVar7 + 0x42) = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  *(void*)(plVar7 + 0xe) = 0;
  (*pcVar4)();
  if (plVar7 == plVar6) {
    FUN_00d50b20();
    plVar7 = plVar6;
    lVar1 = g_028000a0;
  }
  else {
    lVar1 = g_028000a0;
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
      lVar1 = g_028000a0;
    }
  }
  g_028000a0 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d64eb0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027fff88;
  if (g_027fff88 != 0) {
    FUN_00d50b00();
  }
  FUN_01d65120();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_028000a8;
  if (g_028000a8 != 0) {
    FUN_00d50b00();
  }
  uVar8 = FUN_01d65190();
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b20();
  }
  FUN_01d5d7f0(uVar8,4);
  local_48 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_48 = (int64_t)&g_026846d0;
  local_48[2] = (int64_t)&g_02684a60;
  *(void*)(local_48 + 3) = 0;
  *(void*)((int64_t)local_48 + 0x1c) = 0;
  *(void*)((int64_t)local_48 + 0x24) = 0;
  *(void*)((int64_t)local_48 + 0x2c) = 0;
  *(void*)((int64_t)local_48 + 0x34) = 0;
  *(void*)((int64_t)local_48 + 0x3a) = 0;
  *(void*)((int64_t)local_48 + 0x42) = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[0xd] = 0;
  *(void*)(local_48 + 0xe) = 0;
  (*pcVar4)();
  if (local_48 == plVar7) {
    FUN_00d50b20();
    local_48 = plVar7;
    lVar1 = g_028000b0;
  }
  else {
    lVar1 = g_028000b0;
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
      lVar1 = g_028000b0;
    }
  }
  g_028000b0 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d64eb0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_028000b8;
  if (g_028000b8 != 0) {
    FUN_00d50b00();
  }
  FUN_01d65120();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_028000c0;
  if (g_028000c0 != 0) {
    FUN_00d50b00();
  }
  uVar8 = FUN_01d65190();
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b20();
  }
  FUN_01d5d7f0(uVar8,5);
  if ((bVar3) && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01f333aa:
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

