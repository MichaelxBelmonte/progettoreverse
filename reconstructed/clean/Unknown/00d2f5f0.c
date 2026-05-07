// Function: FUN_00d2f5f0
// Address: 00d2f5f0
// Size: 1224 bytes
// Class: Unknown

void* FUN_00d2f5f0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  void*puVar4;
  char cVar5;
  void*puVar6;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar7;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  void*local_50;
  char local_48;
  void*local_40;
  char local_38;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_024c15e8;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  FUN_00d500e0();
  uVar7 = FUN_00d2fd00();
  local_58 = (int64_t)local_40;
  if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
    uVar7 = FUN_00d50b00();
  }
  lVar1 = *arg1;
  lVar2 = puVar6[2];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      uVar7 = FUN_00d50b00();
    }
    puVar6[2] = lVar1;
    if (lVar2 != 0) {
      uVar7 = FUN_00d50b20();
    }
  }
  lVar1 = g_02800160;
  if (g_02800160 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_98 = lVar1;
  local_90 = '\x01';
  uVar7 = FUN_000175c0(uVar7,&local_98);
  lVar1 = puVar6[3];
  if ((void*)lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (void*)0x0) {
        puVar6[3] = 0;
      }
      else {
        uVar7 = FUN_00d50b00();
        lVar1 = puVar6[3];
        puVar6[3] = local_40;
      }
    }
    else {
      local_38 = '\0';
      puVar6[3] = local_40;
    }
    if (lVar1 != 0) {
      uVar7 = FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  lVar1 = g_02800170;
  if (g_02800170 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_88 = lVar1;
  local_80 = '\x01';
  uVar7 = FUN_000175c0(uVar7,&local_88);
  lVar1 = puVar6[4];
  if ((void*)lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (void*)0x0) {
        puVar6[4] = 0;
      }
      else {
        uVar7 = FUN_00d50b00();
        lVar1 = puVar6[4];
        puVar6[4] = local_40;
      }
    }
    else {
      local_38 = '\0';
      puVar6[4] = local_40;
    }
    if (lVar1 != 0) {
      uVar7 = FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  lVar1 = g_0277d5a0;
  if (g_0277d5a0 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_78 = lVar1;
  local_70 = '\x01';
  FUN_000175c0(uVar7,&local_78);
  lVar1 = puVar6[5];
  if ((void*)lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (void*)0x0) {
        puVar6[5] = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = puVar6[5];
        puVar6[5] = local_40;
      }
    }
    else {
      local_38 = '\0';
      puVar6[5] = local_40;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (puVar6[5] != 0) {
    FUN_00ca92b0();
  }
  lVar1 = *param_2;
  lVar2 = puVar6[6];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    puVar6[6] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  local_38 = '\0';
  local_40 = puVar6;
  FUN_00d21140();
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_0277d5a8;
  plVar3 = (int64_t *)*arg1;
  if (g_0277d5a8 != 0) {
    FUN_00d50b00();
  }
  local_68 = lVar1;
  local_60 = '\x01';
  cVar5 = (**(code **)(*plVar3 + 0x50))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  puVar4 = g_028a76f8;
  if (cVar5 != '\0') {
    if ((g_028a76f8 != puVar6) &&
       (FUN_00d50b00(), g_028a76f8 = puVar6, puVar4 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (g_028a7700 == '\0') {
      g_028a7700 = '\x01';
      FUN_00e8cb90();
    }
    if (g_028a76e8 == (void*)0x0) {
      if (puVar6 != (void*)0x0) {
        FUN_00d50b00();
        g_028a76e8 = puVar6;
      }
      if (g_028a76f0 == '\0') {
        g_028a76f0 = '\x01';
        FUN_00e8cb90();
      }
    }
  }
  plVar3 = (int64_t *)*arg1;
  FUN_00d2fe60();
  local_50 = local_40;
  local_48 = 0;
  if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  cVar5 = (**(code **)(*plVar3 + 0x50))();
  if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  puVar4 = g_028a76e8;
  if (cVar5 != '\0') {
    if ((g_028a76e8 != puVar6) &&
       (FUN_00d50b00(), g_028a76e8 = puVar6, puVar4 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (g_028a76f0 == '\0') {
      g_028a76f0 = '\x01';
      FUN_00e8cb90();
    }
  }
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

