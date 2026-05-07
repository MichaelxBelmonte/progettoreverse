// Function: FUN_01484bc0
// Address: 01484bc0
// Size: 26028 bytes
// Class: MUElementAnalyzer
// === MUElementAnalyzer properties ===
//   SInt64          _engineSampleOffset
//   GNInt           _engineIndex
//   float *         _originalSignal
//   float *         _originalSignalBufferWithMargin
//   SInt64          _sampleCount
//   SInt64          _nonSilentSampleCount
//   double          _sampleRate
//   double          _duration
//   double          _parameterValuesPerSecond
//   GNInt           _parameterDataSize
//   float           _maxAmplitude
//   float           _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum
//   float           _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum
//   bool            _isPercussive
//   bool            _isPolyphonic
//   float           _pitchJumpsSum
//   float           _pitchBarycenter
//   float           _allPercussiveDecay
//   float           _allRhythmicQuality
//   float           _allTonality
//   float           _allCentDiffPerMillisecond
//   float           _allPitchRangePerNote
//   float           _allEnergyRelevantRegionRatio
//   float           _allAttackPeakQuality
//   float           _allAttackPeakToEnergyRegionRatio
//   float           _allMonophony
//   float           _referenceAttackPeakValue
//   float           _referencePeakRmsLevel
//   bool            _origRMSValid
//   GNInt *         _nonSilentRmsVals
//   ... +76 more


void FUN_01484bc0(void* param_1)

{
  float *pfVar1;
  byte *pbVar2;
  double dVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  float *pfVar9;
  float *pfVar10;
  double dVar11;
  void*puVar12;
  uint8_t auVar13 [12];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  uint8_t auVar40 [16];
  uint64_t uVar41;
  uint64_t uVar42;
  char cVar43;
  int iVar44;
  void *pvVar45;
  void*puVar46;
  uint64_t uVar47;
  uint64_t uVar48;
  uint64_t *puVar49;
  uint64_t *puVar50;
  uint64_t uVar51;
  undefined7 uVar54;
  int64_t lVar52;
  int64_t lVar53;
  byte bVar55;
  void* pVar56;
  code *pcVar57;
  uint64_t uVar58;
  void*puVar59;
  uint uVar60;
  int iVar61;
  uint64_t uVar62;
  int64_t lVar63;
  uint unaff_ESI;
  int iVar64;
  uint64_t uVar65;
  uint64_t uVar66;
  uint64_t *this_ptr;
  uint64_t uVar67;
  size_t sVar68;
  uint64_t *puVar69;
  uint64_t *puVar70;
  uint64_t *puVar71;
  int64_t lVar72;
  int7 iVar73;
  bool bVar74;
  bool bVar75;
  uint uVar76;
  float fVar77;
  uint32_t uVar78;
  uint32_t uVar79;
  float fVar80;
  uint64_t uVar81;
  uint8_t auVar83 [16];
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar84 [16];
  uint8_t auVar85 [16];
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  double dVar82;
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar86 [16];
  uint8_t auVar87 [16];
  int iVar88;
  float fVar89;
  int iVar90;
  int iVar94;
  int iVar95;
  uint8_t auVar91 [16];
  uint8_t auVar92 [16];
  uint8_t auVar93 [16];
  int iVar96;
  float fVar97;
  uint8_t auVar98 [16];
  float fVar99;
  uint64_t in_stack_fffffffffffffa08;
  uint64_t *local_5c0;
  uint8_t local_5b8;
  uint64_t local_5b0;
  uint8_t local_5a8;
  uint64_t local_5a0;
  uint8_t local_598;
  uint64_t local_590;
  uint8_t local_588;
  uint64_t local_580;
  uint8_t local_578;
  void*local_570;
  uint8_t local_568;
  uint64_t local_560;
  uint8_t local_558;
  void*local_550;
  uint8_t local_548;
  uint64_t *local_540;
  uint8_t local_538;
  uint64_t *local_530;
  uint8_t local_528;
  uint64_t *local_520;
  uint8_t local_518;
  void*local_510;
  uint8_t local_508;
  uint64_t *local_500;
  uint8_t local_4f8;
  uint64_t *local_4f0;
  uint8_t local_4e8;
  uint64_t *local_4e0;
  uint8_t local_4d8;
  uint64_t *local_4d0;
  uint8_t local_4c8;
  uint64_t local_4c0;
  uint8_t local_4b8;
  uint64_t local_4b0;
  uint8_t local_4a8;
  uint64_t local_4a0;
  uint8_t local_498;
  uint64_t *local_490;
  uint8_t local_488;
  uint64_t *local_480;
  uint8_t local_478;
  uint64_t local_470;
  uint8_t local_468;
  uint64_t *local_460;
  uint8_t local_458;
  uint64_t local_450;
  uint8_t local_448;
  uint64_t local_440;
  uint8_t local_438;
  uint64_t *local_430;
  uint8_t local_428;
  uint64_t *local_420;
  uint8_t local_418;
  void*local_410;
  uint8_t local_408;
  void*local_400;
  uint8_t local_3f8;
  void*local_3f0;
  uint8_t local_3e8;
  uint64_t local_3e0;
  uint8_t local_3d8;
  uint64_t local_3d0;
  uint8_t local_3c8;
  void*local_3c0;
  uint8_t local_3b8;
  void*local_3b0;
  uint8_t local_3a8;
  uint64_t local_3a0;
  uint8_t local_398;
  void*local_390;
  uint8_t local_388;
  uint64_t local_380;
  uint8_t local_378;
  uint64_t local_370;
  uint8_t local_368;
  void*local_360;
  uint8_t local_358;
  uint64_t *local_350;
  uint8_t local_348;
  uint64_t *local_340;
  uint8_t local_338;
  void*local_330;
  uint8_t local_328;
  uint64_t *local_320;
  uint8_t local_318;
  int64_t local_310;
  uint8_t local_308;
  uint64_t *local_300;
  uint8_t local_2f8;
  int64_t local_2f0;
  uint8_t local_2e8;
  uint64_t local_2e0;
  uint8_t local_2d8;
  void*local_2d0;
  uint8_t local_2c8;
  uint64_t local_2c0;
  uint8_t local_2b8;
  uint64_t local_2b0;
  uint8_t local_2a8;
  uint8_t local_29c [4];
  uint64_t local_298;
  float *local_290;
  int64_t local_288;
  void*local_280;
  char local_278;
  uint64_t local_270;
  char local_268;
  void*local_260;
  char local_258;
  uint64_t *local_250;
  char local_248;
  uint8_t local_23c [4];
  uint32_t local_238;
  uint32_t local_234;
  uint local_22c;
  uint64_t *local_228;
  uint64_t *local_220;
  uint64_t *local_218;
  uint64_t *local_210;
  uint64_t *local_208;
  int64_t local_200;
  char local_1f8;
  uint64_t *local_1f0;
  uint64_t *local_1e8;
  uint64_t *local_1e0;
  uint64_t *local_1d8;
  uint64_t *local_1d0;
  uint64_t *local_1c8;
  float local_1bc;
  uint64_t *local_1b8;
  uint64_t *local_1b0;
  uint64_t *local_1a8;
  uint64_t *local_1a0;
  uint64_t local_198;
  float fStack_190;
  float fStack_18c;
  uint64_t local_188;
  float fStack_180;
  float fStack_17c;
  uint64_t *local_178;
  double local_170;
  void*local_168;
  void*local_160;
  void*local_158;
  uint64_t local_150;
  float local_144;
  uint64_t local_140;
  double local_138;
  uint32_t uStack_130;
  uint32_t uStack_12c;
  uint8_t local_128 [16];
  float local_114;
  uint64_t local_110;
  uint64_t local_108;
  uint64_t local_100;
  uint8_t local_f8 [16];
  void*local_e0;
  uint64_t *local_d8;
  double local_d0;
  uint64_t *local_c8;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  uint8_t local_b8 [16];
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t *local_88;
  uint64_t *local_80;
  uint64_t local_78;
  code *local_70;
  double local_68;
  double local_60;
  uint64_t *local_58;
  uint64_t *local_50;
  char local_48;
  uint64_t local_40;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  
  uVar79 = (uint32_t)((uint64_t)in_stack_fffffffffffffa08 >> 0x20);
  uVar47 = this_ptr[0xe];
  if (uVar47 != 0) {
    FUN_00d50b00();
  }
  pvVar45 = _pthread_getspecific(param_1);
  if (pvVar45 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_144 = (float)FUN_0141bab0();
  if (uVar47 != 0) {
    FUN_00d50b20();
  }
  puVar46 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  local_40 = &g_02572358;
  *puVar46 = &g_02572358;
  local_70 = g_02572370;
  pcVar57 = g_02572370;
  local_e0 = puVar46;
  (*g_02572370)();
  pVar56 = (void*)pcVar57;
  puVar46 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar46 = local_40;
  (*local_70)();
  local_158 = puVar46;
  FUN_013fb420();
  pvVar45 = _pthread_getspecific(pVar56);
  if (pvVar45 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  puVar49 = local_50;
  if (local_48 == '\0') {
    if (((local_50 != (uint64_t *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
       (local_50 != (uint64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  local_58 = (uint64_t *)puVar49[9];
  iVar44 = 1;
  if (0 < (int)((double)this_ptr[0x16] / (double)local_58)) {
    iVar44 = (int)((double)this_ptr[0x16] / (double)local_58);
  }
  *(int *)(this_ptr + 0x29) = iVar44;
  local_1b0 = puVar49;
  FUN_00c8e690();
  puVar49 = local_50;
  if (((local_48 == '\0') && (local_50 != (uint64_t *)0x0)) &&
     ((FUN_00d50b00(), local_48 != '\0' && (local_50 != (uint64_t *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  uVar47 = puVar49[2];
  local_228 = puVar49;
  FUN_00c8e690();
  puVar49 = local_50;
  if ((((local_48 == '\0') && (local_50 != (uint64_t *)0x0)) && (FUN_00d50b00(), local_48 != '\0'))
     && (local_50 != (uint64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_1f0 = puVar49;
  FUN_00c92170();
  FUN_00c92160();
  local_60 = (double)puVar49[2];
  FUN_00c8e690();
  puVar49 = local_50;
  if (((local_48 == '\0') && (local_50 != (uint64_t *)0x0)) &&
     ((FUN_00d50b00(), local_48 != '\0' && (local_50 != (uint64_t *)0x0)))) {
    FUN_00d50b20();
  }
  local_b8._0_8_ = uVar47;
  FUN_00c92170();
  FUN_00c92160();
  puVar50 = (uint64_t *)puVar49[2];
  local_220 = puVar49;
  if (this_ptr[0x28] != 0) {
    FUN_00e83070();
    this_ptr[0x28] = 0;
  }
  uVar47 = FUN_00e83010();
  this_ptr[0x28] = uVar47;
  FUN_00c8e690();
  puVar49 = local_50;
  if (((local_48 == '\0') && (local_50 != (uint64_t *)0x0)) &&
     ((FUN_00d50b00(), local_48 != '\0' && (local_50 != (uint64_t *)0x0)))) {
    FUN_00d50b20();
  }
  local_1e8 = puVar49;
  FUN_00c92170();
  FUN_00c92160();
  local_140 = puVar49[2];
  uVar47 = *(uint64_t *)(this_ptr[0x23] + 0x10);
  local_100 = *(uint64_t *)(this_ptr[0x26] + 0x10);
  local_288 = *(int64_t *)(this_ptr[0x24] + 0x10);
  local_68 = *(double *)(this_ptr[0x25] + 0x10);
  fVar77 = (float)(**(code **)(g_02786500 + 0x10))();
  if (g_02394274 <= fVar77) {
    local_80 = (uint64_t *)CONCAT44(local_80._4_4_,g_02390124 / fVar77);
    (**(code **)(g_02786500 + 0x20))();
  }
  else {
    local_80 = (uint64_t *)CONCAT44(local_80._4_4_,g_02390124);
  }
  pvVar45 = (void *)this_ptr[0x13];
  dVar82 = local_68;
  local_78 = uVar47;
  FUN_0149bce0(this_ptr[0x15],this_ptr[0x17],local_68,0);
  sVar68 = SUB84(dVar82,0);
  uVar48 = FUN_00e83010();
  _memcpy(pvVar45,(void *)((int64_t)(int)this_ptr[0x18] * 4 + 4),sVar68);
  local_298 = uVar48;
  FUN_015c1480(0,(int)this_ptr[0x18] + 1);
  puVar49 = (uint64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar49 = (uint64_t)local_40;
  (*local_70)();
  local_5b8 = 0;
  pVar56 = (void*)&local_5c0;
  local_5c0 = puVar49;
  local_1b8 = puVar49;
  uVar78 = FUN_0149bfe0(this_ptr[0x17],(int)this_ptr[0x18] + 1);
  *(void*)((int64_t)this_ptr + 0x114) = uVar78;
  FUN_00e83070();
  if (*(float *)((int64_t)this_ptr + 0x114) <= g_0239425c &&
      g_0239425c != *(float *)((int64_t)this_ptr + 0x114)) {
    *(void*)((int64_t)this_ptr + 0x114) = 0x3a83126f;
  }
  (**(code **)(*this_ptr + 0x380))();
  if (*(char *)((int64_t)this_ptr + 0x3c) == '\0') {
    FUN_00c8e690();
    puVar49 = local_50;
    if ((((local_48 == '\0') && (local_50 != (uint64_t *)0x0)) &&
        (FUN_00d50b00(), local_48 != '\0')) && (local_50 != (uint64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    local_218 = puVar49;
    local_c8 = (uint64_t *)puVar49[2];
    uVar47 = this_ptr[0xe];
    if (uVar47 != 0) {
      FUN_00d50b00();
    }
    pvVar45 = _pthread_getspecific(pVar56);
    if (pvVar45 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar44 = FUN_0141bab0();
    local_22c = unaff_ESI;
    if (uVar47 != 0) {
      FUN_00d50b20();
    }
    puVar46 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar46 = local_40;
    (*local_70)();
    uVar47 = this_ptr[0x2b];
    this_ptr[0x2b] = (uint64_t)puVar46;
    if (uVar47 != 0) {
      FUN_00d50b20();
    }
    FUN_00d21370();
    local_128._0_8_ = this_ptr[0x11];
    local_90 = this_ptr[0x15];
    local_f8._0_8_ = this_ptr[0x17];
    local_178 = (uint64_t *)CONCAT44(local_178._4_4_,*(void*)((int64_t)this_ptr + 0x114));
    uVar47 = this_ptr[0x2b];
    local_88 = puVar50;
    if (uVar47 != 0) {
      FUN_00d50b00();
    }
    local_5a8 = 1;
    local_5b0 = uVar47;
    FUN_0149c330(local_90,local_f8._0_8_,local_178._0_4_ * g_023b81d4,local_58,
                 CONCAT44(uVar79,0x40c00000),local_c8,0x3f866666,0,
                 *(void*)(&g_0240e368 + (uint64_t)(iVar44 == 2) * 4),0x41800000);
    puVar49 = local_1b8;
    if (uVar47 != 0) {
      FUN_00d50b20();
    }
    if (*(char *)((int64_t)this_ptr + 0x3c) == '\0') {
      uVar47 = this_ptr[0x2b];
      if (uVar47 != 0) {
        FUN_00d50b00();
      }
      local_598 = 1;
      pfVar1 = (float *)(this_ptr + 0x1d);
      local_5a0 = uVar47;
      FUN_0149d5b0(pfVar1,(int)this_ptr[0x29],local_29c,local_23c);
      if (uVar47 != 0) {
        FUN_00d50b20();
      }
      uVar47 = this_ptr[0x2b];
      if (uVar47 != 0) {
        FUN_00d50b00();
      }
      local_588 = 1;
      local_f8._0_4_ = local_238;
      local_90 = CONCAT44(local_90._4_4_,local_234);
      local_590 = uVar47;
      FUN_0149ded0(4,(int)this_ptr[0x29]);
      if (uVar47 != 0) {
        FUN_00d50b20();
      }
      uVar47 = this_ptr[0x2b];
      if (uVar47 != 0) {
        FUN_00d50b00();
      }
      local_578 = 1;
      local_580 = uVar47;
      FUN_0149e4a0(local_58,(int)this_ptr[0x29],this_ptr[0x11],this_ptr[0x13]);
      if (uVar47 != 0) {
        FUN_00d50b20();
      }
      local_570 = local_e0;
      local_568 = 0;
      uVar47 = this_ptr[0x2b];
      if (uVar47 != 0) {
        FUN_00d50b00();
      }
      local_558 = 1;
      local_550 = local_158;
      local_548 = 0;
      local_560 = uVar47;
      FUN_0149ebe0(local_58,&local_560,(int)this_ptr[0x29],4);
      if (uVar47 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x380))();
      if (*(char *)((int64_t)this_ptr + 0x3c) != '\0') {
        FUN_00e34a60();
        goto LAB_01485700;
      }
      local_540 = puVar49;
      local_538 = 0;
      fVar77 = (float)FUN_0149f6a0(this_ptr[0x15],this_ptr[0x13]);
      fVar97 = (g_0240e2f4 + fVar77) * g_0239011c;
      fVar89 = *pfVar1 + *pfVar1;
      local_c8 = (uint64_t *)CONCAT44(local_c8._4_4_,fVar97);
      if ((fVar97 < fVar89) &&
         (local_c8 = (uint64_t *)CONCAT44(local_c8._4_4_,fVar77), fVar89 <= fVar77)) {
        local_c8 = (uint64_t *)CONCAT44(local_c8._4_4_,fVar89);
      }
      FUN_00c8e690();
      puVar49 = local_50;
      if (((local_48 == '\0') && (local_50 != (uint64_t *)0x0)) &&
         ((FUN_00d50b00(), local_48 != '\0' && (local_50 != (uint64_t *)0x0)))) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      local_210 = puVar49;
      uVar47 = puVar49[2];
      FUN_00c8e690();
      puVar49 = local_50;
      if ((((local_48 == '\0') && (local_50 != (uint64_t *)0x0)) &&
          (FUN_00d50b00(), local_48 != '\0')) && (local_50 != (uint64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_1e0 = puVar49;
      FUN_00c92170();
      FUN_00c92160();
      local_128._0_8_ = puVar49[2];
      FUN_00c8e690();
      puVar49 = local_50;
      if (((local_48 == '\0') && (local_50 != (uint64_t *)0x0)) &&
         ((FUN_00d50b00(), local_48 != '\0' && (local_50 != (uint64_t *)0x0)))) {
        FUN_00d50b20();
      }
      local_1d8 = puVar49;
      FUN_00c92170();
      FUN_00c92160();
      uVar66 = puVar49[2];
      FUN_00c8e690();
      puVar49 = local_50;
      if (((local_48 == '\0') && (local_50 != (uint64_t *)0x0)) &&
         ((FUN_00d50b00(), local_48 != '\0' && (local_50 != (uint64_t *)0x0)))) {
        FUN_00d50b20();
      }
      local_1d0 = puVar49;
      FUN_00c92170();
      FUN_00c92160();
      local_138 = (double)puVar49[2];
      puVar49 = (uint64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar49 = (uint64_t)local_40;
      (*local_70)();
      local_1a8 = puVar49;
      puVar50 = (uint64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar50 = (uint64_t)local_40;
      (*local_70)();
      local_178 = puVar50;
      FUN_015c2d90(0,uVar47);
      (**(code **)(*this_ptr + 0x380))();
      if (*(char *)((int64_t)this_ptr + 0x3c) == '\0') {
        local_530 = local_178;
        local_528 = 0;
        FUN_014a02f0(this_ptr[0x15],this_ptr[0x17],uVar47,local_138);
        uVar51 = this_ptr[0x13];
        local_520 = puVar49;
        if (0 < (int64_t)uVar51) {
          uVar62 = this_ptr[0x11];
          if ((uVar51 < 8) || ((uVar47 < uVar62 + uVar51 * 4 && (uVar62 < uVar51 * 4 + uVar47)))) {
            uVar58 = 0;
          }
          else {
            uVar58 = uVar51 & 0xfffffffffffffff8;
            uVar67 = (uVar58 - 8 >> 3) + 1;
            if (uVar58 - 8 == 0) {
              lVar63 = 0;
            }
            else {
              lVar72 = -(uVar67 & 0xfffffffffffffffe);
              lVar63 = 0;
              do {
                pfVar5 = (float *)(uVar62 + lVar63 * 4);
                fVar77 = pfVar5[1];
                fVar89 = pfVar5[2];
                fVar97 = pfVar5[3];
                pfVar10 = (float *)(uVar62 + 0x10 + lVar63 * 4);
                fVar80 = *pfVar10;
                fVar99 = pfVar10[1];
                fVar14 = pfVar10[2];
                fVar15 = pfVar10[3];
                pfVar9 = (float *)(uVar47 + lVar63 * 4);
                fVar16 = pfVar9[1];
                fVar17 = pfVar9[2];
                fVar18 = pfVar9[3];
                pfVar10 = (float *)(uVar47 + 0x10 + lVar63 * 4);
                fVar19 = *pfVar10;
                fVar20 = pfVar10[1];
                fVar21 = pfVar10[2];
                fVar22 = pfVar10[3];
                pfVar10 = (float *)(uVar47 + 0x20 + lVar63 * 4);
                fVar23 = *pfVar10;
                fVar24 = pfVar10[1];
                fVar25 = pfVar10[2];
                fVar26 = pfVar10[3];
                pfVar10 = (float *)(uVar47 + 0x30 + lVar63 * 4);
                fVar27 = *pfVar10;
                fVar28 = pfVar10[1];
                fVar29 = pfVar10[2];
                fVar30 = pfVar10[3];
                pfVar10 = (float *)(uVar47 + lVar63 * 4);
                *pfVar10 = *pfVar5 - *pfVar9;
                pfVar10[1] = fVar77 - fVar16;
                pfVar10[2] = fVar89 - fVar17;
                pfVar10[3] = fVar97 - fVar18;
                pfVar5 = (float *)(uVar47 + 0x10 + lVar63 * 4);
                *pfVar5 = fVar80 - fVar19;
                pfVar5[1] = fVar99 - fVar20;
                pfVar5[2] = fVar14 - fVar21;
                pfVar5[3] = fVar15 - fVar22;
                pfVar5 = (float *)(uVar62 + 0x20 + lVar63 * 4);
                fVar77 = pfVar5[1];
                fVar89 = pfVar5[2];
                fVar97 = pfVar5[3];
                pfVar10 = (float *)(uVar62 + 0x30 + lVar63 * 4);
                fVar80 = *pfVar10;
                fVar99 = pfVar10[1];
                fVar14 = pfVar10[2];
                fVar15 = pfVar10[3];
                pfVar10 = (float *)(uVar47 + 0x20 + lVar63 * 4);
                *pfVar10 = *pfVar5 - fVar23;
                pfVar10[1] = fVar77 - fVar24;
                pfVar10[2] = fVar89 - fVar25;
                pfVar10[3] = fVar97 - fVar26;
                pfVar5 = (float *)(uVar47 + 0x30 + lVar63 * 4);
                *pfVar5 = fVar80 - fVar27;
                pfVar5[1] = fVar99 - fVar28;
                pfVar5[2] = fVar14 - fVar29;
                pfVar5[3] = fVar15 - fVar30;
                lVar63 = lVar63 + 0x10;
                lVar72 = lVar72 + 2;
              } while (lVar72 != 0);
            }
            if ((uVar67 & 1) != 0) {
              pfVar5 = (float *)(uVar62 + lVar63 * 4);
              fVar77 = pfVar5[1];
              fVar89 = pfVar5[2];
              fVar97 = pfVar5[3];
              pfVar10 = (float *)(uVar62 + 0x10 + lVar63 * 4);
              fVar80 = *pfVar10;
              fVar99 = pfVar10[1];
              fVar14 = pfVar10[2];
              fVar15 = pfVar10[3];
              pfVar9 = (float *)(uVar47 + lVar63 * 4);
              fVar16 = pfVar9[1];
              fVar17 = pfVar9[2];
              fVar18 = pfVar9[3];
              pfVar10 = (float *)(uVar47 + 0x10 + lVar63 * 4);
              fVar19 = *pfVar10;
              fVar20 = pfVar10[1];
              fVar21 = pfVar10[2];
              fVar22 = pfVar10[3];
              pfVar10 = (float *)(uVar47 + lVar63 * 4);
              *pfVar10 = *pfVar5 - *pfVar9;
              pfVar10[1] = fVar77 - fVar16;
              pfVar10[2] = fVar89 - fVar17;
              pfVar10[3] = fVar97 - fVar18;
              pfVar5 = (float *)(uVar47 + 0x10 + lVar63 * 4);
              *pfVar5 = fVar80 - fVar19;
              pfVar5[1] = fVar99 - fVar20;
              pfVar5[2] = fVar14 - fVar21;
              pfVar5[3] = fVar15 - fVar22;
            }
            local_520 = local_1a8;
            if (uVar51 == uVar58) goto LAB_01485cc4;
          }
          uVar65 = ~uVar58;
          for (uVar67 = uVar51 & 3; uVar67 != 0; uVar67 = uVar67 - 1) {
            *(float *)(uVar47 + uVar58 * 4) =
                 *(float *)(uVar62 + uVar58 * 4) - *(float *)(uVar47 + uVar58 * 4);
            uVar58 = uVar58 + 1;
          }
          if (2 < uVar65 + uVar51) {
            do {
              *(float *)(uVar47 + uVar58 * 4) =
                   *(float *)(uVar62 + uVar58 * 4) - *(float *)(uVar47 + uVar58 * 4);
              *(float *)(uVar47 + 4 + uVar58 * 4) =
                   *(float *)(uVar62 + 4 + uVar58 * 4) - *(float *)(uVar47 + 4 + uVar58 * 4);
              *(float *)(uVar47 + 8 + uVar58 * 4) =
                   *(float *)(uVar62 + 8 + uVar58 * 4) - *(float *)(uVar47 + 8 + uVar58 * 4);
              *(float *)(uVar47 + 0xc + uVar58 * 4) =
                   *(float *)(uVar62 + 0xc + uVar58 * 4) - *(float *)(uVar47 + 0xc + uVar58 * 4);
              uVar58 = uVar58 + 4;
            } while (uVar51 != uVar58);
          }
        }
LAB_01485cc4:
        local_518 = 0;
        FUN_014a02f0(this_ptr[0x15],this_ptr[0x17],uVar47,uVar66);
        (**(code **)(*this_ptr + 0x380))();
        if (*(char *)((int64_t)this_ptr + 0x3c) == '\0') {
          local_510 = local_e0;
          local_508 = 0;
          local_c8 = (uint64_t *)uVar66;
          FUN_014a08f0();
          puVar49 = local_178;
          uVar48 = local_b8._0_8_;
          if ((local_48 == '\0') && (local_50 != (uint64_t *)0x0)) {
            FUN_00d50b00();
          }
          local_500 = local_50;
          local_4f8 = 0;
          local_1c8 = local_50;
          FUN_014a0df0(this_ptr[0x17],(int)this_ptr[0x18] + 1,0);
          local_4f0 = local_50;
          local_4e8 = 0;
          local_290 = pfVar1;
          FUN_014a0df0(this_ptr[0x17],(int)this_ptr[0x18] + 1,0);
          local_128._0_8_ = this_ptr[0x17];
          local_4e0 = local_1a8;
          local_4d8 = 0;
          local_4d0 = puVar49;
          local_4c8 = 0;
          uVar47 = this_ptr[0x1a];
          if (uVar47 != 0) {
            FUN_00d50b00();
          }
          local_4b8 = 1;
          local_4c0 = uVar47;
          uVar81 = FUN_014a2170(local_128._0_8_,local_138,&local_4e0,&local_4d0);
          dVar82 = local_60;
          puVar49 = local_1c8;
          if (uVar47 != 0) {
            uVar81 = FUN_00d50b20();
          }
          FUN_00d242c0(uVar81,0);
          uVar47 = this_ptr[0x1a];
          fVar77 = g_02390124;
          if (*(int *)(uVar47 + 0xc) != 0) {
            fVar77 = *(float *)(*(int64_t *)
                                 (*(int64_t *)(uVar47 + 0x10) +
                                 (int64_t)(int)((float)*(int *)(uVar47 + 0xc) * g_02394234) * 8)
                               + 0x20);
          }
          *(float *)(this_ptr + 0x22) = fVar77;
          if (*(int *)(uVar47 + 0xc) != 0) {
            fVar89 = g_0240b530;
            if (fVar77 * g_0240b530 <= g_0240b530) {
              fVar89 = fVar77 * g_0240b530;
            }
            fVar77 = g_023b7c18;
            if (g_023b7c18 <= fVar89) {
              fVar77 = fVar89;
            }
            local_c8 = (uint64_t *)CONCAT44(local_c8._4_4_,fVar77);
            do {
              pfVar1 = (float *)(**(int64_t **)(uVar47 + 0x10) + 0x20);
              if (local_c8._0_4_ < *pfVar1 || local_c8._0_4_ == *pfVar1) break;
              FUN_00d23620();
              uVar47 = this_ptr[0x1a];
            } while (*(int *)(uVar47 + 0xc) != 0);
          }
          FUN_00d242c0();
          uVar47 = this_ptr[0x1a];
          if (uVar47 != 0) {
            FUN_00d50b00();
          }
          local_4a8 = 1;
          local_4b0 = uVar47;
          FUN_014a3550(this_ptr[0x17],uVar48,(int)this_ptr[0x18] + 1);
          if (uVar47 != 0) {
            FUN_00d50b20();
          }
          uVar47 = this_ptr[0x1a];
          if (uVar47 != 0) {
            FUN_00d50b00();
          }
          local_498 = 1;
          local_4a0 = uVar47;
          FUN_014a3900();
          if (uVar47 != 0) {
            FUN_00d50b20();
          }
          local_490 = puVar49;
          local_488 = 0;
          FUN_014a0df0(this_ptr[0x17],(int)this_ptr[0x18] + 1,1);
          local_480 = puVar49;
          local_478 = 0;
          FUN_014a0df0(this_ptr[0x17],(int)this_ptr[0x18] + 1,1);
          uVar47 = this_ptr[0x1a];
          if (uVar47 != 0) {
            FUN_00d50b00();
          }
          local_468 = 1;
          local_470 = uVar47;
          FUN_014a3550(this_ptr[0x17],uVar48,(int)this_ptr[0x18] + 1);
          if (uVar47 != 0) {
            FUN_00d50b20();
          }
          iVar44 = (int)this_ptr[0x18];
          uVar60 = iVar44 + 1;
          uVar47 = (uint64_t)uVar60;
          local_170 = (double)CONCAT44(local_170._4_4_,uVar60);
          if (iVar44 < 0) {
            local_d0 = (double)this_ptr[0x17];
LAB_01486436:
            fVar89 = 0.0;
            bVar74 = false;
            fVar77 = 0.0;
          }
          else {
            if (uVar60 < 8) {
              uVar66 = 0;
LAB_014861f0:
              uVar51 = ~uVar66;
              uVar62 = uVar47 & 3;
              if ((uVar60 & 3) != 0) {
                do {
                  *(float *)((int64_t)local_68 + uVar66 * 4) =
                       *(float *)(uVar48 + uVar66 * 4) + *(float *)((int64_t)dVar82 + uVar66 * 4);
                  uVar66 = uVar66 + 1;
                  uVar62 = uVar62 - 1;
                } while (uVar62 != 0);
              }
              if (2 < uVar51 + uVar47) {
                do {
                  *(float *)((int64_t)local_68 + uVar66 * 4) =
                       *(float *)(uVar48 + uVar66 * 4) + *(float *)((int64_t)dVar82 + uVar66 * 4);
                  *(float *)((int64_t)local_68 + 4U + uVar66 * 4) =
                       *(float *)(uVar48 + 4 + uVar66 * 4) +
                       *(float *)((int64_t)dVar82 + 4U + uVar66 * 4);
                  *(float *)((int64_t)local_68 + 8U + uVar66 * 4) =
                       *(float *)(uVar48 + 8 + uVar66 * 4) +
                       *(float *)((int64_t)dVar82 + 8U + uVar66 * 4);
                  *(float *)((int64_t)local_68 + 0xcU + uVar66 * 4) =
                       *(float *)(uVar48 + 0xc + uVar66 * 4) +
                       *(float *)((int64_t)dVar82 + 0xcU + uVar66 * 4);
                  uVar66 = uVar66 + 4;
                } while (uVar47 != uVar66);
              }
            }
            else {
              dVar11 = (double)((int64_t)local_68 + uVar47 * 4);
              uVar66 = 0;
              if (((uint64_t)local_68 < uVar47 * 4 + uVar48 &&
                   (uint64_t)uVar48 < (uint64_t)dVar11) ||
                 ((uint64_t)local_68 < (int64_t)dVar82 + uVar47 * 4 &&
                  (uint64_t)dVar82 < (uint64_t)dVar11)) goto LAB_014861f0;
              uVar66 = (uint64_t)(uVar60 & 0xfffffff8);
              uVar51 = (uVar66 - 8 >> 3) + 1;
              if (uVar66 - 8 == 0) {
                lVar63 = 0;
              }
              else {
                lVar72 = -(uVar51 & 0xfffffffffffffffe);
                lVar63 = 0;
                do {
                  pfVar10 = (float *)(uVar48 + lVar63 * 4);
                  fVar77 = pfVar10[1];
                  fVar89 = pfVar10[2];
                  fVar97 = pfVar10[3];
                  pfVar1 = (float *)(uVar48 + 0x10 + lVar63 * 4);
                  fVar80 = *pfVar1;
                  fVar99 = pfVar1[1];
                  fVar14 = pfVar1[2];
                  fVar15 = pfVar1[3];
                  pfVar1 = (float *)((int64_t)dVar82 + lVar63 * 4);
                  fVar16 = pfVar1[1];
                  fVar17 = pfVar1[2];
                  fVar18 = pfVar1[3];
                  pfVar5 = (float *)((int64_t)dVar82 + 0x10U + lVar63 * 4);
                  fVar19 = *pfVar5;
                  fVar20 = pfVar5[1];
                  fVar21 = pfVar5[2];
                  fVar22 = pfVar5[3];
                  pfVar5 = (float *)((int64_t)local_68 + lVar63 * 4);
                  *pfVar5 = *pfVar1 + *pfVar10;
                  pfVar5[1] = fVar16 + fVar77;
                  pfVar5[2] = fVar17 + fVar89;
                  pfVar5[3] = fVar18 + fVar97;
                  pfVar1 = (float *)((int64_t)local_68 + 0x10U + lVar63 * 4);
                  *pfVar1 = fVar19 + fVar80;
                  pfVar1[1] = fVar20 + fVar99;
                  pfVar1[2] = fVar21 + fVar14;
                  pfVar1[3] = fVar22 + fVar15;
                  pfVar1 = (float *)(uVar48 + 0x20 + lVar63 * 4);
                  fVar77 = pfVar1[1];
                  fVar89 = pfVar1[2];
                  fVar97 = pfVar1[3];
                  pfVar5 = (float *)(uVar48 + 0x30 + lVar63 * 4);
                  fVar80 = *pfVar5;
                  fVar99 = pfVar5[1];
                  fVar14 = pfVar5[2];
                  fVar15 = pfVar5[3];
                  pfVar5 = (float *)((int64_t)dVar82 + 0x20U + lVar63 * 4);
                  fVar16 = pfVar5[1];
                  fVar17 = pfVar5[2];
                  fVar18 = pfVar5[3];
                  pfVar10 = (float *)((int64_t)dVar82 + 0x30U + lVar63 * 4);
                  fVar19 = *pfVar10;
                  fVar20 = pfVar10[1];
                  fVar21 = pfVar10[2];
                  fVar22 = pfVar10[3];
                  pfVar10 = (float *)((int64_t)local_68 + 0x20U + lVar63 * 4);
                  *pfVar10 = *pfVar5 + *pfVar1;
                  pfVar10[1] = fVar16 + fVar77;
                  pfVar10[2] = fVar17 + fVar89;
                  pfVar10[3] = fVar18 + fVar97;
                  pfVar1 = (float *)((int64_t)local_68 + 0x30U + lVar63 * 4);
                  *pfVar1 = fVar19 + fVar80;
                  pfVar1[1] = fVar20 + fVar99;
                  pfVar1[2] = fVar21 + fVar14;
                  pfVar1[3] = fVar22 + fVar15;
                  lVar63 = lVar63 + 0x10;
                  lVar72 = lVar72 + 2;
                } while (lVar72 != 0);
              }
              if ((uVar51 & 1) != 0) {
                pfVar10 = (float *)(uVar48 + lVar63 * 4);
                fVar77 = pfVar10[1];
                fVar89 = pfVar10[2];
                fVar97 = pfVar10[3];
                pfVar1 = (float *)(uVar48 + 0x10 + lVar63 * 4);
                fVar80 = *pfVar1;
                fVar99 = pfVar1[1];
                fVar14 = pfVar1[2];
                fVar15 = pfVar1[3];
                pfVar1 = (float *)((int64_t)dVar82 + lVar63 * 4);
                fVar16 = pfVar1[1];
                fVar17 = pfVar1[2];
                fVar18 = pfVar1[3];
                pfVar5 = (float *)((int64_t)dVar82 + 0x10U + lVar63 * 4);
                fVar19 = *pfVar5;
                fVar20 = pfVar5[1];
                fVar21 = pfVar5[2];
                fVar22 = pfVar5[3];
                pfVar5 = (float *)((int64_t)local_68 + lVar63 * 4);
                *pfVar5 = *pfVar1 + *pfVar10;
                pfVar5[1] = fVar16 + fVar77;
                pfVar5[2] = fVar17 + fVar89;
                pfVar5[3] = fVar18 + fVar97;
                pfVar1 = (float *)((int64_t)local_68 + 0x10U + lVar63 * 4);
                *pfVar1 = fVar19 + fVar80;
                pfVar1[1] = fVar20 + fVar99;
                pfVar1[2] = fVar21 + fVar14;
                pfVar1[3] = fVar22 + fVar15;
              }
              if (uVar66 != uVar47) goto LAB_014861f0;
            }
            local_d0 = (double)this_ptr[0x17];
            if (iVar44 < 0) goto LAB_01486436;
            fVar97 = *(float *)((int64_t)this_ptr + 0x114) * g_02391094;
            if (iVar44 == 0) {
              fVar77 = 0.0;
              uVar66 = 0;
              fVar89 = 0.0;
            }
            else {
              fVar77 = 0.0;
              uVar66 = 0;
              fVar89 = 0.0;
              do {
                fVar80 = *(float *)((int64_t)local_68 + uVar66 * 4);
                if (fVar80 <= fVar97) {
                  fVar80 = *(float *)((int64_t)local_68 + 4U + uVar66 * 4);
                }
                else {
                  fVar77 = fVar77 + fVar80;
                  fVar89 = fVar89 + *(float *)((int64_t)dVar82 + uVar66 * 4);
                  fVar80 = *(float *)((int64_t)local_68 + 4U + uVar66 * 4);
                }
                if (fVar97 < fVar80) {
                  fVar77 = fVar77 + fVar80;
                  fVar89 = fVar89 + *(float *)((int64_t)dVar82 + 4U + uVar66 * 4);
                }
                uVar66 = uVar66 + 2;
              } while ((uVar60 & 0xfffffffe) != uVar66);
            }
            bVar74 = true;
            if (((uVar60 & 1) != 0) &&
               (fVar80 = *(float *)((int64_t)local_68 + uVar66 * 4), fVar97 < fVar80)) {
              fVar77 = fVar77 + fVar80;
              fVar89 = fVar89 + *(float *)((int64_t)dVar82 + uVar66 * 4);
            }
          }
          fVar89 = (float)(~-(uint)(0.0 < fVar77) & (uint)g_02390124 |
                          (~-(uint)(0.0 < fVar89) & (uint)g_02390124 |
                          (uint)(fVar77 / fVar89) & -(uint)(0.0 < fVar89)) & -(uint)(0.0 < fVar77));
          local_c8 = (uint64_t *)(uint64_t)(uint)fVar89;
          uStack_c0 = 0;
          uStack_bc = 0;
          fVar77 = g_02390124;
          if (0.0 < fVar89) {
            fVar77 = (float)_logf();
            fVar77 = g_02390124 / fVar77;
            fVar89 = local_c8._0_4_;
          }
          dVar11 = local_68;
          puVar49 = local_88;
          if (bVar74) {
            local_138 = (double)(uint64_t)(uint)fVar77;
            uStack_130 = 0;
            uStack_12c = 0;
            fVar97 = g_023d59b4;
            if (local_170._0_4_ < 4) {
LAB_01486647:
              uVar66 = 0;
            }
            else {
              dVar3 = (double)((int64_t)local_88 + uVar47 * 4);
              uVar66 = 0;
              if (local_88 < (uint64_t *)((int64_t)local_68 + uVar47 * 4) &&
                  (uint64_t)local_68 < (uint64_t)dVar3) goto LAB_01486647;
              if ((uint64_t *)((int64_t)dVar82 + uVar47 * 4) <= local_88 ||
                  (uint64_t)dVar3 <= (uint64_t)dVar82) {
                uVar66 = (uint64_t)(uVar60 & 0xfffffffc);
                local_188 = (void*)CONCAT44(fVar89,fVar89);
                local_198 = (uint64_t *)CONCAT44(fVar77,fVar77);
                local_150 = uVar47 * 4 & 0xfffffffffffffff0;
                uVar51 = 0;
                fStack_190 = fVar77;
                fStack_18c = fVar77;
                fStack_180 = fVar89;
                fStack_17c = fVar89;
                do {
                  pfVar1 = (float *)((int64_t)local_60 + uVar51);
                  auVar91._0_4_ = *pfVar1 * (float)local_188;
                  auVar91._4_4_ = pfVar1[1] * local_188._4_4_;
                  auVar91._8_4_ = pfVar1[2] * fStack_180;
                  auVar91._12_4_ = pfVar1[3] * fStack_17c;
                  auVar98 = maxps(g_0240e1f0,*(uint8_t (*) [16])((int64_t)dVar11 + uVar51));
                  auVar83 = maxps(g_0240e1f0,auVar91);
                  local_128 = divps(auVar83,auVar98);
                  local_b8._0_8_ = _logf();
                  local_b8._8_8_ = extraout_XMM0_Qb;
                  auVar83._0_8_ = _logf();
                  auVar83._8_8_ = extraout_XMM0_Qb_00;
                  local_b8 = insertps(local_b8,auVar83,0x10);
                  auVar13._4_8_ = extraout_XMM0_Qb_00;
                  auVar13._0_4_ = local_128._4_4_;
                  auVar98._0_8_ = auVar13._0_8_ << 0x20;
                  auVar98._8_4_ = local_128._8_4_;
                  auVar98._12_4_ = local_128._12_4_;
                  auVar84._0_8_ = _logf(auVar98._8_8_);
                  auVar84._8_8_ = extraout_XMM0_Qb_01;
                  local_b8 = insertps(local_b8,auVar84,0x20);
                  auVar85._0_8_ = _logf();
                  auVar85._8_8_ = extraout_XMM0_Qb_02;
                  auVar83 = insertps(local_b8,auVar85,0x30);
                  pfVar1 = (float *)((int64_t)puVar49 + uVar51);
                  *pfVar1 = auVar83._0_4_ * (float)local_198;
                  pfVar1[1] = auVar83._4_4_ * local_198._4_4_;
                  pfVar1[2] = auVar83._8_4_ * fStack_190;
                  pfVar1[3] = auVar83._12_4_ * fStack_18c;
                  uVar51 = uVar51 + 0x10;
                } while (local_150 != uVar51);
                dVar82 = local_60;
                fVar89 = local_c8._0_4_;
                fVar97 = g_023d59b4;
                if (uVar66 == uVar47) goto LAB_014866a1;
              }
            }
            do {
              fVar89 = *(float *)((int64_t)dVar82 + uVar66 * 4) * fVar89;
              fVar77 = *(float *)((int64_t)dVar11 + uVar66 * 4);
              fVar80 = fVar97;
              if (fVar97 <= fVar77) {
                fVar80 = fVar77;
              }
              if (fVar97 <= fVar89) {
                fVar97 = fVar89;
              }
              fVar77 = (float)_logf(fVar97 / fVar80);
              fVar97 = g_023d59b4;
              *(float *)((int64_t)puVar49 + uVar66 * 4) = fVar77 * local_138._0_4_;
              uVar66 = uVar66 + 1;
              fVar89 = local_c8._0_4_;
            } while (uVar47 != uVar66);
          }
LAB_014866a1:
          fVar77 = (float)(local_d0 / g_0240f0f0);
          local_50 = puVar49;
          FUN_015c1580(CONCAT44((int)((uint64_t)(local_d0 / g_0240f0f0) >> 0x20),fVar77 + fVar77)
                       ,(uint64_t)local_170 & 0xffffffff);
          puVar49 = (uint64_t *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar49 = (uint64_t)local_40;
          (*local_70)();
          local_458 = 0;
          local_460 = puVar49;
          local_198 = puVar49;
          FUN_0149b7e0(this_ptr[0x17],this_ptr[0x28],
                       *(float *)((int64_t)this_ptr + 0x114) * g_023b81d4);
          uVar47 = this_ptr[0x1a];
          if (0 < *(int *)(uVar47 + 0xc)) {
            local_b8._0_4_ = g_02390124 / *(float *)((int64_t)this_ptr + 0x114);
            local_128._0_4_ = local_c8._0_4_ / *(float *)((int64_t)this_ptr + 0x114);
            iVar44 = 0;
            do {
              lVar63 = *(int64_t *)(*(int64_t *)(uVar47 + 0x10) + (int64_t)iVar44 * 8);
              if (lVar63 != 0) {
                FUN_00d50b00();
              }
              if (((*(float *)(lVar63 + 0x2c) <= g_0239424c) &&
                  (*(float *)(lVar63 + 0x30) <= g_0239424c)) ||
                 (*(int *)(this_ptr[0x28] +
                          (int64_t)(int)(*(double *)(lVar63 + 0x10) * (double)this_ptr[0x17]) * 4)
                  == 0)) {
                FUN_00d23620();
                iVar44 = iVar44 + -1;
              }
              else {
                *(float *)(lVar63 + 0x34) = *(float *)(lVar63 + 0x34) * (float)local_b8._0_4_;
                *(float *)(lVar63 + 0x38) = *(float *)(lVar63 + 0x38) * (float)local_128._0_4_;
              }
              FUN_00d50b20();
              iVar44 = iVar44 + 1;
              uVar47 = this_ptr[0x1a];
            } while (iVar44 < *(int *)(uVar47 + 0xc));
          }
          (**(code **)(*this_ptr + 0x380))();
          if (*(char *)((int64_t)this_ptr + 0x3c) == '\0') {
            FUN_00d216c0();
            uVar47 = this_ptr[0x1a];
            if (0 < *(int *)(uVar47 + 0xc)) {
              lVar63 = 0;
              do {
                lVar72 = *(int64_t *)(*(int64_t *)(uVar47 + 0x10) + lVar63 * 8);
                if (lVar72 != 0) {
                  FUN_00d50b00();
                }
                FUN_014ba950();
                puVar49 = local_50;
                if (((local_48 == '\0') && (local_50 != (uint64_t *)0x0)) &&
                   ((FUN_00d50b00(), local_48 != '\0' && (local_50 != (uint64_t *)0x0)))) {
                  FUN_00d50b20();
                }
                local_48 = '\0';
                local_50 = puVar49;
                FUN_00d21140();
                if ((local_48 != '\0') && (local_50 != (uint64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (puVar49 != (uint64_t *)0x0) {
                  FUN_00d50b20();
                }
                if (lVar72 != 0) {
                  FUN_00d50b20();
                }
                lVar63 = lVar63 + 1;
                uVar47 = this_ptr[0x1a];
              } while (lVar63 < *(int *)(uVar47 + 0xc));
            }
            if (local_144 != 2.8026e-45) {
              uVar47 = this_ptr[0x1b];
              if (uVar47 != 0) {
                FUN_00d50b00();
              }
              local_448 = 1;
              local_440 = 0;
              local_438 = 0;
              local_450 = uVar47;
              FUN_014a42b0(0,&local_440);
              puVar49 = local_50;
              if ((local_48 == '\0') && (local_50 != (uint64_t *)0x0)) {
                FUN_00d50b00();
              }
              if (uVar47 != 0) {
                FUN_00d50b20();
              }
              local_430 = puVar49;
              local_428 = 0;
              uVar79 = FUN_014a5580(this_ptr[0x17],local_68,(int)this_ptr[0x18] + 1);
              *(void*)((int64_t)this_ptr + 0xec) = uVar79;
              local_420 = puVar49;
              local_418 = 0;
              uVar79 = FUN_014a5ba0(this_ptr[0x17]);
              *(void*)(this_ptr + 0x1e) = uVar79;
              if (puVar49 != (uint64_t *)0x0) {
                FUN_00d50b20();
              }
            }
            puVar46 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar46 = local_40;
            (*local_70)();
            local_408 = 0;
            local_128._0_8_ = puVar46;
            local_410 = puVar46;
            FUN_014a6a60(this_ptr[0x17],local_68);
            puVar49 = local_88;
            local_3f8 = 0;
            local_3f0 = local_158;
            local_3e8 = 0;
            pVar56 = (void*)this_ptr[0x29];
            uVar47 = this_ptr[0x1a];
            local_400 = puVar46;
            if (uVar47 != 0) {
              FUN_00d50b00();
            }
            local_3d8 = 1;
            fVar77 = g_02390128;
            if (g_02390128 <= *(float *)(this_ptr + 0x22) * g_02394288) {
              fVar77 = *(float *)(this_ptr + 0x22) * g_02394288;
            }
            local_3e0 = uVar47;
            FUN_014a74b0(local_58,fVar77 * g_0239011c,this_ptr[0x16],(int64_t)this_ptr + 0xf4,
                         this_ptr + 0x21);
            if (uVar47 != 0) {
              FUN_00d50b20();
            }
            uVar47 = this_ptr[0xe];
            if (uVar47 != 0) {
              FUN_00d50b00();
            }
            pvVar45 = _pthread_getspecific(pVar56);
            if (pvVar45 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar43 = FUN_0141ba80();
            if (uVar47 != 0) {
              FUN_00d50b20();
            }
            if (cVar43 == '\0') {
              uVar47 = this_ptr[0xe];
              if (uVar47 != 0) {
                FUN_00d50b00();
              }
              pvVar45 = _pthread_getspecific(pVar56);
              if (pvVar45 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar44 = FUN_0141bab0();
              *(bool *)(this_ptr + 0x1c) = iVar44 == 2;
              if (uVar47 != 0) {
                FUN_00d50b20();
              }
            }
            else {
              fVar77 = (*(float *)(this_ptr + 0x1e) + *(float *)((int64_t)this_ptr + 0xec)) *
                       g_0239011c;
              *(bool *)(this_ptr + 0x1c) =
                   g_02411290 < fVar77 / *(float *)((int64_t)this_ptr + 0xf4) &&
                   (g_023b294c < fVar77 || g_02390128 < *(float *)((int64_t)this_ptr + 0xec))
              ;
            }
            local_60 = (double)CONCAT44(local_60._4_4_,(int)this_ptr[0x22]);
            uVar47 = this_ptr[0x1a];
            if (uVar47 != 0) {
              FUN_00d50b00();
            }
            local_3c8 = 1;
            local_3d0 = uVar47;
            FUN_014a89c0();
            local_1a0 = local_50;
            if ((local_48 == '\0') && (local_50 != (uint64_t *)0x0)) {
              FUN_00d50b00();
            }
            if (uVar47 != 0) {
              FUN_00d50b20();
            }
            FUN_00c8e690();
            puVar50 = local_50;
            if ((((local_48 == '\0') && (local_50 != (uint64_t *)0x0)) &&
                (FUN_00d50b00(), local_48 != '\0')) && (local_50 != (uint64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00c92170();
            FUN_00c92160();
            puVar46 = local_e0;
            uVar42 = _UNK_0240f0e8;
            uVar41 = g_0240f0e0;
            uVar81 = _UNK_0240e208;
            uVar48 = g_0240e200;
            local_208 = puVar50;
            uVar47 = puVar50[2];
            if (local_144 == 2.8026e-45) {
              uVar60 = (uint)this_ptr[0x18];
              if (-1 < (int)uVar60) {
                fVar77 = (float)((double)this_ptr[0x15] / g_0240de68);
                uVar66 = (uint64_t)uVar60 + 1;
                if (uVar60 < 7) {
                  uVar65 = 0;
                }
                else {
                  uVar51 = local_140 + uVar66 * 4;
                  uVar62 = local_78 + uVar66 * 4;
                  uVar58 = local_100 + uVar66 * 4;
                  uVar67 = uVar47 + uVar66 * 4;
                  local_58 = (uint64_t *)CONCAT71(local_58._1_7_,local_140 < uVar62);
                  local_60 = (double)CONCAT71(local_60._1_7_,local_100 < uVar51);
                  local_b8[0] = local_100 < uVar62;
                  uVar65 = 0;
                  puVar49 = local_88;
                  if ((((local_140 >= uVar62 || uVar51 <= local_78) &&
                       (uVar58 <= local_140 || local_100 >= uVar51)) &&
                      (uVar67 <= local_140 || uVar51 <= uVar47)) &&
                     (((uVar58 <= local_78 || local_100 >= uVar62 &&
                       (uVar67 <= local_78 || uVar62 <= uVar47)) &&
                      (uVar67 <= local_100 || uVar58 <= uVar47)))) {
                    uVar65 = (uint64_t)((uint)uVar66 & 0xfffffff8);
                    uVar51 = (uVar65 - 8 >> 3) + 1;
                    if (uVar65 - 8 == 0) {
                      lVar63 = 0;
                    }
                    else {
                      lVar72 = -(uVar51 & 0xfffffffffffffffe);
                      lVar63 = 0;
                      do {
                        puVar46 = (void*)(local_140 + lVar63 * 4);
                        *puVar46 = uVar48;
                        puVar46[1] = uVar81;
                        puVar46 = (void*)(local_140 + 0x10 + lVar63 * 4);
                        *puVar46 = uVar48;
                        puVar46[1] = uVar81;
                        pfVar1 = (float *)(local_78 + lVar63 * 4);
                        *pfVar1 = fVar77;
                        pfVar1[1] = fVar77;
                        pfVar1[2] = fVar77;
                        pfVar1[3] = fVar77;
                        pfVar1 = (float *)(local_78 + 0x10 + lVar63 * 4);
                        *pfVar1 = fVar77;
                        pfVar1[1] = fVar77;
                        pfVar1[2] = fVar77;
                        pfVar1[3] = fVar77;
                        puVar46 = (void*)(local_100 + lVar63 * 4);
                        *puVar46 = uVar41;
                        puVar46[1] = uVar42;
                        puVar46 = (void*)(local_100 + 0x10 + lVar63 * 4);
                        *puVar46 = uVar41;
                        puVar46[1] = uVar42;
                        puVar46 = (void*)(uVar47 + lVar63 * 4);
                        *puVar46 = 0;
                        puVar46[1] = 0;
                        puVar46 = (void*)(uVar47 + 0x10 + lVar63 * 4);
                        *puVar46 = 0;
                        puVar46[1] = 0;
                        puVar46 = (void*)(local_140 + 0x20 + lVar63 * 4);
                        *puVar46 = uVar48;
                        puVar46[1] = uVar81;
                        puVar46 = (void*)(local_140 + 0x30 + lVar63 * 4);
                        *puVar46 = uVar48;
                        puVar46[1] = uVar81;
                        pfVar1 = (float *)(local_78 + 0x20 + lVar63 * 4);
                        *pfVar1 = fVar77;
                        pfVar1[1] = fVar77;
                        pfVar1[2] = fVar77;
                        pfVar1[3] = fVar77;
                        pfVar1 = (float *)(local_78 + 0x30 + lVar63 * 4);
                        *pfVar1 = fVar77;
                        pfVar1[1] = fVar77;
                        pfVar1[2] = fVar77;
                        pfVar1[3] = fVar77;
                        puVar46 = (void*)(local_100 + 0x20 + lVar63 * 4);
                        *puVar46 = uVar41;
                        puVar46[1] = uVar42;
                        puVar46 = (void*)(local_100 + 0x30 + lVar63 * 4);
                        *puVar46 = uVar41;
                        puVar46[1] = uVar42;
                        puVar46 = (void*)(uVar47 + 0x20 + lVar63 * 4);
                        *puVar46 = 0;
                        puVar46[1] = 0;
                        puVar46 = (void*)(uVar47 + 0x30 + lVar63 * 4);
                        *puVar46 = 0;
                        puVar46[1] = 0;
                        lVar63 = lVar63 + 0x10;
                        lVar72 = lVar72 + 2;
                      } while (lVar72 != 0);
                    }
                    uVar81 = _UNK_0240e208;
                    uVar48 = g_0240e200;
                    if ((uVar51 & 1) != 0) {
                      puVar46 = (void*)(local_140 + lVar63 * 4);
                      *puVar46 = g_0240e200;
                      puVar46[1] = uVar81;
                      puVar46 = (void*)(local_140 + 0x10 + lVar63 * 4);
                      *puVar46 = uVar48;
                      puVar46[1] = uVar81;
                      pfVar1 = (float *)(local_78 + lVar63 * 4);
                      *pfVar1 = fVar77;
                      pfVar1[1] = fVar77;
                      pfVar1[2] = fVar77;
                      pfVar1[3] = fVar77;
                      pfVar1 = (float *)(local_78 + 0x10 + lVar63 * 4);
                      *pfVar1 = fVar77;
                      pfVar1[1] = fVar77;
                      pfVar1[2] = fVar77;
                      pfVar1[3] = fVar77;
                      uVar81 = _UNK_0240f0e8;
                      uVar48 = g_0240f0e0;
                      puVar46 = (void*)(local_100 + lVar63 * 4);
                      *puVar46 = g_0240f0e0;
                      puVar46[1] = uVar81;
                      puVar46 = (void*)(local_100 + 0x10 + lVar63 * 4);
                      *puVar46 = uVar48;
                      puVar46[1] = uVar81;
                      puVar46 = (void*)(uVar47 + lVar63 * 4);
                      *puVar46 = 0;
                      puVar46[1] = 0;
                      puVar46 = (void*)(uVar47 + 0x10 + lVar63 * 4);
                      *puVar46 = 0;
                      puVar46[1] = 0;
                    }
                    if (uVar65 == uVar66) goto LAB_01487787;
                  }
                }
                uVar51 = ~uVar65;
                if ((uVar66 & 1) != 0) {
                  *(void*)(local_140 + uVar65 * 4) = 0x45d7a000;
                  *(float *)(local_78 + uVar65 * 4) = fVar77;
                  *(void*)(local_100 + uVar65 * 4) = 0xb58637bd;
                  *(void*)(uVar47 + uVar65 * 4) = 0;
                  uVar65 = uVar65 | 1;
                }
                if (uVar51 + uVar66 != 0) {
                  do {
                    *(void*)(local_140 + uVar65 * 4) = 0x45d7a000;
                    *(float *)(local_78 + uVar65 * 4) = fVar77;
                    *(void*)(local_100 + uVar65 * 4) = 0xb58637bd;
                    *(void*)(uVar47 + uVar65 * 4) = 0;
                    *(void*)(local_140 + 4 + uVar65 * 4) = 0x45d7a000;
                    *(float *)(local_78 + 4 + uVar65 * 4) = fVar77;
                    *(void*)(local_100 + 4 + uVar65 * 4) = 0xb58637bd;
                    *(void*)(uVar47 + 4 + uVar65 * 4) = 0;
                    uVar65 = uVar65 + 2;
                  } while (uVar66 != uVar65);
                }
              }
LAB_01487787:
              local_340 = local_1a0;
              local_338 = 0;
              FUN_014adca0(this_ptr[0x15],g_02390124 / local_80._0_4_,this_ptr[0x17],
                           (int)this_ptr[0x18] + 1);
              puVar46 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar46 = local_40;
              (*local_70)();
              local_328 = 0;
              local_330 = puVar46;
              local_168 = puVar46;
              FUN_014ae680(this_ptr[0x17],puVar49,uVar47,this_ptr[0x28]);
              (**(code **)(*this_ptr + 0x380))();
              if (*(char *)((int64_t)this_ptr + 0x3c) != '\0') {
                FUN_00e34a60();
                uVar48 = FUN_00d50b20();
                goto LAB_014878c0;
              }
              *(void*)((int64_t)this_ptr + 0xe1) = 0;
              if (local_144 != 2.8026e-45) {
                local_170 = (double)this_ptr[0x17] / (double)this_ptr[0x15];
                uVar48 = GNFastFourierTransformer_create();
                puVar49 = local_50;
                uVar54 = (undefined7)((uint64_t)uVar48 >> 8);
                if (local_50 == (uint64_t *)0x0) {
                  local_a0 = CONCAT44(local_a0._4_4_,(int)CONCAT71(uVar54,1));
                  puVar49 = (uint64_t *)0x0;
                  local_98 = 0;
                }
                else {
                  local_98 = CONCAT71(uVar54,1);
                  if (local_48 == '\0') {
                    FUN_00d50b00();
                    local_a0 = (uint64_t)local_a0._4_4_ << 0x20;
                    if ((local_48 != '\0') && (local_50 != (uint64_t *)0x0)) {
                      FUN_00d50b20();
                      local_a0 = local_a0 & 0xffffffff00000000;
                    }
                  }
                  else {
                    local_a0 = (uint64_t)local_a0._4_4_ << 0x20;
                  }
                }
                local_d8 = puVar49;
                uVar47 = FUN_00e83010();
                uVar66 = FUN_00e83010();
                local_138 = (double)FUN_00e83010();
                local_110 = uVar47;
                puVar46 = (void*)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar46 = &g_024c1200;
                *(void*)((int64_t)puVar46 + 0xc) = 0;
                *(void*)((int64_t)puVar46 + 0x14) = 0;
                *(void*)((int64_t)puVar46 + 0x1c) = 0;
                FUN_00d500e0();
                local_88 = (uint64_t *)0x0;
                auVar33._8_8_ = 0;
                auVar33._0_8_ = local_f8._8_8_;
                local_f8 = auVar33 << 0x40;
                local_188 = puVar46;
                FUN_00e3d400();
                local_88 = (uint64_t *)0x0;
                auVar34._8_8_ = 0;
                auVar34._0_8_ = local_f8._8_8_;
                local_f8 = auVar34 << 0x40;
                uVar47 = FUN_00e83010();
                local_88 = (uint64_t *)0x0;
                auVar35._8_8_ = 0;
                auVar35._0_8_ = local_f8._8_8_;
                local_f8 = auVar35 << 0x40;
                lVar63 = FUN_00e83010();
                iVar44 = 1;
                if (0 < (int)((double)this_ptr[0x15] / g_0240e370)) {
                  iVar44 = (int)((double)this_ptr[0x15] / g_0240e370);
                }
                local_d0 = (double)CONCAT44(local_d0._4_4_,iVar44);
                if (*(int *)((int64_t)local_e0 + 0xc) < 1) {
                  auVar37._8_8_ = 0;
                  auVar37._0_8_ = local_f8._8_8_;
                  local_f8 = auVar37 << 0x40;
                  local_88 = (uint64_t *)0x0;
LAB_014881fa:
                  fVar77 = g_02391090;
                  *(void*)((int64_t)this_ptr + 0x10c) = 0x3dcccccd;
                  bVar74 = true;
                }
                else {
                  local_150 = local_100 + 0xc;
                  local_60 = (double)((uint64_t)local_60 & 0xffffffff00000000);
                  lVar72 = 0;
                  local_58 = (uint64_t *)((uint64_t)local_58 & 0xffffffff00000000);
                  auVar36._8_8_ = 0;
                  auVar36._0_8_ = local_f8._8_8_;
                  local_f8 = auVar36 << 0x40;
                  local_88 = (uint64_t *)0x0;
                  local_108 = uVar66;
                  local_90 = uVar47;
                  do {
                    lVar52 = local_e0[2];
                    lVar53 = *(int64_t *)(lVar52 + lVar72 * 8);
                    if (local_f8._0_8_ == lVar53) {
                      if (((char)local_88 == '\0') && (local_f8._0_8_ != 0)) {
                        local_88 = (uint64_t *)CONCAT71((int7)((uint64_t)lVar52 >> 8),1);
                        FUN_00d50b00();
                      }
                    }
                    else {
                      if (lVar53 != 0) {
                        lVar52 = FUN_00d50b00();
                      }
                      if (((char)local_88 == '\0') || (local_f8._0_8_ == 0)) {
                        local_88 = (uint64_t *)CONCAT71((int7)((uint64_t)lVar52 >> 8),1);
                        local_f8._0_8_ = lVar53;
                      }
                      else {
                        local_f8._0_8_ = lVar53;
                        uVar48 = FUN_00d50b20();
                        local_88 = (uint64_t *)CONCAT71((int7)((uint64_t)uVar48 >> 8),1);
                      }
                    }
                    dVar82 = (double)this_ptr[0x17];
                    iVar61 = (int)(*(double *)(local_f8._0_8_ + 0x10) * dVar82);
                    iVar44 = (int)(*(double *)(local_f8._0_8_ + 0x18) * dVar82);
                    if (iVar44 - iVar61 != 0 && iVar61 <= iVar44) {
                      uVar66 = (uint64_t)iVar61;
                      uVar62 = (int64_t)iVar44 - uVar66;
                      uVar51 = (uint64_t)((uint)uVar62 & 3);
                      uVar47 = 0xffffffff;
                      fVar77 = g_0240f130;
                      if (2 < ~uVar66 + (int64_t)iVar44) {
                        lVar52 = local_150 + uVar66 * 4;
                        uVar47 = 0xffffffff;
                        uVar58 = 0;
                        do {
                          fVar89 = *(float *)(lVar52 + -0xc + uVar58 * 4);
                          iVar64 = (int)uVar58;
                          uVar60 = iVar61 + iVar64;
                          if (fVar89 <= fVar77) {
                            uVar60 = (uint)uVar47;
                          }
                          fVar97 = *(float *)(lVar52 + -8 + uVar58 * 4);
                          if (fVar89 <= fVar77) {
                            fVar89 = fVar77;
                          }
                          uVar76 = iVar61 + 1 + iVar64;
                          if (fVar97 <= fVar89) {
                            fVar97 = fVar89;
                            uVar76 = uVar60;
                          }
                          fVar89 = *(float *)(lVar52 + -4 + uVar58 * 4);
                          uVar60 = iVar61 + 2 + iVar64;
                          if (fVar89 <= fVar97) {
                            fVar89 = fVar97;
                            uVar60 = uVar76;
                          }
                          fVar77 = *(float *)(lVar52 + uVar58 * 4);
                          uVar76 = iVar61 + 3 + iVar64;
                          if (fVar77 <= fVar89) {
                            uVar76 = uVar60;
                          }
                          uVar47 = (uint64_t)uVar76;
                          if (fVar77 <= fVar89) {
                            fVar77 = fVar89;
                          }
                          uVar58 = uVar58 + 4;
                        } while ((uVar62 & 0xfffffffffffffffc) != uVar58);
                        uVar66 = uVar66 + uVar58;
                      }
                      uVar60 = (uint)uVar47;
                      for (; uVar51 != 0; uVar51 = uVar51 - 1) {
                        fVar89 = *(float *)(local_100 + uVar66 * 4);
                        uVar60 = (uint)uVar47;
                        if (fVar77 < fVar89) {
                          uVar47 = uVar66 & 0xffffffff;
                          uVar60 = (uint)uVar66;
                          fVar77 = fVar89;
                        }
                        uVar66 = uVar66 + 1;
                      }
                      if (-1 < (int)uVar60) {
                        fVar77 = *(float *)(local_78 + (uint64_t)uVar60 * 4);
                        if ((int)((double)fVar77 + g_023942d0) * 4 <=
                            (int)(((double)(iVar44 - iVar61) / dVar82) * (double)this_ptr[0x15])) {
                          iVar44 = 1;
                          do {
                            iVar61 = iVar44;
                            iVar44 = iVar61 * 2;
                          } while (0x200 < (int)((double)fVar77 + g_023942d0) / iVar61);
                          iVar61 = iVar61 * local_d0._0_4_;
                          lVar52 = (int64_t)
                                   (((double)(int)uVar60 / dVar82) * (double)this_ptr[0x15]) -
                                   (uint64_t)(uint)(iVar61 * 0x200);
                          if (lVar52 < 0) {
                            lVar52 = 0;
                          }
                          local_c8 = (uint64_t *)CONCAT44(local_c8._4_4_,g_02390124 / fVar77);
                          local_b8._0_4_ = fVar77;
                          local_80._0_4_ = (float)lVar52;
                          ___bzero();
                          fVar77 = (float)iVar61;
                          uVar47 = this_ptr[0x13];
                          bVar74 = true;
                          lVar52 = 0;
                          do {
                            if ((int64_t)uVar47 <= (int64_t)(int)local_80._0_4_) break;
                            *(void*)(local_90 + lVar52 * 4) =
                                 *(void*)
                                  (this_ptr[0x11] + (int64_t)(int)local_80._0_4_ * 4);
                            if (bVar74) {
                              fVar89 = 0.0;
                              if (0.0 <= (float)((double)local_80._0_4_ * local_170)) {
                                fVar89 = (float)((double)local_80._0_4_ * local_170);
                              }
                              uVar76 = -(uint)(fVar89 < (float)(int)this_ptr[0x18]);
                              fVar80 = (float)(~uVar76 & (uint)((float)(int)this_ptr[0x18] +
                                                               g_02390d00) | (uint)fVar89 & uVar76
                                              );
                              fVar89 = *(float *)(local_78 + (int64_t)(int)fVar80 * 4);
                              fVar97 = *(float *)(local_78 + 4 + (int64_t)(int)fVar80 * 4);
                              if (fVar89 <= fVar97) {
                                fVar99 = fVar97 / fVar89;
                              }
                              else {
                                fVar99 = fVar89 / fVar97;
                              }
                              if ((double)fVar99 < g_024119c0) {
                                local_b8._0_4_ =
                                     (fVar97 - fVar89) * (fVar80 - (float)(int)fVar80) + fVar89;
                              }
                              else {
                                bVar74 = false;
                              }
                            }
                            local_80._0_4_ =
                                 local_80._0_4_ + (float)local_b8._0_4_ * fVar77 * local_c8._0_4_;
                            lVar52 = lVar52 + 1;
                          } while (lVar52 != 0x400);
                          local_b8._0_4_ = fVar77;
                          local_80 = (uint64_t *)
                                     CONCAT44(local_80._4_4_,
                                              *(void*)(local_78 + (uint64_t)uVar60 * 4));
                          FUN_00e3daa0(lVar52,lVar63);
                          uVar47 = local_90;
                          iVar44 = (int)(local_80._0_4_ / (float)local_b8._0_4_);
                          iVar61 = (int)((float)iVar44 * g_0239109c);
                          iVar64 = (int)((float)iVar44 * g_02411290);
                          if (iVar61 < iVar64) {
                            uVar66 = (uint64_t)iVar61;
                            uVar51 = ~uVar66;
                            uVar62 = (uint64_t)(uint)(iVar64 - iVar61) & 3;
                            if ((iVar64 - iVar61 & 3U) == 0) {
                              fVar77 = 0.0;
                            }
                            else {
                              fVar89 = 0.0;
                              do {
                                fVar77 = *(float *)(lVar63 + uVar66 * 4);
                                iVar61 = (int)uVar66;
                                if (fVar77 <= fVar89) {
                                  fVar77 = fVar89;
                                  iVar61 = iVar44;
                                }
                                iVar44 = iVar61;
                                uVar66 = uVar66 + 1;
                                uVar62 = uVar62 - 1;
                                fVar89 = fVar77;
                              } while (uVar62 != 0);
                            }
                            if (2 < uVar51 + (int64_t)iVar64) {
                              do {
                                fVar89 = *(float *)(lVar63 + uVar66 * 4);
                                iVar61 = (int)uVar66;
                                if (fVar77 < fVar89) {
                                  iVar44 = iVar61;
                                }
                                fVar97 = *(float *)(lVar63 + 4 + uVar66 * 4);
                                if (fVar89 <= fVar77) {
                                  fVar89 = fVar77;
                                }
                                iVar88 = iVar61 + 1;
                                if (fVar97 <= fVar89) {
                                  fVar97 = fVar89;
                                  iVar88 = iVar44;
                                }
                                fVar89 = *(float *)(lVar63 + 8 + uVar66 * 4);
                                iVar90 = iVar61 + 2;
                                if (fVar89 <= fVar97) {
                                  fVar89 = fVar97;
                                  iVar90 = iVar88;
                                }
                                fVar77 = *(float *)(lVar63 + 0xc + uVar66 * 4);
                                iVar44 = iVar61 + 3;
                                if (fVar77 <= fVar89) {
                                  fVar77 = fVar89;
                                  iVar44 = iVar90;
                                }
                                uVar66 = uVar66 + 4;
                              } while (uVar66 != (int64_t)iVar64);
                            }
                          }
                          if (iVar44 < 0x200) {
                            uVar48 = FUN_00e83530();
                            FUN_00e83530(uVar48,(int64_t)iVar44 * 4 + uVar47);
                            uVar47 = local_108;
                            lVar52 = 0;
                            do {
                              fVar77 = *(float *)(uVar47 + 8 + lVar52 * 8);
                              fVar89 = *(float *)(uVar47 + 0xc + lVar52 * 8);
                              local_b8._0_4_ = fVar89 * fVar89 + fVar77 * fVar77;
                              uVar79 = _atan2f();
                              local_c8 = (uint64_t *)CONCAT44(local_c8._4_4_,uVar79);
                              fVar77 = *(float *)((int64_t)local_138 + 8U + lVar52 * 8);
                              fVar89 = *(float *)((int64_t)local_138 + 0xcU + lVar52 * 8);
                              local_80 = (uint64_t *)
                                         CONCAT44(local_80._4_4_,fVar89 * fVar89 + fVar77 * fVar77);
                              fVar89 = (float)_atan2f();
                              fVar77 = local_c8._0_4_;
                              if (g_02410f88 <
                                  (float)((uint)(fVar89 - local_c8._0_4_) & g_02390140)) {
                                if (local_c8._0_4_ <= fVar89) {
                                  fVar77 = local_c8._0_4_ + g_02394278;
                                }
                                else {
                                  fVar89 = fVar89 + g_02394278;
                                }
                              }
                              local_58 = (uint64_t *)
                                         CONCAT44(local_58._4_4_,
                                                  local_58._0_4_ +
                                                  (float)local_b8._0_4_ + local_80._0_4_);
                              local_60 = (double)CONCAT44(local_60._4_4_,
                                                          local_60._0_4_ +
                                                          ((float)local_b8._0_4_ + local_80._0_4_) *
                                                          (float)((uint)(fVar89 - fVar77) &
                                                                 g_02390140));
                              lVar52 = lVar52 + 1;
                            } while (lVar52 != 0x3f);
                          }
                        }
                      }
                    }
                    lVar72 = lVar72 + 1;
                  } while (lVar72 < *(int *)((int64_t)local_e0 + 0xc));
                  puVar49 = local_d8;
                  if (local_58._0_4_ < g_02394274) goto LAB_014881fa;
                  fVar77 = g_02390124 / ((local_60._0_4_ / local_58._0_4_) * g_023908ec);
                  *(float *)((int64_t)this_ptr + 0x10c) = fVar77;
                  bVar74 = fVar77 <= g_023b3888;
                }
                *(bool *)((int64_t)this_ptr + 0xe1) = bVar74;
                if (g_0241ea70 < (double)(fVar77 * *(float *)((int64_t)this_ptr + 0xf4))) {
                  *(void*)((int64_t)this_ptr + 0xe1) = 0;
                }
                puVar50 = this_ptr;
                FUN_00e83070();
                FUN_00e83070();
                FUN_00e83070();
                FUN_00e83070();
                FUN_00e83070();
                uVar47 = local_98 & 0xff;
                if (puVar49 != (uint64_t *)0x0) {
                  uVar47 = 0;
                }
                bVar55 = puVar49 == (uint64_t *)0x0 | (byte)local_a0;
                pVar56 = (void*)CONCAT71((int7)((uint64_t)puVar50 >> 8),bVar55);
                if (bVar55 == 0) {
                  uVar47 = 0;
                  FUN_00d50b20();
                }
                if (local_188 != (void*)0x0) {
                  local_188 = (void*)0x0;
                  local_98 = uVar47;
                  FUN_00d50b20();
                }
                if (((char)local_88 != '\0') && (local_f8._0_8_ != 0)) {
                  FUN_00d50b20();
                }
                uVar66 = this_ptr[0xe];
                if (uVar66 != 0) {
                  FUN_00d50b00();
                }
                pvVar45 = _pthread_getspecific(pVar56);
                if (pvVar45 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar60 = FUN_0141ba80();
                uVar47 = (uint64_t)uVar60;
                if (uVar66 != 0) {
                  FUN_00d50b20();
                }
                if ((char)uVar60 == '\0') {
                  uVar47 = this_ptr[0xe];
                  if (uVar47 != 0) {
                    FUN_00d50b00();
                  }
                  pvVar45 = _pthread_getspecific(pVar56);
                  if (pvVar45 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  iVar44 = FUN_0141bab0();
                  *(bool *)((int64_t)this_ptr + 0xe1) = iVar44 == 3;
                  if (uVar47 != 0) {
                    FUN_00d50b20();
                  }
                }
              }
              local_88 = (uint64_t *)this_ptr[0x16];
              local_138 = (double)CONCAT44(local_138._4_4_,(int)this_ptr[0x22]);
              uVar66 = this_ptr[0x1a];
              if (uVar66 != 0) {
                FUN_00d50b00();
              }
              local_f8._0_8_ = uVar66;
              uVar66 = 0;
              if (0 < *(int *)((int64_t)local_e0 + 0xc)) {
                uVar51 = 0;
                local_58 = (uint64_t *)0x0;
                local_60 = 0.0;
                local_80 = (uint64_t *)0x0;
                local_90 = (uint64_t)local_90._4_4_ << 0x20;
                local_d0 = 0.0;
                local_108 = (uint64_t)local_108._4_4_ << 0x20;
                auVar38._8_8_ = 0;
                auVar38._0_8_ = local_b8._8_8_;
                local_b8 = auVar38 << 0x40;
                local_78 = (uint64_t)local_78._4_4_ << 0x20;
LAB_0148849f:
                lVar63 = local_e0[2];
                iVar44 = (int)uVar51;
                uVar47 = (uint64_t)iVar44;
                puVar49 = *(uint64_t **)(lVar63 + uVar47 * 8);
                if (local_58 == puVar49) {
                  if ((local_60._0_1_ == '\0') && (local_58 != (uint64_t *)0x0)) {
                    local_60 = (double)CONCAT71((int7)((uint64_t)lVar63 >> 8),1);
                    FUN_00d50b00();
                  }
                }
                else {
                  if (puVar49 != (uint64_t *)0x0) {
                    lVar63 = FUN_00d50b00();
                  }
                  if ((local_60._0_1_ == '\0') || (local_58 == (uint64_t *)0x0)) {
                    local_60 = (double)CONCAT71((int7)((uint64_t)lVar63 >> 8),1);
                    local_58 = puVar49;
                  }
                  else {
                    local_58 = puVar49;
                    uVar48 = FUN_00d50b20();
                    local_60 = (double)CONCAT71((int7)((uint64_t)uVar48 >> 8),1);
                  }
                }
                puVar49 = local_80;
                dVar82 = local_d0;
                iVar61 = (int)((double)this_ptr[0x17] * (double)local_58[2]);
                iVar64 = (int)((double)this_ptr[0x17] * (double)local_58[3]);
                iVar73 = (int7)(int3)(uVar51 >> 8);
                if (iVar61 < iVar64) {
                  lVar63 = 0;
                  do {
                    if (g_023b4df0 < *(float *)(local_100 + (int64_t)iVar61 * 4 + lVar63 * 4)) {
                      if (local_58[8] != 0) {
                        pbVar2 = (byte *)(local_58[8] + 0x3c);
                        *pbVar2 = *pbVar2 | 0x10;
                        goto LAB_0148848a;
                      }
                      if (iVar44 < 1) {
                        if (local_80 != (uint64_t *)0x0) {
LAB_01488711:
                          puVar49 = (uint64_t *)0x0;
                          goto LAB_01488713;
                        }
                        dVar82 = 0.0;
                        bVar74 = true;
                        local_80 = (uint64_t *)0x0;
                      }
                      else {
                        puVar49 = *(uint64_t **)(local_e0[2] + (uint64_t)(iVar44 - 1) * 8);
                        if (local_80 == puVar49) {
                          puVar49 = local_80;
                          if ((char)local_90 != '\0') {
                            uVar47 = local_90 & 0xffffffff;
                            goto LAB_01488731;
                          }
                          if (local_80 == (uint64_t *)0x0) {
                            uVar47 = local_90 & 0xffffffff;
                            goto LAB_01488731;
                          }
                          uVar47 = CONCAT71(iVar73,1);
                          local_90 = (uint64_t)local_90._4_4_ << 0x20;
                          FUN_00d50b00();
LAB_01488776:
                          dVar82 = (double)local_80[3];
                          bVar74 = false;
                        }
                        else {
                          if (puVar49 == (uint64_t *)0x0) goto LAB_01488711;
                          FUN_00d50b00();
LAB_01488713:
                          uVar47 = CONCAT71(iVar73,1);
                          if (((char)local_90 != '\0') && (local_80 != (uint64_t *)0x0)) {
                            local_80 = puVar49;
                            FUN_00d50b20();
                          }
LAB_01488731:
                          local_80 = puVar49;
                          if (puVar49 != (uint64_t *)0x0) goto LAB_01488776;
                          dVar82 = 0.0;
                          bVar74 = true;
                          local_80 = (uint64_t *)0x0;
                        }
                        local_90 = CONCAT44(local_90._4_4_,(int)uVar47);
                      }
                      iVar61 = (int)(dVar82 * (double)this_ptr[0x17]);
                      iVar64 = (int)((double)this_ptr[0x17] * (double)local_58[2]);
                      if (iVar64 < iVar61) goto LAB_0148848a;
                      lVar63 = (int64_t)iVar64 + 1;
                      goto LAB_014887c2;
                    }
                    lVar63 = lVar63 + 1;
                  } while (iVar64 - iVar61 != (int)lVar63);
                }
                if (iVar44 < 1) {
                  if (1 < *(int *)((int64_t)local_e0 + 0xc)) {
                    dVar11 = *(double *)(local_e0[2] + 8 + uVar47 * 8);
                    if (local_d0 == dVar11) {
                      if ((char)local_108 == '\0') {
                        if (local_d0 == 0.0) {
                          uVar47 = local_108 & 0xffffffff;
                        }
                        else {
                          uVar47 = CONCAT71(iVar73,1);
                          local_108 = local_108 & 0xffffffff00000000;
                          FUN_00d50b00();
                        }
                      }
                      else {
                        uVar47 = local_108 & 0xffffffff;
                      }
                    }
                    else {
                      if (dVar11 != 0.0) {
                        FUN_00d50b00();
                      }
                      uVar47 = CONCAT71(iVar73,1);
                      dVar82 = dVar11;
                      if (((char)local_108 != '\0') && (local_d0 != 0.0)) {
                        local_d0 = dVar11;
                        FUN_00d50b20();
                      }
                    }
                    *(uint64_t *)((int64_t)dVar82 + 0x20) = local_58[4];
                    local_108 = CONCAT44(local_108._4_4_,(int)uVar47);
                    local_d0 = dVar82;
                  }
                }
                else {
                  puVar50 = *(uint64_t **)(local_e0[2] + (uint64_t)(iVar44 - 1) * 8);
                  if (local_80 == puVar50) {
                    if ((char)local_90 == '\0') {
                      if (local_80 == (uint64_t *)0x0) {
                        uVar47 = local_90 & 0xffffffff;
                      }
                      else {
                        uVar47 = CONCAT71(iVar73,1);
                        local_90 = (uint64_t)local_90._4_4_ << 0x20;
                        FUN_00d50b00();
                      }
                    }
                    else {
                      uVar47 = local_90 & 0xffffffff;
                    }
                  }
                  else {
                    if (puVar50 != (uint64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    uVar47 = CONCAT71(iVar73,1);
                    puVar49 = puVar50;
                    if (((char)local_90 != '\0') && (local_80 != (uint64_t *)0x0)) {
                      local_80 = puVar50;
                      FUN_00d50b20();
                    }
                  }
                  puVar49[5] = local_58[5];
                  local_90 = CONCAT44(local_90._4_4_,(int)uVar47);
                  local_80 = puVar49;
                }
                FUN_00d23620();
                iVar44 = iVar44 + -1;
                goto LAB_0148848a;
              }
              local_78 = (uint64_t)local_78._4_4_ << 0x20;
              auVar39._8_8_ = 0;
              auVar39._0_8_ = local_b8._8_8_;
              local_b8 = auVar39 << 0x40;
              local_108 = (uint64_t)local_108._4_4_ << 0x20;
              local_d0 = 0.0;
              local_90 = (uint64_t)local_90._4_4_ << 0x20;
              local_80 = (uint64_t *)0x0;
              local_60 = 0.0;
              local_58 = (uint64_t *)0x0;
LAB_01488b2e:
              iVar44 = *(int *)(local_128._0_8_ + 0xc);
              lVar63 = local_f8._0_8_;
              if (1 < iVar44) {
                uVar47 = 1;
                do {
                  lVar72 = *(int64_t *)(local_128._0_8_ + 0x10);
                  iVar61 = (int)uVar47;
                  puVar49 = *(uint64_t **)(lVar72 + (int64_t)iVar61 * 8);
                  if (local_58 == puVar49) {
                    if ((local_60._0_1_ == '\0') && (local_58 != (uint64_t *)0x0)) {
                      local_60 = (double)CONCAT71((int7)((uint64_t)lVar72 >> 8),1);
                      FUN_00d50b00();
                    }
                  }
                  else {
                    if (puVar49 != (uint64_t *)0x0) {
                      lVar72 = FUN_00d50b00();
                    }
                    if ((local_60._0_1_ == '\0') || (local_58 == (uint64_t *)0x0)) {
                      local_60 = (double)CONCAT71((int7)((uint64_t)lVar72 >> 8),1);
                      local_58 = puVar49;
                    }
                    else {
                      local_58 = puVar49;
                      uVar48 = FUN_00d50b20();
                      local_60 = (double)CONCAT71((int7)((uint64_t)uVar48 >> 8),1);
                    }
                  }
                  lVar72 = *(int64_t *)(local_128._0_8_ + 0x10);
                  puVar49 = *(uint64_t **)(lVar72 + -8 + (int64_t)iVar61 * 8);
                  if (local_80 == puVar49) {
                    if (((char)local_90 == '\0') && (local_80 != (uint64_t *)0x0)) {
                      local_90 = CONCAT44(local_90._4_4_,
                                          (int)CONCAT71((int7)((uint64_t)lVar72 >> 8),1));
                      FUN_00d50b00();
                    }
                  }
                  else {
                    if (puVar49 != (uint64_t *)0x0) {
                      lVar72 = FUN_00d50b00();
                    }
                    if (((char)local_90 == '\0') || (local_80 == (uint64_t *)0x0)) {
                      local_90 = CONCAT44(local_90._4_4_,
                                          (int)CONCAT71((int7)((uint64_t)lVar72 >> 8),1));
                      local_80 = puVar49;
                    }
                    else {
                      local_80 = puVar49;
                      uVar48 = FUN_00d50b20();
                      local_90 = CONCAT44(local_90._4_4_,
                                          (int)CONCAT71((int7)((uint64_t)uVar48 >> 8),1));
                    }
                  }
                  if ((double)local_58[2] - (double)local_80[3] < g_0241b6a8) {
                    local_80[3] = local_58[3];
                    FUN_00d23620();
                    iVar61 = iVar61 + -1;
                  }
                  uVar47 = (uint64_t)(iVar61 + 1U);
                  iVar44 = *(int *)(local_128._0_8_ + 0xc);
                } while ((int)(iVar61 + 1U) < iVar44);
              }
              if (0 < iVar44) {
                uVar47 = 0;
                do {
                  lVar72 = *(int64_t *)(local_128._0_8_ + 0x10);
                  iVar44 = (int)uVar47;
                  puVar49 = *(uint64_t **)(lVar72 + (int64_t)iVar44 * 8);
                  if (local_58 == puVar49) {
                    if ((local_60._0_1_ == '\0') && (local_58 != (uint64_t *)0x0)) {
                      local_60 = (double)CONCAT71((int7)((uint64_t)lVar72 >> 8),1);
                      FUN_00d50b00();
                    }
                  }
                  else {
                    if (puVar49 != (uint64_t *)0x0) {
                      lVar72 = FUN_00d50b00();
                    }
                    if ((local_60._0_1_ == '\0') || (local_58 == (uint64_t *)0x0)) {
                      local_60 = (double)CONCAT71((int7)((uint64_t)lVar72 >> 8),1);
                      local_58 = puVar49;
                    }
                    else {
                      local_58 = puVar49;
                      uVar48 = FUN_00d50b20();
                      local_60 = (double)CONCAT71((int7)((uint64_t)uVar48 >> 8),1);
                    }
                  }
                  iVar61 = (int)((double)this_ptr[0x17] * (double)local_58[2]);
                  iVar64 = (int)((double)this_ptr[0x17] * (double)local_58[3]);
                  if (iVar61 < iVar64) {
                    lVar72 = 0;
                    do {
                      if (g_023b4df0 < *(float *)(local_100 + (int64_t)iVar61 * 4 + lVar72 * 4))
                      {
                        FUN_00d23620();
                        iVar44 = iVar44 + -1;
                        break;
                      }
                      lVar72 = lVar72 + 1;
                    } while (iVar64 - iVar61 != (int)lVar72);
                  }
                  uVar47 = (uint64_t)(iVar44 + 1U);
                } while ((int)(iVar44 + 1U) < *(int *)(local_128._0_8_ + 0xc));
              }
              puVar49 = (uint64_t *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar49 = (uint64_t)local_40;
              uVar48 = (*local_70)();
              local_50 = local_e0;
              local_48 = '\0';
              local_c8 = puVar49;
              uVar48 = FUN_00d214d0(uVar48,*(void*)((int64_t)puVar49 + 0xc));
              if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
                uVar48 = FUN_00d50b20();
              }
              local_50 = (uint64_t *)local_128._0_8_;
              local_48 = '\0';
              uVar48 = FUN_00d214d0(uVar48,*(void*)((int64_t)local_c8 + 0xc));
              if ((local_48 != '\0') && (local_50 != (uint64_t *)0x0)) {
                uVar48 = FUN_00d50b20();
              }
              puVar49 = local_c8;
              FUN_00d242c0(uVar48,0);
              local_1bc = g_02390128;
              if (g_02390128 <= local_138._0_4_ * g_02394288) {
                local_1bc = local_138._0_4_ * g_02394288;
              }
              local_320 = puVar49;
              local_318 = 0;
              local_310 = lVar63;
              local_308 = 0;
              FUN_014af180(2,g_0240d308,local_88);
              if (0 < *(int *)((int64_t)puVar49 + 0xc)) {
                uVar47 = 0;
                do {
                  uVar66 = local_c8[2];
                  puVar49 = *(uint64_t **)(uVar66 + uVar47 * 8);
                  if (local_58 == puVar49) {
                    if ((local_60._0_1_ == '\0') && (local_58 != (uint64_t *)0x0)) {
                      local_60 = (double)CONCAT71((int7)(uVar66 >> 8),1);
                      FUN_00d50b00();
                    }
                  }
                  else {
                    if (puVar49 != (uint64_t *)0x0) {
                      uVar66 = FUN_00d50b00();
                    }
                    if ((local_60._0_1_ == '\0') || (local_58 == (uint64_t *)0x0)) {
                      local_60 = (double)CONCAT71((int7)(uVar66 >> 8),1);
                      local_58 = puVar49;
                    }
                    else {
                      local_58 = puVar49;
                      uVar48 = FUN_00d50b20();
                      local_60 = (double)CONCAT71((int7)((uint64_t)uVar48 >> 8),1);
                    }
                  }
                  if ((*(int *)((int64_t)local_58 + 0x3c) == 2) &&
                     (uVar66 = local_58[8], uVar66 != 0)) {
                    local_58[2] = *(uint64_t *)(uVar66 + 0x10);
                    *(byte *)(uVar66 + 0x3c) = *(byte *)(uVar66 + 0x3c) | 0x20;
                  }
                  uVar47 = uVar47 + 1;
                } while ((int64_t)uVar47 < (int64_t)*(int *)((int64_t)local_c8 + 0xc));
              }
              puVar49 = local_c8;
              uVar48 = FUN_00d216c0();
              local_50 = local_e0;
              local_48 = '\0';
              uVar48 = FUN_00d214d0(uVar48,*(void*)((int64_t)puVar49 + 0xc));
              if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
                uVar48 = FUN_00d50b20();
              }
              local_50 = local_168;
              local_48 = '\0';
              uVar48 = FUN_00d214d0(uVar48,*(void*)((int64_t)local_c8 + 0xc));
              if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
                uVar48 = FUN_00d50b20();
              }
              puVar49 = local_c8;
              FUN_00d242c0(uVar48,0);
              local_300 = puVar49;
              local_2f8 = 0;
              local_2f0 = lVar63;
              local_2e8 = 0;
              FUN_014af180(1,&local_2f0,local_88);
              if (0 < *(int *)((int64_t)puVar49 + 0xc)) {
                uVar66 = 0;
                uVar51 = 0;
                do {
                  uVar62 = local_c8[2];
                  puVar49 = *(uint64_t **)(uVar62 + uVar66 * 8);
                  local_88 = (uint64_t *)uVar66;
                  if (local_58 == puVar49) {
                    if ((local_60._0_1_ == '\0') && (local_58 != (uint64_t *)0x0)) {
                      local_60 = (double)CONCAT71((int7)(uVar62 >> 8),1);
                      uVar47 = 0;
                      FUN_00d50b00();
                    }
                  }
                  else {
                    if (puVar49 != (uint64_t *)0x0) {
                      uVar47 = (uint64_t)local_60 & 0xffffffff;
                      uVar62 = FUN_00d50b00();
                    }
                    if ((local_60._0_1_ == '\0') || (local_58 == (uint64_t *)0x0)) {
                      local_60 = (double)CONCAT71((int7)(uVar62 >> 8),1);
                      local_58 = puVar49;
                    }
                    else {
                      uVar47 = (uint64_t)local_60 & 0xffffffff;
                      local_58 = puVar49;
                      uVar48 = FUN_00d50b20();
                      local_60 = (double)CONCAT71((int7)((uint64_t)uVar48 >> 8),1);
                    }
                  }
                  if (*(int *)((int64_t)local_58 + 0x3c) == 1) {
                    puVar46 = (void*)local_58[8];
                    if (puVar46 == (void*)0x0) {
                      local_138 = (double)local_58[2];
                      puVar46 = (void*)local_b8._0_8_;
                      if ((int)uVar51 < *(int *)(lVar63 + 0xc)) {
                        uVar51 = (uint64_t)(int)uVar51;
                        do {
                          puVar12 = *(void**)(*(int64_t *)(lVar63 + 0x10) + uVar51 * 8);
                          local_b8._0_8_ = puVar46;
                          uVar54 = (undefined7)(uVar47 >> 8);
                          if (puVar46 == puVar12) {
                            if ((char)local_78 == '\0') {
                              if (puVar46 == (void*)0x0) {
                                uVar47 = local_78 & 0xffffffff;
                              }
                              else {
                                uVar47 = CONCAT71(uVar54,1);
                                local_78 = local_78 & 0xffffffff00000000;
                                FUN_00d50b00();
                              }
                            }
                            else {
                              uVar47 = local_78 & 0xffffffff;
                            }
                          }
                          else {
                            if (puVar12 != (void*)0x0) {
                              FUN_00d50b00();
                            }
                            uVar47 = CONCAT71(uVar54,1);
                            puVar46 = puVar12;
                            if (((char)local_78 != '\0') && (local_b8._0_8_ != 0)) {
                              local_b8._0_8_ = puVar12;
                              FUN_00d50b20();
                            }
                          }
                          uVar79 = (uint32_t)uVar47;
                          if (local_138 < (double)puVar46[2]) break;
                          uVar51 = uVar51 + 1;
                          local_78 = CONCAT44(local_78._4_4_,uVar79);
                        } while ((int64_t)uVar51 < (int64_t)*(int *)(lVar63 + 0xc));
                      }
                      else {
                        uVar79 = (uint32_t)local_78;
                      }
                      uVar48 = FUN_014ba9e0(local_138);
                      local_b8._0_8_ = local_50;
                      uVar54 = (undefined7)((uint64_t)local_50 >> 8);
                      cVar43 = (char)uVar79;
                      if (local_50 == puVar46) {
                        if ((cVar43 == '\0') && (local_50 != (void*)0x0)) {
                          local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71(uVar54,1));
                          if (local_48 != '\0') {
                            local_b8._0_8_ = puVar46;
                            goto LAB_01489437;
                          }
                          local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71(uVar54,1));
                          uVar48 = FUN_00d50b00();
                        }
                        else {
                          local_78 = CONCAT44(local_78._4_4_,uVar79);
                        }
                        local_b8._0_8_ = puVar46;
LAB_01489423:
                        if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
                          uVar48 = FUN_00d50b20();
                        }
                      }
                      else {
                        if (local_48 == '\0') {
                          uVar81 = 0;
                          if (local_50 != (void*)0x0) {
                            uVar81 = FUN_00d50b00();
                            uVar48 = extraout_XMM0_Qa_00;
                          }
                          local_78 = CONCAT44(local_78._4_4_,
                                              (int)CONCAT71((int7)((uint64_t)uVar81 >> 8),1));
                          if ((cVar43 != '\0') && (puVar46 != (void*)0x0)) {
                            uVar48 = FUN_00d50b20();
                          }
                          goto LAB_01489423;
                        }
                        local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71(uVar54,1));
                        if ((cVar43 != '\0') && (puVar46 != (void*)0x0)) {
                          uVar48 = FUN_00d50b20();
                        }
                      }
LAB_01489437:
                      local_50 = (uint64_t *)local_b8._0_8_;
                      local_48 = '\0';
                      FUN_00d23370(uVar48,uVar51 & 0xffffffff);
                      if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
                        FUN_00d50b20();
                      }
                      uVar47 = local_58[8];
                      uVar48 = local_b8._0_8_;
                      if (uVar47 != local_b8._0_8_) {
                        if (local_b8._0_8_ != 0) {
                          FUN_00d50b00();
                        }
                        local_58[8] = uVar48;
                        if (uVar47 != 0) {
                          FUN_00d50b20();
                        }
                      }
                    }
                    else {
                      local_58[2] = puVar46[2];
                      *(byte *)((int64_t)puVar46 + 0x3c) =
                           *(byte *)((int64_t)puVar46 + 0x3c) | 0x40;
                      FUN_00d50b00();
                      local_48 = '\0';
                      local_50 = puVar46;
                      uVar60 = FUN_00d237a0();
                      uVar51 = (uint64_t)uVar60;
                      if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
                        FUN_00d50b20();
                      }
                      FUN_00d50b20();
                    }
                    if ((int)uVar51 == -1) break;
                    uVar60 = (int)uVar51 + 1;
                    uVar47 = (uint64_t)uVar60;
                    if ((int)uVar60 < *(int *)(lVar63 + 0xc)) {
                      uVar62 = uVar51 & 0xffffffff;
                      uVar66 = (uint64_t)uVar60;
                      do {
                        lVar63 = *(int64_t *)(lVar63 + 0x10);
                        lVar72 = *(int64_t *)(lVar63 + (int64_t)(int)uVar66 * 8);
                        if (local_b8._0_8_ == lVar72) {
                          if (((char)local_78 == '\0') && (local_b8._0_8_ != 0)) {
                            local_78 = CONCAT44(local_78._4_4_,
                                                (int)CONCAT71((int7)((uint64_t)lVar63 >> 8),1));
                            FUN_00d50b00();
                          }
                        }
                        else {
                          if (lVar72 != 0) {
                            lVar63 = FUN_00d50b00();
                          }
                          if (((char)local_78 == '\0') || (local_b8._0_8_ == 0)) {
                            local_78 = CONCAT44(local_78._4_4_,
                                                (int)CONCAT71((int7)((uint64_t)lVar63 >> 8),1));
                            local_b8._0_8_ = lVar72;
                          }
                          else {
                            local_b8._0_8_ = lVar72;
                            uVar48 = FUN_00d50b20();
                            local_78 = CONCAT44(local_78._4_4_,
                                                (int)CONCAT71((int7)((uint64_t)uVar48 >> 8),1));
                          }
                        }
                        lVar63 = local_f8._0_8_;
                        uVar47 = uVar66;
                        if ((double)local_58[3] <= *(double *)(local_b8._0_8_ + 0x10) &&
                            *(double *)(local_b8._0_8_ + 0x10) != (double)local_58[3]) break;
                        if ((*(byte *)(local_b8._0_8_ + 0x3c) & 0x70) == 0) {
                          FUN_00d23620();
                          uVar66 = uVar62;
                        }
                        uVar60 = (int)uVar66 + 1;
                        uVar47 = (uint64_t)uVar60;
                        uVar62 = uVar66;
                        uVar66 = uVar47;
                      } while ((int)uVar60 < *(int *)(lVar63 + 0xc));
                    }
                  }
                  uVar66 = (int64_t)local_88 + 1;
                } while ((int64_t)uVar66 < (int64_t)*(int *)((int64_t)local_c8 + 0xc));
              }
              puVar46 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar46 = local_40;
              (*local_70)();
              puVar49 = local_c8;
              local_160 = puVar46;
              uVar48 = FUN_00d216c0();
              local_50 = local_e0;
              local_48 = '\0';
              uVar48 = FUN_00d214d0(uVar48,*(void*)((int64_t)puVar49 + 0xc));
              if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
                uVar48 = FUN_00d50b20();
              }
              local_50 = local_168;
              local_48 = '\0';
              uVar48 = FUN_00d214d0(uVar48,*(void*)((int64_t)puVar49 + 0xc));
              if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
                uVar48 = FUN_00d50b20();
              }
              local_50 = local_198;
              local_48 = '\0';
              uVar48 = FUN_00d214d0(uVar48,*(void*)((int64_t)puVar49 + 0xc));
              if ((local_48 != '\0') && (local_50 != (uint64_t *)0x0)) {
                uVar48 = FUN_00d50b20();
              }
              FUN_00d242c0(uVar48,0);
              iVar44 = *(int *)((int64_t)puVar49 + 0xc);
              if (iVar44 < 2) {
                local_a0 = 0;
                local_98 = 0;
              }
              else {
                uVar47 = 1;
                local_98 = 0;
                local_a0 = 0;
                do {
                  uVar66 = local_c8[2];
                  puVar49 = *(uint64_t **)(uVar66 + uVar47 * 8);
                  if (local_58 == puVar49) {
                    if ((local_60._0_1_ == '\0') && (local_58 != (uint64_t *)0x0)) {
                      local_60 = (double)CONCAT71((int7)(uVar66 >> 8),1);
                      FUN_00d50b00();
                    }
                  }
                  else {
                    if (puVar49 != (uint64_t *)0x0) {
                      uVar66 = FUN_00d50b00();
                    }
                    if ((local_60._0_1_ == '\0') || (local_58 == (uint64_t *)0x0)) {
                      local_60 = (double)CONCAT71((int7)(uVar66 >> 8),1);
                      local_58 = puVar49;
                    }
                    else {
                      local_58 = puVar49;
                      uVar48 = FUN_00d50b20();
                      local_60 = (double)CONCAT71((int7)((uint64_t)uVar48 >> 8),1);
                    }
                  }
                  if ((*(int *)((int64_t)local_58 + 0x3c) == 3) && (local_58[8] != 0)) {
                    uVar66 = local_c8[2];
                    puVar49 = *(uint64_t **)((uVar66 - 8) + uVar47 * 8);
                    if (local_80 == puVar49) {
                      if (((char)local_90 == '\0') && (local_80 != (uint64_t *)0x0)) {
                        local_90 = CONCAT44(local_90._4_4_,(int)CONCAT71((int7)(uVar66 >> 8),1));
                        uVar66 = FUN_00d50b00();
                      }
                    }
                    else {
                      if (puVar49 != (uint64_t *)0x0) {
                        uVar66 = FUN_00d50b00();
                      }
                      if (((char)local_90 == '\0') || (local_80 == (uint64_t *)0x0)) {
                        uVar66 = CONCAT71((int7)(uVar66 >> 8),1);
                        local_90 = CONCAT44(local_90._4_4_,(int)uVar66);
                        local_80 = puVar49;
                      }
                      else {
                        local_80 = puVar49;
                        uVar48 = FUN_00d50b20();
                        uVar66 = CONCAT71((int7)((uint64_t)uVar48 >> 8),1);
                        local_90 = CONCAT44(local_90._4_4_,(int)uVar66);
                      }
                    }
                    if (uVar47 < 2) {
                      uVar51 = 0;
                      if (local_98 != 0) goto LAB_01489765;
                      local_98 = 0;
                    }
                    else {
                      uVar66 = local_c8[2];
                      uVar51 = *(uint64_t *)((uVar66 - 0x10) + uVar47 * 8);
                      if (local_98 == uVar51) {
                        if (((byte)local_a0 == '\0') && (local_98 != 0)) {
                          local_a0 = CONCAT71((int7)(uVar66 >> 8),1);
                          FUN_00d50b00();
                        }
                      }
                      else {
                        if (uVar51 == 0) {
                          uVar51 = 0;
                        }
                        else {
                          uVar66 = FUN_00d50b00();
                        }
LAB_01489765:
                        if (((byte)local_a0 == '\0') || (local_98 == 0)) {
                          local_a0 = CONCAT71((int7)(uVar66 >> 8),1);
                          local_98 = uVar51;
                        }
                        else {
                          local_98 = uVar51;
                          uVar48 = FUN_00d50b20();
                          local_a0 = CONCAT71((int7)((uint64_t)uVar48 >> 8),1);
                        }
                      }
                    }
                    if (*(int *)((int64_t)local_80 + 0x3c) == 1) {
                      dVar82 = (double)local_80[2];
                      uVar66 = local_58[8];
                      if (*(double *)(uVar66 + 0x10) + g_0240e378 < dVar82) {
                        *(double *)(uVar66 + 0x18) = dVar82;
                        uVar51 = local_80[8];
                        fVar77 = g_02390124;
                        if (uVar51 != 0) {
                          fVar77 = *(float *)(uVar51 + 0x20);
                        }
                        *(float *)(uVar66 + 0x24) = fVar77;
                        if (dVar82 < (double)local_58[4]) {
                          local_58[4] = (uint64_t)dVar82;
                        }
                        puVar49 = local_80;
                        if ((uVar51 != 0) && (uVar66 = local_80[8], uVar66 != local_58[8])) {
                          if (uVar66 != 0) {
                            FUN_00d50b00();
                          }
                          local_48 = '\0';
                          local_50 = (uint64_t *)uVar66;
                          cVar43 = FUN_00d23d70();
                          if ((local_48 != '\0') && (local_50 != (uint64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                          if (uVar66 != 0) {
                            FUN_00d50b20();
                          }
                          if (cVar43 != '\0') {
                            uVar66 = local_80[8];
                            if (uVar66 != 0) {
                              FUN_00d50b00();
                            }
                            local_48 = '\0';
                            local_50 = (uint64_t *)uVar66;
                            FUN_00d23f50();
                            if ((local_48 != '\0') && (local_50 != (uint64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if (uVar66 != 0) {
                              FUN_00d50b20();
                            }
                          }
                          puVar49 = local_80;
                          if (local_80[8] != 0) {
                            local_80[8] = 0;
                            FUN_00d50b20();
                          }
                        }
                        local_48 = '\0';
                        local_50 = puVar49;
                        FUN_00d21140();
                        if ((local_48 != '\0') && (local_50 != (uint64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                    }
                  }
                  uVar47 = uVar47 + 1;
                  iVar44 = *(int *)((int64_t)local_c8 + 0xc);
                } while ((int64_t)uVar47 < (int64_t)iVar44);
              }
              uVar47 = 0;
              if (iVar44 < 1) {
                local_150 = 0;
                local_88 = (uint64_t *)0x0;
                local_110 = (uint64_t)local_110._4_4_ << 0x20;
                local_d8 = (uint64_t *)0x0;
                local_40 = (void*)((uint64_t)local_40._4_4_ << 0x20);
                local_70 = 0x0;
                puVar46 = local_160;
              }
              else {
                lVar63 = 0;
                local_150 = 0;
                local_88 = (uint64_t *)0x0;
                local_110 = (uint64_t)local_110._4_4_ << 0x20;
                local_d8 = (uint64_t *)0x0;
                local_40 = (void*)((uint64_t)local_40._4_4_ << 0x20);
                local_70 = 0x0;
                do {
                  uVar66 = local_c8[2];
                  puVar49 = *(uint64_t **)(uVar66 + lVar63 * 8);
                  if (local_58 == puVar49) {
                    if ((local_60._0_1_ == '\0') && (local_58 != (uint64_t *)0x0)) {
                      local_60 = (double)CONCAT71((int7)(uVar66 >> 8),1);
                      FUN_00d50b00();
                    }
                  }
                  else {
                    if (puVar49 != (uint64_t *)0x0) {
                      uVar66 = FUN_00d50b00();
                    }
                    if ((local_60._0_1_ == '\0') || (local_58 == (uint64_t *)0x0)) {
                      local_60 = (double)CONCAT71((int7)(uVar66 >> 8),1);
                      local_58 = puVar49;
                    }
                    else {
                      local_58 = puVar49;
                      uVar48 = FUN_00d50b20();
                      local_60 = (double)CONCAT71((int7)((uint64_t)uVar48 >> 8),1);
                    }
                  }
                  puVar49 = local_88;
                  if (*(int *)((int64_t)local_58 + 0x3c) == 3) {
                    puVar50 = (uint64_t *)local_58[8];
                    if (puVar50 == local_88) {
                      if (((char)local_150 == '\0') && (puVar50 != (uint64_t *)0x0)) {
                        local_150 = CONCAT71((int7)((uint64_t)local_58 >> 8),1);
                        FUN_00d50b00();
                      }
                    }
                    else {
                      puVar49 = local_58;
                      if (puVar50 != (uint64_t *)0x0) {
                        puVar49 = (uint64_t *)FUN_00d50b00();
                      }
                      bVar74 = (char)local_150 != '\0';
                      local_150 = CONCAT71((int7)((uint64_t)puVar49 >> 8),1);
                      puVar49 = puVar50;
                      if ((bVar74) && (local_88 != (uint64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    if (puVar49 == (uint64_t *)0x0) {
                      local_88 = (uint64_t *)0x0;
                    }
                    else {
                      puVar46 = (void*)puVar49[2];
                      local_88 = puVar49;
                      if ((double)puVar46 + g_0240e380 <= (double)puVar49[3]) {
                        local_170 = (double)puVar46 + g_0240e378;
                        local_188 = puVar46;
                        if (local_d8 != (uint64_t *)0x0) {
                          if ((char)local_110 != '\0') {
                            FUN_00d50b20();
                          }
                          local_110 = local_110 & 0xffffffff00000000;
                        }
                        if ((int)uVar47 < *(int *)(local_f8._0_8_ + 0xc)) {
                          uVar47 = (uint64_t)(int)uVar47;
                          local_138 = (double)CONCAT44(local_138._4_4_,g_0240e30c);
                          local_d8 = (uint64_t *)0x0;
                          do {
                            lVar72 = *(int64_t *)(local_f8._0_8_ + 0x10);
                            puVar49 = *(uint64_t **)(lVar72 + uVar47 * 8);
                            if (local_70 == puVar49) {
                              if (((char)local_40 == '\0') && (local_70 != 0x0)) {
                                local_40 = (void*)
                                           CONCAT44(local_40._4_4_,
                                                    (int)CONCAT71((int7)((uint64_t)lVar72 >> 8),1))
                                ;
                                FUN_00d50b00();
                              }
                            }
                            else {
                              if (puVar49 != (uint64_t *)0x0) {
                                lVar72 = FUN_00d50b00();
                              }
                              if (((char)local_40 == '\0') || (local_70 == 0x0)) {
                                local_40 = (void*)
                                           CONCAT44(local_40._4_4_,
                                                    (int)CONCAT71((int7)((uint64_t)lVar72 >> 8),1))
                                ;
                                local_70 = puVar49;
                              }
                              else {
                                local_70 = puVar49;
                                uVar48 = FUN_00d50b20();
                                local_40 = (void*)
                                           CONCAT44(local_40._4_4_,
                                                    (int)CONCAT71((int7)((uint64_t)uVar48 >> 8),1))
                                ;
                              }
                            }
                            if (local_70 == local_88) {
                              local_70 = local_88;
                              break;
                            }
                            dVar82 = *(double *)((int64_t)local_70 + 0x10);
                            if ((double)local_188 <= dVar82) break;
                            fVar77 = local_138._0_4_;
                            if (((local_170 < dVar82) &&
                                (local_1bc < *(float *)((int64_t)local_70 + 0x20))) &&
                               (local_114 = (float)((double)(*(float *)((int64_t)local_70 + 0x20) *
                                                            *(float *)((int64_t)local_70 + 0x2c)) *
                                                   (((double)local_188 - dVar82) * g_0240e388 +
                                                   g_0238fee8)), local_138._0_4_ < local_114)) {
                              if (local_d8 == local_70) {
                                fVar77 = local_114;
                                if (((char)local_40 != '\0') && ((char)local_110 == '\0')) {
                                  local_110 = CONCAT44(local_110._4_4_,
                                                       (int)CONCAT71((int7)((uint64_t)local_70 >> 8
                                                                           ),1));
                                  FUN_00d50b00();
                                  fVar77 = local_114;
                                }
                              }
                              else {
                                if ((char)local_40 != '\0') {
                                  FUN_00d50b00();
                                }
                                if (((char)local_110 == '\0') || (local_d8 == (uint64_t *)0x0)) {
                                  local_d8 = (uint64_t *)local_70;
                                  local_110 = CONCAT44(local_110._4_4_,(uint32_t)local_40);
                                  fVar77 = local_114;
                                }
                                else {
                                  local_d8 = (uint64_t *)local_70;
                                  FUN_00d50b20();
                                  local_110 = CONCAT44(local_110._4_4_,(uint32_t)local_40);
                                  fVar77 = local_114;
                                }
                              }
                            }
                            uVar47 = uVar47 + 1;
                            local_138 = (double)CONCAT44(local_138._4_4_,fVar77);
                          } while ((int64_t)uVar47 < (int64_t)*(int *)(local_f8._0_8_ + 0xc));
                          if (local_d8 != (uint64_t *)0x0) {
                            local_88[3] = local_d8[3];
                            *(int *)((int64_t)local_88 + 0x24) = (int)local_d8[4];
                            local_50 = local_d8;
                            local_48 = '\0';
                            fVar77 = (float)FUN_00d237a0();
                            if ((local_48 != '\0') && (local_50 != (uint64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if ((-1 < (int)fVar77) && ((int)fVar77 < *(int *)(local_f8._0_8_ + 0xc))
                               ) {
                              local_170 = (double)(uint64_t)(uint)fVar77;
                              pcVar57 = local_70;
                              lVar72 = local_f8._0_8_;
                              local_114 = fVar77;
                              do {
                                puVar49 = *(uint64_t **)
                                           (*(int64_t *)(lVar72 + 0x10) + (int64_t)local_170 * 8);
                                local_70 = pcVar57;
                                if (pcVar57 == puVar49) {
                                  if (((char)local_40 == '\0') && (pcVar57 != 0x0)) {
                                    local_138 = (double)CONCAT71(local_138._1_7_,1);
                                    local_40 = (void*)
                                               ((uint64_t)local_40 & 0xffffffff00000000);
                                    puVar50 = (uint64_t *)FUN_00d50b00();
                                  }
                                  else {
                                    puVar50 = (uint64_t *)((uint64_t)local_40 & 0xffffffff);
                                    local_138 = (double)CONCAT71(local_138._1_7_,(char)local_40);
                                  }
                                }
                                else {
                                  puVar50 = (uint64_t *)pcVar57;
                                  if (puVar49 != (uint64_t *)0x0) {
                                    puVar50 = (uint64_t *)FUN_00d50b00();
                                  }
                                  local_138 = (double)CONCAT71(local_138._1_7_,1);
                                  pcVar57 = puVar49;
                                  if (((char)local_40 != '\0') && (local_70 != 0x0)) {
                                    local_70 = puVar49;
                                    puVar50 = (uint64_t *)FUN_00d50b20();
                                  }
                                }
                                fVar77 = local_114;
                                if (pcVar57 == local_88) {
                                  local_70 = local_88;
                                  puVar50 = local_88;
                                  pcVar57 = local_70;
LAB_01489e87:
                                  local_70 = pcVar57;
                                  uVar60 = (uint)CONCAT71((int7)((uint64_t)puVar50 >> 8),
                                                          local_138._0_1_);
                                  goto LAB_01489e8d;
                                }
                                if ((double)local_188 < *(double *)((int64_t)pcVar57 + 0x10) ||
                                    (double)local_188 == *(double *)((int64_t)pcVar57 + 0x10))
                                goto LAB_01489e87;
                                lVar72 = local_f8._0_8_;
                                FUN_00d23620();
                                uVar47 = (uint64_t)((int)uVar47 - 1);
                                local_40 = (void*)
                                           CONCAT44(local_40._4_4_,(uint)local_138._0_1_);
                              } while ((int)fVar77 < *(int *)(lVar72 + 0xc));
                              uVar60 = (uint)local_138._0_1_;
                              local_70 = pcVar57;
LAB_01489e8d:
                              local_40 = (void*)CONCAT44(local_40._4_4_,uVar60);
                            }
                            goto LAB_01489982;
                          }
                        }
                        local_d8 = (uint64_t *)0x0;
                      }
                    }
                  }
LAB_01489982:
                  lVar63 = lVar63 + 1;
                } while (lVar63 < *(int *)((int64_t)local_c8 + 0xc));
                puVar46 = local_160;
                if (0 < *(int *)((int64_t)local_c8 + 0xc)) {
                  lVar63 = 0;
                  do {
                    uVar47 = local_c8[2];
                    puVar49 = *(uint64_t **)(uVar47 + lVar63 * 8);
                    if (local_58 == puVar49) {
                      if ((local_60._0_1_ == '\0') && (local_58 != (uint64_t *)0x0)) {
                        local_60 = (double)CONCAT71((int7)(uVar47 >> 8),1);
                        FUN_00d50b00();
                      }
                    }
                    else {
                      if (puVar49 != (uint64_t *)0x0) {
                        uVar47 = FUN_00d50b00();
                      }
                      if ((local_60._0_1_ == '\0') || (local_58 == (uint64_t *)0x0)) {
                        local_60 = (double)CONCAT71((int7)(uVar47 >> 8),1);
                        local_58 = puVar49;
                      }
                      else {
                        local_58 = puVar49;
                        uVar48 = FUN_00d50b20();
                        local_60 = (double)CONCAT71((int7)((uint64_t)uVar48 >> 8),1);
                      }
                    }
                    if (*(int *)((int64_t)local_58 + 0x3c) == 1) {
                      local_50 = local_58;
                      local_48 = '\0';
                      cVar43 = FUN_00d23d70();
                      if ((local_48 != '\0') && (local_50 != (uint64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((cVar43 == '\0') && (local_58[8] != 0)) {
                        if (lVar63 == 0) {
                          puVar50 = (uint64_t *)0x0;
                          puVar49 = local_58;
                          if (local_80 != (uint64_t *)0x0) goto LAB_0148a00a;
                          local_80 = (uint64_t *)0x0;
                        }
                        else {
                          puVar49 = (uint64_t *)local_c8[2];
                          puVar50 = (uint64_t *)puVar49[lVar63 + -1];
                          if (local_80 == puVar50) {
                            if (((char)local_90 == '\0') && (local_80 != (uint64_t *)0x0)) {
                              local_90 = CONCAT44(local_90._4_4_,
                                                  (int)CONCAT71((int7)((uint64_t)puVar49 >> 8),1));
                              FUN_00d50b00();
                            }
                          }
                          else {
                            if (puVar50 == (uint64_t *)0x0) {
                              puVar50 = (uint64_t *)0x0;
                            }
                            else {
                              puVar49 = (uint64_t *)FUN_00d50b00();
                            }
LAB_0148a00a:
                            if (((char)local_90 == '\0') || (local_80 == (uint64_t *)0x0)) {
                              local_90 = CONCAT44(local_90._4_4_,
                                                  (int)CONCAT71((int7)((uint64_t)puVar49 >> 8),1));
                              local_80 = puVar50;
                            }
                            else {
                              local_80 = puVar50;
                              uVar48 = FUN_00d50b20();
                              local_90 = CONCAT44(local_90._4_4_,
                                                  (int)CONCAT71((int7)((uint64_t)uVar48 >> 8),1));
                            }
                          }
                        }
                        uVar47 = (int64_t)*(int *)((int64_t)local_c8 + 0xc) - 1;
                        if (lVar63 < (int64_t)uVar47) {
                          uVar47 = local_c8[2];
                          dVar82 = *(double *)(uVar47 + 8 + lVar63 * 8);
                          if (local_d0 == dVar82) {
                            if (((char)local_108 == '\0') && (local_d0 != 0.0)) {
                              local_108 = CONCAT44(local_108._4_4_,
                                                   (int)CONCAT71((int7)(uVar47 >> 8),1));
                              FUN_00d50b00();
                            }
                          }
                          else {
                            if (dVar82 == 0.0) {
                              dVar82 = 0.0;
                            }
                            else {
                              uVar47 = FUN_00d50b00();
                            }
LAB_0148a0c1:
                            if (((char)local_108 == '\0') || (local_d0 == 0.0)) {
                              local_108 = CONCAT44(local_108._4_4_,
                                                   (int)CONCAT71((int7)(uVar47 >> 8),1));
                              local_d0 = dVar82;
                            }
                            else {
                              local_d0 = dVar82;
                              uVar48 = FUN_00d50b20();
                              local_108 = CONCAT44(local_108._4_4_,
                                                   (int)CONCAT71((int7)((uint64_t)uVar48 >> 8),1));
                            }
                          }
                        }
                        else {
                          dVar82 = 0.0;
                          if (local_d0 != 0.0) goto LAB_0148a0c1;
                          local_d0 = 0.0;
                        }
                        if (local_80 == (uint64_t *)0x0) {
                          bVar74 = true;
                          if (local_d0 != 0.0) goto LAB_0148a139;
LAB_01489eb8:
                          *(void*)(local_58[8] + 0x40) = 0;
                        }
                        else {
                          bVar74 = *(uint *)((int64_t)local_80 + 0x3c) < 2;
                          if (local_d0 == 0.0) {
                            if (*(uint *)((int64_t)local_80 + 0x3c) < 2) goto LAB_01489eb8;
                          }
                          else {
LAB_0148a139:
                            if ((bVar74) && (*(uint *)((int64_t)local_d0 + 0x3c) < 2))
                            goto LAB_01489eb8;
                            if (1 < *(uint *)((int64_t)local_d0 + 0x3c)) {
                              if (bVar74) {
                                *(void*)(local_58[8] + 0x40) = 1;
                              }
                              else {
                                dVar82 = (double)this_ptr[0x17];
                                uVar60 = (uint)((double)local_80[3] * dVar82);
                                dVar11 = (double)local_58[2];
                                iVar44 = (int)((((double)local_58[3] - dVar11) * g_02390450 +
                                               dVar11) * dVar82);
                                lVar72 = (int64_t)(int)uVar60;
                                fVar77 = *(float *)((int64_t)local_68 + lVar72 * 4);
                                fVar89 = fVar77;
                                if ((int)uVar60 < iVar44) {
                                  lVar53 = (int64_t)iVar44;
                                  lVar52 = lVar72 + 1;
                                  if (lVar52 != lVar53) {
                                    uVar47 = (uint64_t)(~uVar60 + iVar44) & 3;
                                    if ((~uVar60 + iVar44 & 3) != 0) {
                                      do {
                                        fVar89 = *(float *)((int64_t)local_68 + lVar52 * 4);
                                        if (fVar77 <= fVar89) {
                                          fVar89 = fVar77;
                                        }
                                        lVar52 = lVar52 + 1;
                                        uVar47 = uVar47 - 1;
                                        fVar77 = fVar89;
                                      } while (uVar47 != 0);
                                    }
                                    if (2 < (lVar53 - lVar72) - 2U) {
                                      do {
                                        fVar77 = *(float *)((int64_t)local_68 + lVar52 * 4);
                                        if (fVar89 <= fVar77) {
                                          fVar77 = fVar89;
                                        }
                                        fVar89 = *(float *)((int64_t)local_68 + 4U + lVar52 * 4);
                                        if (fVar77 <= fVar89) {
                                          fVar89 = fVar77;
                                        }
                                        fVar77 = *(float *)((int64_t)local_68 + 8U + lVar52 * 4);
                                        if (fVar89 <= fVar77) {
                                          fVar77 = fVar89;
                                        }
                                        fVar89 = *(float *)((int64_t)local_68 + 0xcU + lVar52 * 4);
                                        if (fVar77 <= fVar89) {
                                          fVar89 = fVar77;
                                        }
                                        lVar52 = lVar52 + 4;
                                      } while (lVar53 != lVar52);
                                    }
                                  }
                                }
                                uVar60 = (uint)((dVar11 + ((double)local_58[3] - dVar11) *
                                                          g_0240e390) * dVar82);
                                iVar44 = (int)(dVar82 * *(double *)((int64_t)local_d0 + 0x10));
                                lVar72 = (int64_t)(int)uVar60;
                                fVar77 = *(float *)((int64_t)local_68 + lVar72 * 4);
                                fVar97 = fVar77;
                                if ((int)uVar60 < iVar44) {
                                  lVar53 = (int64_t)iVar44;
                                  lVar52 = lVar72 + 1;
                                  if (lVar52 != lVar53) {
                                    uVar47 = (uint64_t)(~uVar60 + iVar44) & 3;
                                    if ((~uVar60 + iVar44 & 3) != 0) {
                                      do {
                                        fVar97 = *(float *)((int64_t)local_68 + lVar52 * 4);
                                        if (fVar77 <= fVar97) {
                                          fVar97 = fVar77;
                                        }
                                        lVar52 = lVar52 + 1;
                                        uVar47 = uVar47 - 1;
                                        fVar77 = fVar97;
                                      } while (uVar47 != 0);
                                    }
                                    if (2 < (lVar53 - lVar72) - 2U) {
                                      do {
                                        fVar77 = *(float *)((int64_t)local_68 + lVar52 * 4);
                                        if (fVar97 <= fVar77) {
                                          fVar77 = fVar97;
                                        }
                                        fVar97 = *(float *)((int64_t)local_68 + 4U + lVar52 * 4);
                                        if (fVar77 <= fVar97) {
                                          fVar97 = fVar77;
                                        }
                                        fVar77 = *(float *)((int64_t)local_68 + 8U + lVar52 * 4);
                                        if (fVar97 <= fVar77) {
                                          fVar77 = fVar97;
                                        }
                                        fVar97 = *(float *)((int64_t)local_68 + 0xcU + lVar52 * 4);
                                        if (fVar77 <= fVar97) {
                                          fVar97 = fVar77;
                                        }
                                        lVar52 = lVar52 + 4;
                                      } while (lVar53 != lVar52);
                                    }
                                  }
                                }
                                puVar46 = local_160;
                                if (fVar97 <= fVar89) {
                                  *(void*)(local_58[8] + 0x40) = 0xffffffff;
                                }
                                else {
                                  *(void*)(local_58[8] + 0x40) = 1;
                                }
                              }
                              goto LAB_01489ec7;
                            }
                          }
                          *(void*)(local_58[8] + 0x40) = 0xffffffff;
                        }
                      }
                    }
LAB_01489ec7:
                    lVar63 = lVar63 + 1;
                  } while (lVar63 < *(int *)((int64_t)local_c8 + 0xc));
                }
              }
              if (puVar46 != (void*)0x0) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
              if (((char)local_150 != '\0') && (local_88 != (uint64_t *)0x0)) {
                FUN_00d50b20();
              }
              puVar49 = (uint64_t *)(uint64_t)local_22c;
              if (((char)local_110 != '\0') && (local_d8 != (uint64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_40 != '\0') && (local_70 != 0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_78 != '\0') && (local_b8._0_8_ != 0)) {
                FUN_00d50b20();
              }
              if (((char)local_108 != '\0') && (local_d0 != 0.0)) {
                FUN_00d50b20();
              }
              if (((byte)local_a0 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              if (((char)local_90 != '\0') && (local_80 != (uint64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_60._0_1_ != '\0') && (local_58 != (uint64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (local_f8._0_8_ != 0) {
                FUN_00d50b20();
              }
              uVar47 = this_ptr[0x1a];
              if (0 < *(int *)(uVar47 + 0xc)) {
                lVar63 = 0;
                do {
                  lVar72 = *(int64_t *)(*(int64_t *)(uVar47 + 0x10) + lVar63 * 8);
                  if (lVar72 != 0) {
                    FUN_00d50b00();
                  }
                  dVar82 = *(double *)(lVar72 + 0x10) + g_0240e398;
                  if ((dVar82 < *(double *)(lVar72 + 0x18)) &&
                     (*(double *)(lVar72 + 0x18) = dVar82, dVar82 < 0.0)) {
                    *(void*)(lVar72 + 0x18) = 0;
                  }
                  FUN_00d50b20();
                  lVar63 = lVar63 + 1;
                  uVar47 = this_ptr[0x1a];
                } while (lVar63 < *(int *)(uVar47 + 0xc));
              }
              uVar47 = this_ptr[0x1b];
              if (0 < *(int *)(uVar47 + 0xc)) {
                lVar63 = 0;
                do {
                  lVar72 = *(int64_t *)(*(int64_t *)(uVar47 + 0x10) + lVar63 * 8);
                  if (lVar72 != 0) {
                    FUN_00d50b00();
                  }
                  dVar82 = *(double *)(lVar72 + 0x10) + g_0240e398;
                  if ((dVar82 < *(double *)(lVar72 + 0x18)) &&
                     (*(double *)(lVar72 + 0x18) = dVar82, dVar82 < 0.0)) {
                    *(void*)(lVar72 + 0x18) = 0;
                  }
                  FUN_00d50b20();
                  lVar63 = lVar63 + 1;
                  uVar47 = this_ptr[0x1b];
                } while (lVar63 < *(int *)(uVar47 + 0xc));
              }
              if (local_144 == 2.8026e-45) {
                *(void*)(this_ptr + 0x1d) = 0x43dbffe8;
                iVar44 = (int)this_ptr[0x18];
              }
              else {
                uVar47 = this_ptr[0x1a];
                if (uVar47 != 0) {
                  FUN_00d50b00();
                }
                local_2d8 = 1;
                local_2d0 = local_e0;
                local_2c8 = 0;
                local_2e0 = uVar47;
                FUN_014afb20(this_ptr[0x17],&local_2d0,local_100,(int)this_ptr[0x18] + 1);
                if (uVar47 != 0) {
                  FUN_00d50b20();
                }
                iVar44 = (int)this_ptr[0x18];
                if (-1 < iVar44) {
                  if (iVar44 == 0) {
                    auVar93 = ZEXT816(0);
                    uVar47 = 0;
                    auVar86 = ZEXT816(0);
                  }
                  else {
                    auVar93 = ZEXT816(0);
                    uVar47 = 0;
                    auVar86 = ZEXT816(0);
                    do {
                      fVar77 = *(float *)(local_100 + uVar47 * 4);
                      if (fVar77 <= g_023b4df0) {
                        fVar77 = *(float *)(local_100 + 4 + uVar47 * 4);
                      }
                      else {
                        auVar93._0_4_ = auVar93._0_4_ + fVar77;
                        auVar86._0_4_ = auVar86._0_4_ + fVar77 * *(float *)(local_140 + uVar47 * 4);
                        fVar77 = *(float *)(local_100 + 4 + uVar47 * 4);
                      }
                      if (g_023b4df0 < fVar77) {
                        auVar93._0_4_ = auVar93._0_4_ + fVar77;
                        auVar86._0_4_ =
                             auVar86._0_4_ + fVar77 * *(float *)(local_140 + 4 + uVar47 * 4);
                      }
                      uVar47 = uVar47 + 2;
                    } while ((iVar44 + 1U & 0xfffffffe) != uVar47);
                  }
                  fVar77 = auVar93._0_4_;
                  if (((iVar44 + 1U & 1) != 0) &&
                     (fVar89 = *(float *)(local_100 + uVar47 * 4), g_023b4df0 < fVar89)) {
                    fVar77 = fVar77 + fVar89;
                    auVar86._0_4_ = auVar86._0_4_ + fVar89 * *(float *)(local_140 + uVar47 * 4);
                  }
                  if (g_02394274 <= fVar77) {
                    auVar87._4_12_ = auVar86._4_12_;
                    auVar87._0_4_ = (auVar86._0_4_ / fVar77) * g_023941f4;
                    fVar77 = (float)_exp2f(auVar87._0_8_);
                    *local_290 = fVar77 * g_023941f8;
                  }
                }
              }
              *(void*)(this_ptr + 0x27) = 1;
              local_2b8 = 0;
              local_2c0 = 0;
              FUN_0149b7e0(this_ptr[0x17],this_ptr[0x28],iVar44 + 1);
              uVar60 = (int)this_ptr[0x18] + 1;
              uVar47 = this_ptr[0x28];
              puVar50 = this_ptr;
              if ((int)this_ptr[0x18] < 0) {
                iVar44 = 0;
              }
              else {
                if (uVar60 < 8) {
                  uVar66 = 0;
                  iVar44 = 0;
                }
                else {
                  uVar66 = (uint64_t)(uVar60 & 0xfffffff8);
                  puVar50 = (uint64_t *)((uVar66 - 8 >> 3) + 1);
                  if (uVar66 - 8 == 0) {
                    iVar44 = 0;
                    iVar61 = 0;
                    iVar64 = 0;
                    iVar88 = 0;
                    lVar63 = 0;
                    iVar90 = 0;
                    iVar94 = 0;
                    iVar95 = 0;
                    iVar96 = 0;
                  }
                  else {
                    lVar72 = -((uint64_t)puVar50 & 0xfffffffffffffffe);
                    lVar63 = 0;
                    iVar44 = 0;
                    iVar61 = 0;
                    iVar64 = 0;
                    iVar88 = 0;
                    iVar90 = 0;
                    iVar94 = 0;
                    iVar95 = 0;
                    iVar96 = 0;
                    do {
                      piVar4 = (int *)(uVar47 + lVar63 * 4);
                      piVar6 = (int *)(uVar47 + 0x10 + lVar63 * 4);
                      piVar7 = (int *)(uVar47 + 0x20 + lVar63 * 4);
                      piVar8 = (int *)(uVar47 + 0x30 + lVar63 * 4);
                      iVar44 = (g_0240e210 - (uint)(*piVar7 == 0)) +
                               (iVar44 - (uint)(*piVar4 == 0));
                      iVar61 = (_UNK_0240e214 - (uint)(piVar7[1] == 0)) +
                               (iVar61 - (uint)(piVar4[1] == 0));
                      iVar64 = (_UNK_0240e218 - (uint)(piVar7[2] == 0)) +
                               (iVar64 - (uint)(piVar4[2] == 0));
                      iVar88 = (_UNK_0240e21c - (uint)(piVar7[3] == 0)) +
                               (iVar88 - (uint)(piVar4[3] == 0));
                      iVar90 = (g_0240e210 - (uint)(*piVar8 == 0)) +
                               (iVar90 - (uint)(*piVar6 == 0));
                      iVar94 = (_UNK_0240e214 - (uint)(piVar8[1] == 0)) +
                               (iVar94 - (uint)(piVar6[1] == 0));
                      iVar95 = (_UNK_0240e218 - (uint)(piVar8[2] == 0)) +
                               (iVar95 - (uint)(piVar6[2] == 0));
                      iVar96 = (_UNK_0240e21c - (uint)(piVar8[3] == 0)) +
                               (iVar96 - (uint)(piVar6[3] == 0));
                      lVar63 = lVar63 + 0x10;
                      lVar72 = lVar72 + 2;
                    } while (lVar72 != 0);
                  }
                  if (((uint64_t)puVar50 & 1) != 0) {
                    piVar4 = (int *)(uVar47 + lVar63 * 4);
                    piVar6 = (int *)(uVar47 + 0x10 + lVar63 * 4);
                    iVar90 = (iVar90 - (uint)(*piVar6 == 0)) + 1;
                    iVar94 = (iVar94 - (uint)(piVar6[1] == 0)) + 1;
                    iVar95 = (iVar95 - (uint)(piVar6[2] == 0)) + 1;
                    iVar96 = (iVar96 - (uint)(piVar6[3] == 0)) + 1;
                    iVar44 = (iVar44 - (uint)(*piVar4 == 0)) + 1;
                    iVar61 = (iVar61 - (uint)(piVar4[1] == 0)) + 1;
                    iVar64 = (iVar64 - (uint)(piVar4[2] == 0)) + 1;
                    iVar88 = (iVar88 - (uint)(piVar4[3] == 0)) + 1;
                  }
                  iVar44 = iVar88 + iVar96 + iVar61 + iVar94 + iVar64 + iVar95 + iVar44 + iVar90;
                  if (uVar66 == uVar60) goto LAB_0148a8d3;
                }
                do {
                  iVar44 = (iVar44 + 1) - (uint)(*(int *)(uVar47 + uVar66 * 4) == 0);
                  uVar66 = uVar66 + 1;
                } while (uVar60 != uVar66);
              }
LAB_0148a8d3:
              uVar66 = (uint64_t)
                       (int)(((double)iVar44 * (double)this_ptr[0x15]) / (double)this_ptr[0x17]);
              if ((int64_t)this_ptr[0x13] < (int64_t)uVar66) {
                uVar66 = this_ptr[0x13];
              }
              this_ptr[0x14] = uVar66;
              local_2a8 = 0;
              local_2b0 = 0;
              FUN_0149b7e0(local_68,uVar47,*(float *)((int64_t)this_ptr + 0x114) * g_023b81d4);
              if ((char)local_22c != '\0') {
                puVar71 = (uint64_t *)
                          ((int64_t)(int)local_1b0[6] << (*(byte *)(this_ptr[0xc] + 0xac) & 0x3f))
                ;
                uVar47 = this_ptr[0x13];
                if ((uVar47 | (uint64_t)puVar71) >> 0x20 == 0) {
                  iVar44 = (int)((uVar47 & 0xffffffff) / ((uint64_t)puVar71 & 0xffffffff));
                }
                else {
                  iVar44 = (int)((int64_t)uVar47 / (int64_t)puVar71);
                }
                iVar61 = 2;
                if (2 < iVar44 + 1) {
                  iVar61 = iVar44 + 1;
                }
                *(int *)((int64_t)this_ptr + 0x19c) = iVar61;
                local_144 = (float)(int)local_1b0[8] / (float)(int)puVar71;
                local_60 = (double)this_ptr[0x17] / (double)this_ptr[0x15];
                local_b8._0_8_ = g_025e74b8;
                local_f8._0_8_ = g_025f1f08;
                puVar59 = (void*)0x0;
                local_68 = (double)((uint64_t)local_68 & 0xffffffff00000000);
                puVar49 = (uint64_t *)0x0;
                local_78 = 0;
                local_70 = 0x0;
                local_58 = (uint64_t *)0x0;
                puVar69 = (uint64_t *)0x0;
                local_80 = puVar71;
                do {
                  uVar60 = (uint)((double)((int)puVar59 * (int)puVar71) * local_60 + g_023942d0);
                  if ((int)(uint)this_ptr[0x18] < (int)uVar60) {
                    uVar60 = (uint)this_ptr[0x18];
                  }
                  uVar47 = (uint64_t)uVar60;
                  local_40 = puVar59;
                  puVar50 = (uint64_t *)FUN_00e8fc40();
                  FUN_00d4ff40();
                  *puVar50 = (uint64_t)&g_025e74a0;
                  *(void*)((int64_t)puVar50 + 0xc) = 0;
                  *(void*)((int64_t)puVar50 + 0x14) = 0;
                  *(void*)((int64_t)puVar50 + 0x1c) = 0;
                  *(void*)((int64_t)puVar50 + 0x24) = 0;
                  *(void*)((int64_t)puVar50 + 0x2c) = 0;
                  puVar50[6] = 0;
                  puVar50[7] = 0;
                  puVar50[8] = 0;
                  puVar50[9] = 0;
                  puVar50[10] = 0;
                  puVar50[0xb] = 0;
                  *(void*)(puVar50 + 0xc) = 0;
                  uVar48 = (*local_b8._0_8_)();
                  uVar54 = (undefined7)((uint64_t)uVar48 >> 8);
                  if (puVar50 == puVar69) {
                    puVar70 = puVar69;
                    if ((char)local_58 == '\0') {
                      local_58 = (uint64_t *)CONCAT71(uVar54,1);
                    }
                    else {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    bVar74 = (char)local_58 != '\0';
                    local_58 = (uint64_t *)CONCAT71(uVar54,1);
                    puVar70 = puVar50;
                    if ((bVar74) && (puVar69 != (uint64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  *(int *)((int64_t)puVar70 + 0xc) = (int)local_40;
                  uVar76 = g_02390140;
                  lVar63 = (int64_t)(int)uVar60;
                  *(uint *)(puVar70 + 2) = *(uint *)(local_100 + lVar63 * 4) & g_02390140;
                  uVar79 = *(void*)(local_140 + lVar63 * 4);
                  *(void*)((int64_t)puVar70 + 0x14) = uVar79;
                  *(void*)(puVar70 + 3) = uVar79;
                  *(uint *)((int64_t)puVar70 + 0x1c) = *(uint *)(local_100 + lVar63 * 4) & uVar76;
                  fVar77 = (float)((double)*(float *)(local_288 + lVar63 * 4) * g_02420c40);
                  *(float *)(puVar70 + 4) = fVar77;
                  *(float *)((int64_t)puVar70 + 0x24) = fVar77;
                  *(void*)(puVar70 + 5) = *(void*)(local_288 + lVar63 * 4);
                  if (*(int *)(this_ptr[0x28] + lVar63 * 4) == 0) {
                    *(void*)((int64_t)puVar70 + 0x2c) = 1;
                  }
                  uVar66 = this_ptr[0x2b];
                  if ((uVar66 != 0) && (g_023b4df0 < *(float *)(local_100 + lVar63 * 4))) {
                    iVar61 = (int)((float)(int)local_40 / local_144 + g_0239011c);
                    iVar44 = *(int *)(uVar66 + 0xc) + -1;
                    if (iVar61 < *(int *)(uVar66 + 0xc)) {
                      iVar44 = iVar61;
                    }
                    lVar63 = *(int64_t *)(uVar66 + 0x10);
                    puVar50 = *(uint64_t **)(lVar63 + (int64_t)iVar44 * 8);
                    if (local_70 == puVar50) {
                      if (((char)local_78 == '\0') && (local_70 != 0x0)) {
                        local_78 = CONCAT71((int7)((uint64_t)lVar63 >> 8),1);
                        uVar47 = 0;
                        FUN_00d50b00();
                      }
                    }
                    else {
                      if (puVar50 != (uint64_t *)0x0) {
                        uVar47 = local_78 & 0xffffffff;
                        lVar63 = FUN_00d50b00();
                      }
                      if (((char)local_78 == '\0') || (local_70 == 0x0)) {
                        local_78 = CONCAT71((int7)((uint64_t)lVar63 >> 8),1);
                        local_70 = puVar50;
                      }
                      else {
                        uVar47 = local_78 & 0xffffffff;
                        local_70 = puVar50;
                        uVar48 = FUN_00d50b20();
                        local_78 = CONCAT71((int7)((uint64_t)uVar48 >> 8),1);
                      }
                    }
                    puVar71 = local_80;
                    if (0 < *(int *)((int64_t)local_70 + 0xc)) {
                      lVar63 = 0;
                      do {
                        puVar50 = *(uint64_t **)
                                   (*(uint64_t *)((int64_t)local_70 + 0x10) + lVar63 * 8);
                        uVar54 = (undefined7)(uVar47 >> 8);
                        if (puVar49 == puVar50) {
                          puVar50 = puVar49;
                          if ((local_68._0_1_ == '\0') && (puVar49 != (uint64_t *)0x0)) {
                            uVar47 = CONCAT71(uVar54,1);
                            local_68 = (double)((uint64_t)local_68 & 0xffffffff00000000);
                            FUN_00d50b00();
                          }
                          else {
                            uVar47 = (uint64_t)local_68 & 0xffffffff;
                          }
                        }
                        else {
                          if (puVar50 != (uint64_t *)0x0) {
                            FUN_00d50b00();
                          }
                          uVar47 = CONCAT71(uVar54,1);
                          if ((local_68._0_1_ != '\0') && (puVar49 != (uint64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        fVar77 = (float)(int)puVar50[2] * g_023942a8 + g_0240e310;
                        uVar79 = (uint32_t)uVar47;
                        puVar49 = puVar50;
                        if ((float)((uint)(fVar77 - *(float *)((int64_t)puVar70 + 0x14)) &
                                   g_02390140) < g_02394240) {
                          local_68 = (double)CONCAT44(local_68._4_4_,fVar77);
                          FUN_014eec80();
                          puVar71 = local_50;
                          if ((local_48 != '\0') && (local_50 != (uint64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                          if (puVar71 == (uint64_t *)0x0) {
                            puVar46 = (void*)FUN_00e8fc40();
                            FUN_00d4ff40();
                            *puVar46 = &g_025f1ef0;
                            *(void*)((int64_t)puVar46 + 0xc) = 0;
                            *(void*)((int64_t)puVar46 + 0x14) = 0;
                            (*local_f8._0_8_)();
                            local_258 = '\x01';
                            local_260 = puVar46;
                            FUN_014ee8d0();
                            if ((local_258 != '\0') && (local_260 != (void*)0x0)) {
                              FUN_00d50b20();
                            }
                          }
                          FUN_014eec80();
                          *(void*)((int64_t)local_50 + 0xc) = local_68._0_4_;
                          if ((local_48 != '\0') && (local_50 != (uint64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                          FUN_014eec80();
                          *(int *)((int64_t)local_50 + 0x14) = (int)puVar50[3];
                          if ((local_48 != '\0') && (local_50 != (uint64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                          uVar60 = (uint)((int)lVar63 == 0);
                          iVar44 = *(int *)((int64_t)local_70 + 0xc);
                          goto LAB_0148ae35;
                        }
                        lVar63 = lVar63 + 1;
                        iVar44 = *(int *)((int64_t)local_70 + 0xc);
                        local_68 = (double)CONCAT44(local_68._4_4_,uVar79);
                      } while (lVar63 < iVar44);
                      uVar60 = 0;
LAB_0148ae35:
                      puVar71 = local_80;
                      if ((int)uVar60 < iVar44) {
                        uVar66 = (uint64_t)uVar60;
                        puVar49 = *(uint64_t **)
                                   (*(uint64_t *)((int64_t)local_70 + 0x10) + uVar66 * 8);
                        if (puVar50 == puVar49) {
                          if ((char)uVar47 == '\0') {
                            local_68 = (double)CONCAT44(local_68._4_4_,1);
                            FUN_00d50b00();
                            puVar49 = puVar50;
                          }
                          else {
                            local_68 = (double)CONCAT44(local_68._4_4_,uVar79);
                            puVar49 = puVar50;
                          }
                        }
                        else {
                          if (puVar49 != (uint64_t *)0x0) {
                            uVar66 = FUN_00d50b00();
                          }
                          local_68 = (double)CONCAT44(local_68._4_4_,
                                                      (int)CONCAT71((int7)(uVar66 >> 8),1));
                          if ((char)uVar47 != '\0') {
                            FUN_00d50b20();
                          }
                        }
                        local_c8 = (uint64_t *)
                                   CONCAT44(local_c8._4_4_,
                                            (float)(int)puVar49[2] * g_023942a8 + g_0240e310);
                        FUN_014eec80();
                        puVar50 = local_50;
                        if ((local_48 != '\0') && (local_50 != (uint64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (puVar50 == (uint64_t *)0x0) {
                          puVar50 = (uint64_t *)FUN_00e8fc40();
                          FUN_00d4ff40();
                          *puVar50 = (uint64_t)&g_025f1ef0;
                          *(void*)((int64_t)puVar50 + 0xc) = 0;
                          *(void*)((int64_t)puVar50 + 0x14) = 0;
                          (*local_f8._0_8_)();
                          local_248 = '\x01';
                          local_250 = puVar50;
                          FUN_014ee8d0();
                          if ((local_248 != '\0') && (local_250 != (uint64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        FUN_014eec80();
                        *(float *)(local_50 + 2) = local_c8._0_4_;
                        if ((local_48 != '\0') && (local_50 != (uint64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        FUN_014eec80();
                        *(int *)(local_50 + 3) = (int)puVar49[3];
                        if ((local_48 != '\0') && (local_50 != (uint64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      else {
                        local_68 = (double)CONCAT44(local_68._4_4_,uVar79);
                      }
                    }
                  }
                  local_48 = '\0';
                  local_50 = puVar70;
                  FUN_00d21140();
                  if ((local_48 != '\0') && (local_50 != (uint64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  uVar60 = (int)local_40 + 1;
                  puVar59 = (void*)(uint64_t)uVar60;
                  puVar69 = puVar70;
                } while ((int)uVar60 < *(int *)((int64_t)this_ptr + 0x19c));
                if ((local_68._0_1_ != '\0') && (puVar49 != (uint64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (((char)local_78 != '\0') && (local_70 != 0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
              pcVar57 = CONCAT71((int7)((uint64_t)puVar49 >> 8),1);
              dVar82 = (double)CONCAT71((int7)((uint64_t)puVar50 >> 8),1);
              if (local_198 != (uint64_t *)0x0) {
                FUN_00d50b20();
                dVar82 = 0.0;
              }
              if (local_128._0_8_ != 0) {
                pcVar57 = 0x0;
                auVar40._8_8_ = 0;
                auVar40._0_8_ = local_128._8_8_;
                local_128 = auVar40 << 0x40;
                FUN_00d50b20();
              }
              if (local_168 != (void*)0x0) {
                local_168 = (void*)0x0;
                FUN_00d50b20();
              }
              puVar46 = local_158;
              bVar75 = local_e0 == (void*)0x0;
              local_70 = pcVar57;
              local_68 = dVar82;
              if (!bVar75) {
                local_e0 = (void*)0x0;
                FUN_00d50b20();
              }
              bVar74 = puVar46 == (void*)0x0;
              if (!bVar74) {
                FUN_00d50b20();
              }
              if (this_ptr[0x2b] != 0) {
                this_ptr[0x2b] = 0;
                FUN_00d50b20();
              }
              *(void*)(this_ptr + 0x29) = 0;
              (**(code **)(*this_ptr + 0x380))();
              if (*(char *)((int64_t)this_ptr + 0x3c) == '\0') {
                local_198 = (uint64_t *)0x0;
                local_158 = (void*)0x0;
              }
              else {
                FUN_00e34a60();
                local_158 = (void*)0x0;
                local_198 = (uint64_t *)0x0;
              }
            }
            else {
              local_3c0 = local_e0;
              local_3b8 = 0;
              FUN_014a8cc0(this_ptr[0x17],local_68,local_100,(int)this_ptr[0x18] + 1);
              local_3b0 = puVar46;
              local_3a8 = 0;
              uVar66 = this_ptr[0x2b];
              if (uVar66 != 0) {
                FUN_00d50b00();
              }
              local_398 = 1;
              local_3a0 = uVar66;
              FUN_014aa770(local_58,&local_3a0,4);
              if (uVar66 != 0) {
                FUN_00d50b20();
              }
              local_390 = local_e0;
              local_388 = 0;
              uVar66 = this_ptr[0x2b];
              if (uVar66 != 0) {
                FUN_00d50b00();
              }
              local_378 = 1;
              local_60 = (double)this_ptr[0x17];
              uVar51 = this_ptr[0x1a];
              local_380 = uVar66;
              if (uVar51 != 0) {
                FUN_00d50b00();
              }
              local_368 = 1;
              local_370 = uVar51;
              FUN_014ab140(local_58,local_60,local_68,g_0240d308);
              if (uVar51 != 0) {
                FUN_00d50b20();
              }
              if (uVar66 != 0) {
                FUN_00d50b20();
              }
              (**(code **)(*this_ptr + 0x380))();
              if (*(char *)((int64_t)this_ptr + 0x3c) == '\0') {
                local_360 = local_e0;
                local_358 = 0;
                FUN_014ab670(this_ptr[0x15],this_ptr[0x17],local_78,local_100);
                (**(code **)(*this_ptr + 0x380))();
                if (*(char *)((int64_t)this_ptr + 0x3c) == '\0') {
                  local_280 = local_e0;
                  local_278 = '\0';
                  uVar48 = FUN_014abe70();
                  local_c8 = local_50;
                  puVar49 = local_50;
                  if (local_48 == '\0') {
                    if (((local_50 != (uint64_t *)0x0) &&
                        (uVar48 = FUN_00d50b00(), puVar49 = local_c8, local_48 != '\0')) &&
                       (local_50 != (uint64_t *)0x0)) {
                      uVar48 = FUN_00d50b20();
                    }
                  }
                  else {
                    local_48 = '\0';
                  }
                  if ((local_278 != '\0') && (local_280 != (void*)0x0)) {
                    uVar48 = FUN_00d50b20();
                  }
                  FUN_00d242c0(uVar48,0);
                  *(void*)((int64_t)this_ptr + 0xe4) = 0;
                  if (*(int *)((int64_t)puVar49 + 0xc) < 2) {
                    local_60 = 0.0;
                    lVar63 = 0;
                    auVar32._8_8_ = 0;
                    auVar32._0_8_ = local_b8._8_8_;
                    local_b8 = auVar32 << 0x40;
                    local_58 = (uint64_t *)0x0;
                  }
                  else {
                    lVar72 = 1;
                    local_58 = (uint64_t *)0x0;
                    auVar31._8_8_ = 0;
                    auVar31._0_8_ = local_b8._8_8_;
                    local_b8 = auVar31 << 0x40;
                    lVar63 = 0;
                    local_60 = 0.0;
                    do {
                      uVar66 = local_c8[2];
                      lVar52 = *(int64_t *)((uVar66 - 8) + lVar72 * 8);
                      if (lVar63 == lVar52) {
                        if ((local_60._0_1_ == '\0') && (lVar63 != 0)) {
                          local_60 = (double)CONCAT71((int7)(uVar66 >> 8),1);
                          FUN_00d50b00();
                        }
                      }
                      else {
                        if (lVar52 != 0) {
                          uVar66 = FUN_00d50b00();
                        }
                        if ((local_60._0_1_ == '\0') || (lVar63 == 0)) {
                          local_60 = (double)CONCAT71((int7)(uVar66 >> 8),1);
                          lVar63 = lVar52;
                        }
                        else {
                          uVar48 = FUN_00d50b20();
                          local_60 = (double)CONCAT71((int7)((uint64_t)uVar48 >> 8),1);
                          lVar63 = lVar52;
                        }
                      }
                      auVar83 = local_b8;
                      uVar66 = local_c8[2];
                      puVar49 = *(uint64_t **)(uVar66 + lVar72 * 8);
                      if (local_58 == puVar49) {
                        if ((local_b8[0] == '\0') && (local_58 != (uint64_t *)0x0)) {
                          local_b8._1_7_ = (int7)(uVar66 >> 8);
                          local_b8[0] = 1;
                          local_b8._8_8_ = auVar83._8_8_;
                          FUN_00d50b00();
                        }
                      }
                      else {
                        if (puVar49 != (uint64_t *)0x0) {
                          uVar66 = FUN_00d50b00();
                        }
                        auVar83 = local_b8;
                        if ((local_b8[0] == '\0') || (local_58 == (uint64_t *)0x0)) {
                          local_b8._1_7_ = (int7)(uVar66 >> 8);
                          local_b8[0] = 1;
                          local_b8._8_8_ = auVar83._8_8_;
                          local_58 = puVar49;
                        }
                        else {
                          local_58 = puVar49;
                          uVar48 = FUN_00d50b20();
                          auVar83 = local_b8;
                          local_b8._1_7_ = (int7)((uint64_t)uVar48 >> 8);
                          local_b8[0] = 1;
                          local_b8._8_8_ = auVar83._8_8_;
                        }
                      }
                      puVar49 = local_58;
                      uVar48 = _logf(*(float *)(local_58 + 7) * g_02394204);
                      auVar92._8_4_ = (int)extraout_XMM0_Qb_03;
                      auVar92._0_8_ = uVar48;
                      auVar92._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_03 >> 0x20);
                      local_f8._4_12_ = auVar92._4_12_;
                      local_f8._0_4_ = (float)uVar48 * g_02394208;
                      fVar77 = (float)_logf(*(float *)(lVar63 + 0x38) * g_02394204);
                      if (((double)puVar49[2] - *(double *)(lVar63 + 0x18) < g_023942d0) &&
                         (fVar77 = (float)((uint)(((float)local_f8._0_4_ - fVar77 * g_02394208) *
                                                 g_02394254) & g_02390140),
                         g_023b160c < fVar77)) {
                        *(float *)((int64_t)this_ptr + 0xe4) =
                             fVar77 + g_0241d220 + *(float *)((int64_t)this_ptr + 0xe4);
                      }
                      lVar72 = lVar72 + 1;
                    } while (lVar72 < *(int *)((int64_t)local_c8 + 0xc));
                  }
                  uVar51 = this_ptr[0x18];
                  local_f8._0_8_ = this_ptr[0x17];
                  uVar66 = this_ptr[0x32];
                  if (uVar66 != 0) {
                    FUN_00d50b00();
                  }
                  puVar50 = local_58;
                  local_268 = '\x01';
                  local_270 = uVar66;
                  FUN_014abf60(local_f8._0_8_,local_140,0,(int)uVar51 + 1);
                  puVar49 = local_88;
                  if ((local_268 != '\0') && (local_270 != 0)) {
                    FUN_00d50b20();
                  }
                  local_350 = local_1a0;
                  local_348 = 0;
                  FUN_014ad820(this_ptr[0x17],this_ptr[0x15],(int)this_ptr[0x18] + 1,&local_350);
                  FUN_00d50b20();
                  if ((local_60._0_1_ != '\0') && (lVar63 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_b8[0] != '\0') && (puVar50 != (uint64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01487787;
                }
                uVar48 = FUN_00e34a60();
              }
              else {
                uVar48 = FUN_00e34a60();
              }
LAB_014878c0:
              uVar54 = (undefined7)((uint64_t)uVar48 >> 8);
              local_70 = CONCAT71(uVar54,1);
              local_68 = (double)CONCAT71(uVar54,1);
              bVar74 = true;
              bVar75 = true;
            }
            if (local_208 != (uint64_t *)0x0) {
              FUN_00d50b20();
            }
            if (local_1a0 != (uint64_t *)0x0) {
              FUN_00d50b20();
            }
            if (((char)local_70 != '\0') && (local_128._0_8_ != 0)) {
              FUN_00d50b20();
            }
            if (local_68._0_1_ != '\0') goto LAB_01487915;
          }
          else {
            FUN_00e34a60();
            bVar75 = true;
            bVar74 = true;
LAB_01487915:
            if (local_198 != (uint64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          if (local_1c8 != (uint64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00e34a60();
          bVar74 = true;
          bVar75 = true;
        }
        if (local_178 != (uint64_t *)0x0) goto LAB_01487941;
      }
      else {
        FUN_00e34a60();
        bVar75 = true;
        bVar74 = true;
LAB_01487941:
        FUN_00d50b20();
      }
      if (local_1a8 != (uint64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_1d0 != (uint64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_1d8 != (uint64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_1e0 != (uint64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_210 != (uint64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00e34a60();
LAB_01485700:
      bVar74 = true;
      bVar75 = true;
    }
    if (local_218 != (uint64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_1b8 == (uint64_t *)0x0) goto LAB_0148572c;
  }
  else {
    FUN_00e34a60();
    bVar75 = true;
    bVar74 = true;
  }
  FUN_00d50b20();
LAB_0148572c:
  if (local_1e8 != (uint64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_220 != (uint64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_1f0 != (uint64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_228 != (uint64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_1b0 != (uint64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar74) && (local_158 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar75) && (local_e0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return;
  while (lVar63 = lVar63 + -1, iVar61 < lVar63) {
LAB_014887c2:
    pfVar1 = (float *)((local_100 - 4) + lVar63 * 4);
    if (*pfVar1 <= g_023b4df0 && g_023b4df0 != *pfVar1) {
      puVar49 = (uint64_t *)((double)local_58[2] + g_0240e378);
      local_c8 = (uint64_t *)local_58[4];
      if ((double)local_58[4] <= (double)puVar49) {
        local_c8 = puVar49;
      }
      puVar49 = (uint64_t *)local_b8._0_8_;
      if (*(int *)(local_f8._0_8_ + 0xc) <= (int)uVar66) {
        uVar47 = local_78 & 0xffffffff;
        goto LAB_01488946;
      }
      uVar66 = (uint64_t)(int)uVar66;
      goto LAB_01488825;
    }
  }
  goto LAB_0148848a;
  while( true ) {
    uVar66 = uVar66 + 1;
    local_78 = CONCAT44(local_78._4_4_,(int)uVar47);
    if ((int64_t)*(int *)(local_f8._0_8_ + 0xc) <= (int64_t)uVar66) break;
LAB_01488825:
    puVar50 = *(uint64_t **)(*(int64_t *)(local_f8._0_8_ + 0x10) + uVar66 * 8);
    local_b8._0_8_ = puVar49;
    uVar54 = (undefined7)(uVar47 >> 8);
    if (puVar49 == puVar50) {
      if ((char)local_78 == '\0') {
        if (puVar49 == (uint64_t *)0x0) {
          uVar47 = local_78 & 0xffffffff;
        }
        else {
          uVar47 = CONCAT71(uVar54,1);
          local_78 = local_78 & 0xffffffff00000000;
          FUN_00d50b00();
        }
      }
      else {
        uVar47 = local_78 & 0xffffffff;
      }
    }
    else {
      if (puVar50 != (uint64_t *)0x0) {
        FUN_00d50b00();
      }
      uVar47 = CONCAT71(uVar54,1);
      puVar49 = puVar50;
      if (((char)local_78 != '\0') && (local_b8._0_8_ != 0)) {
        local_b8._0_8_ = puVar50;
        FUN_00d50b20();
      }
    }
    if ((double)local_c8 < (double)puVar49[2]) break;
  }
LAB_01488946:
  uVar48 = FUN_014ba9e0(local_c8);
  local_b8._0_8_ = local_50;
  uVar54 = (undefined7)((uint64_t)local_50 >> 8);
  cVar43 = (char)uVar47;
  if (local_50 == puVar49) {
    if ((cVar43 == '\0') && (local_50 != (uint64_t *)0x0)) {
      local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71(uVar54,1));
      if (local_48 != '\0') {
        local_b8._0_8_ = puVar49;
        goto LAB_01488a47;
      }
      local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71(uVar54,1));
      uVar48 = FUN_00d50b00();
    }
    else {
      local_78 = CONCAT44(local_78._4_4_,(int)uVar47);
    }
    local_b8._0_8_ = puVar49;
LAB_01488a33:
    if ((local_48 != '\0') && (local_50 != (uint64_t *)0x0)) {
      uVar48 = FUN_00d50b20();
    }
  }
  else {
    if (local_48 == '\0') {
      uVar81 = 0;
      if (local_50 != (uint64_t *)0x0) {
        uVar81 = FUN_00d50b00();
        uVar48 = extraout_XMM0_Qa;
      }
      local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71((int7)((uint64_t)uVar81 >> 8),1));
      if ((cVar43 != '\0') && (puVar49 != (uint64_t *)0x0)) {
        uVar48 = FUN_00d50b20();
      }
      goto LAB_01488a33;
    }
    local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71(uVar54,1));
    if ((cVar43 != '\0') && (puVar49 != (uint64_t *)0x0)) {
      uVar48 = FUN_00d50b20();
    }
  }
LAB_01488a47:
  local_50 = (uint64_t *)local_b8._0_8_;
  local_48 = '\0';
  FUN_00d23370(uVar48,uVar66 & 0xffffffff);
  if ((local_48 != '\0') && (local_50 != (uint64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar51 = local_58[8];
  if (uVar51 != local_b8._0_8_) {
    if (local_b8._0_8_ != 0) {
      FUN_00d50b00();
    }
    local_58[8] = local_b8._0_8_;
    if (uVar51 != 0) {
      FUN_00d50b20();
    }
  }
  local_58[4] = (uint64_t)local_c8;
  if (bVar74) {
    local_80 = (uint64_t *)0x0;
  }
  else {
    local_80[5] = (uint64_t)local_c8;
  }
LAB_0148848a:
  uVar51 = (uint64_t)(iVar44 + 1U);
  if (*(int *)((int64_t)local_e0 + 0xc) <= (int)(iVar44 + 1U)) goto LAB_01488b2e;
  goto LAB_0148849f;
}

