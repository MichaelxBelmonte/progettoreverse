// Function: MUElementAnalyzer_makeMonophonicItems
// Address: 0158c060
// Size: 34784 bytes
// Class: MUElementAnalyzer
// String references:
//   "GNData"
//   "MUAudioFileSource"
//   "MUElementAnalyzer::makeMonophonicItems(): anchorSampleOffset > principalItem->getSampleCount()"
//   "MUM32Importer::createAudioSourceDescriptionForNotes: mono (propertyPoint->_timeSliceIndex != iSlice...
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


void* MUElementAnalyzer_makeMonophonicItems(code *param_1,void*param_2,int64_t *param_3,code *param_4)

{
  float *pfVar1;
  code cVar2;
  int64_t *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint64_t uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  void *pvVar12;
  int64_t lVar13;
  uint64_t uVar14;
  undefined7 uVar22;
  uint64_t uVar15;
  code *pcVar16;
  code *pcVar17;
  int64_t lVar18;
  int64_t lVar19;
  int64_t lVar20;
  void*puVar21;
  byte bVar23;
  char cVar24;
  void* pVar25;
  int64_t *plVar26;
  code *pcVar27;
  uint64_t uVar28;
  void**ppuVar29;
  uint64_t uVar30;
  uint64_t uVar31;
  void*this_ptr;
  code **ppcVar32;
  int iVar33;
  code *unaff_R13;
  double dVar34;
  uint7 uVar35;
  bool bVar36;
  uint32_t uVar37;
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
  uint32_t extraout_XMM0_Da_09;
  uint32_t extraout_XMM0_Da_10;
  uint32_t extraout_XMM0_Da_11;
  uint32_t uVar38;
  float fVar39;
  uint32_t extraout_XMM0_Da_12;
  uint32_t extraout_XMM0_Da_13;
  uint32_t extraout_XMM0_Da_14;
  uint32_t extraout_XMM0_Da_15;
  uint32_t extraout_XMM0_Da_16;
  uint32_t extraout_XMM0_Da_17;
  uint32_t extraout_XMM0_Da_18;
  uint32_t extraout_XMM0_Da_19;
  code *local_680;
  uint8_t local_678;
  code *local_670;
  uint8_t local_668;
  code *local_660;
  int64_t local_658;
  code *local_650;
  int64_t local_648;
  int64_t local_640;
  uint64_t local_638;
  code *local_630;
  void*local_628;
  int64_t local_620;
  char local_618;
  int64_t local_610;
  char local_608;
  int64_t local_600;
  char local_5f8;
  int64_t local_5f0;
  char local_5e8;
  int64_t local_5e0;
  char local_5d8;
  int64_t local_5d0;
  char local_5c8;
  int64_t local_5c0;
  char local_5b8;
  code *local_5b0;
  char local_5a8;
  int64_t local_5a0;
  char local_598;
  code *local_590;
  char local_588;
  int64_t local_580;
  char local_578;
  int64_t local_570;
  char local_568;
  int64_t local_560;
  char local_558;
  int64_t local_550;
  char local_548;
  int64_t local_540;
  char local_538;
  int64_t local_530;
  char local_528;
  int64_t local_520;
  char local_518;
  int64_t local_510;
  char local_508;
  int64_t local_500;
  char local_4f8;
  int64_t local_4f0;
  char local_4e8;
  int64_t local_4e0;
  char local_4d8;
  int64_t local_4d0;
  char local_4c8;
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
  code *local_3f0;
  char local_3e8;
  code *local_3e0;
  char local_3d8;
  code *local_3d0;
  char local_3c8;
  code *local_3c0;
  char local_3b8;
  code *local_3b0;
  char local_3a8;
  code *local_3a0;
  char local_398;
  code *local_390;
  char local_388;
  code *local_380;
  char local_378;
  code *local_370;
  char local_368;
  int64_t local_360;
  char local_358;
  code *local_350;
  char local_348;
  int64_t *local_340;
  char local_338;
  int64_t *local_330;
  char local_328;
  code *local_320;
  char local_318;
  int64_t *local_310;
  char local_308;
  code *local_300;
  char local_2f8;
  int64_t local_2f0;
  char local_2e8;
  code *local_2e0;
  char local_2d8;
  code *local_2d0;
  char local_2c8;
  int64_t local_2c0;
  char local_2b8;
  void*local_2b0;
  char local_2a8;
  code *local_2a0;
  char local_298;
  code *local_290;
  char local_288;
  void*local_280;
  char local_278;
  uint32_t local_270;
  int local_26c;
  code *local_268;
  code *local_260;
  code *local_258;
  code *local_250;
  char local_248;
  code *local_240;
  char local_238;
  code *local_230;
  char local_228;
  uint64_t local_220;
  code *local_218;
  code *local_210;
  uint local_208;
  int local_204;
  uint64_t local_200;
  uint64_t local_1f8;
  uint64_t local_1f0;
  float local_1e8;
  uint32_t local_1e4;
  uint64_t local_1e0;
  double local_1d8;
  double local_1d0;
  uint64_t local_1c8;
  char local_1c0;
  code *local_1b8;
  uint64_t local_1b0;
  uint64_t local_1a8;
  uint64_t local_1a0;
  code *local_198;
  code *local_190;
  uint64_t local_188;
  uint64_t local_180;
  code *local_178;
  double local_170;
  uint64_t local_168;
  code *local_160;
  code *local_158;
  code *local_150;
  uint64_t local_148;
  int64_t *local_140;
  code *local_138;
  uint64_t local_130;
  int64_t *local_128;
  uint64_t local_120;
  uint64_t local_118;
  uint64_t local_110;
  uint64_t local_108;
  uint64_t local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  code *local_e8;
  code *local_e0;
  code *local_d8;
  int64_t *local_d0;
  int64_t *local_c8;
  code *local_c0;
  code *local_b8;
  uint64_t local_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  code *local_90;
  code *local_88;
  code *local_80;
  char local_78;
  code *local_70;
  void*local_68;
  code *local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  double local_40;
  
  plVar26 = (int64_t *)*param_3;
  local_58 = 0x0;
  local_88 = 0x0;
  local_c0 = 0x0;
  local_a8 = param_1;
  local_68 = param_2;
  local_60 = param_4;
  pvVar12 = _pthread_getspecific((void*)param_1);
  if (pvVar12 != (void *)0x0) {
    plVar26 = (int64_t *)*param_3;
    local_58 = 0x0;
    local_88 = 0x0;
    local_c0 = 0x0;
    lVar13 = FUN_00e8b990();
    if (lVar13 != 0) {
      plVar26 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4];
    }
  }
  local_58 = 0x0;
  local_88 = 0x0;
  pVar25 = 0;
  local_c0 = 0x0;
  local_1d0 = (double)(**(code **)(*plVar26 + 0x370))();
  local_620 = g_027c76c8;
  uVar37 = SUB84(local_1d0,0);
  plVar26 = (int64_t *)*local_68;
  if (g_027c76c8 != 0) {
    uVar37 = FUN_00d50b00();
  }
  local_618 = '\x01';
  ppcVar32 = &local_80;
  (**(code **)(*plVar26 + 0x88))(uVar37,&local_620);
  pcVar16 = local_80;
  uVar14 = FUN_00053ac0();
  if (pcVar16 == 0x0) {
LAB_0158c18a:
    ppcVar32 = (code **)&g_02802688;
  }
  else {
    (**(code **)(*(int64_t *)pcVar16 + 0x360))();
    uVar14 = FUN_00e85ea0();
    if ((char)uVar14 == '\0') goto LAB_0158c18a;
  }
  pcVar27 = *ppcVar32;
  if (pcVar27 == 0x0) {
    uVar37 = (uint32_t)CONCAT71((int7)((uint64_t)pcVar16 >> 8),1);
    local_40 = 0.0;
    local_58 = 0x0;
    local_88 = 0x0;
  }
  else {
    if (*(char *)(ppcVar32 + 1) == '\0') {
      uVar14 = FUN_00d50b00();
    }
    else {
      *(void*)(ppcVar32 + 1) = 0;
    }
    uVar22 = (undefined7)((uint64_t)uVar14 >> 8);
    local_40 = (double)CONCAT71(uVar22,1);
    uVar37 = 0;
    local_58 = CONCAT71(uVar22,1);
    local_88 = pcVar27;
  }
  if ((local_78 != '\0') && (local_80 != 0x0)) {
    FUN_00d50b20();
  }
  if ((local_618 != '\0') && (local_620 != 0)) {
    FUN_00d50b20();
  }
  if (local_88 == 0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  local_48 = CONCAT44(local_48._4_4_,uVar37);
  local_c0 = 0x0;
  uVar37 = FUN_00d45870();
  local_50 = CONCAT44(local_50._4_4_,uVar37);
  plVar26 = (int64_t *)*param_3;
  local_c0 = 0x0;
  pvVar12 = _pthread_getspecific(pVar25);
  if (pvVar12 != (void *)0x0) {
    plVar26 = (int64_t *)*param_3;
    local_c0 = 0x0;
    lVar13 = FUN_00e8b990();
    if (lVar13 != 0) {
      plVar26 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4];
    }
  }
  local_c0 = 0x0;
  uVar15 = (**(code **)(*plVar26 + 0x378))();
  local_b0 = (uint64_t)(int)(void*)local_50;
  uVar37 = extraout_XMM0_Da;
  pVar25 = (void*)local_50;
  if (uVar15 == local_b0) {
LAB_0158c4fc:
    lVar13 = g_027c76e8;
    plVar26 = (int64_t *)*local_68;
    if (g_027c76e8 != 0) {
      uVar37 = FUN_00d50b00();
    }
    local_600 = lVar13;
    local_5f8 = '\x01';
    ppcVar32 = &local_80;
    (**(code **)(*plVar26 + 0x88))(uVar37,&local_600);
    pcVar16 = local_80;
    uVar37 = FUN_00053ac0();
    if (pcVar16 == 0x0) {
LAB_0158c56c:
      ppcVar32 = (code **)&g_02802688;
    }
    else {
      (**(code **)(*(int64_t *)pcVar16 + 0x360))();
      cVar8 = FUN_00e85ea0();
      uVar37 = extraout_XMM0_Da_00;
      if (cVar8 == '\0') goto LAB_0158c56c;
    }
    pcVar16 = *ppcVar32;
    if (pcVar16 == local_88) {
      bVar23 = (byte)local_48 & pcVar16 != 0x0;
      pVar25 = CONCAT31((int3)((uint64_t)local_48 >> 8),bVar23);
      if (bVar23 == 1) {
        if (*(char *)(ppcVar32 + 1) != '\0') goto LAB_0158c5b3;
        uVar37 = FUN_00d50b00();
        pcVar16 = local_88;
        goto joined_r0x0158c60b;
      }
      uVar15 = (uint64_t)local_58 & 0xffffffff;
    }
    else {
      if (*(char *)(ppcVar32 + 1) == '\0') {
        if (pcVar16 != 0x0) {
          uVar37 = FUN_00d50b00();
        }
        if (local_40._0_1_ != '\0') {
          local_88 = pcVar16;
          uVar37 = FUN_00d50b20();
          pcVar16 = local_88;
        }
      }
      else {
        local_88 = pcVar16;
        if (local_40._0_1_ != '\0') {
          uVar37 = FUN_00d50b20();
          local_88 = pcVar16;
        }
LAB_0158c5b3:
        *(void*)(ppcVar32 + 1) = 0;
        pcVar16 = local_88;
      }
joined_r0x0158c60b:
      uVar15 = CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
      local_88 = pcVar16;
    }
    if ((local_78 != '\0') && (local_80 != 0x0)) {
      uVar37 = FUN_00d50b20();
    }
    if ((local_5f8 != '\0') && (local_600 != 0)) {
      uVar37 = FUN_00d50b20();
    }
    if (local_88 != 0x0) {
      local_58 = (uVar15 & 0xffffffff);
      local_c0 = 0x0;
      cVar8 = FUN_00d45ad0();
      uVar37 = extraout_XMM0_Da_01;
      if (cVar8 == '\0') {
        local_58 = (uVar15 & 0xffffffff);
        goto LAB_0158c7dd;
      }
    }
    lVar13 = g_027c76f0;
    plVar26 = (int64_t *)*local_68;
    if (g_027c76f0 != 0) {
      uVar37 = FUN_00d50b00();
    }
    local_5f0 = lVar13;
    local_5e8 = '\x01';
    ppcVar32 = &local_80;
    (**(code **)(*plVar26 + 0x88))(uVar37,&local_5f0);
    pcVar16 = local_80;
    uVar14 = FUN_00053ac0();
    if (pcVar16 == 0x0) {
LAB_0158c6cf:
      ppcVar32 = (code **)&g_02802688;
    }
    else {
      (**(code **)(*(int64_t *)pcVar16 + 0x360))();
      uVar14 = FUN_00e85ea0();
      if ((char)uVar14 == '\0') goto LAB_0158c6cf;
    }
    pcVar16 = *ppcVar32;
    cVar8 = (char)uVar15;
    if (pcVar16 == local_88) {
      if ((cVar8 == '\0') && (pcVar16 != 0x0)) {
        pcVar16 = local_88;
        if (*(char *)(ppcVar32 + 1) != '\0') goto LAB_0158c725;
        local_58 = CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
        FUN_00d50b00();
        pcVar16 = local_88;
      }
      else {
        local_58 = (uVar15 & 0xffffffff);
        pcVar16 = local_88;
      }
    }
    else if (*(char *)(ppcVar32 + 1) == '\0') {
      if (pcVar16 != 0x0) {
        uVar14 = FUN_00d50b00();
      }
      local_58 = CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
      if ((cVar8 != '\0') && (local_88 != 0x0)) {
        local_88 = pcVar16;
        FUN_00d50b20();
        pcVar16 = local_88;
      }
    }
    else {
      if ((cVar8 != '\0') && (local_88 != 0x0)) {
        local_88 = pcVar16;
        uVar14 = FUN_00d50b20();
      }
LAB_0158c725:
      *(void*)(ppcVar32 + 1) = 0;
      local_58 = CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
    }
    local_88 = pcVar16;
    if ((local_78 != '\0') && (local_80 != 0x0)) {
      FUN_00d50b20();
    }
    if ((local_5e8 != '\0') && (local_5f0 != 0)) {
      FUN_00d50b20();
    }
    if (local_88 != 0x0) {
      local_c0 = 0x0;
      cVar8 = FUN_00d45ad0();
      if (cVar8 != '\0') goto LAB_0158c7dd;
    }
    pcVar16 = FUN_00e8fc40();
    FUN_002773c0();
    (**(code **)(*(int64_t *)pcVar16 + 0x18))();
    local_c0 = pcVar16;
    pvVar12 = _pthread_getspecific(pVar25);
    if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
      pVar25 = (void*)local_c0;
    }
    FUN_0132dd40();
    pvVar12 = _pthread_getspecific(pVar25);
    if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
      pVar25 = (void*)local_c0;
    }
    local_5e0 = *param_3;
    local_5d8 = '\0';
    FUN_01327930();
    if ((local_5d8 != '\0') && (local_5e0 != 0)) {
      FUN_00d50b20();
    }
    pvVar12 = _pthread_getspecific(pVar25);
    if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
      pVar25 = (void*)local_c0;
    }
    local_1d8 = g_0240f0f0;
    uVar37 = FUN_0132dbf0();
    local_5d0 = g_027c76e0;
    plVar26 = (int64_t *)*local_68;
    if (g_027c76e0 != 0) {
      uVar37 = FUN_00d50b00();
    }
    local_5c8 = '\x01';
    ppcVar32 = &local_80;
    (**(code **)(*plVar26 + 0x88))(uVar37,&local_5d0);
    pcVar16 = local_80;
    uVar14 = FUN_00053ac0();
    if (pcVar16 == 0x0) {
LAB_0158cc1f:
      ppcVar32 = (code **)&g_02802688;
    }
    else {
      (**(code **)(*(int64_t *)pcVar16 + 0x360))();
      uVar14 = FUN_00e85ea0();
      if ((char)uVar14 == '\0') goto LAB_0158cc1f;
    }
    pcVar16 = *ppcVar32;
    if (pcVar16 == local_88) {
      if (((char)local_58 == '\0') && (pcVar16 != 0x0)) {
        pcVar16 = local_88;
        if (*(char *)(ppcVar32 + 1) != '\0') goto LAB_0158cc68;
        uVar14 = FUN_00d50b00();
        local_40 = (double)CONCAT44(local_40._4_4_,(int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
        pcVar16 = local_88;
      }
      else {
        local_40 = (double)CONCAT44(local_40._4_4_,(int)local_58);
        pcVar16 = local_88;
      }
    }
    else if (*(char *)(ppcVar32 + 1) == '\0') {
      if (pcVar16 != 0x0) {
        uVar14 = FUN_00d50b00();
      }
      local_40 = (double)CONCAT44(local_40._4_4_,(int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
      if (((char)local_58 != '\0') && (local_88 != 0x0)) {
        local_88 = pcVar16;
        FUN_00d50b20();
        pcVar16 = local_88;
      }
    }
    else {
      if (((char)local_58 != '\0') && (local_88 != 0x0)) {
        local_88 = pcVar16;
        uVar14 = FUN_00d50b20();
      }
LAB_0158cc68:
      *(void*)(ppcVar32 + 1) = 0;
      local_40 = (double)CONCAT44(local_40._4_4_,(int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
    }
    local_88 = pcVar16;
    if ((local_78 != '\0') && (local_80 != 0x0)) {
      FUN_00d50b20();
    }
    pcVar16 = local_88;
    if ((local_5c8 != '\0') && (local_5d0 != 0)) {
      FUN_00d50b20();
    }
    if (pcVar16 != 0x0) {
      local_58 = ((uint64_t)local_40 & 0xffffffff);
      local_1f8 = FUN_00d45870();
      local_58 = ((uint64_t)local_40 & 0xffffffff);
      pvVar12 = _pthread_getspecific(pVar25);
      if (pvVar12 != (void *)0x0) {
        local_58 = ((uint64_t)local_40 & 0xffffffff);
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          pVar25 = (void*)local_c0;
        }
      }
      local_58 = ((uint64_t)local_40 & 0xffffffff);
      FUN_0132dc50();
      pvVar12 = _pthread_getspecific(pVar25);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d790();
      pcVar16 = local_80;
      if ((((local_78 == '\0') && (local_80 != 0x0)) && (FUN_00d50b00(), local_78 != '\0'))
         && (local_80 != 0x0)) {
        FUN_00d50b20();
      }
      uVar10 = *(uint *)(pcVar16 + 0x30);
      pcVar27 = (int64_t)(int)uVar10;
      if ((local_b0 | (uint64_t)pcVar27) >> 0x20 == 0) {
        local_1b0 = ((uint64_t)local_50 & 0xffffffff) / (uint64_t)uVar10;
      }
      else {
        local_1b0 = (int64_t)local_b0 / (int64_t)pcVar27;
      }
      local_258 = pcVar16;
      local_260 = pcVar27;
      pvVar12 = _pthread_getspecific(uVar10);
      pVar25 = (void*)pcVar27;
      if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
        pVar25 = (void*)local_c0;
      }
      local_26c = (int)local_1b0 + 1;
      uVar37 = FUN_0132dba0();
      local_5c0 = g_027c7180;
      plVar26 = (int64_t *)*local_68;
      if (g_027c7180 != 0) {
        uVar37 = FUN_00d50b00();
      }
      local_5b8 = '\x01';
      uVar37 = (**(code **)(*plVar26 + 0x88))(uVar37,&local_5c0);
      pcVar16 = local_80;
      if (local_80 == 0x0) {
        uVar14 = 0;
        pcVar27 = 0x0;
joined_r0x0158cf41:
        if ((local_78 != '\0') && (local_80 != 0x0)) {
          uVar37 = FUN_00d50b20();
        }
      }
      else {
        if (local_78 == '\0') {
          uVar37 = FUN_00d50b00();
          uVar14 = 1;
          pcVar27 = pcVar16;
          goto joined_r0x0158cf41;
        }
        local_78 = '\0';
        uVar14 = 1;
        pcVar27 = local_80;
      }
      if ((local_5b8 != '\0') && (local_5c0 != 0)) {
        uVar37 = FUN_00d50b20();
      }
      local_660 = pcVar16;
      local_210 = pcVar27;
      if (pcVar27 == 0x0) {
LAB_0158d025:
        local_160 = 0x0;
        bVar36 = false;
        local_150 = 0x0;
        local_168 = 0;
        local_198 = 0x0;
        local_1a8 = 0;
        local_178 = 0x0;
        local_1a0 = 0;
        local_180 = 0;
        local_1b8 = 0x0;
        local_1e0 = 0;
LAB_0158d612:
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        bVar6 = true;
        local_138 = 0x0;
        local_a0 = 0x0;
        local_48 = 0x0;
        local_120 = 0;
        local_c8 = (int64_t *)0x0;
        local_108 = 0;
        local_50 = 0x0;
        local_f0 = 0;
        local_d0 = (int64_t *)0x0;
        local_f8 = 0;
        local_60 = 0x0;
        local_68 = (void*)((uint64_t)local_68 & 0xffffffff00000000);
        local_b8 = 0x0;
        local_100 = 0;
        local_e8 = 0x0;
        cVar8 = '\0';
        local_e0 = 0x0;
        local_110 = 0;
        local_d8 = 0x0;
        local_118 = 0;
        local_70 = 0x0;
        bVar5 = false;
        local_190 = 0x0;
        local_128 = (int64_t *)0x0;
        local_130 = 0;
        local_140 = (int64_t *)0x0;
        local_148 = 0;
        local_158 = 0x0;
        local_188 = 0;
LAB_0158d70f:
        bVar4 = bVar36;
        FUN_00d50b20();
      }
      else {
        local_678 = 0;
        local_680 = pcVar27;
        local_220 = uVar14;
        FUN_015985f0(uVar37,&local_680);
        pcVar16 = local_80;
        if (local_80 == 0x0) goto LAB_0158d025;
        if (local_78 == '\0') {
          FUN_00d50b00();
        }
        pvVar12 = _pthread_getspecific(pVar25);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_5b0 = pcVar16;
        local_5a8 = '\0';
        local_160 = pcVar16;
        uVar37 = FUN_0132d960();
        if ((local_5a8 != '\0') && (local_5b0 != 0x0)) {
          uVar37 = FUN_00d50b20();
        }
        lVar13 = g_027c7178;
        plVar26 = (int64_t *)*local_68;
        if (g_027c7178 != 0) {
          uVar37 = FUN_00d50b00();
        }
        local_5a0 = lVar13;
        local_598 = '\x01';
        uVar37 = (**(code **)(*plVar26 + 0x88))(uVar37,&local_5a0);
        local_1b8 = local_80;
        pcVar16 = local_80;
        if (local_80 == 0x0) {
          uVar14 = 0;
LAB_0158d13f:
          if ((local_78 != '\0') && (local_80 != 0x0)) {
            uVar37 = FUN_00d50b20();
          }
        }
        else {
          uVar22 = (undefined7)((uint64_t)plVar26 >> 8);
          if (local_78 == '\0') {
            uVar14 = CONCAT71(uVar22,1);
            uVar37 = FUN_00d50b00();
            goto LAB_0158d13f;
          }
          local_78 = '\0';
          uVar14 = CONCAT71(uVar22,1);
        }
        if ((local_598 != '\0') && (local_5a0 != 0)) {
          uVar37 = FUN_00d50b20();
        }
        local_670 = local_1b8;
        local_668 = 0;
        local_1e0 = uVar14;
        FUN_0159aa90(uVar37,&local_670);
        pcVar27 = local_80;
        uVar22 = (undefined7)((uint64_t)uVar14 >> 8);
        if (local_80 == 0x0) {
          FUN_0173b7c0();
          local_150 = local_80;
          pcVar16 = local_80;
          if (local_80 == 0x0) {
            local_150 = 0x0;
            uVar14 = 0;
          }
          else {
            uVar14 = CONCAT71(uVar22,1);
            if (((local_78 == '\0') && (FUN_00d50b00(), local_78 != '\0')) &&
               (local_80 != 0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          if (local_78 == '\0') {
            FUN_00d50b00();
          }
          local_150 = pcVar27;
          uVar14 = CONCAT71(uVar22,1);
        }
        local_168 = uVar14;
        pvVar12 = _pthread_getspecific((void*)pcVar16);
        pcVar27 = local_150;
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), pcVar27 = local_150, lVar13 != 0))
        {
          pcVar16 = local_150;
          pcVar27 = *(code **)(local_150 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
        }
        pVar25 = (void*)pcVar16;
        (**(code **)(*(int64_t *)pcVar27 + 0x3f8))();
        pvVar12 = _pthread_getspecific(pVar25);
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar25 = (void*)local_c0;
        }
        FUN_0132d900();
        pvVar12 = _pthread_getspecific(pVar25);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_590 = local_150;
        local_588 = '\0';
        uVar37 = FUN_0150bf50();
        if ((local_588 != '\0') && (local_590 != 0x0)) {
          uVar37 = FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0x0)) {
          uVar37 = FUN_00d50b20();
        }
        lVar13 = g_027c76f8;
        plVar26 = (int64_t *)*local_68;
        if (g_027c76f8 != 0) {
          uVar37 = FUN_00d50b00();
        }
        local_580 = lVar13;
        local_578 = '\x01';
        ppcVar32 = &local_80;
        uVar37 = (**(code **)(*plVar26 + 0x88))(uVar37,&local_580);
        pcVar16 = local_80;
        if ((g_026d0220 == '\0') &&
           (iVar9 = ___cxa_guard_acquire(), uVar37 = extraout_XMM0_Da_17, iVar9 != 0)) {
          g_02789148 = FUN_00d4fe50();
          g_02789130 = "GNData";
          g_02789138 = 0x28;
          g_02789140 = FUN_000378a0;
          g_02789150 = 0;
          ram_0000000002789158 = 0;
          g_02789160 = 0;
          ram_0000000002789168 = 0;
          g_02789170 = 0;
          ram_0000000002789178 = 0;
          g_02789180 = 0;
          ram_0000000002789188 = 0;
          g_02789190 = 0;
          ram_0000000002789198 = 0;
          g_027891a0 = 0;
          ram_00000000027891a8 = 0;
          g_027891b0 = 0;
          ram_00000000027891b8 = 0;
          g_027891c0 = 0;
          ram_00000000027891c8 = 0;
          g_027891d0 = 0;
          ram_00000000027891d8 = 0;
          g_027891e0 = 0;
          ram_00000000027891e8 = 0;
          g_027891f0 = 0;
          uVar37 = ___cxa_guard_release();
        }
        if (pcVar16 == 0x0) {
LAB_0158d366:
          ppcVar32 = (code **)&g_02802688;
        }
        else {
          (**(code **)(*(int64_t *)pcVar16 + 0x360))();
          cVar8 = FUN_00e85ea0();
          uVar37 = extraout_XMM0_Da_02;
          if (cVar8 == '\0') goto LAB_0158d366;
        }
        pcVar16 = *ppcVar32;
        if (pcVar16 == 0x0) {
          uVar14 = 0;
          pcVar16 = 0x0;
        }
        else {
          if (*(char *)(ppcVar32 + 1) == '\0') {
            uVar37 = FUN_00d50b00();
          }
          else {
            *(void*)(ppcVar32 + 1) = 0;
          }
          uVar14 = CONCAT71((int7)((uint64_t)ppcVar32 >> 8),1);
        }
        if ((local_78 != '\0') && (local_80 != 0x0)) {
          uVar37 = FUN_00d50b20();
        }
        if ((local_578 != '\0') && (local_580 != 0)) {
          uVar37 = FUN_00d50b20();
        }
        lVar13 = g_027c7700;
        bVar36 = true;
        local_1a8 = uVar14;
        if (pcVar16 == 0x0) {
          local_198 = 0x0;
          local_1a0 = 0;
LAB_0158d609:
          local_178 = 0x0;
          local_180 = 0;
          goto LAB_0158d612;
        }
        local_1f0 = *(uint64_t *)(pcVar16 + 0x10);
        plVar26 = (int64_t *)*local_68;
        local_198 = pcVar16;
        if (g_027c7700 != 0) {
          uVar37 = FUN_00d50b00();
        }
        local_570 = lVar13;
        local_568 = '\x01';
        ppcVar32 = &local_80;
        uVar37 = (**(code **)(*plVar26 + 0x88))(uVar37,&local_570);
        pcVar16 = local_80;
        if ((g_026d0220 == '\0') &&
           (iVar9 = ___cxa_guard_acquire(), uVar37 = extraout_XMM0_Da_18, iVar9 != 0)) {
          g_02789148 = FUN_00d4fe50();
          g_02789130 = "GNData";
          g_02789138 = 0x28;
          g_02789140 = FUN_000378a0;
          g_02789150 = 0;
          ram_0000000002789158 = 0;
          g_02789160 = 0;
          ram_0000000002789168 = 0;
          g_02789170 = 0;
          ram_0000000002789178 = 0;
          g_02789180 = 0;
          ram_0000000002789188 = 0;
          g_02789190 = 0;
          ram_0000000002789198 = 0;
          g_027891a0 = 0;
          ram_00000000027891a8 = 0;
          g_027891b0 = 0;
          ram_00000000027891b8 = 0;
          g_027891c0 = 0;
          ram_00000000027891c8 = 0;
          g_027891d0 = 0;
          ram_00000000027891d8 = 0;
          g_027891e0 = 0;
          ram_00000000027891e8 = 0;
          g_027891f0 = 0;
          uVar37 = ___cxa_guard_release();
        }
        if (pcVar16 == 0x0) {
LAB_0158d4bd:
          ppcVar32 = (code **)&g_02802688;
        }
        else {
          (**(code **)(*(int64_t *)pcVar16 + 0x360))();
          cVar8 = FUN_00e85ea0();
          uVar37 = extraout_XMM0_Da_03;
          if (cVar8 == '\0') goto LAB_0158d4bd;
        }
        pcVar16 = *ppcVar32;
        if (pcVar16 == 0x0) {
          uVar14 = 0;
          pcVar16 = 0x0;
        }
        else {
          if (*(char *)(ppcVar32 + 1) == '\0') {
            uVar37 = FUN_00d50b00();
          }
          else {
            *(void*)(ppcVar32 + 1) = 0;
          }
          uVar14 = CONCAT71((int7)((uint64_t)ppcVar32 >> 8),1);
        }
        if ((local_78 != '\0') && (local_80 != 0x0)) {
          uVar37 = FUN_00d50b20();
        }
        if ((local_568 != '\0') && (local_570 != 0)) {
          uVar37 = FUN_00d50b20();
        }
        lVar13 = g_027c7708;
        local_1a0 = uVar14;
        if (pcVar16 == 0x0) goto LAB_0158d609;
        local_640 = *(int64_t *)(pcVar16 + 0x10);
        plVar26 = (int64_t *)*local_68;
        local_178 = pcVar16;
        if (g_027c7708 != 0) {
          uVar37 = FUN_00d50b00();
        }
        local_560 = lVar13;
        local_558 = '\x01';
        ppcVar32 = &local_80;
        uVar37 = (**(code **)(*plVar26 + 0x88))(uVar37,&local_560);
        pcVar16 = local_80;
        if ((g_026d0220 == '\0') &&
           (iVar9 = ___cxa_guard_acquire(), uVar37 = extraout_XMM0_Da_19, iVar9 != 0)) {
          g_02789148 = FUN_00d4fe50();
          g_02789130 = "GNData";
          g_02789138 = 0x28;
          g_02789140 = FUN_000378a0;
          g_02789150 = 0;
          ram_0000000002789158 = 0;
          g_02789160 = 0;
          ram_0000000002789168 = 0;
          g_02789170 = 0;
          ram_0000000002789178 = 0;
          g_02789180 = 0;
          ram_0000000002789188 = 0;
          g_02789190 = 0;
          ram_0000000002789198 = 0;
          g_027891a0 = 0;
          ram_00000000027891a8 = 0;
          g_027891b0 = 0;
          ram_00000000027891b8 = 0;
          g_027891c0 = 0;
          ram_00000000027891c8 = 0;
          g_027891d0 = 0;
          ram_00000000027891d8 = 0;
          g_027891e0 = 0;
          ram_00000000027891e8 = 0;
          g_027891f0 = 0;
          uVar37 = ___cxa_guard_release();
        }
        if (pcVar16 == 0x0) {
LAB_0158d5d5:
          ppcVar32 = (code **)&g_02802688;
        }
        else {
          (**(code **)(*(int64_t *)pcVar16 + 0x360))();
          cVar8 = FUN_00e85ea0();
          uVar37 = extraout_XMM0_Da_04;
          if (cVar8 == '\0') goto LAB_0158d5d5;
        }
        pcVar16 = *ppcVar32;
        if (pcVar16 == 0x0) {
          uVar14 = 0;
          pcVar16 = 0x0;
        }
        else {
          if (*(char *)(ppcVar32 + 1) == '\0') {
            uVar37 = FUN_00d50b00();
          }
          else {
            *(void*)(ppcVar32 + 1) = 0;
          }
          uVar14 = CONCAT71((int7)((uint64_t)ppcVar32 >> 8),1);
        }
        if ((local_78 != '\0') && (local_80 != 0x0)) {
          uVar37 = FUN_00d50b20();
        }
        if ((local_558 != '\0') && (local_560 != 0)) {
          uVar37 = FUN_00d50b20();
        }
        pcVar27 = local_60;
        lVar13 = g_027c7730;
        local_180 = uVar14;
        if (pcVar16 == 0x0) goto LAB_0158d612;
        local_200 = *(uint64_t *)(pcVar16 + 0x10);
        plVar26 = *(int64_t **)local_60;
        local_190 = pcVar16;
        if (plVar26 == (int64_t *)0x0) {
          plVar26 = (int64_t *)*local_68;
          if (g_027c7730 != 0) {
            uVar37 = FUN_00d50b00();
          }
          local_4f0 = lVar13;
          local_4e8 = '\x01';
          (**(code **)(*plVar26 + 0x88))(uVar37,&local_4f0);
          local_158 = local_80;
          pcVar16 = local_80;
          if (local_80 == 0x0) {
            local_188 = 0;
            local_158 = 0x0;
LAB_0158dc72:
            if ((local_78 != '\0') && (local_80 != 0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            uVar22 = (undefined7)((uint64_t)lVar13 >> 8);
            if (local_78 == '\0') {
              FUN_00d50b00();
              local_188 = CONCAT71(uVar22,1);
              goto LAB_0158dc72;
            }
            local_78 = '\0';
            local_188 = CONCAT71(uVar22,1);
          }
          pVar25 = (void*)pcVar16;
          if ((local_4e8 != '\0') && (local_4f0 != 0)) {
            FUN_00d50b20();
          }
          lVar13 = g_027c7370;
          plVar26 = (int64_t *)*local_68;
          if (g_027c7370 != 0) {
            FUN_00d50b00();
          }
          local_4e0 = lVar13;
          local_4d8 = '\x01';
          uVar37 = (**(code **)(*plVar26 + 0x88))();
          pcVar16 = local_80;
          if (local_78 == '\0') {
            if (((local_80 != 0x0) && (uVar37 = FUN_00d50b00(), local_78 != '\0')) &&
               (local_80 != 0x0)) {
              uVar37 = FUN_00d50b20();
            }
          }
          else {
            local_78 = '\0';
          }
          if ((local_4d8 != '\0') && (local_4e0 != 0)) {
            uVar37 = FUN_00d50b20();
          }
          lVar13 = g_027c7320;
          if (pcVar16 == 0x0) goto LAB_0158ddbc;
          if (g_027c7320 != 0) {
            uVar37 = FUN_00d50b00();
          }
          local_4d0 = lVar13;
          local_4c8 = '\x01';
          ppcVar32 = &local_80;
          (**(code **)(*(int64_t *)pcVar16 + 0x88))(uVar37,&local_4d0);
          pcVar27 = local_80;
          FUN_00053ac0();
          if (pcVar27 == 0x0) {
LAB_0158dd85:
            ppcVar32 = (code **)&g_02802688;
          }
          else {
            (**(code **)(*(int64_t *)pcVar27 + 0x360))();
            cVar8 = FUN_00e85ea0();
            if (cVar8 == '\0') goto LAB_0158dd85;
          }
          pcVar27 = *ppcVar32;
          if (pcVar27 == local_88) {
            if (local_40._0_1_ == '\0') {
              if (*(char *)(ppcVar32 + 1) != '\0') goto LAB_0158dfe7;
              FUN_00d50b00();
            }
          }
          else if (*(char *)(ppcVar32 + 1) == '\0') {
            if (pcVar27 != 0x0) {
              FUN_00d50b00();
            }
            local_88 = pcVar27;
            if (local_40._0_1_ != '\0') {
              FUN_00d50b20();
            }
          }
          else {
            local_88 = pcVar27;
            if (local_40._0_1_ != '\0') {
              FUN_00d50b20();
            }
LAB_0158dfe7:
            *(void*)(ppcVar32 + 1) = 0;
          }
          if ((local_78 != '\0') && (local_80 != 0x0)) {
            FUN_00d50b20();
          }
          pcVar27 = local_88;
          if ((local_4c8 != '\0') && (local_4d0 != 0)) {
            FUN_00d50b20();
          }
          if (pcVar27 == 0x0) {
            iVar9 = -1;
          }
          else {
            iVar9 = FUN_00d45870();
          }
          lVar13 = g_027c72e0;
          if (g_027c72e0 != 0) {
            FUN_00d50b00();
          }
          local_4c0 = lVar13;
          local_4b8 = '\x01';
          ppcVar32 = &local_80;
          (**(code **)(*(int64_t *)pcVar16 + 0x88))();
          pcVar27 = local_80;
          FUN_00053ac0();
          if (pcVar27 == 0x0) {
LAB_0158e0a2:
            ppcVar32 = (code **)&g_02802688;
          }
          else {
            (**(code **)(*(int64_t *)pcVar27 + 0x360))();
            cVar8 = FUN_00e85ea0();
            if (cVar8 == '\0') goto LAB_0158e0a2;
          }
          pcVar27 = *ppcVar32;
          if (pcVar27 != local_88) {
            if (*(char *)(ppcVar32 + 1) == '\0') {
              if (pcVar27 != 0x0) {
                FUN_00d50b00();
              }
              bVar36 = local_88 != 0x0;
              local_88 = pcVar27;
              if (bVar36) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_88 != 0x0) {
                local_88 = pcVar27;
                FUN_00d50b20();
              }
              *(void*)(ppcVar32 + 1) = 0;
              local_88 = pcVar27;
            }
          }
          if ((local_78 != '\0') && (local_80 != 0x0)) {
            FUN_00d50b20();
          }
          if ((local_4b8 != '\0') && (local_4c0 != 0)) {
            FUN_00d50b20();
          }
          uVar38 = (uint32_t)CONCAT71((int7)((uint64_t)pcVar16 >> 8),1);
          cVar8 = '\x01';
          if (local_88 != 0x0) {
            cVar8 = FUN_00d45ad0();
          }
          uVar37 = FUN_00d50b20();
LAB_0158e1f3:
          local_58 = CONCAT44(local_58._4_4_,1);
          if (iVar9 + 1U < 5) {
            pVar25 = (&switchD_0158e212::switchdataD_015985d4)[iVar9 + 1U] + 0x15985d4;
            switch(iVar9) {
            case 1:
              local_58 = CONCAT44(local_58._4_4_,2);
              break;
            case 2:
              local_58 = CONCAT44(local_58._4_4_,4);
              break;
            case 3:
              local_58 = ((uint64_t)local_58._4_4_ << 0x20);
              break;
            case -1:
              local_58 = CONCAT44(local_58._4_4_,2);
              if (cVar8 != '\0') goto LAB_0158ddc0;
            }
          }
        }
        else {
          if (g_027c7730 != 0) {
            uVar37 = FUN_00d50b00();
          }
          local_550 = lVar13;
          local_548 = '\x01';
          (**(code **)(*plVar26 + 0x88))(uVar37,&local_550);
          local_158 = local_80;
          pcVar16 = local_80;
          if (local_80 == 0x0) {
            local_188 = 0;
            local_158 = 0x0;
LAB_0158d994:
            if ((local_78 != '\0') && (local_80 != 0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            uVar22 = (undefined7)((uint64_t)plVar26 >> 8);
            if (local_78 == '\0') {
              FUN_00d50b00();
              local_188 = CONCAT71(uVar22,1);
              goto LAB_0158d994;
            }
            local_78 = '\0';
            local_188 = CONCAT71(uVar22,1);
          }
          pVar25 = (void*)pcVar16;
          if ((local_548 != '\0') && (local_550 != 0)) {
            FUN_00d50b20();
          }
          lVar13 = g_027c7850;
          plVar26 = *(int64_t **)pcVar27;
          if (g_027c7850 != 0) {
            FUN_00d50b00();
          }
          local_540 = lVar13;
          local_538 = '\x01';
          uVar37 = (**(code **)(*plVar26 + 0x88))();
          pcVar16 = local_80;
          if (local_78 == '\0') {
            if (((local_80 != 0x0) && (uVar37 = FUN_00d50b00(), local_78 != '\0')) &&
               (local_80 != 0x0)) {
              uVar37 = FUN_00d50b20();
            }
          }
          else {
            local_78 = '\0';
          }
          if ((local_538 != '\0') && (local_540 != 0)) {
            uVar37 = FUN_00d50b20();
          }
          lVar13 = g_027c7370;
          if (pcVar16 != 0x0) {
            if (g_027c7370 != 0) {
              uVar37 = FUN_00d50b00();
            }
            local_530 = lVar13;
            local_528 = '\x01';
            uVar37 = (**(code **)(*(int64_t *)pcVar16 + 0x88))(uVar37,&local_530);
            pcVar27 = local_80;
            if (local_78 == '\0') {
              if (((local_80 != 0x0) && (uVar37 = FUN_00d50b00(), local_78 != '\0')) &&
                 (local_80 != 0x0)) {
                uVar37 = FUN_00d50b20();
              }
            }
            else {
              local_78 = '\0';
            }
            if ((local_528 != '\0') && (local_530 != 0)) {
              uVar37 = FUN_00d50b20();
            }
            lVar13 = g_027c7370;
            if (pcVar27 == 0x0) {
              plVar26 = (int64_t *)*local_68;
              if (g_027c7370 != 0) {
                uVar37 = FUN_00d50b00();
              }
              local_520 = lVar13;
              local_518 = '\x01';
              uVar37 = (**(code **)(*plVar26 + 0x88))(uVar37,&local_520);
              pcVar17 = local_80;
              if (local_80 == 0x0) {
LAB_0158e154:
                if ((local_78 != '\0') && (local_80 != 0x0)) {
                  uVar37 = FUN_00d50b20();
                }
              }
              else {
                if (local_78 == '\0') {
                  uVar37 = FUN_00d50b00();
                  pcVar27 = pcVar17;
                  goto LAB_0158e154;
                }
                local_78 = '\0';
                pcVar27 = local_80;
              }
              if ((local_518 != '\0') && (local_520 != 0)) {
                uVar37 = FUN_00d50b20();
              }
            }
            lVar13 = g_027c7320;
            iVar9 = -1;
            local_58 = pcVar27;
            if (pcVar27 != 0x0) {
              if (g_027c7320 != 0) {
                uVar37 = FUN_00d50b00();
              }
              local_510 = lVar13;
              local_508 = '\x01';
              ppcVar32 = &local_80;
              (**(code **)(*(int64_t *)pcVar27 + 0x88))(uVar37,&local_510);
              pcVar27 = local_80;
              FUN_00053ac0();
              if (pcVar27 == 0x0) {
LAB_0158db29:
                ppcVar32 = (code **)&g_02802688;
              }
              else {
                (**(code **)(*(int64_t *)pcVar27 + 0x360))();
                cVar8 = FUN_00e85ea0();
                if (cVar8 == '\0') goto LAB_0158db29;
              }
              pcVar17 = *ppcVar32;
              uVar22 = (undefined7)((uint64_t)pcVar27 >> 8);
              if (pcVar17 == local_88) {
                if ((local_40._0_1_ == '\0') && (pcVar17 != 0x0)) {
                  if (*(char *)(ppcVar32 + 1) == '\0') {
                    FUN_00d50b00();
                    goto LAB_0158de93;
                  }
                  goto LAB_0158de8b;
                }
                uVar37 = local_40._0_4_;
              }
              else {
                if (*(char *)(ppcVar32 + 1) == '\0') {
                  if (pcVar17 != 0x0) {
                    FUN_00d50b00();
                  }
                  uVar37 = (uint32_t)CONCAT71(uVar22,1);
                  local_88 = pcVar17;
                  if (local_40._0_1_ == '\0') goto joined_r0x0158de83;
                  FUN_00d50b20();
                }
                else {
                  local_88 = pcVar17;
                  if (local_40._0_1_ != '\0') {
                    FUN_00d50b20();
                  }
LAB_0158de8b:
                  *(void*)(ppcVar32 + 1) = 0;
                }
LAB_0158de93:
                uVar37 = (uint32_t)CONCAT71(uVar22,1);
              }
joined_r0x0158de83:
              if ((local_78 != '\0') && (local_80 != 0x0)) {
                FUN_00d50b20();
              }
              if ((local_508 != '\0') && (local_510 != 0)) {
                FUN_00d50b20();
              }
              if (local_88 == 0x0) {
                local_40 = (double)CONCAT44(local_40._4_4_,uVar37);
                local_88 = 0x0;
              }
              else {
                iVar9 = FUN_00d45870();
                local_40 = (double)CONCAT44(local_40._4_4_,uVar37);
              }
            }
            lVar13 = g_027c72e0;
            if (g_027c72e0 != 0) {
              FUN_00d50b00();
            }
            local_500 = lVar13;
            local_4f8 = '\x01';
            ppcVar32 = &local_80;
            (**(code **)(*(int64_t *)pcVar16 + 0x88))();
            pcVar27 = local_80;
            FUN_00053ac0();
            if (pcVar27 == 0x0) {
LAB_0158df4b:
              ppcVar32 = (code **)&g_02802688;
            }
            else {
              (**(code **)(*(int64_t *)pcVar27 + 0x360))();
              cVar8 = FUN_00e85ea0();
              if (cVar8 == '\0') goto LAB_0158df4b;
            }
            pcVar27 = *ppcVar32;
            uVar22 = (undefined7)((uint64_t)ppcVar32 >> 8);
            if (pcVar27 == local_88) {
              if ((local_40._0_1_ == '\0') && (pcVar27 != 0x0)) {
                pcVar27 = local_88;
                if (*(char *)(ppcVar32 + 1) != '\0') goto LAB_0158df9b;
                FUN_00d50b00();
                uVar38 = (int)CONCAT71(uVar22,1);
              }
              else {
                uVar38 = local_40._0_4_;
              }
            }
            else {
              if (*(char *)(ppcVar32 + 1) == '\0') {
                if (pcVar27 != 0x0) {
                  FUN_00d50b00();
                }
                if ((local_40._0_1_ != '\0') && (local_88 != 0x0)) {
                  local_88 = pcVar27;
                  FUN_00d50b20();
                  uVar38 = (int)CONCAT71(uVar22,1);
                  goto LAB_0158e19b;
                }
              }
              else {
                if ((local_40._0_1_ != '\0') && (local_88 != 0x0)) {
                  local_88 = pcVar27;
                  FUN_00d50b20();
                }
LAB_0158df9b:
                *(void*)(ppcVar32 + 1) = 0;
              }
              uVar38 = (int)CONCAT71(uVar22,1);
              local_88 = pcVar27;
            }
LAB_0158e19b:
            if ((local_78 != '\0') && (local_80 != 0x0)) {
              FUN_00d50b20();
            }
            if ((local_4f8 != '\0') && (local_500 != 0)) {
              FUN_00d50b20();
            }
            if (local_88 == 0x0) {
              cVar8 = '\x01';
            }
            else {
              cVar8 = FUN_00d45ad0();
            }
            if (local_58 != 0x0) {
              FUN_00d50b20();
            }
            uVar37 = FUN_00d50b20();
            goto LAB_0158e1f3;
          }
LAB_0158ddbc:
          uVar38 = local_40._0_4_;
LAB_0158ddc0:
          local_58 = CONCAT44(local_58._4_4_,1);
        }
        lVar13 = g_027c75f0;
        if (local_158 == 0x0) {
          local_1e4 = 0x800;
          local_1e8 = g_02390124;
          local_204 = 2;
          local_40 = (double)CONCAT44(local_40._4_4_,uVar38);
        }
        else {
          if (g_027c75f0 != 0) {
            uVar37 = FUN_00d50b00();
          }
          local_1e4 = 0x800;
          local_4b0 = lVar13;
          local_4a8 = '\x01';
          ppcVar32 = &local_80;
          (**(code **)(*(int64_t *)local_158 + 0x88))(uVar37,&local_4b0);
          pcVar27 = local_80;
          uVar14 = FUN_00053ac0();
          uVar37 = extraout_XMM0_Da_05;
          if (pcVar27 == 0x0) {
LAB_0158e2c2:
            ppcVar32 = (code **)&g_02802688;
          }
          else {
            (**(code **)(*(int64_t *)pcVar27 + 0x360))();
            uVar14 = FUN_00e85ea0();
            uVar37 = extraout_XMM0_Da_06;
            if ((char)uVar14 == '\0') goto LAB_0158e2c2;
          }
          pcVar17 = local_88;
          pcVar27 = *ppcVar32;
          cVar8 = (char)uVar38;
          if (pcVar27 == local_88) {
            if ((cVar8 == '\0') && (pcVar27 != 0x0)) {
              pcVar27 = local_88;
              if (*(char *)(ppcVar32 + 1) != '\0') goto LAB_0158e33c;
              uVar14 = FUN_00d50b00();
              local_40 = (double)CONCAT44(local_40._4_4_,
                                          (int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
              uVar37 = extraout_XMM0_Da_10;
            }
            else {
              local_40 = (double)CONCAT44(local_40._4_4_,uVar38);
            }
          }
          else if (*(char *)(ppcVar32 + 1) == '\0') {
            if (pcVar27 != 0x0) {
              uVar14 = FUN_00d50b00();
              uVar37 = extraout_XMM0_Da_08;
            }
            local_40 = (double)CONCAT44(local_40._4_4_,
                                        (int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
            pcVar17 = pcVar27;
            if ((cVar8 != '\0') && (local_88 != 0x0)) {
              local_88 = pcVar27;
              uVar14 = FUN_00d50b20();
              local_40 = (double)CONCAT44(local_40._4_4_,
                                          (int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
              uVar37 = extraout_XMM0_Da_09;
            }
          }
          else {
            if ((cVar8 != '\0') && (local_88 != 0x0)) {
              local_88 = pcVar27;
              uVar14 = FUN_00d50b20();
              uVar37 = extraout_XMM0_Da_07;
            }
LAB_0158e33c:
            *(void*)(ppcVar32 + 1) = 0;
            local_40 = (double)CONCAT44(local_40._4_4_,
                                        (int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
            pcVar17 = pcVar27;
          }
          if ((local_78 != '\0') && (local_80 != 0x0)) {
            uVar37 = FUN_00d50b20();
          }
          if ((local_4a8 != '\0') && (local_4b0 != 0)) {
            uVar37 = FUN_00d50b20();
          }
          if (pcVar17 == 0x0) {
            local_204 = 2;
          }
          else {
            local_148 = 0;
            local_140 = (int64_t *)0x0;
            local_130 = 0;
            local_128 = (int64_t *)0x0;
            pcVar16 = 0x0;
            local_70 = 0x0;
            local_118 = 0;
            local_d8 = 0x0;
            local_110 = 0;
            local_e0 = 0x0;
            local_98 = 0x0;
            local_e8 = 0x0;
            local_100 = 0;
            local_b8 = 0x0;
            local_60 = 0x0;
            local_f8 = 0;
            local_d0 = (int64_t *)0x0;
            local_f0 = 0;
            local_50 = 0x0;
            local_108 = 0;
            local_c8 = (int64_t *)0x0;
            local_120 = 0;
            local_48 = 0x0;
            local_138 = 0x0;
            local_88 = pcVar17;
            local_204 = FUN_00d45870();
            uVar37 = extraout_XMM0_Da_11;
          }
          lVar13 = g_027c7650;
          if (g_027c7650 != 0) {
            uVar37 = FUN_00d50b00();
          }
          local_4a0 = lVar13;
          local_498 = '\x01';
          ppcVar32 = &local_80;
          (**(code **)(*(int64_t *)local_158 + 0x88))(uVar37,&local_4a0);
          pcVar27 = local_80;
          FUN_00053ac0();
          if (pcVar27 == 0x0) {
LAB_0158e523:
            ppcVar32 = (code **)&g_02802688;
          }
          else {
            (**(code **)(*(int64_t *)pcVar27 + 0x360))();
            cVar8 = FUN_00e85ea0();
            if (cVar8 == '\0') goto LAB_0158e523;
          }
          pcVar27 = *ppcVar32;
          uVar22 = (undefined7)((uint64_t)pcVar16 >> 8);
          if (pcVar27 == pcVar17) {
            if ((local_40._0_1_ == '\0') && (pcVar27 != 0x0)) {
              pcVar27 = pcVar17;
              if (*(char *)(ppcVar32 + 1) != '\0') goto LAB_0158e569;
              FUN_00d50b00();
              uVar37 = (int)CONCAT71(uVar22,1);
            }
            else {
              uVar37 = local_40._0_4_;
            }
          }
          else {
            if (*(char *)(ppcVar32 + 1) == '\0') {
              if (pcVar27 != 0x0) {
                FUN_00d50b00();
              }
              if ((local_40._0_1_ != '\0') && (pcVar17 != 0x0)) {
                FUN_00d50b20();
                pcVar17 = pcVar27;
                uVar37 = (int)CONCAT71(uVar22,1);
                goto LAB_0158e5b2;
              }
            }
            else {
              if ((local_40._0_1_ != '\0') && (pcVar17 != 0x0)) {
                FUN_00d50b20();
              }
LAB_0158e569:
              *(void*)(ppcVar32 + 1) = 0;
            }
            pcVar17 = pcVar27;
            uVar37 = (int)CONCAT71(uVar22,1);
          }
LAB_0158e5b2:
          if ((local_78 != '\0') && (local_80 != 0x0)) {
            FUN_00d50b20();
          }
          if ((local_498 != '\0') && (local_4a0 != 0)) {
            FUN_00d50b20();
          }
          local_1e8 = g_02390124;
          local_90 = CONCAT44(local_90._4_4_,g_02390124);
          if (pcVar17 != 0x0) {
            local_148 = 0;
            local_140 = (int64_t *)0x0;
            local_130 = 0;
            local_128 = (int64_t *)0x0;
            local_40 = (double)CONCAT44(local_40._4_4_,uVar37);
            local_70 = 0x0;
            local_118 = 0;
            local_d8 = 0x0;
            local_110 = 0;
            local_e0 = 0x0;
            local_98 = 0x0;
            local_e8 = 0x0;
            local_100 = 0;
            local_b8 = 0x0;
            local_60 = 0x0;
            local_f8 = 0;
            local_d0 = (int64_t *)0x0;
            local_f0 = 0;
            local_50 = 0x0;
            local_108 = 0;
            local_c8 = (int64_t *)0x0;
            local_120 = 0;
            local_48 = 0x0;
            local_138 = 0x0;
            local_88 = pcVar17;
            uVar38 = FUN_00d459e0();
            local_90 = CONCAT44(local_90._4_4_,uVar38);
          }
          lVar13 = g_027c7648;
          if (g_027c7648 != 0) {
            FUN_00d50b00();
          }
          local_490 = lVar13;
          local_488 = '\x01';
          ppcVar32 = &local_80;
          (**(code **)(*(int64_t *)local_158 + 0x88))();
          pcVar16 = local_80;
          uVar14 = FUN_00053ac0();
          if (pcVar16 == 0x0) {
LAB_0158e758:
            ppcVar32 = (code **)&g_02802688;
          }
          else {
            (**(code **)(*(int64_t *)pcVar16 + 0x360))();
            uVar14 = FUN_00e85ea0();
            if ((char)uVar14 == '\0') goto LAB_0158e758;
          }
          pcVar16 = *ppcVar32;
          cVar8 = (char)uVar37;
          if (pcVar16 == pcVar17) {
            if ((cVar8 == '\0') && (pcVar16 != 0x0)) {
              pcVar16 = pcVar17;
              if (*(char *)(ppcVar32 + 1) != '\0') goto LAB_0158e79c;
              uVar14 = FUN_00d50b00();
              local_40 = (double)CONCAT44(local_40._4_4_,
                                          (int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
            }
            else {
              local_40 = (double)CONCAT44(local_40._4_4_,uVar37);
              pcVar16 = pcVar17;
            }
          }
          else if (*(char *)(ppcVar32 + 1) == '\0') {
            if (pcVar16 != 0x0) {
              uVar14 = FUN_00d50b00();
            }
            local_40 = (double)CONCAT44(local_40._4_4_,
                                        (int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
            if ((cVar8 != '\0') && (pcVar17 != 0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if ((cVar8 != '\0') && (pcVar17 != 0x0)) {
              uVar14 = FUN_00d50b20();
            }
LAB_0158e79c:
            *(void*)(ppcVar32 + 1) = 0;
            local_40 = (double)CONCAT44(local_40._4_4_,
                                        (int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
          }
          if ((local_78 != '\0') && (local_80 != 0x0)) {
            FUN_00d50b20();
          }
          if ((local_488 != '\0') && (local_490 != 0)) {
            FUN_00d50b20();
          }
          if (local_90._0_4_ <= local_1e8) {
            local_1e8 = local_90._0_4_;
          }
          local_88 = pcVar16;
          if (pcVar16 != 0x0) {
            local_148 = 0;
            local_140 = (int64_t *)0x0;
            local_130 = 0;
            local_128 = (int64_t *)0x0;
            local_70 = 0x0;
            local_118 = 0;
            local_d8 = 0x0;
            local_110 = 0;
            local_e0 = 0x0;
            local_98 = 0x0;
            local_e8 = 0x0;
            local_100 = 0;
            local_b8 = 0x0;
            local_60 = 0x0;
            local_f8 = 0;
            local_d0 = (int64_t *)0x0;
            local_f0 = 0;
            local_50 = 0x0;
            local_108 = 0;
            local_c8 = (int64_t *)0x0;
            local_120 = 0;
            local_48 = 0x0;
            local_138 = 0x0;
            iVar9 = FUN_00d45870();
            local_88 = pcVar16;
            if (2999 < iVar9) {
              local_1e4 = 0x1000;
            }
          }
        }
        local_148 = 0;
        local_140 = (int64_t *)0x0;
        local_130 = 0;
        local_128 = (int64_t *)0x0;
        local_70 = 0x0;
        local_118 = 0;
        local_d8 = 0x0;
        local_110 = 0;
        local_e0 = 0x0;
        local_98 = 0x0;
        local_e8 = 0x0;
        local_100 = 0;
        local_b8 = 0x0;
        local_60 = 0x0;
        local_f8 = 0;
        local_d0 = (int64_t *)0x0;
        local_f0 = 0;
        local_50 = 0x0;
        local_108 = 0;
        local_c8 = (int64_t *)0x0;
        local_120 = 0;
        local_48 = 0x0;
        local_138 = 0x0;
        pvVar12 = _pthread_getspecific(pVar25);
        if (pvVar12 != (void *)0x0) {
          local_148 = 0;
          local_140 = (int64_t *)0x0;
          local_130 = 0;
          local_128 = (int64_t *)0x0;
          local_70 = 0x0;
          local_118 = 0;
          local_d8 = 0x0;
          local_110 = 0;
          local_e0 = 0x0;
          local_98 = 0x0;
          local_e8 = 0x0;
          local_100 = 0;
          local_b8 = 0x0;
          local_60 = 0x0;
          local_f8 = 0;
          local_d0 = (int64_t *)0x0;
          local_f0 = 0;
          local_50 = 0x0;
          local_108 = 0;
          local_c8 = (int64_t *)0x0;
          local_120 = 0;
          local_48 = 0x0;
          local_138 = 0x0;
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            pVar25 = (void*)local_c0;
          }
        }
        FUN_0141ae70();
        local_250 = local_80;
        local_248 = 0;
        if (local_78 == '\0') {
          if (local_80 != 0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_248 = '\x01';
        FUN_0134a480();
        if ((local_248 != '\0') && (local_250 != 0x0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0x0)) {
          FUN_00d50b20();
        }
        local_148 = 0;
        local_140 = (int64_t *)0x0;
        local_130 = 0;
        local_128 = (int64_t *)0x0;
        local_70 = 0x0;
        local_118 = 0;
        local_d8 = 0x0;
        local_110 = 0;
        local_e0 = 0x0;
        local_98 = 0x0;
        local_e8 = 0x0;
        local_100 = 0;
        local_b8 = 0x0;
        local_60 = 0x0;
        local_f8 = 0;
        local_d0 = (int64_t *)0x0;
        local_f0 = 0;
        local_50 = 0x0;
        local_108 = 0;
        local_c8 = (int64_t *)0x0;
        local_120 = 0;
        local_48 = 0x0;
        local_138 = 0x0;
        pvVar12 = _pthread_getspecific(pVar25);
        if (pvVar12 != (void *)0x0) {
          local_148 = 0;
          local_140 = (int64_t *)0x0;
          local_130 = 0;
          local_128 = (int64_t *)0x0;
          local_70 = 0x0;
          local_118 = 0;
          local_d8 = 0x0;
          local_110 = 0;
          local_e0 = 0x0;
          local_98 = 0x0;
          local_e8 = 0x0;
          local_100 = 0;
          local_b8 = 0x0;
          local_60 = 0x0;
          local_f8 = 0;
          local_d0 = (int64_t *)0x0;
          local_f0 = 0;
          local_50 = 0x0;
          local_108 = 0;
          local_c8 = (int64_t *)0x0;
          local_120 = 0;
          local_48 = 0x0;
          local_138 = 0x0;
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            pVar25 = (void*)local_c0;
          }
        }
        local_148 = 0;
        local_140 = (int64_t *)0x0;
        local_130 = 0;
        local_128 = (int64_t *)0x0;
        local_70 = 0x0;
        local_118 = 0;
        local_d8 = 0x0;
        local_110 = 0;
        local_e0 = 0x0;
        local_98 = 0x0;
        local_e8 = 0x0;
        local_100 = 0;
        local_b8 = 0x0;
        local_60 = 0x0;
        local_f8 = 0;
        local_d0 = (int64_t *)0x0;
        local_f0 = 0;
        local_50 = 0x0;
        local_108 = 0;
        local_c8 = (int64_t *)0x0;
        local_120 = 0;
        local_48 = 0x0;
        local_138 = 0x0;
        iVar9 = FUN_01326de0();
        if (iVar9 == 2) {
LAB_0158f0fd:
          uVar7 = _UNK_0240f0e8;
          uVar14 = g_0240f0e0;
          if (-1 < (int)(uint)local_1f8) {
            fVar39 = (float)local_1d0 / g_0240f134;
            uVar10 = (uint)local_1f8 + 1;
            uVar15 = (uint64_t)uVar10;
            if (((uint)local_1f8 < 7) ||
               ((local_1f0 < local_200 + uVar15 * 4 && (local_200 < local_1f0 + uVar15 * 4)))) {
              uVar28 = 0;
            }
            else {
              uVar28 = (uint64_t)(uVar10 & 0xfffffff8);
              uVar30 = (uVar28 - 8 >> 3) + 1;
              uVar31 = (uint64_t)((uint)uVar30 & 3);
              if (uVar28 - 8 < 0x18) {
                lVar18 = 0;
              }
              else {
                lVar13 = -(uVar30 & 0xfffffffffffffffc);
                lVar18 = 0;
                do {
                  pfVar1 = (float *)(local_1f0 + lVar18 * 4);
                  *pfVar1 = fVar39;
                  pfVar1[1] = fVar39;
                  pfVar1[2] = fVar39;
                  pfVar1[3] = fVar39;
                  pfVar1 = (float *)(local_1f0 + 0x10 + lVar18 * 4);
                  *pfVar1 = fVar39;
                  pfVar1[1] = fVar39;
                  pfVar1[2] = fVar39;
                  pfVar1[3] = fVar39;
                  puVar21 = (void*)(local_200 + lVar18 * 4);
                  *puVar21 = uVar14;
                  puVar21[1] = uVar7;
                  puVar21 = (void*)(local_200 + 0x10 + lVar18 * 4);
                  *puVar21 = uVar14;
                  puVar21[1] = uVar7;
                  pfVar1 = (float *)(local_1f0 + 0x20 + lVar18 * 4);
                  *pfVar1 = fVar39;
                  pfVar1[1] = fVar39;
                  pfVar1[2] = fVar39;
                  pfVar1[3] = fVar39;
                  pfVar1 = (float *)(local_1f0 + 0x30 + lVar18 * 4);
                  *pfVar1 = fVar39;
                  pfVar1[1] = fVar39;
                  pfVar1[2] = fVar39;
                  pfVar1[3] = fVar39;
                  puVar21 = (void*)(local_200 + 0x20 + lVar18 * 4);
                  *puVar21 = uVar14;
                  puVar21[1] = uVar7;
                  puVar21 = (void*)(local_200 + 0x30 + lVar18 * 4);
                  *puVar21 = uVar14;
                  puVar21[1] = uVar7;
                  pfVar1 = (float *)(local_1f0 + 0x40 + lVar18 * 4);
                  *pfVar1 = fVar39;
                  pfVar1[1] = fVar39;
                  pfVar1[2] = fVar39;
                  pfVar1[3] = fVar39;
                  pfVar1 = (float *)(local_1f0 + 0x50 + lVar18 * 4);
                  *pfVar1 = fVar39;
                  pfVar1[1] = fVar39;
                  pfVar1[2] = fVar39;
                  pfVar1[3] = fVar39;
                  puVar21 = (void*)(local_200 + 0x40 + lVar18 * 4);
                  *puVar21 = uVar14;
                  puVar21[1] = uVar7;
                  puVar21 = (void*)(local_200 + 0x50 + lVar18 * 4);
                  *puVar21 = uVar14;
                  puVar21[1] = uVar7;
                  pfVar1 = (float *)(local_1f0 + 0x60 + lVar18 * 4);
                  *pfVar1 = fVar39;
                  pfVar1[1] = fVar39;
                  pfVar1[2] = fVar39;
                  pfVar1[3] = fVar39;
                  pfVar1 = (float *)(local_1f0 + 0x70 + lVar18 * 4);
                  *pfVar1 = fVar39;
                  pfVar1[1] = fVar39;
                  pfVar1[2] = fVar39;
                  pfVar1[3] = fVar39;
                  puVar21 = (void*)(local_200 + 0x60 + lVar18 * 4);
                  *puVar21 = uVar14;
                  puVar21[1] = uVar7;
                  puVar21 = (void*)(local_200 + 0x70 + lVar18 * 4);
                  *puVar21 = uVar14;
                  puVar21[1] = uVar7;
                  lVar18 = lVar18 + 0x20;
                  lVar13 = lVar13 + 4;
                } while (lVar13 != 0);
              }
              uVar7 = _UNK_0240f0e8;
              uVar14 = g_0240f0e0;
              if (uVar31 != 0) {
                lVar13 = local_200 + lVar18 * 4;
                lVar18 = local_1f0 + lVar18 * 4;
                lVar19 = 0;
                do {
                  pfVar1 = (float *)(lVar18 + lVar19);
                  *pfVar1 = fVar39;
                  pfVar1[1] = fVar39;
                  pfVar1[2] = fVar39;
                  pfVar1[3] = fVar39;
                  pfVar1 = (float *)(lVar18 + 0x10 + lVar19);
                  *pfVar1 = fVar39;
                  pfVar1[1] = fVar39;
                  pfVar1[2] = fVar39;
                  pfVar1[3] = fVar39;
                  puVar21 = (void*)(lVar13 + lVar19);
                  *puVar21 = uVar14;
                  puVar21[1] = uVar7;
                  puVar21 = (void*)(lVar13 + 0x10 + lVar19);
                  *puVar21 = uVar14;
                  puVar21[1] = uVar7;
                  lVar19 = lVar19 + 0x20;
                } while (uVar31 << 5 != lVar19);
              }
              if (uVar28 == uVar15) goto LAB_0158f2eb;
            }
            uVar30 = ~uVar28;
            uVar31 = uVar15 & 3;
            if ((uVar10 & 3) != 0) {
              do {
                *(float *)(local_1f0 + uVar28 * 4) = fVar39;
                *(void*)(local_200 + uVar28 * 4) = 0xb58637bd;
                uVar28 = uVar28 + 1;
                uVar31 = uVar31 - 1;
              } while (uVar31 != 0);
            }
            if (2 < uVar30 + uVar15) {
              do {
                *(float *)(local_1f0 + uVar28 * 4) = fVar39;
                *(void*)(local_200 + uVar28 * 4) = 0xb58637bd;
                *(float *)(local_1f0 + 4 + uVar28 * 4) = fVar39;
                *(void*)(local_200 + 4 + uVar28 * 4) = 0xb58637bd;
                *(float *)(local_1f0 + 8 + uVar28 * 4) = fVar39;
                *(void*)(local_200 + 8 + uVar28 * 4) = 0xb58637bd;
                *(float *)(local_1f0 + 0xc + uVar28 * 4) = fVar39;
                *(void*)(local_200 + 0xc + uVar28 * 4) = 0xb58637bd;
                uVar28 = uVar28 + 4;
              } while (uVar15 != uVar28);
            }
          }
        }
        else {
          local_148 = 0;
          local_140 = (int64_t *)0x0;
          local_130 = 0;
          local_128 = (int64_t *)0x0;
          local_70 = 0x0;
          local_118 = 0;
          local_d8 = 0x0;
          local_110 = 0;
          local_e0 = 0x0;
          local_98 = 0x0;
          local_e8 = 0x0;
          local_100 = 0;
          local_b8 = 0x0;
          local_60 = 0x0;
          local_f8 = 0;
          local_d0 = (int64_t *)0x0;
          local_f0 = 0;
          local_50 = 0x0;
          local_108 = 0;
          local_c8 = (int64_t *)0x0;
          local_120 = 0;
          local_48 = 0x0;
          local_138 = 0x0;
          pvVar12 = _pthread_getspecific(pVar25);
          if (pvVar12 != (void *)0x0) {
            local_148 = 0;
            local_140 = (int64_t *)0x0;
            local_130 = 0;
            local_128 = (int64_t *)0x0;
            local_70 = 0x0;
            local_118 = 0;
            local_d8 = 0x0;
            local_110 = 0;
            local_e0 = 0x0;
            local_98 = 0x0;
            local_e8 = 0x0;
            local_100 = 0;
            local_b8 = 0x0;
            local_60 = 0x0;
            local_f8 = 0;
            local_d0 = (int64_t *)0x0;
            local_f0 = 0;
            local_50 = 0x0;
            local_108 = 0;
            local_c8 = (int64_t *)0x0;
            local_120 = 0;
            local_48 = 0x0;
            local_138 = 0x0;
            FUN_00e8b990();
          }
          local_148 = 0;
          local_140 = (int64_t *)0x0;
          local_130 = 0;
          local_128 = (int64_t *)0x0;
          local_70 = 0x0;
          local_118 = 0;
          local_d8 = 0x0;
          local_110 = 0;
          local_e0 = 0x0;
          local_98 = 0x0;
          local_e8 = 0x0;
          local_100 = 0;
          local_b8 = 0x0;
          local_60 = 0x0;
          local_f8 = 0;
          local_d0 = (int64_t *)0x0;
          local_f0 = 0;
          local_50 = 0x0;
          local_108 = 0;
          local_c8 = (int64_t *)0x0;
          local_120 = 0;
          local_48 = 0x0;
          local_138 = 0x0;
          iVar9 = FUN_01326de0();
          if (iVar9 == 4) goto LAB_0158f0fd;
        }
LAB_0158f2eb:
        lVar18 = g_027c7720;
        lVar13 = *(int64_t *)local_a8;
        if (lVar13 == 0) {
          plVar26 = (int64_t *)*local_68;
          if (g_027c7720 != 0) {
            FUN_00d50b00();
          }
          local_480 = lVar18;
          local_478 = '\x01';
          (**(code **)(*plVar26 + 0x88))();
          pcVar17 = local_80;
          pcVar27 = local_a8;
          pcVar16 = *(code **)local_a8;
          if (pcVar16 == local_80) {
            if ((local_a8[8] != (code)0x0) || (local_80 == 0x0)) goto LAB_0158f3d3;
            if (local_78 == '\0') {
              FUN_00d50b00();
              goto LAB_0158f3cf;
            }
LAB_0158f392:
            pcVar27[8] = (code)0x1;
            local_78 = '\0';
          }
          else {
            cVar2 = local_a8[8];
            if (local_78 != '\0') {
              *(code **)local_a8 = local_80;
              if ((cVar2 != (code)0x0) && (pcVar16 != 0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0158f392;
            }
            if (local_80 != 0x0) {
              FUN_00d50b00();
            }
            *(code **)local_a8 = pcVar17;
            if ((cVar2 != (code)0x0) && (pcVar16 != 0x0)) {
              FUN_00d50b20();
            }
LAB_0158f3cf:
            pcVar27[8] = (code)0x1;
LAB_0158f3d3:
            if ((local_78 != '\0') && (local_80 != 0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_478 != '\0') && (local_480 != 0)) {
            FUN_00d50b20();
          }
          lVar13 = *(int64_t *)local_a8;
        }
        if ((uint64_t)*(uint *)(lVar13 + 0xc) == 0x0) {
          local_148 = 0;
          local_140 = (int64_t *)0x0;
          local_130 = 0;
          local_128 = (int64_t *)0x0;
          local_118 = 0;
          local_d8 = 0x0;
          local_110 = 0;
          local_e0 = 0x0;
          uVar15 = 0;
          local_e8 = 0x0;
          local_100 = 0;
          local_b8 = 0x0;
          uVar37 = 0;
          local_60 = 0x0;
          local_f8 = 0;
          local_d0 = (int64_t *)0x0;
          local_f0 = 0;
          local_50 = 0x0;
          local_108 = 0;
          local_c8 = (int64_t *)0x0;
          local_120 = 0;
          local_48 = 0x0;
          local_a0 = 0x0;
          local_138 = 0x0;
LAB_0159336b:
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          bVar6 = true;
          bVar5 = false;
          local_70 = 0x0;
          local_68 = (void*)CONCAT44(local_68._4_4_,uVar37);
          local_98 = uVar15;
        }
        else {
          local_218 = (uint64_t)*(uint *)(lVar13 + 0xc);
          pcVar16 = FUN_00e8fc40();
          FUN_00d4ff40();
          local_628 = &g_02572358;
          *(void**)pcVar16 = &g_02572358;
          local_630 = g_02572370;
          (*g_02572370)();
          local_148 = 0;
          local_140 = (int64_t *)0x0;
          local_130 = 0;
          local_128 = (int64_t *)0x0;
          local_70 = 0x0;
          local_118 = 0;
          local_d8 = 0x0;
          local_110 = 0;
          local_e0 = 0x0;
          local_98 = 0x0;
          local_e8 = 0x0;
          local_100 = 0;
          local_b8 = 0x0;
          local_60 = 0x0;
          local_f8 = 0;
          local_d0 = (int64_t *)0x0;
          local_f0 = 0;
          local_50 = 0x0;
          local_108 = 0;
          local_c8 = (int64_t *)0x0;
          local_120 = 0;
          local_48 = 0x0;
          local_138 = pcVar16;
          FUN_00d21370();
          lVar13 = g_027c7450;
          if (g_027c7450 != 0) {
            FUN_00d50b00();
          }
          uVar14 = FUN_00d242c0();
          pcVar16 = local_218;
          uVar37 = extraout_XMM0_Da_12;
          if (lVar13 != 0) {
            uVar14 = FUN_00d50b20();
            uVar37 = extraout_XMM0_Da_13;
          }
          if ((int)pcVar16 < 1) {
            local_208 = (uint)CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
            local_148 = 0;
            local_140 = (int64_t *)0x0;
            local_130 = 0;
            local_128 = (int64_t *)0x0;
            local_120 = 0;
            local_48 = 0x0;
            uVar38 = local_40._0_4_;
          }
          else {
            uVar10 = (int)pcVar16 - 1;
            local_50 = (uint64_t)uVar10;
            local_208 = (uint)CONCAT71((uint7)(uint3)(uVar10 >> 8),1);
            pcVar16 = 0x0;
            local_48 = 0x0;
            uVar15 = 0;
            local_128 = (int64_t *)0x0;
            local_130 = 0;
            local_140 = (int64_t *)0x0;
            local_148 = 0;
            do {
              lVar13 = *(int64_t *)(*(int64_t *)local_a8 + 0x10);
              plVar26 = *(int64_t **)(lVar13 + (int64_t)pcVar16 * 8);
              if (local_128 == plVar26) {
                if (((char)local_130 == '\0') && (local_128 != (int64_t *)0x0)) {
                  local_130 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
                  FUN_00d50b00();
                }
              }
              else {
                if (plVar26 != (int64_t *)0x0) {
                  lVar13 = FUN_00d50b00();
                }
                if (((char)local_130 == '\0') || (local_128 == (int64_t *)0x0)) {
                  local_130 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
                  local_128 = plVar26;
                }
                else {
                  local_128 = plVar26;
                  uVar14 = FUN_00d50b20();
                  local_130 = CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
                }
              }
              pcVar27 = FUN_00e8fc40();
              FUN_010fe5f0();
              uVar14 = (**(code **)(*(int64_t *)pcVar27 + 0x18))();
              uVar22 = (undefined7)((uint64_t)uVar14 >> 8);
              if (pcVar27 == local_48) {
                if ((char)uVar15 == '\0') {
                  local_120 = CONCAT71(uVar22,1);
                  pcVar27 = local_48;
                }
                else {
                  FUN_00d50b20();
                  pcVar27 = local_48;
                  local_120 = uVar15;
                }
              }
              else {
                local_120 = CONCAT71(uVar22,1);
                if (((char)uVar15 != '\0') && (local_48 != 0x0)) {
                  FUN_00d50b20();
                }
              }
              local_78 = '\0';
              local_80 = pcVar27;
              local_48 = pcVar27;
              FUN_00d21140();
              pVar25 = (void*)pcVar27;
              if ((local_78 != '\0') && (local_80 != 0x0)) {
                FUN_00d50b20();
              }
              lVar13 = g_027c7450;
              if (g_027c7450 != 0) {
                FUN_00d50b00();
              }
              local_470 = lVar13;
              local_468 = '\x01';
              (**(code **)(*local_128 + 0x88))();
              pcVar27 = local_80;
              local_58 = pcVar16;
              uVar14 = FUN_00053ac0();
              ppcVar32 = (code **)&g_02802688;
              if (pcVar27 != 0x0) {
                (**(code **)(*(int64_t *)pcVar27 + 0x360))();
                uVar14 = FUN_00e85ea0();
                ppcVar32 = &local_80;
                if ((char)uVar14 == '\0') {
                  ppcVar32 = (code **)&g_02802688;
                }
              }
              pcVar27 = local_88;
              pcVar16 = *ppcVar32;
              uVar22 = (undefined7)((uint64_t)ppcVar32 >> 8);
              if (pcVar16 == local_88) {
                if ((local_40._0_1_ == '\0') && (pcVar16 != 0x0)) {
                  pcVar16 = local_88;
                  if (*(char *)(ppcVar32 + 1) != '\0') goto LAB_0158f7ed;
                  uVar15 = CONCAT71(uVar22,1);
                  uVar14 = FUN_00d50b00();
                }
                else {
                  uVar15 = (uint64_t)local_40 & 0xffffffff;
                }
              }
              else {
                if (*(char *)(ppcVar32 + 1) == '\0') {
                  if (pcVar16 != 0x0) {
                    uVar14 = FUN_00d50b00();
                  }
                  uVar15 = CONCAT71(uVar22,1);
                  if ((local_40._0_1_ != '\0') && (pcVar27 != 0x0)) {
                    uVar14 = FUN_00d50b20();
                    pcVar27 = pcVar16;
                    goto LAB_0158f833;
                  }
                }
                else {
                  if ((local_40._0_1_ != '\0') && (local_88 != 0x0)) {
                    uVar14 = FUN_00d50b20();
                  }
LAB_0158f7ed:
                  *(void*)(ppcVar32 + 1) = 0;
                }
                uVar15 = CONCAT71(uVar22,1);
                pcVar27 = pcVar16;
              }
LAB_0158f833:
              uVar37 = (uint32_t)uVar15;
              if ((local_78 != '\0') && (local_80 != 0x0)) {
                uVar14 = FUN_00d50b20();
              }
              if ((local_468 != '\0') && (local_470 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              local_a0 = CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
              if (pcVar27 == 0x0) {
LAB_01592f9f:
                local_40 = (double)CONCAT44(local_40._4_4_,uVar37);
LAB_015932f9:
                local_118 = 0;
                local_88 = 0x0;
                local_d8 = 0x0;
                local_110 = 0;
                local_e0 = 0x0;
                uVar15 = 0;
                local_e8 = 0x0;
                local_100 = 0;
                local_b8 = 0x0;
                uVar37 = 0;
                local_60 = 0x0;
                local_f8 = 0;
                local_d0 = (int64_t *)0x0;
                local_f0 = 0;
                local_50 = 0x0;
                local_108 = 0;
                local_c8 = (int64_t *)0x0;
                goto LAB_0159336b;
              }
              local_88 = pcVar27;
              pvVar12 = _pthread_getspecific(pVar25);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar34 = (double)FUN_00d45bc0();
              FUN_014bb250(SUB84(dVar34 * local_1d0,0));
              plVar26 = local_140;
              pcVar16 = local_58;
              if (local_58 < local_50) {
                plVar3 = *(int64_t **)
                          (*(int64_t *)(*(int64_t *)local_a8 + 0x10) + 8 + (int64_t)local_58 * 8)
                ;
                if (local_140 == plVar3) {
                  cVar8 = (char)local_148;
                  if (((char)local_148 == '\0') && (local_140 != (int64_t *)0x0)) {
                    local_148 = 0;
                    FUN_00d50b00();
                    cVar8 = '\x01';
                  }
                }
                else {
                  if (plVar3 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  cVar8 = '\x01';
                  plVar26 = plVar3;
                  if (((char)local_148 != '\0') && (local_140 != (int64_t *)0x0)) {
                    local_140 = plVar3;
                    FUN_00d50b20();
                  }
                }
                lVar13 = g_027c7450;
                local_60 = CONCAT71(local_60._1_7_,cVar8);
                if (g_027c7450 != 0) {
                  FUN_00d50b00();
                }
                local_460 = lVar13;
                local_458 = '\x01';
                (**(code **)(*plVar26 + 0x88))();
                pcVar27 = local_80;
                uVar14 = FUN_00053ac0();
                ppcVar32 = (code **)&g_02802688;
                if (pcVar27 != 0x0) {
                  (**(code **)(*(int64_t *)pcVar27 + 0x360))();
                  uVar14 = FUN_00e85ea0();
                  ppcVar32 = &local_80;
                  if ((char)uVar14 == '\0') {
                    ppcVar32 = (code **)&g_02802688;
                  }
                }
                pcVar17 = local_88;
                pcVar27 = *ppcVar32;
                cVar8 = (char)uVar15;
                if (pcVar27 == local_88) {
                  if ((cVar8 != '\0') || (pcVar27 == 0x0)) {
                    local_40 = (double)CONCAT44(local_40._4_4_,uVar37);
                    pcVar27 = local_88;
                    goto LAB_0158fa8a;
                  }
                  pcVar27 = local_88;
                  if (*(char *)(ppcVar32 + 1) != '\0') goto LAB_0158fa7f;
                  local_40 = (double)CONCAT44(local_40._4_4_,
                                              (int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
                  uVar28 = (uint64_t)local_60 & 0xff;
                  FUN_00d50b00();
                  pcVar27 = pcVar17;
                }
                else if (*(char *)(ppcVar32 + 1) == '\0') {
                  if (pcVar27 != 0x0) {
                    uVar14 = FUN_00d50b00();
                  }
                  local_40 = (double)CONCAT44(local_40._4_4_,
                                              (int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
                  uVar28 = (uint64_t)local_60 & 0xff;
                  if (cVar8 != '\0') {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (cVar8 != '\0') {
                    uVar14 = FUN_00d50b20();
                  }
LAB_0158fa7f:
                  *(void*)(ppcVar32 + 1) = 0;
                  local_40 = (double)CONCAT44(local_40._4_4_,
                                              (int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
LAB_0158fa8a:
                  uVar28 = (uint64_t)local_60 & 0xff;
                }
                if ((local_78 != '\0') && (local_80 != 0x0)) {
                  FUN_00d50b20();
                }
                if ((local_458 != '\0') && (local_460 != 0)) {
                  FUN_00d50b20();
                }
                local_148 = uVar28;
                local_140 = plVar26;
                if (pcVar27 != 0x0) {
                  uVar15 = (uint64_t)local_40 & 0xffffffff;
                  local_88 = pcVar27;
                  dVar34 = (double)FUN_00d45bc0();
                  uVar30 = (int64_t)(dVar34 * local_1d0);
                  local_148 = uVar28;
                  local_140 = plVar26;
                  goto LAB_0158fb05;
                }
                goto LAB_015932f9;
              }
              local_40 = (double)CONCAT44(local_40._4_4_,uVar37);
              uVar30 = local_b0;
LAB_0158fb05:
              lVar13 = g_027c7458;
              pVar25 = (void*)pcVar16;
              if (local_50 == local_58) {
                if (g_027c7458 != 0) {
                  FUN_00d50b00();
                }
                local_450 = lVar13;
                local_448 = '\x01';
                (**(code **)(*local_128 + 0x88))();
                pcVar16 = local_80;
                uVar28 = FUN_00053ac0();
                ppcVar32 = (code **)&g_02802688;
                if (pcVar16 != 0x0) {
                  (**(code **)(*(int64_t *)pcVar16 + 0x360))();
                  cVar8 = FUN_00e85ea0();
                  ppcVar32 = &local_80;
                  uVar15 = uVar28;
                  if (cVar8 == '\0') {
                    ppcVar32 = (code **)&g_02802688;
                  }
                }
                pcVar16 = *ppcVar32;
                uVar22 = (undefined7)(uVar15 >> 8);
                if (pcVar16 == local_88) {
                  if ((local_40._0_1_ == '\0') && (pcVar16 != 0x0)) {
                    pcVar16 = local_88;
                    if (*(char *)(ppcVar32 + 1) == '\0') {
                      FUN_00d50b00();
                      goto LAB_0158fccf;
                    }
                    goto LAB_0158fcc6;
                  }
                  uVar37 = local_40._0_4_;
                  pcVar16 = local_88;
                }
                else {
                  if (*(char *)(ppcVar32 + 1) == '\0') {
                    if (pcVar16 != 0x0) {
                      FUN_00d50b00();
                    }
                    uVar37 = (uint32_t)CONCAT71(uVar22,1);
                    if (local_40._0_1_ == '\0') goto joined_r0x0158fcbe;
                    FUN_00d50b20();
                    local_88 = pcVar16;
                  }
                  else {
                    if (local_40._0_1_ != '\0') {
                      FUN_00d50b20();
                    }
LAB_0158fcc6:
                    local_88 = pcVar16;
                    *(void*)(ppcVar32 + 1) = 0;
                  }
LAB_0158fccf:
                  uVar37 = (uint32_t)CONCAT71(uVar22,1);
                  pcVar16 = local_88;
                }
joined_r0x0158fcbe:
                local_88 = pcVar16;
                if ((local_78 != '\0') && (local_80 != 0x0)) {
                  FUN_00d50b20();
                }
                if ((local_448 != '\0') && (local_450 != 0)) {
                  FUN_00d50b20();
                }
                if (local_88 == 0x0) goto LAB_01592f9f;
                local_40 = (double)FUN_00d45bc0();
                pvVar12 = _pthread_getspecific(pVar25);
                pcVar16 = local_48;
                if ((pvVar12 != (void *)0x0) &&
                   (lVar13 = FUN_00e8b990(), pcVar16 = local_48, lVar13 != 0)) {
                  pcVar16 = *(code **)(local_48 +
                                      (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
                }
                lVar13 = (**(code **)(*(int64_t *)pcVar16 + 0x380))();
                pcVar16 = &g_02802558;
                if (((int64_t)(local_40 * local_1d0) < lVar13) ||
                   ((int64_t)uVar30 < (int64_t)(local_40 * local_1d0))) {
                  pvVar12 = _pthread_getspecific(0x2802558);
                  if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                    pcVar16 = local_48;
                  }
                  pvVar12 = _pthread_getspecific((void*)pcVar16);
                  pcVar27 = local_48;
                  if ((pvVar12 != (void *)0x0) &&
                     (lVar13 = FUN_00e8b990(), pcVar27 = local_48, lVar13 != 0)) {
                    pcVar16 = local_48;
                    pcVar27 = *(code **)(local_48 +
                                        (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
                  }
                  pVar25 = (void*)pcVar16;
                  (**(code **)(*(int64_t *)pcVar27 + 0x380))();
                  FUN_014bb2b0();
                }
                else {
                  pvVar12 = _pthread_getspecific(0x2802558);
                  if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                    pcVar16 = local_48;
                  }
                  pvVar12 = _pthread_getspecific((void*)pcVar16);
                  pcVar27 = local_48;
                  if ((pvVar12 != (void *)0x0) &&
                     (lVar13 = FUN_00e8b990(), pcVar27 = local_48, lVar13 != 0)) {
                    pcVar16 = local_48;
                    pcVar27 = *(code **)(local_48 +
                                        (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
                  }
                  pVar25 = (void*)pcVar16;
                  (**(code **)(*(int64_t *)pcVar27 + 0x380))();
                  FUN_014bb2b0();
                }
              }
              else {
                pvVar12 = _pthread_getspecific(pVar25);
                if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pcVar16 = local_48;
                }
                pvVar12 = _pthread_getspecific((void*)pcVar16);
                pcVar27 = local_48;
                if ((pvVar12 != (void *)0x0) &&
                   (lVar13 = FUN_00e8b990(), pcVar27 = local_48, lVar13 != 0)) {
                  pcVar16 = local_48;
                  pcVar27 = *(code **)(local_48 +
                                      (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
                }
                pVar25 = (void*)pcVar16;
                (**(code **)(*(int64_t *)pcVar27 + 0x380))();
                uVar37 = local_40._0_4_;
                FUN_014bb2b0();
              }
              pvVar12 = _pthread_getspecific(pVar25);
              if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                pVar25 = (void*)local_c0;
              }
              iVar9 = FUN_01326de0();
              if (iVar9 == 2) {
LAB_0158ff1f:
                pvVar12 = _pthread_getspecific(pVar25);
                if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pVar25 = (void*)local_48;
                }
                FUN_014bd3c0(g_023b7c10);
              }
              else {
                pvVar12 = _pthread_getspecific(pVar25);
                if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pVar25 = (void*)local_c0;
                }
                iVar9 = FUN_01326de0();
                lVar13 = g_027c74d8;
                if (iVar9 == 4) goto LAB_0158ff1f;
                if (g_027c74d8 != 0) {
                  FUN_00d50b00();
                }
                local_440 = lVar13;
                local_438 = '\x01';
                (**(code **)(*local_128 + 0x88))();
                pcVar16 = local_80;
                uVar14 = FUN_00053ac0();
                ppcVar32 = (code **)&g_02802688;
                if (pcVar16 != 0x0) {
                  (**(code **)(*(int64_t *)pcVar16 + 0x360))();
                  uVar14 = FUN_00e85ea0();
                  ppcVar32 = &local_80;
                  if ((char)uVar14 == '\0') {
                    ppcVar32 = (code **)&g_02802688;
                  }
                }
                pcVar27 = local_88;
                pcVar16 = *ppcVar32;
                cVar8 = (char)uVar37;
                if (pcVar16 == local_88) {
                  if ((cVar8 == '\0') && (pcVar16 != 0x0)) {
                    pcVar16 = local_88;
                    if (*(char *)(ppcVar32 + 1) != '\0') goto LAB_0159008e;
                    local_40 = (double)CONCAT44(local_40._4_4_,
                                                (int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
                    FUN_00d50b00();
                  }
                  else {
                    local_40 = (double)CONCAT44(local_40._4_4_,uVar37);
                  }
                }
                else if (*(char *)(ppcVar32 + 1) == '\0') {
                  if (pcVar16 != 0x0) {
                    uVar14 = FUN_00d50b00();
                  }
                  local_40 = (double)CONCAT44(local_40._4_4_,
                                              (int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
                  pcVar27 = pcVar16;
                  if (cVar8 != '\0') {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (cVar8 != '\0') {
                    uVar14 = FUN_00d50b20();
                  }
LAB_0159008e:
                  *(void*)(ppcVar32 + 1) = 0;
                  local_40 = (double)CONCAT44(local_40._4_4_,
                                              (int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
                  pcVar27 = pcVar16;
                }
                if ((local_78 != '\0') && (local_80 != 0x0)) {
                  FUN_00d50b20();
                }
                if ((local_438 != '\0') && (local_440 != 0)) {
                  FUN_00d50b20();
                }
                if (pcVar27 == 0x0) goto LAB_015932f9;
                local_88 = pcVar27;
                pvVar12 = _pthread_getspecific(pVar25);
                if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pVar25 = (void*)local_48;
                }
                FUN_00d459e0();
                uVar37 = local_40._0_4_;
                FUN_014bd3c0();
              }
              lVar13 = g_027c7448;
              if (g_027c7448 != 0) {
                FUN_00d50b00();
              }
              local_430 = lVar13;
              local_428 = '\x01';
              (**(code **)(*local_128 + 0x88))();
              pcVar16 = local_80;
              uVar14 = FUN_00053ac0();
              ppcVar32 = (code **)&g_02802688;
              if (pcVar16 != 0x0) {
                (**(code **)(*(int64_t *)pcVar16 + 0x360))();
                uVar14 = FUN_00e85ea0();
                ppcVar32 = &local_80;
                if ((char)uVar14 == '\0') {
                  ppcVar32 = (code **)&g_02802688;
                }
              }
              pcVar27 = local_88;
              pcVar16 = *ppcVar32;
              cVar8 = (char)uVar37;
              if (pcVar16 == local_88) {
                if ((cVar8 == '\0') && (pcVar16 != 0x0)) {
                  pcVar16 = local_88;
                  if (*(char *)(ppcVar32 + 1) != '\0') goto LAB_01590229;
                  local_40 = (double)CONCAT44(local_40._4_4_,
                                              (int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
                  FUN_00d50b00();
                }
                else {
                  local_40 = (double)CONCAT44(local_40._4_4_,uVar37);
                }
              }
              else if (*(char *)(ppcVar32 + 1) == '\0') {
                if (pcVar16 != 0x0) {
                  uVar14 = FUN_00d50b00();
                }
                local_40 = (double)CONCAT44(local_40._4_4_,
                                            (int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
                pcVar27 = pcVar16;
                if (cVar8 != '\0') {
                  FUN_00d50b20();
                }
              }
              else {
                if (cVar8 != '\0') {
                  uVar14 = FUN_00d50b20();
                }
LAB_01590229:
                *(void*)(ppcVar32 + 1) = 0;
                local_40 = (double)CONCAT44(local_40._4_4_,
                                            (int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
                pcVar27 = pcVar16;
              }
              if ((local_78 != '\0') && (local_80 != 0x0)) {
                FUN_00d50b20();
              }
              if ((local_428 != '\0') && (local_430 != 0)) {
                FUN_00d50b20();
              }
              if (pcVar27 == 0x0) goto LAB_015932f9;
              local_88 = pcVar27;
              iVar9 = FUN_00d45870();
              uVar37 = extraout_XMM0_Da_14;
              if (iVar9 == 1) {
                pvVar12 = _pthread_getspecific(pVar25);
                if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pVar25 = (void*)local_48;
                }
                uVar37 = FUN_014bc030();
              }
              lVar13 = g_027c7530;
              if (g_027c7530 != 0) {
                uVar37 = FUN_00d50b00();
              }
              local_420 = lVar13;
              local_418 = '\x01';
              (**(code **)(*local_128 + 0x88))(uVar37,&local_420);
              pcVar16 = local_80;
              uVar37 = FUN_00053ac0();
              ppcVar32 = (code **)&g_02802688;
              if (pcVar16 != 0x0) {
                (**(code **)(*(int64_t *)pcVar16 + 0x360))();
                cVar8 = FUN_00e85ea0();
                ppcVar32 = &local_80;
                uVar37 = extraout_XMM0_Da_15;
                if (cVar8 == '\0') {
                  ppcVar32 = (code **)&g_02802688;
                }
              }
              pcVar27 = local_88;
              pcVar16 = *ppcVar32;
              uVar22 = (undefined7)((uint64_t)ppcVar32 >> 8);
              if (pcVar16 == local_88) {
                if ((local_40._0_1_ == '\0') && (pcVar16 != 0x0)) {
                  pcVar16 = local_88;
                  if (*(char *)(ppcVar32 + 1) == '\0') {
                    uVar37 = FUN_00d50b00();
                    goto LAB_015903ce;
                  }
                  goto LAB_015903c6;
                }
                uVar38 = local_40._0_4_;
                pcVar16 = local_88;
              }
              else {
                if (*(char *)(ppcVar32 + 1) == '\0') {
                  if (pcVar16 != 0x0) {
                    uVar37 = FUN_00d50b00();
                  }
                  uVar38 = (uint32_t)CONCAT71(uVar22,1);
                  if (local_40._0_1_ == '\0') goto joined_r0x015903bf;
                  uVar37 = FUN_00d50b20();
                  pcVar27 = pcVar16;
                }
                else {
                  if (local_40._0_1_ != '\0') {
                    uVar37 = FUN_00d50b20();
                  }
LAB_015903c6:
                  *(void*)(ppcVar32 + 1) = 0;
                  pcVar27 = pcVar16;
                }
LAB_015903ce:
                uVar38 = (uint32_t)CONCAT71(uVar22,1);
                pcVar16 = pcVar27;
              }
joined_r0x015903bf:
              if ((local_78 != '\0') && (local_80 != 0x0)) {
                uVar37 = FUN_00d50b20();
              }
              if ((local_418 != '\0') && (local_420 != 0)) {
                uVar37 = FUN_00d50b20();
              }
              local_88 = pcVar16;
              if (pcVar16 == 0x0) {
                local_208 = 0;
              }
              else {
                pvVar12 = _pthread_getspecific(pVar25);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_00d45870();
                FUN_00e7bcc0();
                uVar37 = FUN_014bb8e0();
              }
              pcVar16 = local_58 + 1;
              uVar15 = local_120 & 0xffffffff;
              local_40 = (double)CONCAT44(local_40._4_4_,uVar38);
            } while (local_218 != pcVar16);
          }
          lVar13 = g_027c6f80;
          local_40 = (double)CONCAT44(local_40._4_4_,uVar38);
          plVar26 = (int64_t *)*local_68;
          if (g_027c6f80 != 0) {
            uVar37 = FUN_00d50b00();
          }
          local_410 = lVar13;
          local_408 = '\x01';
          (**(code **)(*plVar26 + 0x88))(uVar37,&local_410);
          pcVar16 = local_218;
          iVar9 = FUN_00c811b0();
          lVar13 = g_027c6f80;
          if (0xe < iVar9) {
            plVar26 = (int64_t *)**(void**)(*(int64_t *)local_a8 + 0x10);
            uVar37 = extraout_XMM0_Da_16;
            if (g_027c6f80 != 0) {
              uVar37 = FUN_00d50b00();
            }
            local_400 = lVar13;
            local_3f8 = '\x01';
            (**(code **)(*plVar26 + 0x88))(uVar37,&local_400);
            FUN_00c811b0();
            if ((local_1c0 != '\0') && (local_1c8 != 0x0)) {
              FUN_00d50b20();
            }
            if ((local_3f8 != '\0') && (local_400 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_78 != '\0') && (local_80 != 0x0)) {
            FUN_00d50b20();
          }
          if ((local_408 != '\0') && (local_410 != 0)) {
            FUN_00d50b20();
          }
          local_638 = g_025908a0;
          if ((int)pcVar16 < 1) {
            local_118 = 0;
            local_d8 = 0x0;
            local_110 = 0;
            local_e0 = 0x0;
            dVar34 = 0.0;
            local_e8 = 0x0;
            local_100 = 0;
            local_b8 = 0x0;
            local_b0 = 0;
            local_90 = 0x0;
            local_f8 = 0;
            local_d0 = (int64_t *)0x0;
            local_f0 = 0;
            local_58 = 0x0;
            local_108 = 0;
            local_c8 = (int64_t *)0x0;
            uVar38 = local_40._0_4_;
          }
          else {
            local_658 = (int64_t)(int)(g_0240f0f8 * local_1d0 + g_023942d0);
            local_648 = (int64_t)(int)(g_0240f100 * local_1d0 + g_023942d0);
            local_a0 = g_025dca00;
            local_650 = g_025e6278;
            local_70 = &g_025dc9e8;
            uVar28 = (uint64_t)local_40 & 0xffffffff;
            pcVar16 = 0x0;
            local_c8 = (int64_t *)0x0;
            local_108 = 0;
            local_58 = 0x0;
            local_f0 = 0;
            local_d0 = (int64_t *)0x0;
            local_f8 = 0;
            local_90 = 0x0;
            local_b0 = 0;
            local_b8 = 0x0;
            local_100 = 0;
            local_e8 = 0x0;
            dVar34 = 0.0;
            local_e0 = 0x0;
            local_110 = 0;
            local_d8 = 0x0;
            local_118 = 0;
            do {
              local_40 = (double)CONCAT44(local_40._4_4_,(int)uVar28);
              local_60 = local_90;
              local_50 = local_58;
              lVar13 = *(int64_t *)(*(int64_t *)local_a8 + 0x10);
              plVar26 = *(int64_t **)(lVar13 + (int64_t)pcVar16 * 8);
              local_68 = (void*)CONCAT44(local_68._4_4_,(int)local_b0);
              pcVar27 = pcVar16;
              if (local_128 == plVar26) {
                if (((char)local_130 == '\0') && (local_128 != (int64_t *)0x0)) {
                  local_130 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
                  FUN_00d50b00();
                }
              }
              else {
                if (plVar26 != (int64_t *)0x0) {
                  lVar13 = FUN_00d50b00();
                }
                if (((char)local_130 == '\0') || (local_128 == (int64_t *)0x0)) {
                  local_130 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
                  local_128 = plVar26;
                }
                else {
                  local_128 = plVar26;
                  uVar14 = FUN_00d50b20();
                  local_130 = CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
                }
              }
              lVar13 = *(int64_t *)(local_138 + 0x10);
              pcVar17 = *(code **)(lVar13 + (int64_t)pcVar16 * 8);
              if (local_48 == pcVar17) {
                if (((char)local_120 == '\0') && (local_48 != 0x0)) {
                  local_120 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
                  FUN_00d50b00();
                }
              }
              else {
                if (pcVar17 != 0x0) {
                  lVar13 = FUN_00d50b00();
                }
                if (((char)local_120 == '\0') || (local_48 == 0x0)) {
                  local_120 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
                  local_48 = pcVar17;
                }
                else {
                  local_48 = pcVar17;
                  uVar14 = FUN_00d50b20();
                  local_120 = CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
                }
              }
              pvVar12 = _pthread_getspecific((void*)pcVar27);
              if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                pcVar27 = local_c0;
              }
              pvVar12 = _pthread_getspecific((void*)pcVar27);
              pcVar17 = local_48;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar13 = FUN_00e8b990(), pcVar17 = local_48, lVar13 != 0)) {
                pcVar27 = local_48;
                pcVar17 = *(code **)(local_48 +
                                    (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
              }
              (**(code **)(*(int64_t *)pcVar17 + 0x380))();
              uVar37 = FUN_0132dca0();
              local_58 = CONCAT44(local_58._4_4_,uVar37);
              local_98 = pcVar16;
              pvVar12 = _pthread_getspecific((void*)pcVar27);
              if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                pcVar27 = local_c0;
              }
              pvVar12 = _pthread_getspecific((void*)pcVar27);
              pcVar16 = local_48;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar13 = FUN_00e8b990(), pcVar16 = local_48, lVar13 != 0)) {
                pcVar27 = local_48;
                pcVar16 = *(code **)(local_48 +
                                    (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
              }
              (**(code **)(*(int64_t *)pcVar16 + 0x380))();
              pvVar12 = _pthread_getspecific((void*)pcVar27);
              pcVar16 = local_48;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar13 = FUN_00e8b990(), pcVar16 = local_48, lVar13 != 0)) {
                pcVar27 = local_48;
                pcVar16 = *(code **)(local_48 +
                                    (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
              }
              (**(code **)(*(int64_t *)pcVar16 + 0x388))();
              uVar35 = (uint7)((uint64_t)dVar34 >> 8) & 0xffffff;
              iVar9 = FUN_0132dca0();
              pcVar16 = FUN_00e8fc40();
              FUN_00d4ff40();
              pcVar16[0x38] = (code)0x0;
              *(void*)(pcVar16 + 0x3c) = 0;
              *(void*)(pcVar16 + 0x40) = 0;
              *(code **)pcVar16 = local_70;
              *(int64_t *)(pcVar16 + 0x48) = 0;
              *(int64_t *)(pcVar16 + 0x50) = 0;
              (*local_a0)();
              if (pcVar16 == local_e8) {
                if (SUB81(dVar34,0) == '\0') {
                  uVar15 = CONCAT71(uVar35,1);
                  pcVar16 = local_e8;
                }
                else {
                  FUN_00d50b20();
                  uVar15 = (uint64_t)dVar34 & 0xffffffff;
                  pcVar16 = local_e8;
                }
              }
              else {
                uVar15 = CONCAT71(uVar35,1);
                if ((SUB81(dVar34,0) != '\0') && (local_e8 != 0x0)) {
                  FUN_00d50b20();
                }
              }
              local_e8 = pcVar16;
              pvVar12 = _pthread_getspecific((void*)pcVar27);
              if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                pcVar27 = local_e8;
              }
              FUN_013eb950(SUB84(g_0240f0f0,0));
              pvVar12 = _pthread_getspecific((void*)pcVar27);
              pcVar16 = local_e8;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar13 = FUN_00e8b990(), pcVar16 = local_e8, lVar13 != 0)) {
                pcVar27 = local_e8;
                pcVar16 = *(code **)(local_e8 +
                                    (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
              }
              iVar9 = iVar9 - (int)local_58;
              FUN_00c8e2b0();
              pcVar17 = local_80;
              if ((((local_78 == '\0') && (local_80 != 0x0)) &&
                  (FUN_00d50b00(), local_78 != '\0')) && (local_80 != 0x0)) {
                FUN_00d50b20();
              }
              FUN_00c92170();
              FUN_00c92160();
              local_3f0 = pcVar17;
              local_3e8 = '\x01';
              FUN_013eb890();
              if ((local_3e8 != '\0') && (local_3f0 != 0x0)) {
                FUN_00d50b20();
              }
              pvVar12 = _pthread_getspecific((void*)pcVar27);
              if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                pcVar27 = local_48;
              }
              local_3e0 = local_e8;
              local_3d8 = '\0';
              FUN_014bd2d0();
              if ((local_3d8 != '\0') && (local_3e0 != 0x0)) {
                FUN_00d50b20();
              }
              pcVar17 = FUN_00e8fc40();
              FUN_00d4ff40();
              pcVar17[0x38] = (code)0x0;
              *(void*)(pcVar17 + 0x3c) = 0;
              *(void*)(pcVar17 + 0x40) = 0;
              *(code **)pcVar17 = local_70;
              *(int64_t *)(pcVar17 + 0x48) = 0;
              *(int64_t *)(pcVar17 + 0x50) = 0;
              (*local_a0)();
              uVar28 = local_110;
              if (pcVar17 == local_e0) {
                if ((char)local_110 == '\0') {
                  uVar28 = CONCAT71((int7)(local_110 >> 8),1);
                  pcVar17 = local_e0;
                }
                else {
                  FUN_00d50b20();
                  pcVar17 = local_e0;
                }
              }
              else {
                uVar28 = CONCAT71((int7)((uint64_t)pcVar16 >> 8),1);
                if (((char)local_110 != '\0') && (local_e0 != 0x0)) {
                  FUN_00d50b20();
                }
              }
              local_e0 = pcVar17;
              local_110 = uVar28 & 0xffffffff;
              pvVar12 = _pthread_getspecific((void*)pcVar27);
              if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                pcVar27 = local_e0;
              }
              FUN_013eb950(SUB84(g_0240f0f0,0));
              pvVar12 = _pthread_getspecific((void*)pcVar27);
              pcVar16 = local_e0;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar13 = FUN_00e8b990(), pcVar16 = local_e0, lVar13 != 0)) {
                pcVar27 = local_e0;
                pcVar16 = *(code **)(local_e0 +
                                    (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
              }
              FUN_00c8e2b0();
              pcVar17 = local_80;
              if ((((local_78 == '\0') && (local_80 != 0x0)) &&
                  (FUN_00d50b00(), local_78 != '\0')) && (local_80 != 0x0)) {
                FUN_00d50b20();
              }
              FUN_00c92170();
              FUN_00c92160();
              local_3d0 = pcVar17;
              local_3c8 = '\x01';
              FUN_013eb890();
              if ((local_3c8 != '\0') && (local_3d0 != 0x0)) {
                FUN_00d50b20();
              }
              pvVar12 = _pthread_getspecific((void*)pcVar27);
              if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                pcVar27 = local_48;
              }
              local_3c0 = local_e0;
              local_3b8 = '\0';
              FUN_014bd350();
              if ((local_3b8 != '\0') && (local_3c0 != 0x0)) {
                FUN_00d50b20();
              }
              pcVar17 = FUN_00e8fc40();
              FUN_00d4ff40();
              pcVar17[0x38] = (code)0x0;
              *(void*)(pcVar17 + 0x3c) = 0;
              *(void*)(pcVar17 + 0x40) = 0;
              *(code **)pcVar17 = local_70;
              *(int64_t *)(pcVar17 + 0x48) = 0;
              *(int64_t *)(pcVar17 + 0x50) = 0;
              (*local_a0)();
              uVar28 = local_118;
              if (pcVar17 == local_d8) {
                if ((char)local_118 == '\0') {
                  uVar28 = CONCAT71((int7)(local_118 >> 8),1);
                  pcVar17 = local_d8;
                }
                else {
                  FUN_00d50b20();
                  pcVar17 = local_d8;
                }
              }
              else {
                uVar28 = CONCAT71((int7)((uint64_t)pcVar16 >> 8),1);
                if (((char)local_118 != '\0') && (local_d8 != 0x0)) {
                  FUN_00d50b20();
                }
              }
              local_d8 = pcVar17;
              local_118 = uVar28 & 0xffffffff;
              pvVar12 = _pthread_getspecific((void*)pcVar27);
              if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                pcVar27 = local_d8;
              }
              FUN_013eb950(SUB84(g_0240f0f0,0));
              pvVar12 = _pthread_getspecific((void*)pcVar27);
              if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                pcVar27 = local_d8;
              }
              FUN_00c8e2b0();
              pcVar16 = local_80;
              if ((((local_78 == '\0') && (local_80 != 0x0)) &&
                  (FUN_00d50b00(), local_78 != '\0')) && (local_80 != 0x0)) {
                FUN_00d50b20();
              }
              FUN_00c92170();
              FUN_00c92160();
              local_3b0 = pcVar16;
              local_3a8 = '\x01';
              FUN_013eb890();
              if ((local_3a8 != '\0') && (local_3b0 != 0x0)) {
                FUN_00d50b20();
              }
              pvVar12 = _pthread_getspecific((void*)pcVar27);
              if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                pcVar27 = local_48;
              }
              local_3a0 = local_d8;
              local_398 = '\0';
              FUN_014bc1d0();
              if ((local_398 != '\0') && (local_3a0 != 0x0)) {
                FUN_00d50b20();
              }
              pvVar12 = _pthread_getspecific((void*)pcVar27);
              if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                pcVar27 = local_48;
              }
              pvVar12 = _pthread_getspecific((void*)pcVar27);
              pcVar16 = local_48;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar13 = FUN_00e8b990(), pcVar16 = local_48, lVar13 != 0)) {
                pcVar27 = local_48;
                pcVar16 = *(code **)(local_48 +
                                    (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
              }
              pVar25 = (void*)pcVar27;
              (**(code **)(*(int64_t *)pcVar16 + 0x388))();
              FUN_014bcf80();
              pvVar12 = _pthread_getspecific(pVar25);
              if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                pVar25 = (void*)local_48;
              }
              FUN_014bfad0();
              plVar26 = (int64_t *)FUN_00e8fc40();
              FUN_007eeec0();
              (**(code **)(*plVar26 + 0x18))();
              pcVar16 = local_50;
              uVar28 = local_108;
              if (plVar26 == local_c8) {
                if ((char)local_108 == '\0') {
                  uVar28 = CONCAT71((int7)(local_108 >> 8),1);
                  plVar26 = local_c8;
                }
                else {
                  FUN_00d50b20();
                  plVar26 = local_c8;
                }
              }
              else {
                uVar28 = CONCAT71((uint7)(uint3)((uint)(iVar9 * 4) >> 8),1);
                if (((char)local_108 != '\0') && (local_c8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              local_c8 = plVar26;
              local_108 = uVar28 & 0xffffffff;
              pcVar27 = FUN_00115860();
              uVar14 = (**(code **)(*(int64_t *)pcVar27 + 0x18))();
              if (pcVar16 == pcVar27) {
                if (((char)local_f0 == '\0') && (pcVar27 = pcVar16, pcVar16 != 0x0))
                goto LAB_0159131c;
                if (pcVar16 == 0x0) {
                  pcVar16 = 0x0;
                }
                else {
                  FUN_00d50b20();
                }
              }
              else {
                if (((char)local_f0 != '\0') && (pcVar16 != 0x0)) {
                  uVar14 = FUN_00d50b20();
                }
LAB_0159131c:
                pcVar16 = pcVar27;
                local_f0 = CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
              }
              local_58 = pcVar16;
              local_50 = pcVar16;
              pvVar12 = _pthread_getspecific(pVar25);
              if (pvVar12 != (void *)0x0) {
                local_50 = local_58;
                FUN_00e8b990();
              }
              pcVar16 = local_58;
              local_390 = local_48;
              local_388 = '\0';
              FUN_013dd650();
              if ((local_388 != '\0') && (local_390 != 0x0)) {
                FUN_00d50b20();
              }
              local_50 = pcVar16;
              pvVar12 = _pthread_getspecific(pVar25);
              if (pvVar12 != (void *)0x0) {
                local_50 = local_58;
                lVar13 = FUN_00e8b990();
                if (lVar13 != 0) {
                  pVar25 = (void*)local_48;
                }
              }
              pcVar16 = local_58;
              local_380 = local_58;
              local_378 = '\0';
              FUN_014bc440();
              if ((local_378 != '\0') && (local_380 != 0x0)) {
                FUN_00d50b20();
              }
              local_50 = pcVar16;
              pvVar12 = _pthread_getspecific(pVar25);
              if (pvVar12 != (void *)0x0) {
                local_50 = local_58;
                lVar13 = FUN_00e8b990();
                if (lVar13 != 0) {
                  pVar25 = (void*)local_c8;
                }
              }
              pcVar27 = local_58;
              pcVar16 = local_60;
              local_370 = local_58;
              local_368 = '\0';
              uVar37 = FUN_013dfbc0();
              if ((local_368 != '\0') && (local_370 != 0x0)) {
                uVar37 = FUN_00d50b20();
              }
              if (pcVar16 != 0x0) {
                pvVar12 = _pthread_getspecific(pVar25);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013dd6a0();
                pvVar12 = _pthread_getspecific(pVar25);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar12 = _pthread_getspecific(pVar25);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013dd6a0();
                local_240 = local_1c8;
                local_238 = 0;
                if (local_1c0 == '\0') {
                  if (local_1c8 != 0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_1c0 = '\0';
                }
                local_238 = '\x01';
                FUN_014bc360();
                if ((local_238 != '\0') && (local_240 != 0x0)) {
                  FUN_00d50b20();
                }
                if ((local_1c0 != '\0') && (local_1c8 != 0x0)) {
                  FUN_00d50b20();
                }
                if ((local_78 != '\0') && (local_80 != 0x0)) {
                  FUN_00d50b20();
                }
                pvVar12 = _pthread_getspecific(pVar25);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013dd6a0();
                pvVar12 = _pthread_getspecific(pVar25);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar12 = _pthread_getspecific(pVar25);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013dd6a0();
                local_230 = local_1c8;
                local_228 = 0;
                if (local_1c0 == '\0') {
                  if (local_1c8 != 0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_1c0 = '\0';
                }
                local_228 = '\x01';
                uVar37 = FUN_014bc2e0();
                if ((local_228 != '\0') && (local_230 != 0x0)) {
                  uVar37 = FUN_00d50b20();
                }
                if ((local_1c0 != '\0') && (local_1c8 != 0x0)) {
                  uVar37 = FUN_00d50b20();
                }
                if ((local_78 != '\0') && (local_80 != 0x0)) {
                  uVar37 = FUN_00d50b20();
                }
              }
              if (pcVar16 == pcVar27) {
                if ((((char)local_f0 == '\0') || ((char)local_68 != '\0')) ||
                   (pcVar16 == 0x0)) {
                  local_b0 = (uint64_t)local_68 & 0xffffffff;
                  local_90 = pcVar16;
                }
                else {
                  local_b0 = CONCAT71((uint7)(uint3)((uint64_t)local_68 >> 8),1);
                  local_68 = (void*)((uint64_t)local_68 & 0xffffffff00000000);
                  local_50 = pcVar16;
                  uVar37 = FUN_00d50b00();
                  local_90 = pcVar16;
                }
              }
              else {
                if (((char)local_f0 != '\0') && (local_58 != 0x0)) {
                  local_50 = local_58;
                  uVar37 = FUN_00d50b00();
                }
                pcVar16 = local_58;
                local_b0 = local_f0;
                local_90 = local_58;
                if ((char)local_68 != '\0') {
                  if (local_60 != 0x0) {
                    local_60 = local_58;
                    local_50 = local_58;
                    uVar37 = FUN_00d50b20();
                    local_b0 = local_f0;
                    local_90 = pcVar16;
                  }
                }
              }
              lVar13 = g_027c79e0;
              if (g_027c79e0 != 0) {
                uVar37 = FUN_00d50b00();
              }
              local_360 = lVar13;
              local_358 = '\x01';
              (**(code **)(*local_128 + 0x98))(uVar37,&local_360);
              pcVar16 = local_80;
              uVar30 = FUN_00053ac0();
              ppcVar32 = (code **)&g_02802688;
              if (pcVar16 != 0x0) {
                (**(code **)(*(int64_t *)pcVar16 + 0x360))();
                uVar30 = FUN_00e85ea0();
                ppcVar32 = &local_80;
                if ((char)uVar30 == '\0') {
                  ppcVar32 = (code **)&g_02802688;
                }
              }
              pcVar17 = local_88;
              pcVar16 = *ppcVar32;
              uVar22 = (undefined7)((uint64_t)pcVar27 >> 8);
              if (pcVar16 == local_88) {
                if ((local_40._0_1_ == '\0') && (pcVar16 != 0x0)) {
                  pcVar16 = local_88;
                  if (*(char *)(ppcVar32 + 1) != '\0') goto LAB_01591915;
                  uVar28 = CONCAT71(uVar22,1);
                  uVar30 = FUN_00d50b00();
                }
                else {
                  uVar30 = (uint64_t)local_40 & 0xffffffff;
                  uVar28 = (uint64_t)local_40 & 0xffffffff;
                }
              }
              else {
                if (*(char *)(ppcVar32 + 1) == '\0') {
                  if (pcVar16 != 0x0) {
                    uVar30 = FUN_00d50b00();
                  }
                  uVar28 = CONCAT71(uVar22,1);
                  if ((local_40._0_1_ != '\0') && (pcVar17 != 0x0)) {
                    uVar30 = FUN_00d50b20();
                    pcVar17 = pcVar16;
                    goto LAB_01591964;
                  }
                }
                else {
                  if ((local_40._0_1_ != '\0') && (local_88 != 0x0)) {
                    uVar30 = FUN_00d50b20();
                  }
LAB_01591915:
                  *(void*)(ppcVar32 + 1) = 0;
                }
                uVar28 = CONCAT71(uVar22,1);
                pcVar17 = pcVar16;
              }
LAB_01591964:
              uVar38 = (uint32_t)uVar28;
              if ((local_78 != '\0') && (local_80 != 0x0)) {
                uVar30 = FUN_00d50b20();
              }
              if ((local_358 != '\0') && (local_360 != 0)) {
                uVar30 = FUN_00d50b20();
              }
              uVar37 = (uint32_t)local_b0;
              if (pcVar17 == 0x0) {
                local_a0 = CONCAT71((int7)(uVar30 >> 8),1);
                local_40 = (double)CONCAT44(local_40._4_4_,uVar38);
                local_88 = 0x0;
                local_50 = local_58;
                local_60 = local_90;
                goto LAB_0159336b;
              }
              local_60 = local_90;
              local_50 = local_58;
              local_88 = pcVar17;
              local_40._0_4_ = uVar38;
              local_68._0_4_ = uVar37;
              local_170 = (double)FUN_00d45bc0();
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              pvVar12 = _pthread_getspecific(pVar25);
              pcVar16 = local_48;
              if (pvVar12 != (void *)0x0) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                lVar13 = FUN_00e8b990();
                pcVar16 = local_48;
                if (lVar13 != 0) {
                  pcVar16 = *(code **)(local_48 +
                                      (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
                }
              }
              local_40 = (double)CONCAT44(local_40._4_4_,uVar38);
              local_68 = (void*)CONCAT44(local_68._4_4_,(int)local_b0);
              local_60 = local_90;
              local_50 = local_58;
              lVar13 = (**(code **)(*(int64_t *)pcVar16 + 0x380))();
              lVar13 = (int64_t)(local_170 * local_1d0) - lVar13;
              if (local_658 < lVar13) {
                lVar13 = local_658;
              }
              pcVar16 = FUN_00e8fc40();
              FUN_007ef480();
              pVar25 = 0x25e6250;
              *(void**)pcVar16 = &g_025e6260;
              *(void**)(pcVar16 + 0x38) = &g_025e66c0;
              *(int64_t *)(pcVar16 + 0xe0) = 0;
              *(int64_t *)(pcVar16 + 200) = 0;
              *(int64_t *)(pcVar16 + 0xd0) = 0;
              *(void*)(pcVar16 + 0xd8) = 0;
              (*local_650)();
              uVar30 = local_100;
              local_170 = (double)uVar15;
              if (pcVar16 == local_b8) {
                if ((char)local_100 == '\0') {
                  uVar30 = CONCAT71((int7)(local_100 >> 8),1);
                  pcVar16 = local_b8;
                }
                else {
                  FUN_00d50b20();
                  pcVar16 = local_b8;
                }
              }
              else {
                uVar30 = CONCAT71((int7)(uVar15 >> 8),1);
                if (((char)local_100 != '\0') && (local_b8 != 0x0)) {
                  FUN_00d50b20();
                }
              }
              local_b8 = pcVar16;
              dVar34 = local_170;
              local_100 = uVar30 & 0xffffffff;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              local_68._0_4_ = (int)local_b0;
              pvVar12 = _pthread_getspecific(pVar25);
              if (pvVar12 != (void *)0x0) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                FUN_00e8b990();
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              lVar18 = local_648;
              local_40._0_4_ = uVar38;
              FUN_014bad20(local_648,lVar13);
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              pVar25 = (void*)lVar18;
              local_40._0_4_ = uVar38;
              pvVar12 = _pthread_getspecific(pVar25);
              if (pvVar12 != (void *)0x0) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                lVar13 = FUN_00e8b990();
                if (lVar13 != 0) {
                  pVar25 = (void*)local_b8;
                }
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              FUN_014bae10(g_0239011c);
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              pvVar12 = _pthread_getspecific(pVar25);
              if (pvVar12 != (void *)0x0) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                lVar13 = FUN_00e8b990();
                if (lVar13 != 0) {
                  pVar25 = (void*)local_48;
                }
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              uVar15 = FUN_014bb920();
              if (uVar15 >> 0x20 != 0) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                pvVar12 = _pthread_getspecific(pVar25);
                if (pvVar12 != (void *)0x0) {
                  local_68._0_4_ = (uint32_t)local_b0;
                  local_60 = local_90;
                  local_50 = local_58;
                  local_40._0_4_ = uVar38;
                  lVar13 = FUN_00e8b990();
                  if (lVar13 != 0) {
                    pVar25 = (void*)local_b8;
                  }
                }
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                pvVar12 = _pthread_getspecific(pVar25);
                if (pvVar12 != (void *)0x0) {
                  local_68._0_4_ = (uint32_t)local_b0;
                  local_60 = local_90;
                  local_50 = local_58;
                  local_40._0_4_ = uVar38;
                  FUN_00e8b990();
                }
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                FUN_014bb920();
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                pcVar16 = local_58;
                local_40._0_4_ = uVar38;
                FUN_014bb8e0();
                pVar25 = (void*)pcVar16;
              }
              plVar26 = (int64_t *)FUN_00115860();
              uVar14 = (**(code **)(*plVar26 + 0x18))();
              if (local_d0 == plVar26) {
                if (((char)local_f8 == '\0') && (plVar26 = local_d0, local_d0 != (int64_t *)0x0))
                goto LAB_01591f48;
                if (local_d0 == (int64_t *)0x0) {
                  local_d0 = (int64_t *)0x0;
                }
                else {
                  FUN_00d50b20();
                }
              }
              else {
                if (((char)local_f8 != '\0') && (local_d0 != (int64_t *)0x0)) {
                  uVar14 = FUN_00d50b20();
                }
LAB_01591f48:
                local_d0 = plVar26;
                local_f8 = CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              pvVar12 = _pthread_getspecific(pVar25);
              if (pvVar12 != (void *)0x0) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                lVar13 = FUN_00e8b990();
                if (lVar13 != 0) {
                  pVar25 = (void*)local_d0;
                }
              }
              local_350 = local_b8;
              local_348 = '\0';
              FUN_013dd650();
              if ((local_348 != '\0') && (local_350 != 0x0)) {
                FUN_00d50b20();
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              pvVar12 = _pthread_getspecific(pVar25);
              if (pvVar12 != (void *)0x0) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                lVar13 = FUN_00e8b990();
                if (lVar13 != 0) {
                  pVar25 = (void*)local_b8;
                }
              }
              local_340 = local_d0;
              local_338 = '\0';
              FUN_014bc440();
              if ((local_338 != '\0') && (local_340 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              pvVar12 = _pthread_getspecific(pVar25);
              pcVar16 = local_b8;
              if (pvVar12 != (void *)0x0) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                lVar13 = FUN_00e8b990();
                pcVar16 = local_b8;
                if (lVar13 != 0) {
                  pcVar16 = *(code **)(local_b8 +
                                      (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
                }
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              pcVar27 = local_58;
              local_40._0_4_ = uVar38;
              lVar13 = (**(code **)(*(int64_t *)pcVar16 + 0x380))();
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              pvVar12 = _pthread_getspecific((void*)pcVar27);
              pcVar16 = local_48;
              if (pvVar12 != (void *)0x0) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                lVar18 = FUN_00e8b990();
                pcVar16 = local_48;
                if (lVar18 != 0) {
                  pcVar16 = *(code **)(local_48 +
                                      (uint64_t)(*(uint *)(lVar18 + 0x154) & 1) * 8 + 0x20);
                }
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              pcVar27 = local_58;
              local_40._0_4_ = uVar38;
              lVar18 = (**(code **)(*(int64_t *)pcVar16 + 0x380))();
              pVar25 = (void*)pcVar27;
              if (lVar13 < lVar18) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                pvVar12 = _pthread_getspecific(pVar25);
                if (pvVar12 != (void *)0x0) {
                  local_68._0_4_ = (uint32_t)local_b0;
                  local_60 = local_90;
                  local_50 = local_58;
                  local_40._0_4_ = uVar38;
                  lVar13 = FUN_00e8b990();
                  if (lVar13 != 0) {
                    pVar25 = (void*)local_b8;
                  }
                }
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                pvVar12 = _pthread_getspecific(pVar25);
                pcVar16 = local_48;
                if (pvVar12 != (void *)0x0) {
                  local_68._0_4_ = (uint32_t)local_b0;
                  local_60 = local_90;
                  local_50 = local_58;
                  local_40._0_4_ = uVar38;
                  lVar13 = FUN_00e8b990();
                  pcVar16 = local_48;
                  if (lVar13 != 0) {
                    pcVar16 = *(code **)(local_48 +
                                        (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
                  }
                }
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                (**(code **)(*(int64_t *)pcVar16 + 0x380))();
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                pcVar16 = local_58;
                local_40._0_4_ = uVar38;
                FUN_014bad80();
                pVar25 = (void*)pcVar16;
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              pvVar12 = _pthread_getspecific(pVar25);
              pcVar16 = local_b8;
              if (pvVar12 != (void *)0x0) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                lVar13 = FUN_00e8b990();
                pcVar16 = local_b8;
                if (lVar13 != 0) {
                  pcVar16 = *(code **)(local_b8 +
                                      (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
                }
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              pcVar27 = local_58;
              local_40._0_4_ = uVar38;
              lVar13 = (**(code **)(*(int64_t *)pcVar16 + 0x380))();
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              pvVar12 = _pthread_getspecific((void*)pcVar27);
              pcVar16 = local_b8;
              if (pvVar12 != (void *)0x0) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                lVar18 = FUN_00e8b990();
                pcVar16 = local_b8;
                if (lVar18 != 0) {
                  pcVar16 = *(code **)(local_b8 +
                                      (uint64_t)(*(uint *)(lVar18 + 0x154) & 1) * 8 + 0x20);
                }
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              pcVar27 = local_58;
              local_40._0_4_ = uVar38;
              lVar18 = (**(code **)(*(int64_t *)pcVar16 + 0x388))();
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              pvVar12 = _pthread_getspecific((void*)pcVar27);
              pcVar16 = local_48;
              if (pvVar12 != (void *)0x0) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                lVar19 = FUN_00e8b990();
                pcVar16 = local_48;
                if (lVar19 != 0) {
                  pcVar16 = *(code **)(local_48 +
                                      (uint64_t)(*(uint *)(lVar19 + 0x154) & 1) * 8 + 0x20);
                }
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              pcVar27 = local_58;
              local_40._0_4_ = uVar38;
              lVar19 = (**(code **)(*(int64_t *)pcVar16 + 0x380))();
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              pvVar12 = _pthread_getspecific((void*)pcVar27);
              pcVar16 = local_48;
              if (pvVar12 != (void *)0x0) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                lVar20 = FUN_00e8b990();
                pcVar16 = local_48;
                if (lVar20 != 0) {
                  pcVar16 = *(code **)(local_48 +
                                      (uint64_t)(*(uint *)(lVar20 + 0x154) & 1) * 8 + 0x20);
                }
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              pcVar27 = local_58;
              local_40._0_4_ = uVar38;
              lVar20 = (**(code **)(*(int64_t *)pcVar16 + 0x388))();
              pVar25 = (void*)pcVar27;
              if (lVar20 + lVar19 < lVar18 + lVar13) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                pvVar12 = _pthread_getspecific(pVar25);
                if (pvVar12 != (void *)0x0) {
                  local_68._0_4_ = (uint32_t)local_b0;
                  local_60 = local_90;
                  local_50 = local_58;
                  local_40._0_4_ = uVar38;
                  lVar13 = FUN_00e8b990();
                  if (lVar13 != 0) {
                    pcVar27 = local_b8;
                  }
                }
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                pvVar12 = _pthread_getspecific((void*)pcVar27);
                pcVar16 = local_48;
                if (pvVar12 != (void *)0x0) {
                  local_68._0_4_ = (uint32_t)local_b0;
                  local_60 = local_90;
                  local_50 = local_58;
                  local_40._0_4_ = uVar38;
                  lVar13 = FUN_00e8b990();
                  pcVar16 = local_48;
                  if (lVar13 != 0) {
                    pcVar16 = *(code **)(local_48 +
                                        (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
                  }
                }
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                pcVar27 = local_58;
                local_40._0_4_ = uVar38;
                (**(code **)(*(int64_t *)pcVar16 + 0x380))();
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                pvVar12 = _pthread_getspecific((void*)pcVar27);
                pcVar16 = local_48;
                if (pvVar12 != (void *)0x0) {
                  local_68._0_4_ = (uint32_t)local_b0;
                  local_60 = local_90;
                  local_50 = local_58;
                  local_40._0_4_ = uVar38;
                  lVar13 = FUN_00e8b990();
                  pcVar16 = local_48;
                  if (lVar13 != 0) {
                    pcVar16 = *(code **)(local_48 +
                                        (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
                  }
                }
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                pcVar27 = local_58;
                local_40._0_4_ = uVar38;
                (**(code **)(*(int64_t *)pcVar16 + 0x388))();
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                pvVar12 = _pthread_getspecific((void*)pcVar27);
                pcVar16 = local_b8;
                if (pvVar12 != (void *)0x0) {
                  local_68._0_4_ = (uint32_t)local_b0;
                  local_60 = local_90;
                  local_50 = local_58;
                  local_40._0_4_ = uVar38;
                  lVar13 = FUN_00e8b990();
                  pcVar16 = local_b8;
                  if (lVar13 != 0) {
                    pcVar16 = *(code **)(local_b8 +
                                        (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
                  }
                }
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                (**(code **)(*(int64_t *)pcVar16 + 0x380))();
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                pcVar16 = local_58;
                local_40._0_4_ = uVar38;
                FUN_014bb2b0();
                pVar25 = (void*)pcVar16;
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              pvVar12 = _pthread_getspecific(pVar25);
              pcVar16 = local_b8;
              if (pvVar12 != (void *)0x0) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                lVar13 = FUN_00e8b990();
                pcVar16 = local_b8;
                if (lVar13 != 0) {
                  pcVar16 = *(code **)(local_b8 +
                                      (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
                }
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              pcVar27 = local_58;
              local_40._0_4_ = uVar38;
              iVar9 = (**(code **)(*(int64_t *)pcVar16 + 0x3a0))();
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              pVar25 = (void*)pcVar27;
              local_40._0_4_ = uVar38;
              pvVar12 = _pthread_getspecific(pVar25);
              if (pvVar12 != (void *)0x0) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                lVar13 = FUN_00e8b990();
                if (lVar13 != 0) {
                  pVar25 = (void*)local_c8;
                }
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              iVar11 = FUN_013de650();
              uVar15 = (uint64_t)(uint)(iVar9 - iVar11);
              if (iVar9 - iVar11 < 1) {
                uVar15 = 0;
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              pvVar12 = _pthread_getspecific(pVar25);
              pcVar16 = local_48;
              if (pvVar12 != (void *)0x0) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                lVar13 = FUN_00e8b990();
                pcVar16 = local_48;
                if (lVar13 != 0) {
                  pcVar16 = *(code **)(local_48 +
                                      (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
                }
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              pcVar27 = local_58;
              local_40._0_4_ = uVar38;
              lVar13 = (**(code **)(*(int64_t *)pcVar16 + 0x388))();
              pVar25 = (void*)pcVar27;
              if (lVar13 < (int64_t)uVar15) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                FUN_00e828a0();
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              pvVar12 = _pthread_getspecific(pVar25);
              if (pvVar12 != (void *)0x0) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                lVar13 = FUN_00e8b990();
                if (lVar13 != 0) {
                  pVar25 = (void*)local_48;
                }
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              FUN_014bcf30();
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              pvVar12 = _pthread_getspecific(pVar25);
              if (pvVar12 != (void *)0x0) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                lVar13 = FUN_00e8b990();
                if (lVar13 != 0) {
                  pVar25 = (void*)local_c8;
                }
              }
              local_330 = local_d0;
              local_328 = '\0';
              FUN_013dfce0();
              if ((local_328 != '\0') && (local_330 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              pvVar12 = _pthread_getspecific(pVar25);
              if (pvVar12 != (void *)0x0) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                lVar13 = FUN_00e8b990();
                if (lVar13 != 0) {
                  pVar25 = (void*)local_c0;
                }
              }
              local_320 = local_b8;
              local_318 = '\0';
              FUN_01329030();
              if ((local_318 != '\0') && (local_320 != 0x0)) {
                FUN_00d50b20();
              }
              local_68._0_4_ = (uint32_t)local_b0;
              local_60 = local_90;
              local_50 = local_58;
              local_40._0_4_ = uVar38;
              pvVar12 = _pthread_getspecific(pVar25);
              if (pvVar12 != (void *)0x0) {
                local_68._0_4_ = (uint32_t)local_b0;
                local_60 = local_90;
                local_50 = local_58;
                local_40._0_4_ = uVar38;
                lVar13 = FUN_00e8b990();
                if (lVar13 != 0) {
                  pVar25 = (void*)local_c0;
                }
              }
              local_310 = local_c8;
              local_308 = '\0';
              FUN_01327c60();
              if ((local_308 != '\0') && (local_310 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_40 = (double)CONCAT44(local_40._4_4_,uVar38);
              local_68 = (void*)CONCAT44(local_68._4_4_,(int)local_b0);
              local_60 = local_90;
              local_50 = local_58;
              pvVar12 = _pthread_getspecific(pVar25);
              if (pvVar12 != (void *)0x0) {
                local_40 = (double)CONCAT44(local_40._4_4_,uVar38);
                local_68 = (void*)CONCAT44(local_68._4_4_,(int)local_b0);
                local_60 = local_90;
                local_50 = local_58;
                FUN_00e8b990();
              }
              local_300 = local_48;
              local_2f8 = '\0';
              FUN_01328c70();
              if ((local_2f8 != '\0') && (local_300 != 0x0)) {
                FUN_00d50b20();
              }
              pcVar16 = local_98 + 1;
            } while (local_218 != pcVar16);
          }
          local_50 = local_58;
          local_60 = local_90;
          local_68 = (void*)CONCAT44(local_68._4_4_,(int)local_b0);
          local_98 = ((uint64_t)dVar34 & 0xffffffff);
          local_40 = (double)CONCAT44(local_40._4_4_,uVar38);
          pcVar27 = FUN_00e8fc40();
          FUN_00d4ff40();
          pcVar16 = &g_025f0698;
          *(void**)pcVar27 = &g_025f0698;
          *(void*)(pcVar27 + 0x38) = 0;
          pcVar27[0x3c] = (code)0x0;
          *(int64_t *)(pcVar27 + 0x40) = 0;
          *(int64_t *)(pcVar27 + 0x48) = 0;
          *(void*)(pcVar27 + 0x50) = 0;
          (*g_025f06b0)();
          uVar35 = (uint7)((uint64_t)dVar34 >> 8);
          local_70 = pcVar27;
          if (local_204 == 1) {
            lVar13 = (uint64_t)uVar35 << 8;
            pvVar12 = _pthread_getspecific((void*)pcVar16);
            if ((pvVar12 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
              pcVar16 = local_70;
            }
            FUN_015b2e00();
            pvVar12 = _pthread_getspecific((void*)pcVar16);
            if ((pvVar12 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
              pcVar16 = local_70;
            }
            FUN_015b2f80();
            pvVar12 = _pthread_getspecific((void*)pcVar16);
            if ((pvVar12 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
              pcVar16 = local_70;
            }
            FUN_015b2fc0(local_1e8);
            if (g_02411178 <= (double)local_1e8) {
              pvVar12 = _pthread_getspecific((void*)pcVar16);
              if ((pvVar12 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
                pcVar16 = local_70;
              }
              FUN_015b2e80();
              pvVar12 = _pthread_getspecific((void*)pcVar16);
              if ((pvVar12 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
                pcVar16 = local_70;
              }
              uVar37 = FUN_015b2ec0();
            }
            else {
              pvVar12 = _pthread_getspecific((void*)pcVar16);
              if ((pvVar12 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
                pcVar16 = local_70;
              }
              FUN_015b2e80();
              pvVar12 = _pthread_getspecific((void*)pcVar16);
              if ((pvVar12 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
                pcVar16 = local_70;
              }
              uVar37 = FUN_015b2ec0();
            }
          }
          else {
            lVar13 = (uint64_t)uVar35 << 8;
            pvVar12 = _pthread_getspecific((void*)pcVar16);
            if ((pvVar12 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
              pcVar16 = local_70;
            }
            uVar37 = FUN_015b2e00();
          }
          lVar18 = g_027c75f8;
          if (local_158 != 0x0) {
            if (g_027c75f8 != 0) {
              uVar37 = FUN_00d50b00();
            }
            local_2f0 = lVar18;
            local_2e8 = '\x01';
            ppcVar32 = &local_80;
            (**(code **)(*(int64_t *)local_158 + 0x88))(uVar37,&local_2f0);
            pcVar27 = local_80;
            FUN_00053ac0();
            if (pcVar27 == 0x0) {
LAB_015934cc:
              ppcVar32 = (code **)&g_02802688;
            }
            else {
              (**(code **)(*(int64_t *)pcVar27 + 0x360))();
              cVar8 = FUN_00e85ea0();
              if (cVar8 == '\0') goto LAB_015934cc;
            }
            pcVar27 = *ppcVar32;
            uVar22 = (undefined7)((uint64_t)ppcVar32 >> 8);
            if (pcVar27 == local_88) {
              if ((local_40._0_1_ == '\0') && (pcVar27 != 0x0)) {
                pcVar27 = local_88;
                if (*(char *)(ppcVar32 + 1) != '\0') goto LAB_01593515;
                FUN_00d50b00();
                uVar37 = (int)CONCAT71(uVar22,1);
              }
              else {
                uVar37 = local_40._0_4_;
              }
            }
            else {
              if (*(char *)(ppcVar32 + 1) == '\0') {
                if (pcVar27 != 0x0) {
                  FUN_00d50b00();
                }
                if ((local_40._0_1_ != '\0') && (local_88 != 0x0)) {
                  local_88 = pcVar27;
                  FUN_00d50b20();
                  uVar37 = (int)CONCAT71(uVar22,1);
                  goto LAB_01593587;
                }
              }
              else {
                if ((local_40._0_1_ != '\0') && (local_88 != 0x0)) {
                  local_88 = pcVar27;
                  FUN_00d50b20();
                }
LAB_01593515:
                *(void*)(ppcVar32 + 1) = 0;
              }
              uVar37 = (int)CONCAT71(uVar22,1);
              local_88 = pcVar27;
            }
LAB_01593587:
            if ((local_78 != '\0') && (local_80 != 0x0)) {
              FUN_00d50b20();
            }
            pcVar27 = local_88;
            if ((local_2e8 != '\0') && (local_2f0 != 0)) {
              FUN_00d50b20();
            }
            if (pcVar27 == 0x0) {
              local_40 = (double)CONCAT44(local_40._4_4_,uVar37);
              local_88 = 0x0;
            }
            else {
              local_40._0_4_ = uVar37;
              pvVar12 = _pthread_getspecific((void*)pcVar16);
              if ((pvVar12 != (void *)0x0) &&
                 (local_40._0_4_ = uVar37, lVar18 = FUN_00e8b990(), lVar18 != 0)) {
                pcVar16 = local_70;
              }
              local_40._0_4_ = uVar37;
              FUN_00d459e0();
              local_40._0_4_ = uVar37;
              FUN_015b3060();
              local_40._0_4_ = uVar37;
              pvVar12 = _pthread_getspecific((void*)pcVar16);
              if ((pvVar12 != (void *)0x0) &&
                 (local_40._0_4_ = uVar37, lVar18 = FUN_00e8b990(), lVar18 != 0)) {
                pcVar16 = local_70;
              }
              local_40._0_4_ = uVar37;
              FUN_00d459e0();
              local_40 = (double)CONCAT44(local_40._4_4_,uVar37);
              FUN_015b3000();
            }
          }
          uVar15 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
          pvVar12 = _pthread_getspecific((void*)pcVar16);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pcVar16 = local_c0;
          }
          local_2e0 = local_70;
          local_2d8 = '\0';
          FUN_013d7a00();
          if ((local_2d8 != '\0') && (local_2e0 != 0x0)) {
            FUN_00d50b20();
          }
          puVar21 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar21 = local_628;
          (*local_630)();
          iVar9 = 0;
          local_a0 = puVar21;
          if ((uint)local_1b0 < 0x7fffffff) {
            local_1d8 = local_1d8 / local_1d0;
            local_a8 = g_025e74b8;
            local_1d0 = (double)CONCAT44(local_1d0._4_4_,(float)local_1d0);
            local_90 = &g_025e74a0;
            iVar11 = 0;
            local_b0 = 0;
            local_58 = 0x0;
            pcVar16 = g_025e74b8;
            do {
              iVar33 = (int)((double)iVar9 * local_1d8 + g_023942d0);
              if ((int)local_1f8 < iVar33) {
                iVar33 = (int)local_1f8;
              }
              pcVar27 = FUN_00e8fc40();
              FUN_00d4ff40();
              *(code **)pcVar27 = local_90;
              *(void*)(pcVar27 + 0xc) = 0;
              *(void*)(pcVar27 + 0x14) = 0;
              *(void*)(pcVar27 + 0x1c) = 0;
              *(void*)(pcVar27 + 0x24) = 0;
              pcVar27[0x2c] = (code)0x0;
              *(int64_t *)(pcVar27 + 0x30) = 0;
              *(int64_t *)(pcVar27 + 0x38) = 0;
              *(int64_t *)(pcVar27 + 0x40) = 0;
              *(int64_t *)(pcVar27 + 0x48) = 0;
              *(int64_t *)(pcVar27 + 0x50) = 0;
              *(int64_t *)(pcVar27 + 0x58) = 0;
              *(void*)(pcVar27 + 0x60) = 0;
              uVar14 = (*local_a8)();
              uVar22 = (undefined7)((uint64_t)uVar14 >> 8);
              if (pcVar27 == local_58) {
                if ((char)local_b0 == '\0') {
                  local_b0 = CONCAT71(uVar22,1);
                  pcVar27 = local_58;
                }
                else {
                  FUN_00d50b20();
                  pcVar27 = local_58;
                }
              }
              else {
                bVar36 = (char)local_b0 != '\0';
                local_b0 = CONCAT71(uVar22,1);
                if ((bVar36) && (local_58 != 0x0)) {
                  FUN_00d50b20();
                }
              }
              uVar15 = local_200;
              *(int *)(pcVar27 + 0xc) = iVar11;
              lVar13 = (int64_t)iVar33;
              *(uint *)(pcVar27 + 0x10) = *(uint *)(local_200 + lVar13 * 4) & g_02390140;
              fVar39 = (float)_logf((local_1d0._0_4_ / *(float *)(local_1f0 + lVar13 * 4)) *
                                    g_02394204);
              fVar39 = fVar39 * g_02394208;
              *(float *)(pcVar27 + 0x14) = fVar39;
              *(float *)(pcVar27 + 0x18) = fVar39;
              *(uint *)(pcVar27 + 0x1c) = *(uint *)(uVar15 + lVar13 * 4) & g_02390140;
              fVar39 = *(float *)(local_640 + lVar13 * 4) * g_02394288;
              *(float *)(pcVar27 + 0x20) = fVar39;
              *(float *)(pcVar27 + 0x24) = fVar39;
              *(void*)(pcVar27 + 0x28) = *(void*)(local_640 + lVar13 * 4);
              local_78 = '\0';
              local_80 = pcVar27;
              local_58 = pcVar27;
              FUN_00d21140();
              if ((local_78 != '\0') && (local_80 != 0x0)) {
                FUN_00d50b20();
              }
              iVar11 = iVar11 + 1;
              iVar9 = iVar9 + (int)local_260;
            } while (local_26c != iVar11);
          }
          else {
            local_58 = 0x0;
            local_b0 = 0;
          }
          pcVar27 = local_160;
          if (*(int *)(local_138 + 0xc) != 0) {
            local_a8 = **(void**)(local_138 + 0x10);
            if (local_a8 == 0x0) {
              uVar15 = 0;
            }
            else {
              uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
              FUN_00d50b00();
            }
            iVar9 = 0;
            if (*(int *)((int64_t)local_a0 + 0xc) < 1) {
              local_90 = 0x0;
              local_1b0 = 0;
            }
            else {
              local_1f0 = (uint64_t)
                          ((int)(((uint)((uint64_t)local_260 >> 0x1f) & 1) + (int)local_260) >> 1);
              local_1f8 = CONCAT44(local_1f8._4_4_,0xffffffff);
              local_1d0 = -NAN;
              uVar28 = 0;
              local_1b0 = 0;
              local_90 = 0x0;
              pcVar16 = local_260;
              do {
                if (local_a8 == 0x0) {
                  local_a8 = 0x0;
                }
                else if ((int64_t)local_1d0 <= (int64_t)iVar9) {
                  local_1d8 = (double)CONCAT44(local_1d8._4_4_,(int)uVar15);
                  lVar13 = *(int64_t *)(local_138 + 0x10);
                  lVar18 = (int64_t)(int)(uint)local_1f8;
                  pcVar16 = *(code **)(lVar13 + 8 + lVar18 * 8);
                  if (local_90 == pcVar16) {
                    if (((char)local_1b0 == '\0') && (local_90 != 0x0)) {
                      local_1b0 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
                      FUN_00d50b00();
                    }
                  }
                  else {
                    if (pcVar16 != 0x0) {
                      lVar13 = FUN_00d50b00();
                    }
                    if (((char)local_1b0 == '\0') || (local_90 == 0x0)) {
                      local_1b0 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
                      local_90 = pcVar16;
                    }
                    else {
                      local_90 = pcVar16;
                      uVar14 = FUN_00d50b20();
                      local_1b0 = CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
                    }
                  }
                  iVar11 = (uint)local_1f8 + 1;
                  local_1f8 = CONCAT44(local_1f8._4_4_,iVar11);
                  if (iVar11 < *(int *)(local_138 + 0xc) + -1) {
                    pcVar27 = *(code **)(*(int64_t *)(local_138 + 0x10) + 0x10 + lVar18 * 8);
                    uVar22 = (undefined7)((uint64_t)pcVar16 >> 8);
                    pcVar16 = local_138;
                    if (local_a8 == pcVar27) {
                      uVar10 = local_1d8._0_4_;
                      if (SUB81(local_1d8,0) == '\0') {
                        local_1d8 = (double)((uint64_t)local_1d8 & 0xffffffff00000000);
                        FUN_00d50b00();
                        uVar10 = (uint)CONCAT71(uVar22,1);
                      }
                    }
                    else {
                      if (pcVar27 != 0x0) {
                        FUN_00d50b00();
                      }
                      uVar10 = (uint)CONCAT71(uVar22,1);
                      local_a8 = pcVar27;
                      if (local_1d8._0_1_ != '\0') {
                        FUN_00d50b20();
                      }
                    }
                    pvVar12 = _pthread_getspecific((void*)pcVar16);
                    pcVar27 = local_a8;
                    if ((pvVar12 != (void *)0x0) &&
                       (lVar13 = FUN_00e8b990(), pcVar27 = local_a8, lVar13 != 0)) {
                      pcVar16 = local_a8;
                      pcVar27 = *(code **)(local_a8 +
                                          (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8 + 0x20);
                    }
                    lVar13 = (**(code **)(*(int64_t *)pcVar27 + 0x380))();
                    local_1d0 = (double)(lVar13 - local_1f0);
                    uVar15 = (uint64_t)uVar10;
                  }
                  else {
                    pcVar16 = ((uint64_t)local_1d8 & 0xffffffff);
                    if (SUB81(local_1d8,0) == '\0') {
                      local_a8 = 0x0;
                      uVar15 = 0;
                    }
                    else {
                      local_a8 = 0x0;
                      FUN_00d50b20();
                      uVar15 = 0;
                    }
                  }
                }
                lVar13 = *(int64_t *)((int64_t)local_a0 + 0x10);
                pcVar27 = *(code **)(lVar13 + uVar28 * 8);
                if (local_58 == pcVar27) {
                  if (((char)local_b0 == '\0') && (local_58 != 0x0)) {
                    local_b0 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
                    FUN_00d50b00();
                  }
                }
                else {
                  if (pcVar27 != 0x0) {
                    lVar13 = FUN_00d50b00();
                  }
                  if (((char)local_b0 == '\0') || (local_58 == 0x0)) {
                    local_b0 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
                    local_58 = pcVar27;
                  }
                  else {
                    local_58 = pcVar27;
                    uVar14 = FUN_00d50b20();
                    local_b0 = CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
                  }
                }
                if (uVar28 != *(uint *)(local_58 + 0xc)) {
                  FUN_00e828a0();
                }
                pvVar12 = _pthread_getspecific((void*)pcVar16);
                if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  pcVar16 = local_90;
                }
                local_2d0 = local_58;
                local_2c8 = '\0';
                FUN_014c2a80();
                if ((local_2c8 != '\0') && (local_2d0 != 0x0)) {
                  FUN_00d50b20();
                }
                uVar28 = uVar28 + 1;
                iVar9 = iVar9 + (int)local_260;
              } while ((int64_t)uVar28 < (int64_t)*(int *)((int64_t)local_a0 + 0xc));
            }
            if (((char)uVar15 != '\0') && (local_a8 != 0x0)) {
              FUN_00d50b20();
            }
            pcVar27 = local_160;
            if (((char)local_1b0 != '\0') && (local_90 != 0x0)) {
              FUN_00d50b20();
            }
          }
          pVar25 = (void*)pcVar16;
          if ((local_208 & 1) == 0) {
            puVar21 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar21 = local_628;
            (*local_630)();
            pvVar12 = _pthread_getspecific(pVar25);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_2b8 = '\0';
            local_2c0 = 0;
            local_2a8 = '\0';
            ppuVar29 = &local_2b0;
            local_2b0 = puVar21;
            FUN_0134b5a0(ppuVar29,&local_2c0,1);
            pVar25 = (void*)ppuVar29;
            local_90 = local_80;
            if (local_80 == 0x0) {
              bVar36 = true;
            }
            else {
              if (local_78 == '\0') {
                FUN_00d50b00();
                bVar36 = false;
                if ((local_78 == '\0') || (local_80 == 0x0)) goto LAB_01593edb;
                FUN_00d50b20();
              }
              else {
                local_78 = '\0';
              }
              bVar36 = false;
            }
LAB_01593edb:
            if ((local_2a8 != '\0') && (local_2b0 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((local_2b8 != '\0') && (local_2c0 != 0)) {
              FUN_00d50b20();
            }
            local_298 = '\0';
            local_290 = local_90;
            local_288 = '\0';
            local_278 = '\0';
            local_2a0 = pcVar27;
            local_280 = puVar21;
            pvVar12 = _pthread_getspecific(pVar25);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar10 = FUN_01326de0();
            pcVar16 = (uint64_t)uVar10;
            FUN_011f3320(pcVar16,&local_280);
            if ((local_278 != '\0') && (local_280 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((local_288 != '\0') && (local_290 != 0x0)) {
              FUN_00d50b20();
            }
            if ((local_298 != '\0') && (local_2a0 != 0x0)) {
              FUN_00d50b20();
            }
            pvVar12 = _pthread_getspecific((void*)pcVar16);
            if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
              pcVar16 = local_c0;
            }
            FUN_01327a50();
            pcVar27 = local_80;
            if ((((local_78 == '\0') && (local_80 != 0x0)) &&
                (FUN_00d50b00(), local_78 != '\0')) && (local_80 != 0x0)) {
              FUN_00d50b20();
            }
            if (0 < *(int *)(pcVar27 + 0xc)) {
              lVar13 = 0;
              do {
                pvVar12 = _pthread_getspecific((void*)pcVar16);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013df4a0();
                lVar13 = lVar13 + 1;
              } while (lVar13 < *(int *)(pcVar27 + 0xc));
            }
            FUN_00d50b20();
            if (!bVar36 && local_90 != 0x0) {
              FUN_00d50b20();
            }
            if (puVar21 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          pvVar12 = _pthread_getspecific((void*)pcVar16);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pcVar16 = local_c0;
          }
          FUN_0134bda0();
          pcVar27 = local_80;
          if (((local_78 == '\0') && (local_80 != 0x0)) &&
             ((FUN_00d50b00(), local_78 != '\0' && (local_80 != 0x0)))) {
            FUN_00d50b20();
          }
          pVar25 = (void*)pcVar16;
          if (*(int *)(pcVar27 + 0xc) < 1) {
            lVar13 = 0;
            local_90 = 0x0;
          }
          else {
            lVar18 = 0;
            local_90 = 0x0;
            lVar13 = 0;
            do {
              lVar19 = *(int64_t *)(pcVar27 + 0x10);
              lVar20 = *(int64_t *)(lVar19 + lVar18 * 8);
              if (lVar13 == lVar20) {
                if (((char)local_90 == '\0') && (lVar13 != 0)) {
                  local_90 = CONCAT71((int7)((uint64_t)lVar19 >> 8),1);
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar20 != 0) {
                  lVar19 = FUN_00d50b00();
                }
                if (((char)local_90 == '\0') || (lVar13 == 0)) {
                  local_90 = CONCAT71((int7)((uint64_t)lVar19 >> 8),1);
                  lVar13 = lVar20;
                }
                else {
                  uVar14 = FUN_00d50b20();
                  local_90 = CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
                  lVar13 = lVar20;
                }
              }
              pvVar12 = _pthread_getspecific((void*)pcVar16);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_014bc420();
              pcVar17 = local_80;
              if ((local_78 != '\0') && (local_80 != 0x0)) {
                FUN_00d50b20();
              }
              if (pcVar17 == 0x0) {
                pvVar12 = _pthread_getspecific((void*)pcVar16);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_1c8 = FUN_014bb920();
                pvVar12 = _pthread_getspecific((void*)pcVar16);
                if ((pvVar12 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                  pcVar16 = local_160;
                }
                pvVar12 = _pthread_getspecific((void*)pcVar16);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014bb710();
                local_268 = FUN_016cb940();
                if ((((uint64_t)local_268 >> 0x20 != 0) && (local_1c8._4_4_ != 0)) &&
                   (cVar8 = FUN_00e7c020(), cVar8 == '\0')) {
                  local_270 = 1;
                  local_80 = local_1c8;
                  FUN_00e7c260();
                  local_268 = local_80;
                }
                pvVar12 = _pthread_getspecific((void*)pcVar16);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014bb930();
              }
              else {
                pvVar12 = _pthread_getspecific((void*)pcVar16);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar12 = _pthread_getspecific((void*)pcVar16);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014bc420();
                pvVar12 = _pthread_getspecific((void*)pcVar16);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014bb920();
                FUN_014bb930();
                if ((local_78 != '\0') && (local_80 != 0x0)) {
                  FUN_00d50b20();
                }
              }
              pVar25 = (void*)pcVar16;
              lVar18 = lVar18 + 1;
            } while (lVar18 < *(int *)(pcVar27 + 0xc));
          }
          pvVar12 = _pthread_getspecific(pVar25);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0137b4c0();
          *this_ptr = local_c0;
          *(void*)(this_ptr + 1) = 1;
          if (((char)local_90 != '\0') && (lVar13 != 0)) {
            FUN_00d50b20();
          }
          uVar14 = FUN_00d50b20();
          if (local_a0 != 0x0) {
            uVar14 = FUN_00d50b20();
          }
          bVar5 = true;
          if (((char)local_b0 != '\0') && (local_58 != 0x0)) {
            uVar14 = FUN_00d50b20();
          }
          bVar6 = false;
          local_a0 = CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
        }
        bVar4 = true;
        cVar8 = (char)local_98;
        bVar36 = true;
        if (local_258 != 0x0) goto LAB_0158d70f;
      }
      if (((char)local_188 != '\0') && (local_158 != 0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_1e0 != '\0') && (local_1b8 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_660 != 0x0) && (local_210 != 0x0)) {
        FUN_00d50b20();
      }
      pcVar16 = local_150;
      if (((char)local_148 != '\0') && (local_140 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_130 != '\0') && (local_128 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_180 != '\0') && (local_190 != 0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_1a0 != '\0') && (local_178 != 0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_1a8 == '\0') || (local_198 == 0x0)) {
        cVar24 = SUB81(local_40,0);
      }
      else {
        FUN_00d50b20();
        cVar24 = SUB81(local_40,0);
      }
      goto LAB_0158c8c1;
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    local_120 = 0;
    local_48 = 0x0;
    local_a0 = 0x0;
    local_138 = 0x0;
  }
  else {
    plVar26 = (int64_t *)*param_3;
    if ((g_026fdd70 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
      g_026e3238 = FUN_00115af0();
      g_026e3220 = "MUAudioFileSource";
      g_026e3228 = 0xa0;
      g_026e3230 = FUN_00136df0;
      g_026e3240 = 0;
      ram_00000000026e3248 = 0;
      g_026e3250 = 0;
      ram_00000000026e3258 = 0;
      g_026e3260 = 0;
      ram_00000000026e3268 = 0;
      g_026e3270 = 0;
      ram_00000000026e3278 = 0;
      g_026e3280 = 0;
      ram_00000000026e3288 = 0;
      g_026e3290 = 0;
      ram_00000000026e3298 = 0;
      g_026e32a0 = 0;
      ram_00000000026e32a8 = 0;
      g_026e32b0 = 0;
      ram_00000000026e32b8 = 0;
      g_026e32c0 = 0;
      ram_00000000026e32c8 = 0;
      g_026e32d0 = 0;
      ram_00000000026e32d8 = 0;
      g_026e32e0 = 0;
      ___cxa_guard_release();
    }
    if (plVar26 == (int64_t *)0x0) {
LAB_0158c2e3:
      plVar26 = &g_02802688;
    }
    else {
      (**(code **)(*plVar26 + 0x360))();
      cVar8 = FUN_00e85ea0();
      plVar26 = param_3;
      if (cVar8 == '\0') goto LAB_0158c2e3;
    }
    unaff_R13 = *plVar26;
    lVar13 = plVar26[1];
    if (((char)lVar13 == '\0') || (unaff_R13 == 0x0)) {
      if (unaff_R13 != 0x0) goto LAB_0158c322;
    }
    else {
      FUN_00d50b00();
LAB_0158c322:
      local_c0 = CONCAT71(local_c0._1_7_,(char)lVar13);
      pVar25 = (void*)plVar26;
      pvVar12 = _pthread_getspecific(pVar25);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar37 = FUN_0123b100();
      pcVar16 = local_80;
      if (local_78 == '\0') {
        if (local_80 != 0x0) {
          FUN_00d50b00();
          if ((local_78 != '\0') && (local_80 != 0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0158c39f;
        }
LAB_0158c440:
        bVar36 = false;
      }
      else {
        if (local_80 == 0x0) goto LAB_0158c440;
LAB_0158c39f:
        local_b8 = pcVar16;
        local_90 = unaff_R13;
        uVar37 = FUN_00b88640();
        local_610 = g_02765250;
        if (g_02765250 != 0) {
          uVar37 = FUN_00d50b00();
        }
        local_608 = '\x01';
        ppcVar32 = &local_80;
        FUN_000175c0(uVar37,&local_610);
        pcVar16 = local_80;
        FUN_00053ac0();
        if (pcVar16 == 0x0) {
LAB_0158c427:
          ppcVar32 = (code **)&g_02802688;
        }
        else {
          (**(code **)(*(int64_t *)pcVar16 + 0x360))();
          cVar8 = FUN_00e85ea0();
          if (cVar8 == '\0') goto LAB_0158c427;
        }
        pcVar16 = *ppcVar32;
        if (*(char *)(ppcVar32 + 1) == '\0') {
          if (pcVar16 != 0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(ppcVar32 + 1) = 0;
        }
        unaff_R13 = local_90;
        if ((local_78 != '\0') && (local_80 != 0x0)) {
          FUN_00d50b20();
        }
        if ((local_608 != '\0') && (local_610 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1c0 != '\0') && (local_1c8 != 0x0)) {
          FUN_00d50b20();
        }
        if (pcVar16 == 0x0) {
          bVar36 = false;
        }
        else {
          uVar15 = FUN_00d45790();
          bVar36 = uVar15 == local_b0;
          FUN_00d50b20();
        }
        uVar37 = FUN_00d50b20();
      }
      if ((char)local_c0 != '\0') {
        uVar37 = FUN_00d50b20();
      }
      if (bVar36) goto LAB_0158c4fc;
    }
LAB_0158c7dd:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    local_168 = 0;
    cVar24 = (char)local_58;
    pcVar16 = 0x0;
    bVar4 = false;
    local_160 = 0x0;
    bVar5 = false;
    local_70 = 0x0;
    local_118 = 0;
    local_d8 = 0x0;
    local_110 = 0;
    local_e0 = 0x0;
    cVar8 = '\0';
    local_e8 = 0x0;
    local_100 = 0;
    local_b8 = 0x0;
    local_68 = (void*)((uint64_t)local_68 & 0xffffffff00000000);
    local_60 = 0x0;
    local_f8 = 0;
    local_d0 = (int64_t *)0x0;
    local_f0 = 0;
    local_50 = 0x0;
    local_108 = 0;
    local_c8 = (int64_t *)0x0;
    bVar6 = false;
    local_c0 = 0x0;
    local_120 = 0;
    local_48 = 0x0;
    local_a0 = 0x0;
    local_138 = 0x0;
LAB_0158c8c1:
    if ((cVar24 != '\0') && (local_88 != 0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_168 != '\0') && (pcVar16 != 0x0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_160 != 0x0)) {
      FUN_00d50b20();
    }
    pcVar27 = local_50;
    pcVar16 = local_60;
    puVar21 = local_68;
    if ((bVar5) && (local_70 != 0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_118 != '\0') && (local_d8 != 0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_110 != '\0') && (local_e0 != 0x0)) {
      FUN_00d50b20();
    }
    if ((cVar8 != '\0') && (local_e8 != 0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_100 != '\0') && (local_b8 != 0x0)) {
      FUN_00d50b20();
    }
    if (((char)puVar21 != '\0') && (pcVar16 != 0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_f8 != '\0') && (local_d0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_f0 != '\0') && (pcVar27 != 0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_108 != '\0') && (local_c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar6) goto LAB_0158ca1b;
  }
  if (local_c0 != 0x0) {
    FUN_00d50b20();
  }
LAB_0158ca1b:
  if (((char)local_120 != '\0') && (local_48 != 0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_a0 != '\0') && (local_138 != 0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

