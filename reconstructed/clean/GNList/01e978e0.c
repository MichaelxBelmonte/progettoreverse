// Function: FUN_01e978e0
// Address: 01e978e0
// Size: 7846 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNMultipleValue"
//   "GNGlobalID"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01e978e0(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint64_t uVar9;
  void*puVar10;
  int64_t *plVar11;
  int64_t *this_ptr;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t **pplVar14;
  bool bVar15;
  bool bVar16;
  uint32_t uVar17;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  int64_t local_290;
  char local_288;
  int64_t local_280;
  char local_278;
  int64_t local_270;
  char local_268;
  int64_t local_260;
  char local_258;
  int64_t local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  void*local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t *local_200;
  char local_1f8;
  void*local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  int64_t *local_1a0;
  char local_198;
  int64_t *local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  void*local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  void*local_110;
  char local_108;
  void*local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  uint64_t local_a0;
  int64_t *local_98;
  int64_t *local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  int64_t *local_70;
  char local_68;
  uint local_5c;
  void*local_58;
  int64_t *local_50;
  char local_48;
  uint64_t local_40;
  
  local_70 = (int64_t *)0x0;
  local_68 = '\x01';
  uVar17 = FUN_01ccad60();
  local_78 = local_50;
  plVar11 = local_50;
  if (local_50 == (int64_t *)0x0) {
    local_78 = (int64_t *)0x0;
joined_r0x01e97941:
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      uVar17 = FUN_00d50b20();
    }
  }
  else if (local_48 == '\0') {
    uVar17 = FUN_00d50b00();
    goto joined_r0x01e97941;
  }
  if ((*(char *)((int64_t)this_ptr + 0x42) == '\0') ||
     (*(char *)((int64_t)this_ptr + 0x41) != '\0')) {
    local_90 = (int64_t *)0x0;
    local_40 = 0;
    uVar17 = FUN_01e94020();
  }
  lVar12 = g_027057d0;
  if (g_027057d0 != 0) {
    uVar17 = FUN_00d50b00();
  }
  local_290 = lVar12;
  local_288 = '\x01';
  uVar17 = FUN_01ccaae0(uVar17,&local_290);
  plVar13 = local_50;
  if (local_50 == (int64_t *)0x0) {
    bVar15 = true;
    plVar13 = (int64_t *)0x0;
  }
  else {
    if (local_48 == '\0') {
      uVar17 = FUN_00d50b00();
      bVar15 = false;
      if ((local_48 == '\0') || (local_50 == (int64_t *)0x0)) goto LAB_01e979f8;
      uVar17 = FUN_00d50b20();
    }
    else {
      local_48 = '\0';
    }
    bVar15 = false;
  }
LAB_01e979f8:
  if ((local_288 != '\0') && (local_290 != 0)) {
    uVar17 = FUN_00d50b20();
  }
  lVar2 = g_027e7c20;
  lVar12 = g_027057d0;
  if (bVar15) {
    if (g_027e7c20 != 0) {
      uVar17 = FUN_00d50b00();
    }
    local_270 = lVar2;
    local_268 = '\x01';
    uVar9 = FUN_01ccaae0(uVar17,&local_270);
    uVar17 = extraout_XMM0_Da;
    lVar12 = g_027edfd8;
    plVar11 = plVar13;
    if (local_50 != plVar13) {
      plVar11 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          uVar9 = FUN_00d50b00();
          uVar17 = extraout_XMM0_Da_01;
        }
        lVar12 = g_027edfd8;
        if (plVar13 != (int64_t *)0x0) {
          uVar9 = FUN_00d50b20();
          uVar17 = extraout_XMM0_Da_02;
          lVar12 = g_027edfd8;
        }
      }
      else {
        if (plVar13 != (int64_t *)0x0) {
          uVar9 = FUN_00d50b20();
          uVar17 = extraout_XMM0_Da_00;
        }
        local_48 = '\0';
        lVar12 = g_027edfd8;
      }
    }
    bVar15 = true;
    g_027edfd8 = lVar12;
    if (plVar11 == (int64_t *)0x0) {
      if (lVar12 != 0) {
        uVar17 = FUN_00d50b00();
      }
      local_258 = '\x01';
      local_260 = lVar12;
      uVar9 = FUN_01ccaae0(uVar17,&local_260);
      plVar11 = local_88;
      if (local_88 == (int64_t *)0x0) {
        plVar11 = (int64_t *)0x0;
LAB_01e97c99:
        bVar15 = plVar11 != (int64_t *)0x0;
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
      }
      else {
        if (local_80 == '\0') {
          uVar9 = FUN_00d50b00();
          goto LAB_01e97c99;
        }
        local_80 = '\0';
        bVar15 = true;
      }
      if ((local_258 != '\0') && (local_260 != 0)) {
        uVar9 = FUN_00d50b20();
      }
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_268 != '\0') && (local_270 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    local_5c = (uint)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
    local_90 = plVar11;
    if (bVar15) {
      uVar9 = (**(code **)(*plVar11 + 0x3f8))();
      if (local_50 == (int64_t *)0x0) {
        local_5c = (uint)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
      }
      else {
        uVar9 = (**(code **)(*plVar11 + 0x3f8))();
        local_5c = (uint)CONCAT71((int7)((uint64_t)uVar9 >> 8),
                                  *(int *)((int64_t)local_88 + 0xc) == 0);
        if (local_80 != '\0') {
          FUN_00d50b20();
        }
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_5c = local_5c ^ 1;
    }
  }
  else {
    local_90 = plVar13;
    if (g_027057d0 != 0) {
      uVar17 = FUN_00d50b00();
    }
    local_280 = lVar12;
    local_278 = '\x01';
    (**(code **)(*this_ptr + 0x4c8))(uVar17,&local_280);
    plVar3 = local_50;
    cVar5 = local_68;
    plVar13 = local_70;
    if (local_70 == local_50) {
      if ((local_68 != '\0') || (local_50 == (int64_t *)0x0)) goto LAB_01e97ce6;
      if (local_48 == '\0') {
        FUN_00d50b00();
        goto LAB_01e97ce2;
      }
LAB_01e97b1b:
      local_68 = '\x01';
      local_48 = '\0';
    }
    else {
      if (local_48 != '\0') {
        local_70 = local_50;
        if ((local_68 != '\0') && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01e97b1b;
      }
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_70 = plVar3;
      if ((cVar5 != '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01e97ce2:
      local_68 = '\x01';
LAB_01e97ce6:
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_278 != '\0') && (local_280 != 0)) {
      FUN_00d50b20();
    }
    plVar13 = local_70;
    FUN_00053ac0();
    if (plVar13 == (int64_t *)0x0) {
LAB_01e97d40:
      pplVar14 = &g_02802688;
      plVar13 = g_02802688;
      cVar5 = g_02802690;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01e97d40;
      pplVar14 = &local_70;
      plVar13 = local_70;
      cVar5 = local_68;
    }
    if ((cVar5 != '\0') && (plVar13 != (int64_t *)0x0)) {
      pplVar14 = (int64_t **)FUN_00d50b00();
    }
    if (local_70 == (int64_t *)0x0) {
LAB_01e97d8f:
      local_5c = 0;
    }
    else {
      if (plVar13 == (int64_t *)0x0) {
        local_5c = (uint)CONCAT71((int7)((uint64_t)pplVar14 >> 8),1);
        goto LAB_01e97daf;
      }
      cVar6 = FUN_00d45ad0();
      local_5c = (uint)CONCAT71((int7)((uint64_t)plVar11 >> 8),1);
      if (cVar6 == '\0') goto LAB_01e97d8f;
    }
    if ((cVar5 != '\0') && (plVar13 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01e97daf:
  local_40 = 0;
  iVar7 = FUN_01d0a910();
  lVar12 = g_027e7c20;
  if (iVar7 == 0) {
    uVar17 = extraout_XMM0_Da_03;
    if (g_027e7c20 != 0) {
      uVar17 = FUN_00d50b00();
    }
    local_250 = lVar12;
    local_248 = '\x01';
    (**(code **)(*this_ptr + 0x4c8))(uVar17,&local_250);
    local_d0 = local_50;
    local_c8 = 0;
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_c8 = '\x01';
    (**(code **)(*local_78 + 0x978))();
    if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_248 != '\0') && (local_250 != 0)) {
      FUN_00d50b20();
    }
  }
  local_40 = 0;
  iVar7 = FUN_01d0a910();
  lVar12 = g_027e7c20;
  if (iVar7 == 1) {
    uVar17 = extraout_XMM0_Da_04;
    if (g_027e7c20 != 0) {
      uVar17 = FUN_00d50b00();
    }
    local_240 = lVar12;
    local_238 = '\x01';
    (**(code **)(*this_ptr + 0x4c8))(uVar17,&local_240);
    plVar13 = local_50;
    cVar5 = local_68;
    plVar11 = local_70;
    if (local_70 == local_50) {
      if ((local_68 != '\0') || (local_50 == (int64_t *)0x0)) goto LAB_01e97fa7;
      if (local_48 == '\0') {
        FUN_00d50b00();
        goto LAB_01e97fa3;
      }
LAB_01e97ee5:
      local_68 = '\x01';
      local_48 = '\0';
    }
    else {
      if (local_48 != '\0') {
        local_70 = local_50;
        if ((local_68 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01e97ee5;
      }
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_70 = plVar13;
      if ((cVar5 != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01e97fa3:
      local_68 = '\x01';
LAB_01e97fa7:
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_238 != '\0') && (local_240 != 0)) {
      FUN_00d50b20();
    }
    plVar11 = local_70;
    if ((g_0277a3a0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
      g_026d3c38 = FUN_00d4fe50();
      g_026d3c20 = "GNMultipleValue";
      g_026d3c28 = 0x18;
      g_026d3c30 = FUN_00050c70;
      g_026d3c40 = 0;
      ram_00000000026d3c48 = 0;
      g_026d3c50 = 0;
      ram_00000000026d3c58 = 0;
      g_026d3c60 = 0;
      ram_00000000026d3c68 = 0;
      g_026d3c70 = 0;
      ram_00000000026d3c78 = 0;
      g_026d3c80 = 0;
      ram_00000000026d3c88 = 0;
      g_026d3c90 = 0;
      ram_00000000026d3c98 = 0;
      g_026d3ca0 = 0;
      ram_00000000026d3ca8 = 0;
      g_026d3cb0 = 0;
      ram_00000000026d3cb8 = 0;
      g_026d3cc0 = 0;
      ram_00000000026d3cc8 = 0;
      g_026d3cd0 = 0;
      ram_00000000026d3cd8 = 0;
      g_026d3ce0 = 0;
      ___cxa_guard_release();
    }
    if (plVar11 == (int64_t *)0x0) {
LAB_01e9800b:
      plVar11 = g_02802688;
      plVar13 = g_02802688;
      cVar5 = g_02802690;
      if (g_02802690 == '\0') goto LAB_01e9803f;
LAB_01e98030:
      plVar13 = (int64_t *)0x0;
      if (plVar11 == (int64_t *)0x0) goto LAB_01e9803f;
      FUN_00d50b00();
LAB_01e98048:
      FUN_00e987e0();
      plVar13 = local_50;
      cVar6 = local_68;
      plVar11 = local_70;
      if (local_70 == local_50) {
        if ((local_68 != '\0') || (local_50 == (int64_t *)0x0)) goto LAB_01e980cb;
        if (local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_01e980c7;
        }
LAB_01e98094:
        local_68 = '\x01';
      }
      else {
        if (local_48 != '\0') {
          local_70 = local_50;
          if ((local_68 != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01e98094;
        }
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_70 = plVar13;
        if ((cVar6 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01e980c7:
        local_68 = '\x01';
LAB_01e980cb:
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (cVar5 != '\0') {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*plVar11 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01e9800b;
      plVar11 = local_70;
      plVar13 = local_70;
      cVar5 = local_68;
      if (local_68 != '\0') goto LAB_01e98030;
LAB_01e9803f:
      if (plVar13 != (int64_t *)0x0) goto LAB_01e98048;
    }
    plVar11 = local_70;
    if (local_70 == (int64_t *)0x0) {
LAB_01e9818f:
      puVar10 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar10 = &g_02572358;
      (*g_02572370)();
      local_228 = '\x01';
      local_230 = puVar10;
      FUN_01d0aa90();
      if ((local_228 != '\0') && (local_230 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = 0;
      FUN_00053ac0();
      local_40 = 0;
      (**(code **)(*plVar11 + 0x360))();
      local_40 = 0;
      cVar5 = FUN_00e85ea0();
      plVar11 = local_70;
      if (cVar5 == '\0') {
        plVar11 = g_02802688;
      }
      if (plVar11 == (int64_t *)0x0) goto LAB_01e9818f;
      local_40 = 0;
      FUN_00d45870();
      local_40 = 0;
      FUN_01d0aa10();
    }
    lVar12 = g_027e7c20;
    if ((char)local_5c == '\0') {
      local_5c = 0;
    }
    else {
      if (g_027e7c20 != 0) {
        FUN_00d50b00();
      }
      local_220 = lVar12;
      local_218 = '\x01';
      local_5c = FUN_01ccca20();
      if ((local_218 != '\0') && (local_220 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  local_40 = 0;
  iVar7 = FUN_01d0a910();
  lVar12 = g_027e7c20;
  if (iVar7 == 2) {
    uVar17 = extraout_XMM0_Da_05;
    if (g_027e7c20 != 0) {
      uVar17 = FUN_00d50b00();
    }
    local_210 = lVar12;
    local_208 = '\x01';
    (**(code **)(*this_ptr + 0x4c8))(uVar17,&local_210);
    plVar13 = local_50;
    cVar5 = local_68;
    plVar11 = local_70;
    if (local_70 == local_50) {
      if ((local_68 != '\0') || (local_50 == (int64_t *)0x0)) goto LAB_01e98324;
      if (local_48 == '\0') {
        FUN_00d50b00();
        goto LAB_01e98320;
      }
LAB_01e982e9:
      local_68 = '\x01';
      local_48 = '\0';
    }
    else {
      if (local_48 != '\0') {
        local_70 = local_50;
        if ((local_68 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01e982e9;
      }
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_70 = plVar13;
      if ((cVar5 != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01e98320:
      local_68 = '\x01';
LAB_01e98324:
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_208 != '\0') && (local_210 != 0)) {
      FUN_00d50b20();
    }
    plVar11 = local_70;
    if ((g_0277a3a0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
      g_026d3c38 = FUN_00d4fe50();
      g_026d3c20 = "GNMultipleValue";
      g_026d3c28 = 0x18;
      g_026d3c30 = FUN_00050c70;
      g_026d3c40 = 0;
      ram_00000000026d3c48 = 0;
      g_026d3c50 = 0;
      ram_00000000026d3c58 = 0;
      g_026d3c60 = 0;
      ram_00000000026d3c68 = 0;
      g_026d3c70 = 0;
      ram_00000000026d3c78 = 0;
      g_026d3c80 = 0;
      ram_00000000026d3c88 = 0;
      g_026d3c90 = 0;
      ram_00000000026d3c98 = 0;
      g_026d3ca0 = 0;
      ram_00000000026d3ca8 = 0;
      g_026d3cb0 = 0;
      ram_00000000026d3cb8 = 0;
      g_026d3cc0 = 0;
      ram_00000000026d3cc8 = 0;
      g_026d3cd0 = 0;
      ram_00000000026d3cd8 = 0;
      g_026d3ce0 = 0;
      ___cxa_guard_release();
    }
    if (plVar11 == (int64_t *)0x0) {
LAB_01e98388:
      plVar11 = g_02802688;
      plVar13 = g_02802688;
      cVar5 = g_02802690;
      if (g_02802690 == '\0') goto LAB_01e983bc;
LAB_01e983ad:
      plVar13 = (int64_t *)0x0;
      if (plVar11 == (int64_t *)0x0) goto LAB_01e983bc;
      FUN_00d50b00();
LAB_01e983c5:
      FUN_00e987e0();
      plVar13 = local_50;
      cVar6 = local_68;
      plVar11 = local_70;
      if (local_70 == local_50) {
        if ((local_68 != '\0') || (local_50 == (int64_t *)0x0)) goto LAB_01e98448;
        if (local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_01e98444;
        }
LAB_01e98411:
        local_68 = '\x01';
      }
      else {
        if (local_48 != '\0') {
          local_70 = local_50;
          if ((local_68 != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01e98411;
        }
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_70 = plVar13;
        if ((cVar6 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01e98444:
        local_68 = '\x01';
LAB_01e98448:
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (cVar5 != '\0') {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*plVar11 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01e98388;
      plVar11 = local_70;
      plVar13 = local_70;
      cVar5 = local_68;
      if (local_68 != '\0') goto LAB_01e983ad;
LAB_01e983bc:
      if (plVar13 != (int64_t *)0x0) goto LAB_01e983c5;
    }
    if (local_70 == (int64_t *)0x0) {
      puVar10 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar10 = &g_02572358;
      (*g_02572370)();
      local_1e8 = '\x01';
      local_1f0 = puVar10;
      FUN_01d0aa90();
      if ((local_1e8 != '\0') && (local_1f0 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_200 = local_70;
      local_1f8 = '\0';
      FUN_01d0abe0();
      if ((local_1f8 != '\0') && (local_200 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    lVar12 = g_027e7c20;
    if ((char)local_5c == '\0') {
      local_5c = 0;
    }
    else {
      if (g_027e7c20 != 0) {
        FUN_00d50b00();
      }
      local_1e0 = lVar12;
      local_1d8 = '\x01';
      local_5c = FUN_01ccca20();
      if ((local_1d8 != '\0') && (local_1e0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  local_40 = 0;
  iVar7 = FUN_01d0a910();
  lVar12 = g_027edfd8;
  if (iVar7 == 3) {
    uVar17 = extraout_XMM0_Da_06;
    if (g_027edfd8 != 0) {
      uVar17 = FUN_00d50b00();
    }
    local_1d0 = lVar12;
    local_1c8 = '\x01';
    pplVar14 = &local_50;
    uVar17 = FUN_01ccaae0(uVar17,&local_1d0);
    plVar11 = local_50;
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      uVar17 = FUN_00d50b20();
    }
    if ((local_1c8 != '\0') && (local_1d0 != 0)) {
      uVar17 = FUN_00d50b20();
    }
    lVar2 = g_027fdc88;
    lVar12 = g_027edfd8;
    if (plVar11 == (int64_t *)0x0) {
      if (g_027fdc88 != 0) {
        uVar17 = FUN_00d50b00();
      }
      local_140 = lVar2;
      local_138 = '\x01';
      uVar17 = FUN_01ccaae0(uVar17,&local_140);
      plVar11 = local_50;
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        uVar17 = FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        uVar17 = FUN_00d50b20();
      }
      lVar12 = g_027fdc88;
      if (plVar11 == (int64_t *)0x0) goto LAB_01e991fd;
      if (g_027fdc88 != 0) {
        uVar17 = FUN_00d50b00();
      }
      local_130 = lVar12;
      local_128 = '\x01';
      (**(code **)(*this_ptr + 0x4c8))(uVar17,&local_130);
      plVar13 = local_50;
      cVar5 = local_68;
      plVar11 = local_70;
      if (local_70 == local_50) {
        if ((local_68 != '\0') || (local_50 == (int64_t *)0x0)) goto LAB_01e98c55;
        if (local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_01e98c51;
        }
LAB_01e98901:
        local_68 = '\x01';
        local_48 = '\0';
      }
      else {
        if (local_48 != '\0') {
          local_70 = local_50;
          if ((local_68 != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01e98901;
        }
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_70 = plVar13;
        if ((cVar5 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01e98c51:
        local_68 = '\x01';
LAB_01e98c55:
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      plVar11 = local_70;
      if (local_70 == (int64_t *)0x0) {
LAB_01e98d6a:
        puVar10 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar10 = &g_02572358;
        (*g_02572370)();
        local_f8 = '\x01';
        local_100 = puVar10;
        FUN_01d0aa90();
        local_98 = (int64_t *)0x0;
        bVar15 = true;
        if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_98 = (int64_t *)0x0;
        local_a0 = 0;
        bVar1 = false;
        puVar10 = (void*)0x0;
        local_40 = 0;
        plVar11 = (int64_t *)0x0;
      }
      else {
        if ((g_027048b0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
          g_026cd478 = FUN_00d4fe50();
          g_026cd460 = "GNList";
          g_026cd468 = 0x20;
          g_026cd470 = FUN_00018210;
          g_026cd480 = 0;
          ram_00000000026cd488 = 0;
          g_026cd490 = 0;
          g_026cd508 = 0;
          ram_00000000026cd510 = 0;
          g_026cd518 = 0;
          g_026cd51a = 6;
          g_026cd498 = 0;
          ram_00000000026cd4a0 = 0;
          g_026cd4a8 = 0;
          ram_00000000026cd4b0 = 0;
          g_026cd4b8 = 0;
          ram_00000000026cd4c0 = 0;
          g_026cd4c8 = 0;
          ram_00000000026cd4d0 = 0;
          g_026cd4d8 = 0;
          ram_00000000026cd4e0 = 0;
          g_026cd4e8 = 0;
          ram_00000000026cd4f0 = 0;
          g_026cd4f8 = 0;
          ram_00000000026cd500 = 0;
          g_026cd523 = 0;
          g_026cd51b = 0;
          ___cxa_guard_release();
        }
        (**(code **)(*plVar11 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') {
LAB_01e98cde:
          pplVar14 = &g_02802688;
        }
        else {
          if ((g_0277ddf8 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
            g_027787e8 = FUN_00d4fe50();
            g_027787d0 = "GNGlobalID";
            g_027787d8 = 0x18;
            g_027787e0 = FUN_00d667a0;
            g_027787f0 = 0;
            ram_00000000027787f8 = 0;
            g_02778800 = 0;
            ram_0000000002778808 = 0;
            g_02778810 = 0;
            ram_0000000002778818 = 0;
            g_02778820 = 0;
            ram_0000000002778828 = 0;
            g_02778830 = 0;
            ram_0000000002778838 = 0;
            g_02778840 = 0;
            ram_0000000002778848 = 0;
            g_02778850 = 0;
            ram_0000000002778858 = 0;
            g_02778860 = 0;
            ram_0000000002778868 = 0;
            g_02778870 = 0;
            ram_0000000002778878 = 0;
            g_02778880 = 0;
            ram_0000000002778888 = 0;
            g_02778890 = 0;
            ___cxa_guard_release();
          }
          cVar5 = FUN_00e8da30();
          if (cVar5 == '\0') goto LAB_01e98cde;
          pplVar14 = &local_70;
        }
        local_98 = *pplVar14;
        if (local_98 == (int64_t *)0x0) goto LAB_01e98d6a;
        cVar5 = *(char *)(pplVar14 + 1);
        if (cVar5 != '\0') {
          FUN_00d50b00(local_98);
        }
        local_a0 = CONCAT71((int7)((uint64_t)plVar11 >> 8),cVar5);
        uVar9 = FUN_01d0a9d0();
        plVar11 = local_50;
        if (local_50 == (int64_t *)0x0) {
          plVar11 = (int64_t *)0x0;
          local_40 = 0;
        }
        else {
          local_40 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
          if (((local_48 == '\0') && (FUN_00d50b00(), local_48 != '\0')) &&
             (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        puVar10 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar10 = &g_02572358;
        (*g_02572370)();
        local_58 = puVar10;
        if (0 < *(int *)((int64_t)plVar11 + 0xc)) {
          lVar12 = 0;
          do {
            FUN_01d0aea0();
            plVar3 = local_50;
            cVar5 = local_68;
            plVar13 = local_70;
            if (local_70 == local_50) {
              if ((local_68 != '\0') || (local_50 == (int64_t *)0x0)) goto LAB_01e98f11;
              if (local_48 == '\0') {
                FUN_00d50b00();
                goto LAB_01e98f0d;
              }
LAB_01e98ed4:
              local_68 = '\x01';
              plVar13 = local_70;
            }
            else {
              if (local_48 != '\0') {
                local_70 = local_50;
                if ((local_68 != '\0') && (plVar13 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01e98ed4;
              }
              if (local_50 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_70 = plVar3;
              if ((cVar5 != '\0') && (plVar13 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_01e98f0d:
              local_68 = '\x01';
LAB_01e98f11:
              plVar13 = local_70;
              if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (plVar13 != (int64_t *)0x0) {
              (**(code **)(*local_70 + 0x60))();
              if (local_88 == (int64_t *)0x0) {
                cVar5 = '\0';
              }
              else {
                (**(code **)(*local_70 + 0x60))();
                plVar13 = local_e0;
                if (local_d8 == '\0') {
                  if (local_e0 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_d8 = '\0';
                }
                local_50 = plVar13;
                local_48 = '\0';
                cVar5 = FUN_00d23d70();
                if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar13 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar5 != '\0') {
                local_120 = local_70;
                local_118 = '\0';
                FUN_00d21140();
                if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(int *)((int64_t)plVar11 + 0xc));
        }
        puVar10 = local_58;
        local_110 = local_58;
        local_108 = '\0';
        FUN_01d0afe0();
        bVar1 = true;
        bVar15 = false;
        if ((local_108 != '\0') && (bVar15 = false, local_110 != (void*)0x0)) {
          FUN_00d50b20();
          bVar15 = false;
        }
      }
      lVar12 = g_027fdc88;
      bVar16 = (char)local_5c != '\0';
      if (bVar16) {
        if (g_027fdc88 != 0) {
          FUN_00d50b00();
        }
        local_f0 = lVar12;
        local_e8 = '\x01';
        cVar5 = FUN_01ccca20();
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
        uVar8 = local_5c & 0xff;
        local_5c = 0;
        if (cVar5 != '\0') {
          local_5c = uVar8;
        }
      }
      if ((char)local_a0 != '\0' && !bVar15) {
        FUN_00d50b20();
      }
      goto LAB_01e9920c;
    }
    if (g_027edfd8 != 0) {
      uVar17 = FUN_00d50b00();
    }
    local_1c0 = lVar12;
    local_1b8 = '\x01';
    (**(code **)(*this_ptr + 0x4c8))(uVar17,&local_1c0);
    plVar11 = local_88;
    if (local_80 == '\0') {
      if (local_88 == (int64_t *)0x0) {
        local_50 = (int64_t *)0x0;
        local_48 = '\x01';
        plVar11 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        local_50 = plVar11;
        local_48 = '\x01';
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_50 = local_88;
      local_48 = '\x01';
      local_80 = '\0';
    }
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
    if ((g_027048b0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
      g_026cd478 = FUN_00d4fe50();
      g_026cd460 = "GNList";
      g_026cd468 = 0x20;
      g_026cd470 = FUN_00018210;
      g_026cd480 = 0;
      ram_00000000026cd488 = 0;
      g_026cd490 = 0;
      g_026cd508 = 0;
      ram_00000000026cd510 = 0;
      g_026cd518 = 0;
      g_026cd51a = 6;
      g_026cd498 = 0;
      ram_00000000026cd4a0 = 0;
      g_026cd4a8 = 0;
      ram_00000000026cd4b0 = 0;
      g_026cd4b8 = 0;
      ram_00000000026cd4c0 = 0;
      g_026cd4c8 = 0;
      ram_00000000026cd4d0 = 0;
      g_026cd4d8 = 0;
      ram_00000000026cd4e0 = 0;
      g_026cd4e8 = 0;
      ram_00000000026cd4f0 = 0;
      g_026cd4f8 = 0;
      ram_00000000026cd500 = 0;
      g_026cd523 = 0;
      g_026cd51b = 0;
      ___cxa_guard_release();
    }
    if (plVar11 == (int64_t *)0x0) {
LAB_01e9869f:
      pplVar14 = &g_02802688;
    }
    else {
      (**(code **)(*plVar11 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01e9869f;
    }
    cVar6 = local_68;
    plVar13 = local_70;
    plVar11 = *pplVar14;
    cVar5 = *(char *)(pplVar14 + 1);
    if (local_70 == plVar11) {
      cVar4 = local_68;
      if (((cVar5 != '\0') && (local_68 == '\0')) && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b00();
        cVar4 = '\x01';
      }
    }
    else {
      if ((cVar5 != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      local_70 = plVar11;
      cVar4 = cVar5;
      if ((cVar6 != '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_68 = cVar4;
    plVar11 = local_50;
    if (local_70 == (int64_t *)0x0) {
      if ((g_0277a3a0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        g_026d3c38 = FUN_00d4fe50();
        g_026d3c20 = "GNMultipleValue";
        g_026d3c28 = 0x18;
        g_026d3c30 = FUN_00050c70;
        g_026d3c40 = 0;
        ram_00000000026d3c48 = 0;
        g_026d3c50 = 0;
        ram_00000000026d3c58 = 0;
        g_026d3c60 = 0;
        ram_00000000026d3c68 = 0;
        g_026d3c70 = 0;
        ram_00000000026d3c78 = 0;
        g_026d3c80 = 0;
        ram_00000000026d3c88 = 0;
        g_026d3c90 = 0;
        ram_00000000026d3c98 = 0;
        g_026d3ca0 = 0;
        ram_00000000026d3ca8 = 0;
        g_026d3cb0 = 0;
        ram_00000000026d3cb8 = 0;
        g_026d3cc0 = 0;
        ram_00000000026d3cc8 = 0;
        g_026d3cd0 = 0;
        ram_00000000026d3cd8 = 0;
        g_026d3ce0 = 0;
        ___cxa_guard_release();
      }
      if (plVar11 == (int64_t *)0x0) {
LAB_01e988bc:
        plVar11 = g_02802688;
        cVar5 = g_02802690;
        if (g_02802690 == '\0') goto LAB_01e9892d;
LAB_01e9891e:
        if (plVar11 == (int64_t *)0x0) goto LAB_01e9892d;
        FUN_00d50b00();
      }
      else {
        (**(code **)(*plVar11 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_01e988bc;
        plVar11 = local_50;
        cVar5 = local_48;
        if (local_48 != '\0') goto LAB_01e9891e;
LAB_01e9892d:
        if (plVar11 == (int64_t *)0x0) {
          puVar10 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar10 = &g_02572358;
          (*g_02572370)();
          local_158 = '\x01';
          local_160 = puVar10;
          FUN_01d0aa90();
          if ((local_158 != '\0') && (local_160 != (void*)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01e99185;
        }
      }
      pplVar14 = &local_88;
      FUN_00e987e0();
      plVar13 = local_88;
      if ((g_027048b0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        g_026cd478 = FUN_00d4fe50();
        g_026cd460 = "GNList";
        g_026cd468 = 0x20;
        g_026cd470 = FUN_00018210;
        g_026cd480 = 0;
        ram_00000000026cd488 = 0;
        g_026cd490 = 0;
        g_026cd508 = 0;
        ram_00000000026cd510 = 0;
        g_026cd518 = 0;
        g_026cd51a = 6;
        g_026cd498 = 0;
        ram_00000000026cd4a0 = 0;
        g_026cd4a8 = 0;
        ram_00000000026cd4b0 = 0;
        g_026cd4b8 = 0;
        ram_00000000026cd4c0 = 0;
        g_026cd4c8 = 0;
        ram_00000000026cd4d0 = 0;
        g_026cd4d8 = 0;
        ram_00000000026cd4e0 = 0;
        g_026cd4e8 = 0;
        ram_00000000026cd4f0 = 0;
        g_026cd4f8 = 0;
        ram_00000000026cd500 = 0;
        g_026cd523 = 0;
        g_026cd51b = 0;
        ___cxa_guard_release();
      }
      if (plVar13 == (int64_t *)0x0) {
LAB_01e9897b:
        pplVar14 = &g_02802688;
      }
      else {
        (**(code **)(*plVar13 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_01e9897b;
      }
      plVar13 = *pplVar14;
      if (*(char *)(pplVar14 + 1) == '\0') {
        if (plVar13 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar14 + 1) = 0;
      }
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar13 == (int64_t *)0x0) {
        FUN_00e99c70();
        plVar13 = local_88;
        if (local_80 == '\0') {
          if (local_88 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01e98ae4;
          }
        }
        else if (local_88 != (int64_t *)0x0) {
LAB_01e98ae4:
          local_188 = '\0';
          local_180 = 0;
          local_178 = '\0';
          local_170 = 0;
          local_168 = '\0';
          local_190 = plVar11;
          (**(code **)(*plVar13 + 0x368))(&local_180,&local_190,&local_170);
          local_c0 = local_88;
          local_b8 = 0;
          if (local_80 == '\0') {
            if (local_88 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          local_b8 = '\x01';
          FUN_01d10370();
          if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          if ((local_178 != '\0') && (local_180 != 0)) {
            FUN_00d50b20();
          }
          if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          goto LAB_01e99178;
        }
        FUN_00d8ede0();
        local_b0 = local_88;
        local_a8 = 0;
        if (local_80 == '\0') {
          if (local_88 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_a8 = '\x01';
        FUN_01d10370();
        if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_198 = '\0';
        local_1a0 = plVar13;
        FUN_01d0afe0();
        if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
LAB_01e99178:
      if (cVar5 != '\0') {
        FUN_00d50b20();
      }
    }
    else {
      local_1b0 = local_70;
      local_1a8 = '\0';
      FUN_01d0afe0();
      if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01e99185:
    lVar12 = g_027edfd8;
    if ((char)local_5c == '\0') {
      local_5c = 0;
    }
    else {
      if (g_027edfd8 != 0) {
        FUN_00d50b00();
      }
      local_150 = lVar12;
      local_148 = '\x01';
      local_5c = FUN_01ccca20();
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01e991fd:
  bVar1 = false;
  puVar10 = (void*)0x0;
  local_40 = 0;
  plVar11 = (int64_t *)0x0;
LAB_01e9920c:
  (**(code **)(*local_78 + 0x998))();
  FUN_01e058a0();
  (**(code **)(*local_78 + 0x620))();
  if (local_90 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((bVar1) && (puVar10 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_40 != '\0') && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

