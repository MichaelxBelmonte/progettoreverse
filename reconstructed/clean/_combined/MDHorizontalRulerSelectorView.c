// ===================================================================
// MDHorizontalRulerSelectorView — Complete reconstructed pseudocode
// 5 functions
// ===================================================================


// ============================================================
// 004ff560
// ============================================================
// Function: FUN_004ff560
// Address: 004ff560
// Size: 1562 bytes
// Class: MDHorizontalRulerSelectorView
// String references:
//   "MDHorizontalRulerSelectorView"

void FUN_004ff560(void)

{
  int64_t *plVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int64_t *this_ptr;
  int64_t **pplVar5;
  float fVar6;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar7 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint8_t in_XMM1 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  float fVar13;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint8_t local_78 [16];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int64_t *local_38;
  char local_30;
  
  FUN_01f27fe0();
  bVar2 = (**(code **)(*local_38 + 0x450))();
  *(byte *)((int64_t)this_ptr + 0x19c) = bVar2 ^ 1;
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr[0x49] != 0) {
    this_ptr[0x49] = 0;
    FUN_00d50b20();
  }
  if ((int)this_ptr[0x35] != 0) {
    return;
  }
  FUN_0197c740();
  pplVar5 = &local_38;
  FUN_01d98320();
  plVar1 = local_38;
  FUN_00275460();
  if (plVar1 == (int64_t *)0x0) {
LAB_004ff61b:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_004ff61b;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  auVar9 = in_XMM1;
  if (plVar1 != (int64_t *)0x0) {
    FUN_01e3f820();
    auVar9 = in_XMM1;
    (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x4d8))();
    auVar7 = auVar9;
    FUN_01e3f820();
    if ((int64_t *)this_ptr[0x2a] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x4d8))();
    }
    auVar8 = blendps(auVar9,in_XMM1,0xd);
    (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x4d0))();
    local_78._0_8_ = (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d8))();
    local_78._8_8_ = extraout_XMM0_Qb;
    auVar9 = auVar8;
    FUN_01d97ec0();
    (**(code **)(*local_38 + 0x4d8))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_58 = auVar7._0_4_;
    fStack_54 = auVar7._4_4_;
    fStack_50 = auVar7._8_4_;
    fStack_4c = auVar7._12_4_;
    local_58 = local_58 - in_XMM1._0_4_;
    fStack_54 = fStack_54 - in_XMM1._4_4_;
    fStack_50 = fStack_50 - in_XMM1._8_4_;
    fStack_4c = fStack_4c - in_XMM1._12_4_;
    local_88 = auVar9._0_4_;
    fStack_84 = auVar9._4_4_;
    fStack_80 = auVar9._8_4_;
    fStack_7c = auVar9._12_4_;
    auVar9._0_4_ = local_58 - local_88;
    auVar9._4_4_ = fStack_54 - fStack_84;
    auVar9._8_4_ = fStack_50 - fStack_80;
    auVar9._12_4_ = fStack_4c - fStack_7c;
    auVar9 = blendps(auVar9,auVar8,2);
    auVar7 = blendps(local_78,in_XMM1,0xd);
    (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d0))(auVar7._0_8_);
    if (this_ptr[0x2e] != 0) {
      FUN_01e3f820();
      auVar9 = blendps(auVar9,in_XMM1,0xd);
      (**(code **)(*(int64_t *)this_ptr[0x2e] + 0x4e8))();
    }
    if ((int64_t *)this_ptr[0x2a] != (int64_t *)0x0) {
      local_78._0_8_ = (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x4d8))();
      local_78._8_8_ = extraout_XMM0_Qb_00;
      auVar7 = auVar9;
      FUN_01d97ec0();
      (**(code **)(*local_38 + 0x4d8))();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_88 = auVar7._0_4_;
      fStack_84 = auVar7._4_4_;
      fStack_80 = auVar7._8_4_;
      fStack_7c = auVar7._12_4_;
      auVar7._0_4_ = local_58 - local_88;
      auVar7._4_4_ = fStack_54 - fStack_84;
      auVar7._8_4_ = fStack_50 - fStack_80;
      auVar7._12_4_ = fStack_4c - fStack_7c;
      auVar9 = blendps(auVar7,auVar9,2);
      auVar7 = blendps(in_XMM1,local_78,2);
      (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x4d0))(auVar7._0_8_);
    }
    FUN_00d50b20();
  }
  if (this_ptr[0x42] != 0) {
    FUN_01e40eb0();
    plVar1 = local_38;
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_004ffdb0();
      FUN_01e40eb0();
      plVar1 = local_38;
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 == this_ptr) {
        if ((int64_t *)this_ptr[0x2b] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x4d8))();
          fVar6 = (float)FUN_01b2b5d0();
          fVar13 = auVar9._4_4_;
          auVar8._4_4_ = fVar13;
          auVar8._0_4_ = fVar13;
          auVar8._8_4_ = auVar9._12_4_;
          auVar8._12_4_ = auVar9._12_4_;
          auVar10._4_12_ = auVar8._4_12_;
          auVar10._0_4_ = fVar13 - fVar6;
          auVar9 = insertps(auVar9,auVar10,0x10);
          (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x4d0))();
          FUN_01cf5a00();
        }
        (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d8))();
        fVar6 = (float)FUN_01b2b5d0();
        fVar13 = auVar9._4_4_;
        auVar11._4_4_ = fVar13;
        auVar11._0_4_ = fVar13;
        auVar11._8_4_ = auVar9._12_4_;
        auVar11._12_4_ = auVar9._12_4_;
        auVar12._4_12_ = auVar11._4_12_;
        auVar12._0_4_ = fVar13 - fVar6;
        insertps(auVar9,auVar12,0x10);
        (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d0))();
        FUN_01cf5a00();
      }
    }
  }
  FUN_01d97e80();
  plVar1 = local_38;
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_01d97e80();
    FUN_01d92440();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d97ec0();
  plVar1 = local_38;
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_01d97ec0();
    FUN_01d92440();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(this_ptr[0x3e] + 0x18))();
  FUN_01d97870();
  plVar1 = local_38;
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_01d97870();
    FUN_01cf5a00();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  pplVar5 = &local_38;
  FUN_01d9ad00();
  plVar1 = local_38;
  if ((g_026d8110 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_0270a8a8 = FUN_0006d940();
    g_0270a890 = "MDHorizontalRulerSelectorView";
    g_0270a898 = 0x150;
    g_0270a8a0 = FUN_000748e0;
    g_0270a8b0 = 0;
    ram_000000000270a8b8 = 0;
    g_0270a8c0 = 0;
    g_0270a938 = 0;
    ram_000000000270a940 = 0;
    g_0270a948 = 0;
    g_0270a94a = 1;
    g_0270a8c8 = 0;
    ram_000000000270a8d0 = 0;
    g_0270a8d8 = 0;
    ram_000000000270a8e0 = 0;
    g_0270a8e8 = 0;
    ram_000000000270a8f0 = 0;
    g_0270a8f8 = 0;
    ram_000000000270a900 = 0;
    g_0270a908 = 0;
    ram_000000000270a910 = 0;
    g_0270a918 = 0;
    ram_000000000270a920 = 0;
    g_0270a928 = 0;
    ram_000000000270a930 = 0;
    g_0270a953 = 0;
    g_0270a94b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_004ffa5a;
  }
  pplVar5 = (int64_t **)&g_02802688;
LAB_004ffa5a:
  plVar1 = *pplVar5;
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_01d9ad00();
    (**(code **)(*local_38 + 0x918))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00500000
// ============================================================
// Function: FUN_00500000
// Address: 00500000
// Size: 2044 bytes
// Class: MDHorizontalRulerSelectorView

void* FUN_00500000(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  void*this_ptr;
  int iVar3;
  int64_t lVar4;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  FUN_0027c9f0();
  lVar4 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_60 = lVar4;
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*plVar2 + 0x18))();
  iVar3 = 0;
  local_48 = plVar2;
  do {
    lVar4 = g_02709e08;
    if (g_02709e08 != 0) {
      FUN_00d50b00();
    }
    local_f0 = lVar4;
    local_e8 = '\x01';
    FUN_01d5eb20(iVar3,&local_f0);
    lVar4 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_01d65230();
      local_d0 = local_40;
      local_c8 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_c8 = '\x01';
      FUN_01d65460();
      local_c0 = local_58;
      local_b8 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_b8 = '\x01';
      FUN_01d5d9b0();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      FUN_01d654a0();
      FUN_01d65490();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 3);
  FUN_01d5dc80();
  lVar4 = 0;
  do {
    lVar1 = g_02709e10;
    if (g_02709e10 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar1;
    local_d8 = '\x01';
    FUN_01d5eb20(*(void*)((int64_t)&g_023b4a50 + lVar4),&local_e0);
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_01d65230();
      local_b0 = local_40;
      local_a8 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_a8 = '\x01';
      FUN_01d65460();
      local_a0 = local_58;
      local_98 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_98 = '\x01';
      FUN_01d5d9b0();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      FUN_01d654a0();
      FUN_01d65490();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x14);
  FUN_01d5dc80();
  lVar4 = local_60;
  local_90 = g_02709e18;
  if (g_02709e18 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  FUN_01d5eb20(0,&local_90);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_01d65230();
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    FUN_01d65460();
    local_70 = local_58;
    local_68 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_68 = '\x01';
    FUN_01d5d9b0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d654a0();
    FUN_01d65490();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  lVar1 = g_02709e18;
  if (g_02709e18 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar1;
  local_88 = '\x01';
  FUN_01d5eb20(1,&local_90);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_01d65230();
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    FUN_01d65460();
    local_70 = local_58;
    local_68 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_68 = '\x01';
    FUN_01d5d9b0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d654a0();
    FUN_01d65490();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 00500e20
// ============================================================
// Function: FUN_00500e20
// Address: 00500e20
// Size: 1249 bytes
// Class: MDHorizontalRulerSelectorView

void FUN_00500e20(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_38;
  char local_30;
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(plVar4 + 0x27) = 0;
  plVar4[0x2e] = 0;
  *(void*)(plVar4 + 0x2f) = 0;
  plVar4[0x30] = 0;
  *(void*)(plVar4 + 0x31) = 0;
  plVar4[0x28] = 0;
  plVar4[0x29] = 0;
  *(void*)(plVar4 + 0x2a) = 0;
  plVar4[0x2b] = 0;
  plVar4[0x2c] = 0;
  *(void*)((int64_t)plVar4 + 0x165) = 0;
  *(void*)((int64_t)plVar4 + 0x18c) = 0;
  *(void*)((int64_t)plVar4 + 0x194) = 0;
  *(void*)((int64_t)plVar4 + 0x199) = 0;
  plVar4[0x35] = 0;
  plVar4[0x36] = 0;
  plVar4[0x37] = 0;
  plVar4[0x38] = 0;
  *(void*)((int64_t)plVar4 + 500) = 0;
  *(void*)(plVar4 + 0x3f) = 0;
  plVar4[0x43] = 0;
  plVar4[0x3c] = 0;
  plVar4[0x3d] = 0;
  plVar4[0x3a] = 0;
  plVar4[0x3b] = 0;
  *(void*)(plVar4 + 0x3e) = 0;
  *(void*)((int64_t)plVar4 + 0x1fc) = 0;
  *(void*)((int64_t)plVar4 + 0x204) = 0;
  *(void*)((int64_t)plVar4 + 0x20c) = 0;
  *plVar4 = (int64_t)&g_02687f80;
  plVar4[2] = (int64_t)&g_02688a68;
  plVar4[0x39] = (int64_t)&g_02688aa8;
  plVar4[0x44] = 0;
  *(void*)(plVar4 + 0x45) = 0;
  plVar4[0x46] = 0;
  *(void*)(plVar4 + 0x47) = 0;
  plVar4[0x48] = 0;
  *(void*)(plVar4 + 0x49) = 0;
  *(void*)((int64_t)plVar4 + 0x24c) = 0;
  *(void*)(plVar4 + 0x4a) = 0;
  (*g_02687f98)();
  FUN_01cef4c0();
  (**(code **)(*arg1 + 0xa20))();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01d778e0();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d7ac40();
  FUN_01cef4e0(g_023b1d84);
  lVar2 = g_02709e20;
  if (g_02709e20 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar4 + 0xa10))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01cef490();
  lVar2 = g_02709df8;
  if (g_02709df8 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_02709e00;
  if (g_02709e00 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar3;
  local_a0 = '\x01';
  local_98 = 0;
  local_90 = '\0';
  FUN_00d31230(&local_98,&local_a8);
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  (**(code **)(*plVar4 + 0x6a8))();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_02709e28;
  if (g_02709e28 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar2;
  local_80 = '\x01';
  FUN_01d51a40();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01cef3b0();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cef4e0(g_023b4a20);
  FUN_00d50b00();
  (**(code **)(*plVar4 + 0xa20))();
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)arg1[0x4a];
  if (plVar1 != plVar4) {
    FUN_00d50b00();
    arg1[0x4a] = (int64_t)plVar4;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00501710
// ============================================================
// Function: FUN_00501710
// Address: 00501710
// Size: 557 bytes
// Class: MDHorizontalRulerSelectorView

void FUN_00501710(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  void*puVar4;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  FUN_0197a540();
  (**(code **)(*this_ptr + 0x9f8))();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *puVar4 = &g_024c4260;
  puVar4[2] = &g_024c4b98;
  puVar4[0x27] = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  (*g_024c4278)();
  FUN_01d9ac40();
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *puVar4 = &g_024dc470;
  puVar4[2] = &g_024dcdc0;
  puVar4[0x27] = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  puVar4[0x2a] = 0;
  (*g_024dc488)();
  FUN_01d9ade0();
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  lVar2 = g_026f6f70;
  plVar1 = (int64_t *)this_ptr[0x3a];
  if (plVar1 != (int64_t *)0x0) {
    if (g_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_02709df0;
    if (g_02709df0 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar3;
    local_58 = '\x01';
    local_50 = 0;
    local_48 = '\0';
    FUN_00d31230(&local_50,&local_60);
    local_30 = local_40;
    local_28 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_28 = '\x01';
    (**(code **)(*plVar1 + 0x6a8))();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x928))();
  return;
}



// ============================================================
// 004fc6d0
// ============================================================
// Function: FUN_004fc6d0
// Address: 004fc6d0
// Size: 551 bytes
// Class: MDHorizontalRulerSelectorView
// String references:
//   "MDHorizontalRulerSelectorView"

void FUN_004fc6d0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_188;
  int64_t local_180;
  int64_t local_178;
  
  if ((g_026d8110 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_0270a8a8 = FUN_0006d940();
    g_0270a890 = "MDHorizontalRulerSelectorView";
    g_0270a898 = 0x150;
    g_0270a8a0 = FUN_000748e0;
    g_0270a8b0 = 0;
    ram_000000000270a8b8 = 0;
    g_0270a8c0 = 0;
    g_0270a938 = 0;
    ram_000000000270a940 = 0;
    g_0270a948 = 0;
    g_0270a94a = 1;
    g_0270a8c8 = 0;
    ram_000000000270a8d0 = 0;
    g_0270a8d8 = 0;
    ram_000000000270a8e0 = 0;
    g_0270a8e8 = 0;
    ram_000000000270a8f0 = 0;
    g_0270a8f8 = 0;
    ram_000000000270a900 = 0;
    g_0270a908 = 0;
    ram_000000000270a910 = 0;
    g_0270a918 = 0;
    ram_000000000270a920 = 0;
    g_0270a928 = 0;
    ram_000000000270a930 = 0;
    g_0270a953 = 0;
    g_0270a94b = 0;
    ___cxa_guard_release();
  }
  if (g_0270a94b == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_0050e1c0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00072960();
    FUN_00e87920(uVar2,0);
    if (local_178 != 0) {
      FUN_00d50b20();
    }
    if (local_180 != 0) {
      FUN_00d50b20();
    }
    if (local_188 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}

