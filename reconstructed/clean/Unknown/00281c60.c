// Function: FUN_00281c60
// Address: 00281c60
// Size: 24482 bytes
// Class: Unknown

void FUN_00281c60(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  byte bVar11;
  bool bVar12;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar13;
  uint64_t extraout_XMM0_Qa_00;
  double dVar14;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  uint64_t extraout_XMM0_Qa_05;
  uint64_t extraout_XMM0_Qa_06;
  int64_t local_4c0;
  char local_4b8;
  int64_t local_4b0;
  char local_4a8;
  int64_t local_4a0;
  char local_498;
  int64_t local_490;
  char local_488;
  int64_t local_480;
  char local_478;
  int64_t local_470;
  char local_468;
  int64_t local_460;
  char local_458;
  int64_t local_450;
  char local_448;
  int64_t local_440;
  char local_438;
  int64_t local_430;
  char local_428;
  int64_t local_420;
  char local_418;
  int64_t local_410;
  char local_408;
  int64_t local_400;
  char local_3f8;
  int64_t local_3f0;
  char local_3e8;
  int64_t local_3e0;
  char local_3d8;
  int64_t local_3d0;
  char local_3c8;
  int64_t local_3c0;
  char local_3b8;
  int64_t local_3b0;
  char local_3a8;
  int64_t local_3a0;
  char local_398;
  int64_t local_390;
  char local_388;
  int64_t local_380;
  char local_378;
  int64_t local_370;
  char local_368;
  int64_t local_360;
  char local_358;
  int64_t local_350;
  char local_348;
  int64_t local_340;
  char local_338;
  int64_t local_330;
  char local_328;
  int64_t local_320;
  char local_318;
  int64_t local_310;
  char local_308;
  int64_t local_300;
  char local_2f8;
  int64_t local_2f0;
  char local_2e8;
  int64_t local_2e0;
  char local_2d8;
  int64_t local_2d0;
  char local_2c8;
  int64_t local_2c0;
  char local_2b8;
  int64_t local_2b0;
  char local_2a8;
  int64_t local_2a0;
  char local_298;
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
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
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
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_48;
  char local_40;
  byte local_34;
  
  lVar1 = g_026fb820;
  if (g_026fb820 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_4c0 = lVar1;
  local_4b8 = '\x01';
  FUN_01d5e6e0(param_1,&local_4c0);
  plVar10 = local_48;
  if (local_48 == (int64_t *)0x0) {
    bVar12 = true;
    plVar10 = (int64_t *)0x0;
    bVar5 = 0;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    bVar12 = false;
    bVar5 = 1;
  }
  else {
    local_40 = '\0';
    bVar12 = false;
    bVar5 = 1;
  }
  if ((local_4b8 != '\0') && (local_4c0 != 0)) {
    FUN_00d50b20();
  }
  if (bVar12) {
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_48 + 0x450))();
    uVar13 = extraout_XMM0_Qa;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    lVar1 = g_026fb828;
    if (cVar3 == '\0') {
      if (g_026fb828 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_4b0 = lVar1;
      local_4a8 = '\x01';
      uVar13 = FUN_01d5e6e0(uVar13,&local_4b0);
      if (local_48 == plVar10) {
        if (local_48 != (int64_t *)0x0) {
          if (local_40 != '\0') goto LAB_00281dd6;
          bVar5 = 1;
          uVar13 = FUN_00d50b00();
        }
LAB_00281e27:
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
      else {
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            uVar13 = FUN_00d50b00();
          }
          bVar4 = bVar5 & plVar10 != (int64_t *)0x0;
          bVar5 = 1;
          plVar10 = local_48;
          if (bVar4 == 1) {
            uVar13 = FUN_00d50b20();
          }
          goto LAB_00281e27;
        }
        bVar12 = plVar10 != (int64_t *)0x0;
        plVar10 = local_48;
        if ((bVar5 & bVar12) == 1) {
          uVar13 = FUN_00d50b20();
        }
LAB_00281dd6:
        local_40 = '\0';
        bVar5 = 1;
      }
      if ((local_4a8 != '\0') && (local_4b0 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      if (plVar10 == (int64_t *)0x0) {
        plVar10 = (int64_t *)0x0;
      }
      else {
        uVar13 = FUN_01d66e50();
      }
    }
  }
  else {
    uVar13 = FUN_01d66e50();
  }
  lVar1 = g_026fb820;
  if (g_026fb820 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_4a0 = lVar1;
  local_498 = '\x01';
  FUN_01d5e6e0(uVar13,&local_4a0);
  plVar9 = local_48;
  if (local_48 == plVar10) {
    bVar4 = bVar5;
    if ((bVar5 == 0) && (local_48 != (int64_t *)0x0)) {
      plVar9 = plVar10;
      if (local_40 == '\0') {
        FUN_00d50b00();
        goto LAB_00281f1c;
      }
      goto LAB_00281eea;
    }
joined_r0x00281f2e:
    plVar9 = plVar10;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    bVar4 = 1;
    if ((bVar5 != 0) && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
      plVar10 = local_48;
LAB_00281f1c:
      bVar4 = 1;
      goto joined_r0x00281f2e;
    }
  }
  else {
    if ((bVar5 != 0) && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_00281eea:
    local_40 = '\0';
    bVar4 = 1;
  }
  if ((local_498 != '\0') && (local_4a0 != 0)) {
    FUN_00d50b20();
  }
  plVar10 = g_026e1810;
  if (plVar9 == (int64_t *)0x0) {
    if (g_026e1810 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00e7d6f0();
    uVar13 = FUN_0071a120();
    if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
      uVar13 = FUN_00d50b00();
    }
    local_60 = plVar10;
    local_58 = '\0';
    FUN_000175c0(uVar13,&local_60);
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar5 = bVar4;
    if (local_48 != (int64_t *)0x0) {
      local_40 = '\0';
      bVar5 = FUN_00c70bc0();
      FUN_00d50b20();
    }
    uVar13 = FUN_00d50b20();
    if (plVar10 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b20();
    }
    lVar1 = g_026fb830;
    if ((local_48 != (int64_t *)0x0 & bVar5) == 0) {
      if (g_026fb830 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_490 = lVar1;
      local_488 = '\x01';
      FUN_01d5e6e0(uVar13,&local_490);
      if (local_48 == (int64_t *)0x0) {
        plVar9 = (int64_t *)0x0;
      }
      else if (local_40 == '\0') {
        FUN_00d50b00();
        bVar4 = 1;
        plVar9 = local_48;
      }
      else {
        local_40 = '\0';
        bVar4 = 1;
        plVar9 = local_48;
      }
      if ((local_488 != '\0') && (local_490 != 0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (int64_t *)0x0) {
        FUN_01d66e50();
        goto LAB_00282173;
      }
    }
    plVar9 = (int64_t *)0x0;
  }
LAB_00282173:
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_48 + 0x450))();
  uVar13 = extraout_XMM0_Qa_00;
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    uVar13 = FUN_00d50b20();
  }
  lVar2 = g_02708ea0;
  lVar1 = g_026fb838;
  plVar10 = local_48;
  bVar5 = bVar4;
  if (cVar3 == '\0') {
    if (g_026fb838 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_480 = lVar1;
    local_478 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_480);
    if (local_48 == plVar9) {
      plVar10 = plVar9;
      if ((bVar4 == 0) && (local_48 != (int64_t *)0x0)) {
        if (local_40 != '\0') goto LAB_002822c7;
        uVar13 = FUN_00d50b00();
        bVar5 = 1;
      }
LAB_0028249f:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          uVar13 = FUN_00d50b00();
        }
        bVar5 = 1;
        if ((bVar4 != 0) && (plVar9 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        goto LAB_0028249f;
      }
      if ((bVar4 != 0) && (plVar9 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
LAB_002822c7:
      local_40 = '\0';
      bVar5 = 1;
    }
    if ((local_478 != '\0') && (local_480 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026fb840;
    if (g_026fb840 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_470 = lVar1;
    local_468 = '\x01';
    FUN_01d5e6e0(uVar13,&local_470);
    if (local_48 == plVar10) {
      plVar9 = plVar10;
      if ((bVar5 == 0) && (local_48 != (int64_t *)0x0)) {
        if (local_40 != '\0') goto LAB_0028255c;
        FUN_00d50b00();
        bVar5 = 1;
      }
LAB_002826e7:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar9 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar12 = bVar5 != 0;
        bVar5 = 1;
        if ((bVar12) && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
          bVar5 = 1;
        }
        goto LAB_002826e7;
      }
      if ((bVar5 != 0) && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_0028255c:
      local_40 = '\0';
      bVar5 = 1;
    }
    if ((local_468 != '\0') && (local_470 != 0)) {
      FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      FUN_01d66e50();
    }
    plVar10 = g_026e1820;
    if (g_026e1820 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    dVar14 = (double)FUN_00e7d6f0();
    uVar7 = (uint64_t)(dVar14 * g_023907c0);
    dVar14 = dVar14 * g_023907c0 - g_023907c8;
    uVar13 = FUN_0071a120();
    if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
      uVar13 = FUN_00d50b00();
    }
    bVar4 = (byte)(((int64_t)dVar14 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
    local_60 = plVar10;
    local_58 = '\0';
    FUN_000175c0(uVar13,&local_60);
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 != (int64_t *)0x0) {
      local_40 = '\0';
      bVar4 = FUN_00c70bc0();
      FUN_00d50b20();
    }
    uVar13 = FUN_00d50b20();
    if (plVar10 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b20();
    }
    lVar1 = g_026decc0;
    plVar10 = plVar9;
    plVar8 = g_026e1810;
    if ((local_48 != (int64_t *)0x0 & bVar4) == 0) {
      if (g_026decc0 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_460 = lVar1;
      local_458 = '\x01';
      FUN_01d5e6e0(uVar13,&local_460);
      if (local_48 == plVar9) {
        if ((bVar5 == 0) && (local_48 != (int64_t *)0x0)) {
          if (local_40 != '\0') goto LAB_00282907;
          bVar5 = 1;
          FUN_00d50b00();
        }
LAB_002829bc:
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar12 = bVar5 != 0;
          plVar10 = local_48;
          bVar5 = 1;
          if ((bVar12) && (plVar9 != (int64_t *)0x0)) {
            bVar5 = 1;
            FUN_00d50b20();
          }
          goto LAB_002829bc;
        }
        plVar10 = local_48;
        if ((bVar5 != 0) && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_00282907:
        local_40 = '\0';
        bVar5 = 1;
      }
      if ((local_458 != '\0') && (local_460 != 0)) {
        FUN_00d50b20();
      }
      if (plVar10 == (int64_t *)0x0) goto LAB_00282a0a;
      FUN_01d66e50();
      plVar8 = g_026e1810;
    }
  }
  else {
    if (g_02708ea0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_450 = lVar2;
    local_448 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_450);
    if (local_48 == plVar9) {
      plVar8 = plVar9;
      if ((bVar4 == 0) && (plVar9 != (int64_t *)0x0)) {
        if (local_40 != '\0') goto LAB_002822a0;
        uVar13 = FUN_00d50b00();
        bVar5 = 1;
      }
LAB_00282381:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    else {
      plVar8 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          uVar13 = FUN_00d50b00();
        }
        bVar5 = 1;
        if ((bVar4 != 0) && (plVar9 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        goto LAB_00282381;
      }
      if ((bVar4 != 0) && (plVar9 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
LAB_002822a0:
      local_40 = '\0';
      bVar5 = 1;
    }
    if ((local_448 != '\0') && (local_450 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026fb848;
    if (g_026fb848 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_440 = lVar1;
    local_438 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_440);
    if (local_48 == plVar8) {
      plVar9 = plVar8;
      if ((bVar5 == 0) && (local_48 != (int64_t *)0x0)) {
        if (local_40 != '\0') goto LAB_0028243e;
        uVar13 = FUN_00d50b00();
        bVar5 = 1;
      }
LAB_002825c5:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    else {
      plVar9 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          uVar13 = FUN_00d50b00();
        }
        bVar12 = bVar5 != 0;
        bVar5 = 1;
        if ((bVar12) && (plVar8 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
          bVar5 = 1;
        }
        goto LAB_002825c5;
      }
      if ((bVar5 != 0) && (plVar8 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
LAB_0028243e:
      local_40 = '\0';
      bVar5 = 1;
    }
    if ((local_438 != '\0') && (local_440 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_02708f20;
    if (g_02708f20 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_430 = lVar1;
    local_428 = '\x01';
    FUN_01d5e6e0(uVar13,&local_430);
    if (local_48 == plVar9) {
      plVar10 = plVar9;
      if ((bVar5 == 0) && (local_48 != (int64_t *)0x0)) {
        if (local_40 != '\0') goto LAB_00282683;
        bVar5 = 1;
        FUN_00d50b00();
      }
LAB_00282966:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar12 = bVar5 != 0;
        bVar5 = 1;
        if ((bVar12) && (plVar9 != (int64_t *)0x0)) {
          bVar5 = 1;
          FUN_00d50b20();
        }
        goto LAB_00282966;
      }
      if ((bVar5 != 0) && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_00282683:
      local_40 = '\0';
      bVar5 = 1;
    }
    if ((local_428 != '\0') && (local_430 != 0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00282a0a:
      plVar10 = (int64_t *)0x0;
      plVar8 = g_026e1810;
    }
    else {
      FUN_01d66e50();
      plVar8 = g_026e1810;
    }
  }
  g_026e1810 = plVar8;
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar14 * g_023907c0);
  dVar14 = dVar14 * g_023907c0 - g_023907c8;
  uVar13 = FUN_0071a120();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    uVar13 = FUN_00d50b00();
  }
  bVar4 = (byte)(((int64_t)dVar14 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_58 = '\0';
  local_60 = plVar8;
  FUN_000175c0(uVar13,&local_60);
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    bVar4 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  uVar13 = FUN_00d50b20();
  if (plVar8 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b20();
  }
  lVar1 = g_026fb850;
  plVar9 = g_026e1800;
  bVar11 = bVar5;
  if ((local_48 != (int64_t *)0x0 & bVar4) == 0) {
    if (g_026fb850 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_420 = lVar1;
    local_418 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_420);
    if (local_48 == plVar10) {
      plVar9 = plVar10;
      if ((bVar5 == 0) && (local_48 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b00();
        bVar11 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar11 = 1;
      plVar9 = local_48;
      if ((bVar5 != 0) && (plVar10 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    if ((local_418 != '\0') && (local_420 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026de830;
    if (g_026de830 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_410 = lVar1;
    local_408 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_410);
    if (local_48 == plVar9) {
      plVar10 = plVar9;
      if ((bVar11 == 0) && (local_48 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b00();
        bVar11 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar12 = bVar11 != 0;
      plVar10 = local_48;
      bVar11 = 1;
      if ((bVar12) && (plVar9 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
        bVar11 = 1;
      }
    }
    if ((local_408 != '\0') && (local_410 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026fb858;
    if (g_026fb858 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_400 = lVar1;
    local_3f8 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_400);
    if (local_48 == plVar10) {
      plVar9 = plVar10;
      if ((bVar11 == 0) && (local_48 != (int64_t *)0x0)) {
        bVar11 = 1;
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar12 = bVar11 != 0;
      plVar9 = local_48;
      bVar11 = 1;
      if ((bVar12) && (plVar10 != (int64_t *)0x0)) {
        bVar11 = 1;
        uVar13 = FUN_00d50b20();
      }
    }
    if ((local_3f8 != '\0') && (local_400 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026fb860;
    if (g_026fb860 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_3f0 = lVar1;
    local_3e8 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_3f0);
    if (local_48 == plVar9) {
      plVar10 = plVar9;
      if ((bVar11 == 0) && (local_48 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b00();
        bVar11 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar12 = bVar11 != 0;
      plVar10 = local_48;
      bVar11 = 1;
      if ((bVar12) && (plVar9 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
        bVar11 = 1;
      }
    }
    if ((local_3e8 != '\0') && (local_3f0 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026deb68;
    if (g_026deb68 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_3e0 = lVar1;
    local_3d8 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_3e0);
    if (local_48 == plVar10) {
      plVar9 = plVar10;
      if ((bVar11 == 0) && (local_48 != (int64_t *)0x0)) {
        bVar11 = 1;
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar12 = bVar11 != 0;
      plVar9 = local_48;
      bVar11 = 1;
      if ((bVar12) && (plVar10 != (int64_t *)0x0)) {
        bVar11 = 1;
        uVar13 = FUN_00d50b20();
      }
    }
    if ((local_3d8 != '\0') && (local_3e0 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026fb868;
    if (g_026fb868 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_3d0 = lVar1;
    local_3c8 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_3d0);
    if (local_48 == plVar9) {
      plVar8 = plVar9;
      if ((bVar11 == 0) && (local_48 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b00();
        bVar11 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar12 = bVar11 != 0;
      plVar8 = local_48;
      bVar11 = 1;
      if ((bVar12) && (plVar9 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
        bVar11 = 1;
      }
    }
    if ((local_3c8 != '\0') && (local_3d0 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026fb870;
    if (g_026fb870 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_3c0 = lVar1;
    local_3b8 = '\x01';
    FUN_01d5e6e0(uVar13,&local_3c0);
    if (local_48 == plVar8) {
      plVar10 = plVar8;
      if ((bVar11 == 0) && (local_48 != (int64_t *)0x0)) {
        bVar11 = 1;
        FUN_00d50b00();
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar12 = bVar11 != 0;
      plVar10 = local_48;
      bVar11 = 1;
      if ((bVar12) && (plVar8 != (int64_t *)0x0)) {
        bVar11 = 1;
        FUN_00d50b20();
      }
    }
    if ((local_3b8 != '\0') && (local_3c0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (int64_t *)0x0) {
      plVar10 = (int64_t *)0x0;
      plVar9 = g_026e1800;
    }
    else {
      FUN_01d66e50();
      plVar9 = g_026e1800;
    }
  }
  g_026e1800 = plVar9;
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar14 * g_023907c0);
  dVar14 = dVar14 * g_023907c0 - g_023907c8;
  uVar13 = FUN_0071a120();
  if (local_48 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b00();
  }
  bVar5 = (byte)(((int64_t)dVar14 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_58 = '\0';
  local_60 = plVar9;
  FUN_000175c0(uVar13,&local_60);
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    bVar5 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  uVar13 = FUN_00d50b20();
  if (plVar9 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b20();
  }
  lVar1 = g_026fe450;
  plVar9 = g_026f6fd0;
  if ((local_48 != (int64_t *)0x0 & bVar5) == 0) {
    if (g_026fe450 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_3b0 = lVar1;
    local_3a8 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_3b0);
    if (local_48 == plVar10) {
      plVar9 = plVar10;
      bVar5 = bVar11;
      if ((bVar11 == 0) && (local_48 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b00();
        bVar5 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar5 = 1;
      plVar9 = local_48;
      if ((bVar11 != 0) && (plVar10 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    if ((local_3a8 != '\0') && (local_3b0 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026fb878;
    if (g_026fb878 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_3a0 = lVar1;
    local_398 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_3a0);
    if (local_48 == plVar9) {
      plVar10 = plVar9;
      if ((bVar5 == 0) && (local_48 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b00();
        bVar5 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar12 = bVar5 != 0;
      plVar10 = local_48;
      bVar5 = 1;
      if ((bVar12) && (plVar9 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
        bVar5 = 1;
      }
    }
    if ((local_398 != '\0') && (local_3a0 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026fb880;
    if (g_026fb880 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_390 = lVar1;
    local_388 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_390);
    if (local_48 == plVar10) {
      plVar9 = plVar10;
      if ((bVar5 == 0) && (local_48 != (int64_t *)0x0)) {
        bVar5 = 1;
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar12 = bVar5 != 0;
      plVar9 = local_48;
      bVar5 = 1;
      if ((bVar12) && (plVar10 != (int64_t *)0x0)) {
        bVar5 = 1;
        uVar13 = FUN_00d50b20();
      }
    }
    if ((local_388 != '\0') && (local_390 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026de5f0;
    if (g_026de5f0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_380 = lVar1;
    local_378 = '\x01';
    FUN_01d5e6e0(uVar13,&local_380);
    plVar8 = local_48;
    if (local_48 == plVar9) {
      plVar8 = plVar9;
      if ((bVar5 == 0) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
        bVar5 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar12 = bVar5 != 0;
      bVar5 = 1;
      if ((bVar12) && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
        bVar5 = 1;
      }
    }
    if ((local_378 != '\0') && (local_380 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027296a0;
    if (plVar8 != (int64_t *)0x0) {
      if (g_027296a0 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_026fe490;
      local_370 = lVar1;
      local_368 = '\x01';
      if (g_026fe490 != 0) {
        FUN_00d50b00();
      }
      local_360 = lVar2;
      local_358 = '\x01';
      local_350 = 0;
      local_348 = '\0';
      FUN_00d31230(&local_350,&local_360);
      local_68 = 0;
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      local_70 = local_48;
      FUN_01d64eb0();
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_348 != '\0') && (local_350 != 0)) {
        FUN_00d50b20();
      }
      if ((local_358 != '\0') && (local_360 != 0)) {
        FUN_00d50b20();
      }
      if ((local_368 != '\0') && (local_370 != 0)) {
        FUN_00d50b20();
      }
    }
    plVar10 = g_026d8938;
    if (g_026d8938 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    dVar14 = (double)FUN_00e7d6f0();
    uVar7 = (uint64_t)(dVar14 * g_023907c0);
    dVar14 = dVar14 * g_023907c0 - g_023907c8;
    uVar13 = FUN_0071a120();
    if (local_48 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b00();
    }
    bVar4 = (byte)(((int64_t)dVar14 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
    local_60 = plVar10;
    local_58 = '\0';
    FUN_000175c0(uVar13,&local_60);
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 != (int64_t *)0x0) {
      bVar4 = FUN_00c70bc0();
      FUN_00d50b20();
    }
    uVar13 = FUN_00d50b20();
    if (plVar10 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b20();
    }
    lVar1 = g_02708ed0;
    if ((local_48 != (int64_t *)0x0 & bVar4) == 0) {
      if (g_02708ed0 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_340 = lVar1;
      local_338 = '\x01';
      uVar13 = FUN_01d5e6e0(uVar13,&local_340);
      if (local_48 == plVar8) {
        plVar10 = plVar8;
        if ((bVar5 == 0) && (local_48 != (int64_t *)0x0)) {
          bVar5 = 1;
          uVar13 = FUN_00d50b00();
        }
      }
      else {
        if (local_48 != (int64_t *)0x0) {
          uVar13 = FUN_00d50b00();
        }
        bVar12 = bVar5 != 0;
        plVar10 = local_48;
        bVar5 = 1;
        if ((bVar12) && (plVar8 != (int64_t *)0x0)) {
          bVar5 = 1;
          uVar13 = FUN_00d50b20();
        }
      }
      if ((local_338 != '\0') && (local_340 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      if (plVar10 != (int64_t *)0x0) {
        uVar13 = FUN_01d66e50();
      }
      lVar1 = g_02708ec0;
      if (g_02708ec0 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_330 = lVar1;
      local_328 = '\x01';
      uVar13 = FUN_01d5e6e0(uVar13,&local_330);
      if (local_48 == plVar10) {
        plVar8 = plVar10;
        if ((bVar5 == 0) && (local_48 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b00();
          bVar5 = 1;
        }
      }
      else {
        if (local_48 != (int64_t *)0x0) {
          uVar13 = FUN_00d50b00();
        }
        bVar12 = bVar5 != 0;
        plVar8 = local_48;
        bVar5 = 1;
        if ((bVar12) && (plVar10 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
          bVar5 = 1;
        }
      }
      if ((local_328 != '\0') && (local_330 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      if (plVar8 == (int64_t *)0x0) {
        plVar8 = (int64_t *)0x0;
      }
      else {
        uVar13 = FUN_01d66e50();
      }
    }
    else {
      if (g_02708ed0 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_320 = lVar1;
      local_318 = '\x01';
      uVar13 = FUN_01d5e6e0(uVar13,&local_320);
      if (local_48 == plVar8) {
        plVar10 = plVar8;
        if ((bVar5 != 0) || (plVar8 == (int64_t *)0x0)) goto LAB_00283cd6;
        FUN_00d50b00();
        bVar5 = 1;
LAB_00283d16:
        FUN_01f27fe0();
        bVar4 = (**(code **)(*local_60 + 0x450))();
        uVar13 = extraout_XMM0_Qa_01;
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        bVar4 = bVar4 ^ 1;
      }
      else {
        if (local_48 != (int64_t *)0x0) {
          uVar13 = FUN_00d50b00();
        }
        bVar12 = bVar5 != 0;
        plVar10 = local_48;
        bVar5 = 1;
        if ((bVar12) && (plVar8 != (int64_t *)0x0)) {
          bVar5 = 1;
          uVar13 = FUN_00d50b20();
        }
LAB_00283cd6:
        plVar8 = plVar10;
        if (plVar8 != (int64_t *)0x0) goto LAB_00283d16;
        bVar4 = 0;
        plVar8 = (int64_t *)0x0;
      }
      if ((local_318 != '\0') && (local_320 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      lVar1 = g_026fb888;
      if (bVar4 != 0) {
        if (g_026fb888 != 0) {
          FUN_00d50b00();
        }
        local_310 = lVar1;
        local_308 = '\x01';
        FUN_01d65120();
        if ((local_308 != '\0') && (local_310 != 0)) {
          FUN_00d50b20();
        }
        local_2f8 = '\0';
        local_300 = 0;
        uVar13 = FUN_01d654e0();
        if ((local_2f8 != '\0') && (local_300 != 0)) {
          uVar13 = FUN_00d50b20();
        }
      }
    }
    lVar1 = g_026fb890;
    if (g_026fb890 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_2f0 = lVar1;
    local_2e8 = '\x01';
    FUN_01d5e6e0(uVar13,&local_2f0);
    if (local_48 == plVar8) {
      plVar10 = plVar8;
      bVar11 = bVar5;
      if ((bVar5 == 0) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
        bVar11 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar11 = 1;
      plVar10 = local_48;
      if ((bVar5 != 0) && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_2e8 != '\0') && (local_2f0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (int64_t *)0x0) {
      plVar10 = (int64_t *)0x0;
      plVar9 = g_026f6fd0;
    }
    else {
      FUN_01d66e50();
      plVar9 = g_026f6fd0;
    }
  }
  g_026f6fd0 = plVar9;
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar14 * g_023907c0);
  dVar14 = dVar14 * g_023907c0 - g_023907c8;
  uVar13 = FUN_0071a120();
  if (local_48 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b00();
  }
  bVar5 = (byte)(((int64_t)dVar14 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_58 = '\0';
  local_60 = plVar9;
  FUN_000175c0(uVar13,&local_60);
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    bVar5 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  uVar13 = FUN_00d50b20();
  if (plVar9 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b20();
  }
  lVar1 = g_02708f20;
  plVar9 = g_02708e90;
  if ((local_48 != (int64_t *)0x0 & bVar5) == 0) {
    if (g_02708f20 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_2e0 = lVar1;
    local_2d8 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_2e0);
    if (local_48 == plVar10) {
      plVar9 = plVar10;
      bVar5 = bVar11;
      if ((bVar11 == 0) && (local_48 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b00();
        bVar5 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar5 = 1;
      plVar9 = local_48;
      if ((bVar11 != 0) && (plVar10 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    if ((local_2d8 != '\0') && (local_2e0 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026dea90;
    if (g_026dea90 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_2d0 = lVar1;
    local_2c8 = '\x01';
    FUN_01d5e6e0(uVar13,&local_2d0);
    if (local_48 == plVar9) {
      plVar10 = plVar9;
      if ((bVar5 == 0) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
        bVar5 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar12 = bVar5 != 0;
      plVar10 = local_48;
      bVar5 = 1;
      if ((bVar12) && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
        bVar5 = 1;
      }
    }
    if ((local_2c8 != '\0') && (local_2d0 != 0)) {
      FUN_00d50b20();
    }
    bVar11 = bVar5;
    if (plVar10 == (int64_t *)0x0) {
      plVar10 = (int64_t *)0x0;
      plVar9 = g_02708e90;
    }
    else {
      FUN_01d66e50();
      plVar9 = g_02708e90;
    }
  }
  g_02708e90 = plVar9;
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar14 * g_023907c0);
  dVar14 = dVar14 * g_023907c0 - g_023907c8;
  uVar13 = FUN_0071a120();
  if (local_48 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b00();
  }
  bVar5 = (byte)(((int64_t)dVar14 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_58 = '\0';
  local_60 = plVar9;
  FUN_000175c0(uVar13,&local_60);
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    bVar5 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  uVar13 = FUN_00d50b20();
  if (plVar9 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b20();
  }
  lVar2 = g_026fb8b0;
  lVar1 = g_026deb80;
  plVar9 = local_48;
  bVar4 = bVar11;
  if ((local_48 != (int64_t *)0x0 & bVar5) == 0) {
    if (g_026fb8b0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_250 = lVar2;
    local_248 = '\x01';
    FUN_01d5e6e0(uVar13,&local_250);
    if (local_48 == plVar10) {
      plVar9 = plVar10;
      if ((bVar11 == 0) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
        bVar4 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar4 = 1;
      if ((bVar11 != 0) && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_248 != '\0') && (local_250 != 0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)0x0;
      plVar10 = g_026f6df0;
    }
    else {
      FUN_01d66e50();
      plVar10 = g_026f6df0;
    }
  }
  else {
    if (g_026deb80 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_2c0 = lVar1;
    local_2b8 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_2c0);
    if (local_48 == plVar10) {
      plVar8 = plVar10;
      if ((bVar11 == 0) && (plVar10 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b00();
        bVar4 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar4 = 1;
      plVar8 = local_48;
      if ((bVar11 != 0) && (plVar10 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    if ((local_2b8 != '\0') && (local_2c0 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026fb898;
    if (g_026fb898 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_2b0 = lVar1;
    local_2a8 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_2b0);
    if (local_48 == plVar8) {
      plVar10 = plVar8;
      if ((bVar4 == 0) && (local_48 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b00();
        bVar4 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar12 = bVar4 != 0;
      plVar10 = local_48;
      bVar4 = 1;
      if ((bVar12) && (plVar8 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
        bVar4 = 1;
      }
    }
    if ((local_2a8 != '\0') && (local_2b0 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026fb8a0;
    if (g_026fb8a0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_2a0 = lVar1;
    local_298 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_2a0);
    if (local_48 == plVar10) {
      plVar8 = plVar10;
      if ((bVar4 == 0) && (local_48 != (int64_t *)0x0)) {
        bVar4 = 1;
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar12 = bVar4 != 0;
      plVar8 = local_48;
      bVar4 = 1;
      if ((bVar12) && (plVar10 != (int64_t *)0x0)) {
        bVar4 = 1;
        uVar13 = FUN_00d50b20();
      }
    }
    if ((local_298 != '\0') && (local_2a0 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026dea68;
    if (g_026dea68 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_290 = lVar1;
    local_288 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_290);
    if (local_48 == plVar8) {
      plVar10 = plVar8;
      if ((bVar4 == 0) && (local_48 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b00();
        bVar4 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar12 = bVar4 != 0;
      plVar10 = local_48;
      bVar4 = 1;
      if ((bVar12) && (plVar8 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
        bVar4 = 1;
      }
    }
    if ((local_288 != '\0') && (local_290 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026fb8a8;
    if (g_026fb8a8 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_280 = lVar1;
    local_278 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_280);
    if (local_48 == plVar10) {
      plVar8 = plVar10;
      if ((bVar4 == 0) && (local_48 != (int64_t *)0x0)) {
        bVar4 = 1;
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar12 = bVar4 != 0;
      plVar8 = local_48;
      bVar4 = 1;
      if ((bVar12) && (plVar10 != (int64_t *)0x0)) {
        bVar4 = 1;
        uVar13 = FUN_00d50b20();
      }
    }
    if ((local_278 != '\0') && (local_280 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026dea90;
    if (g_026dea90 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_270 = lVar1;
    local_268 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_270);
    if (local_48 == plVar8) {
      plVar10 = plVar8;
      if ((bVar4 == 0) && (local_48 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b00();
        bVar4 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar12 = bVar4 != 0;
      plVar10 = local_48;
      bVar4 = 1;
      if ((bVar12) && (plVar8 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
        bVar4 = 1;
      }
    }
    if ((local_268 != '\0') && (local_270 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026dea98;
    if (g_026dea98 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_260 = lVar1;
    local_258 = '\x01';
    FUN_01d5e6e0(uVar13,&local_260);
    if (local_48 == plVar10) {
      plVar9 = plVar10;
      if ((bVar4 == 0) && (local_48 != (int64_t *)0x0)) {
        bVar4 = 1;
        FUN_00d50b00();
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar12 = bVar4 != 0;
      bVar4 = 1;
      if ((bVar12) && (plVar10 != (int64_t *)0x0)) {
        bVar4 = 1;
        FUN_00d50b20();
      }
    }
    if ((local_258 != '\0') && (local_260 != 0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)0x0;
      plVar10 = g_026f6df0;
    }
    else {
      FUN_01d66e50();
      plVar10 = g_026f6df0;
    }
  }
  g_026f6df0 = plVar10;
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar13 = FUN_0071a120();
  if (local_48 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b00();
  }
  local_58 = '\0';
  local_60 = plVar10;
  FUN_000175c0(uVar13,&local_60);
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (int64_t *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_00c716c0();
    FUN_00d50b20();
  }
  uVar13 = FUN_00d50b20();
  if (plVar10 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b20();
  }
  lVar1 = g_026deb40;
  plVar10 = plVar9;
  plVar8 = g_026f6df0;
  local_34 = bVar4;
  if (iVar6 < 3) {
    if (g_026deb40 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_240 = lVar1;
    local_238 = '\x01';
    FUN_01d5e6e0(uVar13,&local_240);
    if (local_48 == plVar9) {
      if ((bVar4 == 0) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
        local_34 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_34 = 1;
      plVar10 = local_48;
      if ((bVar4 != 0) && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_238 != '\0') && (local_240 != 0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (int64_t *)0x0) {
      plVar10 = (int64_t *)0x0;
      plVar8 = g_026f6df0;
    }
    else {
      FUN_01d66e50();
      plVar8 = g_026f6df0;
    }
  }
  g_026f6df0 = plVar8;
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar13 = FUN_0071a120();
  if (local_48 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b00();
  }
  local_58 = '\0';
  local_60 = plVar8;
  FUN_000175c0(uVar13,&local_60);
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (int64_t *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_00c716c0();
    FUN_00d50b20();
  }
  uVar13 = FUN_00d50b20();
  if (plVar8 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b20();
  }
  lVar1 = g_026deb30;
  plVar9 = plVar10;
  if (iVar6 < 2) {
    if (g_026deb30 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_230 = lVar1;
    local_228 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_230);
    if (local_48 == plVar10) {
      if ((local_34 == 0) && (local_48 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b00();
        local_34 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar5 = 1;
      bVar12 = local_34 != 0;
      plVar9 = local_48;
      local_34 = bVar5;
      if ((bVar12) && (plVar10 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    if ((local_228 != '\0') && (local_230 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)0x0;
    }
    else {
      uVar13 = FUN_01d66e50();
    }
  }
  lVar1 = g_026fb8b8;
  if (g_026fb8b8 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_220 = lVar1;
  local_218 = '\x01';
  uVar13 = FUN_01d5e6e0(uVar13,&local_220);
  if (local_48 == plVar9) {
    plVar10 = plVar9;
    if ((local_34 == 0) && (local_48 != (int64_t *)0x0)) {
      uVar13 = FUN_00d50b00();
      goto LAB_0028544f;
    }
  }
  else {
    if (local_48 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b00();
    }
    bVar12 = local_34 != 0;
    plVar10 = local_48;
    local_34 = 1;
    if ((bVar12) && (plVar9 != (int64_t *)0x0)) {
      uVar13 = FUN_00d50b20();
      plVar9 = local_48;
LAB_0028544f:
      local_34 = 1;
      plVar10 = plVar9;
    }
  }
  if ((local_218 != '\0') && (local_220 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  if (plVar10 != (int64_t *)0x0) {
    uVar13 = FUN_01d66e50();
  }
  lVar1 = g_026fb8c0;
  if (g_026fb8c0 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_210 = lVar1;
  local_208 = '\x01';
  FUN_01d5e6e0(uVar13,&local_210);
  if (local_48 == plVar10) {
    if ((local_34 == 0) && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b00();
      plVar9 = plVar10;
      goto LAB_00285598;
    }
  }
  else {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    plVar9 = local_48;
    if ((local_34 != 0) && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_00285598:
    local_34 = 1;
    plVar10 = plVar9;
  }
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  if (plVar10 != (int64_t *)0x0) {
    FUN_01d66e50();
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_48 + 0x450))();
  lVar1 = g_026fb8c8;
  plVar9 = plVar10;
  if (cVar3 != '\0') {
    uVar13 = extraout_XMM0_Qa_02;
    if (g_026fb8c8 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_200 = lVar1;
    local_1f8 = '\x01';
    FUN_01d5e6e0(uVar13,&local_200);
    if (local_48 == plVar10) {
      if ((local_34 == 0) && (local_48 != (int64_t *)0x0)) {
        local_34 = 1;
        FUN_00d50b00();
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar12 = local_34 != 0;
      plVar9 = local_48;
      local_34 = 1;
      if ((bVar12) && (plVar10 != (int64_t *)0x0)) {
        local_34 = 1;
        FUN_00d50b20();
      }
    }
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)0x0;
    }
    else {
      FUN_01d66e50();
    }
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_48 + 0x450))();
  lVar1 = g_026fb8d0;
  plVar8 = g_026e1800;
  plVar10 = plVar9;
  if (cVar3 == '\0') {
    uVar13 = extraout_XMM0_Qa_03;
    if (g_026fb8d0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_1f0 = lVar1;
    local_1e8 = '\x01';
    FUN_01d5e6e0(uVar13,&local_1f0);
    if (local_48 == plVar9) {
      if ((local_34 == 0) && (local_48 != (int64_t *)0x0)) {
        local_34 = 1;
        FUN_00d50b00();
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar5 = 1;
      bVar12 = local_34 != 0;
      plVar10 = local_48;
      local_34 = bVar5;
      if ((bVar12) && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_1e8 != '\0') && (local_1f0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (int64_t *)0x0) {
      plVar10 = (int64_t *)0x0;
      plVar8 = g_026e1838;
    }
    else {
      local_1d8 = '\0';
      local_1e0 = 0;
      FUN_01d654e0();
      if ((local_1d8 != '\0') && (local_1e0 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = g_026de5e8;
      if (g_026de5e8 != 0) {
        FUN_00d50b00();
      }
      local_1d0 = lVar1;
      local_1c8 = '\x01';
      FUN_01d65120();
      plVar8 = g_026e1838;
      if ((local_1c8 != '\0') && (local_1d0 != 0)) {
        FUN_00d50b20();
        plVar8 = g_026e1838;
      }
    }
  }
  else {
    if (g_026e1800 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    dVar14 = (double)FUN_00e7d6f0();
    uVar7 = (uint64_t)(dVar14 * g_023907c0);
    dVar14 = dVar14 * g_023907c0 - g_023907c8;
    uVar13 = FUN_0071a120();
    if (local_48 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b00();
    }
    bVar5 = (byte)(((int64_t)dVar14 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
    local_60 = plVar8;
    local_58 = '\0';
    FUN_000175c0(uVar13,&local_60);
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 != (int64_t *)0x0) {
      bVar5 = FUN_00c70bc0();
      FUN_00d50b20();
    }
    uVar13 = FUN_00d50b20();
    if (plVar8 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b20();
    }
    lVar1 = g_026fb8d8;
    plVar8 = g_026e1838;
    if ((local_48 != (int64_t *)0x0 & bVar5) == 0) {
      if (g_026fb8d8 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_1c0 = lVar1;
      local_1b8 = '\x01';
      uVar13 = FUN_01d5e6e0(uVar13,&local_1c0);
      if (local_48 == plVar9) {
        if ((local_34 == 0) && (plVar9 != (int64_t *)0x0)) {
          local_34 = 1;
          uVar13 = FUN_00d50b00();
        }
      }
      else {
        if (local_48 != (int64_t *)0x0) {
          uVar13 = FUN_00d50b00();
        }
        bVar5 = 1;
        bVar12 = local_34 != 0;
        plVar10 = local_48;
        local_34 = bVar5;
        if ((bVar12) && (plVar9 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      lVar1 = g_026fb8e0;
      if (g_026fb8e0 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_1b0 = lVar1;
      local_1a8 = '\x01';
      uVar13 = FUN_01d5e6e0(uVar13,&local_1b0);
      if (local_48 == plVar10) {
        plVar9 = plVar10;
        if ((local_34 == 0) && (local_48 != (int64_t *)0x0)) {
          local_34 = 1;
          uVar13 = FUN_00d50b00();
        }
      }
      else {
        if (local_48 != (int64_t *)0x0) {
          uVar13 = FUN_00d50b00();
        }
        bVar12 = local_34 != 0;
        plVar9 = local_48;
        local_34 = 1;
        if ((bVar12) && (plVar10 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
          local_34 = 1;
        }
      }
      if ((local_1a8 != '\0') && (local_1b0 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      if (plVar9 != (int64_t *)0x0) {
        uVar13 = FUN_01d66e50();
      }
      lVar1 = g_026fb8e8;
      if (g_026fb8e8 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_1a0 = lVar1;
      local_198 = '\x01';
      FUN_01d5e6e0(uVar13,&local_1a0);
      if (local_48 == plVar9) {
        plVar10 = plVar9;
        if ((local_34 == 0) && (local_48 != (int64_t *)0x0)) {
          local_34 = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar12 = local_34 != 0;
        plVar10 = local_48;
        local_34 = 1;
        if ((bVar12) && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
          local_34 = 1;
        }
      }
      if ((local_198 != '\0') && (local_1a0 != 0)) {
        FUN_00d50b20();
      }
      if (plVar10 == (int64_t *)0x0) {
        plVar10 = (int64_t *)0x0;
        plVar8 = g_026e1838;
      }
      else {
        FUN_01d66e50();
        plVar8 = g_026e1838;
      }
    }
  }
  g_026e1838 = plVar8;
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar14 * g_023907c0);
  dVar14 = dVar14 * g_023907c0 - g_023907c8;
  uVar13 = FUN_0071a120();
  if (local_48 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b00();
  }
  bVar5 = (byte)(((int64_t)dVar14 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_58 = '\0';
  local_60 = plVar8;
  FUN_000175c0(uVar13,&local_60);
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    bVar5 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  uVar13 = FUN_00d50b20();
  if (plVar8 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b20();
  }
  lVar1 = g_026dec80;
  plVar9 = g_026d85b0;
  if ((local_48 != (int64_t *)0x0 & bVar5) == 0) {
    if (g_026dec80 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_190 = lVar1;
    local_188 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_190);
    if (local_48 == plVar10) {
      plVar9 = plVar10;
      bVar5 = local_34;
      if ((local_34 == 0) && (local_48 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b00();
        bVar5 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar5 = 1;
      plVar9 = local_48;
      if ((local_34 != 0) && (plVar10 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    if ((local_188 != '\0') && (local_190 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026fb8f0;
    if (g_026fb8f0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_180 = lVar1;
    local_178 = '\x01';
    FUN_01d5e6e0(uVar13,&local_180);
    if (local_48 == plVar9) {
      plVar10 = plVar9;
      if ((bVar5 == 0) && (local_48 != (int64_t *)0x0)) {
        bVar5 = 1;
        FUN_00d50b00();
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar12 = bVar5 != 0;
      plVar10 = local_48;
      bVar5 = 1;
      if ((bVar12) && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
        bVar5 = 1;
      }
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    local_34 = bVar5;
    if (plVar10 == (int64_t *)0x0) {
      plVar10 = (int64_t *)0x0;
      plVar9 = g_026d85b0;
    }
    else {
      FUN_01d66e50();
      plVar9 = g_026d85b0;
    }
  }
  g_026d85b0 = plVar9;
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar14 * g_023907c0);
  dVar14 = dVar14 * g_023907c0 - g_023907c8;
  uVar13 = FUN_0071a120();
  if (local_48 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b00();
  }
  bVar5 = (byte)(((int64_t)dVar14 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_58 = '\0';
  local_60 = plVar9;
  FUN_000175c0(uVar13,&local_60);
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    bVar5 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  uVar13 = FUN_00d50b20();
  if (plVar9 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b20();
  }
  lVar1 = g_026de5d0;
  if ((local_48 != (int64_t *)0x0 & bVar5) == 0) {
    if (g_026de5d0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_170 = lVar1;
    local_168 = '\x01';
    FUN_01d5e6e0(uVar13,&local_170);
    if (local_48 == plVar10) {
      plVar9 = plVar10;
      if ((local_34 == 0) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
        local_34 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar5 = 1;
      bVar12 = local_34 != 0;
      plVar9 = local_48;
      local_34 = bVar5;
      if ((bVar12) && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    plVar10 = plVar9;
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (int64_t *)0x0) {
      plVar10 = (int64_t *)0x0;
    }
    else {
      FUN_01d66e50();
    }
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_48 + 0x450))();
  lVar1 = g_02708f00;
  if (cVar3 != '\0') {
    uVar13 = extraout_XMM0_Qa_04;
    if (g_02708f00 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_160 = lVar1;
    local_158 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_160);
    if (local_48 == plVar10) {
      plVar9 = plVar10;
      if ((local_34 == 0) && (local_48 != (int64_t *)0x0)) {
        local_34 = 1;
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar5 = 1;
      bVar12 = local_34 != 0;
      plVar9 = local_48;
      local_34 = bVar5;
      if ((bVar12) && (plVar10 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026de660;
    if (g_026de660 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_150 = lVar1;
    local_148 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_150);
    if (local_48 == plVar9) {
      plVar8 = plVar9;
      if ((local_34 == 0) && (local_48 != (int64_t *)0x0)) {
        local_34 = 1;
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar12 = local_34 != 0;
      plVar8 = local_48;
      local_34 = 1;
      if ((bVar12) && (plVar9 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
        local_34 = 1;
      }
    }
    if ((local_148 != '\0') && (local_150 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_02708f10;
    if (g_02708f10 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_140 = lVar1;
    local_138 = '\x01';
    FUN_01d5e6e0(uVar13,&local_140);
    if (local_48 == plVar8) {
      plVar10 = plVar8;
      if ((local_34 == 0) && (local_48 != (int64_t *)0x0)) {
        local_34 = 1;
        FUN_00d50b00();
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar12 = local_34 != 0;
      plVar10 = local_48;
      local_34 = 1;
      if ((bVar12) && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
        local_34 = 1;
      }
    }
    if ((local_138 != '\0') && (local_140 != 0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (int64_t *)0x0) {
      plVar10 = (int64_t *)0x0;
    }
    else {
      FUN_01d66e50();
    }
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_48 + 0x450))();
  lVar1 = g_02708ee0;
  if (cVar3 != '\0') {
    uVar13 = extraout_XMM0_Qa_05;
    if (g_02708ee0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_130 = lVar1;
    local_128 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_130);
    if (local_48 == plVar10) {
      plVar9 = plVar10;
      if ((local_34 == 0) && (local_48 != (int64_t *)0x0)) {
        local_34 = 1;
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar5 = 1;
      bVar12 = local_34 != 0;
      plVar9 = local_48;
      local_34 = bVar5;
      if ((bVar12) && (plVar10 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026de5c8;
    if (g_026de5c8 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_120 = lVar1;
    local_118 = '\x01';
    FUN_01d5e6e0(uVar13,&local_120);
    if (local_48 == plVar9) {
      plVar10 = plVar9;
      if ((local_34 == 0) && (local_48 != (int64_t *)0x0)) {
        local_34 = 1;
        FUN_00d50b00();
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar12 = local_34 != 0;
      plVar10 = local_48;
      local_34 = 1;
      if ((bVar12) && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
        local_34 = 1;
      }
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (int64_t *)0x0) {
      plVar10 = (int64_t *)0x0;
    }
    else {
      FUN_01d66e50();
    }
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_48 + 0x450))();
  lVar2 = g_02708ef0;
  lVar1 = g_026fb900;
  plVar9 = local_48;
  if (cVar3 == '\0') {
    uVar13 = extraout_XMM0_Qa_06;
    if (g_026fb900 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_e0 = lVar1;
    local_d8 = '\x01';
    FUN_01d5e6e0(uVar13,&local_e0);
    if (local_48 == plVar10) {
      plVar9 = plVar10;
      if ((local_34 == 0) && (local_48 != (int64_t *)0x0)) {
        local_34 = 1;
        FUN_00d50b00();
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar5 = 1;
      bVar12 = local_34 != 0;
      local_34 = bVar5;
      if ((bVar12) && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      FUN_01d66e50();
      plVar10 = g_026de5d8;
      goto joined_r0x00286ea7;
    }
  }
  else {
    uVar13 = extraout_XMM0_Qa_06;
    if (g_02708ef0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_110 = lVar2;
    local_108 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_110);
    if (local_48 == plVar10) {
      plVar8 = plVar10;
      if ((local_34 == 0) && (plVar10 != (int64_t *)0x0)) {
        local_34 = 1;
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar5 = 1;
      bVar12 = local_34 != 0;
      plVar8 = local_48;
      local_34 = bVar5;
      if ((bVar12) && (plVar10 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026fb8f8;
    if (g_026fb8f8 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_100 = lVar1;
    local_f8 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_100);
    if (local_48 == plVar8) {
      plVar10 = plVar8;
      if ((local_34 == 0) && (local_48 != (int64_t *)0x0)) {
        local_34 = 1;
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar12 = local_34 != 0;
      plVar10 = local_48;
      local_34 = 1;
      if ((bVar12) && (plVar8 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
        local_34 = 1;
      }
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026fb900;
    if (g_026fb900 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_f0 = lVar1;
    local_e8 = '\x01';
    FUN_01d5e6e0(uVar13,&local_f0);
    if (local_48 == plVar10) {
      plVar9 = plVar10;
      if ((local_34 == 0) && (local_48 != (int64_t *)0x0)) {
        local_34 = 1;
        FUN_00d50b00();
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar12 = local_34 != 0;
      local_34 = 1;
      if ((bVar12) && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
        local_34 = 1;
      }
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      FUN_01d66e50();
      plVar10 = g_026de5d8;
      goto joined_r0x00286ea7;
    }
  }
  plVar9 = (int64_t *)0x0;
  plVar10 = g_026de5d8;
joined_r0x00286ea7:
  g_026de5d8 = plVar10;
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar14 * g_023907c0);
  dVar14 = dVar14 * g_023907c0 - g_023907c8;
  uVar13 = FUN_0071a120();
  if (local_48 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b00();
  }
  bVar5 = (byte)(((int64_t)dVar14 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_58 = '\0';
  local_60 = plVar10;
  FUN_000175c0(uVar13,&local_60);
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    bVar5 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  uVar13 = FUN_00d50b20();
  if (plVar10 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b20();
  }
  lVar1 = g_026d80f8;
  plVar10 = plVar9;
  plVar8 = g_026de5d8;
  bVar4 = local_34;
  if ((local_48 != (int64_t *)0x0 & bVar5) == 0) {
    if (g_026d80f8 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_d0 = lVar1;
    local_c8 = '\x01';
    FUN_01d5e6e0(uVar13,&local_d0);
    if (local_48 == plVar9) {
      if ((local_34 == 0) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
        bVar4 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar4 = 1;
      plVar10 = local_48;
      if ((local_34 != 0) && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (int64_t *)0x0) {
      plVar10 = (int64_t *)0x0;
      plVar8 = g_026de5d8;
    }
    else {
      FUN_01d66e50();
      plVar8 = g_026de5d8;
    }
  }
  g_026de5d8 = plVar8;
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar14 * g_023907c0);
  dVar14 = dVar14 * g_023907c0 - g_023907c8;
  uVar13 = FUN_0071a120();
  if (local_48 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b00();
  }
  bVar5 = (byte)(((int64_t)dVar14 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_58 = '\0';
  local_60 = plVar8;
  FUN_000175c0(uVar13,&local_60);
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    bVar5 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  uVar13 = FUN_00d50b20();
  if (plVar8 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b20();
  }
  lVar1 = g_026d80e0;
  plVar9 = plVar10;
  plVar8 = g_026debd8;
  bVar11 = bVar4;
  if ((local_48 != (int64_t *)0x0 & bVar5) == 0) {
    if (g_026d80e0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_c0 = lVar1;
    local_b8 = '\x01';
    FUN_01d5e6e0(uVar13,&local_c0);
    if (local_48 == plVar10) {
      if ((bVar4 == 0) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
        bVar11 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar11 = 1;
      plVar9 = local_48;
      if ((bVar4 != 0) && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)0x0;
      plVar8 = g_026debd8;
    }
    else {
      FUN_01d66e50();
      plVar8 = g_026debd8;
    }
  }
  g_026debd8 = plVar8;
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar14 * g_023907c0);
  dVar14 = dVar14 * g_023907c0 - g_023907c8;
  uVar13 = FUN_0071a120();
  if (local_48 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b00();
  }
  bVar5 = (byte)(((int64_t)dVar14 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_58 = '\0';
  local_60 = plVar8;
  FUN_000175c0(uVar13,&local_60);
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    bVar5 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  uVar13 = FUN_00d50b20();
  if (plVar8 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b20();
  }
  lVar1 = g_026debe0;
  plVar10 = plVar9;
  plVar8 = g_026debe8;
  bVar4 = bVar11;
  if ((local_48 != (int64_t *)0x0 & bVar5) == 0) {
    if (g_026debe0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_b0 = lVar1;
    local_a8 = '\x01';
    FUN_01d5e6e0(uVar13,&local_b0);
    if (local_48 == plVar9) {
      if ((bVar11 == 0) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
        bVar4 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar4 = 1;
      plVar10 = local_48;
      if ((bVar11 != 0) && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (int64_t *)0x0) {
      plVar10 = (int64_t *)0x0;
      plVar8 = g_026debe8;
    }
    else {
      FUN_01d66e50();
      plVar8 = g_026debe8;
    }
  }
  g_026debe8 = plVar8;
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar14 * g_023907c0);
  dVar14 = dVar14 * g_023907c0 - g_023907c8;
  uVar13 = FUN_0071a120();
  if (local_48 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b00();
  }
  bVar5 = (byte)(((int64_t)dVar14 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_58 = '\0';
  local_60 = plVar8;
  FUN_000175c0(uVar13,&local_60);
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    bVar5 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  uVar13 = FUN_00d50b20();
  if (plVar8 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b20();
  }
  lVar1 = g_026debf0;
  plVar9 = plVar10;
  plVar8 = g_026f6ea0;
  local_34 = bVar4;
  if ((local_48 != (int64_t *)0x0 & bVar5) == 0) {
    if (g_026debf0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_a0 = lVar1;
    local_98 = '\x01';
    FUN_01d5e6e0(uVar13,&local_a0);
    if (local_48 == plVar10) {
      if ((bVar4 == 0) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
        local_34 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_34 = 1;
      plVar9 = local_48;
      if ((bVar4 != 0) && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)0x0;
      plVar8 = g_026f6ea0;
    }
    else {
      FUN_01d66e50();
      plVar8 = g_026f6ea0;
    }
  }
  g_026f6ea0 = plVar8;
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar14 * g_023907c0);
  dVar14 = dVar14 * g_023907c0 - g_023907c8;
  uVar13 = FUN_0071a120();
  if (local_48 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b00();
  }
  bVar5 = (byte)(((int64_t)dVar14 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_58 = '\0';
  local_60 = plVar8;
  FUN_000175c0(uVar13,&local_60);
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    bVar5 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  uVar13 = FUN_00d50b20();
  if (plVar8 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b20();
  }
  lVar1 = g_026dead0;
  if ((local_48 != (int64_t *)0x0 & bVar5) == 0) {
    if (g_026dead0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_90 = lVar1;
    local_88 = '\x01';
    uVar13 = FUN_01d5e6e0(uVar13,&local_90);
    if (local_48 == plVar9) {
      plVar10 = plVar9;
      if ((local_34 == 0) && (local_48 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b00();
        local_34 = 1;
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      bVar5 = 1;
      bVar12 = local_34 != 0;
      plVar10 = local_48;
      local_34 = bVar5;
      if ((bVar12) && (plVar9 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      uVar13 = FUN_01d66e50();
    }
    lVar1 = g_026deae0;
    if (g_026deae0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_80 = lVar1;
    local_78 = '\x01';
    FUN_01d5e6e0(uVar13,&local_80);
    if (local_48 == plVar10) {
      plVar9 = plVar10;
      if ((local_34 == 0) && (local_48 != (int64_t *)0x0)) {
        local_34 = 1;
        FUN_00d50b00();
      }
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar12 = local_34 != 0;
      plVar9 = local_48;
      local_34 = 1;
      if ((bVar12) && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
        local_34 = 1;
      }
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)0x0;
    }
    else {
      FUN_01d66e50();
    }
  }
  FUN_01d62660();
  if ((local_34 != 0) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

