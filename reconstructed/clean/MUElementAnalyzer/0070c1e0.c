// Function: FUN_0070c1e0
// Address: 0070c1e0
// Size: 6318 bytes
// Class: MUElementAnalyzer
// String references:
//   "MUElementAnalyzer"
//   "GNString"
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


uint64_t FUN_0070c1e0(void* param_1,uint32_t param_2)

{
  code *pcVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  uint uVar5;
  uint64_t uVar6;
  void*puVar7;
  int64_t *plVar8;
  int64_t lVar9;
  void *pvVar10;
  void* pVar11;
  int64_t *plVar12;
  int64_t lVar13;
  int iVar14;
  int64_t this_ptr;
  int64_t **pplVar15;
  int64_t *plVar16;
  int64_t **pplVar17;
  uint32_t uVar18;
  uint32_t extraout_XMM0_Da;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
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
  uint32_t local_104;
  int64_t *local_100;
  int64_t *local_c0;
  char local_b8;
  uint64_t local_b0;
  int64_t *local_a8;
  int64_t *local_98;
  int64_t *local_90;
  char local_88;
  int local_78;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50 [8];
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  local_104 = param_2;
  FUN_006f3f00();
  if (local_88 == '\0') {
    if (local_90 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  FUN_00749e90();
  local_100 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if (local_90 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  lVar9 = *(int64_t *)(this_ptr + 0x10);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  FUN_002ee280();
  plVar3 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (*(int *)((int64_t)plVar3 + 0xc) == 0) {
    FUN_006f3f00();
    plVar8 = local_68;
    FUN_00757c60();
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb480();
    plVar16 = local_58;
    if (local_50[0] == '\0') {
      if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
         (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (plVar8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (*(int *)((int64_t)plVar16 + 0xc) == 1) {
      local_a8 = plVar16;
      FUN_00d23310();
      plVar8 = local_58;
      pplVar17 = &local_68;
      if (local_50[0] != '\0') {
        pplVar17 = (int64_t **)local_50;
      }
      local_68 = (int64_t *)CONCAT71(local_68._1_7_,local_50[0]);
      *(void*)pplVar17 = 0;
      if ((local_50[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar10 = _pthread_getspecific(param_1);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124c6e0();
      iVar14 = *(int *)((int64_t)local_90 + 0xc);
      if (local_88 != '\0') {
        FUN_00d50b20();
      }
      if (((char)local_68 != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar14 < 3) {
        FUN_00d23310();
        plVar8 = local_58;
        pplVar17 = &local_c0;
        pplVar15 = (int64_t **)local_50;
        if (local_50[0] == '\0') {
          pplVar15 = pplVar17;
        }
        local_c0._0_1_ = local_50[0];
        *(void*)pplVar15 = 0;
        if ((local_50[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar16 = local_a8;
        pvVar10 = _pthread_getspecific((void*)pplVar17);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0124df10();
        plVar2 = local_68;
        if (local_60 == '\0') {
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_0048a630();
        local_98 = local_90;
        plVar12 = local_90;
        if (local_90 == (int64_t *)0x0) {
          local_98 = (int64_t *)0x0;
          local_b0 = 0;
        }
        else if (local_88 == '\0') {
          uVar6 = FUN_00d50b00();
          local_b0 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        }
        else {
          local_88 = '\0';
          local_b0 = CONCAT71((int7)((uint64_t)local_90 >> 8),1);
        }
        pVar11 = (void*)plVar12;
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_c0 != '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_006f3f00();
        lVar9 = CONCAT71(local_c0._1_7_,(char)local_c0);
        FUN_00757c60();
        pvVar10 = _pthread_getspecific(pVar11);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        pvVar10 = _pthread_getspecific(pVar11);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        plVar8 = local_58;
        if (local_50[0] == '\0') {
          if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
             (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_50[0] = '\0';
        }
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (lVar9 != 0)) {
          FUN_00d50b20();
        }
        if (plVar8 != (int64_t *)0x0) {
          local_50[0] = '\0';
          local_58 = (int64_t *)0x0;
          local_48 = plVar8;
          local_40 = 0xffffffff;
          local_38 = 0;
          local_40._4_4_ = 0;
          while( true ) {
            if (local_40._4_4_ != 0) {
              if (local_40._4_4_ < 1) {
                iVar14 = -local_40._4_4_;
              }
              else {
                iVar14 = (int)local_40 - local_40._4_4_;
                local_40 = CONCAT44(local_40._4_4_,iVar14);
                FUN_00d23690();
                local_38 = local_38 + local_40._4_4_;
                iVar14 = 0;
              }
              local_40 = CONCAT44(iVar14,(int)local_40);
            }
            lVar9 = (int64_t)(int)local_40;
            iVar14 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar14);
            if (*(int *)((int64_t)local_48 + 0xc) <= iVar14) break;
            local_58 = *(int64_t **)(local_48[2] + 8 + lVar9 * 8);
            pvVar10 = _pthread_getspecific((void*)local_48[2]);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar18 = FUN_012e7210();
            local_90 = local_68;
            if (local_60 == '\0') {
              if (local_68 != (int64_t *)0x0) {
                uVar18 = FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            local_88 = '\0';
            FUN_00d214d0(uVar18,*(void*)((int64_t)plVar3 + 0xc));
            if (local_90 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_000be170();
          FUN_00d50b20();
          plVar16 = local_a8;
        }
      }
      else {
        local_b0 = 0;
        local_98 = (int64_t *)0x0;
        plVar16 = local_a8;
      }
    }
    else {
      local_b0 = 0;
      local_98 = (int64_t *)0x0;
    }
    if (*(int *)((int64_t)plVar3 + 0xc) == 0) {
      FUN_01caeae0();
      FUN_01d66ab0();
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar16 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar8 = (int64_t *)0x0;
      goto LAB_0070d9ce;
    }
    if (plVar16 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_004fb290();
    local_98 = local_58;
    if (local_58 == (int64_t *)0x0) {
      local_98 = (int64_t *)0x0;
      local_b0 = 0;
    }
    else if (local_50[0] == '\0') {
      uVar6 = FUN_00d50b00();
      local_b0 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
      local_b0 = CONCAT71((int7)((uint64_t)local_58 >> 8),1);
    }
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  pcVar1 = g_02572370;
  (*g_02572370)();
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar8 = (int64_t)&g_02572358;
  (*pcVar1)();
  local_a8 = plVar8;
  if (local_98 != (int64_t *)0x0) {
    local_50[0] = '\0';
    local_58 = (int64_t *)0x0;
    local_48 = local_98;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar14 = -local_40._4_4_;
        }
        else {
          iVar14 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar14);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar14 = 0;
        }
        local_40 = CONCAT44(iVar14,(int)local_40);
      }
      lVar9 = (int64_t)(int)local_40;
      iVar14 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar14);
      if (*(int *)((int64_t)local_48 + 0xc) <= iVar14) break;
      lVar13 = local_48[2];
      local_58 = *(int64_t **)(lVar13 + 8 + lVar9 * 8);
      pvVar10 = _pthread_getspecific((void*)lVar13);
      pVar11 = (void*)lVar13;
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0134a500();
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_90 == (int64_t *)0x0) {
        pvVar10 = _pthread_getspecific(pVar11);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        pvVar10 = _pthread_getspecific(pVar11);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0124e0d0();
        if (local_88 != '\0') {
          local_88 = '\0';
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar10 = _pthread_getspecific(pVar11);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0134a500();
        pvVar10 = _pthread_getspecific(pVar11);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0141b7f0();
        local_90 = local_68;
        if (local_60 == '\0') {
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_88 = '\0';
        FUN_00d235a0();
        if (local_90 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (CONCAT71(local_c0._1_7_,(char)local_c0) != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00115190();
  }
  FUN_01caeae0();
  uVar18 = FUN_01d66da0();
  local_1a8 = g_02726cf0;
  if (g_02726cf0 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_1a0 = '\x01';
  pplVar17 = &local_58;
  FUN_000175c0(uVar18,&local_1a8);
  plVar8 = local_58;
  if ((g_026fd0c0 == '\0') && (iVar14 = ___cxa_guard_acquire(), iVar14 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar8 == (int64_t *)0x0) {
LAB_0070d090:
    pplVar17 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0070d090;
  }
  plVar16 = *pplVar17;
  if (*(char *)(pplVar17 + 1) == '\0') {
    if (plVar16 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar17 + 1) = 0;
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01caeae0();
  local_50[0] = '\0';
  local_58 = plVar16;
  uVar5 = FUN_00d23d70();
  plVar8 = (int64_t *)(uint64_t)uVar5;
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d66ab0();
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_104 == '\0') {
LAB_0070d99d:
    plVar8 = (int64_t *)CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
  }
  else if (*(int *)((int64_t)local_a8 + 0xc) == *(int *)((int64_t)local_98 + 0xc)) {
    local_50[0] = '\0';
    local_58 = (int64_t *)0x0;
    local_48 = local_a8;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      plVar2 = local_90;
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar14 = -local_40._4_4_;
        }
        else {
          iVar14 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar14);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar14 = 0;
        }
        local_40 = CONCAT44(iVar14,(int)local_40);
      }
      lVar9 = (int64_t)(int)local_40;
      iVar14 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar14);
      if (*(int *)((int64_t)local_48 + 0xc) <= iVar14) break;
      plVar8 = *(int64_t **)(local_48[2] + 8 + lVar9 * 8);
      local_58 = plVar8;
      pvVar10 = _pthread_getspecific((void*)local_48[2]);
      plVar12 = local_58;
      if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), plVar8 = plVar12, lVar9 != 0)) {
        plVar8 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
      FUN_0124e0d0();
      if (local_88 == '\0') {
        if (local_90 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_0070d2f0;
        }
      }
      else if (local_90 != (int64_t *)0x0) {
LAB_0070d2f0:
        local_88 = '\0';
        local_90 = (int64_t *)0x0;
        local_78 = -1;
        while( true ) {
          lVar9 = (int64_t)local_78;
          local_78 = local_78 + 1;
          if (*(int *)((int64_t)plVar2 + 0xc) <= local_78) break;
          local_90 = *(int64_t **)(plVar2[2] + 8 + lVar9 * 8);
          local_68 = local_90;
          if ((g_026e0c38 == '\0') && (iVar14 = ___cxa_guard_acquire(), iVar14 != 0)) {
            g_026e0b88 = FUN_000fddb0();
            g_026e0b70 = "MUElementAnalyzer";
            g_026e0b78 = 0x180;
            g_026e0b80 = FUN_000fdd80;
            g_026e0b90 = 0;
            ram_00000000026e0b98 = 0;
            g_026e0ba0 = 0;
            g_026e0c18 = 0;
            ram_00000000026e0c20 = 0;
            g_026e0c28 = 0;
            g_026e0c2a = 1;
            g_026e0ba8 = 0;
            ram_00000000026e0bb0 = 0;
            g_026e0bb8 = 0;
            ram_00000000026e0bc0 = 0;
            g_026e0bc8 = 0;
            ram_00000000026e0bd0 = 0;
            g_026e0bd8 = 0;
            ram_00000000026e0be0 = 0;
            g_026e0be8 = 0;
            ram_00000000026e0bf0 = 0;
            g_026e0bf8 = 0;
            ram_00000000026e0c00 = 0;
            g_026e0c08 = 0;
            ram_00000000026e0c10 = 0;
            g_026e0c33 = 0;
            g_026e0c2b = 0;
            ___cxa_guard_release();
          }
          pplVar17 = (int64_t **)&g_02802688;
          if (local_90 != (int64_t *)0x0) {
            (**(code **)(*local_90 + 0x360))();
            cVar4 = FUN_00e85ea0();
            pplVar17 = &local_68;
            if (cVar4 == '\0') {
              pplVar17 = (int64_t **)&g_02802688;
            }
          }
          if (*pplVar17 != (int64_t *)0x0) {
            FUN_00e34b50();
          }
        }
        FUN_00713bd0();
        FUN_00d50b20();
      }
    }
    uVar18 = FUN_00115e00();
joined_r0x0070d8be:
    if (local_98 == (int64_t *)0x0) goto LAB_0070d99d;
    local_50[0] = '\0';
    local_58 = (int64_t *)0x0;
    local_38 = 0;
    local_40 = 0;
    local_48 = local_98;
    if (0 < *(int *)((int64_t)local_98 + 0xc)) {
      lVar9 = 0;
      do {
        plVar8 = *(int64_t **)(local_98[2] + lVar9 * 8);
        local_178 = plVar3;
        local_170 = '\0';
        local_160 = '\0';
        local_168 = plVar8;
        local_58 = plVar8;
        uVar18 = FUN_004fb4a0(uVar18,&local_168);
        if (local_88 == '\0') {
          if (local_90 != (int64_t *)0x0) {
            uVar18 = FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        local_150 = '\0';
        local_140 = '\0';
        local_158 = local_90;
        local_148 = plVar8;
        FUN_004f9d80(uVar18,&local_148);
        if (local_88 == '\0') {
          if (local_90 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_006f3f00();
        local_130 = '\0';
        local_120 = '\0';
        local_110 = '\0';
        local_138 = plVar8;
        local_128 = plVar16;
        local_118 = local_90;
        uVar18 = FUN_00784900(&local_118,&local_128);
        if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        if (local_90 != (int64_t *)0x0) {
          FUN_00d50b20();
          uVar18 = FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
        local_40 = CONCAT44(local_40._4_4_,(int)lVar9);
        plVar8 = local_90;
      } while ((int)lVar9 < *(int *)((int64_t)local_98 + 0xc));
    }
    FUN_00115190();
    plVar8 = (int64_t *)CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
  }
  else {
    plVar8 = (int64_t *)0x0;
    if (*(int *)((int64_t)local_a8 + 0xc) == 0) {
      local_50[0] = '\0';
      local_58 = (int64_t *)0x0;
      local_48 = local_98;
      local_40 = 0xffffffff;
      local_38 = 0;
      while( true ) {
        lVar9 = (int64_t)(int)local_40;
        iVar14 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar14);
        if (*(int *)((int64_t)local_48 + 0xc) <= iVar14) break;
        local_58 = *(int64_t **)(local_48[2] + 8 + lVar9 * 8);
        pvVar10 = _pthread_getspecific((void*)local_48[2]);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar14 = FUN_01326de0();
        if (iVar14 != 0) {
          uVar18 = FUN_00115190();
          local_198 = g_026f6fb0;
          if (g_026f6fb0 != 0) {
            uVar18 = FUN_00d50b00();
          }
          lVar9 = g_026f6fb8;
          local_190 = '\x01';
          if (g_026f6fb8 != 0) {
            uVar18 = FUN_00d50b00();
          }
          local_188 = lVar9;
          local_180 = '\x01';
          FUN_01f6ca30(uVar18,&local_188);
          plVar8 = local_58;
          if (local_50[0] == '\0') {
            if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
               (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_50[0] = '\0';
          }
          if ((local_180 != '\0') && (local_188 != 0)) {
            FUN_00d50b20();
          }
          if ((local_190 != '\0') && (local_198 != 0)) {
            FUN_00d50b20();
          }
          uVar5 = (**(code **)(*plVar8 + 0x5e0))();
          plVar8 = (int64_t *)(uint64_t)uVar5;
          uVar18 = FUN_00d50b20();
          if (uVar5 == 0) goto joined_r0x0070d8be;
          goto LAB_0070d99d;
        }
        if (local_40._4_4_ == 0) {
          plVar8 = (int64_t *)0x0;
        }
        else {
          if (local_40._4_4_ < 1) {
            plVar8 = (int64_t *)(uint64_t)(uint)-local_40._4_4_;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
            FUN_00d23690(extraout_XMM0_Da,local_40._4_4_);
            local_38 = local_38 + local_40._4_4_;
            plVar8 = (int64_t *)0x0;
          }
          local_40 = CONCAT44((int)plVar8,(int)local_40);
        }
      }
      uVar18 = FUN_00115190();
      goto joined_r0x0070d8be;
    }
  }
  if (plVar16 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_a8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_0070d9ce:
  if (((char)local_b0 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_100 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return (uint64_t)plVar8 & 0xffffffff;
}

