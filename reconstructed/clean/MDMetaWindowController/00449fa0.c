// Function: FUN_00449fa0
// Address: 00449fa0
// Size: 1437 bytes
// Class: MDMetaWindowController

void FUN_00449fa0(void)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  void*puVar5;
  void*puVar6;
  bool bVar7;
  int64_t this_ptr;
  int64_t local_110;
  char local_108;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  void*local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  void*local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01e534b0();
  plVar1 = *(int64_t **)(this_ptr + 0x70);
  if (plVar1 == (int64_t *)0x0) {
    bVar7 = true;
    bVar2 = false;
    puVar5 = (void*)0x0;
  }
  else {
    FUN_00aea5e0(g_023b36a8);
    FUN_00aea6b0();
    (**(code **)(*plVar1 + 0xab8))();
    (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0xac8))(g_02390124);
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)((int64_t)puVar5 + 0xc) = 0;
    *(void*)((int64_t)puVar5 + 0x14) = 0;
    *(void*)((int64_t)puVar5 + 0x1a) = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    *puVar5 = &g_02568b20;
    *(void*)(puVar5 + 10) = 0;
    (*g_02568b38)();
    lVar3 = g_026d8928;
    if (g_026d8928 != 0) {
      FUN_00d50b00();
    }
    lVar4 = g_026d8930;
    if (g_026d8930 != 0) {
      FUN_00d50b00();
    }
    local_f0 = lVar4;
    local_e8 = '\x01';
    local_e0 = 0;
    local_d8 = '\0';
    FUN_00d31230(&local_e0,&local_f0);
    local_70 = local_40;
    local_68 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    FUN_00d4c980();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    local_c8 = '\0';
    local_d0 = puVar5;
    (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x9b8))();
    bVar2 = true;
    bVar7 = false;
    if ((local_c8 != '\0') && (bVar7 = false, local_d0 != (void*)0x0)) {
      FUN_00d50b20();
      bVar2 = true;
      bVar7 = false;
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar6 + 0xc) = 0;
  *(void*)((int64_t)puVar6 + 0x14) = 0;
  *(void*)((int64_t)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  *puVar6 = &g_02568b20;
  *(void*)(puVar6 + 10) = 0;
  (*g_02568b38)();
  if (puVar6 == puVar5) {
    puVar6 = puVar5;
    if (bVar7) {
      bVar2 = true;
    }
    else {
      FUN_00d50b20();
    }
  }
  else {
    bVar7 = (bool)(bVar2 & puVar5 != (void*)0x0);
    bVar2 = true;
    if (bVar7) {
      FUN_00d50b20();
    }
  }
  FUN_00d48ac0();
  local_c0 = g_026d8928;
  if (g_026d8928 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_02705b78;
  local_b8 = '\x01';
  if (g_02705b78 != 0) {
    FUN_00d50b00();
  }
  local_b0 = lVar3;
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_00d31230(&local_a0,&local_b0);
  local_60 = local_40;
  local_58 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_58 = '\x01';
  FUN_00d4c980();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_0270b790;
  if (g_0270b790 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar3;
  local_88 = '\x01';
  FUN_00d48c60();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d48d00();
  FUN_00d48d10();
  local_78 = '\0';
  local_80 = puVar6;
  (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x9b8))();
  if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x78);
  FUN_00d46dc0(g_02390124);
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  (**(code **)(*plVar1 + 0x988))();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_002a8220();
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  FUN_002a83b0();
  (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0xb28))();
  FUN_00b2de10();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (puVar6 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return;
}

