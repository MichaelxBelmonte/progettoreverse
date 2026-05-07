// Function: FUN_00544e30
// Address: 00544e30
// Size: 1368 bytes
// Class: MDPluginTransferTempoDialog

void FUN_00544e30(double param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  char cVar6;
  int64_t *plVar7;
  int64_t this_ptr;
  uint32_t uVar8;
  uint64_t unaff_R13;
  byte bVar9;
  bool bVar10;
  int64_t local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  uint32_t local_64;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  (**(code **)(**(int64_t **)(this_ptr + 200) + 0x378))((float)param_1);
  lVar2 = g_0270cbb0;
  if (g_0270cbb0 != 0) {
    FUN_00d50b00();
  }
  local_138 = lVar2;
  FUN_00083ea0(2,&local_138);
  FUN_000b4da0();
  lVar4 = local_80;
  if (local_80 == 0) {
    uVar8 = (uint32_t)CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
  }
  else {
    if (local_78 == '\0') {
      FUN_00d50b00();
      uVar8 = 0;
      if ((local_78 == '\0') || (local_80 == 0)) goto LAB_00544ef0;
      FUN_00d50b20();
    }
    else {
      local_78 = '\0';
    }
    uVar8 = 0;
  }
LAB_00544ef0:
  local_60 = (int64_t *)&g_0253d630;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_60 = &g_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_0270cbb8;
  local_70 = lVar4;
  local_64 = uVar8;
  if (g_0270cbb8 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_0270cbc0;
  local_120 = lVar2;
  local_118 = '\x01';
  if (g_0270cbc0 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar3;
  local_108 = '\x01';
  local_100 = lVar4;
  local_f8 = '\0';
  FUN_00d31230(&local_100,&local_110);
  plVar7 = local_60;
  if (local_60 == (int64_t *)0x0) {
    bVar9 = 1;
    bVar1 = false;
  }
  else {
    if (local_58 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      bVar9 = 0;
      if ((local_58 == '\0') || (bVar9 = 0, local_60 == (int64_t *)0x0)) goto LAB_00545012;
      FUN_00d50b20();
    }
    else {
      local_58 = '\0';
    }
    bVar1 = true;
    bVar9 = 0;
  }
LAB_00545012:
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x960))();
  local_f0 = plVar7;
  local_e8 = '\0';
  cVar6 = (**(code **)(*local_60 + 0x50))();
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    local_e0 = plVar7;
    local_d8 = '\0';
    (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x958))();
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = g_0270cbb8;
  if (g_0270cbb8 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_0270cbc8;
  local_d0 = lVar2;
  local_c8 = '\x01';
  if (g_0270cbc8 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar4;
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_00d31230(&local_b0,&local_c0);
  plVar5 = local_60;
  if (plVar7 == local_60) {
    if (!(bool)(bVar9 & plVar7 != (int64_t *)0x0)) goto joined_r0x00545217;
    if (local_58 == '\0') {
      FUN_00d50b00();
      goto LAB_00545202;
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar10 = plVar7 != (int64_t *)0x0;
      plVar7 = plVar5;
      if ((bool)(bVar1 & bVar10)) {
        FUN_00d50b20();
      }
LAB_00545202:
      bVar1 = true;
joined_r0x00545217:
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto joined_r0x0054536a;
    }
    bVar10 = plVar7 != (int64_t *)0x0;
    plVar7 = plVar5;
    if ((bool)(bVar1 & bVar10)) {
      FUN_00d50b20();
    }
  }
  local_58 = '\0';
  bVar1 = true;
joined_r0x0054536a:
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x960))();
  local_98 = '\0';
  local_a0 = plVar7;
  cVar6 = (**(code **)(*local_60 + 0x50))();
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    local_88 = '\0';
    local_90 = plVar7;
    (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x958))();
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((char)local_64 == '\0' && local_70 != 0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

