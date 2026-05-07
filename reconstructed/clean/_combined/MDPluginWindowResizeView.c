// ===================================================================
// MDPluginWindowResizeView — Complete reconstructed pseudocode
// 4 functions
// ===================================================================


// ============================================================
// 006306b0
// ============================================================
// Function: FUN_006306b0
// Address: 006306b0
// Size: 1539 bytes
// Class: MDPluginWindowResizeView

void FUN_006306b0(void)

{
  code *pcVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte bVar4;
  uint uVar5;
  void*puVar6;
  uint64_t uVar7;
  int64_t this_ptr;
  uint64_t uVar8;
  uint64_t uVar9;
  double dVar10;
  void*local_a0;
  char local_98;
  void*local_90;
  char local_88;
  void*local_80;
  char local_78;
  void*local_70;
  char local_68;
  uint64_t local_60;
  uint64_t local_58;
  char local_50;
  void*local_48;
  int64_t local_40;
  char local_38;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  pcVar1 = g_02572370;
  local_48 = puVar6;
  (*g_02572370)();
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*pcVar1)();
  uVar8 = g_026e1800;
  if (g_026e1800 != 0) {
    FUN_00d50b00();
  }
  local_60 = uVar8;
  FUN_00e7d6f0();
  uVar9 = FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  local_58 = uVar8;
  local_50 = '\0';
  FUN_000175c0(uVar9,&local_58);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    local_38 = '\0';
    local_40 = lVar3;
    uVar5 = FUN_00c70bc0();
    uVar8 = (uint64_t)uVar5;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027259d0;
  if (((lVar3 != 0 & (byte)uVar8) == 0) || (*(int64_t *)(this_ptr + 0x80) != 0)) {
    if (g_027259d0 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar2;
    local_38 = '\0';
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  uVar8 = g_02708e90;
  if (g_02708e90 != 0) {
    FUN_00d50b00();
  }
  dVar10 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar10 * g_023907c0);
  dVar10 = dVar10 * g_023907c0 - g_023907c8;
  uVar9 = FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  bVar4 = (byte)(((int64_t)dVar10 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_58 = uVar8;
  local_50 = '\0';
  FUN_000175c0(uVar9,&local_58);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    local_38 = '\0';
    local_40 = lVar3;
    bVar4 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar9 = FUN_00d50b20();
  if (uVar8 != 0) {
    uVar9 = FUN_00d50b20();
  }
  lVar2 = g_026fba80;
  if ((lVar3 != 0 & bVar4) != 0) {
    if (g_026fba80 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar2;
    local_38 = '\0';
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_026fba80;
    if (g_026fba80 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar3;
    local_38 = '\0';
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_027259d0;
    if (g_027259d0 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar3;
    local_38 = '\0';
    uVar9 = FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if (lVar3 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  lVar3 = g_026fce40;
  if ((*(int64_t *)(this_ptr + 0x80) != 0) &&
     (*(int64_t *)(*(int64_t *)(this_ptr + 0x80) + 0x308) != 0)) {
    if (g_026fce40 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar3;
    local_38 = '\0';
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_026fce40;
    if (g_026fce40 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar3;
    local_38 = '\0';
    uVar9 = FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if (lVar3 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0xc0) != 0) {
    local_a0 = local_48;
    local_98 = '\0';
    uVar9 = FUN_0009ea90(uVar9,&local_a0);
    if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    local_88 = '\0';
    local_90 = puVar6;
    uVar9 = FUN_0009ea90(uVar9,&local_90);
    if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 200) != 0) {
    local_80 = local_48;
    local_78 = '\0';
    uVar9 = FUN_0009ea90(uVar9,&local_80);
    if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    local_68 = '\0';
    local_70 = puVar6;
    FUN_0009ea90(uVar9,&local_70);
    if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}



// ============================================================
// 006311f0
// ============================================================
// Function: FUN_006311f0
// Address: 006311f0
// Size: 890 bytes
// Class: MDPluginWindowResizeView
// String references:
//   "MDPluginWindowResizeView"

void FUN_006311f0(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  bool bVar4;
  char cVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t **pplVar8;
  int iVar9;
  int64_t this_ptr;
  uint32_t uVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint32_t in_XMM1_Dc;
  uint32_t uVar14;
  uint32_t in_XMM1_Dd;
  uint32_t uVar15;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  uVar12 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar10 = (uint32_t)param_2;
  plVar1 = *(int64_t **)(this_ptr + 0x10);
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0x4a0))();
  plVar7 = local_58;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00631265;
    }
  }
  else if (local_58 != (int64_t *)0x0) {
LAB_00631265:
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_48 = plVar7;
    local_40 = 0xffffffff;
    local_38 = 0;
    while( true ) {
      lVar6 = (int64_t)(int)local_40;
      iVar9 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar9);
      if (*(int *)((int64_t)local_48 + 0xc) <= iVar9) break;
      plVar7 = *(int64_t **)(local_48[2] + 8 + lVar6 * 8);
      local_58 = plVar7;
      if ((g_0271d930 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
        g_02726368 = FUN_0006d940();
        g_02726350 = "MDPluginWindowResizeView";
        g_02726358 = 0x140;
        g_02726360 = FUN_0043f230;
        g_02726370 = 0;
        ram_0000000002726378 = 0;
        g_02726380 = 0;
        g_027263f8 = 0;
        ram_0000000002726400 = 0;
        g_02726408 = 0;
        g_0272640a = 1;
        g_02726388 = 0;
        ram_0000000002726390 = 0;
        g_02726398 = 0;
        ram_00000000027263a0 = 0;
        g_027263a8 = 0;
        ram_00000000027263b0 = 0;
        g_027263b8 = 0;
        ram_00000000027263c0 = 0;
        g_027263c8 = 0;
        ram_00000000027263d0 = 0;
        g_027263d8 = 0;
        ram_00000000027263e0 = 0;
        g_027263e8 = 0;
        ram_00000000027263f0 = 0;
        g_02726413 = 0;
        g_0272640b = 0;
        ___cxa_guard_release();
      }
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar7 != (int64_t *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar8 = &local_58;
        if (cVar5 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      plVar7 = *pplVar8;
      if (plVar7 != (int64_t *)0x0) {
        if (*(char *)(pplVar8 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(void*)(pplVar8 + 1) = 0;
        }
        bVar4 = true;
        goto LAB_0063142b;
      }
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar9 = -local_40._4_4_;
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar9 = 0;
        }
        local_40 = CONCAT44(iVar9,(int)local_40);
      }
    }
    bVar4 = false;
    plVar7 = (int64_t *)0x0;
LAB_0063142b:
    FUN_000a9680();
    FUN_00d50b20();
    if (plVar7 != (int64_t *)0x0) {
      if (*(char *)(this_ptr + 0x108) != '\0') {
        (**(code **)(*plVar7 + 0x478))();
      }
      goto LAB_00631549;
    }
  }
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *plVar7 = (int64_t)&g_024f39b0;
  plVar7[2] = (int64_t)&g_024f42d8;
  *(void*)(plVar7 + 0x27) = 0;
  *(void*)((int64_t)plVar7 + 0x13a) = 0;
  (*g_024f39c8)();
  FUN_0043f070();
  (**(code **)(*plVar1 + 0x4d8))();
  uVar11 = uVar10;
  uVar13 = uVar12;
  uVar14 = in_XMM1_Dc;
  uVar15 = in_XMM1_Dd;
  (**(code **)(*plVar1 + 0x4d8))();
  auVar3._4_4_ = uVar12;
  auVar3._0_4_ = uVar10;
  auVar3._8_4_ = in_XMM1_Dc;
  auVar3._12_4_ = in_XMM1_Dd;
  auVar2._4_4_ = uVar13;
  auVar2._0_4_ = uVar11;
  auVar2._8_4_ = uVar14;
  auVar2._12_4_ = uVar15;
  blendps(auVar3,auVar2,2);
  (**(code **)(*plVar7 + 0x4d0))();
  (**(code **)(*plVar7 + 0x558))();
  FUN_0043f090();
  (**(code **)(*plVar1 + 0x450))();
  bVar4 = true;
LAB_00631549:
  if (bVar4) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00631870
// ============================================================
// Function: FUN_00631870
// Address: 00631870
// Size: 502 bytes
// Class: MDPluginWindowResizeView

void FUN_00631870(void)

{
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  FUN_01e56750();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_38 != (int64_t *)0x0) {
    FUN_006f3f00();
    if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01e56750();
    (**(code **)(*local_38 + 0x478))();
    FUN_01e5f970();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e56750();
    FUN_007585f0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01e5a050();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e56750();
    (**(code **)(*local_38 + 0x468))();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01e5f4b0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 005de2a0
// ============================================================
// Function: FUN_005de2a0
// Address: 005de2a0
// Size: 788 bytes
// Class: MDPluginWindowResizeView
// String references:
//   "MDPluginWindowResizeView"

void FUN_005de2a0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_024f39b0;
  this_ptr[2] = &g_024f42d8;
  *(void*)(this_ptr + 0x27) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272640b == '\0') {
    FUN_005de5e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x139) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272640b == '\0') {
    FUN_005de770();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x13a) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272640b == '\0') {
    FUN_005de900();
    FUN_00e87980();
  }
  return;
}

