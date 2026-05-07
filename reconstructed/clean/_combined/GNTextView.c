// ===================================================================
// GNTextView — Complete reconstructed pseudocode
// 12 functions
// ===================================================================

// Registered properties (10):
//                   _firstResponder
//                   _defaultFirstResponder
//                   _isDisplaying
//                   _ignoreSystemKeyEvents
//                   _bgCache
//                   _toolbarActions
//                   _handeledToolbarActions
//                   _sheetController
//                   _sheetControllerLoadedSize
//                   _sheetControllerLoadedAutoresizingMask


// ============================================================
// 00513640
// ============================================================
// Function: FUN_00513640
// Address: 00513640
// Size: 3389 bytes
// Class: GNTextView
// String references:
//   "[%@] %s"
//   "Beta"
//   "Alpha"
//   "GNTextView"
//   "%@ %@.%@ %@"
//   "GNString"
// === GNTextView properties ===
//                   _firstResponder
//                   _defaultFirstResponder
//                   _isDisplaying
//                   _ignoreSystemKeyEvents
//                   _bgCache
//                   _toolbarActions
//                   _handeledToolbarActions
//                   _sheetController
//                   _sheetControllerLoadedSize
//                   _sheetControllerLoadedAutoresizingMask


void FUN_00513640(uint32_t param_1,float param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  char cVar7;
  int iVar8;
  int64_t **pplVar9;
  int64_t this_ptr;
  int64_t *plVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar11;
  uint64_t uVar12;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint8_t auVar13 [16];
  int64_t local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t *local_f8;
  int64_t *local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  uint local_b0;
  int64_t *local_a8;
  char local_a0;
  char *local_98;
  int64_t *local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar5 = g_0270b080;
  if (g_0270b080 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_1a8 = lVar5;
  local_1a0 = '\x01';
  pplVar9 = &local_b8;
  FUN_01e57490(param_1,&local_1a8);
  plVar1 = local_b8;
  if ((g_026f3380 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    g_027fadc8 = FUN_0006d940();
    g_027fadb0 = "GNTextView";
    g_027fadb8 = 0x1d8;
    g_027fadc0 = FUN_001fc360;
    g_027fadd0 = 0;
    ram_00000000027fadd8 = 0;
    g_027fade0 = 0;
    ram_00000000027fade8 = 0;
    g_027fadf0 = 0;
    ram_00000000027fadf8 = 0;
    g_027fae00 = 0;
    ram_00000000027fae08 = 0;
    g_027fae10 = 0;
    ram_00000000027fae18 = 0;
    g_027fae20 = 0;
    ram_00000000027fae28 = 0;
    g_027fae30 = 0;
    ram_00000000027fae38 = 0;
    g_027fae40 = 0;
    ram_00000000027fae48 = 0;
    g_027fae50 = 0;
    ram_00000000027fae58 = 0;
    g_027fae60 = 0;
    ram_00000000027fae68 = 0;
    g_027fae70 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_005136cb:
    pplVar9 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 == '\0') goto LAB_005136cb;
  }
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar9 + 1) = 0;
  }
  if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  local_f0 = plVar1;
  FUN_01f7e630();
  FUN_01f27fe0();
  FUN_01f2eb50();
  local_68 = local_b8;
  if ((char)local_b0 == '\0') {
    if (local_b8 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_b0 = local_b0 & 0xffffff00;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    iVar8 = FUN_000030b0();
    if (iVar8 == 2) {
      FUN_00d8ede0();
      local_d8 = local_b8;
      local_d0 = 0;
      if ((char)local_b0 == '\0') {
        if (local_b8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = local_b0 & 0xffffff00;
      }
      local_d0 = '\x01';
      FUN_01e125e0();
      if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar11 = FUN_00003010();
      uVar11 = FUN_00d91a70(uVar11,1);
      FUN_00d97ce0(uVar11,8);
      iVar8 = FUN_000030b0();
      local_a8 = local_50;
      local_98 = "Alpha";
      if (iVar8 == 1) {
        local_98 = "Beta";
      }
      local_b0 = 2;
      local_b8 = &g_024c5048;
      local_a0 = 0;
      uVar11 = extraout_XMM0_Da;
      if (local_50 != (int64_t *)0x0) {
        uVar11 = FUN_00d50b00();
      }
      local_a0 = '\x01';
      local_b8 = (int64_t *)&g_024c59c8;
      FUN_00d8cb40(uVar11,&local_b8);
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      local_b8 = &g_024c5048;
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e53c20();
      (**(code **)(*local_50 + 0x640))();
      (**(code **)(*local_40 + 0x370))();
      local_e8 = local_b8;
      local_e0 = 0;
      if ((char)local_b0 == '\0') {
        if (local_b8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = local_b0 & 0xffffff00;
      }
      local_e0 = '\x01';
      FUN_01e12b60();
      if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_198 = plVar1;
      local_190 = '\0';
      FUN_01e125e0();
      if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01e53c20();
  (**(code **)(*local_60 + 0x640))();
  uVar11 = (**(code **)(*local_50 + 0x370))();
  FUN_01d44a40(uVar11,1);
  plVar1 = local_b8;
  if ((char)local_b0 == '\0') {
    if (local_b8 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_b0 = local_b0 & 0xffffff00;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_f8 = plVar1;
  if (*(int64_t **)(this_ptr + 0xa8) != (int64_t *)0x0) {
    local_188 = plVar1;
    local_180 = '\0';
    (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x9d8))();
    if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x78) != 0) {
      FUN_01e40eb0();
      plVar10 = local_b8;
      if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 != (int64_t *)0x0) {
        uVar3 = (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x4d8))();
        uVar12 = (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x4d8))();
        auVar2._8_4_ = extraout_XMM0_Dc;
        auVar2._0_8_ = uVar3;
        auVar2._12_4_ = extraout_XMM0_Dd;
        auVar13._4_4_ = (int)((uint64_t)uVar12 >> 0x20);
        auVar13._0_4_ = ((float)uVar12 - param_2) + g_02394248;
        auVar13._8_4_ = extraout_XMM0_Dc_00;
        auVar13._12_4_ = extraout_XMM0_Dd_00;
        auVar13 = blendps(auVar2,auVar13,1);
        (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x4d0))(auVar13._0_4_);
      }
    }
  }
  if (*(int64_t *)(this_ptr + 0xb0) != 0) {
    local_178 = plVar1;
    local_170 = '\0';
    FUN_01e12b60();
    if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = g_0270b068;
  local_58 = '\0';
  local_60 = (int64_t *)0x0;
  if (g_0270b068 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar11 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar11 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  local_50 = plVar1;
  local_48 = '\0';
  FUN_000175c0(uVar11,&local_50);
  plVar6 = local_40;
  plVar10 = local_f0;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (int64_t *)0x0) {
    local_100 = '\0';
    local_108 = 0;
  }
  else {
    local_38 = '\0';
    local_40 = plVar6;
    FUN_00d97750();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar11 = FUN_00d50b20();
  local_168 = g_0270b070;
  if (g_0270b070 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_160 = '\x01';
  uVar11 = FUN_000175c0(uVar11,&local_168);
  local_158 = g_0270b078;
  if (g_0270b078 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_150 = '\x01';
  FUN_000175c0(uVar11,&local_158);
  uVar11 = FUN_00513530(&local_50,&local_40,&local_60);
  FUN_00d8cb40(uVar11,&local_b8);
  lVar5 = local_118;
  if (local_110 == '\0') {
    if (((local_118 != 0) && (FUN_00d50b00(), local_110 != '\0')) && (local_118 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_110 = '\0';
  }
  FUN_002d10d0();
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  local_148 = lVar5;
  local_140 = '\0';
  uVar11 = (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x958))();
  if ((local_140 != '\0') && (local_148 != 0)) {
    uVar11 = FUN_00d50b20();
  }
  lVar4 = g_026fbad8;
  if (g_026fbad8 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_138 = lVar4;
  local_130 = '\x01';
  pplVar9 = &local_b8;
  FUN_000175c0(uVar11,&local_138);
  plVar1 = local_b8;
  if ((g_026fd0c0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
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
    plVar10 = local_f0;
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 != '\0') goto LAB_00514048;
  }
  pplVar9 = (int64_t **)&g_02802688;
LAB_00514048:
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar9 + 1) = 0;
  }
  if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    FUN_00d8ede0();
    local_c8 = local_b8;
    local_c0 = 0;
    if ((char)local_b0 == '\0') {
      if (local_b8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_b0 = local_b0 & 0xffffff00;
    }
    local_c0 = '\x01';
    FUN_01e125e0();
    if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_120 = '\0';
    local_128 = plVar1;
    FUN_01e125e0();
    if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_f8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_68 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01e478c0
// ============================================================
// Function: FUN_01e478c0
// Address: 01e478c0
// Size: 1147 bytes
// Class: GNTextView
// === GNTextView properties ===
//                   _firstResponder
//                   _defaultFirstResponder
//                   _isDisplaying
//                   _ignoreSystemKeyEvents
//                   _bgCache
//                   _toolbarActions
//                   _handeledToolbarActions
//                   _sheetController
//                   _sheetControllerLoadedSize
//                   _sheetControllerLoadedAutoresizingMask


void FUN_01e478c0(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t *this_ptr;
  uint uVar14;
  int64_t *plVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar18 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  uint64_t extraout_XMM0_Qb_06;
  uint8_t auVar19 [16];
  uint64_t extraout_XMM0_Qb_07;
  uint64_t extraout_XMM0_Qb_08;
  uint64_t extraout_XMM0_Qb_09;
  uint64_t extraout_XMM0_Qb_10;
  uint8_t in_XMM2 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint8_t local_48 [8];
  float fStack_40;
  float fStack_3c;
  
  plVar13 = (int64_t *)this_ptr[6];
  plVar2 = this_ptr;
  while (plVar15 = plVar13, plVar15 != (int64_t *)0x0) {
    plVar13 = (int64_t *)plVar15[6];
    plVar2 = plVar15;
    if ((int64_t *)plVar15[6] == plVar15) {
      plVar13 = plVar15;
    }
  }
  cVar11 = (**(code **)(*plVar2 + 0x4b8))();
  if (cVar11 != '\0') {
    FUN_00d50b00();
    FUN_00d50b20();
    if (*(int *)((int64_t)this_ptr + 0xb4) == 0) {
      bVar7 = 0.0 < (float)param_2;
      bVar8 = 0.0 < (float)((uint64_t)param_2 >> 0x20);
      bVar9 = (float)param_3 <= 0.0;
      bVar10 = (float)((uint64_t)param_3 >> 0x20) <= 0.0;
      if ((bVar8 && bVar7) && (bVar10 || bVar9)) {
        (**(code **)(*this_ptr + 0x510))();
      }
      if ((!bVar8 || !bVar7) && (!bVar10 && !bVar9)) {
        (**(code **)(*this_ptr + 0x508))();
      }
      lVar1 = this_ptr[7];
      if (lVar1 != 0) {
        if (0 < *(int *)(lVar1 + 0xc)) {
          uVar14 = 0;
          do {
            plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar14 * 8);
            (**(code **)(*plVar2 + 0x4d8))();
            cVar11 = FUN_00d054a0();
            if (cVar11 == '\0') {
              (**(code **)(*plVar2 + 0x4d8))();
              cVar11 = FUN_00d054a0();
              if (cVar11 != '\0') goto LAB_01e47a64;
            }
            else {
LAB_01e47a64:
              FUN_00d50b00();
              local_88 = (float)param_1;
              fStack_84 = (float)((uint64_t)param_1 >> 0x20);
              fStack_80 = (float)in_XMM0_Qb;
              fStack_7c = (float)((uint64_t)in_XMM0_Qb >> 0x20);
              plVar13 = this_ptr;
              if ((int64_t *)plVar2[6] == this_ptr) {
                uVar16 = (**(code **)(*plVar2 + 0x4d8))();
                uVar17 = (**(code **)(*plVar2 + 0x4d8))();
                local_48._0_4_ = (uint32_t)uVar16;
                local_48._4_4_ = (uint32_t)((uint64_t)uVar16 >> 0x20);
                fStack_40 = (float)extraout_XMM0_Qb_01;
                fStack_3c = (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
                auVar21._0_4_ = local_88 - (float)uVar17;
                auVar21._4_4_ = fStack_84 - (float)((uint64_t)uVar17 >> 0x20);
                auVar21._8_4_ = fStack_80 - (float)extraout_XMM0_Qb_02;
                auVar21._12_4_ = fStack_7c - (float)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
                auVar6._4_4_ = fStack_84 - (float)local_48._4_4_;
                auVar6._0_4_ = local_88 - (float)local_48._0_4_;
                auVar6._8_4_ = fStack_80 - fStack_40;
                auVar6._12_4_ = fStack_7c - fStack_3c;
                blendps(auVar21,auVar6,0xd);
              }
              else {
                do {
                  local_48._4_4_ = fStack_84;
                  local_48._0_4_ = local_88;
                  fStack_40 = fStack_80;
                  fStack_3c = fStack_7c;
                  cVar11 = (**(code **)(*plVar13 + 0x4b8))();
                  plVar15 = plVar2;
                  if (cVar11 != '\0') break;
                  uVar16 = (**(code **)(*plVar13 + 0x4d8))();
                  uVar17 = (**(code **)(*plVar13 + 0x4d8))();
                  local_58 = (float)uVar16;
                  fStack_54 = (float)((uint64_t)uVar16 >> 0x20);
                  fStack_50 = (float)extraout_XMM0_Qb;
                  fStack_4c = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
                  auVar20._0_4_ = local_58 + local_88;
                  auVar20._4_4_ = fStack_54 + fStack_84;
                  auVar20._8_4_ = fStack_50 + fStack_80;
                  auVar20._12_4_ = fStack_4c + fStack_7c;
                  auVar18._0_4_ = (float)uVar17 + local_88;
                  auVar18._4_4_ = (float)((uint64_t)uVar17 >> 0x20) + fStack_84;
                  auVar18._8_4_ = (float)extraout_XMM0_Qb_00 + fStack_80;
                  auVar18._12_4_ = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20) + fStack_7c;
                  _local_48 = blendps(auVar18,auVar20,0xd);
                  plVar12 = (int64_t *)plVar13[6];
                  if ((int64_t *)plVar13[6] == plVar13) {
                    plVar12 = plVar13;
                  }
                  local_88 = local_48._0_4_;
                  fStack_84 = local_48._4_4_;
                  fStack_80 = local_48._8_4_;
                  fStack_7c = local_48._12_4_;
                  plVar13 = plVar12;
                } while (plVar12 != (int64_t *)0x0);
                do {
                  cVar11 = (**(code **)(*plVar15 + 0x4b8))();
                  if (cVar11 != '\0') break;
                  uVar16 = (**(code **)(*plVar15 + 0x4d8))();
                  uVar17 = (**(code **)(*plVar15 + 0x4d8))();
                  local_58 = (float)uVar16;
                  fStack_54 = (float)((uint64_t)uVar16 >> 0x20);
                  fStack_50 = (float)extraout_XMM0_Qb_03;
                  fStack_4c = (float)((uint64_t)extraout_XMM0_Qb_03 >> 0x20);
                  auVar22._0_4_ = (float)local_48._0_4_ - (float)uVar17;
                  auVar22._4_4_ = (float)local_48._4_4_ - (float)((uint64_t)uVar17 >> 0x20);
                  auVar22._8_4_ = fStack_40 - (float)extraout_XMM0_Qb_04;
                  auVar22._12_4_ = fStack_3c - (float)((uint64_t)extraout_XMM0_Qb_04 >> 0x20);
                  auVar3._4_4_ = (float)local_48._4_4_ - fStack_54;
                  auVar3._0_4_ = (float)local_48._0_4_ - local_58;
                  auVar3._8_4_ = fStack_40 - fStack_50;
                  auVar3._12_4_ = fStack_3c - fStack_4c;
                  _local_48 = blendps(auVar22,auVar3,0xd);
                  plVar13 = (int64_t *)plVar15[6];
                  if ((int64_t *)plVar15[6] == plVar15) {
                    plVar13 = plVar15;
                  }
                  plVar15 = plVar13;
                } while (plVar13 != (int64_t *)0x0);
              }
              FUN_00d50b20();
              FUN_00d05360();
              FUN_00d50b00();
              local_68 = in_XMM2._0_4_;
              fStack_64 = in_XMM2._4_4_;
              fStack_60 = in_XMM2._8_4_;
              fStack_5c = in_XMM2._12_4_;
              plVar13 = this_ptr;
              if ((int64_t *)plVar2[6] == this_ptr) {
                uVar16 = (**(code **)(*plVar2 + 0x4d8))();
                uVar17 = (**(code **)(*plVar2 + 0x4d8))();
                local_48._0_4_ = (uint32_t)uVar16;
                local_48._4_4_ = (uint32_t)((uint64_t)uVar16 >> 0x20);
                fStack_40 = (float)extraout_XMM0_Qb_07;
                fStack_3c = (float)((uint64_t)extraout_XMM0_Qb_07 >> 0x20);
                auVar24._0_4_ = local_68 - (float)uVar17;
                auVar24._4_4_ = fStack_64 - (float)((uint64_t)uVar17 >> 0x20);
                auVar24._8_4_ = fStack_60 - (float)extraout_XMM0_Qb_08;
                auVar24._12_4_ = fStack_5c - (float)((uint64_t)extraout_XMM0_Qb_08 >> 0x20);
                auVar5._4_4_ = fStack_64 - (float)local_48._4_4_;
                auVar5._0_4_ = local_68 - (float)local_48._0_4_;
                auVar5._8_4_ = fStack_60 - fStack_40;
                auVar5._12_4_ = fStack_5c - fStack_3c;
                blendps(auVar24,auVar5,0xd);
              }
              else {
                do {
                  local_48._4_4_ = fStack_64;
                  local_48._0_4_ = local_68;
                  fStack_40 = fStack_60;
                  fStack_3c = fStack_5c;
                  cVar11 = (**(code **)(*plVar13 + 0x4b8))();
                  plVar15 = plVar2;
                  if (cVar11 != '\0') break;
                  uVar16 = (**(code **)(*plVar13 + 0x4d8))();
                  uVar17 = (**(code **)(*plVar13 + 0x4d8))();
                  local_58 = (float)uVar16;
                  fStack_54 = (float)((uint64_t)uVar16 >> 0x20);
                  fStack_50 = (float)extraout_XMM0_Qb_05;
                  fStack_4c = (float)((uint64_t)extraout_XMM0_Qb_05 >> 0x20);
                  auVar23._0_4_ = local_58 + local_68;
                  auVar23._4_4_ = fStack_54 + fStack_64;
                  auVar23._8_4_ = fStack_50 + fStack_60;
                  auVar23._12_4_ = fStack_4c + fStack_5c;
                  auVar19._0_4_ = (float)uVar17 + local_68;
                  auVar19._4_4_ = (float)((uint64_t)uVar17 >> 0x20) + fStack_64;
                  auVar19._8_4_ = (float)extraout_XMM0_Qb_06 + fStack_60;
                  auVar19._12_4_ = (float)((uint64_t)extraout_XMM0_Qb_06 >> 0x20) + fStack_5c;
                  _local_48 = blendps(auVar19,auVar23,0xd);
                  plVar12 = (int64_t *)plVar13[6];
                  if ((int64_t *)plVar13[6] == plVar13) {
                    plVar12 = plVar13;
                  }
                  local_68 = local_48._0_4_;
                  fStack_64 = local_48._4_4_;
                  fStack_60 = local_48._8_4_;
                  fStack_5c = local_48._12_4_;
                  plVar13 = plVar12;
                } while (plVar12 != (int64_t *)0x0);
                do {
                  cVar11 = (**(code **)(*plVar15 + 0x4b8))();
                  if (cVar11 != '\0') break;
                  uVar16 = (**(code **)(*plVar15 + 0x4d8))();
                  uVar17 = (**(code **)(*plVar15 + 0x4d8))();
                  local_58 = (float)uVar16;
                  fStack_54 = (float)((uint64_t)uVar16 >> 0x20);
                  fStack_50 = (float)extraout_XMM0_Qb_09;
                  fStack_4c = (float)((uint64_t)extraout_XMM0_Qb_09 >> 0x20);
                  auVar25._0_4_ = (float)local_48._0_4_ - (float)uVar17;
                  auVar25._4_4_ = (float)local_48._4_4_ - (float)((uint64_t)uVar17 >> 0x20);
                  auVar25._8_4_ = fStack_40 - (float)extraout_XMM0_Qb_10;
                  auVar25._12_4_ = fStack_3c - (float)((uint64_t)extraout_XMM0_Qb_10 >> 0x20);
                  auVar4._4_4_ = (float)local_48._4_4_ - fStack_54;
                  auVar4._0_4_ = (float)local_48._0_4_ - local_58;
                  auVar4._8_4_ = fStack_40 - fStack_50;
                  auVar4._12_4_ = fStack_3c - fStack_4c;
                  _local_48 = blendps(auVar25,auVar4,0xd);
                  plVar13 = (int64_t *)plVar15[6];
                  if ((int64_t *)plVar15[6] == plVar15) {
                    plVar13 = plVar15;
                  }
                  plVar15 = plVar13;
                } while (plVar13 != (int64_t *)0x0);
              }
              FUN_00d50b20();
              FUN_00d05360();
              (**(code **)(*plVar2 + 0x820))();
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < *(int *)(lVar1 + 0xc));
        }
        FUN_000a9680();
      }
    }
  }
  return;
}



// ============================================================
// 01e440a0
// ============================================================
// Function: FUN_01e440a0
// Address: 01e440a0
// Size: 1661 bytes
// Class: GNTextView
// === GNTextView properties ===
//                   _firstResponder
//                   _defaultFirstResponder
//                   _isDisplaying
//                   _ignoreSystemKeyEvents
//                   _bgCache
//                   _toolbarActions
//                   _handeledToolbarActions
//                   _sheetController
//                   _sheetControllerLoadedSize
//                   _sheetControllerLoadedAutoresizingMask


void FUN_01e440a0(void*param_1,void*param_2)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int iVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  uint uVar8;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  float fVar13;
  uint8_t auVar12 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  char local_a0;
  void*local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  uint64_t local_78;
  uint32_t local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_1[1];
  local_98 = param_2;
  (**(code **)(*(int64_t *)*arg1 + 0x610))(*param_1);
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_90 + 0x6c0))();
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    return;
  }
  plVar3 = (int64_t *)this_ptr[6];
  while (plVar6 = plVar3, plVar6 != (int64_t *)0x0) {
    plVar3 = (int64_t *)plVar6[6];
    this_ptr = plVar6;
    if ((int64_t *)plVar6[6] == plVar6) {
      plVar3 = plVar6;
    }
  }
  cVar4 = (**(code **)(*this_ptr + 0x4b8))();
  if (cVar4 == '\0') {
    return;
  }
  FUN_00d50b00();
  FUN_01d8c6e0();
  plVar3 = local_90;
  if (local_88 == '\0') {
    if (local_90 == (int64_t *)0x0) goto LAB_01e446ee;
    FUN_00d50b00();
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_90 == (int64_t *)0x0) goto LAB_01e446ee;
  local_b0 = plVar3;
  FUN_01f27fe0();
  FUN_01f30840();
  plVar3 = local_90;
  if (local_88 == '\0') {
    if (((local_90 != (int64_t *)0x0) && (FUN_00d50b00(), local_88 != '\0')) &&
       (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_88 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    local_88 = '\0';
    local_90 = (int64_t *)0x0;
    local_80 = plVar3;
    local_70 = 0;
    local_78 = 0;
    if (0 < *(int *)((int64_t)plVar3 + 0xc)) {
      uVar8 = 0;
      do {
        lVar2 = g_027f3ca0;
        plVar6 = *(int64_t **)(plVar3[2] + (uint64_t)uVar8 * 8);
        local_90 = plVar6;
        if (g_027f3ca0 != 0) {
          FUN_00d50b00();
        }
        cVar4 = FUN_00d50f90();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          (**(code **)(*plVar6 + 0x4a0))();
          plVar6 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
              if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01e44350;
            }
          }
          else if (local_68 != (int64_t *)0x0) {
LAB_01e44350:
            local_60 = '\0';
            local_68 = (int64_t *)0x0;
            local_58 = plVar6;
            local_50 = 0xffffffff;
            local_48 = 0;
            local_50._4_4_ = 0;
            while( true ) {
              if (local_50._4_4_ != 0) {
                if (local_50._4_4_ < 1) {
                  iVar7 = -local_50._4_4_;
                }
                else {
                  iVar7 = (int)local_50 - local_50._4_4_;
                  local_50 = CONCAT44(local_50._4_4_,iVar7);
                  FUN_00d23690();
                  local_48 = local_48 + local_50._4_4_;
                  iVar7 = 0;
                }
                local_50 = CONCAT44(iVar7,(int)local_50);
              }
              lVar2 = g_027f3ca8;
              lVar5 = (int64_t)(int)local_50;
              iVar7 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar7);
              if (*(int *)((int64_t)local_58 + 0xc) <= iVar7) break;
              local_68 = *(int64_t **)(local_58[2] + 8 + lVar5 * 8);
              if (g_027f3ca8 != 0) {
                FUN_00d50b00();
              }
              cVar4 = FUN_00d50f90();
              uVar9 = extraout_XMM0_Qa;
              if (lVar2 != 0) {
                uVar9 = FUN_00d50b20();
              }
              plVar6 = local_68;
              lVar2 = g_0276caa0;
              if (cVar4 != '\0') {
                if (g_0276caa0 != 0) {
                  uVar9 = FUN_00d50b00();
                }
                local_c0 = lVar2;
                local_b8 = '\x01';
                (**(code **)(*plVar6 + 0x88))(uVar9,&local_c0);
                plVar6 = local_40;
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_b8 != '\0') && (local_c0 != 0)) {
                  FUN_00d50b20();
                }
                if (plVar6 == local_b0) {
                  auVar15._0_8_ = (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
                  auVar15._8_8_ = extraout_XMM0_Qb;
                  auVar14 = roundss(ZEXT816(0),auVar15,9);
                  if ((float)auVar15._0_8_ - auVar14._0_4_ <= g_0239424c) {
                    auVar14._4_4_ = (float)((uint64_t)auVar15._0_8_ >> 0x20);
                    auVar14._0_4_ = auVar14._4_4_;
                    auVar14._12_4_ = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
                    auVar14._8_4_ = auVar14._12_4_;
                    auVar15 = roundss(ZEXT816(0),auVar14,9);
                    if (auVar14._4_4_ - auVar15._0_4_ <= g_0239424c) {
                      auVar10._0_12_ = ZEXT812(0);
                      auVar10._12_4_ = 0;
                      auVar15 = roundss(auVar10,auVar12,9);
                      fVar13 = auVar12._4_4_;
                      if ((auVar12._0_4_ - auVar15._0_4_ <= g_0239424c) &&
                         (auVar11._4_4_ = fVar13, auVar11._0_4_ = fVar13,
                         auVar11._8_4_ = auVar12._12_4_, auVar11._12_4_ = auVar12._12_4_,
                         auVar12 = roundss(ZEXT816(0),auVar11,9),
                         fVar13 - auVar12._0_4_ <= g_0239424c)) goto LAB_01e44380;
                    }
                  }
                  if ((g_028b9dd0 == (int64_t *)0x0) || (g_028b9dd9 == '\0')) {
                    FUN_00e8cb50();
                    if (g_028b9dd0 == (int64_t *)0x0) {
                      FUN_01cfcdc0();
                      plVar6 = g_028b9dd0;
                      if (g_028b9dd0 != local_40) {
                        if (local_38 == '\0') {
                          if (local_40 == (int64_t *)0x0) {
                            plVar6 = (int64_t *)0x0;
                          }
                          else {
                            FUN_00d50b00();
                            plVar6 = local_40;
                          }
                        }
                        else {
                          local_38 = '\0';
                          plVar6 = local_40;
                        }
                        bVar1 = g_028b9dd0 != (int64_t *)0x0;
                        g_028b9dd0 = plVar6;
                        if (bVar1) {
                          FUN_00d50b20();
                          plVar6 = local_40;
                        }
                      }
                      if ((plVar6 != (int64_t *)0x0) && (g_028b9dd8 == '\0')) {
                        g_028b9dd8 = '\x01';
                        FUN_00e8cb90();
                        plVar6 = local_40;
                      }
                      if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      g_028b9dd9 = '\x01';
                      FUN_00e8cb70();
                    }
                    else {
                      g_028b9dd9 = '\x01';
                      FUN_00e8cb70();
                    }
                  }
                  FUN_01d48370();
                  plVar6 = g_028b9dd0;
                  local_a0 = 0;
                  if (g_028b9dd0 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  local_a8 = plVar6;
                  local_a0 = '\x01';
                  FUN_01d488d0();
                  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = *(uint64_t *)(*arg1 + 0x114);
                  (**(code **)(*(int64_t *)*local_98 + 0x3b8))();
                  FUN_01d48390();
                }
              }
LAB_01e44380:
            }
            FUN_000ad7a0();
            FUN_00d50b20();
          }
        }
        uVar8 = uVar8 + 1;
        local_78 = CONCAT44(local_78._4_4_,uVar8);
      } while ((int)uVar8 < *(int *)((int64_t)plVar3 + 0xc));
    }
    FUN_01e4f040();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01e446ee:
  FUN_00d50b20();
  return;
}



// ============================================================
// 01e459c0
// ============================================================
// Function: FUN_01e459c0
// Address: 01e459c0
// Size: 2374 bytes
// Class: GNTextView
// String references:
//   "GNTextView"
// === GNTextView properties ===
//                   _firstResponder
//                   _defaultFirstResponder
//                   _isDisplaying
//                   _ignoreSystemKeyEvents
//                   _bgCache
//                   _toolbarActions
//                   _handeledToolbarActions
//                   _sheetController
//                   _sheetControllerLoadedSize
//                   _sheetControllerLoadedAutoresizingMask


void FUN_01e459c0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  uint64_t uVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar11;
  uint32_t uVar12;
  int64_t *local_f8;
  char local_f0;
  int64_t local_c8;
  char local_c0;
  uint32_t local_68;
  int64_t *local_48;
  char local_40;
  
  if (*arg1 == 0) {
    return;
  }
  iVar9 = FUN_01d3a5a0();
  if (((iVar9 == 5) && (cVar7 = (**(code **)(*this_ptr + 0x750))(), cVar7 != '\0')) &&
     (cVar7 = FUN_01e45650(), cVar7 == '\0')) {
    (**(code **)(*this_ptr + 0x740))();
  }
  iVar9 = FUN_01d3a5a0();
  if (iVar9 == 1) {
    iVar9 = FUN_01d3b630();
    if (iVar9 == 2) {
      FUN_01d3abf0();
      uVar11 = FUN_01e466c0();
      (**(code **)(*this_ptr + 0x6f8))();
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_01e45be0;
        }
      }
      else if (local_48 != (int64_t *)0x0) {
LAB_01e45be0:
        FUN_00d50b00();
        FUN_01d62b10();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b00();
        FUN_01d5ef60(uVar11,g_0241f410);
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_01d62b80();
        FUN_00d50b20();
        return;
      }
    }
    cVar7 = (**(code **)(*this_ptr + 0x8e8))();
    if ((cVar7 != '\0') &&
       ((((iVar9 = FUN_01d3a5a0(), iVar9 == 1 && (iVar9 = FUN_01d3b630(), iVar9 == 1)) ||
         ((iVar9 = FUN_01d3a5a0(), iVar9 == 6 && (iVar9 = FUN_01d3b630(), iVar9 == 1)))) ||
        (iVar9 = FUN_01d3a5a0(), iVar9 == 5)))) {
      FUN_01d3abf0();
      local_68 = FUN_01e466c0();
      FUN_01d3b590();
      plVar1 = (int64_t *)*arg1;
      lVar4 = arg1[1];
      if (((char)lVar4 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      uVar11 = FUN_01d3b620();
      (**(code **)(*this_ptr + 0x8f0))(local_68,uVar11);
      FUN_01d3a560();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 == plVar1) {
LAB_01e460e0:
        do {
          do {
            (**(code **)(*this_ptr + 0x658))();
            plVar2 = (int64_t *)*arg1;
            if (plVar2 == local_48) {
              if (((char)arg1[1] == '\0') && (local_48 != (int64_t *)0x0)) {
                if (local_40 != '\0') goto LAB_01e46133;
                FUN_00d50b00();
                goto LAB_01e46168;
              }
LAB_01e4616e:
              if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              lVar5 = arg1[1];
              if (local_40 == '\0') {
                if (local_48 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                *arg1 = (int64_t)local_48;
                if (((char)lVar5 != '\0') && (plVar2 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01e46168:
                *(void*)(arg1 + 1) = 1;
                goto LAB_01e4616e;
              }
              *arg1 = (int64_t)local_48;
              if (((char)lVar5 != '\0') && (plVar2 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_01e46133:
              *(void*)(arg1 + 1) = 1;
            }
            if (*arg1 == 0) {
LAB_01e4618d:
              (**(code **)(*this_ptr + 0x900))(local_68);
              goto LAB_01e46234;
            }
            plVar6 = (int64_t *)this_ptr[6];
            plVar2 = this_ptr;
            while (plVar3 = plVar6, plVar3 != (int64_t *)0x0) {
              plVar6 = (int64_t *)plVar3[6];
              plVar2 = plVar3;
              if ((int64_t *)plVar3[6] == plVar3) {
                plVar6 = plVar3;
              }
            }
            cVar7 = (**(code **)(*plVar2 + 0x4b8))();
            if (cVar7 == '\0') goto LAB_01e4618d;
            FUN_00d50b00();
            FUN_00d50b20();
            uVar11 = FUN_01d3abf0();
            uVar12 = FUN_01e466c0();
            if (*arg1 == 0) goto LAB_01e4621e;
            iVar9 = FUN_01d3a5a0();
            if (iVar9 == 5) {
              FUN_01d3b590();
              (**(code **)(*this_ptr + 0x8f8))(uVar12,local_68);
              local_68 = FUN_01e466c0(uVar11);
              goto LAB_01e460e0;
            }
            if (*arg1 == 0) goto LAB_01e4621e;
            iVar9 = FUN_01d3a5a0();
            local_68 = uVar12;
          } while (iVar9 == 4);
          if (*arg1 == 0) goto LAB_01e4621e;
          iVar9 = FUN_01d3a5a0();
        } while (iVar9 != 6);
        if (*arg1 != 0) {
          FUN_01d3b590();
        }
LAB_01e4621e:
        (**(code **)(*this_ptr + 0x900))(uVar12);
      }
      else {
        (**(code **)(*this_ptr + 0x900))(local_68);
      }
LAB_01e46234:
      if ((char)lVar4 == '\0') {
        return;
      }
      if (plVar1 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    goto LAB_01e45f25;
  }
  iVar9 = FUN_01d3a5a0();
  if ((iVar9 == 2) || (iVar9 = FUN_01d3a5a0(), iVar9 == 8)) {
    FUN_01d3b5d0();
    lVar4 = g_027f3310;
    if (g_027f3310 != 0) {
      FUN_00d50b00();
    }
    cVar7 = (**(code **)(*local_48 + 0x50))();
    if (cVar7 == '\0') {
      FUN_01d3b5d0();
      local_c8 = g_027f3cb8;
      if (g_027f3cb8 != 0) {
        FUN_00d50b00();
      }
      local_c0 = '\x01';
      cVar8 = (**(code **)(*local_f8 + 0x50))();
      if (cVar8 != '\0') goto LAB_01e45b31;
      cVar8 = '\0';
LAB_01e45d84:
      if (local_c8 != 0) {
        FUN_00d50b20();
      }
LAB_01e45d95:
      if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
LAB_01e45b31:
      cVar8 = (**(code **)(*this_ptr + 0x878))();
      if (cVar8 == '\0') {
        cVar8 = '\0';
      }
      else {
        if ((g_026f3380 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
          g_027fadc8 = FUN_0006d940();
          g_027fadb0 = "GNTextView";
          g_027fadb8 = 0x1d8;
          g_027fadc0 = FUN_001fc360;
          g_027fadd0 = 0;
          ram_00000000027fadd8 = 0;
          g_027fade0 = 0;
          ram_00000000027fade8 = 0;
          g_027fadf0 = 0;
          ram_00000000027fadf8 = 0;
          g_027fae00 = 0;
          ram_00000000027fae08 = 0;
          g_027fae10 = 0;
          ram_00000000027fae18 = 0;
          g_027fae20 = 0;
          ram_00000000027fae28 = 0;
          g_027fae30 = 0;
          ram_00000000027fae38 = 0;
          g_027fae40 = 0;
          ram_00000000027fae48 = 0;
          g_027fae50 = 0;
          ram_00000000027fae58 = 0;
          g_027fae60 = 0;
          ram_00000000027fae68 = 0;
          g_027fae70 = 0;
          ___cxa_guard_release();
        }
        (**(code **)(*this_ptr + 0x360))();
        cVar8 = FUN_00e85ea0();
        plVar1 = this_ptr;
        if (cVar8 == '\0') {
          plVar1 = g_02802688;
        }
        if (plVar1 == (int64_t *)0x0) {
          cVar8 = '\x01';
        }
        else {
          cVar8 = FUN_01e14970();
        }
      }
      if (cVar7 == '\0') {
        if (local_c0 != '\0') goto LAB_01e45d84;
        goto LAB_01e45d95;
      }
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar8 != '\0') {
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      uVar10 = FUN_01d3b590();
      if ((uVar10 & 4) == 0) {
        (**(code **)(*this_ptr + 0x8c8))();
      }
      else {
        (**(code **)(*this_ptr + 0x8d0))();
      }
      FUN_00d50b20();
      return;
    }
  }
  iVar9 = FUN_01d3a5a0();
  if ((iVar9 == 2) || (iVar9 = FUN_01d3a5a0(), iVar9 == 8)) {
    FUN_01d3b5d0();
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    uVar11 = FUN_01d3b590();
    cVar7 = (**(code **)(*this_ptr + 0x438))(*this_ptr,uVar11);
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    iVar9 = FUN_01d3a5a0();
    if (iVar9 != 4) goto LAB_01e45f25;
    FUN_00d8ede0();
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    uVar11 = FUN_01d3b590();
    cVar7 = (**(code **)(*this_ptr + 0x438))(*this_ptr,uVar11);
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (cVar7 != '\0') {
    return;
  }
LAB_01e45f25:
  FUN_01d82ea0();
  return;
}



// ============================================================
// 01e47f50
// ============================================================
// Function: FUN_01e47f50
// Address: 01e47f50
// Size: 1743 bytes
// Class: GNTextView
// === GNTextView properties ===
//                   _firstResponder
//                   _defaultFirstResponder
//                   _isDisplaying
//                   _ignoreSystemKeyEvents
//                   _bgCache
//                   _toolbarActions
//                   _handeledToolbarActions
//                   _sheetController
//                   _sheetControllerLoadedSize
//                   _sheetControllerLoadedAutoresizingMask


uint64_t FUN_01e47f50(uint64_t param_1,uint64_t param_2)

{
  uint3 uVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  float fVar4;
  char cVar5;
  uint32_t uVar6;
  uint uVar7;
  int64_t lVar8;
  char in_DL;
  uint64_t uVar9;
  int64_t *this_ptr;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar11 [16];
  float fVar13;
  uint8_t auVar12 [16];
  float fVar14;
  float fVar15;
  int64_t *local_40;
  char local_38;
  
  fVar15 = (float)((uint64_t)param_2 >> 0x20);
  fVar14 = (float)param_2;
  uVar10 = FUN_01e436c0();
  FUN_01cae990();
  lVar8 = g_027ef080;
  if (g_027ef080 != 0) {
    FUN_00d50b00();
  }
  uVar6 = (**(code **)(*local_40 + 0x50))();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar6 != '\0') {
    uVar9 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),1);
    if (in_DL != '\0') {
      (**(code **)(*this_ptr + 0x670))();
    }
    goto LAB_01e4842b;
  }
  FUN_01cae990();
  lVar8 = g_027ef088;
  if (g_027ef088 != 0) {
    FUN_00d50b00();
  }
  uVar6 = (**(code **)(*local_40 + 0x50))();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar6 != '\0') {
    uVar9 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),1);
    if (in_DL != '\0') {
      (**(code **)(*this_ptr + 0x678))();
    }
    goto LAB_01e4842b;
  }
  FUN_01cae990();
  lVar8 = g_026de648;
  if (g_026de648 != 0) {
    FUN_00d50b00();
  }
  uVar6 = (**(code **)(*local_40 + 0x50))();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar6 != '\0') {
    uVar9 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),1);
    if (in_DL != '\0') {
      (**(code **)(*this_ptr + 0x680))();
    }
    goto LAB_01e4842b;
  }
  FUN_01cae990();
  lVar8 = g_027f1690;
  if (g_027f1690 != 0) {
    FUN_00d50b00();
  }
  uVar6 = (**(code **)(*local_40 + 0x50))();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar6 != '\0') {
    uVar9 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),1);
    if (in_DL != '\0') {
      (**(code **)(*this_ptr + 0x688))();
    }
    goto LAB_01e4842b;
  }
  FUN_01cae990();
  lVar8 = g_026de630;
  if (g_026de630 != 0) {
    FUN_00d50b00();
  }
  uVar6 = (**(code **)(*local_40 + 0x50))();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar6 != '\0') {
    uVar9 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),1);
    if (in_DL != '\0') {
      (**(code **)(*this_ptr + 0x690))();
    }
    goto LAB_01e4842b;
  }
  FUN_01cae990();
  lVar8 = g_027f1680;
  if (g_027f1680 != 0) {
    FUN_00d50b00();
  }
  uVar6 = (**(code **)(*local_40 + 0x50))();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar6 != '\0') {
    uVar9 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),1);
    if (in_DL != '\0') {
      (**(code **)(*this_ptr + 0x698))();
    }
    goto LAB_01e4842b;
  }
  FUN_01cae990();
  lVar8 = g_027ef090;
  if (g_027ef090 != 0) {
    FUN_00d50b00();
  }
  uVar6 = (**(code **)(*local_40 + 0x50))();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar6 == '\0') {
    FUN_01cae990();
    lVar8 = g_027ef098;
    if (g_027ef098 != 0) {
      FUN_00d50b00();
    }
    uVar6 = (**(code **)(*local_40 + 0x50))();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar6 != '\0') {
      uVar1 = (uint3)((uint)uVar6 >> 8);
      fVar15 = g_0241b634;
      goto joined_r0x01e483ff;
    }
    FUN_01cae990();
    lVar8 = g_027ef0a0;
    if (g_027ef0a0 != 0) {
      FUN_00d50b00();
    }
    uVar6 = (**(code **)(*local_40 + 0x50))();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar6 == '\0') {
      FUN_01cae990();
      lVar8 = g_027ef0a8;
      if (g_027ef0a8 != 0) {
        FUN_00d50b00();
      }
      uVar6 = (**(code **)(*local_40 + 0x50))();
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar6 == '\0') {
        FUN_01cae990();
        lVar8 = g_027ef0b0;
        if (g_027ef0b0 != 0) {
          FUN_00d50b00();
        }
        cVar5 = (**(code **)(*local_40 + 0x50))();
        uVar10 = extraout_XMM0_Qa;
        if (lVar8 != 0) {
          uVar10 = FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
        uVar9 = CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
        if (cVar5 == '\0') {
          uVar7 = FUN_01d827c0(uVar10,in_DL);
          uVar9 = (uint64_t)uVar7;
        }
        goto LAB_01e4842b;
      }
      uVar1 = (uint3)((uint)uVar6 >> 8);
      fVar4 = g_0241b634;
    }
    else {
      uVar1 = (uint3)((uint)uVar6 >> 8);
      fVar4 = g_0241bdc0;
    }
    uVar9 = CONCAT71((uint7)uVar1,1);
    if (in_DL == '\0') goto LAB_01e4842b;
    auVar3._8_8_ = extraout_XMM0_Qb;
    auVar3._0_8_ = uVar10;
    uVar6 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
    fVar13 = (float)((uint64_t)uVar10 >> 0x20);
    lVar8 = *this_ptr;
    auVar12._4_4_ = fVar13;
    auVar12._0_4_ = fVar13 + fVar15 * fVar4;
    auVar12._8_4_ = uVar6;
    auVar12._12_4_ = uVar6;
    auVar12 = insertps(auVar3,auVar12,0x10);
    uVar10 = auVar12._0_8_;
  }
  else {
    uVar1 = (uint3)((uint)uVar6 >> 8);
    fVar15 = g_0241bdc0;
joined_r0x01e483ff:
    uVar9 = CONCAT71((uint7)uVar1,1);
    if (in_DL == '\0') goto LAB_01e4842b;
    lVar8 = *this_ptr;
    auVar2._8_8_ = extraout_XMM0_Qb;
    auVar2._0_8_ = uVar10;
    auVar11._4_12_ = auVar2._4_12_;
    auVar11._0_4_ = (float)uVar10 + fVar15 * fVar14;
    uVar10 = auVar11._0_8_;
  }
  (**(code **)(lVar8 + 0x518))(uVar10,fVar14);
LAB_01e4842b:
  return uVar9 & 0xffffffff;
}



// ============================================================
// 001fc440
// ============================================================
// Function: FUN_001fc440
// Address: 001fc440
// Size: 6225 bytes
// Class: GNTextView
// String references:
//   "GNTextView"
// === GNTextView properties ===
//                   _firstResponder
//                   _defaultFirstResponder
//                   _isDisplaying
//                   _ignoreSystemKeyEvents
//                   _bgCache
//                   _toolbarActions
//                   _handeledToolbarActions
//                   _sheetController
//                   _sheetControllerLoadedSize
//                   _sheetControllerLoadedAutoresizingMask


void FUN_001fc440(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_0269d720;
  this_ptr[2] = &g_0269e0b8;
  FUN_001fde20();
  FUN_001fe110();
  FUN_001fe390();
  *(void*)(this_ptr + 0x2a) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_001fe610();
    FUN_00e87980();
  }
  FUN_001fe780();
  *(void*)(this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_001fea70();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x161) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_001febe0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x164) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_001fed50();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x16c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_001feec0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x16d) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_001ff030();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x16e) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_001ff1a0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x2e) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_001ff310();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x174) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_001ff480();
    FUN_00e87980();
  }
  this_ptr[0x2f] = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_001ff5f0();
    FUN_00e87980();
  }
  FUN_001ff760();
  *(void*)(this_ptr + 0x31) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_001ffa50();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x18c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_001ffbc0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x194) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_001ffd30();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x33) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_001ffea0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_00200010();
    FUN_00e87980();
  }
  this_ptr[0x34] = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_00200180();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x35) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_002002f0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1a9) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_00200460();
    FUN_00e87980();
  }
  FUN_002005d0();
  *(void*)(this_ptr + 0x37) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_00200930();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1b9) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_00200aa0();
    FUN_00e87980();
  }
  FUN_00200c10();
  *(void*)(this_ptr + 0x39) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_00200f70();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1cc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_002010e0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3a) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_00201250();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1d1) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_002013c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1d2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_00201530();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1d3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_002016a0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1d4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fae6b == '\0') {
    FUN_00201810();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 01e466c0
// ============================================================
// Function: FUN_01e466c0
// Address: 01e466c0
// Size: 738 bytes
// Class: GNTextView
// String references:
//   "convertRectFromScreen:"
//   "frame"
// === GNTextView properties ===
//                   _firstResponder
//                   _defaultFirstResponder
//                   _isDisplaying
//                   _ignoreSystemKeyEvents
//                   _bgCache
//                   _toolbarActions
//                   _handeledToolbarActions
//                   _sheetController
//                   _sheetControllerLoadedSize
//                   _sheetControllerLoadedAutoresizingMask


void FUN_01e466c0(uint64_t param_1)

{
  uint8_t auVar1 [16];
  int64_t *plVar2;
  int64_t *plVar3;
  void*puVar4;
  int64_t *plVar5;
  char cVar6;
  char cVar7;
  int64_t lVar8;
  int64_t *this_ptr;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar10;
  uint64_t in_XMM0_Qb;
  uint8_t auVar11 [16];
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint32_t uVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  uint32_t uVar15;
  uint8_t in_XMM2 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int64_t local_68;
  char local_60;
  undefined7 uStack_5f;
  double local_50;
  uint8_t local_48 [8];
  uint64_t uStack_40;
  
  uStack_40 = in_XMM0_Qb;
  local_48 = (uint8_t  [8])param_1;
  plVar5 = (int64_t *)this_ptr[6];
  plVar3 = this_ptr;
  while (plVar2 = plVar5, plVar2 != (int64_t *)0x0) {
    plVar5 = (int64_t *)plVar2[6];
    plVar3 = plVar2;
    if ((int64_t *)plVar2[6] == plVar2) {
      plVar5 = plVar2;
    }
  }
  cVar6 = (**(code **)(*plVar3 + 0x4b8))();
  if (cVar6 != '\0') {
    FUN_00d50b00();
    FUN_01d8c6e0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 == 0) {
      _objc_alloc();
      (*PTR__objc_msgSend_024a9998)();
      uVar9 = (*PTR__objc_msgSend_024a9998)();
      lVar8 = (*PTR__objc_msgSend_024a9998)(uVar9,0);
      puVar4 = PTR_s_frame_026ca200;
      if (lVar8 == 0) {
        auVar11 = ZEXT816(0);
      }
      else {
        _objc_msgSend_stret(extraout_XMM0_Qa,PTR_s_frame_026ca200);
        auVar11._4_12_ = in_XMM2._4_12_;
        auVar11._0_4_ = (float)local_50;
      }
      auVar16._4_12_ = auVar11._4_12_;
      auVar16._0_4_ = auVar11._0_4_ - (float)((uint64_t)param_1 >> 0x20);
      auVar11 = insertps(_local_48,auVar16,0x10);
      FUN_01f26e50(auVar11._0_8_);
      lVar8 = (*PTR__objc_msgSend_024a9998)();
      if (lVar8 == 0) {
        uVar12 = 0;
        uVar14 = 0;
      }
      else {
        _objc_msgSend_stret();
        uVar12 = (uint32_t)CONCAT71(uStack_5f,local_60);
        uVar14 = (uint32_t)((uint7)uStack_5f >> 0x18);
      }
      uVar9 = (*PTR__objc_msgSend_024a9998)();
      if (*(int64_t *)plVar3[0x38] == 0) {
        uVar13 = 0;
        uVar15 = 0;
      }
      else {
        _objc_msgSend_stret(uVar9,puVar4);
        uVar13 = SUB84(local_50,0);
        uVar15 = (uint32_t)((uint64_t)local_50 >> 0x20);
      }
      local_48 = (uint8_t  [8])
                 FUN_01f1bd80(uVar9,SUB84((double)CONCAT44(uVar15,uVar13) -
                                          (double)CONCAT44(uVar14,uVar12),0));
      uStack_40 = extraout_XMM0_Qb;
      while ((plVar5 = this_ptr, plVar5 != (int64_t *)0x0 &&
             (cVar7 = (**(code **)(*plVar5 + 0x4b8))(), cVar7 == '\0'))) {
        uVar9 = (**(code **)(*plVar5 + 0x4d8))();
        uVar10 = (**(code **)(*plVar5 + 0x4d8))();
        local_78 = (float)uVar9;
        fStack_74 = (float)((uint64_t)uVar9 >> 0x20);
        fStack_70 = (float)extraout_XMM0_Qb_00;
        fStack_6c = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
        auVar17._0_4_ = (float)local_48._0_4_ - (float)uVar10;
        auVar17._4_4_ = (float)local_48._4_4_ - (float)((uint64_t)uVar10 >> 0x20);
        auVar17._8_4_ = (float)uStack_40 - (float)extraout_XMM0_Qb_01;
        auVar17._12_4_ = uStack_40._4_4_ - (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
        auVar1._4_4_ = (float)local_48._4_4_ - fStack_74;
        auVar1._0_4_ = (float)local_48._0_4_ - local_78;
        auVar1._8_4_ = (float)uStack_40 - fStack_70;
        auVar1._12_4_ = uStack_40._4_4_ - fStack_6c;
        _local_48 = blendps(auVar17,auVar1,0xd);
        this_ptr = (int64_t *)plVar5[6];
        if ((int64_t *)plVar5[6] == plVar5) {
          this_ptr = plVar5;
        }
      }
      (*PTR__objc_release_024a99a0)();
    }
    else {
      FUN_01d8c6e0();
      FUN_01e5cac0();
      FUN_01e491b0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    if (cVar6 == '\x01' && plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01e44d40
// ============================================================
// Function: FUN_01e44d40
// Address: 01e44d40
// Size: 1330 bytes
// Class: GNTextView
// === GNTextView properties ===
//                   _firstResponder
//                   _defaultFirstResponder
//                   _isDisplaying
//                   _ignoreSystemKeyEvents
//                   _bgCache
//                   _toolbarActions
//                   _handeledToolbarActions
//                   _sheetController
//                   _sheetControllerLoadedSize
//                   _sheetControllerLoadedAutoresizingMask


void FUN_01e44d40(void)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  int64_t *this_ptr;
  bool bVar7;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_78;
  char local_70;
  int local_60;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  cVar6 = (**(code **)(*this_ptr + 0x750))();
  if ((cVar6 != '\0') && (cVar6 = FUN_01e45650(), cVar6 == '\0')) {
    FUN_00d46dc0(g_02390124);
    lVar3 = g_027f3cb0;
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
      lVar3 = g_027f3cb0;
    }
    g_027f3cb0 = lVar3;
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    local_e0 = '\x01';
    local_e8 = lVar3;
    (**(code **)(*this_ptr + 0x408))(&local_e8);
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      FUN_01f97770();
      FUN_01f97ed0();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_00d50b00();
        local_60 = -1;
        do {
          local_60 = local_60 + 1;
          if (*(int *)(local_40 + 0xc) <= local_60) goto LAB_01e45140;
          FUN_01f97ea0();
          FUN_01f97ea0();
          lVar3 = local_d8;
          if (local_d0 == '\0') {
            if (local_d8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_d0 = '\0';
          }
          cVar6 = (**(code **)(*local_50 + 0x50))();
          if (cVar6 == '\0') {
            bVar7 = false;
          }
          else {
            FUN_01f97e70();
            FUN_01f97e70();
            bVar7 = local_100 != local_110;
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            if ((local_f8 != '\0') && (local_100 != 0)) {
              FUN_00d50b20();
            }
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        } while (!bVar7);
        FUN_01f983b0();
        if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_01f995d0();
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01e45140:
        FUN_01f99ba0();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  plVar5 = (int64_t *)this_ptr[6];
  plVar1 = this_ptr;
  while (plVar4 = plVar5, plVar4 != (int64_t *)0x0) {
    plVar5 = (int64_t *)plVar4[6];
    plVar1 = plVar4;
    if ((int64_t *)plVar4[6] == plVar4) {
      plVar5 = plVar4;
    }
  }
  cVar6 = (**(code **)(*plVar1 + 0x4b8))();
  if (cVar6 == '\0') {
    bVar2 = true;
    bVar7 = true;
    plVar1 = (int64_t *)this_ptr[6];
  }
  else {
    FUN_00d50b00();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_01d8fb90();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    bVar2 = false;
    bVar7 = false;
    plVar1 = (int64_t *)this_ptr[6];
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0x758))();
    bVar7 = bVar2;
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (!bVar7) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01e46ed0
// ============================================================
// Function: FUN_01e46ed0
// Address: 01e46ed0
// Size: 778 bytes
// Class: GNTextView
// String references:
//   "convertRectToScreen:"
//   "frame"
// === GNTextView properties ===
//                   _firstResponder
//                   _defaultFirstResponder
//                   _isDisplaying
//                   _ignoreSystemKeyEvents
//                   _bgCache
//                   _toolbarActions
//                   _handeledToolbarActions
//                   _sheetController
//                   _sheetControllerLoadedSize
//                   _sheetControllerLoadedAutoresizingMask


void FUN_01e46ed0(uint64_t param_1)

{
  int64_t *plVar1;
  void*puVar2;
  int64_t *plVar3;
  char cVar4;
  char cVar5;
  int64_t lVar6;
  int64_t *this_ptr;
  int64_t *plVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qa;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  float fVar12;
  uint64_t local_78;
  float fStack_70;
  float fStack_6c;
  int64_t local_68;
  char local_60;
  undefined7 uStack_5f;
  double local_50;
  uint8_t local_48 [8];
  uint64_t uStack_40;
  
  uStack_40 = in_XMM0_Qb;
  local_48 = (uint8_t  [8])param_1;
  plVar3 = (int64_t *)this_ptr[6];
  plVar7 = this_ptr;
  while (plVar1 = plVar3, plVar1 != (int64_t *)0x0) {
    plVar3 = (int64_t *)plVar1[6];
    plVar7 = plVar1;
    if ((int64_t *)plVar1[6] == plVar1) {
      plVar3 = plVar1;
    }
  }
  cVar4 = (**(code **)(*plVar7 + 0x4b8))();
  if (cVar4 == '\0') {
    plVar7 = (int64_t *)0x0;
  }
  else {
    FUN_00d50b00();
    FUN_01d8c6e0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_01d8c6e0();
      FUN_01e49300();
      FUN_01e5eed0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01e471b2;
    }
  }
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  while ((plVar3 = this_ptr, plVar3 != (int64_t *)0x0 &&
         (cVar5 = (**(code **)(*plVar3 + 0x4b8))(), cVar5 == '\0'))) {
    uVar8 = (**(code **)(*plVar3 + 0x4d8))();
    uVar9 = (**(code **)(*plVar3 + 0x4d8))();
    local_78._0_4_ = (float)uVar8;
    local_78._4_4_ = (float)((uint64_t)uVar8 >> 0x20);
    fStack_70 = (float)extraout_XMM0_Qb;
    fStack_6c = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
    auVar10._0_4_ = (float)uVar9 + (float)local_48._0_4_;
    auVar10._4_4_ = (float)((uint64_t)uVar9 >> 0x20) + (float)local_48._4_4_;
    auVar10._8_4_ = (float)extraout_XMM0_Qb_00 + (float)uStack_40;
    auVar10._12_4_ = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20) + uStack_40._4_4_;
    auVar11._4_4_ = local_78._4_4_ + (float)local_48._4_4_;
    auVar11._0_4_ = (float)local_78 + (float)local_48._0_4_;
    auVar11._8_4_ = fStack_70 + (float)uStack_40;
    auVar11._12_4_ = fStack_6c + uStack_40._4_4_;
    _local_48 = blendps(auVar10,auVar11,0xd);
    this_ptr = (int64_t *)plVar3[6];
    if ((int64_t *)plVar3[6] == plVar3) {
      this_ptr = plVar3;
    }
  }
  puVar2 = PTR_s_frame_026ca200;
  if (*(int64_t *)plVar7[0x38] == 0) {
    fVar12 = 0.0;
  }
  else {
    _objc_msgSend_stret();
    fVar12 = (float)local_50;
  }
  auVar11 = insertps(_local_48,ZEXT416((uint)(fVar12 - (float)local_48._4_4_)),0x10);
  uVar8 = FUN_01f26e50(auVar11._0_8_);
  (*PTR__objc_msgSend_024a9998)(uVar8,0);
  lVar6 = (*PTR__objc_msgSend_024a9998)();
  if (lVar6 == 0) {
    local_78 = 0.0;
    local_48 = (uint8_t  [8])0x0;
  }
  else {
    _objc_msgSend_stret();
    local_48 = (uint8_t  [8])local_68;
    local_78 = (double)CONCAT71(uStack_5f,local_60);
  }
  uVar8 = (*PTR__objc_msgSend_024a9998)();
  lVar6 = (*PTR__objc_msgSend_024a9998)(uVar8,0);
  if (lVar6 == 0) {
    local_50 = 0.0;
  }
  else {
    _objc_msgSend_stret(extraout_XMM0_Qa,puVar2);
  }
  (*PTR__objc_release_024a99a0)();
  FUN_01f1bd80(local_48,SUB84(local_50 - local_78,0));
LAB_01e471b2:
  if ((cVar4 == '\x01') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01e44a80
// ============================================================
// Function: FUN_01e44a80
// Address: 01e44a80
// Size: 544 bytes
// Class: GNTextView
// === GNTextView properties ===
//                   _firstResponder
//                   _defaultFirstResponder
//                   _isDisplaying
//                   _ignoreSystemKeyEvents
//                   _bgCache
//                   _toolbarActions
//                   _handeledToolbarActions
//                   _sheetController
//                   _sheetControllerLoadedSize
//                   _sheetControllerLoadedAutoresizingMask


void FUN_01e44a80(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar4;
  uint64_t uVar5;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float fVar6;
  float fVar7;
  uint64_t local_98;
  float fStack_90;
  float fStack_8c;
  uint64_t local_88;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  fVar7 = (float)((uint64_t)param_2 >> 0x20);
  fVar6 = (float)param_2;
  fStack_74 = (float)((uint64_t)param_1 >> 0x20);
  local_78 = (float)param_1;
  lVar1 = this_ptr[7];
  if (lVar1 != 0) {
    fStack_70 = in_XMM0_Dc;
    fStack_6c = in_XMM0_Dd;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar4 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar4 * 8);
        cVar3 = (**(code **)(*this_ptr + 0x7a8))();
        if (cVar3 == '\0') {
          (**(code **)(*plVar2 + 0x4e0))();
          cVar3 = FUN_00d054a0();
          if (cVar3 != '\0') goto LAB_01e44b68;
        }
        else {
LAB_01e44b68:
          uVar5 = (**(code **)(*plVar2 + 0x4d8))();
          fStack_80 = extraout_XMM0_Dc;
          fStack_7c = extraout_XMM0_Dd;
          local_88 = uVar5;
          (**(code **)(*(int64_t *)*arg1 + 0x368))();
          (**(code **)(*plVar2 + 0x500))();
          local_78 = local_78 - (float)local_88;
          fStack_74 = fStack_74 - local_88._4_4_;
          fStack_70 = fStack_70 - fStack_80;
          fStack_6c = fStack_6c - fStack_7c;
          uVar5 = FUN_00d05360();
          fStack_90 = fVar6;
          fStack_8c = fVar7;
          local_98 = uVar5;
          if ((g_0239424c < fVar6) && (g_0239424c < fVar7)) {
            local_58 = '\0';
            local_50 = *arg1;
            local_48 = '\0';
            local_60 = plVar2;
            (**(code **)(*this_ptr + 0x7a0))(&local_98,&local_50);
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          cVar3 = (**(code **)(*plVar2 + 0x840))();
          if (cVar3 != '\0') {
            local_40 = *arg1;
            local_38 = '\0';
            fVar6 = fStack_90;
            (**(code **)(*plVar2 + 0x848))((uint32_t)local_98);
            fVar7 = fStack_8c;
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
              fVar7 = fStack_8c;
            }
          }
          (**(code **)(*(int64_t *)*arg1 + 0x368))((uint)(float)local_88 ^ g_023945e0);
          local_78 = local_78 + (float)local_88;
          fStack_74 = fStack_74 + local_88._4_4_;
          fStack_70 = fStack_70 + fStack_80;
          fStack_6c = fStack_6c + fStack_7c;
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_000a9680();
  }
  return;
}



// ============================================================
// 01e46a20
// ============================================================
// Function: FUN_01e46a20
// Address: 01e46a20
// Size: 764 bytes
// Class: GNTextView
// === GNTextView properties ===
//                   _firstResponder
//                   _defaultFirstResponder
//                   _isDisplaying
//                   _ignoreSystemKeyEvents
//                   _bgCache
//                   _toolbarActions
//                   _handeledToolbarActions
//                   _sheetController
//                   _sheetControllerLoadedSize
//                   _sheetControllerLoadedAutoresizingMask


void FUN_01e46a20(void)

{
  bool bVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t in_R9;
  uint64_t uVar9;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint64_t in_XMM3_Qa;
  uint32_t uVar10;
  int64_t local_40;
  char local_38;
  
  plVar4 = (int64_t *)arg1[6];
  plVar3 = arg1;
  while (plVar2 = plVar4, plVar2 != (int64_t *)0x0) {
    plVar4 = (int64_t *)plVar2[6];
    plVar3 = plVar2;
    if ((int64_t *)plVar2[6] == plVar2) {
      plVar4 = plVar2;
    }
  }
  cVar5 = (**(code **)(*plVar3 + 0x4b8))();
  if (cVar5 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  FUN_00d50b00();
  (**(code **)(*arg1 + 0x7b0))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01e46ac8;
    }
LAB_01e46af5:
    bVar1 = true;
LAB_01e46b7d:
    (**(code **)(*arg1 + 0x660))((int)g_023b19a0,0);
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
    if (bVar1) goto LAB_01e46bb8;
  }
  else {
    if (local_40 == 0) goto LAB_01e46af5;
LAB_01e46ac8:
    cVar5 = FUN_01cf74d0();
    if (cVar5 == '\0') {
LAB_01e46b7a:
      bVar1 = false;
      goto LAB_01e46b7d;
    }
    FUN_01d3a560();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        goto LAB_01e46b1e;
      }
      goto LAB_01e46b7a;
    }
    if (local_40 == 0) goto LAB_01e46b7a;
LAB_01e46b1e:
    iVar6 = FUN_01d3a5a0();
    if (((iVar6 != 1) && (iVar6 = FUN_01d3a5a0(), iVar6 != 5)) &&
       (iVar6 = FUN_01d3a5a0(), iVar6 != 6)) {
LAB_01e46b72:
      FUN_00d50b20();
      goto LAB_01e46b7a;
    }
    FUN_01d3abf0();
    uVar9 = FUN_01e466c0();
    cVar5 = FUN_00d05410((int)uVar9,0,*(void*)(local_40 + 0x114),in_XMM3_Qa,uVar9,
                         extraout_XMM0_Dc);
    uVar10 = (uint32_t)uVar9;
    if (cVar5 != '\0') goto LAB_01e46b72;
    FUN_01cf85d0(uVar10);
    (**(code **)(*arg1 + 0x660))((int)g_02390108,0);
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_01e46c63;
      FUN_00d50b00(uVar10);
    }
    else if (local_40 == 0) {
LAB_01e46c63:
      uVar9 = FUN_01e46ed0();
      uVar10 = extraout_XMM0_Dc_00;
      uVar7 = FUN_01d3b620();
      FUN_01d3b630();
      uVar8 = FUN_01d3b590();
      FUN_01d3c980((int)uVar9,uVar7,uVar8,in_R9,uVar9,uVar10);
      if ((local_40 != 0) && (local_38 == '\0')) {
        FUN_00d50b00();
      }
      FUN_01d3a5b0();
    }
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01e46bb8:
  FUN_00d50b20();
  return;
}



// ============================================================
// 0018ae20
// ============================================================
// Function: FUN_0018ae20
// Address: 0018ae20
// Size: 503 bytes
// Class: GNTextView
// String references:
//   "GNTextView"
// === GNTextView properties ===
//                   _firstResponder
//                   _defaultFirstResponder
//                   _isDisplaying
//                   _ignoreSystemKeyEvents
//                   _bgCache
//                   _toolbarActions
//                   _handeledToolbarActions
//                   _sheetController
//                   _sheetControllerLoadedSize
//                   _sheetControllerLoadedAutoresizingMask


void FUN_0018ae20(void)

{
  int iVar1;
  uint32_t uVar2;
  
  // [STATIC_INIT: property registration]
  if (g_027fae6b != '\0') {
    return;
  }
  FUN_000a31d0();
  FUN_00e87760();
  FUN_0006daf0();
  FUN_00d50c00();
  FUN_001fc440();
  FUN_00d50c00();
  FUN_00e87770();
  uVar2 = FUN_01e0f330();
  FUN_00e87920(uVar2,0);
  FUN_00201980();
  FUN_00201980();
  return;
}

