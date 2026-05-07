// Function: FUN_000c49f0
// Address: 000c49f0
// Size: 3184 bytes
// Class: GNRootView
// String references:
//   "GNRootView"
//   "MDMetaWindowController"

void FUN_000c49f0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  char *pcVar7;
  int64_t **pplVar8;
  int64_t *arg1;
  bool bVar9;
  uint32_t uVar10;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  char local_90;
  undefined7 uStack_8f;
  char local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50 [8];
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  FUN_00d3ecc0();
  plVar1 = local_58;
  lVar6 = g_026cb128;
  if (g_026cb128 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d3ecc0();
    plVar1 = local_58;
    local_e0 = g_026cb130;
    if (g_026cb130 != 0) {
      FUN_00d50b00();
    }
    local_d8 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') goto LAB_000c5300;
    pplVar8 = &local_58;
    FUN_00d3ecf0();
    plVar1 = local_58;
    if ((g_026e85e0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_027f4bd8 = FUN_0006d940();
      g_027f4bc0 = "GNRootView";
      g_027f4bc8 = 0x1d0;
      g_027f4bd0 = FUN_00097da0;
      g_027f4be0 = 0;
      ram_00000000027f4be8 = 0;
      g_027f4bf0 = 0;
      ram_00000000027f4bf8 = 0;
      g_027f4c00 = 0;
      ram_00000000027f4c08 = 0;
      g_027f4c10 = 0;
      ram_00000000027f4c18 = 0;
      g_027f4c20 = 0;
      ram_00000000027f4c28 = 0;
      g_027f4c30 = 0;
      ram_00000000027f4c38 = 0;
      g_027f4c40 = 0;
      ram_00000000027f4c48 = 0;
      g_027f4c50 = 0;
      ram_00000000027f4c58 = 0;
      g_027f4c60 = 0;
      ram_00000000027f4c68 = 0;
      g_027f4c70 = 0;
      ram_00000000027f4c78 = 0;
      g_027f4c80 = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (int64_t *)0x0) {
LAB_000c4bab:
      pplVar8 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_000c4bab;
    }
    plVar1 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar8 + 1) = 0;
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_80 = plVar1;
    (**(code **)(*plVar1 + 0x4a0))();
    FUN_00d23310();
    plVar1 = local_58;
    pcVar7 = &local_90;
    if (local_50[0] != '\0') {
      pcVar7 = local_50;
    }
    local_90 = local_50[0];
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pplVar8 = &local_68;
    (**(code **)(*plVar1 + 0x370))();
    plVar1 = local_68;
    if ((g_026fddb0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_026e0ab8 = FUN_00015ff0();
      g_026e0aa0 = "MDMetaWindowController";
      g_026e0aa8 = 0x198;
      g_026e0ab0 = FUN_0006dea0;
      g_026e0ac0 = 0;
      ram_00000000026e0ac8 = 0;
      g_026e0ad0 = 0;
      g_026e0b48 = 0;
      ram_00000000026e0b50 = 0;
      g_026e0b58 = 0;
      g_026e0b5a = 1;
      g_026e0ad8 = 0;
      ram_00000000026e0ae0 = 0;
      g_026e0ae8 = 0;
      ram_00000000026e0af0 = 0;
      g_026e0af8 = 0;
      ram_00000000026e0b00 = 0;
      g_026e0b08 = 0;
      ram_00000000026e0b10 = 0;
      g_026e0b18 = 0;
      ram_00000000026e0b20 = 0;
      g_026e0b28 = 0;
      ram_00000000026e0b30 = 0;
      g_026e0b38 = 0;
      ram_00000000026e0b40 = 0;
      g_026e0b63 = 0;
      g_026e0b5b = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (int64_t *)0x0) {
LAB_000c4fd7:
      pplVar8 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_000c4fd7;
    }
    plVar1 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar8 + 1) = 0;
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_90 != '\0') {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e561b0();
    if (local_58 == (int64_t *)0x0) {
      bVar9 = false;
    }
    else {
      FUN_01e561b0();
      FUN_01d8f0f0();
      bVar9 = local_68 != (int64_t *)0x0;
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar9) {
      FUN_01e561b0();
      FUN_01d8b010();
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*plVar1 + 0x5f8))();
    local_a0 = local_68;
    local_98 = 0;
    if (local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_98 = '\x01';
    FUN_000c5e20();
    plVar2 = local_58;
    if (local_50[0] == '\0') {
      if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
         (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      local_50[0] = '\0';
      local_58 = (int64_t *)0x0;
      local_48 = plVar2;
      local_40 = 0xffffffff;
      local_38 = 0;
      while( true ) {
        lVar6 = (int64_t)(int)local_40;
        iVar5 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar5);
        if (*(int *)((int64_t)local_48 + 0xc) <= iVar5) break;
        local_d0 = *(int64_t **)(local_48[2] + 8 + lVar6 * 8);
        local_c8 = '\0';
        local_58 = local_d0;
        (**(code **)(*plVar1 + 0x608))();
        if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50130();
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar5 = -local_40._4_4_;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar5 = 0;
          }
          local_40 = CONCAT44(iVar5,(int)local_40);
        }
      }
      FUN_000e3600();
      FUN_00d50b20();
    }
    FUN_00612250();
    plVar3 = local_58;
    plVar2 = local_80;
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00612250();
      local_b8 = '\0';
      local_c0 = plVar1;
      (**(code **)(*local_58 + 0x4b8))();
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_000c5300;
  }
  pplVar8 = &local_58;
  FUN_00d3ecf0();
  plVar1 = local_58;
  if ((g_026e85e0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027f4bd8 = FUN_0006d940();
    g_027f4bc0 = "GNRootView";
    g_027f4bc8 = 0x1d0;
    g_027f4bd0 = FUN_00097da0;
    g_027f4be0 = 0;
    ram_00000000027f4be8 = 0;
    g_027f4bf0 = 0;
    ram_00000000027f4bf8 = 0;
    g_027f4c00 = 0;
    ram_00000000027f4c08 = 0;
    g_027f4c10 = 0;
    ram_00000000027f4c18 = 0;
    g_027f4c20 = 0;
    ram_00000000027f4c28 = 0;
    g_027f4c30 = 0;
    ram_00000000027f4c38 = 0;
    g_027f4c40 = 0;
    ram_00000000027f4c48 = 0;
    g_027f4c50 = 0;
    ram_00000000027f4c58 = 0;
    g_027f4c60 = 0;
    ram_00000000027f4c68 = 0;
    g_027f4c70 = 0;
    ram_00000000027f4c78 = 0;
    g_027f4c80 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_000c4aca:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_000c4aca;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_80 = plVar1;
  (**(code **)(*plVar1 + 0x4a0))();
  FUN_00d23310();
  plVar1 = local_58;
  pcVar7 = &local_90;
  if (local_50[0] != '\0') {
    pcVar7 = local_50;
  }
  local_90 = local_50[0];
  *pcVar7 = '\0';
  if ((local_50[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pplVar8 = &local_68;
  (**(code **)(*plVar1 + 0x370))();
  plVar1 = local_68;
  if ((g_026fddb0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026e0ab8 = FUN_00015ff0();
    g_026e0aa0 = "MDMetaWindowController";
    g_026e0aa8 = 0x198;
    g_026e0ab0 = FUN_0006dea0;
    g_026e0ac0 = 0;
    ram_00000000026e0ac8 = 0;
    g_026e0ad0 = 0;
    g_026e0b48 = 0;
    ram_00000000026e0b50 = 0;
    g_026e0b58 = 0;
    g_026e0b5a = 1;
    g_026e0ad8 = 0;
    ram_00000000026e0ae0 = 0;
    g_026e0ae8 = 0;
    ram_00000000026e0af0 = 0;
    g_026e0af8 = 0;
    ram_00000000026e0b00 = 0;
    g_026e0b08 = 0;
    ram_00000000026e0b10 = 0;
    g_026e0b18 = 0;
    ram_00000000026e0b20 = 0;
    g_026e0b28 = 0;
    ram_00000000026e0b30 = 0;
    g_026e0b38 = 0;
    ram_00000000026e0b40 = 0;
    g_026e0b63 = 0;
    g_026e0b5b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_000c4c8c:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_000c4c8c;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_90 != '\0') {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0062abf0();
  uVar10 = FUN_00521db0();
  plVar2 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != (int64_t *)0x0) && (uVar10 = FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  local_f8 = '\0';
  local_100 = plVar1;
  (**(code **)(*plVar2 + 0x600))(uVar10,&local_100);
  plVar2 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_f0 = plVar2;
  local_e8 = '\0';
  (**(code **)(*plVar1 + 0x600))();
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0062abf0();
  FUN_00b34cb0();
  if (local_58 == (int64_t *)0x0) {
    cVar4 = '\0';
  }
  else {
    FUN_0062abf0();
    FUN_00b34cb0();
    cVar4 = (**(code **)(*local_78 + 0x58))();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      (**(code **)(*local_78 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    (**(code **)(*local_58 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_0064dff0();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
LAB_000c5300:
  local_b0 = *arg1;
  local_a8 = '\0';
  FUN_00292f50();
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  return;
}

