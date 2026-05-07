// ===================================================================
// Resynthesis — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 018431f0
// ============================================================
// Function: FUN_018431f0
// Address: 018431f0
// Size: 14689 bytes
// Class: Resynthesis
// String references:
//   "%@/Desktop/Resynthesized %I.aif"

void FUN_018431f0(uint32_t param_1,uint32_t param_2,uint32_t param_3,int64_t *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint8_t auVar11 [16];
  int64_t *plVar12;
  char cVar13;
  char cVar14;
  int iVar15;
  uint64_t uVar16;
  undefined7 uVar22;
  void *pvVar17;
  int64_t lVar18;
  int64_t *plVar19;
  uint *puVar20;
  void*puVar21;
  void* pVar23;
  uint uVar24;
  int iVar25;
  void*in_RCX;
  int64_t *plVar26;
  int64_t **pplVar27;
  uint *puVar28;
  uint64_t uVar29;
  int64_t *in_RDX;
  int64_t *this_ptr;
  uint64_t uVar30;
  int64_t **in_R8;
  uint uVar31;
  int64_t lVar32;
  int64_t lVar33;
  int64_t *plVar34;
  bool bVar35;
  uint32_t extraout_XMM0_Da;
  float fVar36;
  uint32_t uVar37;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Db;
  double dVar38;
  double dVar39;
  uint32_t extraout_XMM0_Db_00;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  uint32_t in_XMM4_Da;
  uint32_t in_XMM4_Db;
  int64_t *local_620;
  uint8_t local_618;
  int64_t *local_610;
  uint8_t local_608;
  int64_t *local_600;
  uint8_t local_5f8;
  int64_t *local_5f0;
  uint8_t local_5e8;
  int64_t *local_5e0;
  uint8_t local_5d8;
  int64_t *local_5d0;
  uint8_t local_5c8;
  int64_t *local_5c0;
  uint8_t local_5b8;
  int64_t *local_5b0;
  uint8_t local_5a8;
  int64_t *local_5a0;
  uint8_t local_598;
  int64_t local_590;
  uint8_t local_588;
  uint64_t local_580;
  uint8_t local_578;
  int64_t *local_570;
  uint8_t local_568;
  int64_t **local_560;
  void*local_558;
  int64_t *local_390;
  char local_388;
  int64_t local_380;
  char local_378;
  int64_t local_370;
  char local_368;
  int64_t *local_360;
  char local_358;
  int64_t *local_350;
  char local_348;
  int64_t local_340;
  char local_338;
  int64_t *local_330;
  char local_328;
  int64_t local_320;
  char local_318;
  int64_t *local_310;
  char local_308;
  int64_t *local_300;
  char local_2f8;
  int64_t *local_2f0;
  char local_2e8;
  int64_t local_2e0;
  char local_2d8;
  float local_2cc;
  uint32_t local_2c8;
  uint32_t local_2c4;
  uint32_t local_2c0;
  uint32_t local_2bc;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  code *local_2a0;
  void*local_298;
  int64_t local_290;
  char local_288;
  int64_t *local_280;
  char local_278;
  int64_t *local_270;
  float local_268;
  float local_264;
  float local_260;
  uint local_25c;
  int64_t *local_258;
  char local_250;
  int64_t *local_248;
  char local_240;
  int64_t *local_238;
  char local_230;
  int64_t *local_228;
  char local_220;
  int64_t *local_218;
  char local_210;
  int64_t *local_208;
  char local_200;
  int64_t *local_1f8;
  char local_1f0;
  int64_t *local_1e8;
  char local_1e0;
  int64_t *local_1d8;
  char local_1d0;
  int64_t *local_1c8;
  char local_1c0;
  int64_t *local_1b8;
  char local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t *local_188;
  int64_t *local_180;
  int64_t *local_178;
  int64_t *local_170;
  int64_t *local_168;
  int64_t *local_160;
  int64_t *local_158;
  int64_t *local_150;
  int64_t *local_148;
  int64_t *local_140;
  int64_t *local_138;
  int64_t local_130;
  int64_t *local_128;
  int64_t *local_120;
  float local_114;
  int64_t local_110;
  uint32_t local_104;
  int64_t *local_100;
  int64_t local_f8;
  void* local_ec;
  int64_t *local_e8;
  int64_t *local_e0;
  uint8_t local_d8 [8];
  uint32_t uStack_d0;
  uint32_t uStack_cc;
  int64_t *local_c8;
  byte local_bb;
  byte local_ba;
  byte local_b9;
  double local_b8;
  uint local_ac;
  double local_a8;
  int64_t local_a0;
  int64_t *local_98;
  byte local_89;
  uint local_88 [2];
  int64_t *local_80;
  int64_t *local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  uint local_58 [2];
  int64_t local_50;
  char local_48;
  int local_40;
  int64_t *local_38;
  
  local_2b8 = (double)CONCAT44(in_XMM4_Db,in_XMM4_Da);
  if (*this_ptr == 0) {
    return;
  }
  local_560 = in_R8;
  local_558 = in_RCX;
  local_2c8 = param_3;
  local_2c4 = param_2;
  local_2c0 = param_1;
  FUN_018acae0();
  lVar18 = g_027db818;
  if (g_027db818 != 0) {
    FUN_00d50b00();
  }
  local_2b0 = (double)FUN_018ade30();
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018acae0();
  lVar18 = g_027db828;
  if (g_027db828 != 0) {
    FUN_00d50b00();
  }
  local_a8 = (double)FUN_018ade30();
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018acae0();
  lVar18 = g_027db838;
  if (g_027db838 != 0) {
    FUN_00d50b00();
  }
  local_b8 = (double)FUN_018ade30();
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018acae0();
  lVar18 = g_027db848;
  if (g_027db848 != 0) {
    FUN_00d50b00();
  }
  local_80 = (int64_t *)FUN_018ade30();
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018acae0();
  lVar18 = g_027db858;
  if (g_027db858 != 0) {
    FUN_00d50b00();
  }
  local_78 = (int64_t *)FUN_018ade30();
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018acae0();
  lVar18 = g_027db868;
  if (g_027db868 != 0) {
    FUN_00d50b00();
  }
  uVar16 = FUN_018ade30();
  local_d8 = (uint8_t  [8])uVar16;
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018acae0();
  lVar18 = g_027db888;
  if (g_027db888 != 0) {
    FUN_00d50b00();
  }
  dVar1 = (double)FUN_018ade30();
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018acae0();
  lVar18 = g_027db898;
  if (g_027db898 != 0) {
    FUN_00d50b00();
  }
  dVar2 = (double)FUN_018ade30();
  local_2bc = _exp2f((float)(dVar2 * g_02417060));
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018acae0();
  lVar18 = g_027db8a0;
  if (g_027db8a0 != 0) {
    FUN_00d50b00();
  }
  dVar2 = (double)FUN_018ade30();
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018acae0();
  lVar18 = g_027db8a8;
  if (g_027db8a8 != 0) {
    FUN_00d50b00();
  }
  dVar3 = (double)FUN_018ade30();
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018acae0();
  lVar18 = g_027db8b8;
  if (g_027db8b8 != 0) {
    FUN_00d50b00();
  }
  dVar4 = (double)FUN_018ade30();
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018acae0();
  lVar18 = g_027db8c8;
  if (g_027db8c8 != 0) {
    FUN_00d50b00();
  }
  local_38 = (int64_t *)FUN_018ade30();
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018acae0();
  lVar18 = g_027db8d8;
  if (g_027db8d8 != 0) {
    FUN_00d50b00();
  }
  dVar5 = (double)FUN_018ade30();
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018acae0();
  lVar18 = g_027db8e8;
  if (g_027db8e8 != 0) {
    FUN_00d50b00();
  }
  dVar6 = (double)FUN_018ade30();
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018acae0();
  lVar18 = g_027db8f8;
  if (g_027db8f8 != 0) {
    FUN_00d50b00();
  }
  dVar7 = (double)FUN_018ade30();
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018acae0();
  lVar18 = g_027db908;
  if (g_027db908 != 0) {
    FUN_00d50b00();
  }
  local_e0 = (int64_t *)FUN_018ade30();
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018acae0();
  lVar18 = g_027db910;
  if (g_027db910 != 0) {
    FUN_00d50b00();
  }
  dVar39 = (double)FUN_018ade30();
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018acae0();
  lVar18 = g_027db920;
  if (g_027db920 != 0) {
    FUN_00d50b00();
  }
  FUN_018ade30();
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018acae0();
  lVar18 = g_027db930;
  if (g_027db930 != 0) {
    FUN_00d50b00();
  }
  FUN_018ade30();
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_018acae0();
  lVar18 = g_027db940;
  if (g_027db940 != 0) {
    FUN_00d50b00();
  }
  uVar16 = FUN_018ade30();
  local_e8 = (int64_t *)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  if (lVar18 != 0) {
    uVar16 = FUN_00d50b20();
  }
  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  local_260 = (float)(double)local_38;
  dVar9 = (double)local_260;
  local_b9 = g_02391038 <= dVar9;
  uVar22 = (undefined7)((uint64_t)uVar16 >> 8);
  uVar16 = CONCAT71(uVar22,local_b9);
  fVar36 = (float)(double)local_d8;
  local_ba = g_02417068 < dVar9;
  if (g_02417068 < dVar9) {
    local_260 = local_260 + g_02390118;
  }
  local_114 = (float)(double)local_e8;
  plVar26 = (int64_t *)CONCAT71((int7)((uint64_t)in_RCX >> 8),1);
  if (fVar36 <= g_023b388c) {
    if (g_02394244 < fVar36) {
      local_ac = 0;
      goto LAB_01843c08;
    }
    if (fVar36 <= g_0239011c) {
      local_ec = 0;
      local_104 = 0;
    }
    else {
      local_ec = (void*)CONCAT71(uVar22,1);
      uVar16 = CONCAT71(uVar22,1);
      local_104 = (uint32_t)uVar16;
    }
    local_ac = 0;
    auVar11._12_4_ = 0;
    auVar11._0_12_ = stack0xffffffffffffff2c;
    _local_d8 = auVar11 << 0x20;
  }
  else {
    uVar16 = CONCAT71(uVar22,1);
    local_ac = (uint)uVar16;
LAB_01843c08:
    local_104 = 0;
    uVar16 = CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
    local_d8._0_4_ = (int)uVar16;
    local_ec = (void*)plVar26;
  }
  local_268 = (float)(double)local_80;
  local_264 = (float)(double)local_78;
  local_78 = (int64_t *)CONCAT71(local_78._1_7_,local_b8 <= g_02417070);
  local_38 = (int64_t *)CONCAT71(local_38._1_7_,g_02417078 <= local_b8);
  if ((g_02394244 <= local_114) ||
     (local_25c = (uint)CONCAT71((int7)((uint64_t)uVar16 >> 8),
                                 g_0239011c < (float)(double)local_e0), local_114 <= g_0239011c)
     ) {
    local_25c = 0;
  }
  local_e8 = (int64_t *)CONCAT71(local_e8._1_7_,g_02394260 <= local_264);
  local_f8 = CONCAT71(local_f8._1_7_,local_264 <= g_0239428c);
  local_e0 = (int64_t *)CONCAT71(local_e0._1_7_,g_02394260 <= local_268);
  local_130 = CONCAT71(local_130._1_7_,local_268 <= g_0239428c);
  local_a0 = CONCAT71(local_a0._1_7_,g_02417078 <= local_2b0);
  local_110 = CONCAT71(local_110._1_7_,local_2b0 <= g_02417070);
  local_89 = *param_4 != 0;
  local_2a8 = (double)CONCAT71(local_2a8._1_7_,local_2b0 < g_0240e410);
  pvVar17 = _pthread_getspecific((void*)plVar26);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  local_258 = local_70;
  local_250 = 0;
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_250 = '\x01';
  uVar37 = FUN_0147ce20();
  local_c8 = local_60;
  if ((char)local_58[0] == '\0') {
    if (local_60 != (int64_t *)0x0) {
      uVar37 = FUN_00d50b00();
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        uVar37 = FUN_00d50b20();
      }
    }
  }
  else {
    local_58[0] = local_58[0] & 0xffffff00;
  }
  if ((local_250 != '\0') && (local_258 != (int64_t *)0x0)) {
    uVar37 = FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    uVar37 = FUN_00d50b20();
  }
  if (local_c8 == (int64_t *)0x0) {
    return;
  }
  if (*(int *)((int64_t)local_c8 + 0xc) == 0) goto LAB_01846ba6;
  FUN_00d242c0(uVar37,0);
  pvVar17 = _pthread_getspecific((void*)plVar26);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  local_98 = local_60;
  if (((char)local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  pvVar17 = _pthread_getspecific((void*)plVar26);
  plVar19 = local_98;
  if ((pvVar17 != (void *)0x0) && (lVar18 = FUN_00e8b990(), plVar19 = local_98, lVar18 != 0)) {
    plVar26 = local_98;
    plVar19 = (int64_t *)local_98[(uint64_t)(*(uint *)(lVar18 + 0x154) & 1) + 4];
  }
  dVar38 = (double)(**(code **)(*plVar19 + 0x370))();
  plVar19 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar19 + 0x18))();
  local_128 = plVar19;
  local_80 = param_4;
  if (*param_4 != 0) {
    uVar37 = FUN_00243390();
    plVar12 = local_60;
    plVar34 = local_80;
    plVar19 = (int64_t *)*local_80;
    if (plVar19 == local_60) {
      if (((char)local_80[1] != '\0') || (local_60 == (int64_t *)0x0)) goto LAB_0184405f;
      if ((char)local_58[0] == '\0') {
        uVar37 = FUN_00d50b00();
        goto LAB_01844057;
      }
LAB_01844019:
      *(void*)(plVar34 + 1) = 1;
      local_58[0] = local_58[0] & 0xffffff00;
      plVar19 = local_80;
    }
    else {
      lVar18 = local_80[1];
      if ((char)local_58[0] != '\0') {
        *local_80 = (int64_t)local_60;
        if (((char)lVar18 != '\0') && (plVar19 != (int64_t *)0x0)) {
          uVar37 = FUN_00d50b20();
        }
        goto LAB_01844019;
      }
      if (local_60 != (int64_t *)0x0) {
        uVar37 = FUN_00d50b00();
      }
      *local_80 = (int64_t)plVar12;
      if (((char)lVar18 != '\0') && (plVar19 != (int64_t *)0x0)) {
        uVar37 = FUN_00d50b20();
      }
LAB_01844057:
      *(void*)(plVar34 + 1) = 1;
LAB_0184405f:
      plVar19 = local_80;
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        uVar37 = FUN_00d50b20();
      }
    }
    FUN_00d242c0(uVar37,0);
    lVar18 = *plVar19;
    if (0 < *(int *)(lVar18 + 0xc)) {
      lVar32 = 0;
      do {
        pVar23 = (void*)plVar26;
        lVar18 = *(int64_t *)(*(int64_t *)(lVar18 + 0x10) + lVar32 * 8);
        if (lVar18 != 0) {
          FUN_00d50b00();
        }
        pvVar17 = _pthread_getspecific(pVar23);
        if (pvVar17 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        plVar26 = local_60;
        if (((char)local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b00();
          if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_58[0] = local_58[0] & 0xffffff00;
        local_60 = plVar26;
        cVar13 = FUN_00d23d70();
        uVar37 = extraout_XMM0_Da_00;
        if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          uVar37 = FUN_00d50b20();
        }
        if (cVar13 != '\0') {
          local_58[0] = local_58[0] & 0xffffff00;
          local_60 = plVar26;
          FUN_00ca0840(uVar37,&local_60);
          if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (plVar26 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (lVar18 != 0) {
          FUN_00d50b20();
        }
        lVar32 = lVar32 + 1;
        lVar18 = *local_80;
        plVar26 = (int64_t *)(int64_t)*(int *)(lVar18 + 0xc);
      } while (lVar32 < (int64_t)plVar26);
    }
  }
  plVar26 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  local_298 = &g_02572358;
  *plVar26 = (int64_t)&g_02572358;
  local_2a0 = g_02572370;
  (*g_02572370)();
  local_100 = plVar26;
  if ((char)local_ac == '\0') {
    local_120 = (int64_t *)0x0;
  }
  else {
    plVar26 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar26 = (int64_t)local_298;
    (*local_2a0)();
    local_58[0] = local_58[0] & 0xffffff00;
    local_120 = plVar26;
    local_60 = plVar26;
    FUN_00d21140();
    if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_25c = 0;
  }
  local_ac = local_ac ^ 1;
  plVar26 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar26 + 0x18))();
  local_138 = plVar26;
  plVar26 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar26 + 0x18))();
  local_188 = plVar26;
  plVar26 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar26 + 0x18))();
  local_180 = plVar26;
  plVar26 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar26 + 0x18))();
  local_178 = plVar26;
  plVar26 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar26 + 0x18))();
  local_170 = plVar26;
  plVar26 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar26 + 0x18))();
  local_160 = plVar26;
  plVar26 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar26 + 0x18))();
  local_158 = plVar26;
  plVar26 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar26 + 0x18))();
  local_150 = plVar26;
  plVar26 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar26 + 0x18))();
  local_168 = plVar26;
  plVar26 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar26 + 0x18))();
  local_140 = plVar26;
  plVar26 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar26 + 0x18))();
  local_148 = plVar26;
  plVar26 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar26 + 0x18))();
  local_270 = plVar26;
  if (*(int *)((int64_t)local_c8 + 0xc) < 1) {
    local_e0 = (int64_t *)0x0;
  }
  else {
    local_89 = local_89 & local_2a8._0_1_;
    local_ec = CONCAT31((int3)(local_ec >> 8),
                        (byte)local_ec &
                        ((byte)local_e0 | (byte)local_f8 | (byte)local_e8 |
                        (byte)local_78 | (byte)local_38 | local_89 |
                        (byte)local_110 | (byte)local_a0 | (byte)local_130));
    local_2cc = (float)local_a8;
    local_2a8 = g_02417080 * dVar38;
    dVar10 = (double)((uint64_t)((double)local_2cc + g_023b19a0) & g_023908f0);
    local_bb = g_0240e410 < (double)((uint64_t)(local_b8 + g_023b19a0) & g_023908f0) |
               local_d8[0];
    lVar18 = 0;
    local_e0 = (int64_t *)0x0;
    do {
      plVar26 = *(int64_t **)(local_c8[2] + lVar18 * 8);
      plVar19 = local_c8;
      local_a0 = lVar18;
      if (plVar26 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pVar23 = (void*)plVar19;
      local_80 = plVar26;
      pvVar17 = _pthread_getspecific(pVar23);
      if ((pvVar17 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
        pVar23 = (void*)local_80;
      }
      FUN_013de560();
      local_78 = local_60;
      if (((char)local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b00();
        if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar17 = _pthread_getspecific(pVar23);
      if ((pvVar17 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
        pVar23 = (void*)local_80;
      }
      lVar18 = FUN_013de650();
      pvVar17 = _pthread_getspecific(pVar23);
      if ((pvVar17 != (void *)0x0) && (lVar32 = FUN_00e8b990(), lVar32 != 0)) {
        pVar23 = (void*)local_80;
      }
      local_280 = (int64_t *)FUN_013de790();
      local_290 = lVar18;
      local_e8 = local_280;
      if (local_78 == (int64_t *)0x0) {
LAB_01844860:
        cVar13 = '\0';
        _uStack_d0 = 0;
        local_d8 = (uint8_t  [8])g_0238fee8;
      }
      else {
        pvVar17 = _pthread_getspecific(pVar23);
        if (pvVar17 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_388 = '\0';
        local_390 = (int64_t *)0x0;
        local_380 = 0;
        local_378 = '\0';
        local_370 = 0;
        local_368 = '\0';
        pplVar27 = &local_280;
        in_R8 = &local_390;
        FUN_014c7490(pplVar27,g_02390124,g_02390124,g_02390124);
        pVar23 = (void*)pplVar27;
        if ((local_368 != '\0') && (local_370 != 0)) {
          FUN_00d50b20();
        }
        if ((local_378 != '\0') && (local_380 != 0)) {
          FUN_00d50b20();
        }
        if ((local_388 != '\0') && (local_390 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)local_ec == '\0') goto LAB_01844860;
        pvVar17 = _pthread_getspecific(pVar23);
        if ((pvVar17 != (void *)0x0) && (lVar32 = FUN_00e8b990(), lVar32 != 0)) {
          pVar23 = (void*)local_78;
        }
        cVar13 = FUN_014c4200();
        _uStack_d0 = 0;
        local_d8 = (uint8_t  [8])g_0238fee8;
        if (cVar13 != '\0') {
          _uStack_d0 = 0;
          local_d8 = (uint8_t  [8])local_2b0;
        }
      }
      if ((char)local_104 == '\0') {
        _uStack_d0 = 0;
        local_d8 = (uint8_t  [8])local_2b0;
      }
      local_38 = (int64_t *)((int64_t)local_e8 + lVar18);
      if (local_89 == 0) {
LAB_01844a54:
        bVar35 = g_0238fee8 < (double)local_d8;
        if ((cVar13 != '\0') && (g_0238fee8 < (double)local_d8)) {
          pvVar17 = _pthread_getspecific(pVar23);
          if (pvVar17 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014c3e60();
          FUN_00d23310();
          plVar26 = local_60;
          local_88[0]._0_1_ = (char)local_58[0];
          puVar28 = local_88;
          puVar20 = local_58;
          if ((char)local_58[0] == '\0') {
            puVar20 = puVar28;
          }
          *(void*)puVar20 = 0;
          if (((char)local_58[0] != '\0') && (plVar26 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pVar23 = (void*)puVar28;
          if (((char)local_88[0] == '\0') && (plVar26 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar17 = _pthread_getspecific(pVar23);
          if (pvVar17 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar32 = FUN_014bcde0();
          if (lVar32 == 0) {
            cVar13 = '\0';
          }
          bVar35 = lVar32 != 0 && g_0238fee8 < (double)local_d8;
          if (plVar26 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        lVar18 = local_290 - lVar18;
        lVar33 = (int64_t)local_38 - (local_290 + (int64_t)local_280);
        lVar32 = lVar18;
        if ((double)local_d8 < g_0238fee8) {
          local_110 = FUN_00e7dae0(SUB84((double)lVar18 * (double)local_d8,0));
          FUN_00e7dae0(SUB84((double)lVar33 * (double)local_d8,0));
          lVar32 = local_110;
        }
      }
      else {
        local_60 = local_80;
        local_58[0] = local_58[0] & 0xffffff00;
        cVar14 = FUN_00c9ff50();
        uVar37 = extraout_XMM0_Da_01;
        if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          uVar37 = FUN_00d50b20();
        }
        if (cVar14 != '\0') {
          local_360 = local_80;
          local_358 = '\0';
          FUN_0133ae40(uVar37,&local_360);
          plVar26 = local_60;
          if ((char)local_58[0] == '\0') {
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b00();
              if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_58[0] = local_58[0] & 0xffffff00;
          }
          if ((local_358 != '\0') && (local_360 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar17 = _pthread_getspecific(pVar23);
          if (pvVar17 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_d8 = (uint8_t  [8])FUN_01264170();
          uStack_d0 = extraout_XMM0_Dc;
          uStack_cc = extraout_XMM0_Dd;
          pvVar17 = _pthread_getspecific(pVar23);
          if ((pvVar17 != (void *)0x0) && (lVar32 = FUN_00e8b990(), lVar32 != 0)) {
            pVar23 = (void*)local_80;
          }
          dVar8 = (double)FUN_013de9b0();
          uVar37 = local_d8._12_4_;
          uStack_d0 = local_d8._8_4_;
          local_d8 = (uint8_t  [8])(local_d8 / dVar8);
          uStack_cc = uVar37;
          if (plVar26 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_01844a54;
        }
        lVar18 = local_290 - lVar18;
        bVar35 = false;
        _uStack_d0 = 0;
        local_d8 = (uint8_t  [8])g_0238fee8;
        lVar32 = lVar18;
      }
      local_110 = lVar32;
      pVar23 = (void*)lVar18;
      local_130 = FUN_00e7dae0(SUB84(local_2a8,0));
      if (local_78 == (int64_t *)0x0) {
        local_a8 = -NAN;
        local_f8 = 0;
      }
      else {
        pvVar17 = _pthread_getspecific(pVar23);
        if ((pvVar17 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
          pVar23 = (void*)local_78;
        }
        cVar14 = FUN_014c4200();
        local_a8 = -NAN;
        if (cVar14 == '\0') {
          local_f8 = 0;
        }
        else {
          local_f8 = 0;
          if (cVar13 != '\0') {
            pvVar17 = _pthread_getspecific(pVar23);
            if (pvVar17 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014c3e60();
            FUN_00d23310();
            plVar26 = local_60;
            local_88[0]._0_1_ = (char)local_58[0];
            puVar28 = local_88;
            puVar20 = local_58;
            if ((char)local_58[0] == '\0') {
              puVar20 = puVar28;
            }
            *(void*)puVar20 = 0;
            if (((char)local_58[0] != '\0') && (plVar26 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pVar23 = (void*)puVar28;
            if (((char)local_88[0] == '\0') && (plVar26 != (int64_t *)0x0)) {
              FUN_00d50b00();
            }
            if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (bVar35) {
              pvVar17 = _pthread_getspecific(pVar23);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              lVar18 = FUN_014bcde0();
              pvVar17 = _pthread_getspecific(pVar23);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_a8 = (double)FUN_014bcdd0();
              pvVar17 = _pthread_getspecific(pVar23);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar15 = FUN_014bcdf0();
            }
            else {
              pvVar17 = _pthread_getspecific(pVar23);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              lVar18 = FUN_014bcdb0();
              pvVar17 = _pthread_getspecific(pVar23);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_a8 = (double)FUN_014bcda0();
              pvVar17 = _pthread_getspecific(pVar23);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar15 = FUN_014bcdc0();
            }
            local_130 = (int64_t)iVar15;
            local_f8 = lVar18;
            if (plVar26 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        pvVar17 = _pthread_getspecific(pVar23);
        if (pvVar17 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar26 = (int64_t *)FUN_014c4220();
        if (plVar26 != (int64_t *)0xffffffffffffffff) {
          local_38 = plVar26;
        }
      }
      lVar18 = FUN_00e7dae0(SUB84((double)(int64_t)local_e8 * (double)local_d8,0));
      uVar37 = FUN_00d468f0();
      local_248 = local_70;
      plVar26 = local_e8;
      local_240 = 0;
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          uVar37 = FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_240 = '\x01';
      local_60 = local_80;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00ca0840(uVar37,&local_60);
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_240 != '\0') && (local_248 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar37 = FUN_00d470c0(local_d8._0_4_);
      local_238 = local_70;
      local_230 = 0;
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          uVar37 = FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_230 = '\x01';
      local_60 = local_80;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00ca0840(uVar37,&local_60);
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_230 != '\0') && (local_238 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar37 = FUN_00d468f0();
      local_228 = local_70;
      local_220 = 0;
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          uVar37 = FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_220 = '\x01';
      local_60 = local_80;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00ca0840(uVar37,&local_60);
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_220 != '\0') && (local_228 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar37 = FUN_00d468f0();
      local_218 = local_70;
      local_210 = 0;
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          uVar37 = FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_210 = '\x01';
      local_60 = local_80;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00ca0840(uVar37,&local_60);
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_210 != '\0') && (local_218 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar37 = FUN_00d468f0();
      local_208 = local_70;
      local_200 = 0;
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          uVar37 = FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_200 = '\x01';
      local_60 = local_80;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00ca0840(uVar37,&local_60);
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_200 != '\0') && (local_208 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar37 = FUN_00d468f0();
      local_1f8 = local_70;
      local_1f0 = 0;
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          uVar37 = FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_1f0 = '\x01';
      local_60 = local_80;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00ca0840(uVar37,&local_60);
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1f0 != '\0') && (local_1f8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar37 = FUN_00d468f0();
      local_1e8 = local_70;
      local_1e0 = 0;
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          uVar37 = FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_1e0 = '\x01';
      local_60 = local_80;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00ca0840(uVar37,&local_60);
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar37 = FUN_00d468f0();
      local_1d8 = local_70;
      local_1d0 = 0;
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          uVar37 = FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_1d0 = '\x01';
      local_60 = local_80;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00ca0840(uVar37,&local_60);
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1d0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar37 = FUN_00d46dc0(local_2cc);
      local_1c8 = local_70;
      local_1c0 = 0;
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          uVar37 = FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_1c0 = '\x01';
      local_60 = local_80;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00ca0840(uVar37,&local_60);
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar37 = FUN_00d470c0(SUB84(local_b8,0));
      local_1b8 = local_70;
      local_1b0 = 0;
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          uVar37 = FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_1b0 = '\x01';
      local_60 = local_80;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00ca0840(uVar37,&local_60);
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar37 = FUN_00d46dc0(local_268);
      local_1a8 = local_70;
      local_1a0 = 0;
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          uVar37 = FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_1a0 = '\x01';
      local_60 = local_80;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00ca0840(uVar37,&local_60);
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar37 = FUN_00d46dc0(local_264);
      local_198 = local_70;
      local_190 = 0;
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          uVar37 = FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_190 = '\x01';
      local_60 = local_80;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00ca0840(uVar37,&local_60);
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((g_0240e410 < (double)((uint64_t)((double)local_d8 + g_023b19a0) & g_023908f0) ||
           g_0240e410 < dVar10) | local_bb) == 1) {
        if (local_120 == (int64_t *)0x0) {
          local_350 = local_80;
          local_348 = '\0';
          FUN_013359c0();
          plVar19 = local_70;
          if (local_68 == '\0') {
            if (local_70 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_60 = plVar19;
          local_58[0] = local_58[0] & 0xffffff00;
          FUN_00d21140();
          if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar19 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_348 != '\0') && (local_350 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60 = local_80;
          local_58[0] = local_58[0] & 0xffffff00;
          FUN_00d21140();
          if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_80 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_e0 = (int64_t *)((int64_t)local_e0 + (lVar18 - (int64_t)plVar26));
      lVar18 = local_a0 + 1;
    } while (lVar18 < *(int *)((int64_t)local_c8 + 0xc));
  }
  if (g_0239011c <= (float)dVar39) {
    if ((local_120 == (int64_t *)0x0) || (*(int *)((int64_t)local_120 + 0xc) == 0))
    goto LAB_01845b81;
    local_a0 = *(int64_t *)local_120[2];
    if (local_a0 == 0) goto LAB_01845b81;
    local_b8 = (double)CONCAT71((int7)((uint64_t)local_120[2] >> 8),1);
    FUN_00d50b00();
  }
  else {
    FUN_00d216c0();
    if (0 < *(int *)((int64_t)local_c8 + 0xc)) {
      lVar18 = 0;
      do {
        lVar32 = *(int64_t *)(local_c8[2] + lVar18 * 8);
        plVar26 = local_c8;
        if (lVar32 != 0) {
          FUN_00d50b00();
        }
        pVar23 = (void*)plVar26;
        pvVar17 = _pthread_getspecific(pVar23);
        if (pvVar17 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar39 = (double)FUN_013de8d0();
        if (dVar39 < local_2b8) {
          pvVar17 = _pthread_getspecific(pVar23);
          if (pvVar17 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar16 = FUN_013dea30();
          if (local_2b8 <= (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_02) &&
              (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_02) != local_2b8) {
            if (lVar32 == 0) {
              local_b8 = 0.0;
            }
            else {
              local_b8 = (double)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
              FUN_00d50b00();
            }
            local_338 = '\0';
            local_340 = lVar32;
            FUN_013359c0();
            plVar26 = local_70;
            if (local_68 == '\0') {
              if (local_70 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_60 = plVar26;
            local_58[0] = local_58[0] & 0xffffff00;
            FUN_00d21140();
            if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar26 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_338 != '\0') && (local_340 != 0)) {
              FUN_00d50b20();
            }
            if (lVar32 == 0) {
              local_a0 = 0;
            }
            else {
              FUN_00d50b20();
              local_a0 = lVar32;
            }
            goto LAB_01845b93;
          }
        }
        if (lVar32 != 0) {
          FUN_00d50b20();
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < *(int *)((int64_t)local_c8 + 0xc));
    }
LAB_01845b81:
    local_a0 = 0;
    local_b8 = 0.0;
  }
LAB_01845b93:
  plVar26 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar26 + 0x18))();
  uVar31 = local_25c;
  local_80 = plVar26;
  if (0 < *(int *)((int64_t)local_100 + 0xc)) {
    local_78 = (int64_t *)CONCAT44(local_78._4_4_,(float)dVar1);
    local_d8._0_4_ = (float)dVar2;
    local_38 = (int64_t *)CONCAT44(local_38._4_4_,(float)dVar3);
    local_e8 = (int64_t *)CONCAT44(local_e8._4_4_,(float)dVar4);
    local_a8 = (double)CONCAT44(local_a8._4_4_,(float)dVar5);
    local_f8 = CONCAT44(local_f8._4_4_,(float)dVar6);
    local_130 = CONCAT44(local_130._4_4_,(float)dVar7);
    lVar18 = 0;
    local_110 = CONCAT44(local_110._4_4_,(uint)(local_ba & local_b9));
    do {
      lVar32 = *(int64_t *)(local_100[2] + lVar18 * 8);
      if (lVar32 != 0) {
        FUN_00d50b00();
      }
      if (*(int *)(lVar32 + 0xc) != 0) {
        plVar26 = (int64_t *)**(void**)(lVar32 + 0x10);
        if (plVar26 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_620 = local_178;
        local_618 = 0;
        local_610 = local_170;
        local_608 = 0;
        local_600 = local_160;
        local_5f8 = 0;
        local_5f0 = local_158;
        local_5e8 = 0;
        local_5e0 = local_150;
        local_5d8 = 0;
        local_5d0 = local_168;
        local_5c8 = 0;
        local_5c0 = local_140;
        local_5b8 = 0;
        local_5b0 = local_148;
        local_5a8 = 0;
        local_5a0 = local_270;
        local_598 = 0;
        local_590 = *in_RDX;
        local_588 = 0;
        local_580 = *local_558;
        local_578 = 0;
        local_570 = *local_560;
        local_568 = 0;
        in_R8 = &local_620;
        uVar37 = FUN_0183dda0(local_78._0_4_,local_2bc,local_d8._0_4_,
                              (uint64_t)local_38 & 0xffffffff,&local_5c0,&local_5b0,&local_5a0,
                              local_114 < g_02394244,g_0239011c < local_114,uVar31 & 0xff,
                              (uint32_t)local_110,g_02391038 <= dVar9,g_02417068 < dVar9,
                              local_260,local_2b8,local_2c0,local_2c4,local_2c8);
        plVar19 = local_60;
        if ((char)local_58[0] == '\0') {
          if (local_60 != (int64_t *)0x0) {
            uVar37 = FUN_00d50b00();
            goto LAB_01845fad;
          }
        }
        else if (local_60 != (int64_t *)0x0) {
LAB_01845fad:
          local_330 = plVar19;
          local_328 = '\0';
          local_58[0] = local_58[0] & 0xffffff00;
          local_60 = plVar26;
          FUN_00ca0840(uVar37,&local_60);
          if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_328 != '\0') && (local_330 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        if (plVar26 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)((int64_t)local_100 + 0xc));
  }
  plVar26 = local_100;
  pvVar17 = _pthread_getspecific((void*)local_100);
  plVar19 = local_98;
  if ((pvVar17 != (void *)0x0) && (lVar18 = FUN_00e8b990(), plVar19 = local_98, lVar18 != 0)) {
    plVar26 = local_98;
    plVar19 = (int64_t *)local_98[(uint64_t)(*(uint *)(lVar18 + 0x154) & 1) + 4];
  }
  local_a8 = (double)(**(code **)(*plVar19 + 0x3a0))();
  if (local_a0 == 0) {
    pvVar17 = _pthread_getspecific((void*)plVar26);
    plVar19 = local_98;
    if ((pvVar17 != (void *)0x0) && (lVar18 = FUN_00e8b990(), plVar19 = local_98, lVar18 != 0)) {
      plVar26 = local_98;
      plVar19 = (int64_t *)local_98[(uint64_t)(*(uint *)(lVar18 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar19 + 0x378))();
    puVar21 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar21 = local_298;
    (*local_2a0)();
    local_d8 = (uint8_t  [8])puVar21;
    if (0 < (int)local_a8._0_4_) {
      plVar19 = (int64_t *)0x0;
      do {
        pVar23 = (void*)plVar26;
        FUN_00c8e690();
        plVar26 = local_60;
        if (((char)local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b00();
          if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        local_58[0] = local_58[0] & 0xffffff00;
        local_60 = plVar26;
        FUN_00d21140();
        if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_60 = (int64_t *)plVar26[2];
        pvVar17 = _pthread_getspecific(pVar23);
        plVar26 = local_98;
        if ((pvVar17 != (void *)0x0) && (lVar18 = FUN_00e8b990(), plVar26 = local_98, lVar18 != 0))
        {
          plVar26 = (int64_t *)local_98[(uint64_t)(*(uint *)(lVar18 + 0x154) & 1) + 4];
        }
        iVar15 = (int)plVar19;
        in_R8 = (int64_t **)((int64_t)&MACH_HEADER.magic + 1);
        (**(code **)(*plVar26 + 0x388))(plVar19,SUB84(g_0238fee8,0),1,0);
        FUN_00d50b20();
        uVar31 = iVar15 + 1;
        plVar26 = plVar19;
        plVar19 = (int64_t *)(uint64_t)uVar31;
      } while (local_a8._0_4_ != uVar31);
    }
    plVar26 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar26 = (int64_t)local_298;
    uVar37 = (*local_2a0)();
    local_78 = plVar26;
    if (0 < (int)local_a8._0_4_) {
      uVar29 = (uint64_t)local_a8 & 0xffffffff;
      do {
        FUN_00c8e690();
        plVar26 = local_60;
        if (((char)local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b00();
          if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        local_58[0] = local_58[0] & 0xffffff00;
        local_60 = plVar26;
        FUN_00d21140();
        if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar37 = FUN_00d50b20();
        uVar31 = (int)uVar29 - 1;
        uVar29 = (uint64_t)uVar31;
      } while (uVar31 != 0);
    }
    if (0 < *(int *)((int64_t)local_c8 + 0xc)) {
      local_e8 = (int64_t *)((uint64_t)local_a8 & 0xffffffff);
      lVar18 = 0;
      do {
        plVar26 = *(int64_t **)(local_c8[2] + lVar18 * 8);
        plVar19 = local_c8;
        if (plVar26 != (int64_t *)0x0) {
          uVar37 = FUN_00d50b00();
        }
        local_308 = '\0';
        local_310 = plVar26;
        local_e0 = plVar26;
        FUN_0133ae40(uVar37,&local_310);
        iVar15 = FUN_00d45790();
        uVar37 = extraout_XMM0_Da_04;
        local_f8 = lVar18;
        if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          uVar37 = FUN_00d50b20();
        }
        if ((local_308 != '\0') && (local_310 != (int64_t *)0x0)) {
          uVar37 = FUN_00d50b20();
        }
        if (0 < (int)local_a8._0_4_) {
          local_38 = (int64_t *)(int64_t)iVar15;
          plVar34 = (int64_t *)0x0;
          do {
            pVar23 = (void*)plVar19;
            lVar18 = *(int64_t *)(*(int64_t *)((int64_t)local_d8 + 0x10) + (int64_t)plVar34 * 8)
            ;
            if (lVar18 != 0) {
              FUN_00d50b00();
            }
            if (*(int64_t *)(local_78[2] + (int64_t)plVar34 * 8) != 0) {
              FUN_00d50b00();
            }
            local_58[0] = local_58[0] & 0xffffff00;
            local_60 = plVar26;
            cVar13 = FUN_00c9ff50();
            uVar37 = extraout_XMM0_Da_05;
            if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
              uVar37 = FUN_00d50b20();
            }
            if (cVar13 == '\0') {
              pvVar17 = _pthread_getspecific(pVar23);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013de650();
              pvVar17 = _pthread_getspecific(pVar23);
              if (pvVar17 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar15 = FUN_013de790();
              plVar19 = local_38;
              _memcpy(local_38,(void *)(int64_t)(iVar15 << 2),(size_t)in_R8);
            }
            else {
              local_2f8 = '\0';
              local_300 = plVar26;
              FUN_0133ae40(uVar37,&local_300);
              plVar26 = local_60;
              if ((char)local_58[0] == '\0') {
                if (local_60 != (int64_t *)0x0) {
                  FUN_00d50b00();
                  if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              else {
                local_58[0] = local_58[0] & 0xffffff00;
              }
              if ((local_2f8 != '\0') && (local_300 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              lVar32 = *(int64_t *)(plVar26[2] + (int64_t)plVar34 * 8);
              if (lVar32 != 0) {
                FUN_00d50b00();
              }
              uVar31 = *(uint *)(lVar32 + 0x18);
              uVar24 = uVar31 + 3;
              if (-1 < (int)uVar31) {
                uVar24 = uVar31;
              }
              plVar19 = (int64_t *)(uint64_t)(uVar24 & 0xfffffffc);
              _memcpy(plVar19,(void *)(int64_t)(int)(uVar24 & 0xfffffffc),(size_t)in_R8);
              FUN_00d50b20();
              FUN_00d50b20();
              plVar26 = local_e0;
            }
            uVar37 = FUN_00d50b20();
            if (lVar18 != 0) {
              uVar37 = FUN_00d50b20();
            }
            plVar34 = (int64_t *)((int64_t)plVar34 + 1);
          } while (local_e8 != plVar34);
        }
        if (plVar26 != (int64_t *)0x0) {
          uVar37 = FUN_00d50b20();
        }
        lVar18 = local_f8 + 1;
      } while (lVar18 < *(int *)((int64_t)local_c8 + 0xc));
    }
    bVar35 = true;
    if (local_d8 != (uint8_t  [8])0x0) {
      FUN_00d50b20();
    }
  }
  else {
    local_320 = local_a0;
    local_318 = '\0';
    FUN_0133ae40(extraout_XMM0_Da_03,&local_320);
    local_78 = local_60;
    if (local_60 == (int64_t *)0x0) {
      local_78 = (int64_t *)0x0;
      bVar35 = false;
joined_r0x0184612a:
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((char)local_58[0] == '\0') {
        FUN_00d50b00();
        bVar35 = true;
        goto joined_r0x0184612a;
      }
      local_58[0] = local_58[0] & 0xffffff00;
      bVar35 = true;
    }
    if ((local_318 != '\0') && (local_320 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_78 != (int64_t *)0x0) {
    if (*in_RDX == 0) {
      FUN_00ce71c0();
      uVar37 = (**(code **)(*local_280 + 0x368))();
      local_50 = local_290;
      local_40 = g_027d67f0;
      g_027d67f0 = g_027d67f0 + 1;
      local_58[0] = 2;
      local_60 = &g_024c5048;
      local_48 = 0;
      if (local_290 != 0) {
        uVar37 = FUN_00d50b00();
      }
      local_48 = '\x01';
      local_60 = (int64_t *)&g_025df2a0;
      FUN_00d8cb40(uVar37,&local_60);
      plVar26 = local_70;
      if (local_68 == '\0') {
        if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
           (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68 = '\0';
      }
      local_60 = &g_024c5048;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_288 != '\0') && (local_290 != 0)) {
        FUN_00d50b20();
      }
      if ((local_278 != '\0') && (local_280 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00c8e690();
      plVar19 = local_60;
      if (((char)local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b00();
        if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00c92170();
      lVar18 = plVar19[2];
      if (0 < (int)local_a8._0_4_) {
        uVar29 = (uint64_t)(local_a8._0_4_ & 3);
        if (((uint64_t)local_a8 & 0xffffffff) - 1 < 3) {
          uVar30 = 0;
        }
        else {
          uVar30 = 0;
          do {
            *(void*)(lVar18 + uVar30 * 8) =
                 *(void*)(*(int64_t *)(local_78[2] + uVar30 * 8) + 0x10);
            *(void*)(lVar18 + 8 + uVar30 * 8) =
                 *(void*)(*(int64_t *)(local_78[2] + 8 + uVar30 * 8) + 0x10);
            *(void*)(lVar18 + 0x10 + uVar30 * 8) =
                 *(void*)(*(int64_t *)(local_78[2] + 0x10 + uVar30 * 8) + 0x10);
            *(void*)(lVar18 + 0x18 + uVar30 * 8) =
                 *(void*)(*(int64_t *)(local_78[2] + 0x18 + uVar30 * 8) + 0x10);
            uVar30 = uVar30 + 4;
          } while ((local_a8._0_4_ & 0xfffffffc) != uVar30);
        }
        for (; uVar29 != 0; uVar29 = uVar29 - 1) {
          *(void*)(lVar18 + uVar30 * 8) =
               *(void*)(*(int64_t *)(local_78[2] + uVar30 * 8) + 0x10);
          uVar30 = uVar30 + 1;
        }
      }
      iVar15 = *(int *)(*(int64_t *)local_78[2] + 0x18);
      iVar25 = iVar15 + 3;
      if (-1 < iVar15) {
        iVar25 = iVar15;
      }
      local_2f0 = plVar26;
      local_2e8 = '\0';
      local_2e0 = 0;
      local_2d8 = '\0';
      FUN_015b6740(SUB84(dVar38,0),(int64_t)(iVar25 >> 2),2 - (uint)(local_a8._0_4_ == 1));
      if ((local_2d8 != '\0') && (local_2e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_2e8 != '\0') && (local_2f0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar19 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar26 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (bVar35) {
      FUN_00d50b20();
    }
  }
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_b8._0_1_ != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_270 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_148 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_140 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_168 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_150 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_158 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_160 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_170 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_178 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_180 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_188 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_138 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_ac == '\0' && local_120 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_100 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_128 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_98 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01846ba6:
  FUN_00d50b20();
  return;
}

