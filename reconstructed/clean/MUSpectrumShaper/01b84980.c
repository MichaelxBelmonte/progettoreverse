// Function: FUN_01b84980
// Address: 01b84980
// Size: 8719 bytes
// Class: MUSpectrumShaper
// String references:
//   "%.1f"
// === MUSpectrumShaper properties ===
//   GNInt           _assembledElementRendererCount
//   MUSpectrumShaperSpectrumType _spectrumType
//   bool            _processSpectrumShaper
//   bool            _canUseSpectrumShaper
//   bool            _processEqualizer
//   bool            _processLowerSpectrum
//   bool            _processUpperSpectrum
//   bool            _isBypassed
//   GNInt           _overallSpectrumFundamentalPitchIndex
//   float           _overallSpectrumFreqPerBin
//   float           _referenceMagnitudeSum
//   float           _maximumMagnitudeSum
//   float           _synthAmps
//   float           _synthPhases
//   float           _emphasizePow
//   float           _allGain
//   float           _ampDifferencePow
//   float           _clipLimit
//   bool            _didRequestCacheValidation
//   bool            _appliedEqualizerFactorsAreValid
//   bool            _appliedEqualizerFormantFactorsAreValid
//   bool            _processSpectrumShaperIsValid
//   float           _startValue
//   float           _riseDuration
//   float           _riseEndValue
//   float           _decayStartTime
//   float           _decayEndTime
//   float           _decayFactor
//   float           _endValue
//   bool            _needsProcessEnvelope
//   ... +35 more


void FUN_01b84980(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint64_t uVar8;
  void*puVar9;
  uint64_t uVar10;
  undefined7 uVar13;
  undefined7 extraout_var;
  void*puVar11;
  void *pvVar12;
  byte bVar14;
  void* pVar15;
  void*puVar16;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar17;
  int64_t *plVar18;
  int64_t *plVar19;
  int64_t **pplVar20;
  bool bVar21;
  uint32_t extraout_XMM0_Da;
  float fVar23;
  float fVar24;
  float fVar25;
  uint32_t uVar22;
  uint32_t extraout_XMM0_Db;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint64_t extraout_XMM0_Qa;
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  float fVar43;
  float fVar44;
  uint64_t in_XMM1_Qb;
  uint8_t auVar45 [16];
  uint8_t auVar46 [16];
  uint8_t auVar47 [16];
  uint8_t auVar48 [16];
  uint8_t auVar49 [16];
  uint8_t auVar50 [16];
  uint8_t auVar51 [16];
  uint8_t auVar52 [16];
  uint8_t auVar53 [16];
  uint8_t auVar54 [16];
  uint8_t auVar55 [16];
  uint8_t auVar56 [16];
  uint8_t auVar57 [16];
  uint8_t auVar58 [16];
  uint8_t auVar59 [16];
  uint8_t auVar60 [16];
  uint8_t auVar61 [16];
  uint8_t auVar62 [16];
  uint8_t auVar63 [16];
  uint8_t auVar64 [16];
  uint8_t auVar65 [16];
  uint8_t auVar66 [16];
  uint8_t auVar67 [16];
  float fVar68;
  uint8_t auVar69 [16];
  uint8_t auVar70 [16];
  uint8_t auVar71 [16];
  float fVar72;
  int64_t *local_400;
  char local_3f8;
  float local_3e8;
  float fStack_3e4;
  uint32_t uStack_3e0;
  float fStack_3dc;
  int64_t local_3b8;
  char local_3b0;
  int64_t local_3a8;
  char local_3a0;
  int64_t *local_398;
  char local_390;
  int64_t local_388;
  char local_380;
  int64_t *local_378;
  char local_370;
  int64_t local_368;
  char local_360;
  int64_t local_358;
  char local_350;
  int64_t *local_348;
  char local_340;
  int64_t *local_338;
  char local_330;
  int64_t local_328;
  char local_320;
  void*local_318;
  char local_310;
  int64_t *local_308;
  char local_300;
  int64_t *local_2f8;
  char local_2f0;
  int64_t local_2e8;
  char local_2e0;
  int64_t *local_2d8;
  char local_2d0;
  int64_t local_2c8;
  char local_2c0;
  void*local_2b8;
  char local_2b0;
  int64_t local_2a8;
  char local_2a0;
  void*local_298;
  char local_290;
  int64_t local_288;
  char local_280;
  void*local_278;
  char local_270;
  int64_t local_268;
  char local_260;
  void*local_258;
  char local_250;
  uint8_t local_248 [16];
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  uint8_t local_228 [8];
  float fStack_220;
  float fStack_21c;
  uint8_t local_218 [16];
  uint8_t local_208 [16];
  uint8_t local_1f8 [12];
  float fStack_1ec;
  void*local_1e0;
  uint8_t local_1d8 [16];
  int64_t *local_1c8;
  char local_1c0;
  int64_t *local_1b8;
  char local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  code *local_108;
  void*local_100;
  uint8_t local_f8 [16];
  int64_t *local_e0;
  uint8_t local_d8 [8];
  uint64_t uStack_d0;
  int64_t *local_a8;
  float fStack_94;
  uint8_t local_78 [8];
  float fStack_70;
  float fStack_6c;
  int64_t *local_68;
  uint32_t local_60;
  float local_5c;
  uint8_t local_58 [16];
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01e3f820();
  pplVar20 = &local_40;
  uVar8 = param_2;
  uVar10 = in_XMM1_Qb;
  (**(code **)(*this_ptr + 0x640))();
  plVar17 = local_40;
  FUN_00209700();
  if (plVar17 == (int64_t *)0x0) {
LAB_01b849fb:
    pplVar20 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar17 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 == '\0') goto LAB_01b849fb;
  }
  plVar17 = *pplVar20;
  if (*(char *)(pplVar20 + 1) == '\0') {
    if (plVar17 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar20 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar13 = (undefined7)((uint64_t)pplVar20 >> 8);
  local_e0 = plVar17;
  if (plVar17 == (int64_t *)0x0) {
    FUN_01d39800();
    plVar19 = local_40;
    if (local_40 == (int64_t *)0x0) {
      local_48 = (int64_t *)CONCAT44(local_48._4_4_,g_02390d34);
      bVar5 = false;
      local_a8 = (int64_t *)0x0;
      bVar6 = false;
      uVar13 = 0;
      plVar19 = (int64_t *)0x0;
    }
    else {
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b00();
      local_48 = (int64_t *)CONCAT44(local_48._4_4_,g_02390d34);
      bVar5 = true;
      local_a8 = plVar19;
      bVar6 = true;
    }
  }
  else {
    local_48 = (int64_t *)CONCAT44(local_48._4_4_,(int)plVar17[0x36]);
    FUN_01e3f820();
    local_3b8 = *arg1;
    local_3b0 = '\0';
    local_58._4_4_ = extraout_XMM0_Db;
    local_58._0_4_ = extraout_XMM0_Da;
    local_58._8_4_ = (int)extraout_XMM0_Qb;
    local_58._12_4_ = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
    uStack_d0 = uVar10;
    local_d8 = (uint8_t  [8])uVar8;
    (**(code **)(*plVar17 + 0x6a0))(0,&local_3b8);
    plVar19 = local_40;
    if (local_40 == (int64_t *)0x0) {
      bVar6 = false;
      uVar13 = 0;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar6 = true;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar6 = true;
    }
    if ((local_3b0 != '\0') && (local_3b8 != 0)) {
      FUN_00d50b20();
    }
    local_3a8 = *arg1;
    local_3a0 = '\0';
    FUN_00d05530();
    (**(code **)(*plVar17 + 0x6a0))(g_02390118 + local_48._0_4_,&local_3a8);
    local_a8 = local_40;
    if (local_40 == (int64_t *)0x0) {
      bVar5 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar5 = true;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar5 = true;
    }
    if ((local_3a0 != '\0') && (local_3a8 != 0)) {
      FUN_00d50b20();
    }
  }
  auVar29._0_8_ = _powf();
  auVar29._8_8_ = extraout_XMM0_Qb_00;
  fStack_94 = (float)((uint64_t)param_2 >> 0x20);
  auVar26._4_12_ = auVar29._4_12_;
  auVar26._0_4_ = (float)auVar29._0_8_ + fStack_94 * fStack_94;
  uVar22 = _powf(auVar26._0_8_);
  local_58._0_4_ = uVar22;
  uVar8 = FUN_01d39800();
  plVar17 = local_40;
  if (local_40 == (int64_t *)0x0) {
    local_d8._0_4_ = (int)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
    plVar17 = (int64_t *)0x0;
    uVar8 = 0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    auVar45._12_4_ = 0;
    auVar45._0_12_ = stack0xffffffffffffff2c;
    _local_d8 = auVar45 << 0x20;
    uVar8 = CONCAT71(uVar13,1);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
      uVar8 = CONCAT71(uVar13,1);
      auVar71._12_4_ = 0;
      auVar71._0_12_ = stack0xffffffffffffff2c;
      _local_d8 = auVar71 << 0x20;
    }
  }
  else {
    auVar4._12_4_ = 0;
    auVar4._0_12_ = stack0xffffffffffffff2c;
    _local_d8 = auVar4 << 0x20;
    uVar8 = CONCAT71(uVar13,1);
  }
  local_f8._0_8_ = uVar8;
  if (this_ptr[0x29] == 0) {
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_68 + 0x470))();
    local_1b8 = local_40;
    local_1b0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_1b0 = '\x01';
    FUN_01d488d0();
    if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01ab5170();
    local_1c8 = local_40;
    local_1c0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_1c0 = '\x01';
    FUN_01d488d0();
    if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_398 = local_a8;
  local_390 = '\0';
  (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
  if ((local_390 != '\0') && (local_398 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_e0 != (int64_t *)0x0) {
    local_388 = *arg1;
    local_380 = '\0';
    local_370 = '\0';
    local_378 = plVar19;
    FUN_01ee9430();
    if ((local_370 != '\0') && (local_378 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_380 != '\0') && (local_388 != 0)) {
      FUN_00d50b20();
    }
  }
  local_48 = this_ptr + 0x29;
  if (*local_48 == 0) {
    uVar8 = (**(code **)(*this_ptr + 0x640))();
    plVar18 = local_68;
    local_358 = g_027e3d60;
    if (g_027e3d60 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_350 = '\x01';
    (**(code **)(*plVar18 + 0x3b0))(uVar8,&local_358);
    local_198 = local_40;
    local_190 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_190 = '\x01';
    FUN_01d488d0();
    if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_350 != '\0') && (local_358 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar8 = (**(code **)(*this_ptr + 0x640))();
    plVar18 = local_68;
    local_368 = g_026e41f0;
    if (g_026e41f0 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_360 = '\x01';
    (**(code **)(*plVar18 + 0x3b0))(uVar8,&local_368);
    local_1a8 = local_40;
    local_1a0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_1a0 = '\x01';
    FUN_01d488d0();
    if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_360 != '\0') && (local_368 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_340 = '\0';
  local_348 = plVar17;
  (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
  if ((local_340 != '\0') && (local_348 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*local_48 == 0) {
    plVar18 = local_e0;
    if (local_d8[0] != '\0' || plVar17 == (int64_t *)0x0) goto LAB_01b86b58;
  }
  else {
    uVar8 = FUN_00d05530();
    local_3e8 = (float)param_2;
    fStack_3e4 = (float)((uint64_t)param_2 >> 0x20);
    uStack_3e0 = (uint32_t)in_XMM1_Qb;
    fStack_3dc = (float)((uint64_t)in_XMM1_Qb >> 0x20);
    FUN_01d48370();
    local_338 = local_a8;
    local_330 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x398))();
    if ((local_330 != '\0') && (local_338 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    fVar23 = g_02390124;
    if (g_02390124 <= (float)local_58._0_4_ / g_02420c90) {
      fVar23 = (float)local_58._0_4_ / g_02420c90;
    }
    fVar44 = g_0241da20;
    if (fVar23 <= g_0241da20) {
      fVar44 = fVar23;
    }
    local_218 = ZEXT416((uint)fVar44);
    auVar26 = roundss(ZEXT816(0),
                      ZEXT416((uint)((float)((uint)(g_0241c3ec * fVar44) & g_023945e0 |
                                            g_02394dc8) + g_0241c3ec * fVar44)),0xb);
    auVar3._8_4_ = uStack_3e0;
    auVar3._0_8_ = param_2;
    auVar3._12_4_ = fStack_3dc;
    fVar23 = auVar26._0_4_;
    local_208._4_12_ = auVar3._4_12_;
    local_208._0_4_ = local_3e8 - fVar23;
    auVar27._4_4_ = fStack_3e4;
    auVar27._0_4_ = local_208._0_4_;
    auVar27._8_4_ = uStack_3e0;
    auVar27._12_4_ = fStack_3dc;
    register0x00001204 = auVar27._4_12_;
    local_d8._0_4_ = (float)local_208._0_4_ / *(float *)((int64_t)this_ptr + 0x184);
    puVar9 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    local_100 = &g_02680400;
    *puVar9 = &g_02680400;
    *(void*)((int64_t)puVar9 + 0xc) = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    *(void*)((int64_t)puVar9 + 0x39) = 0;
    *(void*)((int64_t)puVar9 + 0x41) = 0;
    local_108 = g_02680418;
    uVar10 = (*g_02680418)();
    auVar29 = local_f8;
    uVar13 = (undefined7)((uint64_t)uVar10 >> 8);
    bVar14 = local_f8[0] & plVar17 != (int64_t *)0x0;
    uVar10 = CONCAT71(local_f8._1_7_,bVar14);
    if (bVar14 == 1) {
      local_f8._1_7_ = uVar13;
      local_f8[0] = 1;
      local_f8._8_8_ = auVar29._8_8_;
      FUN_00d50b20();
      uVar13 = extraout_var;
    }
    auVar29 = local_f8;
    local_f8._1_7_ = uVar13;
    local_f8[0] = 1;
    local_f8._8_8_ = auVar29._8_8_;
    puVar11 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar11 = local_100;
    *(void*)((int64_t)puVar11 + 0xc) = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    *(void*)((int64_t)puVar11 + 0x39) = 0;
    *(void*)((int64_t)puVar11 + 0x41) = 0;
    (*local_108)();
    local_58._0_8_ = puVar9;
    pvVar12 = _pthread_getspecific((void*)uVar10);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar24 = (float)FUN_0188f4f0();
    fVar68 = fVar23 + g_02390124;
    auVar1._8_8_ = extraout_XMM0_Qb_01;
    auVar1._0_8_ = uVar8;
    fVar44 = (float)((uint64_t)uVar8 >> 0x20);
    fVar25 = (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
    fVar43 = g_023b1608 + fVar68 + g_02411474;
    local_228._4_4_ = fVar44;
    local_228._0_4_ = fVar44;
    fStack_220 = fVar25;
    fStack_21c = fVar25;
    fVar72 = fStack_3e4 - (fVar43 + g_023945a4 + g_02390124);
    register0x00001284 = auVar1._4_12_;
    local_1f8._0_4_ = (float)uVar8 + g_02390d00;
    local_238 = fVar72 * g_0239011c;
    fVar43 = fVar43 + fVar44 + fVar72 + g_02390124;
    local_248 = ZEXT416((uint)fVar43);
    fStack_234 = fStack_3e4;
    fStack_230 = fStack_3dc;
    fStack_22c = fStack_3dc;
    auVar28._4_4_ = fVar44;
    auVar28._0_4_ = local_1f8._0_4_;
    auVar28._8_4_ = (int)extraout_XMM0_Qb_01;
    auVar28._12_4_ = fVar25;
    auVar29 = insertps(auVar28,ZEXT416((uint)(fVar43 - fVar24 * local_238)),0x10);
    FUN_01d39180(auVar29._0_8_);
    auVar2._8_8_ = extraout_XMM0_Qb_01;
    auVar2._0_8_ = uVar8;
    fStack_3e4 = fStack_3e4 + fVar44;
    auVar64._4_4_ = fStack_3e4;
    auVar64._0_4_ = fStack_3e4;
    auVar64._8_4_ = fStack_3dc + fVar25;
    auVar64._12_4_ = fStack_3dc + fVar25;
    local_1d8._4_12_ = auVar64._4_12_;
    local_1d8._0_4_ = fStack_3e4 + g_02390d00;
    auVar29 = insertps(auVar26,local_1d8,0x10);
    auVar45 = insertps(auVar2,ZEXT416((uint)g_02390124),0x10);
    local_78._0_4_ = auVar45._0_4_ + auVar29._0_4_;
    local_78._4_4_ = auVar45._4_4_ + auVar29._4_4_;
    fStack_70 = auVar45._8_4_ + auVar29._8_4_;
    fStack_6c = auVar45._12_4_ + auVar29._12_4_;
    fVar44 = 0.0;
    auVar65._4_12_ = local_78._4_12_;
    if (0.0 <= (float)local_208._0_4_) {
      do {
        pvVar12 = _pthread_getspecific((void*)uVar10);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar25 = (float)FUN_0188f4f0(fVar44 / (float)local_d8._0_4_);
        auVar65._0_4_ = (float)local_78._0_4_ + fVar44;
        auVar46._4_12_ = local_248._4_12_;
        auVar46._0_4_ = local_248._0_4_ - fVar25 * local_238;
        local_f8 = insertps(auVar65,auVar46,0x10);
        FUN_01d38830();
        FUN_01d38830();
        fVar44 = fVar44 + g_02390124;
      } while (fVar44 <= (float)local_208._0_4_);
    }
    auVar30._0_4_ = (float)local_78._0_4_ + (float)local_208._0_4_;
    auVar30._4_12_ = auVar65._4_12_;
    FUN_01d38830(auVar30._0_8_);
    auVar29 = blendps(_local_1f8,_local_78,0xe);
    FUN_01d38830(auVar29._0_8_);
    FUN_01ab5990();
    local_188 = local_40;
    local_180 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_180 = '\x01';
    FUN_01d488d0();
    if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_328 = local_58._0_8_;
    local_320 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
    if ((local_320 != '\0') && (local_328 != 0)) {
      FUN_00d50b20();
    }
    FUN_01ab5650();
    FUN_01cfc9f0();
    local_178 = local_40;
    local_170 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_170 = '\x01';
    FUN_01d488d0();
    if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40();
    FUN_01d48b10();
    local_1f8._8_4_ = fStack_70;
    local_1f8._0_8_ = local_78;
    fStack_1ec = fStack_6c;
    auVar47._0_4_ = g_023945e0 & (uint)((float)local_248._0_4_ - local_238);
    auVar47._4_4_ = _UNK_023945e4 & local_248._4_4_;
    auVar47._8_4_ = _UNK_023945e8 & local_248._8_4_;
    auVar47._12_4_ = _UNK_023945ec & local_248._12_4_;
    auVar48._4_12_ = SUB1612(auVar47 | g_023945f0,4);
    auVar48._0_4_ = SUB164(auVar47 | g_023945f0,0) + ((float)local_248._0_4_ - local_238);
    roundss(auVar48,auVar48,0xb);
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    local_1d8._0_4_ = local_1d8._0_4_ + g_02390440;
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    FUN_01d48b10();
    FUN_01ab6350();
    local_168 = local_40;
    local_160 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_160 = '\x01';
    FUN_01d488d0();
    if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01ab64f0();
    FUN_01d48b40();
    local_310 = '\0';
    local_318 = puVar11;
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    if ((local_310 != '\0') && (local_318 != (void*)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40();
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_68 + 0x390))();
    local_158 = local_40;
    local_150 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_150 = '\x01';
    FUN_01d488d0();
    if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_400 + 0x370))();
    FUN_01d44d80();
    local_148 = local_40;
    local_140 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_140 = '\x01';
    FUN_01d48a10();
    if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_3f8 != '\0') && (local_400 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar17 = g_0276ce70;
    if (g_0276ce70 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    bVar21 = plVar17 != (int64_t *)0x0;
    local_308 = plVar17;
    local_300 = '\0';
    local_78._4_4_ = (float)local_78._4_4_ + _UNK_0241da34;
    local_78._0_4_ = (float)local_78._0_4_ + g_0241da30;
    fStack_70 = fStack_70 + _UNK_0241da38;
    fStack_6c = fStack_6c + _UNK_0241da3c;
    local_1e0 = puVar11;
    (**(code **)(*(int64_t *)*arg1 + 0x3f8))();
    if ((local_300 != '\0') && (local_308 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    fVar44 = *(float *)((int64_t)this_ptr + 0x184);
    puVar16 = &g_0240d7a0;
    pVar15 = 0x240d7a0;
    fVar25 = (float)((uint)g_02390124 & -(uint)(g_023b388c < fVar44) |
                    ~-(uint)(g_023b388c < fVar44) &
                    *(uint *)(&g_0240d7a0 + (uint64_t)(fVar44 < g_02394250) * 4));
    auVar45 = ZEXT416((uint)fVar25);
    plVar18 = plVar17;
    auVar29 = auVar45;
    if (fVar25 < fVar44) {
      do {
        local_1d8 = auVar29;
        local_f8._4_12_ = local_d8._4_12_;
        local_5c = auVar45._0_4_;
        local_f8._0_4_ = local_d8._0_4_ * local_5c + (float)local_1f8._0_4_ + g_0241f374;
        local_60 = 1;
        local_68 = &g_024d0b28;
        local_208._0_4_ = local_5c;
        FUN_00d8cb40(local_f8._0_8_,&local_68);
        plVar17 = local_40;
        if (plVar18 == local_40) {
          plVar17 = plVar18;
          if ((bVar21) || (plVar18 == (int64_t *)0x0)) goto joined_r0x01b85d18;
          bVar21 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01b85d30;
          }
        }
        else if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar21) && (plVar18 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01b85d30:
          bVar21 = true;
joined_r0x01b85d18:
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if ((bVar21) && (plVar18 != (int64_t *)0x0)) {
          FUN_00d50b20();
          bVar21 = true;
        }
        else {
          bVar21 = true;
        }
        auVar29 = blendps(local_f8,_local_78,0xe);
        local_2f0 = '\0';
        local_2f8 = plVar17;
        (**(code **)(*(int64_t *)*arg1 + 0x3f8))(auVar29._0_8_,2);
        if ((local_2f0 != '\0') && (local_2f8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pVar15 = (void*)puVar16;
        auVar45 = ZEXT416((uint)((float)local_208._0_4_ + (float)local_1d8._0_4_));
        plVar18 = plVar17;
        auVar29 = local_1d8;
      } while ((float)local_208._0_4_ + (float)local_1d8._0_4_ <
               *(float *)((int64_t)this_ptr + 0x184));
    }
    plVar18 = local_e0;
    cVar7 = FUN_01e420b0();
    if ((cVar7 != '\0') && (plVar18 != (int64_t *)0x0)) {
      local_2e8 = *arg1;
      local_2e0 = '\0';
      local_2d0 = '\0';
      local_2d8 = plVar19;
      (**(code **)(*plVar18 + 0x6a8))(extraout_XMM0_Qa,&local_2d8);
      if ((local_2d0 != '\0') && (local_2d8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_2e0 != '\0') && (local_2e8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01ab4fd0();
    local_138 = local_40;
    local_130 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_130 = '\x01';
    FUN_01d488d0();
    if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar12 = _pthread_getspecific(pVar15);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar44 = (float)FUN_0188eed0();
    puVar9 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = local_100;
    *(void*)((int64_t)puVar9 + 0xc) = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    *(void*)((int64_t)puVar9 + 0x39) = 0;
    *(void*)((int64_t)puVar9 + 0x41) = 0;
    (*local_108)();
    if (local_58._0_8_ != 0) {
      local_58._0_8_ = puVar9;
      FUN_00d50b20();
    }
    local_208 = ZEXT416((uint)(g_0239011c * fVar68));
    fVar25 = g_02390d00 + g_0239011c * fVar68;
    local_f8 = ZEXT416((uint)fVar25);
    auVar31._0_4_ = g_023945e0 & local_1f8._0_4_;
    auVar31._4_4_ = _UNK_023945e4 & local_1f8._4_4_;
    auVar31._8_4_ = _UNK_023945e8 & local_1f8._8_4_;
    auVar31._12_4_ = _UNK_023945ec & (uint)fStack_1ec;
    auVar32._4_12_ = SUB1612(auVar31 | g_023945f0,4);
    auVar32._0_4_ = SUB164(auVar31 | g_023945f0,0) + (float)local_1f8._0_4_;
    local_1d8 = roundss(auVar45,auVar32,0xb);
    fVar44 = (float)local_248._0_4_ - fVar44 * local_238;
    auVar49._0_4_ = g_023945e0 & (uint)fVar44;
    auVar49._4_4_ = _UNK_023945e4 & local_248._4_4_;
    auVar49._8_4_ = _UNK_023945e8 & local_248._8_4_;
    auVar49._12_4_ = _UNK_023945ec & local_248._12_4_;
    auVar50._4_12_ = SUB1612(auVar49 | g_023945f0,4);
    auVar50._0_4_ = SUB164(auVar49 | g_023945f0,0) + fVar44;
    auVar29 = roundss(auVar50,auVar50,0xb);
    register0x00001204 = local_1d8._4_12_;
    local_228._0_4_ = local_1d8._0_4_ - fVar23;
    fVar44 = auVar29._0_4_;
    auVar51._4_12_ = auVar29._4_12_;
    auVar51._0_4_ = fVar44 - fVar25;
    insertps(_local_228,auVar51,0x10);
    local_58._0_8_ = puVar9;
    FUN_01d39180();
    auVar29 = insertps(local_1d8,fVar44,0x10);
    local_58._0_8_ = puVar9;
    FUN_01d38830(auVar29._0_8_);
    auVar52._0_4_ = fVar44 + (float)local_f8._0_4_;
    auVar52._4_12_ = auVar51._4_12_;
    auVar29 = insertps(_local_228,auVar52,0x10);
    local_58._0_8_ = puVar9;
    FUN_01d38830(auVar29._0_8_);
    local_58._0_8_ = puVar9;
    FUN_01d38830();
    local_2c8 = *arg1;
    local_2c0 = '\0';
    local_2b0 = '\0';
    pVar15 = (void*)*(byte *)(this_ptr + 0x30);
    local_2b8 = puVar9;
    (**(code **)(*this_ptr + 0x918))(*(byte *)(this_ptr + 0x30),&local_2b8);
    if ((local_2b0 != '\0') && (local_2b8 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_2c0 != '\0') && (local_2c8 != 0)) {
      FUN_00d50b20();
    }
    pvVar12 = _pthread_getspecific(pVar15);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = FUN_0188ef40();
    pvVar12 = _pthread_getspecific(pVar15);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar44 = (float)FUN_0188efb0();
    auVar66._0_4_ = g_023945e0 & (uint)((float)local_218._0_4_ * g_023908ec);
    auVar66._4_4_ = _UNK_023945e4 & local_218._4_4_;
    auVar66._8_4_ = _UNK_023945e8 & local_218._8_4_;
    auVar66._12_4_ = _UNK_023945ec & local_218._12_4_;
    auVar69._4_12_ = SUB1612(ZEXT416(g_02394dc8) | auVar66,4);
    auVar69._0_4_ =
         SUB164(ZEXT416(g_02394dc8) | auVar66,0) + (float)local_218._0_4_ * g_023908ec;
    local_1d8 = roundss(ZEXT816(0),auVar69,0xb);
    local_78._0_4_ = (uint32_t)uVar8;
    local_78._4_4_ = (uint32_t)((uint64_t)uVar8 >> 0x20);
    fStack_70 = (float)extraout_XMM0_Qb_02;
    fStack_6c = (float)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
    fVar25 = (float)local_78._0_4_ * (float)local_d8._0_4_ + (float)local_1f8._0_4_;
    auVar53._0_4_ = g_023945e0 & (uint)fVar25;
    auVar53._4_4_ = _UNK_023945e4 & local_78._4_4_;
    auVar53._8_4_ = _UNK_023945e8 & (uint)fStack_70;
    auVar53._12_4_ = _UNK_023945ec & (uint)fStack_6c;
    auVar54._4_12_ = SUB1612(auVar53 | g_023945f0,4);
    auVar54._0_4_ = SUB164(auVar53 | g_023945f0,0) + fVar25;
    auVar70._0_12_ = ZEXT812(0);
    auVar70._12_4_ = 0;
    auVar71 = roundss(auVar70,auVar54,0xb);
    fVar44 = (float)local_248._0_4_ - fVar44 * local_238;
    auVar33._0_4_ = g_023945e0 & (uint)fVar44;
    auVar33._4_4_ = _UNK_023945e4 & local_248._4_4_;
    auVar33._8_4_ = _UNK_023945e8 & local_248._8_4_;
    auVar33._12_4_ = _UNK_023945ec & local_248._12_4_;
    auVar34._4_12_ = SUB1612(auVar33 | g_023945f0,4);
    auVar34._0_4_ = SUB164(auVar33 | g_023945f0,0) + fVar44;
    auVar55._0_12_ = ZEXT812(0);
    auVar55._12_4_ = 0;
    local_58 = roundss(auVar55,auVar34,0xb);
    auVar29 = insertps(auVar71,local_58,0x10);
    local_228._4_4_ = local_1d8._0_4_;
    local_228._0_4_ = local_228._4_4_;
    fStack_220 = (float)local_1d8._8_4_;
    fStack_21c = (float)local_1d8._8_4_;
    this_ptr[0x2a] =
         CONCAT44((auVar29._4_4_ - (float)local_228._4_4_) + _UNK_023b4a24,
                  (auVar29._0_4_ - (float)local_228._4_4_) + g_023b4a20);
    *(void*)(this_ptr + 0x2b) = local_228._4_4_;
    *(void*)((int64_t)this_ptr + 0x15c) = local_228._4_4_;
    auVar29 = auVar71;
    puVar9 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = local_100;
    *(void*)((int64_t)puVar9 + 0xc) = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    *(void*)((int64_t)puVar9 + 0x39) = 0;
    *(void*)((int64_t)puVar9 + 0x41) = 0;
    (*local_108)();
    FUN_00d50b20();
    auVar35._4_12_ = auVar71._4_12_;
    auVar35._0_4_ = auVar71._0_4_ - (float)local_208._0_4_;
    local_218._4_12_ = local_58._4_12_;
    local_218._0_4_ = local_58._0_4_ - fVar68;
    insertps(auVar35,local_218,0x10);
    FUN_01d39180();
    auVar45 = insertps(auVar71,local_218._0_4_,0x10);
    FUN_01d38830(auVar45._0_8_);
    auVar45 = insertps(auVar71,local_58._0_4_,0x10);
    FUN_01d38830(auVar45._0_8_);
    FUN_01d38830();
    local_2a8 = *arg1;
    local_2a0 = '\0';
    local_58._0_8_ = puVar9;
    local_290 = '\0';
    pVar15 = (void*)*(byte *)((int64_t)this_ptr + 0x181);
    local_298 = puVar9;
    (**(code **)(*this_ptr + 0x918))(*(byte *)((int64_t)this_ptr + 0x181),&local_298);
    if ((local_290 != '\0') && (local_298 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_2a0 != '\0') && (local_2a8 != 0)) {
      FUN_00d50b20();
    }
    pvVar12 = _pthread_getspecific(pVar15);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = FUN_0188f0f0();
    pvVar12 = _pthread_getspecific(pVar15);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar44 = (float)FUN_0188efb0();
    local_78._0_4_ = (uint32_t)uVar8;
    local_78._4_4_ = (uint32_t)((uint64_t)uVar8 >> 0x20);
    fStack_70 = (float)extraout_XMM0_Qb_03;
    fStack_6c = (float)((uint64_t)extraout_XMM0_Qb_03 >> 0x20);
    fVar25 = (float)local_78._0_4_ * (float)local_d8._0_4_ + (float)local_1f8._0_4_;
    auVar56._0_4_ = g_023945e0 & (uint)fVar25;
    auVar56._4_4_ = _UNK_023945e4 & local_78._4_4_;
    auVar56._8_4_ = _UNK_023945e8 & (uint)fStack_70;
    auVar56._12_4_ = _UNK_023945ec & (uint)fStack_6c;
    auVar57._4_12_ = SUB1612(auVar56 | g_023945f0,4);
    auVar57._0_4_ = SUB164(auVar56 | g_023945f0,0) + fVar25;
    auVar67._0_12_ = ZEXT812(0);
    auVar67._12_4_ = 0;
    auVar71 = roundss(auVar67,auVar57,0xb);
    fVar44 = (float)local_248._0_4_ - fVar44 * local_238;
    auVar36._0_4_ = g_023945e0 & (uint)fVar44;
    auVar36._4_4_ = _UNK_023945e4 & local_248._4_4_;
    auVar36._8_4_ = _UNK_023945e8 & local_248._8_4_;
    auVar36._12_4_ = _UNK_023945ec & local_248._12_4_;
    auVar37._4_12_ = SUB1612(auVar36 | g_023945f0,4);
    auVar37._0_4_ = SUB164(auVar36 | g_023945f0,0) + fVar44;
    local_218 = roundss(auVar37,auVar37,0xb);
    auVar38._4_12_ = local_218._4_12_;
    auVar38._0_4_ = local_218._0_4_ - (float)local_1d8._0_4_;
    auVar45 = insertps(auVar71,auVar38,0x10);
    this_ptr[0x2c] = CONCAT44(auVar45._4_4_ + _UNK_0241da54,auVar45._0_4_ + g_0241da50);
    this_ptr[0x2d] = (int64_t)local_228;
    puVar9 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = local_100;
    *(void*)((int64_t)puVar9 + 0xc) = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    *(void*)((int64_t)puVar9 + 0x39) = 0;
    *(void*)((int64_t)puVar9 + 0x41) = 0;
    (*local_108)();
    local_58._0_8_ = puVar9;
    FUN_00d50b20();
    auVar58._4_12_ = local_218._4_12_;
    auVar58._0_4_ = local_218._0_4_ - fVar68;
    insertps(auVar71,auVar58,0x10);
    local_58._0_8_ = puVar9;
    FUN_01d39180();
    local_78._0_4_ = auVar71._0_4_;
    auVar39._4_12_ = local_208._4_12_;
    auVar39._0_4_ = local_208._0_4_ + (float)local_78._0_4_;
    auVar45 = insertps(auVar39,auVar58._0_4_,0x10);
    local_58._0_8_ = puVar9;
    FUN_01d38830(auVar45._0_8_);
    auVar45 = insertps(auVar71,local_218._0_4_,0x10);
    local_58._0_8_ = puVar9;
    FUN_01d38830(auVar45._0_8_);
    local_58._0_8_ = puVar9;
    FUN_01d38830();
    local_288 = *arg1;
    local_280 = '\0';
    local_270 = '\0';
    pVar15 = (void*)*(byte *)((int64_t)this_ptr + 0x182);
    local_278 = puVar9;
    (**(code **)(*this_ptr + 0x918))(*(byte *)((int64_t)this_ptr + 0x182),&local_278);
    if ((local_270 != '\0') && (local_278 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_280 != '\0') && (local_288 != 0)) {
      FUN_00d50b20();
    }
    pvVar12 = _pthread_getspecific(pVar15);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar44 = (float)FUN_0188f1c0();
    pvVar12 = _pthread_getspecific(pVar15);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar25 = (float)FUN_0188f020();
    fVar44 = (float)local_d8._0_4_ * fVar44 + (float)local_1f8._0_4_;
    auVar59._0_4_ = g_023945e0 & (uint)fVar44;
    auVar59._4_4_ = _UNK_023945e4 & local_d8._4_4_;
    auVar59._8_4_ = _UNK_023945e8 & (uint)uStack_d0;
    auVar59._12_4_ = _UNK_023945ec & uStack_d0._4_4_;
    auVar60._4_12_ = SUB1612(auVar59 | g_023945f0,4);
    auVar60._0_4_ = SUB164(auVar59 | g_023945f0,0) + fVar44;
    auVar45 = roundss(auVar29,auVar60,0xb);
    fVar44 = (float)local_248._0_4_ - local_238 * fVar25;
    auVar40._0_4_ = g_023945e0 & (uint)fVar44;
    auVar40._4_4_ = _UNK_023945e4 & local_248._4_4_;
    auVar40._8_4_ = _UNK_023945e8 & local_248._8_4_;
    auVar40._12_4_ = _UNK_023945ec & local_248._12_4_;
    auVar41._4_12_ = SUB1612(auVar40 | g_023945f0,4);
    auVar41._0_4_ = SUB164(auVar40 | g_023945f0,0) + fVar44;
    local_58 = roundss(ZEXT416(0),auVar41,0xb);
    auVar61._4_12_ = local_1d8._4_12_;
    auVar61._0_4_ = local_1d8._0_4_ * g_02390118 + local_58._0_4_;
    auVar29 = insertps(ZEXT416((uint)(g_023b1608 + auVar45._0_4_)),auVar61,0x10);
    this_ptr[0x2e] = auVar29._0_8_;
    this_ptr[0x2f] = (int64_t)local_228;
    puVar9 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = local_100;
    *(void*)((int64_t)puVar9 + 0xc) = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    *(void*)((int64_t)puVar9 + 0x39) = 0;
    *(void*)((int64_t)puVar9 + 0x41) = 0;
    (*local_108)();
    FUN_00d50b20();
    auVar62._4_12_ = local_58._4_12_;
    auVar62._0_4_ = local_58._0_4_ - (float)local_f8._0_4_;
    _local_d8 = insertps(auVar45,auVar62,0x10);
    FUN_01d39180();
    auVar42._4_12_ = auVar26._4_12_;
    auVar42._0_4_ = fVar23 + auVar45._0_4_;
    auVar29 = insertps(auVar42,local_58._0_4_,0x10);
    FUN_01d38830(auVar29._0_8_);
    auVar63._4_12_ = local_f8._4_12_;
    auVar63._0_4_ = local_f8._0_4_ + (float)local_58._0_4_;
    auVar29 = insertps(auVar45,auVar63,0x10);
    FUN_01d38830(auVar29._0_8_);
    FUN_01d38830();
    local_268 = *arg1;
    local_260 = '\0';
    local_58._0_8_ = puVar9;
    local_250 = '\0';
    pVar15 = (void*)*(byte *)((int64_t)this_ptr + 0x183);
    local_258 = puVar9;
    (**(code **)(*this_ptr + 0x918))(*(byte *)((int64_t)this_ptr + 0x183),&local_258);
    if ((local_250 != '\0') && (local_258 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_260 != '\0') && (local_268 != 0)) {
      FUN_00d50b20();
    }
    pvVar12 = _pthread_getspecific(pVar15);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar7 = FUN_0188f1d0();
    if (cVar7 == '\0') {
      pvVar12 = _pthread_getspecific(pVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0188f1e0();
      pvVar12 = _pthread_getspecific(pVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar7 = FUN_017f2980();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar7 != '\0') goto LAB_01b869ae;
    }
    else {
LAB_01b869ae:
      FUN_01ab6010();
      local_128 = local_40;
      local_120 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_120 = '\x01';
      FUN_01d488d0();
      if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x3b0))();
      FUN_01ab61b0();
      local_118 = local_40;
      local_110 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_110 = '\x01';
      FUN_01d488d0();
      if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x3b0))();
    }
    FUN_01d48390();
    if ((bVar21) && (plVar17 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_1e0 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01b86b58:
  if ((bVar5) && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (plVar19 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar18 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

