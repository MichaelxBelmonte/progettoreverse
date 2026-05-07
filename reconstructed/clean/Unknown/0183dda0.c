// Function: FUN_0183dda0
// Address: 0183dda0
// Size: 14667 bytes
// Class: Unknown

void FUN_0183dda0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 void*param_5,uint64_t param_6,uint64_t param_7,char param_8,char param_9
                 ,char param_10,char param_11,char param_12,uint64_t param_13,float param_14)

{
  code *pcVar1;
  int64_t *plVar2;
  uint32_t uVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t **pplVar7;
  void*puVar8;
  int64_t **pplVar9;
  int64_t *plVar10;
  void*puVar11;
  uint64_t uVar12;
  int64_t *plVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  void* pVar17;
  int64_t *in_RCX;
  void*puVar18;
  void*puVar19;
  int64_t lVar20;
  int iVar21;
  void*in_RDX;
  int64_t lVar22;
  int64_t lVar23;
  int64_t lVar24;
  int64_t lVar25;
  int64_t *arg1;
  int64_t lVar26;
  void*this_ptr;
  int64_t *in_R8;
  int64_t lVar27;
  int64_t *in_R9;
  uint uVar28;
  uint uVar29;
  bool bVar30;
  float fVar31;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar32;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  float fVar33;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  void*local_res8;
  void*local_res10;
  void*local_res18;
  void*local_res20;
  int64_t in_stack_000000c0;
  int64_t *in_stack_000000c8;
  int64_t *in_stack_000000d0;
  int64_t *in_stack_000000d8;
  int64_t *local_a00;
  uint8_t local_9f8;
  int64_t *local_9f0;
  uint8_t local_9e8;
  int64_t *local_9e0;
  uint8_t local_9d8;
  int64_t *local_9d0;
  uint8_t local_9c8;
  int64_t local_9c0;
  char local_9b8;
  int64_t *local_9b0;
  uint8_t local_9a8;
  int64_t *local_9a0;
  uint8_t local_998;
  void*local_990;
  uint8_t local_988;
  void*local_980;
  uint8_t local_978;
  void*local_970;
  uint8_t local_968;
  void*local_960;
  uint8_t local_958;
  int64_t local_950;
  uint8_t local_948;
  int64_t *local_940;
  uint8_t local_938;
  int64_t *local_930;
  uint8_t local_928;
  int64_t *local_920;
  uint8_t local_918;
  int64_t *local_910;
  uint8_t local_908;
  int64_t *local_900;
  uint8_t local_8f8;
  int64_t *local_8f0;
  uint8_t local_8e8;
  int64_t *local_8e0;
  uint8_t local_8d8;
  int64_t local_8d0;
  uint8_t local_8c8;
  int64_t *local_8c0;
  uint8_t local_8b8;
  int64_t *local_8b0;
  uint8_t local_8a8;
  int64_t *local_8a0;
  uint8_t local_898;
  int64_t *local_890;
  uint8_t local_888;
  int64_t *local_880;
  uint8_t local_878;
  int64_t *local_870;
  uint8_t local_868;
  int64_t *local_860;
  uint8_t local_858;
  int64_t *local_850;
  uint8_t local_848;
  int64_t *local_840;
  uint8_t local_838;
  int64_t *local_830;
  uint8_t local_828;
  int64_t *local_820;
  uint8_t local_818;
  int64_t local_810;
  uint8_t local_808;
  void*local_800;
  uint8_t local_7f8;
  void*local_7f0;
  uint8_t local_7e8;
  int64_t *local_7e0;
  uint8_t local_7d8;
  int64_t *local_7d0;
  uint8_t local_7c8;
  int64_t local_7c0;
  uint8_t local_7b8;
  int64_t local_7b0;
  uint8_t local_7a8;
  uint64_t local_7a0;
  uint8_t local_798;
  int64_t *local_790;
  uint8_t local_788;
  int64_t *local_780;
  uint8_t local_778;
  int64_t local_770;
  uint8_t local_768;
  int64_t local_760;
  uint8_t local_758;
  int64_t *local_750;
  uint8_t local_748;
  int64_t *local_740;
  uint8_t local_738;
  int64_t *local_730;
  uint8_t local_728;
  int64_t *local_720;
  uint8_t local_718;
  int64_t local_710;
  uint8_t local_708;
  int64_t local_700;
  uint8_t local_6f8;
  int64_t *local_6f0;
  uint8_t local_6e8;
  int64_t *local_6e0;
  uint8_t local_6d8;
  int64_t *local_6d0;
  uint8_t local_6c8;
  int64_t *local_6c0;
  uint8_t local_6b8;
  int64_t *local_6b0;
  uint8_t local_6a8;
  int64_t local_6a0;
  uint8_t local_698;
  int64_t *local_690;
  uint8_t local_688;
  int64_t local_680;
  uint8_t local_678;
  int64_t local_670;
  uint8_t local_668;
  int64_t *local_660;
  uint8_t local_658;
  int64_t *local_650;
  uint8_t local_648;
  int64_t *local_640;
  uint8_t local_638;
  int64_t local_630;
  uint8_t local_628;
  int64_t *local_620;
  uint8_t local_618;
  int64_t local_610;
  uint8_t local_608;
  int64_t local_600;
  uint8_t local_5f8;
  int64_t local_5f0;
  uint8_t local_5e8;
  int64_t local_5e0;
  uint8_t local_5d8;
  int64_t local_5d0;
  uint8_t local_5c8;
  int64_t *local_5c0;
  uint8_t local_5b8;
  int64_t *local_5b0;
  uint8_t local_5a8;
  int64_t *local_5a0;
  uint8_t local_598;
  int64_t *local_590;
  uint8_t local_588;
  int64_t *local_580;
  uint8_t local_578;
  int64_t *local_570;
  uint8_t local_568;
  int64_t *local_560;
  uint8_t local_558;
  int64_t *local_550;
  uint8_t local_548;
  int64_t *local_540;
  uint8_t local_538;
  int64_t local_530;
  uint8_t local_528;
  int64_t *local_520;
  uint8_t local_518;
  int64_t *local_510;
  uint8_t local_508;
  int64_t local_500;
  uint8_t local_4f8;
  int64_t *local_4f0;
  uint8_t local_4e8;
  uint64_t local_4e0;
  uint8_t local_4d8;
  int64_t local_4d0;
  uint8_t local_4c8;
  int64_t *local_4c0;
  uint8_t local_4b8;
  int64_t *local_4b0;
  uint8_t local_4a8;
  int64_t *local_4a0;
  uint8_t local_498;
  uint64_t local_490;
  uint8_t local_488;
  int64_t *local_480;
  uint8_t local_478;
  int64_t local_470;
  uint8_t local_468;
  int64_t local_460;
  uint8_t local_458;
  int64_t *local_450;
  uint8_t local_448;
  int64_t *local_440;
  uint8_t local_438;
  int64_t *local_430;
  uint8_t local_428;
  int64_t local_420;
  uint8_t local_418;
  int64_t local_410;
  uint8_t local_408;
  int64_t local_400;
  uint8_t local_3f8;
  void*local_3f0;
  uint8_t local_3e8;
  void*local_3e0;
  uint8_t local_3d8;
  void*local_3d0;
  uint8_t local_3c8;
  void*local_3c0;
  uint8_t local_3b8;
  int64_t *local_3b0;
  uint8_t local_3a8;
  int64_t *local_3a0;
  uint8_t local_398;
  int64_t *local_390;
  uint8_t local_388;
  uint64_t local_380;
  uint8_t local_378;
  uint64_t local_370;
  uint8_t local_368;
  uint64_t local_360;
  uint8_t local_358;
  uint64_t local_350;
  uint8_t local_348;
  int64_t local_340;
  uint8_t local_338;
  void*local_330;
  uint8_t local_328;
  void*local_320;
  uint8_t local_318;
  int64_t *local_310;
  uint8_t local_308;
  uint64_t local_300;
  uint8_t local_2f8;
  uint64_t local_2f0;
  uint8_t local_2e8;
  uint64_t local_2e0;
  uint8_t local_2d8;
  uint64_t local_2d0;
  uint8_t local_2c8;
  void*local_2c0;
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
  int64_t *local_260;
  char local_258;
  int64_t *local_250;
  char local_248;
  int64_t *local_240;
  char local_238;
  int64_t *local_230;
  char local_228;
  uint32_t local_21c;
  uint32_t local_218;
  uint32_t local_214;
  int64_t local_210;
  char local_208;
  int64_t *local_200;
  int64_t *local_1f8;
  int64_t *local_1f0;
  char local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  int local_1d0;
  float local_1cc;
  int64_t *local_1c8;
  char local_1c0;
  double local_1b8;
  int64_t *local_1b0;
  int64_t local_1a8;
  int64_t *local_1a0;
  code *local_198;
  void*local_190;
  int64_t *local_188;
  int64_t *local_180;
  int64_t local_178;
  void*local_170;
  int64_t *local_168;
  int64_t *local_160;
  int64_t *local_158;
  int64_t *local_150;
  void*local_148;
  int64_t *local_140;
  int64_t local_138;
  int64_t *local_130;
  void*local_128;
  void*local_120;
  int64_t local_118;
  uint64_t local_110;
  int64_t local_108;
  int64_t *local_100;
  void*local_f8;
  uint64_t local_f0;
  int64_t *local_e8;
  double local_e0;
  int64_t *local_d8;
  int64_t *local_d0;
  int64_t *local_c8;
  int64_t *local_c0;
  void*local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  uint local_9c;
  void*local_98;
  char local_89;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  char local_58 [8];
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  int64_t local_38;
  
  local_100 = (int64_t *)CONCAT44(local_100._4_4_,param_1);
  if ((*arg1 == 0) || (*(int *)(*arg1 + 0xc) == 0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  local_2c0 = in_RDX;
  local_21c = param_4;
  local_218 = param_2;
  local_214 = param_3;
  local_1e0 = in_XMM5_Da;
  local_1dc = in_XMM4_Da;
  local_1d8 = unaff_XMM6_Da;
  local_1d4 = unaff_XMM7_Da;
  local_1a0 = in_RCX;
  local_160 = in_R8;
  local_70 = in_R9;
  pvVar5 = _pthread_getspecific((void*)in_RCX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df480();
  local_b0 = local_60;
  if ((((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific((void*)in_RCX);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    in_RCX = local_b0;
  }
  FUN_01320d00();
  local_c0 = local_60;
  if (((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific((void*)in_RCX);
  plVar10 = local_c0;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), plVar10 = local_c0, lVar6 != 0)) {
    in_RCX = local_c0;
    plVar10 = (int64_t *)local_c0[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  local_e0 = (double)(**(code **)(*plVar10 + 0x370))();
  pvVar5 = _pthread_getspecific((void*)in_RCX);
  plVar10 = local_c0;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), plVar10 = local_c0, lVar6 != 0)) {
    in_RCX = local_c0;
    plVar10 = (int64_t *)local_c0[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  local_9c = (**(code **)(*plVar10 + 0x3a0))();
  lVar6 = *arg1;
  if (1 < *(int *)(lVar6 + 0xc)) {
    lVar25 = 0;
    do {
      lVar6 = *(int64_t *)(lVar6 + 0x10);
      lVar14 = *(int64_t *)(lVar6 + lVar25 * 8);
      if (lVar14 != 0) {
        FUN_00d50b00();
        lVar6 = *(int64_t *)(*arg1 + 0x10);
      }
      lVar27 = *(int64_t *)(lVar6 + 8 + lVar25 * 8);
      if (lVar27 != 0) {
        FUN_00d50b00();
      }
      pVar17 = (void*)lVar6;
      pvVar5 = _pthread_getspecific(pVar17);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de650();
      pvVar5 = _pthread_getspecific(pVar17);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de790();
      pvVar5 = _pthread_getspecific(pVar17);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de650();
      pvVar5 = _pthread_getspecific(pVar17);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df480();
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar27 != 0) {
        FUN_00d50b20();
      }
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      lVar25 = lVar25 + 1;
      lVar6 = *arg1;
      in_RCX = (int64_t *)((int64_t)*(int *)(lVar6 + 0xc) + -1);
    } while (lVar25 < (int64_t)in_RCX);
  }
  pVar17 = (void*)in_RCX;
  pvVar5 = _pthread_getspecific(pVar17);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_108 = FUN_013de650();
  FUN_00d23340();
  plVar10 = local_60;
  local_80 = (int64_t *)CONCAT71(local_80._1_7_,local_58[0]);
  pplVar7 = (int64_t **)local_58;
  if (local_58[0] == '\0') {
    pplVar7 = &local_80;
  }
  *(char *)pplVar7 = '\0';
  if ((local_58[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar17);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_1b8 = (double)FUN_013dea30();
  FUN_00d23310();
  plVar13 = local_60;
  local_d8 = (int64_t *)CONCAT71(local_d8._1_7_,local_58[0]);
  pplVar7 = &local_d8;
  pplVar9 = (int64_t **)local_58;
  if (local_58[0] == '\0') {
    pplVar9 = pplVar7;
  }
  *(char *)pplVar9 = '\0';
  if ((local_58[0] != '\0') && (plVar13 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific((void*)pplVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_68 = (int64_t *)FUN_013de8d0();
  if (((char)local_d8 != '\0') && (plVar13 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_1b8 = local_1b8 - (double)local_68;
  local_118 = FUN_00e7dae0(local_e0 * local_1b8);
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar18 = &g_02572358;
  local_190 = &g_02572358;
  *puVar8 = &g_02572358;
  local_198 = g_02572370;
  (*g_02572370)();
  local_148 = puVar8;
  if (0 < (int)local_9c) {
    puVar19 = (void*)0x0;
    do {
      pVar17 = (void*)puVar18;
      FUN_00c8e690();
      plVar10 = local_60;
      if ((((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      local_58[0] = '\0';
      local_60 = plVar10;
      FUN_00d21140();
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_60 = (int64_t *)plVar10[2];
      pvVar5 = _pthread_getspecific(pVar17);
      plVar10 = local_c0;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), plVar10 = local_c0, lVar6 != 0)) {
        plVar10 = (int64_t *)local_c0[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      iVar21 = (int)puVar19;
      (**(code **)(*plVar10 + 0x388))(puVar19,g_0238fee8,1);
      FUN_00d50b20();
      uVar29 = iVar21 + 1;
      puVar18 = puVar19;
      puVar19 = (void*)(uint64_t)uVar29;
    } while (local_9c != uVar29);
  }
  if (*arg1 == 0) {
    local_110 = CONCAT44(local_110._4_4_,g_02391074);
    fVar31 = g_02391078;
  }
  else {
    local_58[0] = '\0';
    local_60 = (int64_t *)0x0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_110 = CONCAT44(local_110._4_4_,g_02391074);
    local_68 = (int64_t *)CONCAT44(local_68._4_4_,g_02391078);
    local_50 = *arg1;
    while( true ) {
      lVar6 = (int64_t)(int)local_48;
      iVar21 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar21);
      if (*(int *)(local_50 + 0xc) <= iVar21) break;
      local_60 = *(int64_t **)(*(int64_t *)(local_50 + 0x10) + 8 + lVar6 * 8);
      pvVar5 = _pthread_getspecific((void*)*(int64_t *)(local_50 + 0x10));
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar33 = (float)FUN_013de3b0();
      fVar31 = fVar33;
      if (local_68._0_4_ <= fVar33) {
        fVar31 = local_68._0_4_;
      }
      if (fVar33 <= (float)local_110) {
        fVar33 = (float)local_110;
      }
      local_110 = CONCAT44(local_110._4_4_,fVar33);
      local_68 = (int64_t *)CONCAT44(local_68._4_4_,fVar31);
      if (local_48._4_4_ != 0) {
        if (local_48 < 0) {
          iVar21 = -local_48._4_4_;
        }
        else {
          local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar21 = 0;
        }
        local_48 = CONCAT44(iVar21,(int)local_48);
      }
    }
    FUN_001150f0();
    fVar31 = local_68._0_4_;
  }
  fVar31 = (float)_exp2f(fVar31 * g_023941f4);
  uVar3 = FUN_00e7d850((double)(g_02390124 / (fVar31 * g_023941f8)) * local_e0);
  local_150 = (int64_t *)CONCAT44(local_150._4_4_,uVar3);
  fVar31 = (float)_exp2f(g_023941f4 * (float)local_110);
  local_1d0 = FUN_00e7d850((double)(g_02390124 / (fVar31 * g_023941f8)) * local_e0);
  FUN_00e7d850((double)local_118 / (double)local_1d0);
  FUN_00c8e710();
  local_d0 = local_60;
  if ((((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e710();
  local_158 = local_60;
  if (((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e710();
  plVar10 = local_60;
  if (((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  plVar13 = local_158;
  local_a00 = local_158;
  local_9f8 = 0;
  local_1b0 = plVar10;
  local_9f0 = plVar10;
  local_9e8 = 0;
  FUN_01825ca0(&local_9f0,&local_a00);
  uVar29 = *(uint *)(plVar13 + 3);
  local_e8 = (int64_t *)(uint64_t)uVar29;
  uVar28 = uVar29 + 3;
  if (-1 < (int)uVar29) {
    uVar28 = uVar29;
  }
  local_98 = (void*)CONCAT44(local_98._4_4_,uVar28);
  if ((int)uVar29 < 0xc) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    goto LAB_01841749;
  }
  FUN_00d23340();
  plVar10 = local_60;
  pplVar7 = &local_80;
  if (local_58[0] != '\0') {
    pplVar7 = (int64_t **)local_58;
  }
  local_80 = (int64_t *)CONCAT71(local_80._1_7_,local_58[0]);
  *(char *)pplVar7 = '\0';
  if ((local_58[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(uVar29);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar6 = FUN_013de650();
  FUN_00d23340();
  plVar13 = local_60;
  local_d8 = (int64_t *)CONCAT71(local_d8._1_7_,local_58[0]);
  pplVar7 = &local_d8;
  pplVar9 = (int64_t **)local_58;
  if (local_58[0] == '\0') {
    pplVar9 = pplVar7;
  }
  *(char *)pplVar9 = '\0';
  if ((local_58[0] != '\0') && (plVar13 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar17 = (void*)pplVar7;
  pvVar5 = _pthread_getspecific(pVar17);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_138 = FUN_013de790();
  uVar32 = extraout_XMM0_Qa;
  if (((char)local_d8 != '\0') && (plVar13 != (int64_t *)0x0)) {
    uVar32 = FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (plVar10 != (int64_t *)0x0)) {
    uVar32 = FUN_00d50b20();
  }
  if (param_10 == '\0') {
    local_138 = local_138 + lVar6;
    local_c8 = (int64_t *)0x0;
    local_178 = local_108;
  }
  else {
    lVar6 = **(int64_t **)(*arg1 + 0x10);
    local_208 = 0;
    if (lVar6 != 0) {
      uVar32 = FUN_00d50b00();
    }
    local_208 = '\x01';
    local_210 = lVar6;
    FUN_0133ae40(uVar32,&local_210);
    lVar6 = FUN_00d45790();
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_208 != '\0') && (local_210 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar17);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar25 = FUN_013de650();
    lVar25 = lVar25 + lVar6;
    iVar21 = (int)local_d0[3];
    iVar4 = iVar21 + 7;
    if (-1 < iVar21) {
      iVar4 = iVar21;
    }
    uVar28 = (iVar4 >> 3) - 1;
    uVar29 = 0;
    if (iVar21 < 8) {
      uVar29 = uVar28;
    }
    local_c8 = (int64_t *)(int64_t)(int)uVar29;
    lVar6 = local_d0[2];
    if (lVar25 < *(int64_t *)(lVar6 + (int64_t)local_c8 * 8)) {
      do {
        bVar30 = local_c8 == (int64_t *)0x0;
        local_c8 = (int64_t *)((int64_t)local_c8 - 1);
        if (bVar30) {
          local_c8 = (int64_t *)0x0;
          if ((int)uVar28 < 1) goto LAB_0183eb73;
          goto LAB_0183eac9;
        }
      } while (lVar25 < *(int64_t *)(lVar6 + (int64_t)local_c8 * 8));
      if ((int)local_c8 < (int)uVar28) goto LAB_0183eac9;
LAB_0183eb73:
      lVar27 = (int64_t)(int)local_c8;
LAB_0183eb9a:
      local_178 = *(int64_t *)(lVar6 + lVar27 * 8);
    }
    else {
      lVar27 = (int64_t)(int)uVar28;
      lVar14 = 0;
      do {
        if (~(lVar27 + 1U) + (int64_t)local_c8 + lVar14 == -2) {
          local_c8 = (int64_t *)(uint64_t)uVar28;
          goto LAB_0183eb9a;
        }
        lVar20 = lVar14 + 1;
        lVar16 = lVar14 * 8;
        lVar14 = lVar20;
      } while (*(int64_t *)(lVar6 + (int64_t)local_c8 * 8 + 8 + lVar16) <= lVar25);
      uVar29 = (uVar29 + (int)lVar20) - 1;
      local_c8 = (int64_t *)(uint64_t)uVar29;
      if ((int)uVar28 <= (int)uVar29) goto LAB_0183eb73;
LAB_0183eac9:
      lVar27 = (int64_t)(int)local_c8;
      local_178 = *(int64_t *)(lVar6 + 8 + lVar27 * 8);
      if (lVar25 - *(int64_t *)(lVar6 + lVar27 * 8) <= local_178 - lVar25) goto LAB_0183eb9a;
      local_c8 = (int64_t *)(uint64_t)((int)local_c8 + 1);
    }
    uVar32 = FUN_00d23340();
    plVar10 = local_60;
    pplVar7 = &local_d8;
    pplVar9 = (int64_t **)local_58;
    if (local_58[0] == '\0') {
      pplVar9 = pplVar7;
    }
    local_d8 = (int64_t *)CONCAT71(local_d8._1_7_,local_58[0]);
    *(void*)pplVar9 = 0;
    if ((local_58[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
      uVar32 = FUN_00d50b20();
    }
    pVar17 = (void*)pplVar7;
    local_1e8 = 0;
    if (((char)local_d8 == '\0') && (plVar10 != (int64_t *)0x0)) {
      uVar32 = FUN_00d50b00();
    }
    local_1f0 = plVar10;
    local_1e8 = '\x01';
    FUN_0133ae40(uVar32,&local_1f0);
    local_138 = FUN_00d45790();
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1e8 != '\0') && (local_1f0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar10 = (int64_t *)FUN_000bea40();
  uVar32 = (**(code **)(*plVar10 + 0x18))();
  local_d8 = (int64_t *)0x0;
  local_38 = local_178 - local_108;
  lVar6 = *arg1;
  local_140 = plVar10;
  if (0 < *(int *)(lVar6 + 0xc)) {
    plVar10 = (int64_t *)0x0;
    do {
      plVar13 = *(int64_t **)(*(int64_t *)(lVar6 + 0x10) + (int64_t)plVar10 * 8);
      local_70 = plVar10;
      if (plVar13 != (int64_t *)0x0) {
        uVar32 = FUN_00d50b00();
      }
      local_2a8 = '\0';
      local_2b0 = plVar13;
      local_68 = plVar13;
      FUN_0133ae40(uVar32,&local_2b0);
      puVar8 = (void*)FUN_00d45bc0();
      local_128 = puVar8;
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        puVar8 = (void*)FUN_00d50b20();
      }
      if ((local_2a8 != '\0') && (local_2b0 != (int64_t *)0x0)) {
        puVar8 = (void*)FUN_00d50b20();
      }
      local_298 = '\0';
      local_2a0 = plVar13;
      FUN_0133ae40(puVar8,&local_2a0);
      puVar8 = (void*)FUN_00d45790();
      uVar32 = extraout_XMM0_Qa_00;
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        uVar32 = FUN_00d50b20();
      }
      if ((local_298 != '\0') && (local_2a0 != (int64_t *)0x0)) {
        uVar32 = FUN_00d50b20();
      }
      local_288 = '\0';
      local_290 = plVar13;
      FUN_0133ae40(uVar32,&local_290);
      puVar11 = (void*)FUN_00d45790();
      uVar32 = extraout_XMM0_Qa_01;
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        uVar32 = FUN_00d50b20();
      }
      if ((local_288 != '\0') && (local_290 != (int64_t *)0x0)) {
        uVar32 = FUN_00d50b20();
      }
      local_278 = '\0';
      local_280 = plVar13;
      FUN_0133ae40(uVar32,&local_280);
      uVar12 = FUN_00d45790();
      uVar32 = extraout_XMM0_Qa_02;
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        uVar32 = FUN_00d50b20();
      }
      if ((local_278 != '\0') && (local_280 != (int64_t *)0x0)) {
        uVar32 = FUN_00d50b20();
      }
      local_268 = '\0';
      local_270 = plVar13;
      local_120 = puVar11;
      local_f0 = uVar12;
      FUN_0133ae40(uVar32,&local_270);
      uVar32 = FUN_00d45790();
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        uVar32 = FUN_00d50b20();
      }
      local_b8 = puVar8;
      if ((local_268 != '\0') && (local_270 != (int64_t *)0x0)) {
        uVar32 = FUN_00d50b20();
      }
      local_258 = '\0';
      local_260 = plVar13;
      FUN_0133ae40(uVar32,&local_260);
      uVar32 = FUN_00d45790();
      plVar10 = local_70;
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        uVar32 = FUN_00d50b20();
      }
      if ((local_258 != '\0') && (local_260 != (int64_t *)0x0)) {
        uVar32 = FUN_00d50b20();
      }
      local_250 = local_68;
      local_248 = '\0';
      FUN_0133ae40(uVar32,&local_250);
      puVar8 = (void*)FUN_00d45bc0();
      local_f8 = puVar8;
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        puVar8 = (void*)FUN_00d50b20();
      }
      if ((local_248 != '\0') && (local_250 != (int64_t *)0x0)) {
        puVar8 = (void*)FUN_00d50b20();
      }
      local_240 = local_68;
      local_238 = '\0';
      FUN_0133ae40(puVar8,&local_240);
      uVar32 = FUN_00d459e0();
      local_170 = (void*)CONCAT44(local_170._4_4_,(int)uVar32);
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        uVar32 = FUN_00d50b20();
      }
      if ((local_238 != '\0') && (local_240 != (int64_t *)0x0)) {
        uVar32 = FUN_00d50b20();
      }
      local_230 = local_68;
      local_228 = '\0';
      FUN_0133ae40(uVar32,&local_230);
      uVar3 = FUN_00d459e0();
      local_a8 = (int64_t *)CONCAT44(local_a8._4_4_,uVar3);
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_228 != '\0') && (local_230 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_89 = '\x01';
      local_9e0 = local_68;
      local_9d8 = 0;
      local_9d0 = local_140;
      local_9c8 = 0;
      uVar32 = FUN_0183ce70(local_128,local_f8,(uint64_t)local_170 & 0xffffffff,local_a8._0_4_);
      plVar13 = local_68;
      if (local_89 == '\0') {
        uVar32 = FUN_00d46dc0(0);
        plVar2 = local_80;
        local_1c0 = 0;
        if (local_78 == '\0') {
          if (local_80 != (int64_t *)0x0) {
            uVar32 = FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_1c0 = '\x01';
        local_1c8 = plVar2;
        local_60 = plVar13;
        local_58[0] = '\0';
        uVar32 = FUN_00ca0840(uVar32,&local_60);
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          uVar32 = FUN_00d50b20();
        }
        if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
          uVar32 = FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          uVar32 = FUN_00d50b20();
        }
      }
      if (plVar13 != (int64_t *)0x0) {
        uVar32 = FUN_00d50b20();
      }
      plVar10 = (int64_t *)((int64_t)plVar10 + 1);
      lVar6 = *arg1;
      pVar17 = *(void* *)(lVar6 + 0xc);
    } while ((int64_t)plVar10 < (int64_t)(int)pVar17);
  }
  local_68 = (int64_t *)((double)(int64_t)local_d8 / local_e0 + local_1b8);
  local_1a8 = FUN_00e7dae0(local_e0 * (double)local_68);
  pvVar5 = _pthread_getspecific(pVar17);
  plVar10 = local_140;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), plVar10 = local_140, lVar6 != 0)) {
    plVar10 = (int64_t *)local_140[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar10 + 0x410))
            ((double)local_68 + (double)local_108 / local_e0,
             (double)local_108 / local_e0 + local_1b8);
  if ((local_9b8 != '\0') && (local_9c0 != 0)) {
    FUN_00d50b20();
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = local_190;
  (*local_198)();
  local_128 = puVar8;
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = local_190;
  (*local_198)();
  local_120 = puVar8;
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = local_190;
  (*local_198)();
  pcVar1 = g_025683d8;
  local_98 = (void*)CONCAT44(local_98._4_4_,(int)local_98 >> 2);
  uVar29 = local_9c;
  local_170 = puVar8;
  if (0 < (int)local_9c) {
    do {
      FUN_01843150();
      plVar10 = local_80;
      if (local_78 == '\0') {
        if (local_80 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      local_60 = plVar10;
      local_58[0] = '\0';
      FUN_00d21140();
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01843150();
      plVar10 = local_80;
      if (local_78 == '\0') {
        if (local_80 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      local_60 = plVar10;
      local_58[0] = '\0';
      FUN_00d21140();
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar10 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar10 = (int64_t)&g_025683c0;
      (*pcVar1)();
      FUN_00c92170();
      FUN_00c92160();
      local_58[0] = '\0';
      local_60 = plVar10;
      FUN_00d21140();
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      uVar29 = uVar29 - 1;
    } while (uVar29 != 0);
  }
  local_9b0 = local_d0;
  local_9a8 = 0;
  local_9a0 = local_158;
  local_998 = 0;
  local_990 = local_128;
  local_988 = 0;
  local_980 = local_120;
  local_978 = 0;
  local_970 = local_170;
  local_968 = 0;
  local_960 = local_148;
  local_958 = 0;
  local_1cc = g_02394264;
  FUN_018292b0(local_e0,(uint64_t)local_100 & 0xffffffff,&local_970,local_c8);
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = local_190;
  (*local_198)();
  local_b8 = puVar8;
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = local_190;
  (*local_198)();
  local_f8 = puVar8;
  if (0 < (int)local_9c) {
    local_a8 = (int64_t *)(uint64_t)local_9c;
    local_f0 = (uint64_t)local_98 & 0xffffffff;
    plVar10 = (int64_t *)0x0;
    do {
      FUN_01843150();
      plVar13 = local_60;
      if ((((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01843150();
      plVar2 = local_60;
      if (((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
         ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != (int64_t *)0x0)))) {
        FUN_00d50b20();
      }
      local_58[0] = '\0';
      local_60 = plVar13;
      FUN_00d21140();
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_58[0] = '\0';
      local_60 = plVar2;
      FUN_00d21140();
      local_70 = plVar2;
      local_68 = plVar13;
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (3 < (int)local_e8) {
        uVar12 = 0;
        do {
          plVar13 = *(int64_t **)
                     (*(int64_t *)(*(int64_t *)(local_128[2] + (int64_t)plVar10 * 8) + 0x10) +
                     uVar12 * 8);
          if (plVar13 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_78 = '\0';
          local_80 = plVar13;
          FUN_00c8e4f0();
          plVar2 = local_60;
          if (local_58[0] == '\0') {
            if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
               (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58[0] = '\0';
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00c92170();
          FUN_00c92160();
          local_58[0] = '\0';
          local_60 = plVar2;
          FUN_00d21140();
          if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (plVar13 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar13 = *(int64_t **)
                     (*(int64_t *)(*(int64_t *)(local_120[2] + (int64_t)plVar10 * 8) + 0x10) +
                     uVar12 * 8);
          if (plVar13 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_78 = '\0';
          local_80 = plVar13;
          FUN_00c8e4f0();
          plVar2 = local_60;
          if (local_58[0] == '\0') {
            if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
               (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58[0] = '\0';
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00c92170();
          FUN_00c92160();
          local_58[0] = '\0';
          local_60 = plVar2;
          FUN_00d21140();
          if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (plVar13 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          uVar12 = uVar12 + 1;
        } while (local_f0 != uVar12);
      }
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar10 = (int64_t *)((int64_t)plVar10 + 1);
    } while (plVar10 != local_a8);
  }
  plVar10 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar10 + 0x18))();
  local_188 = plVar10;
  plVar13 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar13 + 0x18))();
  local_168 = plVar13;
  plVar13 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar13 + 0x18))();
  local_130 = plVar13;
  plVar13 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar13 + 0x18))();
  local_c8 = plVar13;
  plVar13 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar13 + 0x18))();
  local_70 = (int64_t *)((double)(((int)local_150 + local_1d0) / 2) / local_e0);
  local_68 = (int64_t *)CONCAT44(local_68._4_4_,(float)(double)local_70);
  local_180 = plVar13;
  iVar4 = FUN_00e7d780(g_02394288 / SQRT((float)(double)local_70));
  iVar21 = 0x7f;
  if (iVar4 < 0x7f) {
    iVar21 = iVar4;
  }
  local_950 = *arg1;
  local_948 = 0;
  local_940 = local_d0;
  local_938 = 0;
  local_930 = local_1b0;
  local_928 = 0;
  local_918 = 0;
  local_910 = local_168;
  local_908 = 0;
  local_900 = local_130;
  local_8f8 = 0;
  local_8f0 = local_c8;
  local_8e8 = 0;
  local_8d8 = 0;
  pplVar7 = &local_920;
  local_920 = plVar10;
  local_8e0 = plVar13;
  FUN_01827040(pplVar7,&local_930,&local_910,&local_900);
  pVar17 = (void*)pplVar7;
  FUN_00c8e690();
  local_a8 = local_60;
  if ((((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_98 = (void*)CONCAT44(local_98._4_4_,iVar21);
  FUN_00c8e690();
  plVar10 = local_60;
  if (((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_150 = plVar10;
  FUN_00c8e690();
  plVar10 = local_60;
  if (((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_e8 = plVar10;
  FUN_00c8e690();
  plVar10 = local_60;
  if ((((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_1f8 = plVar10;
  FUN_00c8e690();
  plVar10 = local_60;
  if (((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_200 = plVar10;
  pvVar5 = _pthread_getspecific(pVar17);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    pVar17 = (void*)local_b0;
  }
  FUN_0132d820();
  plVar10 = local_188;
  pvVar5 = _pthread_getspecific(pVar17);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar3 = FUN_0173e3a0();
  local_f0 = CONCAT44(local_f0._4_4_,uVar3);
  if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar13 = local_a8;
  local_8d0 = *arg1;
  local_8c8 = 0;
  local_8c0 = local_158;
  local_8b8 = 0;
  local_8b0 = local_a8;
  local_8a8 = 0;
  local_8a0 = local_150;
  local_898 = 0;
  local_890 = local_e8;
  local_888 = 0;
  local_880 = local_1f8;
  local_878 = 0;
  local_870 = local_200;
  local_868 = 0;
  local_860 = local_d0;
  local_858 = 0;
  local_850 = plVar10;
  local_848 = 0;
  local_840 = local_168;
  local_838 = 0;
  local_830 = local_130;
  local_828 = 0;
  local_820 = local_c8;
  local_818 = 0;
  FUN_0182afb0((uint64_t)local_100 & 0xffffffff,local_f0 & 0xffffffff,local_21c,local_214,
               &local_830,&local_820);
  local_80 = plVar13;
  local_78 = '\0';
  FUN_00c8e4f0();
  local_100 = local_60;
  if (local_58[0] == '\0') {
    if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
       (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58[0] = '\0';
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar10 = local_100;
  FUN_00c92170();
  FUN_00c92160();
  local_810 = *arg1;
  local_808 = 0;
  local_800 = local_b8;
  local_7f8 = 0;
  local_7f0 = local_f8;
  local_7e8 = 0;
  local_7e0 = local_d0;
  local_7d8 = 0;
  local_7d0 = local_e8;
  local_7c8 = 0;
  local_7c0 = *local_1a0;
  local_7b8 = 0;
  local_7b0 = *local_160;
  local_7a8 = 0;
  local_7a0 = *local_res20;
  local_798 = 0;
  local_790 = local_a8;
  local_788 = 0;
  local_780 = plVar10;
  local_778 = 0;
  pVar17 = (void*)&local_7e0;
  FUN_0182d7c0(g_023934c8,local_70,&local_7d0,&local_7c0);
  if (g_02394254 < local_1e0) {
    local_770 = *arg1;
    local_768 = 0;
    lVar6 = *(int64_t *)local_f8[2];
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    local_758 = 1;
    local_750 = local_a8;
    local_748 = 0;
    local_740 = local_130;
    local_738 = 0;
    local_730 = local_c8;
    local_728 = 0;
    local_720 = local_180;
    local_718 = 0;
    pVar17 = (void*)&local_740;
    local_760 = lVar6;
    FUN_0182fa50(local_70,local_1e0,&local_730,&local_720);
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  if (g_023b67d8 < (double)local_1dc) {
    if (param_11 == '\0') {
      local_1cc = g_023941ec;
    }
    local_710 = *arg1;
    local_708 = 0;
    lVar6 = *(int64_t *)local_b8[2];
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    local_6f8 = 1;
    lVar25 = *(int64_t *)local_f8[2];
    local_700 = lVar6;
    if (lVar25 != 0) {
      FUN_00d50b00();
    }
    local_6f0 = local_a8;
    local_6e8 = 0;
    local_6e0 = local_188;
    local_6d8 = 0;
    local_6d0 = local_168;
    local_6c8 = 0;
    local_6c0 = local_130;
    local_6b8 = 0;
    local_6b0 = local_c8;
    local_6a8 = 0;
    pVar17 = (void*)&local_6f0;
    FUN_018326c0(local_1dc,(uint64_t)local_68 & 0xffffffff,&local_6e0,local_1cc + local_1cc);
    if (lVar25 != 0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_1d8 < g_023b36e4) || (g_023b36e8 < local_1d8)) {
    if (param_11 == '\0') {
      lVar6 = *(int64_t *)local_b8[2];
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      local_698 = 1;
      local_690 = local_a8;
      local_688 = 0;
      local_6a0 = lVar6;
      FUN_01830de0(g_02394264,0);
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    local_680 = *arg1;
    local_678 = 0;
    lVar6 = *(int64_t *)local_b8[2];
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    local_668 = 1;
    local_660 = local_130;
    local_658 = 0;
    local_650 = local_c8;
    local_648 = 0;
    local_640 = local_180;
    local_638 = 0;
    pVar17 = (void*)&local_650;
    local_670 = lVar6;
    FUN_018312d0((uint64_t)local_68 & 0xffffffff,local_1d8,&local_640);
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (param_11 == '\0') {
      lVar6 = *(int64_t *)local_b8[2];
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      local_628 = 1;
      local_620 = local_a8;
      local_618 = 0;
      local_630 = lVar6;
      FUN_01830de0(g_02394264,1);
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if (param_12 != '\0') {
    FUN_00e7d850((double)param_14 * local_e0);
    local_610 = *arg1;
    local_608 = 0;
    lVar6 = *(int64_t *)local_b8[2];
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    local_5f8 = 1;
    lVar25 = *(int64_t *)local_f8[2];
    local_600 = lVar6;
    if (lVar25 != 0) {
      FUN_00d50b00();
    }
    local_5e8 = 1;
    lVar14 = *(int64_t *)local_128[2];
    local_5f0 = lVar25;
    if (lVar14 != 0) {
      FUN_00d50b00();
    }
    local_5d8 = 1;
    lVar27 = *(int64_t *)local_120[2];
    local_5e0 = lVar14;
    if (lVar27 != 0) {
      FUN_00d50b00();
    }
    local_5c8 = 1;
    local_5c0 = local_d0;
    local_5b8 = 0;
    local_5b0 = local_a8;
    local_5a8 = 0;
    local_5a0 = local_e8;
    local_598 = 0;
    local_590 = local_150;
    local_588 = 0;
    local_580 = local_1b0;
    local_578 = 0;
    local_570 = local_188;
    local_568 = 0;
    local_560 = local_168;
    local_558 = 0;
    local_550 = local_130;
    local_548 = 0;
    local_540 = local_c8;
    local_538 = 0;
    plVar10 = &local_5e0;
    local_5d0 = lVar27;
    FUN_01832fb0(plVar10,&local_5f0,&local_5d0,&local_5c0,&local_570,&local_560,&local_550,
                 &local_540);
    pVar17 = (void*)plVar10;
    if (lVar27 != 0) {
      FUN_00d50b20();
    }
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
    if (lVar25 != 0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  if (g_02394254 < local_1d4) {
    local_530 = *arg1;
    local_528 = 0;
    local_520 = local_e8;
    local_518 = 0;
    local_510 = local_d0;
    local_508 = 0;
    lVar6 = *(int64_t *)local_b8[2];
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    local_4f8 = 1;
    local_4f0 = local_180;
    local_4e8 = 0;
    local_4e0 = *local_2c0;
    local_4d8 = 0;
    pVar17 = (void*)&local_500;
    local_500 = lVar6;
    FUN_018353d0(local_1d4,g_023b294c,g_02390d30,g_0239011c);
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  lVar6 = *(int64_t *)local_b8[2];
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  local_4c8 = 1;
  local_4c0 = local_e8;
  local_4b8 = 0;
  local_4b0 = local_100;
  local_4a8 = 0;
  local_4d0 = lVar6;
  FUN_01835ec0(local_218);
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar17);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  plVar10 = local_60;
  if ((((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_160 = plVar10;
  if (((*in_stack_000000c8 != 0) && (*in_stack_000000d0 != 0)) &&
     ((*in_stack_000000d8 != 0 && ((in_stack_000000c0 != 0 && (plVar10 != (int64_t *)0x0)))))) {
    plVar10 = *(int64_t **)local_128[2];
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_498 = 1;
    uVar12 = *(uint64_t *)local_120[2];
    local_4a0 = plVar10;
    local_68 = plVar10;
    if (uVar12 != 0) {
      FUN_00d50b00();
    }
    local_488 = 1;
    local_480 = local_a8;
    local_478 = 0;
    lVar6 = *(int64_t *)local_b8[2];
    local_490 = uVar12;
    local_f0 = uVar12;
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    local_468 = 1;
    lVar25 = *(int64_t *)local_f8[2];
    local_470 = lVar6;
    local_98 = (void*)lVar6;
    if (lVar25 != 0) {
      FUN_00d50b00();
    }
    plVar10 = local_160;
    local_458 = 1;
    local_450 = local_e8;
    local_448 = 0;
    local_440 = local_d0;
    local_438 = 0;
    local_460 = lVar25;
    FUN_00d50b00();
    local_430 = plVar10;
    local_428 = 1;
    local_420 = *in_stack_000000c8;
    local_418 = 0;
    local_410 = *in_stack_000000d0;
    local_408 = 0;
    FUN_01836220(local_e0,local_1b8,local_70,(float)local_110,&local_420,&local_410);
    FUN_00d50b20();
    plVar10 = local_68;
    puVar8 = local_98;
    uVar12 = local_f0;
    if (lVar25 != 0) {
      FUN_00d50b20();
    }
    if (puVar8 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (uVar12 != 0) {
      FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = local_190;
  (*local_198)();
  uVar29 = local_9c;
  local_98 = puVar8;
  if (0 < (int)local_9c) {
    do {
      FUN_00c8e690();
      plVar10 = local_60;
      if ((((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      local_58[0] = '\0';
      local_60 = plVar10;
      FUN_00d21140();
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      uVar29 = uVar29 - 1;
    } while (uVar29 != 0);
  }
  if (param_8 != '\0') {
    local_400 = *arg1;
    local_3f8 = 0;
    local_3e8 = 0;
    local_3e0 = local_b8;
    local_3d8 = 0;
    local_3d0 = local_f8;
    local_3c8 = 0;
    local_3c0 = local_170;
    local_3b8 = 0;
    local_3b0 = local_e8;
    local_3a8 = 0;
    local_3a0 = local_d0;
    local_398 = 0;
    local_390 = local_140;
    local_388 = 0;
    local_380 = *local_res8;
    local_378 = 0;
    local_370 = *local_res10;
    local_368 = 0;
    local_360 = *local_res18;
    local_358 = 0;
    local_350 = *param_5;
    local_348 = 0;
    local_3f0 = puVar8;
    FUN_01838020(g_0241141c,g_023941ec,&local_3d0,&local_3c0,&local_370,&local_360,&local_350);
  }
  if (param_9 != '\0') {
    local_340 = *arg1;
    local_338 = 0;
    local_330 = local_148;
    local_328 = 0;
    local_318 = 0;
    local_310 = local_140;
    local_308 = 0;
    local_300 = *local_res8;
    local_2f8 = 0;
    local_2f0 = *local_res10;
    local_2e8 = 0;
    local_2e0 = *local_res18;
    local_2d8 = 0;
    local_2d0 = *param_5;
    local_2c8 = 0;
    local_320 = puVar8;
    FUN_0183b3e0(local_e0,g_0241141c,g_023941ec,local_1d0,&local_2e0,&local_2d0);
  }
  if (param_10 != '\0') {
    lVar25 = FUN_00e7dae0(g_023b2ef0 * local_e0);
    lVar14 = FUN_00e7dae0(local_e0 * g_0240d3c8);
    lVar6 = lVar25 + local_38 + 100;
    if (local_1a8 < lVar6) {
      lVar6 = local_1a8;
    }
    if (local_118 < lVar6) {
      lVar6 = local_118;
    }
    lVar20 = local_138 - local_108;
    lVar27 = 0;
    if (-1 < lVar20 - lVar14) {
      lVar27 = lVar20 - lVar14;
    }
    if (0 < (int)local_9c) {
      local_f0 = CONCAT44(local_f0._4_4_,(float)lVar14);
      local_1a0 = (int64_t *)(local_118 - lVar27);
      local_110 = (uint64_t)local_9c;
      if (lVar6 < 1) {
        if (lVar14 < 1) {
          uVar12 = 0;
          do {
            lVar6 = *(int64_t *)(local_148[2] + uVar12 * 8);
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            if (*(int64_t *)(local_98[2] + uVar12 * 8) != 0) {
              FUN_00d50b00();
              FUN_00d50b20();
            }
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
            uVar12 = uVar12 + 1;
          } while (local_110 != uVar12);
        }
        else {
          lVar27 = lVar27 - local_118;
          lVar6 = local_1a8 * 4 + -4;
          lVar25 = local_1a8 + -1;
          local_138 = ((local_138 - local_118) - local_108) + 1;
          local_68 = (int64_t *)(local_118 * 4 + -4);
          uVar12 = 0;
          do {
            plVar10 = *(int64_t **)(local_148[2] + uVar12 * 8);
            if (plVar10 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            lVar14 = *(int64_t *)(local_98[2] + uVar12 * 8);
            local_70 = plVar10;
            if (lVar14 != 0) {
              FUN_00d50b00();
            }
            if (0 < (int64_t)local_1a0) {
              lVar24 = 0;
              lVar16 = local_138;
              do {
                lVar22 = local_118 + lVar24 + -1;
                if ((-1 < lVar22) && (-1 < lVar25 + lVar24)) {
                  fVar31 = *(float *)((int64_t)local_68 + lVar24 * 4 + local_70[2]);
                  if (lVar22 < lVar20) {
                    lVar22 = *(int64_t *)(lVar14 + 0x10);
                    fVar31 = ((float)lVar16 / (float)local_f0) *
                             *(float *)(lVar22 + lVar6 + lVar24 * 4) +
                             (g_02390124 - (float)lVar16 / (float)local_f0) * fVar31;
                  }
                  else {
                    lVar22 = *(int64_t *)(lVar14 + 0x10);
                  }
                  *(float *)(lVar22 + lVar6 + lVar24 * 4) = fVar31;
                }
                lVar24 = lVar24 + -1;
                lVar16 = lVar16 + 1;
              } while (lVar27 != lVar24);
            }
            if (lVar14 != 0) {
              FUN_00d50b20();
            }
            if (local_70 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 != local_110);
        }
      }
      else {
        local_38 = local_38 + 100;
        local_68 = (int64_t *)CONCAT44(local_68._4_4_,(float)lVar25);
        if ((lVar14 < 1) || ((int64_t)local_1a0 < 1)) {
          lVar25 = local_108 - local_178;
          uVar12 = 0;
          do {
            lVar14 = *(int64_t *)(local_148[2] + uVar12 * 8);
            if (lVar14 != 0) {
              FUN_00d50b00();
            }
            lVar27 = *(int64_t *)(local_98[2] + uVar12 * 8);
            if (lVar27 != 0) {
              FUN_00d50b00();
            }
            lVar20 = *(int64_t *)(lVar14 + 0x10);
            lVar16 = *(int64_t *)(lVar27 + 0x10);
            lVar24 = 0;
            do {
              fVar31 = *(float *)(lVar20 + lVar24 * 4);
              if (local_38 < lVar24) {
                fVar33 = (float)(lVar25 + -100 + lVar24) / local_68._0_4_;
                fVar31 = fVar33 * *(float *)(lVar16 + lVar24 * 4) + (g_02390124 - fVar33) * fVar31
                ;
              }
              *(float *)(lVar16 + lVar24 * 4) = fVar31;
              lVar24 = lVar24 + 1;
            } while (lVar6 != lVar24);
            if (lVar27 != 0) {
              FUN_00d50b20();
            }
            if (lVar14 != 0) {
              FUN_00d50b20();
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 != local_110);
        }
        else {
          lVar25 = local_108 - local_178;
          local_1a8 = local_1a8 + -1;
          local_138 = local_138 - local_118;
          local_118 = local_118 + -1;
          local_138 = (local_138 - local_108) + 1;
          uVar12 = 0;
          do {
            plVar10 = *(int64_t **)(local_148[2] + uVar12 * 8);
            if (plVar10 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            lVar14 = *(int64_t *)(local_98[2] + uVar12 * 8);
            local_70 = plVar10;
            if (lVar14 != 0) {
              FUN_00d50b00();
            }
            lVar16 = local_70[2];
            lVar24 = *(int64_t *)(lVar14 + 0x10);
            lVar22 = 0;
            do {
              fVar31 = *(float *)(lVar16 + lVar22 * 4);
              if (local_38 < lVar22) {
                fVar33 = (float)(lVar22 + lVar25 + -100) / local_68._0_4_;
                fVar31 = fVar33 * *(float *)(lVar24 + lVar22 * 4) + (g_02390124 - fVar33) * fVar31
                ;
              }
              *(float *)(lVar24 + lVar22 * 4) = fVar31;
              lVar22 = lVar22 + 1;
              lVar15 = local_118;
              lVar23 = local_138;
              lVar26 = local_1a8;
            } while (lVar6 != lVar22);
            do {
              if ((-1 < lVar15) && (-1 < lVar26)) {
                fVar31 = *(float *)(lVar16 + lVar15 * 4);
                if (lVar15 < lVar20) {
                  fVar31 = ((float)lVar23 / (float)local_f0) * *(float *)(lVar24 + lVar26 * 4) +
                           (g_02390124 - (float)lVar23 / (float)local_f0) * fVar31;
                }
                *(float *)(lVar24 + lVar26 * 4) = fVar31;
              }
              bVar30 = lVar15 != lVar27;
              lVar15 = lVar15 + -1;
              lVar23 = lVar23 + 1;
              lVar26 = lVar26 + -1;
            } while (bVar30);
            if (lVar14 != 0) {
              FUN_00d50b20();
            }
            if (local_70 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 != local_110);
        }
      }
    }
  }
  *this_ptr = local_98;
  *(void*)(this_ptr + 1) = 1;
  if (local_160 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar13 = local_168;
  plVar10 = local_188;
  if (local_100 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_200 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_1f8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_e8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_150 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_a8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_180 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_c8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_130 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_f8 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_b8 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_170 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_120 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_128 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_140 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01841749:
  if (local_1b0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_158 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_d0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_148 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_c0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_b0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

