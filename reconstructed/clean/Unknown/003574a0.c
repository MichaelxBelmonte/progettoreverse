// Function: FUN_003574a0
// Address: 003574a0
// Size: 1042 bytes
// Class: Unknown

void FUN_003574a0(uint32_t param_1)

{
  int64_t *plVar1;
  uint64_t uVar2;
  void*puVar3;
  uint8_t unaff_SIL;
  int64_t *this_ptr;
  int64_t *plVar4;
  bool bVar5;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Da;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  uint32_t local_8c;
  int64_t *local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01c00e50();
  uVar6 = FUN_01bbfb40();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (uVar6 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  local_88 = plVar1;
  local_8c = param_1;
  if (plVar1 == (int64_t *)0x0) {
    local_58 = 0;
    plVar4 = (int64_t *)0x0;
  }
  else {
    uVar2 = FUN_002e4b80();
    plVar4 = local_40;
    uVar6 = extraout_XMM0_Da;
    if (local_40 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      local_58 = 0;
    }
    else {
      local_58 = CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
      if (((local_38 == '\0') && (uVar6 = FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        uVar6 = FUN_00d50b20();
      }
    }
  }
  local_80 = plVar4;
  if (g_02807358 == (void*)0x0) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_024fafc8;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    uVar6 = (*g_024fafe0)();
    bVar5 = g_02807358 == (void*)0x0;
    g_02807358 = puVar3;
    if (((bVar5) || (uVar6 = FUN_00d50b20(), g_02807358 != (void*)0x0)) &&
       (g_02807360 == '\0')) {
      g_02807360 = '\x01';
      uVar6 = FUN_00e8cb90();
    }
  }
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x498))();
    FUN_00cb1f10();
    uVar6 = FUN_00db3260();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  FUN_003c0750(uVar6,(uint8_t)local_8c);
  local_78 = local_40;
  local_70 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_70 = '\x01';
  FUN_01c00e50();
  FUN_01bbfb40();
  FUN_01beead0();
  local_68 = local_50;
  local_60 = 0;
  local_a0 = g_027032e8;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      local_a0 = g_027032e8;
    }
  }
  else {
    local_48 = '\0';
  }
  local_60 = '\x01';
  g_027032e8 = local_a0;
  if (local_a0 != 0) {
    local_60 = '\x01';
    FUN_00d50b00();
  }
  local_98 = '\x01';
  FUN_004afe20(&local_a0,&local_68,0,unaff_SIL);
  plVar4 = local_80;
  plVar1 = local_88;
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x498))();
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x5c0))();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

