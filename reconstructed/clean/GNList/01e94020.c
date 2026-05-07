// Function: FUN_01e94020
// Address: 01e94020
// Size: 9044 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01e94020(void)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  undefined7 uVar8;
  undefined7 extraout_var;
  uint64_t uVar6;
  void*puVar7;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 uVar9;
  int64_t this_ptr;
  int64_t *plVar10;
  int64_t lVar11;
  int64_t *plVar12;
  byte bVar13;
  uint7 uVar17;
  int64_t *plVar14;
  int64_t **pplVar15;
  uint64_t uVar16;
  uint64_t unaff_R15;
  int64_t *plVar18;
  bool bVar19;
  bool bVar20;
  uint32_t uVar21;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  uint32_t extraout_XMM0_Da_08;
  int64_t local_350;
  char local_348;
  int64_t local_340;
  char local_338;
  int64_t *local_330;
  char local_328;
  int64_t *local_320;
  char local_318;
  int64_t local_310;
  char local_308;
  int64_t local_300;
  char local_2f8;
  int64_t local_2f0;
  char local_2e8;
  int64_t *local_2e0;
  char local_2d8;
  int64_t *local_2d0;
  char local_2c8;
  int64_t local_2c0;
  char local_2b8;
  int64_t *local_2b0;
  char local_2a8;
  int64_t *local_2a0;
  char local_298;
  int64_t *local_290;
  char local_288;
  int64_t *local_280;
  char local_278;
  int64_t *local_270;
  char local_268;
  int64_t local_260;
  char local_258;
  int64_t *local_250;
  char local_248;
  int64_t *local_240;
  char local_238;
  int64_t *local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t *local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t *local_1e0;
  char local_1d8;
  int64_t *local_1d0;
  char local_1c8;
  int64_t *local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  int64_t *local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  int64_t *local_c8;
  int64_t *local_c0;
  char local_b8;
  uint64_t local_b0;
  int64_t *local_90;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  int local_60;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  int64_t *local_50;
  uint64_t local_48;
  int64_t *local_40;
  int64_t *local_38;
  
  *(void*)(this_ptr + 0x42) = 1;
  FUN_01ccad60();
  plVar10 = local_78;
  if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) && (FUN_00d50b00(), local_70 != '\0'))
     && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_d0 = plVar10;
  iVar4 = FUN_01d0a910();
  if (iVar4 == 1) {
    bVar2 = false;
    local_48 = 0;
    local_40 = (int64_t *)0x0;
    bVar19 = false;
    bVar20 = false;
    local_50 = (int64_t *)0x0;
    local_c8 = (int64_t *)0x0;
    local_80 = (int64_t *)0x0;
    local_b0 = 0;
    plVar5 = (int64_t *)0x0;
    plVar12 = (int64_t *)0x0;
    plVar18 = (int64_t *)0x0;
    goto LAB_01e95611;
  }
  uVar21 = FUN_01d0a8f0();
  local_350 = g_027edfd0;
  if (g_027edfd0 != 0) {
    uVar21 = FUN_00d50b00();
  }
  local_348 = '\x01';
  uVar21 = FUN_01ccaae0(uVar21,&local_350);
  plVar18 = local_78;
  uVar17 = (uint7)((uint64_t)this_ptr >> 8);
  if (local_78 == (int64_t *)0x0) {
    local_38 = (int64_t *)0x0;
    local_b0 = 0;
    bVar2 = false;
    local_90 = (int64_t *)0x0;
    local_c8 = (int64_t *)0x0;
    local_80 = (int64_t *)0x0;
    bVar19 = false;
    plVar14 = (int64_t *)((uint64_t)uVar17 << 8);
    plVar12 = local_90;
  }
  else {
    if (local_70 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_70 = '\0';
    }
    uVar21 = FUN_01d25f70();
    plVar12 = local_c0;
    if (local_c0 == (int64_t *)0x0) {
      local_90 = (int64_t *)0x0;
      bVar2 = false;
      local_c8 = (int64_t *)0x0;
      uVar8 = 0;
      local_80 = (int64_t *)0x0;
      bVar19 = false;
      plVar12 = local_90;
    }
    else {
      if (local_b8 == '\0') {
        uVar21 = FUN_00d50b00();
      }
      else {
        local_b8 = '\0';
      }
      lVar11 = g_027edfd0;
      if (g_027edfd0 != 0) {
        uVar21 = FUN_00d50b00();
      }
      local_340 = lVar11;
      local_338 = '\x01';
      uVar21 = FUN_01ccab60(uVar21,&local_340);
      local_80 = local_e0;
      if (local_e0 == (int64_t *)0x0) {
        local_c8 = (int64_t *)0x0;
        local_80 = (int64_t *)0x0;
LAB_01e94285:
        bVar19 = local_80 != (int64_t *)0x0;
        plVar5 = local_80;
        if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
          plVar5 = (int64_t *)FUN_00d50b20();
          uVar21 = extraout_XMM0_Da_00;
        }
      }
      else {
        if (local_d8 == '\0') {
          uVar6 = FUN_00d50b00();
          local_c8 = (int64_t *)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
          uVar21 = extraout_XMM0_Da;
          goto LAB_01e94285;
        }
        local_d8 = '\0';
        bVar19 = true;
        local_c8 = (int64_t *)CONCAT71((int7)((uint64_t)local_e0 >> 8),1);
        plVar5 = local_c8;
      }
      if ((local_338 != '\0') && (local_340 != 0)) {
        plVar5 = (int64_t *)FUN_00d50b20();
        uVar21 = extraout_XMM0_Da_01;
      }
      uVar8 = (undefined7)((uint64_t)plVar5 >> 8);
      bVar2 = true;
    }
    if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
      uVar21 = FUN_00d50b20();
      uVar8 = extraout_var;
    }
    local_b0 = CONCAT71(uVar8,1);
    plVar14 = (int64_t *)CONCAT71(uVar17,plVar18 != (int64_t *)0x0);
    local_38 = plVar18;
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    uVar21 = FUN_00d50b20();
  }
  if ((local_348 != '\0') && (local_350 != 0)) {
    uVar21 = FUN_00d50b20();
  }
  lVar11 = g_027edfe0;
  if (bVar19) {
    if (*(int64_t *)(this_ptr + 0x48) == 0) {
      local_70 = '\0';
      local_78 = (int64_t *)0x0;
      local_b8 = '\0';
      local_c0 = (int64_t *)0x0;
      FUN_01ccd250(uVar21,&local_c0);
      plVar18 = local_78;
      plVar5 = *(int64_t **)(this_ptr + 0x48);
      if (plVar5 != local_78) {
        if (local_78 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *(int64_t **)(this_ptr + 0x48) = plVar18;
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      plVar18 = local_c0;
      plVar5 = *(int64_t **)(this_ptr + 0x50);
      if (plVar5 != local_c0) {
        if (local_c0 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *(int64_t **)(this_ptr + 0x50) = plVar18;
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar11 = *(int64_t *)(this_ptr + 0x50);
      plVar5 = local_38;
    }
    else {
      lVar11 = *(int64_t *)(this_ptr + 0x50);
      plVar5 = local_38;
    }
    local_38 = plVar5;
    if (lVar11 == 0) {
      local_48 = 0;
      local_40 = (int64_t *)0x0;
      goto LAB_01e94ec0;
    }
    lVar11 = *(int64_t *)(this_ptr + 0x48);
    if (lVar11 == 0) {
      uVar6 = FUN_01d25cb0();
      plVar18 = local_78;
      if (local_78 != (int64_t *)0x0) {
        local_48 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) &&
           (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01e946cb;
      }
      local_48 = 0;
LAB_01e94908:
      local_40 = (int64_t *)0x0;
      bVar19 = false;
      bVar20 = false;
      local_50 = (int64_t *)0x0;
      plVar18 = (int64_t *)0x0;
      goto LAB_01e95611;
    }
    local_128 = 0;
    uVar21 = FUN_00d50b00();
    local_128 = '\x01';
    pplVar15 = &local_78;
    local_130 = lVar11;
    uVar6 = FUN_01d26620(uVar21,&local_130);
    plVar18 = local_78;
    uVar6 = CONCAT71((int7)((uint64_t)uVar6 >> 8),g_027048b0);
    if ((g_027048b0 == '\0') && (uVar6 = ___cxa_guard_acquire(), (int)uVar6 != 0)) {
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
      uVar6 = ___cxa_guard_release();
      plVar10 = local_d0;
    }
    plVar5 = local_38;
    if (plVar18 == (int64_t *)0x0) {
      pplVar15 = &g_02802688;
      plVar18 = g_02802688;
      if (g_02802688 == (int64_t *)0x0) goto LAB_01e94675;
LAB_01e943e6:
      if (*(char *)(pplVar15 + 1) == '\0') {
        uVar6 = FUN_00d50b00();
      }
      else {
        *(void*)(pplVar15 + 1) = 0;
      }
      local_48 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    }
    else {
      (**(code **)(*plVar18 + 0x360))();
      uVar6 = FUN_00e85ea0();
      if ((char)uVar6 == '\0') {
        pplVar15 = &g_02802688;
      }
      plVar18 = *pplVar15;
      if (*pplVar15 != (int64_t *)0x0) goto LAB_01e943e6;
LAB_01e94675:
      local_48 = 0;
      plVar18 = (int64_t *)0x0;
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
LAB_01e946cb:
    if (plVar18 == (int64_t *)0x0) goto LAB_01e94908;
    local_70 = '\0';
    local_78 = (int64_t *)0x0;
    uStack_5c = 0;
    uStack_58 = 0;
    local_68 = plVar18;
    local_40 = plVar18;
    for (lVar11 = 0; local_60 = (int)lVar11, local_60 < *(int *)((int64_t)plVar18 + 0xc);
        lVar11 = lVar11 + 1) {
      plVar10 = *(int64_t **)(plVar18[2] + lVar11 * 8);
      local_78 = plVar10;
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_001bbdd0();
      uVar21 = (**(code **)(*plVar5 + 0x18))();
      local_118 = 0;
      lVar1 = *(int64_t *)(this_ptr + 0x50);
      if (lVar1 != 0) {
        uVar21 = FUN_00d50b00();
      }
      local_118 = '\x01';
      local_120 = lVar1;
      (**(code **)(*plVar10 + 0x98))(uVar21,&local_120);
      plVar14 = local_c0;
      local_108 = 0;
      if (local_b8 == '\0') {
        if (local_c0 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b8 = '\0';
      }
      plVar18 = local_40;
      local_108 = '\x01';
      local_110 = plVar14;
      FUN_01d0a7b0();
      if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      local_328 = '\0';
      local_330 = plVar10;
      FUN_01d0c730();
      if ((local_328 != '\0') && (local_330 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_318 = '\0';
      local_320 = plVar5;
      FUN_01d0a960();
      plVar5 = local_38;
      if ((local_318 != '\0') && (local_320 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00083b20();
    bVar19 = false;
    plVar14 = (int64_t *)0x0;
    local_90 = plVar12;
LAB_01e948e3:
    local_50 = (int64_t *)0x0;
    bVar20 = false;
    plVar10 = local_d0;
    plVar12 = local_90;
    plVar18 = plVar14;
    goto LAB_01e95611;
  }
  if (g_027edfe0 != 0) {
    uVar21 = FUN_00d50b00();
  }
  local_310 = lVar11;
  local_308 = '\x01';
  uVar6 = FUN_01ccab60(uVar21,&local_310);
  plVar5 = local_78;
  uVar8 = (undefined7)(unaff_R15 >> 8);
  uVar21 = extraout_XMM0_Da_02;
  if (local_78 == local_80) {
    if (((char)local_c8 == '\0') && (local_78 != (int64_t *)0x0)) {
      plVar5 = local_80;
      if (local_70 != '\0') goto LAB_01e945a6;
      unaff_R15 = CONCAT71(uVar8,1);
      uVar21 = FUN_00d50b00();
    }
    else {
      unaff_R15 = (uint64_t)local_c8 & 0xffffffff;
    }
LAB_01e94937:
    if ((local_70 == '\0') || (local_78 == (int64_t *)0x0)) {
      local_c8 = (int64_t *)(unaff_R15 & 0xffffffff);
    }
    else {
      uVar21 = FUN_00d50b20();
      local_c8 = (int64_t *)(unaff_R15 & 0xffffffff);
    }
  }
  else {
    if (local_70 == '\0') {
      if (local_78 != (int64_t *)0x0) {
        uVar21 = FUN_00d50b00();
      }
      unaff_R15 = CONCAT71(uVar8,1);
      if (((char)local_c8 == '\0') || (local_80 == (int64_t *)0x0)) {
        local_80 = plVar5;
      }
      else {
        local_80 = plVar5;
        uVar21 = FUN_00d50b20();
      }
      goto LAB_01e94937;
    }
    if (((char)local_c8 != '\0') && (local_80 != (int64_t *)0x0)) {
      uVar6 = FUN_00d50b20();
      uVar21 = extraout_XMM0_Da_03;
    }
LAB_01e945a6:
    local_70 = '\0';
    local_c8 = (int64_t *)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    local_80 = plVar5;
  }
  if ((local_308 != '\0') && (local_310 != 0)) {
    uVar21 = FUN_00d50b20();
  }
  lVar11 = g_027edfe0;
  bVar13 = (byte)plVar14;
  uVar8 = (undefined7)(unaff_R15 >> 8);
  if (local_80 != (int64_t *)0x0) {
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &g_02572358;
    uVar21 = (*g_02572370)();
    local_300 = g_027fdc90;
    if (g_027fdc90 != 0) {
      uVar21 = FUN_00d50b00();
    }
    local_2f8 = '\x01';
    uVar21 = FUN_01ccab60(uVar21,&local_300);
    local_50 = local_78;
    if (local_78 == (int64_t *)0x0) {
      bVar19 = true;
      local_50 = (int64_t *)0x0;
      bVar20 = false;
    }
    else {
      if (local_70 == '\0') {
        uVar21 = FUN_00d50b00();
        bVar19 = false;
        bVar20 = true;
        if ((local_70 == '\0') || (local_78 == (int64_t *)0x0)) goto LAB_01e94aea;
        uVar21 = FUN_00d50b20();
      }
      else {
        local_70 = '\0';
      }
      bVar20 = true;
      bVar19 = false;
    }
LAB_01e94aea:
    if ((local_2f8 != '\0') && (local_300 != 0)) {
      uVar21 = FUN_00d50b20();
    }
    lVar11 = g_027fdc90;
    if (!bVar19) {
      if (g_027fdc90 != 0) {
        uVar21 = FUN_00d50b00();
      }
      local_2f0 = lVar11;
      local_2e8 = '\x01';
      FUN_01ccaae0(uVar21,&local_2f0);
      plVar5 = local_78;
      uVar9 = extraout_var_02;
      if (local_78 == local_38) {
        if (plVar18 == (int64_t *)0x0) {
          if (local_78 == (int64_t *)0x0) {
            uVar16 = local_b0 & 0xffffffff;
          }
          else {
            plVar5 = local_38;
            if (local_70 != '\0') goto LAB_01e94beb;
            uVar16 = CONCAT71(uVar8,1);
            FUN_00d50b00();
          }
        }
        else {
          uVar16 = local_b0 & 0xffffffff;
        }
LAB_01e95099:
        plVar5 = local_38;
        if (local_70 == '\0') {
          local_b0 = uVar16 & 0xffffffff;
        }
        else if (local_78 == (int64_t *)0x0) {
          local_b0 = uVar16 & 0xffffffff;
        }
        else {
          FUN_00d50b20();
          local_b0 = uVar16 & 0xffffffff;
        }
      }
      else {
        if (local_70 == '\0') {
          if (local_78 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          uVar16 = CONCAT71(uVar8,1);
          if ((bVar13 & local_38 != (int64_t *)0x0) == 1) {
            local_38 = plVar5;
            FUN_00d50b20();
          }
          else {
            local_38 = plVar5;
          }
          goto LAB_01e95099;
        }
        if ((bVar13 & local_38 != (int64_t *)0x0) == 1) {
          local_38 = local_78;
          FUN_00d50b20();
          uVar9 = extraout_var_03;
        }
LAB_01e94beb:
        local_70 = '\0';
        local_b0 = CONCAT71(uVar9,1);
      }
      if ((local_2e8 != '\0') && (local_2f0 != 0)) {
        FUN_00d50b20();
      }
      local_38 = plVar5;
      uVar21 = FUN_01d2ac30();
      plVar14 = local_78;
      if (local_70 == '\0') {
        if (local_78 != (int64_t *)0x0) {
          uVar21 = FUN_00d50b00();
          if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            uVar21 = FUN_00d50b20();
          }
          goto LAB_01e9513a;
        }
      }
      else if (local_78 != (int64_t *)0x0) {
LAB_01e9513a:
        local_2e0 = local_50;
        local_2d8 = '\0';
        (**(code **)(*plVar14 + 0x98))(uVar21,&local_2e0);
        plVar5 = local_78;
        if (local_70 == '\0') {
          if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
             (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70 = '\0';
        }
        if ((local_2d8 != '\0') && (local_2e0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar5 != (int64_t *)0x0) {
          local_2d0 = plVar5;
          local_2c8 = '\0';
          FUN_00d21140();
          if ((local_2c8 != '\0') && (local_2d0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        uVar21 = FUN_00d50b20();
      }
    }
    lVar11 = g_027edfe0;
    if (g_027edfe0 != 0) {
      uVar21 = FUN_00d50b00();
    }
    local_2c0 = lVar11;
    local_2b8 = '\x01';
    uVar6 = FUN_01ccaae0(uVar21,&local_2c0);
    plVar5 = local_78;
    uVar8 = (undefined7)((uint64_t)plVar14 >> 8);
    if (local_78 == local_38) {
      if (((char)local_b0 == '\0') && (local_78 != (int64_t *)0x0)) {
        plVar5 = local_38;
        if (local_70 != '\0') goto LAB_01e95263;
        uVar16 = CONCAT71(uVar8,1);
        FUN_00d50b00();
      }
      else {
        uVar16 = local_b0 & 0xffffffff;
      }
LAB_01e952f2:
      plVar5 = local_38;
      if (local_70 == '\0') {
        local_b0 = uVar16 & 0xffffffff;
      }
      else if (local_78 == (int64_t *)0x0) {
        local_b0 = uVar16 & 0xffffffff;
      }
      else {
        FUN_00d50b20();
        local_b0 = uVar16 & 0xffffffff;
      }
    }
    else {
      if (local_70 == '\0') {
        if (local_78 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        uVar16 = CONCAT71(uVar8,1);
        if (((char)local_b0 == '\0') || (local_38 == (int64_t *)0x0)) {
          local_38 = plVar5;
        }
        else {
          local_38 = plVar5;
          FUN_00d50b20();
        }
        goto LAB_01e952f2;
      }
      if (((char)local_b0 != '\0') && (local_38 != (int64_t *)0x0)) {
        local_38 = local_78;
        uVar6 = FUN_00d50b20();
      }
LAB_01e95263:
      local_70 = '\0';
      local_b0 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    }
    if ((local_2b8 != '\0') && (local_2c0 != 0)) {
      FUN_00d50b20();
    }
    uVar21 = FUN_01d836c0();
    plVar18 = local_78;
    if (local_70 == '\0') {
      if (local_78 != (int64_t *)0x0) {
        uVar21 = FUN_00d50b00();
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        goto LAB_01e95388;
      }
LAB_01e953cc:
      local_48 = 0;
      plVar18 = (int64_t *)0x0;
LAB_01e955ef:
      local_40 = plVar18;
      FUN_00d50b20();
    }
    else {
      if (local_78 == (int64_t *)0x0) goto LAB_01e953cc;
LAB_01e95388:
      local_2a8 = '\0';
      local_2b0 = local_80;
      uVar6 = (**(code **)(*plVar18 + 0x98))(uVar21,&local_2b0);
      plVar18 = local_78;
      if (local_78 == (int64_t *)0x0) {
        local_48 = 0;
        plVar18 = (int64_t *)0x0;
joined_r0x01e953e7:
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_70 == '\0') {
          uVar6 = FUN_00d50b00();
          local_48 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
          goto joined_r0x01e953e7;
        }
        local_70 = '\0';
        local_48 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      }
      if ((local_2a8 != '\0') && (local_2b0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar18 != (int64_t *)0x0) {
        local_70 = '\0';
        local_78 = (int64_t *)0x0;
        uStack_58 = 0;
        local_60 = 0;
        uStack_5c = 0;
        local_68 = plVar18;
        local_38 = plVar5;
        if (0 < *(int *)((int64_t)plVar18 + 0xc)) {
          lVar11 = 0;
          local_40 = plVar18;
          do {
            plVar10 = *(int64_t **)(local_40[2] + lVar11 * 8);
            local_298 = '\0';
            local_2a0 = plVar10;
            local_78 = plVar10;
            cVar3 = FUN_00d23d70();
            if ((local_298 != '\0') && (local_2a0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar3 == '\0') {
              plVar5 = (int64_t *)FUN_00e8fc40();
              FUN_001bbdd0();
              (**(code **)(*plVar5 + 0x18))();
              local_288 = '\0';
              local_290 = plVar10;
              FUN_01d0a7b0();
              if ((local_288 != '\0') && (local_290 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_278 = '\0';
              local_280 = plVar10;
              FUN_01d0c730();
              if ((local_278 != '\0') && (local_280 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_268 = '\0';
              local_270 = plVar5;
              FUN_01d0a960();
              if ((local_268 != '\0') && (local_270 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            lVar11 = lVar11 + 1;
            local_60 = (int)lVar11;
            plVar18 = local_40;
          } while (local_60 < *(int *)((int64_t)local_40 + 0xc));
        }
        FUN_00083b20();
        plVar5 = local_38;
        plVar10 = local_d0;
      }
      FUN_00d50b20();
      local_40 = plVar18;
      if (puVar7 != (void*)0x0) goto LAB_01e955ef;
    }
    bVar19 = false;
    plVar18 = (int64_t *)0x0;
    goto LAB_01e95611;
  }
  if (g_027edfe0 != 0) {
    uVar21 = FUN_00d50b00();
  }
  local_260 = lVar11;
  local_258 = '\x01';
  uVar21 = FUN_01ccaae0(uVar21,&local_260);
  plVar5 = local_78;
  uVar9 = extraout_var_00;
  if (local_78 == local_38) {
    if (plVar18 == (int64_t *)0x0) {
      if (local_38 == (int64_t *)0x0) {
        uVar16 = local_b0 & 0xffffffff;
      }
      else {
        plVar5 = local_38;
        if (local_70 != '\0') goto LAB_01e94bb2;
        uVar16 = CONCAT71(uVar8,1);
        uVar21 = FUN_00d50b00();
      }
    }
    else {
      uVar16 = local_b0 & 0xffffffff;
    }
LAB_01e94cba:
    plVar5 = local_38;
    if (local_70 == '\0') {
      local_b0 = uVar16 & 0xffffffff;
    }
    else if (local_78 == (int64_t *)0x0) {
      local_b0 = uVar16 & 0xffffffff;
    }
    else {
      uVar21 = FUN_00d50b20();
      local_b0 = uVar16 & 0xffffffff;
    }
  }
  else {
    if (local_70 == '\0') {
      if (local_78 != (int64_t *)0x0) {
        uVar21 = FUN_00d50b00();
      }
      uVar16 = CONCAT71(uVar8,1);
      if ((bVar13 & local_38 != (int64_t *)0x0) == 1) {
        local_38 = plVar5;
        uVar21 = FUN_00d50b20();
      }
      else {
        local_38 = plVar5;
      }
      goto LAB_01e94cba;
    }
    if ((bVar13 & local_38 != (int64_t *)0x0) == 1) {
      local_38 = local_78;
      uVar21 = FUN_00d50b20();
      uVar9 = extraout_var_01;
    }
LAB_01e94bb2:
    local_70 = '\0';
    local_b0 = CONCAT71(uVar9,1);
  }
  if ((local_258 != '\0') && (local_260 != 0)) {
    uVar21 = FUN_00d50b20();
  }
  lVar11 = g_027feca0;
  if (plVar5 != (int64_t *)0x0) {
    FUN_01d25cb0();
    plVar18 = local_78;
    if (local_78 == (int64_t *)0x0) {
      local_48 = 0;
      local_40 = (int64_t *)0x0;
      bVar19 = false;
      bVar20 = false;
      local_50 = (int64_t *)0x0;
      local_80 = (int64_t *)0x0;
      plVar18 = (int64_t *)0x0;
      goto LAB_01e95611;
    }
    local_38 = plVar5;
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    local_70 = '\0';
    local_78 = (int64_t *)0x0;
    local_40 = plVar18;
    local_68 = plVar18;
    uStack_5c = 0;
    uStack_58 = 0;
    for (lVar11 = 0; local_60 = (int)lVar11, local_60 < *(int *)((int64_t)local_40 + 0xc);
        lVar11 = lVar11 + 1) {
      plVar10 = *(int64_t **)(local_40[2] + lVar11 * 8);
      local_78 = plVar10;
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_001bbdd0();
      (**(code **)(*plVar5 + 0x18))();
      local_248 = '\0';
      local_250 = plVar10;
      FUN_01d0a7b0();
      if ((local_248 != '\0') && (local_250 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_238 = '\0';
      local_240 = plVar10;
      FUN_01d0c730();
      if ((local_238 != '\0') && (local_240 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_228 = '\0';
      local_230 = plVar5;
      FUN_01d0a960();
      if ((local_228 != '\0') && (local_230 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    uVar6 = FUN_00083b20();
    local_48 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    local_80 = (int64_t *)0x0;
    plVar10 = local_d0;
LAB_01e94ec0:
    local_50 = (int64_t *)0x0;
    bVar20 = false;
    bVar19 = false;
    plVar5 = local_38;
    plVar18 = (int64_t *)0x0;
    goto LAB_01e95611;
  }
  if (g_027feca0 != 0) {
    uVar21 = FUN_00d50b00();
  }
  local_220 = lVar11;
  local_218 = '\x01';
  uVar21 = FUN_01ccab60(uVar21,&local_220);
  plVar18 = local_78;
  if (local_78 == (int64_t *)0x0) {
    bVar20 = true;
    plVar18 = (int64_t *)0x0;
    bVar19 = false;
  }
  else {
    if (local_70 == '\0') {
      uVar21 = FUN_00d50b00();
      bVar19 = true;
      bVar20 = false;
      if ((local_70 == '\0') || (bVar20 = false, local_78 == (int64_t *)0x0)) goto LAB_01e94f8b;
      uVar21 = FUN_00d50b20();
    }
    else {
      local_70 = '\0';
    }
    bVar19 = true;
    bVar20 = false;
  }
LAB_01e94f8b:
  if ((local_218 != '\0') && (local_220 != 0)) {
    uVar21 = FUN_00d50b20();
  }
  lVar11 = g_027e7c20;
  plVar14 = plVar18;
  if (bVar20) {
    if (g_027e7c20 != 0) {
      uVar21 = FUN_00d50b00();
    }
    local_190 = lVar11;
    local_188 = '\x01';
    uVar21 = FUN_01ccab60(uVar21,&local_190);
    local_80 = local_78;
    if (local_78 == (int64_t *)0x0) {
      local_80 = (int64_t *)0x0;
    }
    else if (local_70 == '\0') {
      uVar6 = FUN_00d50b00();
      local_c8 = (int64_t *)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      uVar21 = extraout_XMM0_Da_04;
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
      local_c8 = (int64_t *)CONCAT71((int7)((uint64_t)local_78 >> 8),1);
    }
    if ((local_188 != '\0') && (local_190 != 0)) {
      uVar21 = FUN_00d50b20();
    }
    lVar11 = g_027e7c20;
    if (local_80 == (int64_t *)0x0) {
LAB_01e95877:
      local_48 = 0;
      local_40 = (int64_t *)0x0;
      bVar20 = false;
      local_50 = (int64_t *)0x0;
      local_80 = (int64_t *)0x0;
      plVar5 = (int64_t *)0x0;
      goto LAB_01e95611;
    }
    if (g_027e7c20 != 0) {
      uVar21 = FUN_00d50b00();
    }
    local_180 = lVar11;
    local_178 = '\x01';
    FUN_01ccaae0(uVar21,&local_180);
    uVar21 = FUN_01d25f70();
    local_90 = local_78;
    if (local_78 == plVar12) {
      local_90 = plVar12;
      bVar20 = bVar2;
      if ((!bVar2) && (plVar12 != (int64_t *)0x0)) {
        if (local_70 != '\0') goto LAB_01e958b7;
        uVar21 = FUN_00d50b00();
        bVar20 = true;
      }
LAB_01e95960:
      bVar2 = bVar20;
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
    }
    else {
      if (local_70 == '\0') {
        if (local_78 != (int64_t *)0x0) {
          uVar21 = FUN_00d50b00();
        }
        bVar20 = true;
        if ((bVar2) && (plVar12 != (int64_t *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        goto LAB_01e95960;
      }
      if ((bVar2) && (plVar12 != (int64_t *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
LAB_01e958b7:
      local_70 = '\0';
      bVar2 = true;
    }
    if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
      uVar21 = FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      uVar21 = FUN_00d50b20();
    }
    if (local_90 != (int64_t *)0x0) {
      local_170 = local_80;
      local_168 = '\0';
      FUN_00c84770(uVar21,&local_170);
      local_40 = local_78;
      if (local_78 == (int64_t *)0x0) {
        local_40 = (int64_t *)0x0;
        local_48 = 0;
      }
      else if (local_70 == '\0') {
        uVar6 = FUN_00d50b00();
        local_48 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70 = '\0';
        local_48 = CONCAT71((int7)((uint64_t)local_78 >> 8),1);
      }
      if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 == (int64_t *)0x0) {
        local_40 = (int64_t *)0x0;
        bVar20 = false;
        local_50 = (int64_t *)0x0;
        plVar5 = (int64_t *)0x0;
        plVar10 = local_d0;
        plVar12 = local_90;
        goto LAB_01e95611;
      }
      local_70 = '\0';
      local_78 = (int64_t *)0x0;
      local_68 = local_40;
      uStack_5c = 0;
      uStack_58 = 0;
      for (lVar11 = 0; local_60 = (int)lVar11, local_60 < *(int *)((int64_t)local_40 + 0xc);
          lVar11 = lVar11 + 1) {
        plVar10 = *(int64_t **)(local_40[2] + lVar11 * 8);
        local_78 = plVar10;
        plVar5 = (int64_t *)FUN_00e8fc40();
        FUN_001bbdd0();
        (**(code **)(*plVar5 + 0x18))();
        local_158 = '\0';
        local_160 = plVar10;
        FUN_01d0a7b0();
        if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_148 = '\0';
        local_150 = plVar10;
        FUN_01d0c730();
        if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_138 = '\0';
        local_140 = plVar5;
        FUN_01d0a960();
        if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00083b20();
LAB_01e96148:
      plVar5 = (int64_t *)0x0;
      goto LAB_01e948e3;
    }
LAB_01e95d69:
    local_90 = (int64_t *)0x0;
    local_48 = 0;
  }
  else {
    if (g_027e7c20 != 0) {
      uVar21 = FUN_00d50b00();
    }
    local_210 = lVar11;
    local_208 = '\x01';
    FUN_01ccab60(uVar21,&local_210);
    local_80 = local_78;
    if (local_78 == (int64_t *)0x0) {
      local_80 = (int64_t *)0x0;
    }
    else if (local_70 == '\0') {
      uVar6 = FUN_00d50b00();
      local_c8 = (int64_t *)CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
      local_c8 = (int64_t *)CONCAT71((int7)((uint64_t)local_78 >> 8),1);
    }
    if ((local_208 != '\0') && (local_210 != 0)) {
      FUN_00d50b20();
    }
    if (local_80 == (int64_t *)0x0) goto LAB_01e95877;
    local_200 = local_80;
    local_1f8 = '\0';
    cVar3 = FUN_00d90870();
    uVar21 = extraout_XMM0_Da_05;
    if ((local_1f8 != '\0') && (local_200 != (int64_t *)0x0)) {
      uVar21 = FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      iVar4 = FUN_00d8c7a0();
      uVar21 = FUN_00d8f140(extraout_XMM0_Da_06,iVar4 + 1);
      plVar14 = local_78;
      if (local_78 != plVar18) {
        if (local_70 != '\0') {
          bVar20 = (bool)(bVar19 & plVar18 != (int64_t *)0x0);
          bVar19 = true;
          if (bVar20) {
            uVar21 = FUN_00d50b20();
          }
          goto LAB_01e95bdf;
        }
        if (local_78 != (int64_t *)0x0) {
          uVar21 = FUN_00d50b00();
        }
        bVar20 = (bool)(bVar19 & plVar18 != (int64_t *)0x0);
        bVar19 = true;
        plVar18 = plVar14;
        if (bVar20) {
          uVar21 = FUN_00d50b20();
        }
      }
      plVar14 = plVar18;
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
    }
LAB_01e95bdf:
    lVar11 = g_027e7c20;
    if (g_027e7c20 != 0) {
      uVar21 = FUN_00d50b00();
    }
    local_1f0 = lVar11;
    local_1e8 = '\x01';
    FUN_01ccaae0(uVar21,&local_1f0);
    uVar21 = FUN_01d25f70();
    local_90 = local_78;
    if (local_78 == plVar12) {
      local_90 = plVar12;
      bVar20 = bVar2;
      if ((!bVar2) && (local_78 != (int64_t *)0x0)) {
        if (local_70 != '\0') goto LAB_01e95c6c;
        uVar21 = FUN_00d50b00();
        bVar20 = true;
      }
LAB_01e95cc5:
      bVar2 = bVar20;
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
    }
    else {
      if (local_70 == '\0') {
        if (local_78 != (int64_t *)0x0) {
          uVar21 = FUN_00d50b00();
        }
        bVar20 = true;
        if ((bVar2) && (plVar12 != (int64_t *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        goto LAB_01e95cc5;
      }
      if ((bVar2) && (plVar12 != (int64_t *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
LAB_01e95c6c:
      local_70 = '\0';
      bVar2 = true;
    }
    if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
      uVar21 = FUN_00d50b20();
    }
    if ((local_1e8 != '\0') && (local_1f0 != 0)) {
      uVar21 = FUN_00d50b20();
    }
    if (local_90 == (int64_t *)0x0) goto LAB_01e95d69;
    local_1e0 = local_80;
    local_1d8 = '\0';
    uVar21 = FUN_00c84770(uVar21,&local_1e0);
    local_40 = local_78;
    if (local_78 == (int64_t *)0x0) {
      bVar20 = true;
      local_40 = (int64_t *)0x0;
      local_48 = 0;
    }
    else {
      if (local_70 == '\0') {
        uVar6 = FUN_00d50b00();
        bVar20 = false;
        local_48 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        uVar21 = extraout_XMM0_Da_07;
        if ((local_70 == '\0') || (local_78 == (int64_t *)0x0)) goto LAB_01e95dba;
        plVar5 = (int64_t *)FUN_00d50b20();
        uVar21 = extraout_XMM0_Da_08;
      }
      else {
        local_70 = '\0';
        plVar5 = local_78;
      }
      local_48 = CONCAT71((int7)((uint64_t)plVar5 >> 8),1);
      bVar20 = false;
    }
LAB_01e95dba:
    if ((local_1d8 != '\0') && (local_1e0 != (int64_t *)0x0)) {
      uVar21 = FUN_00d50b20();
    }
    if (bVar20) {
      local_1d0 = local_80;
      local_1c8 = '\0';
      FUN_00c85190(uVar21,&local_1d0);
      plVar5 = local_78;
      if (local_78 == local_90) {
        plVar5 = local_90;
        bVar20 = bVar2;
        if ((!bVar2) && (local_78 != (int64_t *)0x0)) {
          if (local_70 != '\0') goto LAB_01e95e7c;
          FUN_00d50b00();
          bVar20 = true;
        }
LAB_01e95e87:
        bVar2 = bVar20;
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_70 == '\0') {
          if (local_78 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar20 = true;
          if (bVar2) {
            FUN_00d50b20();
          }
          goto LAB_01e95e87;
        }
        if (bVar2) {
          FUN_00d50b20();
        }
LAB_01e95e7c:
        local_70 = '\0';
        bVar2 = true;
      }
      if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 == (int64_t *)0x0) {
        local_90 = (int64_t *)0x0;
        goto LAB_01e95f2a;
      }
      FUN_00ddf900();
      plVar12 = local_c0;
      uVar21 = FUN_00c7e7b0();
      local_100 = local_e0;
      local_f8 = 0;
      if (local_d8 == '\0') {
        if (local_e0 != (int64_t *)0x0) {
          uVar21 = FUN_00d50b00();
        }
      }
      else {
        local_d8 = '\0';
      }
      local_f8 = '\x01';
      (**(code **)(*plVar12 + 0x378))(uVar21,&local_100);
      plVar12 = local_78;
      if (local_78 == local_40) {
        if (local_78 == (int64_t *)0x0) {
          uVar16 = CONCAT71(uVar17,(byte)local_48);
        }
        else {
          if (local_70 != '\0') goto LAB_01e961eb;
          uVar16 = CONCAT71(uVar17,1);
          FUN_00d50b00();
        }
LAB_01e96252:
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_70 == '\0') {
          if (local_78 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          uVar16 = CONCAT71(uVar17,1);
          if (((byte)local_48 & local_40 != (int64_t *)0x0) == 1) {
            local_40 = plVar12;
            FUN_00d50b20();
          }
          else {
            local_40 = plVar12;
          }
          goto LAB_01e96252;
        }
        bVar20 = local_40 != (int64_t *)0x0;
        local_40 = plVar12;
        if (((byte)local_48 & bVar20) == 1) {
          local_40 = local_78;
          FUN_00d50b20();
          local_40 = plVar12;
        }
LAB_01e961eb:
        local_70 = '\0';
        uVar16 = CONCAT71(uVar17,1);
      }
      if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_90 = plVar5;
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
LAB_01e95f2a:
      uVar16 = CONCAT71(uVar17,(char)local_48);
    }
    if (local_40 != (int64_t *)0x0) {
      local_70 = '\0';
      local_78 = (int64_t *)0x0;
      local_68 = local_40;
      uStack_5c = 0;
      uStack_58 = 0;
      for (lVar11 = 0; local_60 = (int)lVar11, local_60 < *(int *)((int64_t)local_40 + 0xc);
          lVar11 = lVar11 + 1) {
        plVar10 = *(int64_t **)(local_40[2] + lVar11 * 8);
        local_78 = plVar10;
        plVar5 = (int64_t *)FUN_00e8fc40();
        FUN_001bbdd0();
        uVar21 = (**(code **)(*plVar5 + 0x18))();
        local_1b8 = '\0';
        local_1c0 = plVar14;
        (**(code **)(*plVar10 + 0x88))(uVar21,&local_1c0);
        (**(code **)(*local_e0 + 400))();
        local_f0 = local_c0;
        local_e8 = 0;
        if (local_b8 == '\0') {
          if (local_c0 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_b8 = '\0';
        }
        local_e8 = '\x01';
        FUN_01d0a7b0();
        if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_1a8 = '\0';
        local_1b0 = plVar10;
        FUN_01d0c730();
        if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_198 = '\0';
        local_1a0 = plVar5;
        FUN_01d0a960();
        if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00083b20();
      local_48 = uVar16 & 0xff;
      goto LAB_01e96148;
    }
    local_48 = uVar16 & 0xff;
  }
  local_40 = (int64_t *)0x0;
  bVar20 = false;
  local_50 = (int64_t *)0x0;
  plVar5 = (int64_t *)0x0;
  plVar12 = local_90;
  plVar18 = plVar14;
LAB_01e95611:
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar12 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar19) && (plVar18 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar20) && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_c8 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_b0 != '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

