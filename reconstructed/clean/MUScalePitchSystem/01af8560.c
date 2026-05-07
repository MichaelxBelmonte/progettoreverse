// Function: FUN_01af8560
// Address: 01af8560
// Size: 24765 bytes
// Class: MUScalePitchSystem
// String references:
//   "%@ %@"
//   "com.celemony.scale.newscalemenu.%@"
//   "%@ %@ (%@)"
//   " = %@"
//   " ~ %@"
//   "%@          "
//   " ! %@"
//   "    %@"
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_01af8560(void* param_1)

{
  int64_t *****ppppplVar1;
  bool bVar2;
  bool bVar3;
  int64_t ******pppppplVar4;
  char cVar5;
  char cVar6;
  uint8_t uVar7;
  uint32_t uVar8;
  int iVar9;
  void *pvVar10;
  int64_t lVar11;
  void*puVar12;
  int64_t *plVar13;
  int64_t *******ppppppplVar14;
  int64_t *******ppppppplVar15;
  int64_t lVar16;
  void* pVar17;
  int64_t *******ppppppplVar18;
  int64_t *this_ptr;
  uint uVar19;
  int64_t *******unaff_R12;
  undefined7 uVar20;
  uint uVar21;
  uint64_t uVar22;
  int64_t *******unaff_R15;
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qb;
  uint extraout_XMM0_Dd;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  float fVar30;
  int64_t *local_958;
  char local_950;
  int64_t local_918;
  char local_910;
  int64_t ******local_908;
  char local_900;
  int64_t local_8f8;
  char local_8f0;
  int64_t local_8e8;
  char local_8e0;
  int64_t ******local_8d8;
  char local_8d0;
  int64_t *******local_8c8;
  char local_8c0;
  int64_t ******local_8b8;
  char local_8b0;
  int64_t local_8a8;
  char local_8a0;
  int64_t local_898;
  char local_890;
  int64_t local_888;
  char local_880;
  int64_t local_878;
  char local_870;
  int64_t local_868;
  char local_860;
  int64_t local_858;
  char local_850;
  int64_t local_848;
  char local_840;
  int64_t local_838;
  char local_830;
  int64_t ******local_828;
  char local_820;
  int64_t local_818;
  char local_810;
  int64_t *******local_808;
  char local_800;
  int64_t *******local_7f8;
  char local_7f0;
  int64_t local_7e8;
  char local_7e0;
  int64_t ******local_7d8;
  char local_7d0;
  int64_t local_7c8;
  char local_7c0;
  int64_t *******local_7b8;
  char local_7b0;
  int64_t local_7a8;
  char local_7a0;
  int64_t ******local_798;
  char local_790;
  int64_t local_788;
  char local_780;
  int64_t local_778;
  char local_770;
  int64_t local_768;
  char local_760;
  int64_t local_758;
  char local_750;
  int64_t local_748;
  char local_740;
  int64_t local_738;
  char local_730;
  int64_t local_728;
  char local_720;
  int64_t *******local_718;
  char local_710;
  int64_t local_708;
  char local_700;
  int64_t local_6f8;
  char local_6f0;
  int64_t local_6e8;
  char local_6e0;
  int64_t local_6d8;
  char local_6d0;
  int64_t local_6c8;
  char local_6c0;
  int64_t local_6b8;
  char local_6b0;
  int64_t local_6a8;
  char local_6a0;
  int64_t local_698;
  char local_690;
  int64_t local_688;
  char local_680;
  int64_t ******local_678;
  char local_670;
  int64_t local_668;
  char local_660;
  int64_t *******local_658;
  char local_650;
  int64_t local_648;
  char local_640;
  int64_t local_638;
  char local_630;
  int64_t local_628;
  char local_620;
  int64_t local_618;
  char local_610;
  int64_t local_608;
  char local_600;
  int64_t local_5f8;
  char local_5f0;
  int64_t local_5e8;
  char local_5e0;
  int64_t local_5d8;
  char local_5d0;
  int64_t local_5c8;
  char local_5c0;
  int64_t local_5b8;
  char local_5b0;
  int64_t local_5a8;
  char local_5a0;
  int64_t local_598;
  char local_590;
  int64_t local_588;
  char local_580;
  int64_t local_578;
  char local_570;
  int64_t local_568;
  char local_560;
  int64_t local_558;
  char local_550;
  int64_t local_548;
  char local_540;
  int64_t local_538;
  char local_530;
  int64_t *******local_528;
  char local_520;
  int64_t *******local_518;
  char local_510;
  int64_t local_508;
  char local_500;
  int64_t *******local_4f8;
  char local_4f0;
  void*local_4e8;
  char local_4e0;
  int64_t local_4d8;
  char local_4d0;
  int64_t local_4c8;
  char local_4c0;
  int64_t local_4b8;
  char local_4b0;
  int64_t local_4a8;
  char local_4a0;
  int64_t local_498;
  char local_490;
  int64_t local_488;
  char local_480;
  int64_t local_478;
  char local_470;
  int64_t local_468;
  char local_460;
  int64_t local_458;
  char local_450;
  int64_t local_448;
  char local_440;
  int64_t local_438;
  char local_430;
  int64_t local_428;
  char local_420;
  int64_t local_418;
  char local_410;
  void*local_408;
  char local_400;
  int64_t local_3f8;
  char local_3f0;
  int64_t local_3e8;
  char local_3e0;
  int64_t *******local_3d8;
  int64_t local_3d0;
  int64_t local_3c8;
  int64_t *local_3c0;
  char local_3b8;
  int64_t *****local_3b0;
  char local_3a8;
  int64_t *local_3a0;
  char local_398;
  int64_t *****local_390;
  char local_388;
  int64_t *local_380;
  char local_378;
  int64_t *local_370;
  char local_368;
  int64_t *****local_360;
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
  int64_t *******local_300;
  int64_t *******local_2f8;
  char local_2f0;
  int64_t *******local_2e8;
  char local_2e0;
  uint32_t local_2d4;
  int64_t *******local_2d0;
  char local_2c8;
  int64_t *******local_2c0;
  char local_2b8;
  int64_t *******local_2b0;
  char local_2a8;
  int64_t *******local_2a0;
  char local_298;
  int64_t *******local_290;
  char local_288;
  int64_t *******local_280;
  char local_278;
  int64_t *******local_270;
  char local_268;
  int64_t *******local_260;
  char local_258;
  int64_t *******local_250;
  char local_248;
  int64_t ******local_240;
  char local_238;
  int64_t *******local_230;
  char local_228;
  int64_t *******local_220;
  char local_218;
  int64_t *******local_210;
  char local_208;
  int64_t *******local_200;
  char local_1f8;
  int64_t *******local_1f0;
  char local_1e8;
  int64_t *******local_1e0;
  char local_1d8;
  int64_t *******local_1d0;
  char local_1c8;
  int64_t *******local_1c0;
  char local_1b8;
  int64_t *******local_1b0;
  char local_1a8;
  int64_t *******local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t ******local_180;
  char local_178;
  int64_t *******local_170;
  int64_t *******local_168;
  void*local_160;
  uint64_t local_158;
  uint64_t uStack_150;
  uint32_t local_148;
  uint32_t local_144;
  int64_t *******local_140;
  uint64_t local_138;
  uint uStack_12c;
  int64_t *******local_120;
  int64_t *******local_118;
  int64_t *******local_110;
  int64_t *******local_108;
  int64_t *******local_100;
  uint32_t local_f8;
  char local_f1;
  int64_t *******local_f0;
  int64_t *******local_e8;
  char local_e0;
  int64_t *local_d8;
  int64_t *******local_d0;
  char local_c8;
  int64_t *******local_c0;
  uint64_t local_b8;
  int64_t *******local_b0;
  uint local_a8;
  int64_t *******local_a0;
  uint64_t local_98;
  int local_90;
  uint32_t uStack_8c;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *******local_70;
  uint64_t local_68;
  int64_t *******local_60;
  int64_t *******local_58;
  char local_50;
  
  if (*(int *)((int64_t)this_ptr + 0x194) == -1000000) {
    return;
  }
  FUN_01ad3cb0();
  local_c0 = local_b0;
  if (((char)local_a8 == '\0') && (local_b0 != (int64_t *******)0x0)) {
    FUN_00d50b00();
  }
  pvVar10 = _pthread_getspecific(param_1);
  if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
    param_1 = (void*)local_c0;
  }
  FUN_0173b6f0();
  local_140 = local_b0;
  if (((char)local_a8 == '\0') && (local_b0 != (int64_t *******)0x0)) {
    FUN_00d50b00();
    if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar11 = g_027e3bd8;
  if (g_027e3bd8 != 0) {
    FUN_00d50b00();
  }
  lVar16 = g_027e3be0;
  local_3d0 = lVar11;
  if (g_027e3be0 != 0) {
    FUN_00d50b00();
  }
  local_3c8 = lVar16;
  FUN_017c0610();
  local_118 = local_b0;
  if ((char)local_a8 == '\0') {
    if (local_b0 != (int64_t *******)0x0) {
      FUN_00d50b00();
      if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_a8 = local_a8 & 0xffffff00;
  }
  FUN_017c0610();
  local_120 = local_b0;
  if ((char)local_a8 == '\0') {
    if (local_b0 != (int64_t *******)0x0) {
      FUN_00d50b00();
      if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_a8 = local_a8 & 0xffffff00;
  }
  puVar12 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  puVar12[0x27] = 0;
  *(void*)(puVar12 + 0x28) = 0;
  *(void*)((int64_t)puVar12 + 0x17c) = 0;
  puVar12[0x30] = 0;
  *(void*)(puVar12 + 0x31) = 0;
  puVar12[0x29] = 0;
  puVar12[0x2a] = 0;
  *(void*)((int64_t)puVar12 + 0x154) = 0;
  *(void*)((int64_t)puVar12 + 0x15c) = 0;
  puVar12[0x2d] = 0;
  puVar12[0x2e] = 0;
  *(void*)(puVar12 + 0x2f) = 0;
  *puVar12 = &g_02645580;
  puVar12[2] = &g_02645ef8;
  *(void*)((int64_t)puVar12 + 0x18c) = 0;
  FUN_00d500e0();
  local_160 = puVar12;
  uVar23 = FUN_01adad50();
  plVar13 = (int64_t *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*plVar13 + 0x18))();
  local_d8 = plVar13;
  FUN_01d5e5a0();
  pvVar10 = _pthread_getspecific(param_1);
  if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
    param_1 = (void*)local_c0;
  }
  FUN_0173b6f0();
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01736da0();
  local_110 = local_b0;
  if ((char)local_a8 == '\0') {
    if (local_b0 != (int64_t *******)0x0) {
      FUN_00d50b00();
      if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_a8 = local_a8 & 0xffffff00;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  FUN_016ab300();
  pvVar10 = _pthread_getspecific(param_1);
  if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
    param_1 = (void*)local_c0;
  }
  FUN_0173b6f0();
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar24 = FUN_01736d70();
  local_2d0 = local_d0;
  local_2c8 = 0;
  if (local_c8 == '\0') {
    if (local_d0 != (int64_t *******)0x0) {
      uVar24 = FUN_00d50b00();
    }
  }
  else {
    local_c8 = '\0';
  }
  local_2c8 = '\x01';
  FUN_016ac280(uVar24,&local_2d0);
  ppppppplVar15 = local_b0;
  if ((char)local_a8 == '\0') {
    if (local_b0 != (int64_t *******)0x0) {
      FUN_00d50b00();
      if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_a8 = local_a8 & 0xffffff00;
  }
  if ((local_2c8 != '\0') && (local_2d0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  local_170 = ppppppplVar15;
  pvVar10 = _pthread_getspecific(param_1);
  if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
    param_1 = (void*)local_c0;
  }
  uVar24 = FUN_01740240();
  local_3d8 = local_b0;
  if ((char)local_a8 == '\0') {
    if (local_b0 != (int64_t *******)0x0) {
      FUN_00d50b00();
      if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01af8bfc;
    }
LAB_01af8c81:
    local_144 = (uint32_t)CONCAT71((int7)((uint64_t)uVar24 >> 8),1);
    local_f8 = 0;
  }
  else {
    if (local_b0 == (int64_t *******)0x0) goto LAB_01af8c81;
LAB_01af8bfc:
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar24 = FUN_01736e30();
    local_f8 = (uint32_t)CONCAT71((int7)((uint64_t)uVar24 >> 8),local_3d8 == local_b0);
    if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    local_144 = 0;
  }
  local_f1 = '\0';
  FUN_01ae9a50(&local_f1,*(void*)((int64_t)this_ptr + 0x194));
  local_168 = local_b0;
  if (((char)local_a8 == '\0') && (local_b0 != (int64_t *******)0x0)) {
    FUN_00d50b00();
  }
  ppppppplVar14 = (int64_t *******)FUN_00e8fc40();
  FUN_00d4ff40();
  ppppppplVar18 = (int64_t *******)&g_02572358;
  *ppppppplVar14 = (int64_t ******)&g_02572358;
  (*g_02572370)();
  lVar11 = g_027cd5a0;
  local_f0 = ppppppplVar14;
  if (ppppppplVar15 == (int64_t *******)0x0) {
LAB_01af9138:
    if (((char)local_f8 == '\0') && (local_f1 == '\0')) {
      unaff_R15 = (int64_t *******)FUN_00e8fc40();
      FUN_00d4ff40();
      ppppppplVar18 = (int64_t *******)&g_026034e8;
      *unaff_R15 = (int64_t ******)&g_026034e8;
      unaff_R15[0xc] = (int64_t ******)0x0;
      unaff_R15[7] = (int64_t ******)0x0;
      unaff_R15[8] = (int64_t ******)0x0;
      unaff_R15[9] = (int64_t ******)0x0;
      unaff_R15[10] = (int64_t ******)0x0;
      *(void*)((int64_t)unaff_R15 + 0x55) = 0;
      (*g_02603500)();
      pvVar10 = _pthread_getspecific((void*)ppppppplVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_8c8 = local_c0;
      local_8c0 = '\0';
      FUN_017aa610();
      if ((local_8c0 != '\0') && (local_8c8 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      pvVar10 = _pthread_getspecific((void*)ppppppplVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01ad07f0();
      local_2f0 = 0;
      if (((char)local_a8 == '\0') && (local_b0 != (int64_t *******)0x0)) {
        FUN_00d50b00();
      }
      local_2f8 = local_b0;
      local_2f0 = '\x01';
      FUN_017aaae0();
      if ((local_2f0 != '\0') && (local_2f8 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      pvVar10 = _pthread_getspecific((void*)ppppppplVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar24 = FUN_00d9bb60();
      local_a0 = local_d0;
      local_a8 = 1;
      unaff_R12 = (int64_t *******)&g_024c5048;
      local_b0 = (int64_t *******)&g_024c5048;
      local_98 = local_98 & 0xffffffffffffff00;
      if (local_d0 != (int64_t *******)0x0) {
        uVar24 = FUN_00d50b00();
      }
      local_98 = CONCAT71(local_98._1_7_,1);
      FUN_00d8cb40(uVar24,&local_b0);
      local_2a0 = local_58;
      local_298 = 0;
      if (local_50 == '\0') {
        if (local_58 != (int64_t *******)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_298 = '\x01';
      FUN_017aab50();
      if ((local_298 != '\0') && (local_2a0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      local_b0 = (int64_t *******)&g_024c5048;
      if (((char)local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      local_a8 = local_a8 & 0xffffff00;
      local_b0 = unaff_R15;
      FUN_00d21140();
      if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (local_118 != (int64_t *******)0x0) {
      local_b0 = local_118;
      local_a8 = local_a8 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
    if (local_120 != (int64_t *******)0x0) {
      local_b0 = local_120;
      local_a8 = local_a8 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (g_027cd5a0 != 0) {
      FUN_00d50b00();
    }
    lVar16 = g_027e3bf0;
    if (g_027e3bf0 != 0) {
      FUN_00d50b00();
    }
    local_918 = lVar16;
    local_910 = '\x01';
    local_908 = (int64_t ******)0x0;
    local_900 = '\0';
    ppppppplVar18 = &local_908;
    FUN_00d31230(ppppppplVar18,&local_918);
    local_2c0 = local_b0;
    local_2b8 = 0;
    if ((char)local_a8 == '\0') {
      if (local_b0 != (int64_t *******)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a8 = local_a8 & 0xffffff00;
    }
    local_2b8 = '\x01';
    cVar5 = (*(*local_170)[10])();
    if ((local_2b8 != '\0') && (local_2c0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_900 != '\0') && (local_908 != (int64_t ******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_910 != '\0') && (local_918 != 0)) {
      FUN_00d50b20();
    }
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    lVar11 = g_027cd5a0;
    if (cVar5 == '\0') {
      if (g_027cd5a0 != 0) {
        FUN_00d50b00();
      }
      lVar16 = g_027cd5b0;
      local_8f8 = lVar11;
      local_8f0 = '\x01';
      if (g_027cd5b0 != 0) {
        FUN_00d50b00();
      }
      local_8e8 = lVar16;
      local_8e0 = '\x01';
      local_8d8 = (int64_t ******)0x0;
      local_8d0 = '\0';
      ppppppplVar18 = &local_8d8;
      FUN_00d31230(ppppppplVar18,&local_8e8);
      local_2b0 = local_b0;
      local_2a8 = 0;
      if ((char)local_a8 == '\0') {
        if (local_b0 != (int64_t *******)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a8 = local_a8 & 0xffffff00;
      }
      local_2a8 = '\x01';
      cVar5 = (*(*local_170)[10])();
      if ((local_2a8 != '\0') && (local_2b0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_8d0 != '\0') && (local_8d8 != (int64_t ******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_8e0 != '\0') && (local_8e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_8f0 != '\0') && (local_8f8 != 0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') goto LAB_01af9138;
      if (local_120 != (int64_t *******)0x0 && (char)local_f8 == '\0') {
        local_b0 = local_120;
        local_a8 = local_a8 & 0xffffff00;
        FUN_00d21140();
        if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      if (local_118 != (int64_t *******)0x0) {
        local_b0 = local_118;
        local_a8 = local_a8 & 0xffffff00;
        FUN_00d21140();
        if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_118 != (int64_t *******)0x0 && (char)local_f8 == '\0') {
        local_b0 = local_118;
        local_a8 = local_a8 & 0xffffff00;
        FUN_00d21140();
        if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      if (local_120 != (int64_t *******)0x0) {
        local_b0 = local_120;
        local_a8 = local_a8 & 0xffffff00;
        FUN_00d21140();
        if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  pvVar10 = _pthread_getspecific((void*)ppppppplVar18);
  ppppppplVar15 = local_c0;
  if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), ppppppplVar15 = local_c0, lVar11 != 0))
  {
    ppppppplVar18 = local_c0;
    ppppppplVar15 = (int64_t *******)local_c0[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
  }
  pVar17 = (void*)ppppppplVar18;
  local_148 = (*(*ppppppplVar15)[0x6e])();
  pvVar10 = _pthread_getspecific(pVar17);
  pppppplVar4 = g_026e3bc8;
  ppppppplVar15 = local_c0;
  if ((pvVar10 != (void *)0x0) &&
     (lVar11 = FUN_00e8b990(), pppppplVar4 = g_026e3bc8, ppppppplVar15 = local_c0, lVar11 != 0)) {
    ppppppplVar15 = (int64_t *******)local_c0[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
  }
  g_026e3bc8 = pppppplVar4;
  if (pppppplVar4 != (int64_t ******)0x0) {
    FUN_00d50b00();
  }
  local_8b0 = '\x01';
  local_8a8 = 0;
  local_8a0 = '\0';
  ppppppplVar18 = &local_8b8;
  local_8b8 = pppppplVar4;
  (*(*ppppppplVar15)[0x78])(ppppppplVar18,local_148,&local_8a8);
  local_108 = local_b0;
  if ((char)local_a8 == '\0') {
    if (local_b0 != (int64_t *******)0x0) {
      FUN_00d50b00();
      if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_a8 = local_a8 & 0xffffff00;
  }
  if ((local_8a0 != '\0') && (local_8a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_8b0 != '\0') && (local_8b8 != (int64_t ******)0x0)) {
    FUN_00d50b20();
  }
  pVar17 = (void*)ppppppplVar18;
  if (*(char *)((int64_t)this_ptr + 0x316) == '\0') {
LAB_01afaac4:
    local_68 = 0;
    local_60 = (int64_t *******)0x0;
    local_b8 = 0;
    local_70 = (int64_t *******)0x0;
  }
  else {
    pvVar10 = _pthread_getspecific(pVar17);
    if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
      ppppppplVar18 = local_c0;
    }
    FUN_0173ef00();
    local_300 = (int64_t *******)
                CONCAT44(local_300._4_4_,*(void*)((int64_t)local_b0 + 0xc));
    if ((char)local_a8 != '\0') {
      FUN_00d50b20();
    }
    pVar17 = (void*)ppppppplVar18;
    uVar21 = *(uint *)((int64_t)local_168 + 0xc);
    if ((int)uVar21 < 1) goto LAB_01afaac4;
    unaff_R15 = (int64_t *******)((uint64_t)uVar21 + 1);
    local_70 = (int64_t *******)0x0;
    local_b8 = 0;
    local_60 = (int64_t *******)0x0;
    local_68 = 0;
    do {
      uVar21 = uVar21 - 1;
      pvVar10 = _pthread_getspecific((void*)ppppppplVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017aa5e0();
      local_138 = local_b0;
      if (((char)local_a8 == '\0') && (local_b0 != (int64_t *******)0x0)) {
        FUN_00d50b00();
        if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar10 = _pthread_getspecific((void*)ppppppplVar18);
      if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        ppppppplVar18 = local_138;
      }
      FUN_0173b6f0();
      pvVar10 = _pthread_getspecific((void*)ppppppplVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736da0();
      ppppppplVar15 = local_70;
      uVar20 = (undefined7)((uint64_t)unaff_R12 >> 8);
      if (local_b0 == local_70) {
        if (((char)local_b8 == '\0') && (local_b0 != (int64_t *******)0x0)) {
          if ((char)local_a8 != '\0') goto LAB_01af989b;
          uVar19 = (uint)CONCAT71(uVar20,1);
          FUN_00d50b00();
        }
        else {
          uVar19 = (uint)local_b8;
        }
LAB_01af9900:
        if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        ppppppplVar15 = local_b0;
        if ((char)local_a8 == '\0') {
          if (local_b0 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
          uVar19 = (uint)CONCAT71(uVar20,1);
          if (((char)local_b8 != '\0') && (local_70 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01af9900;
        }
        if (((char)local_b8 != '\0') && (local_70 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
LAB_01af989b:
        local_a8 = local_a8 & 0xffffff00;
        uVar19 = (uint)CONCAT71(uVar20,1);
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      lVar11 = g_027e3c00;
      if (ppppppplVar15 == (int64_t *******)0x0) {
        local_b8 = (uint64_t)uVar19;
LAB_01af9ba3:
        local_70 = (int64_t *******)0x0;
      }
      else {
        if (g_027e3c00 != 0) {
          FUN_00d50b00();
        }
        local_898 = lVar11;
        local_890 = '\x01';
        cVar5 = FUN_00d90eb0();
        lVar11 = g_027e3c08;
        cVar6 = '\x01';
        if (cVar5 == '\0') {
          if (g_027e3c08 != 0) {
            FUN_00d50b00();
          }
          local_888 = lVar11;
          local_880 = '\x01';
          cVar5 = FUN_00d90eb0();
          lVar11 = g_027e3c10;
          cVar6 = '\x01';
          if (cVar5 == '\0') {
            if (g_027e3c10 != 0) {
              FUN_00d50b00();
            }
            local_878 = lVar11;
            local_870 = '\x01';
            cVar5 = FUN_00d90eb0();
            lVar11 = g_027e3c18;
            cVar6 = '\x01';
            if (cVar5 == '\0') {
              if (g_027e3c18 != 0) {
                FUN_00d50b00();
              }
              local_868 = lVar11;
              local_860 = '\x01';
              cVar5 = FUN_00d90eb0();
              lVar11 = g_027e3c20;
              cVar6 = '\x01';
              if (cVar5 == '\0') {
                if (g_027e3c20 != 0) {
                  FUN_00d50b00();
                }
                local_858 = lVar11;
                local_850 = '\x01';
                cVar5 = FUN_00d90eb0();
                lVar11 = g_027e3c28;
                cVar6 = '\x01';
                if (cVar5 == '\0') {
                  if (g_027e3c28 != 0) {
                    FUN_00d50b00();
                  }
                  local_848 = lVar11;
                  local_840 = '\x01';
                  cVar5 = FUN_00d90eb0();
                  lVar11 = g_027e3c30;
                  cVar6 = '\x01';
                  if (cVar5 == '\0') {
                    if (g_027e3c30 != 0) {
                      FUN_00d50b00();
                    }
                    local_838 = lVar11;
                    local_830 = '\x01';
                    cVar6 = FUN_00d90eb0();
                    if ((local_830 != '\0') && (local_838 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_840 != '\0') && (local_848 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_850 != '\0') && (local_858 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_860 != '\0') && (local_868 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_870 != '\0') && (local_878 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_880 != '\0') && (local_888 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_890 != '\0') && (local_898 != 0)) {
          FUN_00d50b20();
        }
        if (cVar6 != '\0') {
          if ((char)uVar19 != '\0') {
            FUN_00d50b20();
          }
          local_b8 = 0;
          goto LAB_01af9ba3;
        }
        local_b8 = (uint64_t)uVar19;
        local_70 = ppppppplVar15;
      }
      FUN_016ab300();
      pvVar10 = _pthread_getspecific((void*)ppppppplVar18);
      if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        ppppppplVar18 = local_138;
      }
      FUN_0173b6f0();
      pvVar10 = _pthread_getspecific((void*)ppppppplVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar24 = FUN_01736d70();
      ppppppplVar15 = local_d0;
      local_288 = 0;
      if (local_c8 == '\0') {
        if (local_d0 != (int64_t *******)0x0) {
          uVar24 = FUN_00d50b00();
        }
      }
      else {
        local_c8 = '\0';
      }
      local_288 = '\x01';
      local_290 = ppppppplVar15;
      FUN_016ac280(uVar24,&local_290);
      ppppppplVar15 = local_b0;
      if ((char)local_a8 == '\0') {
        if (local_b0 != (int64_t *******)0x0) {
          FUN_00d50b00();
          if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_a8 = local_a8 & 0xffffff00;
      }
      if ((local_288 != '\0') && (local_290 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      pppppplVar4 = g_026e3bc8;
      local_158 = ppppppplVar15;
      if (g_026e3bc8 != (int64_t ******)0x0) {
        FUN_00d50b00();
      }
      local_828 = pppppplVar4;
      local_820 = '\x01';
      local_818 = 0;
      local_810 = '\0';
      pvVar10 = _pthread_getspecific((void*)ppppppplVar18);
      ppppppplVar14 = local_c0;
      if ((pvVar10 != (void *)0x0) &&
         (lVar11 = FUN_00e8b990(), ppppppplVar14 = local_c0, lVar11 != 0)) {
        ppppppplVar18 = local_c0;
        ppppppplVar14 = (int64_t *******)local_c0[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
      }
      pVar17 = (void*)ppppppplVar18;
      uVar7 = (*(*ppppppplVar14)[0x80])();
      pvVar10 = _pthread_getspecific(pVar17);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar8 = FUN_01743720();
      FUN_017433e0(&local_818,&local_828,uVar7,uVar8);
      ppppppplVar18 = local_b0;
      if ((char)local_a8 == '\0') {
        if (local_b0 != (int64_t *******)0x0) {
          FUN_00d50b00();
          if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_a8 = local_a8 & 0xffffff00;
      }
      if ((local_810 != '\0') && (local_818 != 0)) {
        FUN_00d50b20();
      }
      if ((local_820 != '\0') && (local_828 != (int64_t ******)0x0)) {
        FUN_00d50b20();
      }
      local_100 = ppppppplVar18;
      uVar20 = (undefined7)((uint64_t)ppppppplVar15 >> 8);
      if (local_70 == (int64_t *******)0x0) {
        local_d0 = ppppppplVar18;
        local_e8 = ppppppplVar15;
        ppppppplVar18 = (int64_t *******)((int64_t)&MACH_HEADER.magic + 2);
        uVar24 = FUN_00083ea0(2,&local_e8);
        FUN_00d8cb40(uVar24,&local_b0);
        ppppppplVar14 = local_60;
        if (local_58 == local_60) {
          if (((char)local_68 == '\0') && (local_60 != (int64_t *******)0x0)) {
            if (local_50 != '\0') goto LAB_01afa0d1;
            uVar19 = (uint)CONCAT71(uVar20,1);
            FUN_00d50b00();
          }
          else {
            uVar19 = (uint)local_68;
          }
LAB_01afa1dc:
          if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          ppppppplVar14 = local_58;
          if (local_50 == '\0') {
            if (local_58 != (int64_t *******)0x0) {
              FUN_00d50b00();
            }
            uVar19 = (uint)CONCAT71(uVar20,1);
            if (((char)local_68 != '\0') && (local_60 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01afa1dc;
          }
          if (((char)local_68 != '\0') && (local_60 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
LAB_01afa0d1:
          local_50 = '\0';
          uVar19 = (uint)CONCAT71(uVar20,1);
        }
        local_b0 = (int64_t *******)&g_0253d630;
        if ((local_88 != '\0') && (CONCAT44(uStack_8c,local_90) != 0)) {
          FUN_00d50b20();
        }
        local_b0 = (int64_t *******)&g_024c5048;
        if (((char)local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_d0 = ppppppplVar18;
        local_e8 = ppppppplVar15;
        local_1f0 = local_70;
        ppppppplVar18 = (int64_t *******)&local_1f0;
        uVar24 = FUN_002bd7b0(ppppppplVar18,&local_e8,3);
        FUN_00d8cb40(uVar24,&local_b0);
        ppppppplVar14 = local_60;
        if (local_58 == local_60) {
          if (((char)local_68 == '\0') && (local_58 != (int64_t *******)0x0)) {
            if (local_50 != '\0') goto LAB_01afa079;
            uVar19 = (uint)CONCAT71(uVar20,1);
            FUN_00d50b00();
          }
          else {
            uVar19 = (uint)local_68;
          }
LAB_01afa140:
          if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          ppppppplVar14 = local_58;
          if (local_50 == '\0') {
            if (local_58 != (int64_t *******)0x0) {
              FUN_00d50b00();
            }
            uVar19 = (uint)CONCAT71(uVar20,1);
            if (((char)local_68 != '\0') && (local_60 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01afa140;
          }
          if (((char)local_68 != '\0') && (local_60 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
LAB_01afa079:
          local_50 = '\0';
          uVar19 = (uint)CONCAT71(uVar20,1);
        }
        local_b0 = (int64_t *******)&g_025df260;
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        local_b0 = (int64_t *******)&g_0253d630;
        if ((local_88 != '\0') && (CONCAT44(uStack_8c,local_90) != 0)) {
          FUN_00d50b20();
        }
        local_b0 = (int64_t *******)&g_024c5048;
        if (((char)local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar10 = _pthread_getspecific((void*)ppppppplVar18);
      if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        ppppppplVar18 = local_c0;
      }
      local_808 = local_138;
      local_800 = '\0';
      cVar5 = FUN_01750eb0();
      uVar24 = extraout_XMM0_Qa;
      if ((local_800 != '\0') && (local_808 != (int64_t *******)0x0)) {
        uVar24 = FUN_00d50b20();
      }
      cVar6 = (char)uVar19;
      if (cVar5 == '\0') {
        if ((int)local_300 < 2) {
          local_a8 = 1;
          local_b0 = (int64_t *******)&g_024c5048;
          local_98 = (uint64_t)local_98._1_7_ << 8;
          if (ppppppplVar14 != (int64_t *******)0x0) {
            uVar24 = FUN_00d50b00();
          }
          local_98 = CONCAT71(local_98._1_7_,1);
          local_a0 = ppppppplVar14;
          FUN_00d8cb40(uVar24,&local_b0);
          local_60 = local_58;
          ppppppplVar15 = local_58;
          if (local_58 == ppppppplVar14) {
            if ((cVar6 == '\0') && (local_58 != (int64_t *******)0x0)) {
              ppppppplVar18 = ppppppplVar14;
              if (local_50 != '\0') goto LAB_01afa49b;
              local_68 = CONCAT71((int7)((uint64_t)local_58 >> 8),1);
              FUN_00d50b00();
              local_60 = ppppppplVar14;
            }
            else {
              local_68 = (uint64_t)uVar19;
              local_60 = ppppppplVar14;
            }
LAB_01afa84a:
            if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_50 == '\0') {
              uVar24 = 0;
              if (local_58 != (int64_t *******)0x0) {
                uVar24 = FUN_00d50b00();
              }
              local_68 = CONCAT71((int7)((uint64_t)uVar24 >> 8),1);
              if ((cVar6 != '\0') && (ppppppplVar14 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01afa84a;
            }
            ppppppplVar18 = local_60;
            if ((cVar6 != '\0') && (ppppppplVar14 != (int64_t *******)0x0)) {
              ppppppplVar15 = (int64_t *******)FUN_00d50b20();
              ppppppplVar18 = local_60;
            }
LAB_01afa49b:
            local_60 = ppppppplVar18;
            local_50 = '\0';
            local_68 = CONCAT71((int7)((uint64_t)ppppppplVar15 >> 8),1);
          }
          local_b0 = (int64_t *******)&g_024c5048;
          if (((char)local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          lVar11 = g_027e3c38;
          local_7b8 = local_60;
          local_7b0 = '\0';
          if (g_027e3c38 != 0) {
            FUN_00d50b00();
          }
          local_7a8 = lVar11;
          local_7a0 = '\x01';
          local_798 = (int64_t ******)0x0;
          local_790 = '\0';
          local_398 = 0;
          FUN_00d50b00();
          local_398 = '\x01';
          ppppppplVar18 = &local_798;
          local_3a0 = this_ptr;
          FUN_01d5da60(ppppppplVar18,&local_7a8,&local_3a0);
          if ((local_398 != '\0') && (local_3a0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_790 != '\0') && (local_798 != (int64_t ******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_7a0 != '\0') && (local_7a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_7b0 != '\0') && (local_7b8 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          FUN_01d5e230();
          uVar24 = FUN_01d66da0();
          ppppplVar1 = local_168[2][uVar21];
          local_388 = 0;
          if (ppppplVar1 != (int64_t *****)0x0) {
            uVar24 = FUN_00d50b00();
          }
          ppppppplVar14 = g_027e3c40;
          local_388 = '\x01';
          local_390 = ppppplVar1;
          if (g_027e3c40 != (int64_t *******)0x0) {
            uVar24 = FUN_00d50b00();
          }
          local_b0 = ppppppplVar14;
          local_a8 = local_a8 & 0xffffff00;
          FUN_00ca0840(uVar24,&local_b0);
          unaff_R12 = local_100;
          ppppppplVar15 = local_158;
          if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          if (ppppppplVar14 != (int64_t *******)0x0) {
            FUN_00d50b20();
          }
          if ((local_388 != '\0') && (local_390 != (int64_t *****)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_68 = (uint64_t)uVar19;
          unaff_R12 = local_100;
          ppppppplVar15 = local_158;
          local_60 = ppppppplVar14;
        }
      }
      else {
        local_a8 = 1;
        local_b0 = (int64_t *******)&g_024c5048;
        local_98 = (uint64_t)local_98._1_7_ << 8;
        if (ppppppplVar14 != (int64_t *******)0x0) {
          uVar24 = FUN_00d50b00();
        }
        local_98 = CONCAT71(local_98._1_7_,1);
        local_a0 = ppppppplVar14;
        FUN_00d8cb40(uVar24,&local_b0);
        local_60 = local_58;
        ppppppplVar15 = local_58;
        if (local_58 == ppppppplVar14) {
          if ((cVar6 == '\0') && (ppppppplVar14 != (int64_t *******)0x0)) {
            ppppppplVar18 = ppppppplVar14;
            if (local_50 != '\0') goto LAB_01afa436;
            local_68 = CONCAT71((int7)((uint64_t)local_58 >> 8),1);
            FUN_00d50b00();
            local_60 = ppppppplVar14;
          }
          else {
            local_68 = (uint64_t)uVar19;
            local_60 = ppppppplVar14;
          }
LAB_01afa4fb:
          if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_50 == '\0') {
            uVar24 = 0;
            if (local_58 != (int64_t *******)0x0) {
              uVar24 = FUN_00d50b00();
            }
            local_68 = CONCAT71((int7)((uint64_t)uVar24 >> 8),1);
            if ((cVar6 != '\0') && (ppppppplVar14 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01afa4fb;
          }
          ppppppplVar18 = local_60;
          if ((cVar6 != '\0') && (ppppppplVar14 != (int64_t *******)0x0)) {
            ppppppplVar15 = (int64_t *******)FUN_00d50b20();
            ppppppplVar18 = local_60;
          }
LAB_01afa436:
          local_60 = ppppppplVar18;
          local_50 = '\0';
          local_68 = CONCAT71((int7)((uint64_t)ppppppplVar15 >> 8),1);
        }
        local_b0 = (int64_t *******)&g_024c5048;
        if (((char)local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        lVar11 = g_027e3c38;
        local_7f8 = local_60;
        local_7f0 = '\0';
        if (g_027e3c38 != 0) {
          FUN_00d50b00();
        }
        local_7e8 = lVar11;
        local_7e0 = '\x01';
        local_7d8 = (int64_t ******)0x0;
        local_7d0 = '\0';
        local_3b8 = 0;
        FUN_00d50b00();
        local_3b8 = '\x01';
        ppppppplVar18 = &local_7d8;
        local_3c0 = this_ptr;
        FUN_01d5da60(ppppppplVar18,&local_7e8,&local_3c0);
        if ((local_3b8 != '\0') && (local_3c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_7d0 != '\0') && (local_7d8 != (int64_t ******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_7e0 != '\0') && (local_7e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_7f0 != '\0') && (local_7f8 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d5e230();
        uVar24 = FUN_01d66da0();
        ppppplVar1 = local_168[2][uVar21];
        local_3a8 = 0;
        if (ppppplVar1 != (int64_t *****)0x0) {
          uVar24 = FUN_00d50b00();
        }
        ppppppplVar15 = g_027e3c40;
        local_3a8 = '\x01';
        local_3b0 = ppppplVar1;
        if (g_027e3c40 != (int64_t *******)0x0) {
          uVar24 = FUN_00d50b00();
        }
        local_b0 = ppppppplVar15;
        local_a8 = local_a8 & 0xffffff00;
        FUN_00ca0840(uVar24,&local_b0);
        if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        if (ppppppplVar15 != (int64_t *******)0x0) {
          FUN_00d50b20();
        }
        if ((local_3a8 != '\0') && (local_3b0 != (int64_t *****)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d5e230();
        uVar24 = FUN_01d66da0();
        lVar11 = g_027e3c48;
        if (g_027e3c48 != 0) {
          uVar24 = FUN_00d50b00();
        }
        ppppppplVar14 = g_027e3c50;
        local_7c8 = lVar11;
        local_7c0 = '\x01';
        if (g_027e3c50 != (int64_t *******)0x0) {
          uVar24 = FUN_00d50b00();
        }
        local_b0 = ppppppplVar14;
        local_a8 = local_a8 & 0xffffff00;
        FUN_00ca0840(uVar24,&local_b0);
        unaff_R12 = local_100;
        ppppppplVar15 = local_158;
        if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        if (ppppppplVar14 != (int64_t *******)0x0) {
          FUN_00d50b20();
        }
        if ((local_7c0 != '\0') && (local_7c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      if (unaff_R12 != (int64_t *******)0x0) {
        FUN_00d50b20();
      }
      if (ppppppplVar15 != (int64_t *******)0x0) {
        FUN_00d50b20();
      }
      if (local_138 != (int64_t *******)0x0) {
        FUN_00d50b20();
      }
      pVar17 = (void*)ppppppplVar18;
      unaff_R15 = (int64_t *******)((int64_t)unaff_R15 + -1);
    } while (1 < (int64_t)unaff_R15);
  }
  uVar22 = local_68;
  if ((char)local_f8 == '\0') {
    if (local_108 == local_60) {
      if (((char)local_68 == '\0') && (local_108 != (int64_t *******)0x0)) {
        local_68 = CONCAT71((int7)((uint64_t)local_108 >> 8),1);
        FUN_00d50b00();
      }
    }
    else {
      uVar24 = 0;
      if (local_108 != (int64_t *******)0x0) {
        uVar24 = FUN_00d50b00();
      }
      if (((char)local_68 == '\0') || (local_60 == (int64_t *******)0x0)) {
        local_68 = CONCAT71((int7)((uint64_t)uVar24 >> 8),1);
        local_60 = local_108;
      }
      else {
        local_60 = local_108;
        uVar24 = FUN_00d50b20();
        local_68 = CONCAT71((int7)((uint64_t)uVar24 >> 8),1);
      }
    }
  }
  else {
    if (local_110 == local_70) {
      if (((char)local_b8 == '\0') && (local_110 != (int64_t *******)0x0)) {
        FUN_00d50b00();
        goto LAB_01afab5b;
      }
      uVar22 = local_b8 & 0xffffffff;
      if (local_70 == (int64_t *******)0x0) goto LAB_01afaf1f;
LAB_01afab66:
      lVar11 = g_027e3c00;
      if (g_027e3c00 != 0) {
        FUN_00d50b00();
      }
      local_788 = lVar11;
      local_780 = '\x01';
      cVar5 = FUN_00d90eb0();
      lVar11 = g_027e3c08;
      cVar6 = '\x01';
      if (cVar5 == '\0') {
        if (g_027e3c08 != 0) {
          FUN_00d50b00();
        }
        local_778 = lVar11;
        local_770 = '\x01';
        cVar5 = FUN_00d90eb0();
        lVar11 = g_027e3c10;
        cVar6 = '\x01';
        if (cVar5 == '\0') {
          if (g_027e3c10 != 0) {
            FUN_00d50b00();
          }
          local_768 = lVar11;
          local_760 = '\x01';
          cVar5 = FUN_00d90eb0();
          lVar11 = g_027e3c18;
          cVar6 = '\x01';
          if (cVar5 == '\0') {
            if (g_027e3c18 != 0) {
              FUN_00d50b00();
            }
            local_758 = lVar11;
            local_750 = '\x01';
            cVar5 = FUN_00d90eb0();
            lVar11 = g_027e3c20;
            cVar6 = '\x01';
            if (cVar5 == '\0') {
              if (g_027e3c20 != 0) {
                FUN_00d50b00();
              }
              local_748 = lVar11;
              local_740 = '\x01';
              cVar5 = FUN_00d90eb0();
              lVar11 = g_027e3c28;
              cVar6 = '\x01';
              if (cVar5 == '\0') {
                if (g_027e3c28 != 0) {
                  FUN_00d50b00();
                }
                local_738 = lVar11;
                local_730 = '\x01';
                cVar5 = FUN_00d90eb0();
                lVar11 = g_027e3c30;
                cVar6 = '\x01';
                if (cVar5 == '\0') {
                  if (g_027e3c30 != 0) {
                    FUN_00d50b00();
                  }
                  local_728 = lVar11;
                  local_720 = '\x01';
                  cVar6 = FUN_00d90eb0();
                  if ((local_720 != '\0') && (local_728 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_730 != '\0') && (local_738 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_740 != '\0') && (local_748 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_750 != '\0') && (local_758 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_760 != '\0') && (local_768 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_770 != '\0') && (local_778 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_780 != '\0') && (local_788 != 0)) {
        FUN_00d50b20();
      }
      if (cVar6 == '\0') goto LAB_01afaf25;
      if ((char)uVar22 == '\0') {
        local_b8 = 0;
        local_70 = (int64_t *******)0x0;
      }
      else {
        local_b8 = 0;
        unaff_R15 = (int64_t *******)(local_68 & 0xffffffff);
        local_70 = (int64_t *******)0x0;
        FUN_00d50b20();
      }
    }
    else {
      if (local_110 != (int64_t *******)0x0) {
        unaff_R15 = (int64_t *******)(local_68 & 0xffffffff);
        FUN_00d50b00();
      }
      uVar22 = local_68;
      ppppppplVar18 = local_110;
      if (((char)local_b8 != '\0') && (ppppppplVar18 = local_110, local_70 != (int64_t *******)0x0)
         ) {
        local_70 = local_110;
        FUN_00d50b20();
LAB_01afab5b:
        unaff_R15 = (int64_t *******)(uVar22 & 0xffffffff);
        ppppppplVar18 = local_70;
      }
      local_70 = ppppppplVar18;
      uVar22 = CONCAT71((int7)((uint64_t)ppppppplVar15 >> 8),1);
      if (local_70 != (int64_t *******)0x0) goto LAB_01afab66;
LAB_01afaf1f:
      local_70 = (int64_t *******)0x0;
LAB_01afaf25:
      local_b8 = uVar22 & 0xffffffff;
    }
    FUN_016ab300();
    pvVar10 = _pthread_getspecific(pVar17);
    if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
      pVar17 = (void*)local_c0;
    }
    FUN_0173b6f0();
    pvVar10 = _pthread_getspecific(pVar17);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar24 = FUN_01736d70();
    local_280 = local_d0;
    local_278 = 0;
    if (local_c8 == '\0') {
      if (local_d0 != (int64_t *******)0x0) {
        uVar24 = FUN_00d50b00();
      }
    }
    else {
      local_c8 = '\0';
    }
    local_278 = '\x01';
    FUN_016ac280(uVar24,&local_280);
    ppppppplVar15 = local_b0;
    if ((char)local_a8 == '\0') {
      if (local_b0 != (int64_t *******)0x0) {
        FUN_00d50b00();
        if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_a8 = local_a8 & 0xffffff00;
    }
    if ((local_278 != '\0') && (local_280 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    uVar20 = (undefined7)((uint64_t)unaff_R15 >> 8);
    if (local_70 == (int64_t *******)0x0) {
      local_d0 = local_108;
      local_e8 = ppppppplVar15;
      uVar24 = FUN_00083ea0(2,&local_e8);
      FUN_00d8cb40(uVar24,&local_b0);
      ppppppplVar18 = local_58;
      if (local_58 == local_60) {
        if (((char)local_68 == '\0') && (local_60 != (int64_t *******)0x0)) {
          ppppppplVar18 = local_60;
          if (local_50 != '\0') goto LAB_01afb2ce;
          uVar22 = CONCAT71(uVar20,1);
          FUN_00d50b00();
        }
        else {
          uVar22 = local_68 & 0xffffffff;
        }
LAB_01afb3e7:
        if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
          uVar22 = CONCAT71(uVar20,1);
          if (((char)local_68 == '\0') || (local_60 == (int64_t *******)0x0)) {
            local_60 = ppppppplVar18;
          }
          else {
            local_60 = ppppppplVar18;
            FUN_00d50b20();
          }
          goto LAB_01afb3e7;
        }
        if (((char)local_68 != '\0') && (local_60 != (int64_t *******)0x0)) {
          local_60 = local_58;
          FUN_00d50b20();
        }
LAB_01afb2ce:
        local_50 = '\0';
        uVar22 = CONCAT71(uVar20,1);
        local_60 = ppppppplVar18;
      }
      local_b0 = (int64_t *******)&g_0253d630;
      if ((local_88 != '\0') && (CONCAT44(uStack_8c,local_90) != 0)) {
        FUN_00d50b20();
      }
      local_b0 = (int64_t *******)&g_024c5048;
      if (((char)local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_d0 = local_108;
      local_e8 = ppppppplVar15;
      local_1f0 = local_70;
      uVar24 = FUN_002bd7b0(&local_1f0,&local_e8,3);
      FUN_00d8cb40(uVar24,&local_b0);
      ppppppplVar18 = local_58;
      if (local_58 == local_60) {
        if (((char)local_68 == '\0') && (local_60 != (int64_t *******)0x0)) {
          ppppppplVar18 = local_60;
          if (local_50 != '\0') goto LAB_01afb254;
          uVar22 = CONCAT71(uVar20,1);
          FUN_00d50b00();
        }
        else {
          uVar22 = local_68 & 0xffffffff;
        }
LAB_01afb34c:
        if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
          uVar22 = CONCAT71(uVar20,1);
          if (((char)local_68 == '\0') || (local_60 == (int64_t *******)0x0)) {
            local_60 = ppppppplVar18;
          }
          else {
            local_60 = ppppppplVar18;
            FUN_00d50b20();
          }
          goto LAB_01afb34c;
        }
        if (((char)local_68 != '\0') && (local_60 != (int64_t *******)0x0)) {
          local_60 = local_58;
          FUN_00d50b20();
        }
LAB_01afb254:
        local_50 = '\0';
        uVar22 = CONCAT71(uVar20,1);
        local_60 = ppppppplVar18;
      }
      local_b0 = (int64_t *******)&g_025df260;
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      local_b0 = (int64_t *******)&g_0253d630;
      if ((local_88 != '\0') && (CONCAT44(uStack_8c,local_90) != 0)) {
        FUN_00d50b20();
      }
      local_b0 = (int64_t *******)&g_024c5048;
      if (((char)local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
    if (ppppppplVar15 == (int64_t *******)0x0) {
      local_68 = uVar22 & 0xffffffff;
    }
    else {
      FUN_00d50b20();
      local_68 = uVar22 & 0xffffffff;
    }
  }
  FUN_01d5e230();
  ppppppplVar18 = local_b0;
  if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (ppppppplVar18 != (int64_t *******)0x0) {
    FUN_01d5dc80();
  }
  local_2d4 = FUN_01d5b230();
  ppppppplVar18 = local_60;
  local_a8 = 1;
  local_b0 = (int64_t *******)&g_024c5048;
  local_98 = local_98 & 0xffffffffffffff00;
  uVar24 = extraout_XMM0_Qa_00;
  if (local_60 != (int64_t *******)0x0) {
    uVar24 = FUN_00d50b00();
  }
  local_a0 = ppppppplVar18;
  local_98 = CONCAT71(local_98._1_7_,1);
  uVar24 = FUN_00d8cb40(uVar24,&local_b0);
  ppppppplVar14 = local_58;
  uVar20 = (undefined7)((uint64_t)ppppppplVar15 >> 8);
  if (local_58 == ppppppplVar18) {
    if (((char)local_68 == '\0') && (local_58 != (int64_t *******)0x0)) {
      ppppppplVar14 = local_60;
      if (local_50 != '\0') goto LAB_01afb55d;
      uVar22 = CONCAT71(uVar20,1);
      FUN_00d50b00();
    }
    else {
      uVar22 = local_68 & 0xffffffff;
    }
  }
  else {
    if (local_50 != '\0') {
      if (((char)local_68 != '\0') && (local_60 != (int64_t *******)0x0)) {
        local_60 = local_58;
        uVar24 = FUN_00d50b20();
      }
LAB_01afb55d:
      local_50 = '\0';
      local_68 = CONCAT71((int7)((uint64_t)uVar24 >> 8),1);
      local_60 = ppppppplVar14;
      goto joined_r0x01afb608;
    }
    if (local_58 != (int64_t *******)0x0) {
      FUN_00d50b00();
    }
    uVar22 = CONCAT71(uVar20,1);
    if (((char)local_68 == '\0') || (local_60 == (int64_t *******)0x0)) {
      local_60 = ppppppplVar14;
    }
    else {
      local_60 = ppppppplVar14;
      FUN_00d50b20();
    }
  }
  if ((local_50 == '\0') || (local_58 == (int64_t *******)0x0)) {
    local_68 = uVar22 & 0xffffffff;
  }
  else {
    FUN_00d50b20();
    local_68 = uVar22 & 0xffffffff;
  }
joined_r0x01afb608:
  local_b0 = (int64_t *******)&g_024c5048;
  if (((char)local_98 != '\0') &&
     (local_b0 = (int64_t *******)&g_024c5048, local_a0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  local_718 = local_60;
  local_710 = '\0';
  local_708 = 0;
  local_700 = '\0';
  local_6f8 = 0;
  local_6f0 = '\0';
  local_378 = 0;
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_378 = '\x01';
  local_380 = this_ptr;
  FUN_01d5da60(&local_6f8,&local_708,&local_380);
  if ((local_378 != '\0') && (local_380 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_6f0 != '\0') && (local_6f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_700 != '\0') && (local_708 != 0)) {
    FUN_00d50b20();
  }
  if ((local_710 != '\0') && (local_718 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d5e230();
  FUN_01d65260();
  if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  iVar9 = FUN_01d5b230();
  *(int *)((int64_t)local_160 + 0x18c) = iVar9 + -1;
  *(void*)(local_160 + 0x32) = 0;
  if (this_ptr[0x59] != 0) {
    uVar24 = FUN_00d46530();
    local_270 = local_58;
    local_268 = 0;
    if (local_50 == '\0') {
      if (local_58 != (int64_t *******)0x0) {
        uVar24 = FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_268 = '\x01';
    FUN_01b0f020(uVar24,&local_270);
    ppppppplVar15 = local_b0;
    if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_268 != '\0') && (local_270 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if (ppppppplVar15 != (int64_t *******)0x0) {
      uVar24 = FUN_00d46530();
      local_260 = local_58;
      local_258 = 0;
      if (local_50 == '\0') {
        if (local_58 != (int64_t *******)0x0) {
          uVar24 = FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_258 = '\x01';
      FUN_01b0f020(uVar24,&local_260);
      uVar8 = FUN_00d459e0();
      *(void*)(local_160 + 0x32) = uVar8;
      if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_258 != '\0') && (local_260 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01d5dc80();
  if ((*(char *)((int64_t)this_ptr + 0x316) != '\0') && (0 < *(int *)((int64_t)local_f0 + 0xc)))
  {
    ppppppplVar15 = (int64_t *******)0x0;
    do {
      ppppppplVar18 = local_f0;
      pvVar10 = _pthread_getspecific((void*)local_f0);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017aa5e0();
      ppppppplVar14 = local_b0;
      local_138 = ppppppplVar15;
      if (((char)local_a8 == '\0') && (local_b0 != (int64_t *******)0x0)) {
        FUN_00d50b00();
        if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      local_300 = ppppppplVar14;
      pvVar10 = _pthread_getspecific((void*)ppppppplVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar10 = _pthread_getspecific((void*)ppppppplVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736da0();
      ppppppplVar15 = local_70;
      uVar20 = (undefined7)((uint64_t)&local_b0 >> 8);
      if (local_b0 == local_70) {
        if (((char)local_b8 == '\0') && (local_b0 != (int64_t *******)0x0)) {
          if ((char)local_a8 != '\0') goto LAB_01afbaeb;
          uVar21 = (uint)CONCAT71(uVar20,1);
          FUN_00d50b00();
        }
        else {
          uVar21 = (uint)local_b8;
        }
LAB_01afbb50:
        if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        ppppppplVar15 = local_b0;
        if ((char)local_a8 == '\0') {
          if (local_b0 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
          uVar21 = (uint)CONCAT71(uVar20,1);
          if (((char)local_b8 != '\0') && (local_70 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01afbb50;
        }
        if (((char)local_b8 != '\0') && (local_70 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
LAB_01afbaeb:
        local_a8 = local_a8 & 0xffffff00;
        uVar21 = (uint)CONCAT71(uVar20,1);
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      lVar11 = g_027e3c00;
      if (ppppppplVar15 == (int64_t *******)0x0) {
        local_b8 = (uint64_t)uVar21;
LAB_01afbdf3:
        local_70 = (int64_t *******)0x0;
      }
      else {
        if (g_027e3c00 != 0) {
          FUN_00d50b00();
        }
        local_6e8 = lVar11;
        local_6e0 = '\x01';
        cVar5 = FUN_00d90eb0();
        lVar11 = g_027e3c08;
        cVar6 = '\x01';
        if (cVar5 == '\0') {
          if (g_027e3c08 != 0) {
            FUN_00d50b00();
          }
          local_6d8 = lVar11;
          local_6d0 = '\x01';
          cVar5 = FUN_00d90eb0();
          lVar11 = g_027e3c10;
          cVar6 = '\x01';
          if (cVar5 == '\0') {
            if (g_027e3c10 != 0) {
              FUN_00d50b00();
            }
            local_6c8 = lVar11;
            local_6c0 = '\x01';
            cVar5 = FUN_00d90eb0();
            lVar11 = g_027e3c18;
            cVar6 = '\x01';
            if (cVar5 == '\0') {
              if (g_027e3c18 != 0) {
                FUN_00d50b00();
              }
              local_6b8 = lVar11;
              local_6b0 = '\x01';
              cVar5 = FUN_00d90eb0();
              lVar11 = g_027e3c20;
              cVar6 = '\x01';
              if (cVar5 == '\0') {
                if (g_027e3c20 != 0) {
                  FUN_00d50b00();
                }
                local_6a8 = lVar11;
                local_6a0 = '\x01';
                cVar5 = FUN_00d90eb0();
                lVar11 = g_027e3c28;
                cVar6 = '\x01';
                if (cVar5 == '\0') {
                  if (g_027e3c28 != 0) {
                    FUN_00d50b00();
                  }
                  local_698 = lVar11;
                  local_690 = '\x01';
                  cVar5 = FUN_00d90eb0();
                  lVar11 = g_027e3c30;
                  cVar6 = '\x01';
                  if (cVar5 == '\0') {
                    if (g_027e3c30 != 0) {
                      FUN_00d50b00();
                    }
                    local_688 = lVar11;
                    local_680 = '\x01';
                    cVar6 = FUN_00d90eb0();
                    if ((local_680 != '\0') && (local_688 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_690 != '\0') && (local_698 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_6a0 != '\0') && (local_6a8 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_6b0 != '\0') && (local_6b8 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_6c0 != '\0') && (local_6c8 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_6d0 != '\0') && (local_6d8 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_6e0 != '\0') && (local_6e8 != 0)) {
          FUN_00d50b20();
        }
        if (cVar6 != '\0') {
          if ((char)uVar21 != '\0') {
            FUN_00d50b20();
          }
          local_b8 = 0;
          goto LAB_01afbdf3;
        }
        local_b8 = (uint64_t)uVar21;
        local_70 = ppppppplVar15;
      }
      FUN_016ab300();
      pvVar10 = _pthread_getspecific((void*)ppppppplVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar10 = _pthread_getspecific((void*)ppppppplVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar24 = FUN_01736d70();
      ppppppplVar15 = local_d0;
      local_248 = 0;
      if (local_c8 == '\0') {
        if (local_d0 != (int64_t *******)0x0) {
          uVar24 = FUN_00d50b00();
        }
      }
      else {
        local_c8 = '\0';
      }
      local_248 = '\x01';
      local_250 = ppppppplVar15;
      FUN_016ac280(uVar24,&local_250);
      local_158 = local_b0;
      if ((char)local_a8 == '\0') {
        if (local_b0 != (int64_t *******)0x0) {
          FUN_00d50b00();
          if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_a8 = local_a8 & 0xffffff00;
      }
      if ((local_248 != '\0') && (local_250 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      pppppplVar4 = g_026e3bc8;
      if (g_026e3bc8 != (int64_t ******)0x0) {
        FUN_00d50b00();
      }
      local_678 = pppppplVar4;
      local_670 = '\x01';
      local_668 = 0;
      local_660 = '\0';
      pvVar10 = _pthread_getspecific((void*)ppppppplVar18);
      ppppppplVar15 = local_c0;
      if ((pvVar10 != (void *)0x0) &&
         (lVar11 = FUN_00e8b990(), ppppppplVar15 = local_c0, lVar11 != 0)) {
        ppppppplVar18 = local_c0;
        ppppppplVar15 = (int64_t *******)local_c0[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
      }
      pVar17 = (void*)ppppppplVar18;
      uVar7 = (*(*ppppppplVar15)[0x80])();
      pvVar10 = _pthread_getspecific(pVar17);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar8 = FUN_01743720();
      FUN_017433e0(&local_668,&local_678,uVar7,uVar8);
      local_100 = local_b0;
      if ((char)local_a8 == '\0') {
        if (local_b0 != (int64_t *******)0x0) {
          FUN_00d50b00();
          if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_a8 = local_a8 & 0xffffff00;
      }
      if ((local_660 != '\0') && (local_668 != 0)) {
        FUN_00d50b20();
      }
      if ((local_670 != '\0') && (local_678 != (int64_t ******)0x0)) {
        FUN_00d50b20();
      }
      if (local_70 == (int64_t *******)0x0) {
        local_d0 = local_100;
        local_e8 = local_158;
        pVar17 = 2;
        uVar24 = FUN_00083ea0(2,&local_e8);
        FUN_00d8cb40(uVar24,&local_b0);
        ppppppplVar15 = local_58;
        if (local_58 == (int64_t *******)0x0) {
          bVar2 = false;
          ppppppplVar15 = (int64_t *******)0x0;
        }
        else if (local_50 == '\0') {
          FUN_00d50b00();
          bVar2 = true;
          if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_50 = '\0';
          bVar2 = true;
        }
        local_b0 = (int64_t *******)&g_0253d630;
        if ((local_88 != '\0') && (CONCAT44(uStack_8c,local_90) != 0)) {
          FUN_00d50b20();
        }
        local_b0 = (int64_t *******)&g_024c5048;
        if (((char)local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_d0 = local_100;
        local_e8 = local_158;
        local_1f0 = local_70;
        ppppppplVar15 = (int64_t *******)&local_1f0;
        uVar24 = FUN_002bd7b0(ppppppplVar15,&local_e8,3);
        pVar17 = (void*)ppppppplVar15;
        FUN_00d8cb40(uVar24,&local_b0);
        ppppppplVar15 = local_58;
        if (local_58 == (int64_t *******)0x0) {
          bVar2 = false;
          ppppppplVar15 = (int64_t *******)0x0;
        }
        else if (local_50 == '\0') {
          FUN_00d50b00();
          bVar2 = true;
          if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_50 = '\0';
          bVar2 = true;
        }
        local_b0 = (int64_t *******)&g_025df260;
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        local_b0 = (int64_t *******)&g_0253d630;
        if ((local_88 != '\0') && (CONCAT44(uStack_8c,local_90) != 0)) {
          FUN_00d50b20();
        }
        local_b0 = (int64_t *******)&g_024c5048;
        if (((char)local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar10 = _pthread_getspecific(pVar17);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar10 = _pthread_getspecific((void*)local_138);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017aa5e0();
      ppppppplVar18 = local_b0;
      local_238 = 0;
      if ((char)local_a8 == '\0') {
        if (local_b0 != (int64_t *******)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a8 = local_a8 & 0xffffff00;
      }
      local_238 = '\x01';
      local_240 = (int64_t ******)ppppppplVar18;
      cVar5 = FUN_01750eb0();
      uVar24 = extraout_XMM0_Qa_01;
      if ((local_238 != '\0') && (local_240 != (int64_t ******)0x0)) {
        uVar24 = FUN_00d50b20();
      }
      if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
        uVar24 = FUN_00d50b20();
      }
      bVar3 = bVar2;
      if (cVar5 == '\0') {
        local_a8 = 1;
        local_b0 = (int64_t *******)&g_024c5048;
        local_98 = (uint64_t)local_98._1_7_ << 8;
        if (ppppppplVar15 != (int64_t *******)0x0) {
          uVar24 = FUN_00d50b00();
        }
        local_98 = CONCAT71(local_98._1_7_,1);
        local_a0 = ppppppplVar15;
        FUN_00d8cb40(uVar24,&local_b0);
        ppppppplVar18 = local_58;
        if (local_58 == ppppppplVar15) {
          ppppppplVar18 = ppppppplVar15;
          if ((!bVar2) && (local_58 != (int64_t *******)0x0)) {
            if (local_50 == '\0') {
              FUN_00d50b00();
              goto LAB_01afc700;
            }
            goto LAB_01afc621;
          }
joined_r0x01afc69e:
          if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_50 == '\0') {
            if (local_58 != (int64_t *******)0x0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            if ((bVar2) && (ppppppplVar15 != (int64_t *******)0x0)) {
              FUN_00d50b20();
              ppppppplVar15 = ppppppplVar18;
LAB_01afc700:
              ppppppplVar18 = ppppppplVar15;
              bVar3 = true;
            }
            goto joined_r0x01afc69e;
          }
          if ((bVar2) && (ppppppplVar15 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
LAB_01afc621:
          local_50 = '\0';
          bVar3 = true;
        }
        local_b0 = (int64_t *******)&g_024c5048;
        if (((char)local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_a8 = 1;
        local_b0 = (int64_t *******)&g_024c5048;
        local_98 = (uint64_t)local_98._1_7_ << 8;
        if (ppppppplVar15 != (int64_t *******)0x0) {
          uVar24 = FUN_00d50b00();
        }
        local_98 = CONCAT71(local_98._1_7_,1);
        local_a0 = ppppppplVar15;
        FUN_00d8cb40(uVar24,&local_b0);
        ppppppplVar18 = local_58;
        if (local_58 == ppppppplVar15) {
          ppppppplVar18 = ppppppplVar15;
          if ((!bVar2) && (ppppppplVar15 != (int64_t *******)0x0)) {
            if (local_50 == '\0') {
              FUN_00d50b00();
              goto LAB_01afc6b0;
            }
            goto LAB_01afc5f4;
          }
joined_r0x01afc693:
          if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_50 == '\0') {
            if (local_58 != (int64_t *******)0x0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            if ((bVar2) && (ppppppplVar15 != (int64_t *******)0x0)) {
              FUN_00d50b20();
              ppppppplVar15 = ppppppplVar18;
LAB_01afc6b0:
              ppppppplVar18 = ppppppplVar15;
              bVar3 = true;
            }
            goto joined_r0x01afc693;
          }
          if ((bVar2) && (ppppppplVar15 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
LAB_01afc5f4:
          local_50 = '\0';
          bVar3 = true;
        }
        local_b0 = (int64_t *******)&g_024c5048;
        if (((char)local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar11 = g_027e3c38;
      local_650 = '\0';
      local_658 = ppppppplVar18;
      if (g_027e3c38 != 0) {
        FUN_00d50b00();
      }
      local_648 = lVar11;
      local_640 = '\x01';
      local_638 = 0;
      local_630 = '\0';
      local_368 = 0;
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_368 = '\x01';
      local_370 = this_ptr;
      FUN_01d5da60(&local_638,&local_648,&local_370);
      if ((local_368 != '\0') && (local_370 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_630 != '\0') && (local_638 != 0)) {
        FUN_00d50b20();
      }
      if ((local_640 != '\0') && (local_648 != 0)) {
        FUN_00d50b20();
      }
      if ((local_650 != '\0') && (local_658 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      uVar24 = FUN_01d66da0();
      ppppplVar1 = local_f0[2][(int64_t)local_138];
      local_358 = 0;
      if (ppppplVar1 != (int64_t *****)0x0) {
        uVar24 = FUN_00d50b00();
      }
      ppppppplVar15 = g_027e3c40;
      local_358 = '\x01';
      local_360 = ppppplVar1;
      if (g_027e3c40 != (int64_t *******)0x0) {
        uVar24 = FUN_00d50b00();
      }
      local_b0 = ppppppplVar15;
      local_a8 = local_a8 & 0xffffff00;
      FUN_00ca0840(uVar24,&local_b0);
      if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if (ppppppplVar15 != (int64_t *******)0x0) {
        FUN_00d50b20();
      }
      if ((local_358 != '\0') && (local_360 != (int64_t *****)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if (local_138 == (int64_t *******)0x0 && (char)local_f8 == '\0') {
        FUN_01d5dc80();
      }
      if ((bVar3) && (ppppppplVar18 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      ppppppplVar15 = local_138;
      ppppppplVar14 = local_158;
      ppppppplVar18 = local_300;
      if (local_100 != (int64_t *******)0x0) {
        FUN_00d50b20();
      }
      if (ppppppplVar14 != (int64_t *******)0x0) {
        FUN_00d50b20();
      }
      if (ppppppplVar18 != (int64_t *******)0x0) {
        FUN_00d50b20();
      }
      ppppppplVar15 = (int64_t *******)((int64_t)ppppppplVar15 + 1);
    } while ((int64_t)ppppppplVar15 < (int64_t)*(int *)((int64_t)local_f0 + 0xc));
  }
  lVar11 = g_027e4590;
  if (g_027e4590 != 0) {
    FUN_00d50b00();
  }
  lVar16 = g_027e3c58;
  local_628 = lVar11;
  local_620 = '\x01';
  if (g_027e3c58 != 0) {
    FUN_00d50b00();
  }
  local_618 = lVar16;
  local_610 = '\x01';
  local_608 = 0;
  local_600 = '\0';
  uVar24 = FUN_00d31230(&local_608,&local_618);
  ppppppplVar15 = local_d0;
  local_a8 = 1;
  local_b0 = (int64_t *******)&g_024c5048;
  local_98 = local_98 & 0xffffffffffffff00;
  if (local_d0 != (int64_t *******)0x0) {
    uVar24 = FUN_00d50b00();
  }
  local_a0 = ppppppplVar15;
  local_98 = CONCAT71(local_98._1_7_,1);
  FUN_00d8cb40(uVar24,&local_b0);
  local_230 = local_58;
  local_228 = 0;
  local_5f8 = g_027e3c38;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *******)0x0) {
      FUN_00d50b00();
      local_5f8 = g_027e3c38;
    }
  }
  else {
    local_50 = '\0';
  }
  local_228 = '\x01';
  g_027e3c38 = local_5f8;
  if (local_5f8 != 0) {
    local_228 = '\x01';
    FUN_00d50b00();
  }
  local_5f0 = '\x01';
  local_5e8 = 0;
  local_5e0 = '\0';
  local_348 = 0;
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_348 = '\x01';
  local_350 = this_ptr;
  FUN_01d5da60(&local_5e8,&local_5f8,&local_350);
  if ((local_348 != '\0') && (local_350 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_5e0 != '\0') && (local_5e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_5f0 != '\0') && (local_5f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_228 != '\0') && (local_230 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  local_b0 = (int64_t *******)&g_024c5048;
  if (((char)local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_600 != '\0') && (local_608 != 0)) {
    FUN_00d50b20();
  }
  if ((local_610 != '\0') && (local_618 != 0)) {
    FUN_00d50b20();
  }
  if ((local_620 != '\0') && (local_628 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d5e230();
  FUN_01d66da0();
  local_5d8 = g_027e4590;
  if (g_027e4590 != 0) {
    FUN_00d50b00();
  }
  lVar11 = g_027e3c60;
  local_5d0 = '\x01';
  if (g_027e3c60 != 0) {
    FUN_00d50b00();
  }
  local_5c8 = lVar11;
  local_5c0 = '\x01';
  local_5b8 = 0;
  local_5b0 = '\0';
  uVar24 = FUN_00d31230(&local_5b8,&local_5c8);
  local_220 = local_e8;
  local_218 = 0;
  ppppppplVar15 = g_027e3c40;
  if (local_e0 == '\0') {
    if (local_e8 != (int64_t *******)0x0) {
      uVar24 = FUN_00d50b00();
      ppppppplVar15 = g_027e3c40;
    }
  }
  else {
    local_e0 = '\0';
  }
  local_218 = '\x01';
  g_027e3c40 = ppppppplVar15;
  if (ppppppplVar15 != (int64_t *******)0x0) {
    local_218 = '\x01';
    uVar24 = FUN_00d50b00();
  }
  local_a8 = local_a8 & 0xffffff00;
  local_b0 = ppppppplVar15;
  FUN_00ca0840(uVar24,&local_b0);
  if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (ppppppplVar15 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  if ((local_218 != '\0') && (local_220 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_5b0 != '\0') && (local_5b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_5c0 != '\0') && (local_5c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_5d0 != '\0') && (local_5d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d5e230();
  FUN_01d66da0();
  uVar24 = FUN_00d46530();
  local_210 = local_e8;
  local_208 = 0;
  ppppppplVar15 = g_027e3c68;
  if (local_e0 == '\0') {
    if (local_e8 != (int64_t *******)0x0) {
      uVar24 = FUN_00d50b00();
      ppppppplVar15 = g_027e3c68;
    }
  }
  else {
    local_e0 = '\0';
  }
  local_208 = '\x01';
  g_027e3c68 = ppppppplVar15;
  if (ppppppplVar15 != (int64_t *******)0x0) {
    local_208 = '\x01';
    uVar24 = FUN_00d50b00();
  }
  local_a8 = local_a8 & 0xffffff00;
  local_b0 = ppppppplVar15;
  uVar24 = FUN_00ca0840(uVar24,&local_b0);
  if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
    uVar24 = FUN_00d50b20();
  }
  if (ppppppplVar15 != (int64_t *******)0x0) {
    uVar24 = FUN_00d50b20();
  }
  if ((local_208 != '\0') && (local_210 != (int64_t *******)0x0)) {
    uVar24 = FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != (int64_t *******)0x0)) {
    uVar24 = FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
    uVar24 = FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (int64_t *******)0x0)) {
    uVar24 = FUN_00d50b20();
  }
  lVar11 = g_027e4590;
  if ((*(char *)((int64_t)this_ptr + 0x315) != '\0') ||
     (*(char *)((int64_t)this_ptr + 0x316) != '\0')) {
    if (g_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar16 = g_027e3c70;
    local_5a8 = lVar11;
    local_5a0 = '\x01';
    if (g_027e3c70 != 0) {
      FUN_00d50b00();
    }
    local_598 = lVar16;
    local_590 = '\x01';
    local_588 = 0;
    local_580 = '\0';
    uVar24 = FUN_00d31230(&local_588,&local_598);
    ppppppplVar15 = local_d0;
    local_a8 = 1;
    local_b0 = (int64_t *******)&g_024c5048;
    local_98 = local_98 & 0xffffffffffffff00;
    if (local_d0 != (int64_t *******)0x0) {
      uVar24 = FUN_00d50b00();
    }
    local_a0 = ppppppplVar15;
    local_98 = CONCAT71(local_98._1_7_,1);
    FUN_00d8cb40(uVar24,&local_b0);
    local_200 = local_58;
    local_1f8 = 0;
    local_578 = g_027e3c78;
    if (local_50 == '\0') {
      if (local_58 != (int64_t *******)0x0) {
        FUN_00d50b00();
        local_578 = g_027e3c78;
      }
    }
    else {
      local_50 = '\0';
    }
    local_1f8 = '\x01';
    g_027e3c78 = local_578;
    if (local_578 != 0) {
      local_1f8 = '\x01';
      FUN_00d50b00();
    }
    local_570 = '\x01';
    local_568 = 0;
    local_560 = '\0';
    local_338 = 0;
    FUN_00d50b00();
    local_338 = '\x01';
    local_340 = this_ptr;
    FUN_01d5da60(&local_568,&local_578,&local_340);
    if ((local_338 != '\0') && (local_340 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_560 != '\0') && (local_568 != 0)) {
      FUN_00d50b20();
    }
    if ((local_570 != '\0') && (local_578 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1f8 != '\0') && (local_200 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    local_b0 = (int64_t *******)&g_024c5048;
    if (((char)local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_580 != '\0') && (local_588 != 0)) {
      FUN_00d50b20();
    }
    if ((local_590 != '\0') && (local_598 != 0)) {
      FUN_00d50b20();
    }
    if ((local_5a0 != '\0') && (local_5a8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01b0f0d0();
    local_2e8 = local_58;
    local_2e0 = 0;
    if ((local_50 == '\0') && (local_58 != (int64_t *******)0x0)) {
      FUN_00d50b00();
    }
    local_2e0 = '\x01';
    FUN_01d654e0();
    if ((local_2e0 != '\0') && (local_2e8 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d5e230();
    FUN_01d64cb0();
    ppppppplVar15 = local_58;
    if (local_58 != (int64_t *******)0x0) {
      FUN_01d5e230();
      FUN_01d64cb0();
      FUN_01d5b230();
    }
    uVar24 = FUN_01d65260();
    if (ppppppplVar15 != (int64_t *******)0x0) {
      if ((local_e0 != '\0') && (local_e8 != (int64_t *******)0x0)) {
        uVar24 = FUN_00d50b20();
      }
      if ((local_1e8 != '\0') && (local_1f0 != (int64_t *******)0x0)) {
        uVar24 = FUN_00d50b20();
      }
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
      uVar24 = FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != (int64_t *******)0x0)) {
      uVar24 = FUN_00d50b20();
    }
    if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
      uVar24 = FUN_00d50b20();
    }
  }
  lVar11 = g_027e3c80;
  if (g_027e3c80 != 0) {
    uVar24 = FUN_00d50b00();
  }
  lVar16 = g_027e3c88;
  local_558 = lVar11;
  local_550 = '\x01';
  if (g_027e3c88 != 0) {
    uVar24 = FUN_00d50b00();
  }
  local_548 = lVar16;
  local_540 = '\x01';
  uVar24 = FUN_01d61e70(uVar24,&local_548);
  ppppppplVar15 = local_b0;
  if ((char)local_a8 == '\0') {
    if (local_b0 != (int64_t *******)0x0) {
      uVar24 = FUN_00d50b00();
      if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
        uVar24 = FUN_00d50b20();
      }
    }
  }
  else {
    local_a8 = local_a8 & 0xffffff00;
  }
  if ((local_540 != '\0') && (local_548 != 0)) {
    uVar24 = FUN_00d50b20();
  }
  if ((local_550 != '\0') && (local_558 != 0)) {
    uVar24 = FUN_00d50b20();
  }
  lVar11 = g_027e3c90;
  if (ppppppplVar15 != (int64_t *******)0x0) {
    if (g_027e3c90 != 0) {
      uVar24 = FUN_00d50b00();
    }
    local_538 = lVar11;
    local_530 = '\x01';
    FUN_01d5e6e0(uVar24,&local_538);
    ppppppplVar15 = local_b0;
    if ((char)local_a8 == '\0') {
      if (local_b0 != (int64_t *******)0x0) {
        FUN_00d50b00();
        if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_a8 = local_a8 & 0xffffff00;
    }
    if ((local_530 != '\0') && (local_538 != 0)) {
      FUN_00d50b20();
    }
    if (ppppppplVar15 != (int64_t *******)0x0) {
      FUN_01d65230();
      ppppppplVar18 = local_d0;
      local_a8 = 1;
      local_b0 = (int64_t *******)&g_024c5048;
      local_98 = local_98 & 0xffffffffffffff00;
      if (local_d0 != (int64_t *******)0x0) {
        FUN_00d50b00();
      }
      local_a0 = ppppppplVar18;
      local_98 = CONCAT71(local_98._1_7_,1);
      FUN_00d8cb40();
      local_1e0 = local_58;
      local_1d8 = 0;
      if (local_50 == '\0') {
        if (local_58 != (int64_t *******)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_1d8 = '\x01';
      FUN_01d64eb0();
      if ((local_1d8 != '\0') && (local_1e0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      local_b0 = (int64_t *******)&g_024c5048;
      if (((char)local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      FUN_01a1d6e0();
      ppppppplVar18 = local_b0;
      if (((char)local_a8 == '\0') && (local_b0 != (int64_t *******)0x0)) {
        FUN_00d50b00();
        if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d5dc80();
      if ((*(char *)((int64_t)this_ptr + 0x315) == '\0') &&
         (*(char *)((int64_t)this_ptr + 0x316) == '\0')) {
        puVar12 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar12 = &g_026846d0;
        puVar12[2] = &g_02684a60;
        *(void*)(puVar12 + 3) = 0;
        *(void*)((int64_t)puVar12 + 0x1c) = 0;
        *(void*)((int64_t)puVar12 + 0x24) = 0;
        *(void*)((int64_t)puVar12 + 0x2c) = 0;
        *(void*)((int64_t)puVar12 + 0x34) = 0;
        *(void*)((int64_t)puVar12 + 0x3a) = 0;
        *(void*)((int64_t)puVar12 + 0x42) = 0;
        puVar12[10] = 0;
        puVar12[0xb] = 0;
        puVar12[0xc] = 0;
        puVar12[0xd] = 0;
        *(void*)(puVar12 + 0xe) = 0;
        (*g_026846e8)();
        local_508 = g_027e3c98;
        if (g_027e3c98 != 0) {
          FUN_00d50b00();
        }
        local_500 = '\x01';
        FUN_01d65120();
        if ((local_500 != '\0') && (local_508 != 0)) {
          FUN_00d50b20();
        }
        local_4f8 = ppppppplVar18;
        local_4f0 = '\0';
        FUN_01d651e0();
        if ((local_4f0 != '\0') && (local_4f8 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d65230();
        local_1d0 = local_b0;
        local_1c8 = 0;
        if ((char)local_a8 == '\0') {
          if (local_b0 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a8 = local_a8 & 0xffffff00;
        }
        local_1c8 = '\x01';
        FUN_01d64eb0();
        if ((local_1c8 != '\0') && (local_1d0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        local_4e0 = '\0';
        local_4e8 = puVar12;
        FUN_01d5d8d0();
        if ((local_4e0 != '\0') && (local_4e8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d66790();
        FUN_00d50b20();
      }
      else {
        FUN_01d64cb0();
        FUN_01d5e2b0();
        ppppppplVar14 = local_b0;
        if ((char)local_a8 == '\0') {
          if (local_b0 != (int64_t *******)0x0) {
            FUN_00d50b00();
            if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_a8 = local_a8 & 0xffffff00;
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        if (ppppppplVar14 != (int64_t *******)0x0) {
          local_a8 = local_a8 & 0xffffff00;
          local_b0 = (int64_t *******)0x0;
          local_a0 = ppppppplVar14;
          local_98 = 0xffffffff;
          local_90 = 0;
          local_98._4_4_ = 0;
          while( true ) {
            if (local_98._4_4_ != 0) {
              if (local_98._4_4_ < 1) {
                iVar9 = -local_98._4_4_;
              }
              else {
                iVar9 = (int)local_98 - local_98._4_4_;
                local_98 = CONCAT44(local_98._4_4_,iVar9);
                FUN_00d23690();
                local_90 = local_90 + local_98._4_4_;
                iVar9 = 0;
              }
              local_98 = CONCAT44(iVar9,(int)local_98);
            }
            lVar11 = (int64_t)(int)local_98;
            iVar9 = (int)local_98 + 1;
            local_98 = CONCAT44(local_98._4_4_,iVar9);
            if (*(int *)((int64_t)local_a0 + 0xc) <= iVar9) break;
            local_b0 = (int64_t *******)local_a0[2][lVar11 + 1];
            local_528 = ppppppplVar18;
            local_520 = '\0';
            FUN_01d651e0();
            if ((local_520 != '\0') && (local_528 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_002a0a30();
          FUN_00d50b20();
        }
        FUN_01d64cb0();
        FUN_01d5e350();
        if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        local_518 = ppppppplVar15;
        local_510 = '\0';
        FUN_01d5d8d0();
        if ((local_510 != '\0') && (local_518 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      if (ppppppplVar18 != (int64_t *******)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  lVar11 = g_027e4590;
  if (g_027e4590 != 0) {
    FUN_00d50b00();
  }
  lVar16 = g_027e3ca0;
  local_4d8 = lVar11;
  local_4d0 = '\x01';
  if (g_027e3ca0 != 0) {
    FUN_00d50b00();
  }
  local_4c8 = lVar16;
  local_4c0 = '\x01';
  local_4b8 = 0;
  local_4b0 = '\0';
  uVar24 = FUN_00d31230(&local_4b8,&local_4c8);
  ppppppplVar15 = local_d0;
  local_a8 = 1;
  local_b0 = (int64_t *******)&g_024c5048;
  local_98 = local_98 & 0xffffffffffffff00;
  if (local_d0 != (int64_t *******)0x0) {
    uVar24 = FUN_00d50b00();
  }
  local_a0 = ppppppplVar15;
  local_98 = CONCAT71(local_98._1_7_,1);
  FUN_00d8cb40(uVar24,&local_b0);
  local_1c0 = local_58;
  local_1b8 = 0;
  local_4a8 = g_027e3ca8;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *******)0x0) {
      FUN_00d50b00();
      local_4a8 = g_027e3ca8;
    }
  }
  else {
    local_50 = '\0';
  }
  local_1b8 = '\x01';
  g_027e3ca8 = local_4a8;
  if (local_4a8 != 0) {
    local_1b8 = '\x01';
    FUN_00d50b00();
  }
  local_4a0 = '\x01';
  local_498 = 0;
  local_490 = '\0';
  local_328 = 0;
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_328 = '\x01';
  local_330 = this_ptr;
  FUN_01d5da60(&local_498,&local_4a8,&local_330);
  if ((local_328 != '\0') && (local_330 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_490 != '\0') && (local_498 != 0)) {
    FUN_00d50b20();
  }
  if ((local_4a0 != '\0') && (local_4a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b8 != '\0') && (local_1c0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  local_b0 = (int64_t *******)&g_024c5048;
  if (((char)local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_4b0 != '\0') && (local_4b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_4c0 != '\0') && (local_4c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_4d0 != '\0') && (local_4d8 != 0)) {
    FUN_00d50b20();
  }
  if (*(char *)((int64_t)this_ptr + 0x314) != '\0') {
    FUN_01d5dc80();
    local_488 = g_027e4590;
    if (g_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar11 = g_027e3cb0;
    local_480 = '\x01';
    if (g_027e3cb0 != 0) {
      FUN_00d50b00();
    }
    local_478 = lVar11;
    local_470 = '\x01';
    local_468 = 0;
    local_460 = '\0';
    uVar24 = FUN_00d31230(&local_468,&local_478);
    ppppppplVar15 = local_d0;
    local_a8 = 1;
    local_b0 = (int64_t *******)&g_024c5048;
    local_98 = local_98 & 0xffffffffffffff00;
    if (local_d0 != (int64_t *******)0x0) {
      uVar24 = FUN_00d50b00();
    }
    local_a0 = ppppppplVar15;
    local_98 = CONCAT71(local_98._1_7_,1);
    FUN_00d8cb40(uVar24,&local_b0);
    local_1b0 = local_58;
    local_1a8 = 0;
    local_458 = g_027e3cb8;
    if (local_50 == '\0') {
      if (local_58 != (int64_t *******)0x0) {
        FUN_00d50b00();
        local_458 = g_027e3cb8;
      }
    }
    else {
      local_50 = '\0';
    }
    local_1a8 = '\x01';
    g_027e3cb8 = local_458;
    if (local_458 != 0) {
      local_1a8 = '\x01';
      FUN_00d50b00();
    }
    local_450 = '\x01';
    local_448 = 0;
    local_440 = '\0';
    local_318 = 0;
    FUN_00d50b00();
    local_318 = '\x01';
    local_320 = this_ptr;
    FUN_01d5da60(&local_448,&local_458,&local_320);
    if ((local_318 != '\0') && (local_320 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_440 != '\0') && (local_448 != 0)) {
      FUN_00d50b20();
    }
    if ((local_450 != '\0') && (local_458 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a8 != '\0') && (local_1b0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    local_b0 = (int64_t *******)&g_024c5048;
    if (((char)local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_460 != '\0') && (local_468 != 0)) {
      FUN_00d50b20();
    }
    if ((local_470 != '\0') && (local_478 != 0)) {
      FUN_00d50b20();
    }
    if ((local_480 != '\0') && (local_488 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar24 = (**(code **)(*this_ptr + 0x640))();
  ppppppplVar15 = local_b0;
  FUN_01d5b240(uVar24,local_2d4);
  FUN_01d65230();
  local_1a0 = local_58;
  local_198 = 0;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_198 = '\x01';
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_958 + 0x370))();
  local_190 = local_3e8;
  local_188 = 0;
  if (local_3e0 == '\0') {
    if (local_3e8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_3e0 = '\0';
  }
  local_188 = '\x01';
  pVar17 = 0;
  local_138 = (int64_t *******)(*(*ppppppplVar15)[0xba])(0,&local_190);
  lVar11 = local_3d0;
  uStack_12c = extraout_XMM0_Dd;
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if ((local_3e0 != '\0') && (local_3e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_950 != '\0') && (local_958 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_198 != '\0') && (local_1a0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  pvVar10 = _pthread_getspecific(pVar17);
  ppppppplVar15 = local_c0;
  if ((pvVar10 != (void *)0x0) && (lVar16 = FUN_00e8b990(), ppppppplVar15 = local_c0, lVar16 != 0))
  {
    ppppppplVar15 = (int64_t *******)local_c0[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
  }
  (*(*ppppppplVar15)[0x74])();
  local_158 = (int64_t *******)(**(code **)(*this_ptr + 0x918))();
  uStack_150 = extraout_XMM0_Qb_00;
  FUN_01d62660();
  local_308 = 0;
  FUN_00d50b00();
  local_308 = '\x01';
  local_438 = 0;
  local_430 = '\0';
  local_310 = this_ptr;
  FUN_01cb4790();
  (*(*local_58)[0x6e])();
  local_180 = (int64_t ******)local_b0;
  local_178 = 0;
  if ((char)local_a8 == '\0') {
    if (local_b0 != (int64_t *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a8 = local_a8 & 0xffffff00;
  }
  ppppppplVar15 = local_170;
  local_178 = '\x01';
  auVar26._0_4_ = (uint)(float)local_158 & g_023945e0;
  auVar26._4_4_ = local_158._4_4_ & _UNK_023945e4;
  auVar26._8_4_ = (uint)uStack_150 & _UNK_023945e8;
  auVar26._12_4_ = uStack_150._4_4_ & _UNK_023945ec;
  auVar27._4_12_ = SUB1612(auVar26 | ZEXT416(g_02394dc8),4);
  auVar27._0_4_ = SUB164(auVar26 | ZEXT416(g_02394dc8),0) + (float)local_158;
  auVar28 = roundss(auVar27,auVar27,0xb);
  fVar30 = local_138._4_4_ * g_02390118 + auVar28._0_4_;
  auVar29._0_4_ = g_023945e0 & (uint)fVar30;
  auVar29._4_4_ = _UNK_023945e4 & (uint)local_138._4_4_;
  auVar29._8_4_ = _UNK_023945e8 & uStack_12c;
  auVar29._12_4_ = _UNK_023945ec & uStack_12c;
  auVar25._4_12_ = SUB1612(auVar29 | ZEXT416(g_02394dc8),4);
  auVar25._0_4_ = SUB164(auVar29 | ZEXT416(g_02394dc8),0) + fVar30;
  auVar29 = roundss(ZEXT816(0),auVar25,0xb);
  auVar28._8_8_ = extraout_XMM0_Qb;
  auVar28._0_8_ = uVar23;
  auVar28 = insertps(auVar28,auVar29,0x10);
  local_420 = '\0';
  local_428 = 0;
  local_418 = 0;
  local_410 = '\0';
  local_408 = local_160;
  local_400 = '\0';
  local_3f8 = 0;
  local_3f0 = '\0';
  FUN_01d5f100(auVar28._0_8_,local_2d4,&local_180,0xff,&local_3f8);
  if ((local_3f0 != '\0') && (local_3f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_400 != '\0') && (local_408 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_410 != '\0') && (local_418 != 0)) {
    FUN_00d50b20();
  }
  if ((local_420 != '\0') && (local_428 != 0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != (int64_t ******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_430 != '\0') && (local_438 != 0)) {
    FUN_00d50b20();
  }
  if ((local_308 != '\0') && (local_310 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_108 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  if (local_f0 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  if (local_168 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_144 == '\0') {
    FUN_00d50b20();
  }
  if (ppppppplVar15 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  if (local_110 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_60 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_b8 != '\0') && (local_70 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (local_160 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_120 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  if (local_118 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  if (local_3c8 != 0) {
    FUN_00d50b20();
  }
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (local_140 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  if (local_c0 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  if (local_d8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

