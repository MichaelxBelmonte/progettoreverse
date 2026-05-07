// Function: FUN_01a52960
// Address: 01a52960
// Size: 8248 bytes
// Class: Unknown

uint64_t FUN_01a52960(int64_t *param_1,int64_t **param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int64_t *plVar8;
  undefined7 uVar14;
  void *pvVar9;
  int64_t lVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int64_t lVar13;
  void* pVar15;
  void*puVar16;
  int64_t **pplVar17;
  uint64_t uVar18;
  int64_t *arg1;
  int64_t *plVar19;
  uint64_t uVar20;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t extraout_XMM0_Qa_05;
  double dVar23;
  uint64_t uVar24;
  int64_t local_3e8;
  char local_3e0;
  int64_t local_3d8;
  char local_3d0;
  int64_t local_3c8;
  char local_3c0;
  uint64_t local_3b8;
  int64_t *local_3b0;
  char local_3a8;
  int64_t local_3a0;
  char local_398;
  int64_t *local_390;
  char local_388;
  int64_t *local_380;
  char local_378;
  int64_t *local_370;
  char local_368;
  int64_t *local_360;
  char local_358;
  int64_t *local_350;
  char local_348;
  int64_t *local_340;
  char local_338;
  int64_t *local_330;
  char local_328;
  int64_t *local_320;
  char local_318;
  int64_t *local_310;
  char local_308;
  int64_t *local_300;
  char local_2f8;
  int64_t *local_2f0;
  char local_2e8;
  int64_t *local_2e0;
  char local_2d8;
  int64_t *local_2d0;
  char local_2c8;
  int64_t *local_2c0;
  char local_2b8;
  int64_t local_2b0;
  char local_2a8;
  int64_t *local_2a0;
  char local_298;
  int64_t local_290;
  char local_288;
  int64_t local_280;
  char local_278;
  int64_t *local_270;
  char local_268;
  int64_t local_260;
  char local_258;
  int64_t *local_250;
  char local_248;
  int local_23c;
  int64_t local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t *local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t *local_1e0;
  int64_t *local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t *local_178;
  char local_170;
  int64_t *local_168;
  int64_t local_160;
  int64_t *local_158;
  uint64_t local_150;
  int local_148;
  int64_t *local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  uint64_t local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  uint64_t local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  uint local_3c;
  
  if (*param_2 == (int64_t *)0x0) {
    uVar18 = 0;
    goto LAB_01a52b64;
  }
  local_1f8 = param_1;
  uVar20 = FUN_01a58dc0();
  local_70 = local_168;
  if (local_168 == (int64_t *)0x0) {
    bVar2 = true;
    bVar1 = false;
    local_70 = (int64_t *)0x0;
LAB_01a52aba:
    local_88 = 0;
    local_58 = (int64_t *)0x0;
LAB_01a52ac6:
    local_260 = *arg1;
    local_258 = '\0';
    local_250 = *param_2;
    local_248 = '\0';
    uVar7 = FUN_01a58d30(uVar20,&local_250);
    uVar18 = (uint64_t)uVar7;
    if ((local_248 != '\0') && (local_250 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_258 != '\0') && (local_260 != 0)) {
      FUN_00d50b20();
    }
    goto joined_r0x01a52b41;
  }
  if ((((char)local_160 == '\0') && (FUN_00d50b00(), (char)local_160 != '\0')) &&
     (local_168 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" + *local_70
                      ))();
  if (cVar5 == '\0') {
    bVar1 = true;
    bVar2 = false;
    uVar18 = 0;
    goto LAB_01a52b51;
  }
  bVar1 = true;
  uVar20 = extraout_XMM0_Qa;
  if (((*arg1 == 0) || (iVar6 = FUN_01d3a5a0(), uVar20 = extraout_XMM0_Qa_00, iVar6 != 1)) ||
     (iVar6 = FUN_01d3b630(), uVar20 = extraout_XMM0_Qa_01, iVar6 != 1)) {
    bVar2 = false;
    bVar1 = true;
    goto LAB_01a52aba;
  }
  FUN_01a58dc0();
  uVar20 = (**(code **)(*local_178 + 0xe40))();
  plVar19 = local_50;
  local_58 = local_50;
  plVar11 = local_50;
  if (local_50 == (int64_t *)0x0) {
    local_58 = (int64_t *)0x0;
    local_88 = 0;
LAB_01a52ca9:
    pVar15 = (void*)plVar11;
    cVar5 = '\0';
  }
  else {
    if (local_48 == '\0') {
      plVar8 = (int64_t *)FUN_00d50b00();
      uVar20 = extraout_XMM0_Qa_02;
    }
    else {
      local_48 = '\0';
      plVar8 = local_50;
    }
    pVar15 = (void*)plVar11;
    uVar14 = (undefined7)((uint64_t)plVar8 >> 8);
    if (*(int *)((int64_t)plVar19 + 0xc) == 0) {
      local_88 = CONCAT71(uVar14,1);
      goto LAB_01a52ca9;
    }
    local_88 = CONCAT71(uVar14,1);
    FUN_00d23340();
    local_80 = CONCAT71(local_80._1_7_,(char)local_160);
    plVar19 = &local_80;
    if ((char)local_160 != '\0') {
      plVar19 = &local_160;
    }
    *(void*)plVar19 = 0;
    if (((char)local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar9 = _pthread_getspecific(pVar15);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar10 = FUN_00e8b990();
    if (lVar10 == 0) {
      cVar5 = '\0';
      uVar20 = extraout_XMM0_Qa_03;
    }
    else {
      FUN_00d23340();
      plVar19 = &local_a0;
      plVar11 = &local_160;
      if ((char)local_160 == '\0') {
        plVar11 = plVar19;
      }
      local_a0 = CONCAT71(local_a0._1_7_,(char)local_160);
      *(void*)plVar11 = 0;
      if (((char)local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar15 = (void*)plVar19;
      pvVar9 = _pthread_getspecific(pVar15);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      cVar5 = FUN_00cb2340();
      uVar20 = extraout_XMM0_Qa_04;
      if (((char)local_a0 != '\0') && (local_168 != (int64_t *)0x0)) {
        uVar20 = FUN_00d50b20();
      }
    }
    if (((char)local_80 != '\0') && (local_168 != (int64_t *)0x0)) {
      uVar20 = FUN_00d50b20();
    }
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    uVar20 = FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
    uVar20 = FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    bVar2 = false;
    goto LAB_01a52ac6;
  }
  iVar6 = FUN_01d3b620();
  if (iVar6 == 2) {
    cVar5 = (**(code **)(*local_70 + 0xd80))();
    if (cVar5 == '\0') {
      bVar1 = false;
      plVar19 = (int64_t *)0x0;
    }
    else {
      (**(code **)(*local_70 + 0xd50))();
      plVar19 = local_168;
      if (local_168 == (int64_t *)0x0) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
        if ((((char)local_160 == '\0') && (FUN_00d50b00(), (char)local_160 != '\0')) &&
           (local_168 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    local_3b0 = local_58;
    local_3a8 = '\0';
    FUN_01278c70();
    local_1d0 = 0;
    if ((char)local_160 == '\0') {
      if (local_168 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_160._0_1_ = '\0';
    }
    local_1d0 = '\x01';
    local_1d8 = local_168;
    local_398 = '\0';
    local_3a0 = 0;
    FUN_012762c0(g_0238fee8);
    if ((local_398 != '\0') && (local_3a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1d0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_3a8 != '\0') && (local_3b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar11 = local_168;
    if ((bVar1) && (plVar19 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_01a549ad;
  }
  (**(code **)(*local_70 + 0xa00))();
  pvVar9 = _pthread_getspecific(pVar15);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  local_1e0 = local_168;
  if ((char)local_160 == '\0') {
    if (((local_168 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_160 != '\0')) &&
       (local_168 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_160._0_1_ = '\0';
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_b8 = (int64_t *)0x0;
  plVar11 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar16 = &g_02572358;
  *plVar11 = (int64_t)&g_02572358;
  (*g_02572370)();
  plVar19 = local_58;
  local_168 = local_58;
  local_160._0_1_ = '\0';
  local_a8 = plVar11;
  FUN_00d214d0();
  if (((char)local_160 != '\0') && (plVar19 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (0 < *(int *)((int64_t)local_58 + 0xc)) {
    lVar10 = 0;
    param_2 = &local_50;
    do {
      lVar13 = *(int64_t *)(local_a8[2] + lVar10 * 8);
      if (lVar13 != 0) {
        FUN_00d50b00();
      }
      pvVar9 = _pthread_getspecific((void*)puVar16);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012641c0();
      if (((char)local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_168 != (int64_t *)0x0) {
        pvVar9 = _pthread_getspecific((void*)puVar16);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012641c0();
        local_168 = local_50;
        if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_160._0_1_ = '\0';
        FUN_00d235a0();
        if (((char)local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_168 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar9 = _pthread_getspecific((void*)puVar16);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012640f0();
      if (((char)local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_168 != (int64_t *)0x0) {
        pvVar9 = _pthread_getspecific((void*)puVar16);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012640f0();
        local_168 = local_50;
        if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_160._0_1_ = '\0';
        FUN_00d235a0();
        if (((char)local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_168 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (lVar13 != 0) {
        FUN_00d50b20();
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)((int64_t)local_58 + 0xc));
  }
  local_48 = '\0';
  local_50 = (int64_t *)0x0;
  FUN_01a58dc0();
  cVar5 = FUN_019a9840();
  if (((char)local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar4 = local_48;
  plVar19 = local_50;
  if (cVar5 == '\0') {
    if (local_50 == local_a8) {
      if (local_48 != '\0') goto LAB_01a5346c;
      FUN_00d50b00();
    }
    else {
      FUN_00d50b00();
      local_50 = local_a8;
      if ((cVar4 != '\0') && (plVar19 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_48 = '\x01';
    goto LAB_01a5346c;
  }
  local_390 = local_a8;
  local_388 = '\0';
  FUN_01278c70();
  cVar5 = local_48;
  plVar19 = local_50;
  if (local_50 == local_168) {
    if ((local_48 == '\0') && (local_168 != (int64_t *)0x0)) {
      if ((char)local_160 != '\0') goto LAB_01a533fa;
      FUN_00d50b00();
      goto LAB_01a53434;
    }
LAB_01a53438:
    if (((char)local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((char)local_160 == '\0') {
      if (local_168 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = local_168;
      if ((cVar5 != '\0') && (plVar19 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01a53434:
      local_48 = '\x01';
      goto LAB_01a53438;
    }
    local_50 = local_168;
    if ((local_48 != '\0') && (plVar19 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01a533fa:
    local_48 = '\x01';
    local_160._0_1_ = '\0';
  }
  if ((local_388 != '\0') && (local_390 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a5346c:
  local_380 = local_a8;
  local_378 = '\0';
  FUN_012a1f90();
  if ((local_378 != '\0') && (local_380 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)("/usr/lib/libobjc.A.dylib" + *local_70 + 0x18))();
  plVar19 = local_70;
  FUN_01d3abf0();
  FUN_01e466c0();
  local_3b8 = (**(code **)(*plVar19 + 0x930))();
  (**(code **)(*local_70 + 0xeb0))();
  local_23c = *(int *)((int64_t)local_58 + 0xc);
  local_60 = 0;
  local_3c = 0;
  local_68 = (int64_t *)0x0;
LAB_01a5352d:
  plVar19 = local_168;
  lVar10 = *local_1f8;
  cVar5 = (char)local_1f8[1];
  lVar13 = *arg1;
  if (lVar13 == lVar10) {
    if (cVar5 != '\0') {
      if (((char)arg1[1] == '\0') && (lVar10 != 0)) {
        cVar5 = '\x01';
        FUN_00d50b00();
        goto LAB_01a5358c;
      }
      goto LAB_01a53595;
    }
  }
  else {
    lVar3 = arg1[1];
    if ((cVar5 != '\0') && (lVar10 != 0)) {
      FUN_00d50b00();
    }
    *arg1 = lVar10;
    if (((char)lVar3 != '\0') && (lVar13 != 0)) {
      FUN_00d50b20();
    }
LAB_01a5358c:
    *(char *)(arg1 + 1) = cVar5;
LAB_01a53595:
    lVar13 = *arg1;
    lVar10 = lVar13;
  }
  if (lVar10 == 0) {
    (**(code **)(*local_70 + 0x658))();
    plVar11 = (int64_t *)*arg1;
    if (plVar11 == local_178) {
      if (((char)arg1[1] != '\0') || (local_178 == (int64_t *)0x0)) goto LAB_01a53614;
      if (local_170 != '\0') goto LAB_01a53607;
      FUN_00d50b00();
LAB_01a5366a:
      *(void*)(arg1 + 1) = 1;
      lVar13 = *arg1;
    }
    else {
      lVar13 = arg1[1];
      if (local_170 == '\0') {
        if (local_178 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)local_178;
        if (((char)lVar13 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01a5366a;
      }
      *arg1 = (int64_t)local_178;
      if (((char)lVar13 != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01a53607:
      *(void*)(arg1 + 1) = 1;
      local_170 = '\0';
LAB_01a53614:
      lVar13 = *arg1;
    }
    if (lVar13 != 0) goto LAB_01a5361d;
    plVar11 = (int64_t *)0x0;
LAB_01a5367f:
    if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)plVar11 == '\0') goto LAB_01a548be;
  }
  else {
LAB_01a5361d:
    iVar6 = FUN_01d3a5a0();
    plVar11 = (int64_t *)CONCAT71((int7)((uint64_t)lVar13 >> 8),iVar6 != 6);
    if (lVar10 == 0) goto LAB_01a5367f;
    if (iVar6 == 6) goto LAB_01a548be;
  }
  iVar6 = FUN_01d3a5a0();
  if (iVar6 == 5) {
    (**(code **)(*local_70 + 0x958))();
    cVar5 = (**(code **)(*local_168 + 0x3c8))();
    uVar14 = (undefined7)((uint64_t)lVar10 >> 8);
    plVar8 = local_168;
    if (cVar5 == '\0') {
      if (((char)local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01a5379f:
      (**(code **)(*local_70 + 0xd38))();
      plVar11 = local_b8;
      if (local_168 == local_b8) {
        plVar8 = plVar11;
        if (((char)local_60 == '\0') && (local_168 != (int64_t *)0x0)) {
          uVar18 = CONCAT71(uVar14,1);
          if ((char)local_160 != '\0') goto LAB_01a53904;
          uVar18 = CONCAT71(uVar14,1);
          local_60 = 0;
          FUN_00d50b00();
        }
        else {
          uVar18 = local_60 & 0xffffffff;
        }
      }
      else {
        if ((char)local_160 != '\0') {
          local_b8 = local_168;
          uVar18 = CONCAT71(uVar14,1);
          if (((char)local_60 == '\0') || (plVar11 == (int64_t *)0x0)) goto LAB_01a53822;
          FUN_00d50b20();
          goto LAB_01a53904;
        }
        if (local_168 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_b8 = local_168;
        uVar18 = CONCAT71(uVar14,1);
        if (((char)local_60 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (((char)local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar7 = FUN_01d3b590();
      if (((char)local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((uVar7 & 8) != 0) goto LAB_01a5379f;
      (**(code **)(*local_70 + 0xd40))();
      plVar11 = local_b8;
      if (local_168 == local_b8) {
        plVar8 = plVar11;
        if (((char)local_60 == '\0') && (local_168 != (int64_t *)0x0)) {
          uVar18 = CONCAT71(uVar14,1);
          if ((char)local_160 != '\0') goto LAB_01a53904;
          uVar18 = CONCAT71(uVar14,1);
          local_60 = 0;
          FUN_00d50b00();
        }
        else {
          uVar18 = local_60 & 0xffffffff;
        }
LAB_01a538ea:
        if (((char)local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((char)local_160 == '\0') {
          if (local_168 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_b8 = local_168;
          uVar18 = CONCAT71(uVar14,1);
          if (((char)local_60 != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01a538ea;
        }
        local_b8 = local_168;
        uVar18 = CONCAT71(uVar14,1);
        if (((char)local_60 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
          goto LAB_01a53904;
        }
LAB_01a53822:
        local_b8 = local_168;
        uVar18 = CONCAT71(uVar14,1);
      }
    }
LAB_01a53904:
    local_60 = uVar18 & 0xffffffff;
    local_370 = local_50;
    local_368 = '\0';
    uVar20 = FUN_01266200();
    if ((local_368 != '\0') && (local_370 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_360 = local_50;
    local_358 = '\0';
    uVar21 = FUN_012664b0();
    if ((local_358 != '\0') && (local_360 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar11 = local_70;
    FUN_01d3abf0();
    FUN_01e466c0();
    local_90 = (int64_t *)(**(code **)(*plVar11 + 0x930))();
    if (local_68 != (int64_t *)0x0) {
      (**(code **)(*local_68 + 0x3b8))();
    }
    if (local_23c != *(int *)((int64_t)local_58 + 0xc)) goto LAB_01a548be;
    FUN_00d23340();
    local_80 = CONCAT71(local_80._1_7_,(char)local_160);
    plVar11 = &local_80;
    plVar12 = &local_160;
    if ((char)local_160 == '\0') {
      plVar12 = plVar11;
    }
    *(void*)plVar12 = 0;
    if (((char)local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar9 = _pthread_getspecific((void*)plVar11);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar11 = (int64_t *)FUN_00e8b990();
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_b0 = plVar11;
    if (((char)local_80 != '\0') && (local_168 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_b0 == (int64_t *)0x0) goto LAB_01a548be;
    FUN_00083c20();
    pplVar17 = (int64_t **)&g_02802688;
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x360))();
      cVar5 = FUN_00e85ea0();
      pplVar17 = &local_b8;
      if (cVar5 == '\0') {
        pplVar17 = (int64_t **)&g_02802688;
      }
    }
    if (*pplVar17 == (int64_t *)0x0) {
      local_310 = local_58;
      local_308 = '\0';
      FUN_01273200();
      if ((char)local_160 == '\0') {
        if (((local_168 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_160 != '\0')) &&
           (local_168 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_160._0_1_ = '\0';
      }
      if ((local_308 != '\0') && (local_310 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar24 = (**(code **)(*plVar8 + 0x370))(local_3b8);
      uVar22 = (**(code **)(*plVar8 + 0x370))(local_90);
      FUN_00c9fe20();
      local_80 = CONCAT71(local_80._1_7_,(char)local_160);
      plVar11 = &local_160;
      if ((char)local_160 == '\0') {
        plVar11 = &local_80;
      }
      *(void*)plVar11 = 0;
      if (((char)local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)local_80 == '\0') {
        if (local_168 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_01a54083;
        }
      }
      else if (local_168 != (int64_t *)0x0) {
LAB_01a54083:
        local_160._0_1_ = '\0';
        local_168 = (int64_t *)0x0;
        local_158 = plVar19;
        local_150 = 0xffffffff;
        local_148 = 0;
        local_150._4_4_ = 0;
        while( true ) {
          if (local_150._4_4_ != 0) {
            if (local_150._4_4_ < 1) {
              iVar6 = -local_150._4_4_;
            }
            else {
              iVar6 = (int)local_150 - local_150._4_4_;
              local_150 = CONCAT44(local_150._4_4_,iVar6);
              FUN_00d23690();
              local_148 = local_148 + local_150._4_4_;
              iVar6 = 0;
            }
            local_150 = CONCAT44(iVar6,(int)local_150);
          }
          lVar10 = (int64_t)(int)local_150;
          iVar6 = (int)local_150 + 1;
          local_150 = CONCAT44(local_150._4_4_,iVar6);
          if (*(int *)((int64_t)local_158 + 0xc) <= iVar6) break;
          local_168 = *(int64_t **)(local_158[2] + 8 + lVar10 * 8);
          local_2f8 = '\0';
          local_300 = local_168;
          FUN_00805b20(local_158[2],&local_300);
          lVar10 = local_a0;
          local_190 = 0;
          if (local_98 == '\0') {
            if (local_a0 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_98 = '\0';
          }
          local_190 = '\x01';
          local_198 = lVar10;
          FUN_01278c70();
          lVar10 = local_80;
          local_1a0 = 0;
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          local_1a0 = '\x01';
          local_1a8 = lVar10;
          local_2e8 = '\0';
          local_2f0 = local_168;
          local_90 = (int64_t *)FUN_019c1040(uVar22);
          local_2d8 = '\0';
          local_2e0 = local_168;
          dVar23 = (double)FUN_019c1040(uVar24);
          FUN_01a527e0();
          FUN_0127f970((double)local_90 - dVar23);
          if ((local_2d8 != '\0') && (local_2e0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_2e8 != '\0') && (local_2f0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1a0 != '\0') && (local_1a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_190 != '\0') && (local_198 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_2f8 != '\0') && (local_300 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_000be170();
        FUN_00d50b20();
      }
      if (plVar19 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      local_1f0 = FUN_01a8fc90(local_3b8);
      lVar10 = FUN_01a8fc90(local_90);
      local_350 = local_58;
      local_348 = '\0';
      FUN_01273200();
      local_90 = local_168;
      if ((char)local_160 == '\0') {
        if (((local_168 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_160 != '\0')) &&
           (local_168 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_160._0_1_ = '\0';
      }
      if ((local_348 != '\0') && (local_350 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00c9fe20();
      local_80 = CONCAT71(local_80._1_7_,(char)local_160);
      plVar11 = &local_160;
      if ((char)local_160 == '\0') {
        plVar11 = &local_80;
      }
      *(void*)plVar11 = 0;
      if (((char)local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)local_80 == '\0') {
        if (local_168 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_01a53d23;
        }
      }
      else if (local_168 != (int64_t *)0x0) {
LAB_01a53d23:
        local_160._0_1_ = '\0';
        local_168 = (int64_t *)0x0;
        local_158 = plVar19;
        local_150 = 0xffffffff;
        local_148 = 0;
        local_150._4_4_ = 0;
        while( true ) {
          if (local_150._4_4_ != 0) {
            if (local_150._4_4_ < 1) {
              iVar6 = -local_150._4_4_;
            }
            else {
              iVar6 = (int)local_150 - local_150._4_4_;
              local_150 = CONCAT44(local_150._4_4_,iVar6);
              FUN_00d23690();
              local_148 = local_148 + local_150._4_4_;
              iVar6 = 0;
            }
            local_150 = CONCAT44(iVar6,(int)local_150);
          }
          lVar13 = (int64_t)(int)local_150;
          iVar6 = (int)local_150 + 1;
          local_150 = CONCAT44(local_150._4_4_,iVar6);
          if (*(int *)((int64_t)local_158 + 0xc) <= iVar6) break;
          local_168 = *(int64_t **)(local_158[2] + 8 + lVar13 * 8);
          local_338 = '\0';
          local_340 = local_168;
          local_80 = lVar10;
          FUN_00e7b970();
          FUN_019c10c0(local_1f0,local_80);
          if ((local_338 != '\0') && (local_340 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_328 = '\0';
          local_330 = local_168;
          uVar24 = FUN_01a527e0();
          param_2 = (int64_t **)FUN_019c10c0(local_1f0,uVar24);
          uVar24 = extraout_XMM0_Qa_05;
          if ((local_328 != '\0') && (local_330 != (int64_t *)0x0)) {
            uVar24 = FUN_00d50b20();
          }
          local_318 = '\0';
          local_320 = local_168;
          FUN_00805b20(uVar24,&local_320);
          lVar13 = local_a0;
          local_1b0 = 0;
          if (local_98 == '\0') {
            if (local_a0 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_98 = '\0';
          }
          local_1b0 = '\x01';
          local_1b8 = lVar13;
          FUN_01278c70();
          lVar13 = local_80;
          local_1c0 = 0;
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          local_1c0 = '\x01';
          local_1c8 = lVar13;
          FUN_01278f90(0,param_2);
          if ((local_1c0 != '\0') && (local_1c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1b0 != '\0') && (local_1b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_318 != '\0') && (local_320 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_000be170();
        FUN_00d50b20();
      }
      if (local_90 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    cVar5 = (**(code **)(*local_b0 + 0x3c0))();
    plVar19 = local_b0;
    if (cVar5 == '\0') {
      plVar11 = (int64_t *)0x0;
      param_2 = (int64_t **)0x0;
      if (local_68 != (int64_t *)0x0) goto LAB_01a543e5;
      local_68 = (int64_t *)0x0;
LAB_01a543d6:
      param_2 = (int64_t **)(uint64_t)local_3c;
    }
    else {
      FUN_00d50b00();
      plVar11 = local_b0;
      uVar14 = (undefined7)((uint64_t)param_2 >> 8);
      if (plVar19 == local_68) {
        if (cVar5 == '\0') goto LAB_01a543d6;
        if ((char)local_3c != '\0') {
          param_2 = (int64_t **)(uint64_t)local_3c;
          goto LAB_01a54404;
        }
        local_3c = 0;
        FUN_00d50b00();
        param_2 = (int64_t **)CONCAT71(uVar14,1);
LAB_01a54409:
        FUN_00d50b20();
      }
      else {
        param_2 = (int64_t **)CONCAT71(uVar14,1);
        if (cVar5 != '\0') {
          FUN_00d50b00();
        }
LAB_01a543e5:
        if (((char)local_3c != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_68 = plVar11;
        if (cVar5 != '\0') {
LAB_01a54404:
          if (plVar11 != (int64_t *)0x0) goto LAB_01a54409;
        }
      }
    }
    if (local_68 != (int64_t *)0x0) {
      local_2d0 = local_50;
      local_2c8 = '\0';
      local_90 = (int64_t *)FUN_01266200();
      if ((local_2c8 != '\0') && (local_2d0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_2c0 = local_50;
      local_2b8 = '\0';
      uVar24 = FUN_012664b0();
      if ((local_2b8 != '\0') && (local_2c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar10 = g_026f6f60;
      local_98 = 0;
      if (g_026f6f60 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar10;
      local_98 = '\x01';
      FUN_00d470c0(uVar20);
      lVar10 = g_0270b900;
      local_230 = 0;
      if (g_0270b900 != 0) {
        FUN_00d50b00();
      }
      local_238 = lVar10;
      local_230 = '\x01';
      FUN_00d470c0(uVar21);
      lVar10 = g_0270b908;
      local_220 = 0;
      if (g_0270b908 != 0) {
        FUN_00d50b00();
      }
      local_228 = lVar10;
      local_220 = '\x01';
      FUN_00d470c0(local_90);
      lVar10 = g_0270b910;
      local_210 = 0;
      if (g_0270b910 != 0) {
        FUN_00d50b00();
      }
      local_218 = lVar10;
      local_210 = '\x01';
      FUN_00d470c0(uVar24);
      lVar10 = g_0270b918;
      local_200 = 0;
      if (g_0270b918 != 0) {
        FUN_00d50b00();
      }
      local_208 = lVar10;
      local_200 = '\x01';
      FUN_01a55cd0(&local_1f0,&local_a0,&local_238,&local_3e8,&local_208);
      FUN_000b4da0();
      lVar10 = local_80;
      if (local_78 == '\0') {
        if (((local_80 != 0) && (FUN_00d50b00(), local_78 != '\0')) && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78 = '\0';
      }
      FUN_01a55e50();
      if ((local_200 != '\0') && (local_208 != 0)) {
        FUN_00d50b20();
      }
      if ((local_3c0 != '\0') && (local_3c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_210 != '\0') && (local_218 != 0)) {
        FUN_00d50b20();
      }
      if ((local_3d0 != '\0') && (local_3d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_220 != '\0') && (local_228 != 0)) {
        FUN_00d50b20();
      }
      if ((local_3e0 != '\0') && (local_3e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_230 != '\0') && (local_238 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1e8 != '\0') && (local_1f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      lVar13 = g_0270b7e0;
      if (g_0270b7e0 != 0) {
        FUN_00d50b00();
      }
      local_2b0 = lVar13;
      local_2a8 = '\x01';
      local_2a0 = local_70;
      local_298 = '\0';
      local_290 = lVar10;
      local_288 = '\0';
      FUN_00d40470(&local_290,&local_2a0,1,0);
      if ((local_288 != '\0') && (local_290 != 0)) {
        FUN_00d50b20();
      }
      if ((local_298 != '\0') && (local_2a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_2a8 != '\0') && (local_2b0 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  else {
    param_2 = (int64_t **)(uint64_t)local_3c;
  }
  uVar7 = (uint)param_2;
  local_3c = uVar7;
  if (*local_1f8 != 0) {
    *local_1f8 = 0;
    if ((char)local_1f8[1] != '\0') {
      FUN_00d50b20();
    }
    *(void*)(local_1f8 + 1) = 0;
    local_3c = uVar7;
  }
  goto LAB_01a5352d;
LAB_01a548be:
  local_280 = *arg1;
  local_278 = '\0';
  FUN_0199eb40();
  if ((local_278 != '\0') && (local_280 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_70 + 0xeb0))();
  local_270 = local_a8;
  local_268 = '\0';
  FUN_012a1fa0();
  if ((local_268 != '\0') && (local_270 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_3c != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_1e0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_a8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01a549ad:
  bVar2 = false;
  bVar1 = true;
  uVar18 = CONCAT71((int7)((uint64_t)plVar11 >> 8),1);
joined_r0x01a52b41:
  if (((char)local_88 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a52b51:
  if ((bVar1) && (!bVar2)) {
    FUN_00d50b20();
  }
LAB_01a52b64:
  return uVar18 & 0xffffffff;
}

