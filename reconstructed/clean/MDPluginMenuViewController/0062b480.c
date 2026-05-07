// Function: FUN_0062b480
// Address: 0062b480
// Size: 1466 bytes
// Class: MDPluginMenuViewController
// String references:
//   "MDPluginMenuViewController"

void FUN_0062b480(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  int64_t **pplVar6;
  uint uVar7;
  uint64_t uVar8;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t local_e8 [16];
  uint local_d8;
  uint8_t local_c8 [16];
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  if (*(int64_t *)(this_ptr + 0xf0) != 0) {
    return;
  }
  plVar5 = (int64_t *)FUN_00018320();
  (**(code **)(*plVar5 + 0x18))();
  plVar1 = *(int64_t **)(this_ptr + 0xf0);
  if (plVar1 == plVar5) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0xf0) = plVar5;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar1 = *(int64_t **)(this_ptr + 0xf0);
  local_50 = 0;
  lVar2 = *(int64_t *)(this_ptr + 0x88);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_50 = '\x01';
  local_58 = lVar2;
  (**(code **)(*plVar1 + 0x4c8))(g_023dccec,g_023dccf4);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_38 + 0x918))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_38 + 0x948))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_38 + 0x928))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  plVar1 = local_38;
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_b8 + 0x450))();
  local_e8._0_4_ = g_02394298;
  if (cVar3 == '\0') {
    local_e8._0_4_ = g_02390124;
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_a8 + 0x450))();
  local_d8 = g_02394298;
  if (cVar3 == '\0') {
    local_d8 = g_02390124;
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_98 + 0x450))();
  local_c8._0_4_ = g_02394298;
  if (cVar3 == '\0') {
    local_c8._0_4_ = g_02390124;
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_88 + 0x450))();
  local_e8._4_4_ = 0;
  local_e8._8_8_ = _UNK_023945e8;
  local_e8._0_8_ = local_e8._0_8_ | g_023945e0;
  local_d8 = local_d8 | (uint)g_023945e0;
  local_c8._4_4_ = 0;
  local_c8._8_8_ = _UNK_023945e8;
  local_c8._0_8_ = local_c8._0_8_ | g_023945e0;
  uVar7 = g_02394298;
  if (cVar3 == '\0') {
    uVar7 = g_02390124;
  }
  auVar10 = insertps(local_c8,ZEXT416(uVar7),0x10);
  auVar9 = insertps(local_e8,local_d8,0x10);
  (**(code **)(*plVar1 + 0x940))(auVar9._0_8_,auVar10._0_8_);
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027257c0;
  if (g_027257c0 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  local_68 = 0;
  local_60 = '\0';
  pplVar6 = &local_38;
  FUN_00176e40(&local_68,&local_78);
  plVar1 = local_38;
  if ((g_0271ca50 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_02708f48 = FUN_00015ff0();
    g_02708f30 = "MDPluginMenuViewController";
    g_02708f38 = 0x80;
    g_02708f40 = FUN_004ad2e0;
    g_02708f50 = 0;
    ram_0000000002708f58 = 0;
    g_02708f60 = 0;
    ram_0000000002708f68 = 0;
    g_02708f70 = 0;
    ram_0000000002708f78 = 0;
    g_02708f80 = 0;
    ram_0000000002708f88 = 0;
    g_02708f90 = 0;
    ram_0000000002708f98 = 0;
    g_02708fa0 = 0;
    ram_0000000002708fa8 = 0;
    g_02708fb0 = 0;
    ram_0000000002708fb8 = 0;
    g_02708fc0 = 0;
    ram_0000000002708fc8 = 0;
    g_02708fd0 = 0;
    ram_0000000002708fd8 = 0;
    g_02708fe0 = 0;
    ram_0000000002708fe8 = 0;
    g_02708ff0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_0062b822;
  }
  pplVar6 = (int64_t **)&g_02802688;
LAB_0062b822:
  plVar5 = *(int64_t **)(this_ptr + 0xf8);
  plVar1 = *pplVar6;
  if (plVar5 != plVar1) {
    if (*(char *)(pplVar6 + 1) == '\0') {
      if (plVar1 == (int64_t *)0x0) {
        *(void*)(this_ptr + 0xf8) = 0;
      }
      else {
        FUN_00d50b00();
        plVar5 = *(int64_t **)(this_ptr + 0xf8);
        *(int64_t **)(this_ptr + 0xf8) = *pplVar6;
      }
    }
    else {
      *(void*)(pplVar6 + 1) = 0;
      *(int64_t **)(this_ptr + 0xf8) = plVar1;
    }
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x630))();
  plVar1 = *(int64_t **)(this_ptr + 0x88);
  uVar8 = FUN_00176c40();
  local_48 = local_38;
  local_40 = 0;
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_40 = '\x01';
  (**(code **)(*plVar1 + 0x9e8))(uVar8,0);
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0xf8) != 0) {
    FUN_004aa180();
  }
  return;
}

