// Function: MUElementAnalyzer_makeMonophonicItems
// Address: 0146c830
// Size: 38131 bytes
// Class: MUElementAnalyzer
// String references:
//   "MUAudioSourcePrincipalItem"
//   "MUElementAnalyzer::makeMonophonicItems(): audioSourceItem != principalItem ???"
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


void MUElementAnalyzer_makeMonophonicItems(void*param_1,int64_t *param_2,uint64_t param_3,int64_t param_4)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint64_t uVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  bool bVar6;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  bool bVar9;
  char cVar10;
  bool bVar11;
  code *pcVar12;
  int64_t *plVar13;
  byte bVar14;
  char cVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  void *pvVar20;
  int64_t lVar21;
  uint64_t uVar22;
  void*puVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  undefined7 uVar34;
  undefined7 extraout_var;
  int64_t *plVar26;
  int64_t **pplVar27;
  int64_t lVar28;
  void*puVar29;
  int64_t ***ppplVar30;
  int64_t lVar31;
  int64_t lVar32;
  int64_t lVar33;
  void* pVar35;
  void* pVar36;
  void* pVar37;
  int64_t **pplVar38;
  uint64_t uVar39;
  int64_t *plVar40;
  int64_t *plVar41;
  uint uVar42;
  int iVar43;
  int64_t *arg1;
  uint64_t uVar44;
  int64_t this_ptr;
  int64_t **pplVar45;
  int64_t **pplVar46;
  uint64_t uVar47;
  uint64_t uVar48;
  uint uVar49;
  int64_t lVar50;
  uint uVar51;
  int64_t lVar52;
  int64_t ***ppplVar53;
  int iVar54;
  double dVar55;
  bool bVar56;
  bool bVar57;
  float fVar58;
  uint32_t uVar59;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar60;
  uint32_t extraout_XMM0_Da_01;
  double dVar61;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dc_01;
  uint32_t extraout_XMM0_Dc_02;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint32_t extraout_XMM0_Dd_01;
  uint32_t extraout_XMM0_Dd_02;
  float fVar62;
  uint8_t auVar63 [16];
  uint8_t auVar64 [16];
  uint8_t auVar65 [16];
  double dVar66;
  uint8_t auVar67 [16];
  double dVar68;
  uint64_t local_res10;
  int64_t local_res18;
  int64_t **local_448;
  char local_440;
  void*local_438;
  char local_430;
  int64_t **local_428;
  char local_420;
  int64_t **local_418;
  char local_410;
  int64_t **local_408;
  char local_400;
  int64_t **local_3f8;
  char local_3f0;
  int64_t **local_3e8;
  char local_3e0;
  int64_t local_3d8;
  char local_3d0;
  int64_t local_3c8;
  char local_3c0;
  int64_t **local_3b8;
  char local_3b0;
  void*local_3a8;
  char local_3a0;
  int64_t **local_398;
  char local_390;
  void*local_388;
  char local_380;
  int64_t **local_378;
  char local_370;
  void*local_368;
  char local_360;
  int64_t *local_358;
  char local_350;
  int64_t *local_348;
  char local_340;
  int64_t *local_338;
  char local_330;
  int64_t *local_328;
  char local_320;
  int64_t local_318;
  char local_310;
  int64_t *local_308;
  char local_300;
  int64_t *local_2f8;
  char local_2f0;
  int64_t *local_2e8;
  char local_2e0;
  int64_t *local_2d8;
  char local_2d0;
  void*local_2c8;
  code *local_2c0;
  int64_t local_2b8;
  char local_2b0;
  int64_t local_2a8;
  char local_2a0;
  int64_t **local_298;
  uint32_t local_28c;
  int64_t local_288;
  char local_280;
  int64_t local_278;
  char local_270;
  double local_268;
  uint64_t local_260;
  int64_t **local_258;
  int64_t **local_250;
  double local_248;
  int64_t *local_240;
  char local_238;
  void*local_230;
  int64_t *local_228;
  char local_220;
  void*local_218;
  uint32_t local_20c;
  uint64_t local_208;
  int64_t **local_200;
  int64_t **local_1f8;
  uint64_t local_1f0;
  uint64_t local_1e8;
  uint64_t local_1e0;
  uint64_t local_1d8;
  uint64_t uStack_1d0;
  void*local_1c8;
  int64_t *local_1c0;
  int64_t *local_1b8;
  uint64_t local_1b0;
  void*local_1a0;
  void*local_198;
  void*local_190;
  int64_t *local_188;
  uint64_t local_180;
  void* local_178;
  uint32_t uStack_174;
  void*local_168;
  uint64_t local_158;
  int64_t **local_150;
  int64_t **local_148;
  uint64_t local_140;
  int64_t **local_138;
  int64_t **local_128;
  int64_t **local_108;
  uint8_t local_e8 [16];
  int64_t **local_d0;
  uint64_t local_c8;
  int64_t **local_b0;
  uint64_t local_a8;
  int64_t **local_a0;
  int64_t *local_98;
  uint64_t local_90;
  void* local_7c;
  int64_t **local_78;
  int64_t **local_68;
  int64_t **local_60;
  int64_t **local_58;
  char local_50 [8];
  int64_t **local_48;
  int64_t local_40;
  char local_32;
  byte local_31;
  
  plVar26 = *(int64_t **)(this_ptr + 0x60);
  puVar29 = param_1;
  pvVar20 = _pthread_getspecific((void*)param_1);
  pVar37 = (void*)puVar29;
  if (pvVar20 != (void *)0x0) {
    plVar26 = *(int64_t **)(this_ptr + 0x60);
    lVar21 = FUN_00e8b990();
    if (lVar21 != 0) {
      plVar26 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
    }
  }
  local_248 = (double)(**(code **)(*plVar26 + 0x370))();
  pvVar20 = _pthread_getspecific(pVar37);
  local_40 = this_ptr + 0x68;
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_268 = (double)FUN_0132dc40();
  pvVar20 = _pthread_getspecific(pVar37);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  local_298 = local_58;
  if ((((local_50[0] == '\0') && (local_58 != (int64_t **)0x0)) &&
      (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  pvVar20 = _pthread_getspecific(pVar37);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar17 = FUN_01326de0();
  pvVar20 = _pthread_getspecific(pVar37);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0134a500();
  if (local_58 == (int64_t **)0x0) {
    local_178._0_1_ = 0;
  }
  else {
    pvVar20 = _pthread_getspecific(pVar37);
    if (pvVar20 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134a500();
    pvVar20 = _pthread_getspecific(pVar37);
    if (pvVar20 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_178._0_1_ = FUN_0141baf0();
    if ((local_220 != '\0') && (local_228 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  pvVar20 = _pthread_getspecific(pVar37);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar22 = FUN_0134a500();
  if (local_58 == (int64_t **)0x0) {
    local_190._0_1_ = '\0';
  }
  else {
    pvVar20 = _pthread_getspecific(pVar37);
    if (pvVar20 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134a500();
    pvVar20 = _pthread_getspecific(pVar37);
    if (pvVar20 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar22 = FUN_0141bae0();
    local_190._0_1_ = (char)uVar22;
    if ((local_220 != '\0') && (local_228 != (int64_t *)0x0)) {
      uVar22 = FUN_00d50b20();
    }
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
    uVar22 = FUN_00d50b20();
  }
  if ((char)local_190 == '\0') {
    if (iVar17 == 4) {
      puVar29 = (void*)*param_1;
      if (puVar29 == (void*)0x0) {
        local_208 = 0;
        local_1c8 = (void*)0x0;
      }
      else {
        local_208 = CONCAT71((int7)((uint64_t)uVar22 >> 8),*(char *)(param_1 + 1));
        local_1c8 = puVar29;
        if (*(char *)(param_1 + 1) != '\0') {
          local_1c0 = (int64_t *)0x0;
          local_1f8 = (int64_t **)0x0;
          local_1c8 = (void*)0x0;
          local_1e0 = 0;
          local_200 = (int64_t **)0x0;
          local_48 = (int64_t **)0x0;
          FUN_00d50b00();
          local_1c8 = puVar29;
        }
      }
      puVar29 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar29 = &g_02572358;
      (*g_02572370)();
      if (*(int *)((int64_t)local_1c8 + 0xc) < 1) {
        local_68 = (int64_t **)0x0;
        local_48 = (int64_t **)0x0;
LAB_0146d330:
        pplVar38 = (int64_t **)0x0;
        FUN_00d50b00();
        uVar25 = 1;
        uVar22 = 0;
        puVar23 = puVar29;
      }
      else {
        lVar21 = 0;
        local_68 = (int64_t **)0x0;
        local_48 = (int64_t **)0x0;
        do {
          lVar52 = local_1c8[2];
          pplVar38 = *(int64_t ***)(lVar52 + lVar21 * 8);
          if (local_68 == pplVar38) {
            if (((char)local_48 == '\0') && (local_68 != (int64_t **)0x0)) {
              local_48 = (int64_t **)CONCAT71((int7)((uint64_t)lVar52 >> 8),1);
              FUN_00d50b00();
            }
LAB_0146d120:
            bVar14 = *(byte *)((int64_t)local_68 + 0x3c);
          }
          else {
            if (pplVar38 != (int64_t **)0x0) {
              lVar52 = FUN_00d50b00();
            }
            if (((char)local_48 != '\0') && (local_68 != (int64_t **)0x0)) {
              uVar22 = FUN_00d50b20();
              local_48 = (int64_t **)CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
              local_68 = pplVar38;
              goto LAB_0146d120;
            }
            local_48 = (int64_t **)CONCAT71((int7)((uint64_t)lVar52 >> 8),1);
            bVar14 = *(byte *)((int64_t)pplVar38 + 0x3c);
            local_68 = pplVar38;
          }
          if ((bVar14 & 2) != 0) {
            local_50[0] = '\0';
            local_58 = local_68;
            FUN_00d21140();
            if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
          }
          lVar21 = lVar21 + 1;
        } while (lVar21 < *(int *)((int64_t)local_1c8 + 0xc));
        if (puVar29 != (void*)0x0) goto LAB_0146d330;
        uVar22 = CONCAT71((int7)((uint64_t)lVar21 >> 8),1);
        uVar25 = 0;
        puVar23 = (void*)0x0;
      }
      FUN_014a42b0(0,0);
      local_148 = local_58;
      if (local_58 == (int64_t **)0x0) {
        bVar14 = 1;
        local_148 = (int64_t **)0x0;
        pplVar38 = (int64_t **)0x0;
      }
      else {
        if (local_50[0] == '\0') {
          FUN_00d50b00();
          bVar14 = 0;
          pplVar38 = (int64_t **)CONCAT71((int7)((uint64_t)pplVar38 >> 8),1);
          if ((local_50[0] == '\0') || (local_58 == (int64_t **)0x0)) goto LAB_0146d518;
          FUN_00d50b20();
        }
        else {
          local_50[0] = '\0';
        }
        pplVar38 = (int64_t **)CONCAT71((int7)((uint64_t)pplVar38 >> 8),1);
        bVar14 = 0;
      }
LAB_0146d518:
      FUN_00d216c0();
      local_e8._0_8_ = uVar22;
      if (0 < *(int *)((int64_t)local_1c8 + 0xc)) {
        lVar21 = 0;
        do {
          lVar52 = local_1c8[2];
          pplVar27 = *(int64_t ***)(lVar52 + lVar21 * 8);
          if (local_68 == pplVar27) {
            if (((char)local_48 == '\0') && (local_68 != (int64_t **)0x0)) {
              local_48 = (int64_t **)CONCAT71((int7)((uint64_t)lVar52 >> 8),1);
              FUN_00d50b00();
            }
LAB_0146d610:
            if ((*(byte *)((int64_t)local_68 + 0x3c) & 2) != 0) goto LAB_0146d64a;
LAB_0146d634:
            if (g_02391094 < *(float *)(local_68 + 4)) goto LAB_0146d64a;
          }
          else {
            if (pplVar27 != (int64_t **)0x0) {
              lVar52 = FUN_00d50b00();
            }
            if (((char)local_48 != '\0') && (local_68 != (int64_t **)0x0)) {
              uVar24 = FUN_00d50b20();
              local_48 = (int64_t **)CONCAT71((int7)((uint64_t)uVar24 >> 8),1);
              local_68 = pplVar27;
              goto LAB_0146d610;
            }
            local_48 = (int64_t **)CONCAT71((int7)((uint64_t)lVar52 >> 8),1);
            local_68 = pplVar27;
            if ((*(byte *)((int64_t)pplVar27 + 0x3c) & 2) == 0) goto LAB_0146d634;
LAB_0146d64a:
            local_58 = local_68;
            local_50[0] = '\0';
            FUN_00d21140();
            if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
          }
          lVar21 = lVar21 + 1;
        } while (lVar21 < *(int *)((int64_t)local_1c8 + 0xc));
      }
      local_1a0 = puVar29;
      local_1e8 = 1;
      if (puVar29 == puVar23) {
        local_1a0 = puVar23;
        local_1e8 = uVar25;
      }
      if (puVar29 != puVar23 && (char)uVar22 == '\0') {
        uVar25 = FUN_00d50b00();
        local_1e8 = CONCAT71((int7)((uint64_t)uVar25 >> 8),1);
        local_1a0 = puVar29;
        if (puVar23 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      uVar25 = FUN_014a42b0(g_02421228,0);
      pplVar27 = local_58;
      uVar34 = (undefined7)((uint64_t)uVar25 >> 8);
      if (local_58 == local_148) {
        local_1f8 = pplVar38;
        if ((bool)(bVar14 & local_148 != (int64_t **)0x0)) {
          if (local_50[0] != '\0') goto LAB_0146dcc6;
          local_1f8 = (int64_t **)CONCAT71(uVar34,1);
          FUN_00d50b00();
        }
LAB_0146dd72:
        if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50[0] == '\0') {
          if (local_58 != (int64_t **)0x0) {
            uVar25 = FUN_00d50b00();
          }
          local_1f8 = (int64_t **)CONCAT71((int7)((uint64_t)uVar25 >> 8),1);
          if (((byte)pplVar38 & local_148 != (int64_t **)0x0) == 1) {
            local_148 = pplVar27;
            FUN_00d50b20();
          }
          else {
            local_148 = pplVar27;
          }
          goto LAB_0146dd72;
        }
        bVar56 = local_148 != (int64_t **)0x0;
        local_148 = pplVar27;
        if (((byte)pplVar38 & bVar56) == 1) {
          FUN_00d50b20();
          uVar34 = extraout_var;
        }
LAB_0146dcc6:
        local_50[0] = '\0';
        local_1f8 = (int64_t **)CONCAT71(uVar34,1);
      }
      fVar58 = g_02391090;
      if ((char)uVar22 == '\0') {
        FUN_00d50b20();
        fVar58 = g_02391090;
      }
LAB_0146ddda:
      local_1e0 = 0;
      local_1b0 = CONCAT44(local_1b0._4_4_,fVar58);
      pplVar38 = (int64_t **)0x0;
    }
    else {
      local_1a0 = (void*)*param_2;
      if (local_1a0 == (void*)0x0) {
        local_1a0 = (void*)0x0;
LAB_0146d19f:
        local_1e8 = 0;
      }
      else {
        if ((char)param_2[1] == '\0') goto LAB_0146d19f;
        local_1c0 = (int64_t *)0x0;
        local_1f8 = (int64_t **)0x0;
        local_1c8 = (void*)0x0;
        local_1e0 = 0;
        local_200 = (int64_t **)0x0;
        local_48 = (int64_t **)0x0;
        FUN_00d50b00();
        local_1c0 = (int64_t *)0x0;
        local_1f8 = (int64_t **)0x0;
        local_1e0 = 0;
        local_200 = (int64_t **)0x0;
        local_48 = (int64_t **)0x0;
        local_1c8 = local_1a0;
        uVar22 = FUN_00d50b00();
        local_1e8 = CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
      }
      fVar58 = g_02391090;
      fVar62 = g_0240df04;
      if ((byte)local_178 != 0) {
        fVar58 = g_0240df08;
        fVar62 = g_0239429c;
      }
      pplVar38 = (int64_t **)FUN_00e8fc40();
      FUN_00d4ff40();
      *pplVar38 = (int64_t *)&g_02572358;
      (*g_02572370)();
      if (*(int *)((int64_t)local_1a0 + 0xc) < 1) {
        local_68 = (int64_t **)0x0;
        local_48 = (int64_t **)0x0;
      }
      else {
        lVar21 = 0;
        local_68 = (int64_t **)0x0;
        local_48 = (int64_t **)0x0;
        do {
          lVar52 = local_1a0[2];
          pplVar27 = *(int64_t ***)(lVar52 + lVar21 * 8);
          if (local_68 == pplVar27) {
            if (((char)local_48 == '\0') && (local_68 != (int64_t **)0x0)) {
              local_48 = (int64_t **)CONCAT71((int7)((uint64_t)lVar52 >> 8),1);
              FUN_00d50b00();
            }
          }
          else {
            if (pplVar27 != (int64_t **)0x0) {
              lVar52 = FUN_00d50b00();
            }
            if (((char)local_48 == '\0') || (local_68 == (int64_t **)0x0)) {
              local_48 = (int64_t **)CONCAT71((int7)((uint64_t)lVar52 >> 8),1);
              local_68 = pplVar27;
            }
            else {
              uVar22 = FUN_00d50b20();
              local_48 = (int64_t **)CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
              local_68 = pplVar27;
            }
          }
          if ((*(byte *)((int64_t)local_68 + 0x3c) & 0x50) != 0) {
            local_58 = local_68;
            local_50[0] = '\0';
            FUN_00d21140();
            if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
          }
          lVar21 = lVar21 + 1;
        } while (lVar21 < *(int *)((int64_t)local_1a0 + 0xc));
      }
      local_440 = '\0';
      local_448 = pplVar38;
      FUN_014a42b0(g_0240b530,&local_448,g_02394dc0 * fVar58,fVar62);
      local_148 = local_58;
      if (pplVar38 == local_58) {
LAB_0146d716:
        local_148 = pplVar38;
        if (local_50[0] != '\0') {
LAB_0146d71c:
          if (local_58 != (int64_t **)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if (local_50[0] == '\0') {
          if (local_58 != (int64_t **)0x0) {
            FUN_00d50b00();
          }
          if (pplVar38 != (int64_t **)0x0) {
            FUN_00d50b20();
            pplVar38 = local_148;
            goto LAB_0146d716;
          }
          if (local_50[0] == '\0') goto LAB_0146d72a;
          goto LAB_0146d71c;
        }
        if (pplVar38 != (int64_t **)0x0) {
          FUN_00d50b20();
        }
        local_50[0] = '\0';
      }
LAB_0146d72a:
      if ((local_440 != '\0') && (local_448 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      local_430 = '\0';
      local_428 = local_148;
      local_420 = '\0';
      local_438 = local_1a0;
      uVar22 = FUN_014a42b0(1,0);
      pplVar38 = local_58;
      if (local_58 == local_148) {
LAB_0146d848:
        if (local_50[0] != '\0') {
LAB_0146d84e:
          if (local_58 != (int64_t **)0x0) {
            uVar22 = FUN_00d50b20();
          }
        }
      }
      else {
        if (local_50[0] == '\0') {
          if (local_58 != (int64_t **)0x0) {
            uVar22 = FUN_00d50b00();
          }
          if (local_148 != (int64_t **)0x0) {
            local_148 = pplVar38;
            uVar22 = FUN_00d50b20();
            goto LAB_0146d848;
          }
          local_148 = pplVar38;
          if (local_50[0] == '\0') goto LAB_0146d85c;
          goto LAB_0146d84e;
        }
        if (local_148 != (int64_t **)0x0) {
          uVar22 = FUN_00d50b20();
        }
        local_50[0] = '\0';
        local_148 = pplVar38;
      }
LAB_0146d85c:
      if ((local_420 != '\0') && (local_428 != (int64_t **)0x0)) {
        uVar22 = FUN_00d50b20();
      }
      if ((local_430 != '\0') && (local_438 != (void*)0x0)) {
        uVar22 = FUN_00d50b20();
      }
      local_1f8 = (int64_t **)CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
      local_1e0 = 0;
      if (*(int *)((int64_t)local_148 + 0xc) < 1) {
LAB_0146db88:
        local_208 = local_1e8;
        local_1c8 = local_1a0;
        goto LAB_0146ddda;
      }
      iVar54 = 0;
      do {
        plVar26 = local_148[2];
        pplVar38 = (int64_t **)plVar26[iVar54];
        if (local_68 == pplVar38) {
          if (((char)local_48 == '\0') && (local_68 != (int64_t **)0x0)) {
            local_48 = (int64_t **)CONCAT71((int7)((uint64_t)plVar26 >> 8),1);
            FUN_00d50b00();
          }
LAB_0146d950:
          bVar14 = *(byte *)((int64_t)local_68 + 0x3c);
        }
        else {
          if (pplVar38 != (int64_t **)0x0) {
            plVar26 = (int64_t *)FUN_00d50b00();
          }
          if (((char)local_48 != '\0') && (local_68 != (int64_t **)0x0)) {
            uVar22 = FUN_00d50b20();
            local_48 = (int64_t **)CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
            local_68 = pplVar38;
            goto LAB_0146d950;
          }
          local_48 = (int64_t **)CONCAT71((int7)((uint64_t)plVar26 >> 8),1);
          bVar14 = *(byte *)((int64_t)pplVar38 + 0x3c);
          local_68 = pplVar38;
        }
        if ((bVar14 & 0x40) != 0) {
          if (*(int *)(local_68 + 8) == 1) {
            if (iVar54 < *(int *)((int64_t)local_148 + 0xc) + -1) {
              FUN_00d23620();
            }
          }
          else if (*(int *)(local_68 + 8) == -1) {
            FUN_00d23620();
            iVar54 = iVar54 + -1;
          }
        }
        iVar54 = iVar54 + 1;
      } while (iVar54 < *(int *)((int64_t)local_148 + 0xc));
      if (*(int *)((int64_t)local_148 + 0xc) < 2) goto LAB_0146db88;
      iVar54 = 1;
      local_200 = (int64_t **)0x0;
      local_1e0 = 0;
      do {
        pplVar38 = (int64_t **)local_148[2][iVar54];
        if (local_68 == pplVar38) {
          if ((char)local_48 == '\0') {
            local_48 = (int64_t **)CONCAT71((int7)((uint64_t)local_148[2] >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          if (pplVar38 != (int64_t **)0x0) {
            FUN_00d50b00();
          }
          local_68 = pplVar38;
          if ((char)local_48 == '\0') {
            local_48 = (int64_t **)CONCAT71((int7)((uint64_t)local_48 >> 8),1);
          }
          else {
            uVar22 = FUN_00d50b20();
            local_48 = (int64_t **)CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
          }
        }
        plVar26 = local_148[2];
        pplVar38 = (int64_t **)plVar26[(int64_t)iVar54 + -1];
        if (local_200 == pplVar38) {
          if (((char)local_1e0 == '\0') && (local_200 != (int64_t **)0x0)) {
            local_1e0 = CONCAT71((int7)((uint64_t)plVar26 >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          if (pplVar38 != (int64_t **)0x0) {
            plVar26 = (int64_t *)FUN_00d50b00();
          }
          if (((char)local_1e0 == '\0') || (local_200 == (int64_t **)0x0)) {
            local_1e0 = CONCAT71((int7)((uint64_t)plVar26 >> 8),1);
            local_200 = pplVar38;
          }
          else {
            local_200 = pplVar38;
            uVar22 = FUN_00d50b20();
            local_1e0 = CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
          }
        }
        if ((double)local_68[3] - (double)local_200[2] < (double)fVar62) {
          FUN_00d23620();
          iVar54 = iVar54 + -1;
        }
        iVar54 = iVar54 + 1;
      } while (iVar54 < *(int *)((int64_t)local_148 + 0xc));
      local_208 = local_1e8;
      local_1b0 = CONCAT44(local_1b0._4_4_,fVar58);
      pplVar38 = local_200;
      local_1c8 = local_1a0;
    }
  }
  else {
    local_1a0 = (void*)*param_1;
    if (local_1a0 == (void*)0x0) {
      local_1a0 = (void*)0x0;
LAB_0146cebb:
      local_1e8 = 0;
    }
    else {
      if (*(char *)(param_1 + 1) == '\0') goto LAB_0146cebb;
      local_1c0 = (int64_t *)0x0;
      local_1f8 = (int64_t **)0x0;
      local_1c8 = (void*)0x0;
      local_1e0 = 0;
      local_200 = (int64_t **)0x0;
      local_48 = (int64_t **)0x0;
      FUN_00d50b00();
      local_1c0 = (int64_t *)0x0;
      local_1f8 = (int64_t **)0x0;
      local_1e0 = 0;
      local_200 = (int64_t **)0x0;
      local_48 = (int64_t **)0x0;
      local_1c8 = local_1a0;
      uVar22 = FUN_00d50b00();
      local_1e8 = CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
    }
    local_1b0 = CONCAT44(local_1b0._4_4_,g_0240df0c);
    FUN_014a42b0(0,0);
    local_148 = local_58;
    if (local_58 == (int64_t **)0x0) {
      local_148 = (int64_t **)0x0;
      local_1f8 = (int64_t **)0x0;
    }
    else if (local_50[0] == '\0') {
      uVar22 = FUN_00d50b00();
      local_1f8 = (int64_t **)CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
      if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
      local_1f8 = (int64_t **)CONCAT71((int7)((uint64_t)local_58 >> 8),1);
    }
    local_1e0 = 0;
    local_208 = local_1e8;
    local_1c8 = local_1a0;
    local_48 = (int64_t **)0x0;
    local_68 = (int64_t **)0x0;
    pplVar38 = (int64_t **)0x0;
  }
  local_200 = pplVar38;
  plVar26 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar26 + 0x18))();
  local_1c0 = plVar26;
  FUN_00d216c0();
  if (*(int *)((int64_t)local_148 + 0xc) < 1) {
    local_7c = 0;
    pplVar27 = (int64_t **)0x0;
    local_180 = 0;
    pplVar38 = (int64_t **)0x0;
    local_78 = (int64_t **)0x0;
  }
  else {
    dVar55 = 0.0;
    local_78 = (int64_t **)0x0;
    local_180 = 0;
    local_128 = (int64_t **)0x0;
    local_7c = 0;
    do {
      pVar37 = (void*)pplVar38;
      plVar26 = local_148[2];
      pplVar38 = (int64_t **)plVar26[(int64_t)dVar55];
      bVar14 = (byte)local_7c;
      if (local_68 == pplVar38) {
        if (((char)local_48 == '\0') && (local_68 != (int64_t **)0x0)) {
          local_48 = (int64_t **)CONCAT71((int7)((uint64_t)plVar26 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (pplVar38 != (int64_t **)0x0) {
          plVar26 = (int64_t *)FUN_00d50b00();
        }
        if (((char)local_48 == '\0') || (local_68 == (int64_t **)0x0)) {
          local_48 = (int64_t **)CONCAT71((int7)((uint64_t)plVar26 >> 8),1);
          local_68 = pplVar38;
        }
        else {
          uVar22 = FUN_00d50b20();
          local_48 = (int64_t **)CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
          local_68 = pplVar38;
        }
      }
      local_138 = local_78;
      local_1d8 = (int64_t *)dVar55;
      if ((dVar55 == 0.0) && (g_0241b598 < (double)local_68[3])) {
        local_138 = (int64_t **)FUN_00e8fc40();
        FUN_010fe5f0();
        (*(*local_138)[3])();
        uVar34 = (undefined7)((uint64_t)local_138 >> 8);
        if (local_138 == local_78) {
          if ((char)local_180 == '\0') {
            local_180 = CONCAT71(uVar34,1);
            local_138 = local_78;
          }
          else {
            FUN_00d50b20();
            local_138 = local_78;
          }
        }
        else {
          bVar56 = (char)local_180 != '\0';
          local_180 = CONCAT71(uVar34,1);
          if ((bVar56) && (local_78 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
        }
        pvVar20 = _pthread_getspecific(pVar37);
        if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          pVar37 = (void*)local_138;
        }
        FUN_014bb250();
        local_58 = local_138;
        local_50[0] = '\0';
        FUN_00d21140();
        if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
        if (local_128 == local_138) {
          local_138 = local_128;
          if (bVar14 == 0) {
            if (local_128 == (int64_t **)0x0) {
              bVar14 = 0;
            }
            else {
              bVar14 = 1;
              FUN_00d50b00();
            }
          }
        }
        else {
          if (local_138 != (int64_t **)0x0) {
            FUN_00d50b00();
          }
          bVar56 = bVar14 == 0;
          bVar14 = (byte)local_180;
          if ((bVar56) || (local_128 == (int64_t **)0x0)) {
            local_128 = local_138;
          }
          else {
            local_128 = local_138;
            FUN_00d50b20();
          }
        }
      }
      local_78 = (int64_t **)FUN_00e8fc40();
      FUN_010fe5f0();
      uVar22 = (*(*local_78)[3])();
      uVar34 = (undefined7)((uint64_t)uVar22 >> 8);
      if (local_78 == local_138) {
        local_78 = local_138;
        if ((char)local_180 == '\0') {
          local_180 = CONCAT71(uVar34,1);
        }
        else {
          FUN_00d50b20();
        }
      }
      else {
        bVar56 = (char)local_180 != '\0';
        local_180 = CONCAT71(uVar34,1);
        if ((bVar56) && (local_138 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
      }
      pplVar38 = (int64_t **)local_68[3];
      plVar26 = *(int64_t **)(this_ptr + 0x60);
      pvVar20 = _pthread_getspecific(pVar37);
      if (pvVar20 != (void *)0x0) {
        plVar26 = *(int64_t **)(this_ptr + 0x60);
        lVar21 = FUN_00e8b990();
        if (lVar21 != 0) {
          plVar26 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
        }
      }
      pplVar27 = (int64_t **)(uint64_t)bVar14;
      dVar55 = (double)(**(code **)(*plVar26 + 0x370))();
      pvVar20 = _pthread_getspecific((void*)pplVar27);
      if (pvVar20 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bb250(SUB84((double)pplVar38 * dVar55,0));
      local_50[0] = '\0';
      local_58 = local_78;
      uVar59 = FUN_00d21140();
      if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
        uVar59 = FUN_00d50b20();
      }
      local_410 = '\0';
      local_50[0] = '\0';
      local_418 = local_68;
      local_58 = local_78;
      FUN_00ca0840(uVar59,&local_58);
      if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      if ((local_410 != '\0') && (local_418 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      if (local_128 != (int64_t **)0x0) {
        pvVar20 = _pthread_getspecific((void*)pplVar27);
        pplVar38 = local_128;
        if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          pplVar27 = local_128;
          pplVar38 = (int64_t **)local_128[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
        }
        pvVar20 = _pthread_getspecific((void*)pplVar27);
        pplVar27 = local_78;
        if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          pplVar27 = (int64_t **)local_78[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
        }
        pVar37 = (void*)bVar14;
        (*(*pplVar27)[0x70])();
        pvVar20 = _pthread_getspecific(pVar37);
        pplVar27 = local_128;
        if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          pplVar27 = (int64_t **)local_128[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
        }
        (*(*pplVar27)[0x70])(bVar14);
        FUN_014bb2b0();
      }
      local_e8._0_8_ = pplVar38;
      if (local_128 == local_78) {
        pplVar27 = local_128;
        if (bVar14 == 0) {
          if (local_128 == (int64_t **)0x0) {
            local_7c = 0;
          }
          else {
            local_7c = (void*)CONCAT71((int7)((uint64_t)local_78 >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          local_7c = (void*)bVar14;
        }
      }
      else {
        if (local_78 != (int64_t **)0x0) {
          FUN_00d50b00();
        }
        local_7c = (void*)local_180;
        pplVar27 = local_78;
        if ((bVar14 != 0) && (local_128 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
      }
      dVar55 = (double)((int64_t)local_1d8 + 1);
      pplVar38 = (int64_t **)(int64_t)*(int *)((int64_t)local_148 + 0xc);
      local_128 = pplVar27;
    } while ((int64_t)dVar55 < (int64_t)pplVar38);
  }
  pVar37 = (void*)pplVar38;
  pplVar46 = local_78;
  local_128 = pplVar27;
  if (*(int *)(*arg1 + 0xc) == 0) {
    local_138 = (int64_t **)FUN_00e8fc40();
    FUN_010fe5f0();
    (*(*local_138)[3])();
    uVar34 = (undefined7)((uint64_t)local_138 >> 8);
    if (local_138 == local_78) {
      if ((char)local_180 == '\0') {
        local_180 = CONCAT71(uVar34,1);
        local_138 = local_78;
      }
      else {
        FUN_00d50b20();
        local_138 = local_78;
      }
    }
    else {
      bVar56 = (char)local_180 != '\0';
      local_180 = CONCAT71(uVar34,1);
      if ((bVar56) && (local_78 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
    }
    pvVar20 = _pthread_getspecific((void*)pplVar38);
    if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
      pplVar38 = local_138;
    }
    pVar37 = (void*)pplVar38;
    FUN_014bb250();
    local_58 = local_138;
    local_50[0] = '\0';
    FUN_00d21140();
    if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
      FUN_00d50b20();
    }
    cVar15 = (char)local_7c;
    if (pplVar27 == local_138) {
      pplVar46 = pplVar27;
      if ((cVar15 == '\0') && (pplVar27 != (int64_t **)0x0)) {
        local_7c = (void*)CONCAT71((int7)((uint64_t)local_138 >> 8),1);
        FUN_00d50b00();
      }
    }
    else {
      if (local_138 != (int64_t **)0x0) {
        FUN_00d50b00();
      }
      local_7c = (void*)local_180;
      pplVar46 = local_138;
      if ((cVar15 == '\0') || (pplVar27 == (int64_t **)0x0)) {
        local_128 = local_138;
      }
      else {
        local_128 = local_138;
        FUN_00d50b20();
      }
    }
  }
  local_138 = pplVar46;
  pvVar20 = _pthread_getspecific(pVar37);
  if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
    pVar37 = (void*)local_128;
  }
  pvVar20 = _pthread_getspecific(pVar37);
  pplVar38 = local_128;
  if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
    pplVar38 = (int64_t **)local_128[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
  }
  pVar37 = local_7c;
  (*(*pplVar38)[0x70])();
  FUN_014bb2b0();
  local_178._0_1_ = iVar17 != 1 | (byte)local_178;
  if ((byte)local_178 == 1) {
    lVar21 = *arg1;
    pVar37 = *(void* *)(lVar21 + 0xc);
    local_158._0_1_ = '\0';
    local_150 = (int64_t **)0x0;
    bVar56 = false;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_e8._8_8_;
    local_e8 = auVar5 << 0x40;
    pplVar38 = (int64_t **)0x0;
    if (0 < (int)pVar37) goto LAB_0146e78f;
LAB_01470874:
    local_e8._0_8_ = pplVar38;
    bVar11 = false;
    local_d0 = (int64_t **)0x0;
  }
  else {
    pvVar20 = _pthread_getspecific(pVar37);
    if (pvVar20 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar17 = FUN_0132dc90();
    pvVar20 = _pthread_getspecific(pVar37);
    if (pvVar20 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar55 = (double)FUN_0132dc40();
    pvVar20 = _pthread_getspecific(pVar37);
    if (pvVar20 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320d00();
    pplVar38 = local_58;
    pvVar20 = _pthread_getspecific(pVar37);
    pplVar27 = local_58;
    if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), pplVar38 = pplVar27, lVar21 != 0)) {
      pplVar38 = (int64_t **)pplVar27[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
    }
    dVar61 = (double)(*(*pplVar38)[0x6e])();
    uVar59 = SUB84(dVar61,0);
    if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
      FUN_00d50b20();
    }
    uVar39 = FUN_00e83010();
    uVar49 = iVar17 + 1;
    local_218 = (void*)CONCAT44(local_218._4_4_,uVar49);
    if (-1 < iVar17) {
      uVar47 = (uint64_t)uVar49;
      if (uVar49 < 4) {
        uVar44 = 0;
      }
      else if ((uVar39 < local_res10 + uVar47 * 4) && (local_res10 < uVar39 + uVar47 * 4)) {
        uVar44 = 0;
      }
      else {
        uVar44 = (uint64_t)(uVar49 & 0xfffffffc);
        uVar48 = 0;
        do {
          uVar22 = *(void*)(local_res10 + uVar48 * 4);
          dVar66 = (double)(float)((uint64_t)uVar22 >> 0x20);
          uVar25 = *(void*)(local_res10 + 8 + uVar48 * 4);
          auVar63._0_8_ = (double)(float)uVar25;
          auVar63._8_8_ = (double)(float)((uint64_t)uVar25 >> 0x20);
          auVar4._8_4_ = uVar59;
          auVar4._0_8_ = dVar61;
          auVar4._12_4_ = (int)((uint64_t)dVar61 >> 0x20);
          auVar67 = divpd(auVar4,auVar63);
          auVar64._8_4_ = SUB84(dVar66,0);
          auVar64._0_8_ = (double)(float)uVar22;
          auVar64._12_4_ = (int)((uint64_t)dVar66 >> 0x20);
          auVar64 = divpd(auVar4,auVar64);
          dVar66 = auVar67._0_8_ * g_0240df70;
          dVar68 = auVar67._8_8_ * _UNK_0240df78;
          local_1d8 = (int64_t *)
                      CONCAT44((float)(auVar64._8_8_ * _UNK_0240df78),
                               (float)(auVar64._0_8_ * g_0240df70));
          uStack_1d0 = 0;
          local_e8._0_8_ = _logf();
          local_e8._8_4_ = extraout_XMM0_Dc;
          local_e8._12_4_ = extraout_XMM0_Dd;
          uVar22 = _logf(local_1d8._4_4_);
          auVar67._8_4_ = extraout_XMM0_Dc_00;
          auVar67._0_8_ = uVar22;
          auVar67._12_4_ = extraout_XMM0_Dd_00;
          auVar64 = insertps(local_e8,auVar67,0x10);
          uVar22 = _logf((float)dVar66);
          auVar1._8_4_ = extraout_XMM0_Dc_01;
          auVar1._0_8_ = uVar22;
          auVar1._12_4_ = extraout_XMM0_Dd_01;
          local_e8 = insertps(auVar64,auVar1,0x20);
          uVar22 = _logf((float)dVar68);
          auVar2._8_4_ = extraout_XMM0_Dc_02;
          auVar2._0_8_ = uVar22;
          auVar2._12_4_ = extraout_XMM0_Dd_02;
          auVar64 = insertps(local_e8,auVar2,0x30);
          auVar65._0_4_ = auVar64._0_4_ * g_02394170;
          auVar65._4_4_ = auVar64._4_4_ * _UNK_02394174;
          auVar65._8_4_ = auVar64._8_4_ * _UNK_02394178;
          auVar65._12_4_ = auVar64._12_4_ * _UNK_0239417c;
          *(uint8_t (*) [16])(uVar39 + uVar48 * 4) = auVar65;
          uVar48 = uVar48 + 4;
        } while (uVar44 != uVar48);
        if (uVar44 == uVar47) goto LAB_0146f627;
      }
      uVar48 = ~uVar44;
      if ((uVar49 & 1) != 0) {
        fVar62 = (float)_logf((float)((dVar61 / (double)*(float *)(local_res10 + uVar44 * 4)) *
                                     g_0240de70));
        *(float *)(uVar39 + uVar44 * 4) = fVar62 * g_02394208;
        uVar44 = uVar44 | 1;
      }
      if (uVar48 + uVar47 != 0) {
        do {
          fVar62 = (float)_logf((float)((dVar61 / (double)*(float *)(local_res10 + uVar44 * 4)) *
                                       g_0240de70));
          *(float *)(uVar39 + uVar44 * 4) = fVar62 * g_02394208;
          fVar62 = (float)_logf((float)((dVar61 / (double)*(float *)(local_res10 + 4 + uVar44 * 4))
                                       * g_0240de70));
          *(float *)(uVar39 + 4 + uVar44 * 4) = fVar62 * g_02394208;
          uVar44 = uVar44 + 2;
        } while (uVar47 != uVar44);
      }
    }
LAB_0146f627:
    uVar22 = local_e8._8_8_;
    local_218 = (void*)FUN_01641e90(SUB84(dVar55,0));
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_e8._8_8_;
    local_e8 = auVar7 << 0x40;
    FUN_00e83070();
    lVar21 = *arg1;
    uVar49 = *(uint *)(lVar21 + 0xc);
    plVar26 = (int64_t *)(uint64_t)uVar49;
    if ((int)uVar49 < 1) {
      bVar56 = false;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar22;
      local_e8 = auVar8 << 0x40;
      if ((int)uVar49 < 2) goto LAB_014701f8;
LAB_0146f989:
      uVar39 = (uint64_t)local_48 & 0xffffffff;
      local_150 = (int64_t **)0x0;
      local_158 = 0;
      pVar37 = 0;
      do {
        plVar26 = (int64_t *)(uVar39 & 0xffffffff);
        uVar39 = (uint64_t)(int)pVar37;
        lVar21 = *(int64_t *)(*(int64_t *)(lVar21 + 0x10) + uVar39 * 8);
        local_48 = (int64_t **)plVar26;
        if (local_e8._0_8_ == lVar21) {
          if ((!bVar56) && (local_e8._0_8_ != 0)) {
            bVar56 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar21 != 0) {
            FUN_00d50b00();
          }
          if ((bVar56) && (local_e8._0_8_ != 0)) {
            local_e8._0_8_ = lVar21;
            FUN_00d50b20();
            bVar56 = true;
          }
          else {
            bVar56 = true;
            local_e8._0_8_ = lVar21;
          }
        }
        lVar21 = *(int64_t *)(*arg1 + 0x10);
        pplVar38 = *(int64_t ***)(lVar21 + 8 + uVar39 * 8);
        if (local_150 == pplVar38) {
          if (((char)local_158 == '\0') && (local_150 != (int64_t **)0x0)) {
            local_158 = CONCAT71((int7)((uint64_t)lVar21 >> 8),1);
            uVar39 = 0;
            FUN_00d50b00();
          }
        }
        else {
          if (pplVar38 != (int64_t **)0x0) {
            uVar39 = local_158 & 0xffffffff;
            lVar21 = FUN_00d50b00();
          }
          if (((char)local_158 == '\0') || (local_150 == (int64_t **)0x0)) {
            local_158 = CONCAT71((int7)((uint64_t)lVar21 >> 8),1);
            local_150 = pplVar38;
          }
          else {
            uVar39 = local_158 & 0xffffffff;
            uVar22 = FUN_00d50b20();
            local_158 = CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
            local_150 = pplVar38;
          }
        }
        pvVar20 = _pthread_getspecific((void*)plVar26);
        plVar41 = (int64_t *)local_e8._0_8_;
        if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          plVar26 = (int64_t *)local_e8._0_8_;
          plVar41 = *(int64_t **)
                     (local_e8._0_8_ + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
        }
        pVar35 = (void*)plVar26;
        fVar62 = (float)(**(code **)(*plVar41 + 0x3e0))();
        pvVar20 = _pthread_getspecific(pVar35);
        pplVar38 = local_150;
        if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          pplVar38 = (int64_t **)local_150[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
        }
        uVar60 = (*(*pplVar38)[0x7c])();
        local_1d8 = (int64_t *)CONCAT44(local_1d8._4_4_,uVar60);
        local_408 = local_150;
        local_400 = '\0';
        FUN_0147e760(uVar60,&local_408);
        pplVar38 = local_58;
        uVar34 = (undefined7)(uVar39 >> 8);
        if (local_58 == local_68) {
          if (((char)local_48 == '\0') && (local_58 != (int64_t **)0x0)) {
            pplVar38 = local_68;
            if (local_50[0] != '\0') goto LAB_0146fc65;
            uVar39 = CONCAT71(uVar34,1);
            FUN_00d50b00();
          }
          else {
            uVar39 = (uint64_t)local_48 & 0xffffffff;
          }
        }
        else {
          if (local_50[0] == '\0') {
            if (local_58 != (int64_t **)0x0) {
              FUN_00d50b00();
            }
            uVar39 = CONCAT71(uVar34,1);
            if (((char)local_48 != '\0') && (local_68 != (int64_t **)0x0)) {
              FUN_00d50b20();
              local_68 = pplVar38;
              goto LAB_0146fcc0;
            }
          }
          else {
            if (((char)local_48 != '\0') && (local_68 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
LAB_0146fc65:
            local_50[0] = '\0';
          }
          uVar39 = CONCAT71(uVar34,1);
          local_68 = pplVar38;
        }
LAB_0146fcc0:
        if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
        if ((local_400 != '\0') && (local_408 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
        pVar35 = pVar37 + 1;
        if (local_68 != (int64_t **)0x0) {
          fVar62 = (float)((uint)(fVar62 - (float)local_1d8) & g_02390140);
          uVar49 = (int)((double)local_68[2] * dVar55);
          if (iVar17 <= (int)((double)local_68[2] * dVar55)) {
            uVar49 = iVar17 - 1;
          }
          if ((int)uVar49 < 0) {
            uVar49 = 0;
          }
          if (((fVar62 < g_02390438) &&
              ((((*(uint *)((int64_t)local_68 + 0x3c) & 8) != 0 &&
                (*(float *)(local_68 + 4) <= g_02390124 &&
                 g_02390124 != *(float *)(local_68 + 4))) ||
               (((*(uint *)((int64_t)local_68 + 0x3c) & 0x70) == 0 &&
                (*(float *)(local_68 + 4) <= g_02394214 &&
                 g_02394214 != *(float *)(local_68 + 4))))))) ||
             ((((fVar58 = *(float *)((int64_t)local_218 + (uint64_t)uVar49 * 4),
                g_02394288 < fVar58 && ((*(byte *)((int64_t)local_68 + 0x3c) & 0x70) == 0)) &&
               (fVar62 < fVar58 * g_023908dc)) &&
              (*(float *)(local_68 + 4) <= g_02394244 && g_02394244 != *(float *)(local_68 + 4))
              ))) {
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            pvVar20 = _pthread_getspecific(pVar35);
            if (pvVar20 != (void *)0x0) {
              local_48 = (int64_t **)(uVar39 & 0xffffffff);
              lVar21 = FUN_00e8b990();
              if (lVar21 != 0) {
                pVar35 = local_e8._0_4_;
              }
            }
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            pvVar20 = _pthread_getspecific(pVar35);
            plVar26 = (int64_t *)local_e8._0_8_;
            if (pvVar20 != (void *)0x0) {
              local_48 = (int64_t **)(uVar39 & 0xffffffff);
              lVar21 = FUN_00e8b990();
              if (lVar21 != 0) {
                plVar26 = *(int64_t **)
                           (local_e8._0_8_ + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
              }
            }
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            pVar36 = (void*)uVar39;
            pVar35 = pVar36;
            (**(code **)(*plVar26 + 0x388))();
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            pvVar20 = _pthread_getspecific(pVar35);
            pplVar38 = local_150;
            if (pvVar20 != (void *)0x0) {
              local_48 = (int64_t **)(uVar39 & 0xffffffff);
              lVar21 = FUN_00e8b990();
              if (lVar21 != 0) {
                pplVar38 = (int64_t **)local_150[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
              }
            }
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            (*(*pplVar38)[0x71])();
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            pVar35 = pVar36;
            FUN_014bb2b0();
            local_58 = local_150;
            local_50[0] = '\0';
            FUN_00ca13a0();
            if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
            local_58 = local_150;
            local_50[0] = '\0';
            FUN_00d23f50();
            if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            pvVar20 = _pthread_getspecific(pVar35);
            if (pvVar20 != (void *)0x0) {
              local_48 = (int64_t **)(uVar39 & 0xffffffff);
              FUN_00e8b990();
            }
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            pvVar20 = _pthread_getspecific(pVar35);
            plVar26 = (int64_t *)local_e8._0_8_;
            if (pvVar20 != (void *)0x0) {
              local_48 = (int64_t **)(uVar39 & 0xffffffff);
              lVar21 = FUN_00e8b990();
              if (lVar21 != 0) {
                plVar26 = *(int64_t **)
                           (local_e8._0_8_ + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
              }
            }
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            (**(code **)(*plVar26 + 0x380))();
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            pVar35 = pVar36;
            FUN_0132dca0();
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            pvVar20 = _pthread_getspecific(pVar35);
            if (pvVar20 != (void *)0x0) {
              local_48 = (int64_t **)(uVar39 & 0xffffffff);
              FUN_00e8b990();
            }
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            pvVar20 = _pthread_getspecific(pVar35);
            plVar26 = (int64_t *)local_e8._0_8_;
            if (pvVar20 != (void *)0x0) {
              local_48 = (int64_t **)(uVar39 & 0xffffffff);
              lVar21 = FUN_00e8b990();
              if (lVar21 != 0) {
                plVar26 = *(int64_t **)
                           (local_e8._0_8_ + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
              }
            }
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            pVar35 = pVar36;
            (**(code **)(*plVar26 + 0x380))();
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            pvVar20 = _pthread_getspecific(pVar35);
            plVar26 = (int64_t *)local_e8._0_8_;
            if (pvVar20 != (void *)0x0) {
              local_48 = (int64_t **)(uVar39 & 0xffffffff);
              lVar21 = FUN_00e8b990();
              if (lVar21 != 0) {
                plVar26 = *(int64_t **)
                           (local_e8._0_8_ + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
              }
            }
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            (**(code **)(*plVar26 + 0x388))();
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            FUN_0132dca0();
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            pvVar20 = _pthread_getspecific(pVar36);
            if (pvVar20 != (void *)0x0) {
              local_48 = (int64_t **)(uVar39 & 0xffffffff);
              FUN_00e8b990();
            }
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            FUN_014bd8e0(uVar59,dVar55,local_res18);
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            FUN_014bd3c0();
            pVar35 = pVar37;
          }
        }
        lVar21 = *arg1;
        pVar37 = pVar35;
      } while ((int)pVar35 < *(int *)(lVar21 + 0xc) + -1);
    }
    else {
      lVar52 = 0;
      plVar41 = (int64_t *)0x0;
      bVar11 = false;
      do {
        plVar40 = *(int64_t **)(*(int64_t *)(lVar21 + 0x10) + lVar52 * 8);
        if (plVar41 == plVar40) {
          if ((bVar11) || (plVar41 == (int64_t *)0x0)) {
            local_e8._0_8_ = plVar41;
            bVar56 = bVar11;
          }
          else {
            FUN_00d50b00();
            local_e8._0_8_ = plVar41;
            bVar56 = true;
          }
        }
        else {
          local_e8._0_8_ = plVar40;
          plVar26 = plVar40;
          if (plVar40 != (int64_t *)0x0) {
            FUN_00d50b00();
            plVar26 = plVar40;
          }
          bVar56 = true;
          if ((bVar11) && (plVar41 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        pvVar20 = _pthread_getspecific((void*)plVar26);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar20 = _pthread_getspecific((void*)plVar26);
        plVar41 = (int64_t *)local_e8._0_8_;
        if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          plVar26 = (int64_t *)local_e8._0_8_;
          plVar41 = *(int64_t **)
                     (local_e8._0_8_ + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
        }
        (**(code **)(*plVar41 + 0x380))();
        FUN_0132dca0();
        pvVar20 = _pthread_getspecific((void*)plVar26);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar20 = _pthread_getspecific((void*)plVar26);
        plVar41 = (int64_t *)local_e8._0_8_;
        if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          plVar26 = (int64_t *)local_e8._0_8_;
          plVar41 = *(int64_t **)
                     (local_e8._0_8_ + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
        }
        (**(code **)(*plVar41 + 0x380))();
        pvVar20 = _pthread_getspecific((void*)plVar26);
        plVar41 = (int64_t *)local_e8._0_8_;
        if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          plVar26 = (int64_t *)local_e8._0_8_;
          plVar41 = *(int64_t **)
                     (local_e8._0_8_ + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
        }
        pVar37 = (void*)plVar26;
        (**(code **)(*plVar41 + 0x388))();
        FUN_0132dca0();
        pvVar20 = _pthread_getspecific(pVar37);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bf230(uVar59,dVar55,local_res18);
        FUN_014bd3c0();
        lVar52 = lVar52 + 1;
        lVar21 = *arg1;
        plVar26 = (int64_t *)(int64_t)*(int *)(lVar21 + 0xc);
        plVar41 = (int64_t *)local_e8._0_8_;
        bVar11 = bVar56;
      } while (lVar52 < (int64_t)plVar26);
      if (1 < *(int *)(lVar21 + 0xc)) goto LAB_0146f989;
LAB_014701f8:
      local_158 = 0;
      local_150 = (int64_t **)0x0;
      uVar39 = (uint64_t)local_48 & 0xffffffff;
    }
    local_48 = (int64_t **)(uVar39 & 0xffffffff);
    FUN_00e83070();
    lVar21 = *arg1;
    pVar37 = *(void* *)(lVar21 + 0xc);
    if (1 < (int)pVar37) {
      iVar17 = 1;
      do {
        pplVar38 = (int64_t **)(uVar39 & 0xffffffff);
        uVar39 = (uint64_t)iVar17;
        lVar21 = *(int64_t *)(*(int64_t *)(lVar21 + 0x10) + uVar39 * 8);
        local_48 = pplVar38;
        if (local_e8._0_8_ == lVar21) {
          if ((!bVar56) && (local_e8._0_8_ != 0)) {
            bVar56 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar21 != 0) {
            FUN_00d50b00();
          }
          if ((bVar56) && (local_e8._0_8_ != 0)) {
            local_e8._0_8_ = lVar21;
            FUN_00d50b20();
            bVar56 = true;
          }
          else {
            bVar56 = true;
            local_e8._0_8_ = lVar21;
          }
        }
        lVar21 = *(int64_t *)(*arg1 + 0x10);
        pplVar27 = *(int64_t ***)(lVar21 + -8 + uVar39 * 8);
        if (local_128 == pplVar27) {
          if (((char)local_7c == '\0') && (local_128 != (int64_t **)0x0)) {
            local_7c = (void*)CONCAT71((int7)((uint64_t)lVar21 >> 8),1);
            uVar39 = 0;
            FUN_00d50b00();
          }
        }
        else {
          if (pplVar27 != (int64_t **)0x0) {
            uVar39 = (uint64_t)local_7c;
            lVar21 = FUN_00d50b00();
          }
          if (((char)local_7c == '\0') || (local_128 == (int64_t **)0x0)) {
            local_7c = (void*)CONCAT71((int7)((uint64_t)lVar21 >> 8),1);
            local_128 = pplVar27;
          }
          else {
            uVar39 = (uint64_t)local_7c;
            uVar22 = FUN_00d50b20();
            local_7c = (void*)CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
            local_128 = pplVar27;
          }
        }
        pvVar20 = _pthread_getspecific((void*)pplVar38);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar20 = _pthread_getspecific((void*)pplVar38);
        pplVar27 = (int64_t **)local_e8._0_8_;
        if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          pplVar38 = (int64_t **)local_e8._0_8_;
          pplVar27 = *(int64_t ***)
                      (local_e8._0_8_ + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
        }
        (*(*pplVar27)[0x70])();
        iVar54 = FUN_0132dca0();
        pvVar20 = _pthread_getspecific((void*)pplVar38);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar20 = _pthread_getspecific((void*)pplVar38);
        pplVar27 = (int64_t **)local_e8._0_8_;
        if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          pplVar38 = (int64_t **)local_e8._0_8_;
          pplVar27 = *(int64_t ***)
                      (local_e8._0_8_ + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
        }
        (*(*pplVar27)[0x70])();
        pvVar20 = _pthread_getspecific((void*)pplVar38);
        pplVar27 = (int64_t **)local_e8._0_8_;
        if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          pplVar38 = (int64_t **)local_e8._0_8_;
          pplVar27 = *(int64_t ***)
                      (local_e8._0_8_ + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
        }
        (*(*pplVar27)[0x71])();
        iVar18 = FUN_0132dca0();
        local_3f8 = (int64_t **)local_e8._0_8_;
        local_3f0 = '\0';
        FUN_0147e760(extraout_XMM0_Da,&local_3f8);
        pplVar27 = local_58;
        uVar34 = (undefined7)(uVar39 >> 8);
        if (local_58 == local_68) {
          if (((char)local_48 == '\0') && (local_58 != (int64_t **)0x0)) {
            pplVar27 = local_68;
            if (local_50[0] != '\0') goto LAB_014705c5;
            uVar39 = CONCAT71(uVar34,1);
            FUN_00d50b00();
          }
          else {
            uVar39 = (uint64_t)local_48 & 0xffffffff;
          }
        }
        else {
          if (local_50[0] == '\0') {
            if (local_58 != (int64_t **)0x0) {
              FUN_00d50b00();
            }
            uVar39 = CONCAT71(uVar34,1);
            if (((char)local_48 != '\0') && (local_68 != (int64_t **)0x0)) {
              FUN_00d50b20();
              local_68 = pplVar27;
              goto LAB_01470620;
            }
          }
          else {
            if (((char)local_48 != '\0') && (local_68 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
LAB_014705c5:
            local_50[0] = '\0';
          }
          uVar39 = CONCAT71(uVar34,1);
          local_68 = pplVar27;
        }
LAB_01470620:
        if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
        if ((local_3f0 != '\0') && (local_3f8 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68 == (int64_t **)0x0) || (*(float *)(local_68 + 4) <= g_02394244)) {
          if (iVar54 < iVar18) {
            pplVar38 = (int64_t **)0x0;
            do {
              if (g_023b4df0 <
                  *(float *)(local_res18 + (int64_t)iVar54 * 4 + (int64_t)pplVar38 * 4))
              goto LAB_01470254;
              pplVar38 = (int64_t **)((int64_t)pplVar38 + 1);
            } while (iVar18 - iVar54 != (int)pplVar38);
          }
          local_48 = (int64_t **)(uVar39 & 0xffffffff);
          pVar37 = (void*)pplVar38;
          pvVar20 = _pthread_getspecific(pVar37);
          if (pvVar20 != (void *)0x0) {
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            lVar21 = FUN_00e8b990();
            if (lVar21 != 0) {
              pVar37 = (void*)local_128;
            }
          }
          local_48 = (int64_t **)(uVar39 & 0xffffffff);
          pvVar20 = _pthread_getspecific(pVar37);
          pplVar38 = local_128;
          if (pvVar20 != (void *)0x0) {
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            lVar21 = FUN_00e8b990();
            if (lVar21 != 0) {
              pplVar38 = (int64_t **)local_128[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
            }
          }
          local_48 = (int64_t **)(uVar39 & 0xffffffff);
          pVar37 = (void*)uVar39;
          (*(*pplVar38)[0x71])();
          local_48 = (int64_t **)(uVar39 & 0xffffffff);
          pvVar20 = _pthread_getspecific(pVar37);
          pplVar38 = (int64_t **)local_e8._0_8_;
          if (pvVar20 != (void *)0x0) {
            local_48 = (int64_t **)(uVar39 & 0xffffffff);
            lVar21 = FUN_00e8b990();
            if (lVar21 != 0) {
              pplVar38 = *(int64_t ***)
                          (local_e8._0_8_ + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
            }
          }
          local_48 = (int64_t **)(uVar39 & 0xffffffff);
          (*(*pplVar38)[0x71])();
          local_48 = (int64_t **)(uVar39 & 0xffffffff);
          FUN_014bb2b0();
          local_58 = (int64_t **)local_e8._0_8_;
          local_50[0] = '\0';
          FUN_00ca13a0();
          if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
          local_58 = (int64_t **)local_e8._0_8_;
          local_50[0] = '\0';
          FUN_00d23f50();
          if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
          iVar17 = iVar17 + -1;
        }
LAB_01470254:
        iVar17 = iVar17 + 1;
        lVar21 = *arg1;
        pVar37 = *(void* *)(lVar21 + 0xc);
      } while (iVar17 < (int)pVar37);
    }
    local_48 = (int64_t **)(uVar39 & 0xffffffff);
    pplVar38 = (int64_t **)local_e8._0_8_;
    if ((int)pVar37 < 1) goto LAB_01470874;
LAB_0146e78f:
    iVar54 = 0;
    iVar17 = (int)local_268;
    dVar55 = g_02390108 * local_268;
    local_d0 = (int64_t **)0x0;
    bVar11 = false;
    do {
      pplVar38 = (int64_t **)(int64_t)iVar54;
      lVar21 = *(int64_t *)(*(int64_t *)(lVar21 + 0x10) + (int64_t)pplVar38 * 8);
      if (local_e8._0_8_ == lVar21) {
        if ((!bVar56) && (local_e8._0_8_ != 0)) {
          bVar56 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar21 != 0) {
          FUN_00d50b00();
        }
        if ((bVar56) && (local_e8._0_8_ != 0)) {
          local_e8._0_8_ = lVar21;
          FUN_00d50b20();
          bVar56 = true;
        }
        else {
          bVar56 = true;
          local_e8._0_8_ = lVar21;
        }
      }
      pvVar20 = _pthread_getspecific((void*)pplVar38);
      if (pvVar20 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar20 = _pthread_getspecific((void*)pplVar38);
      pplVar27 = (int64_t **)local_e8._0_8_;
      if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
        pplVar38 = (int64_t **)local_e8._0_8_;
        pplVar27 = *(int64_t ***)
                    (local_e8._0_8_ + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
      }
      (*(*pplVar27)[0x70])();
      iVar18 = FUN_0132dca0();
      pvVar20 = _pthread_getspecific((void*)pplVar38);
      if (pvVar20 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar20 = _pthread_getspecific((void*)pplVar38);
      pplVar27 = (int64_t **)local_e8._0_8_;
      if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
        pplVar38 = (int64_t **)local_e8._0_8_;
        pplVar27 = *(int64_t ***)
                    (local_e8._0_8_ + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
      }
      pVar37 = (void*)pplVar38;
      (*(*pplVar27)[0x70])();
      pvVar20 = _pthread_getspecific(pVar37);
      pplVar38 = (int64_t **)local_e8._0_8_;
      if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
        pplVar38 = *(int64_t ***)
                    (local_e8._0_8_ + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
      }
      (*(*pplVar38)[0x71])();
      uVar19 = FUN_0132dca0();
      iVar43 = uVar19 - iVar18;
      uVar49 = (int)((double)iVar43 * g_023934c8);
      if ((int)dVar55 < (int)((double)iVar43 * g_023934c8)) {
        uVar49 = (int)dVar55;
      }
      uVar39 = (uint64_t)uVar49;
      uVar42 = iVar18 + uVar49;
      uVar49 = uVar19 - uVar49;
      lVar21 = (int64_t)(int)uVar49;
      if ((int)uVar42 < (int)uVar49) {
        uVar48 = (uint64_t)(int)uVar42;
        uVar47 = lVar21 - uVar48;
        if (~uVar48 + lVar21 == 0) {
          fVar62 = 0.0;
          bVar9 = false;
          bVar6 = false;
          uVar51 = uVar42;
          if ((uVar47 & 1) == 0) {
            uVar39 = 0;
          }
          else {
LAB_0146eb50:
            bVar9 = bVar6;
            if (0 < *(int *)(param_4 + uVar48 * 4)) {
              bVar9 = true;
            }
            uVar39 = param_3;
            uVar42 = uVar51;
            if (fVar62 < *(float *)(param_3 + uVar48 * 4)) {
              uVar42 = (uint)uVar48;
            }
          }
        }
        else {
          local_1d8 = (int64_t *)CONCAT44(local_1d8._4_4_,iVar43);
          lVar52 = param_3 + 4 + uVar48 * 4;
          lVar28 = param_4 + 4 + uVar48 * 4;
          fVar62 = 0.0;
          uVar44 = 0;
          bVar9 = false;
          uVar39 = (uint64_t)uVar42;
          do {
            fVar58 = *(float *)(lVar52 + -4 + uVar44 * 4);
            uVar3 = (uint64_t)(uVar42 + (int)uVar44);
            if (fVar58 <= fVar62) {
              fVar58 = fVar62;
              uVar3 = uVar39;
            }
            fVar62 = *(float *)(lVar52 + uVar44 * 4);
            uVar39 = (uint64_t)(uVar42 + 1 + (int)uVar44);
            if (fVar62 <= fVar58) {
              uVar39 = uVar3;
            }
            uVar51 = (uint)uVar39;
            if (fVar62 <= fVar58) {
              fVar62 = fVar58;
            }
            if (0 < *(int *)(lVar28 + -4 + uVar44 * 4)) {
              bVar9 = true;
            }
            if (0 < *(int *)(lVar28 + uVar44 * 4)) {
              bVar9 = true;
            }
            uVar44 = uVar44 + 2;
          } while ((uVar47 & 0xfffffffffffffffe) != uVar44);
          uVar48 = uVar48 + uVar44;
          uVar39 = (uint64_t)uVar42;
          bVar6 = bVar9;
          uVar42 = uVar51;
          if ((uVar47 & 1) != 0) goto LAB_0146eb50;
        }
      }
      else {
        bVar9 = false;
      }
      uVar34 = (undefined7)(uVar39 >> 8);
      if ((int)uVar42 < (int)uVar49) {
        uVar39 = (uint64_t)(int)uVar42;
        pplVar38 = (int64_t **)CONCAT71(uVar34,1);
        uVar47 = (uint64_t)uVar19;
        do {
          while( true ) {
            uVar51 = (uint)uVar47;
            cVar15 = (char)pplVar38;
            bVar57 = bVar9;
            if (*(int *)(param_4 + uVar39 * 4) < 1) break;
            pplVar38 = (int64_t **)CONCAT71((int7)((uint64_t)pplVar38 >> 8),1);
            if ((cVar15 == '\0') && (iVar17 <= (int)((int)uVar39 - uVar51))) {
              bVar6 = true;
              pplVar38 = (int64_t **)0x0;
              goto joined_r0x0146ed2c;
            }
            bVar9 = true;
            uVar39 = uVar39 + 1;
            bVar57 = true;
            if (lVar21 <= (int64_t)uVar39) goto LAB_0146ebce;
          }
          if (cVar15 != '\0') {
            uVar47 = uVar39 & 0xffffffff;
          }
          uVar51 = (uint)uVar47;
          pplVar38 = (int64_t **)0x0;
          uVar39 = uVar39 + 1;
        } while ((int64_t)uVar39 < lVar21);
LAB_0146ebce:
        bVar6 = false;
        uVar39 = (uint64_t)uVar49;
joined_r0x0146ed2c:
        uVar42 = (uint)uVar39;
        if (bVar57) goto LAB_0146ebdd;
LAB_0146ecb1:
        pVar37 = (void*)pplVar38;
        if ((iVar54 == 0) || (iVar17 <= iVar43)) {
          pplVar27 = (int64_t **)FUN_00e8fc40();
          FUN_010fe5f0();
          (*(*pplVar27)[3])();
          if (pplVar27 == local_d0) {
            pplVar27 = local_d0;
            if (bVar11) {
              FUN_00d50b20();
              bVar9 = bVar11;
            }
            else {
              bVar9 = true;
            }
          }
          else {
            bVar9 = true;
            if ((bVar11) && (local_d0 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
          }
          local_d0 = pplVar27;
          pvVar20 = _pthread_getspecific((void*)pplVar38);
          if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
            pplVar38 = local_d0;
          }
          FUN_014bc030();
          pvVar20 = _pthread_getspecific((void*)pplVar38);
          if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
            pplVar38 = local_d0;
          }
          pvVar20 = _pthread_getspecific((void*)pplVar38);
          pplVar27 = (int64_t **)local_e8._0_8_;
          if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
            pplVar38 = (int64_t **)local_e8._0_8_;
            pplVar27 = *(int64_t ***)
                        (local_e8._0_8_ + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
          }
          (*(*pplVar27)[0x70])();
          FUN_014bb250();
          pvVar20 = _pthread_getspecific((void*)pplVar38);
          if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
            pplVar38 = local_d0;
          }
          pvVar20 = _pthread_getspecific((void*)pplVar38);
          pplVar27 = (int64_t **)local_e8._0_8_;
          if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
            pplVar38 = (int64_t **)local_e8._0_8_;
            pplVar27 = *(int64_t ***)
                        (local_e8._0_8_ + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
          }
          pVar37 = (void*)pplVar38;
          (*(*pplVar27)[0x71])();
          FUN_014bb2b0();
          local_58 = local_d0;
          local_50[0] = '\0';
          FUN_00d233f0();
          if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
          local_58 = (int64_t **)local_e8._0_8_;
          local_50[0] = '\0';
          FUN_00ca13a0();
          bVar11 = bVar9;
          if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        pplVar38 = (int64_t **)CONCAT71(uVar34,1);
        bVar6 = false;
        uVar51 = uVar19;
        if (!bVar9) goto LAB_0146ecb1;
LAB_0146ebdd:
        pVar37 = (void*)pplVar38;
        if (bVar6) {
          uVar19 = uVar42;
        }
        if (((char)pplVar38 == '\0') && (iVar17 <= (int)(uVar19 - uVar51))) {
          plVar26 = *(int64_t **)(this_ptr + 0x60);
          pvVar20 = _pthread_getspecific(pVar37);
          if (pvVar20 != (void *)0x0) {
            plVar26 = *(int64_t **)(this_ptr + 0x60);
            lVar21 = FUN_00e8b990();
            if (lVar21 != 0) {
              plVar26 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
            }
          }
          dVar61 = (double)(**(code **)(*plVar26 + 0x370))();
          pvVar20 = _pthread_getspecific((void*)pplVar38);
          pplVar27 = (int64_t **)local_e8._0_8_;
          if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
            pplVar38 = (int64_t **)local_e8._0_8_;
            pplVar27 = *(int64_t ***)
                        (local_e8._0_8_ + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
          }
          (*(*pplVar27)[0x70])();
          pvVar20 = _pthread_getspecific((void*)pplVar38);
          pplVar27 = (int64_t **)local_e8._0_8_;
          if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
            pplVar38 = (int64_t **)local_e8._0_8_;
            pplVar27 = *(int64_t ***)
                        (local_e8._0_8_ + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
          }
          (*(*pplVar27)[0x71])();
          pvVar20 = _pthread_getspecific((void*)pplVar38);
          if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
            pplVar38 = (int64_t **)local_e8._0_8_;
          }
          FUN_014bb2b0(SUB84(((double)(int)uVar51 / local_268) * dVar61,0));
          pplVar27 = (int64_t **)FUN_00e8fc40();
          FUN_010fe5f0();
          (*(*pplVar27)[3])();
          if (pplVar27 == local_d0) {
            pplVar27 = local_d0;
            if (bVar11) {
              FUN_00d50b20();
              bVar9 = bVar11;
            }
            else {
              bVar9 = true;
            }
          }
          else {
            bVar9 = true;
            if ((bVar11) && (local_d0 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
          }
          local_d0 = pplVar27;
          pvVar20 = _pthread_getspecific((void*)pplVar38);
          if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
            pplVar38 = local_d0;
          }
          FUN_014bc030();
          pvVar20 = _pthread_getspecific((void*)pplVar38);
          if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
            pplVar38 = local_d0;
          }
          FUN_014bb250();
          pvVar20 = _pthread_getspecific((void*)pplVar38);
          if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
            pplVar38 = local_d0;
          }
          pVar37 = (void*)pplVar38;
          FUN_014bb2b0();
          local_58 = (int64_t **)local_e8._0_8_;
          local_50[0] = '\0';
          FUN_00d237a0();
          if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
          local_58 = local_d0;
          local_50[0] = '\0';
          FUN_00d23370();
          if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
          iVar54 = iVar54 + 1;
          bVar11 = bVar9;
        }
      }
      iVar54 = iVar54 + 1;
      lVar21 = *arg1;
    } while (iVar54 < *(int *)(lVar21 + 0xc));
  }
  plVar26 = *(int64_t **)(this_ptr + 0x60);
  pvVar20 = _pthread_getspecific(pVar37);
  if (pvVar20 != (void *)0x0) {
    plVar26 = *(int64_t **)(this_ptr + 0x60);
    lVar21 = FUN_00e8b990();
    if (lVar21 != 0) {
      plVar26 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
    }
  }
  dVar55 = (double)(**(code **)(*plVar26 + 0x370))();
  lVar21 = *arg1;
  pplVar38 = (int64_t **)(uint64_t)*(uint *)(lVar21 + 0xc);
  if ((int)*(uint *)(lVar21 + 0xc) < 3) {
    bVar9 = false;
    local_a0 = (int64_t **)0x0;
    local_c8 = 0;
    local_108 = (int64_t **)0x0;
    local_a8 = 0;
    local_60 = (int64_t **)0x0;
  }
  else {
    dVar55 = dVar55 * g_023b2c78;
    iVar17 = 1;
    local_60 = (int64_t **)0x0;
    local_a8 = 0;
    local_108 = (int64_t **)0x0;
    local_c8 = 0;
    local_a0 = (int64_t **)0x0;
    pplVar38 = (int64_t **)0x0;
    bVar9 = false;
    do {
      lVar21 = *(int64_t *)(lVar21 + 0x10);
      lVar52 = (int64_t)iVar17;
      pplVar27 = *(int64_t ***)(lVar21 + lVar52 * 8);
      if (local_60 == pplVar27) {
        if (((char)local_a8 == '\0') && (local_60 != (int64_t **)0x0)) {
          local_a8 = CONCAT71((int7)((uint64_t)lVar21 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (pplVar27 != (int64_t **)0x0) {
          lVar21 = FUN_00d50b00();
        }
        if (((char)local_a8 == '\0') || (local_60 == (int64_t **)0x0)) {
          local_a8 = CONCAT71((int7)((uint64_t)lVar21 >> 8),1);
          local_60 = pplVar27;
        }
        else {
          uVar22 = FUN_00d50b20();
          local_a8 = CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
          local_60 = pplVar27;
        }
      }
      lVar21 = *(int64_t *)(*arg1 + 0x10);
      pplVar27 = *(int64_t ***)(lVar21 + 8 + lVar52 * 8);
      if (local_108 == pplVar27) {
        if (((char)local_c8 == '\0') && (local_108 != (int64_t **)0x0)) {
          local_c8 = CONCAT71((int7)((uint64_t)lVar21 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (pplVar27 != (int64_t **)0x0) {
          lVar21 = FUN_00d50b00();
        }
        if (((char)local_c8 == '\0') || (local_108 == (int64_t **)0x0)) {
          local_c8 = CONCAT71((int7)((uint64_t)lVar21 >> 8),1);
          local_108 = pplVar27;
        }
        else {
          uVar22 = FUN_00d50b20();
          local_c8 = CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
          local_108 = pplVar27;
        }
      }
      pplVar27 = *(int64_t ***)(*(int64_t *)(*arg1 + 0x10) + -8 + lVar52 * 8);
      if (local_a0 == pplVar27) {
        if ((!bVar9) && (local_a0 != (int64_t **)0x0)) {
          bVar9 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (pplVar27 != (int64_t **)0x0) {
          FUN_00d50b00();
        }
        if ((bVar9) && (local_a0 != (int64_t **)0x0)) {
          FUN_00d50b20();
          bVar9 = true;
          local_a0 = pplVar27;
        }
        else {
          bVar9 = true;
          local_a0 = pplVar27;
        }
      }
      pvVar20 = _pthread_getspecific((void*)pplVar38);
      if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
        pplVar38 = local_108;
      }
      cVar15 = FUN_014bc070();
      if (cVar15 != '\0') {
        pvVar20 = _pthread_getspecific((void*)pplVar38);
        pplVar27 = local_60;
        if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          pplVar38 = local_60;
          pplVar27 = (int64_t **)local_60[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
        }
        lVar21 = (*(*pplVar27)[0x71])();
        if (lVar21 < (int)dVar55) {
          pvVar20 = _pthread_getspecific((void*)pplVar38);
          if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
            pplVar38 = local_a0;
          }
          cVar15 = FUN_014bc070();
          iVar54 = iVar17 + -1;
          if (cVar15 == '\0') {
            if ((byte)local_178 == 0) {
              pvVar20 = _pthread_getspecific((void*)pplVar38);
              if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
                pplVar38 = local_a0;
              }
              pvVar20 = _pthread_getspecific((void*)pplVar38);
              pplVar27 = local_a0;
              if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
                pplVar38 = local_a0;
                pplVar27 = (int64_t **)local_a0[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
              }
              pVar37 = (void*)pplVar38;
              (*(*pplVar27)[0x71])();
              pvVar20 = _pthread_getspecific(pVar37);
              pplVar38 = local_60;
              if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
                pplVar38 = (int64_t **)local_60[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
              }
              (*(*pplVar38)[0x71])();
              FUN_014bb2b0();
              local_58 = local_60;
              local_50[0] = '\0';
              FUN_00ca13a0();
              if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
                FUN_00d50b20();
              }
              local_58 = local_60;
              local_50[0] = '\0';
              FUN_00d23f50();
              iVar17 = iVar54;
              if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            pvVar20 = _pthread_getspecific((void*)pplVar38);
            if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
              pplVar38 = local_a0;
            }
            pvVar20 = _pthread_getspecific((void*)pplVar38);
            pplVar27 = local_a0;
            if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
              pplVar38 = local_a0;
              pplVar27 = (int64_t **)local_a0[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
            }
            (*(*pplVar27)[0x71])();
            pvVar20 = _pthread_getspecific((void*)pplVar38);
            pplVar27 = local_60;
            if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
              pplVar38 = local_60;
              pplVar27 = (int64_t **)local_60[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
            }
            pVar37 = (void*)pplVar38;
            (*(*pplVar27)[0x71])();
            pvVar20 = _pthread_getspecific(pVar37);
            pplVar38 = local_108;
            if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
              pplVar38 = (int64_t **)local_108[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
            }
            (*(*pplVar38)[0x71])();
            FUN_014bb2b0();
            local_58 = local_60;
            local_50[0] = '\0';
            FUN_00ca13a0();
            if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
            local_50[0] = '\0';
            local_58 = local_108;
            FUN_00ca13a0();
            if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
            local_58 = local_60;
            local_50[0] = '\0';
            FUN_00d23f50();
            if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
            local_50[0] = '\0';
            local_58 = local_108;
            FUN_00d23f50();
            iVar17 = iVar54;
            if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      iVar17 = iVar17 + 1;
      lVar21 = *arg1;
      pplVar38 = (int64_t **)(uint64_t)*(uint *)(lVar21 + 0xc);
    } while (iVar17 < (int)(*(uint *)(lVar21 + 0xc) - 1));
  }
  pVar37 = (void*)pplVar38;
  if (1 < (int)pVar37) {
    iVar17 = 1;
    do {
      lVar21 = *(int64_t *)(lVar21 + 0x10);
      pplVar27 = *(int64_t ***)(lVar21 + (int64_t)iVar17 * 8);
      if (local_60 == pplVar27) {
        if (((char)local_a8 == '\0') && (local_60 != (int64_t **)0x0)) {
          local_a8 = CONCAT71((int7)((uint64_t)lVar21 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (pplVar27 != (int64_t **)0x0) {
          lVar21 = FUN_00d50b00();
        }
        if (((char)local_a8 == '\0') || (local_60 == (int64_t **)0x0)) {
          local_a8 = CONCAT71((int7)((uint64_t)lVar21 >> 8),1);
          local_60 = pplVar27;
        }
        else {
          uVar22 = FUN_00d50b20();
          local_a8 = CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
          local_60 = pplVar27;
        }
      }
      pplVar27 = *(int64_t ***)(*(int64_t *)(*arg1 + 0x10) + -8 + (int64_t)iVar17 * 8);
      if (local_a0 == pplVar27) {
        if ((!bVar9) && (local_a0 != (int64_t **)0x0)) {
          bVar9 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (pplVar27 != (int64_t **)0x0) {
          FUN_00d50b00();
        }
        if ((bVar9) && (local_a0 != (int64_t **)0x0)) {
          FUN_00d50b20();
          bVar9 = true;
          local_a0 = pplVar27;
        }
        else {
          bVar9 = true;
          local_a0 = pplVar27;
        }
      }
      pvVar20 = _pthread_getspecific((void*)pplVar38);
      if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
        pplVar38 = local_60;
      }
      cVar15 = FUN_014bc070();
      if (cVar15 != '\0') {
        pvVar20 = _pthread_getspecific((void*)pplVar38);
        if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          pplVar38 = local_a0;
        }
        cVar15 = FUN_014bc070();
        if (cVar15 != '\0') {
          pvVar20 = _pthread_getspecific((void*)pplVar38);
          if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
            pplVar38 = local_a0;
          }
          pvVar20 = _pthread_getspecific((void*)pplVar38);
          pplVar27 = local_a0;
          if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
            pplVar38 = local_a0;
            pplVar27 = (int64_t **)local_a0[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
          }
          pVar37 = (void*)pplVar38;
          (*(*pplVar27)[0x71])();
          pvVar20 = _pthread_getspecific(pVar37);
          pplVar38 = local_60;
          if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
            pplVar38 = (int64_t **)local_60[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
          }
          (*(*pplVar38)[0x71])();
          FUN_014bb2b0();
          local_58 = local_60;
          local_50[0] = '\0';
          FUN_00ca13a0();
          if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
          local_58 = local_60;
          local_50[0] = '\0';
          FUN_00d23f50();
          if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
          iVar17 = iVar17 + -1;
        }
      }
      iVar17 = iVar17 + 1;
      lVar21 = *arg1;
      pVar37 = *(uint *)(lVar21 + 0xc);
      pplVar38 = (int64_t **)(uint64_t)pVar37;
    } while (iVar17 < (int)pVar37);
  }
  if ((int)pVar37 < 2) {
    pplVar38 = (int64_t **)((uint64_t)local_48 & 0xffffffff);
  }
  else {
    pplVar38 = (int64_t **)((uint64_t)local_48 & 0xffffffff);
    iVar17 = 0;
    do {
      lVar21 = *(int64_t *)(lVar21 + 0x10);
      pplVar27 = *(int64_t ***)(lVar21 + (int64_t)iVar17 * 8);
      pplVar46 = pplVar38;
      local_48 = pplVar38;
      if (local_60 == pplVar27) {
        if (((char)local_a8 == '\0') && (local_60 != (int64_t **)0x0)) {
          local_a8 = CONCAT71((int7)((uint64_t)lVar21 >> 8),1);
          pplVar46 = (int64_t **)0x0;
          FUN_00d50b00();
        }
      }
      else {
        if (pplVar27 != (int64_t **)0x0) {
          pplVar46 = (int64_t **)(local_a8 & 0xffffffff);
          lVar21 = FUN_00d50b00();
        }
        if (((char)local_a8 == '\0') || (local_60 == (int64_t **)0x0)) {
          local_a8 = CONCAT71((int7)((uint64_t)lVar21 >> 8),1);
          local_60 = pplVar27;
        }
        else {
          pplVar46 = (int64_t **)(local_a8 & 0xffffffff);
          uVar22 = FUN_00d50b20();
          local_a8 = CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
          local_60 = pplVar27;
        }
      }
      lVar21 = *(int64_t *)(*arg1 + 0x10);
      pplVar27 = *(int64_t ***)(lVar21 + 8 + (int64_t)iVar17 * 8);
      if (local_108 == pplVar27) {
        if (((char)local_c8 == '\0') && (local_108 != (int64_t **)0x0)) {
          local_c8 = CONCAT71((int7)((uint64_t)lVar21 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (pplVar27 != (int64_t **)0x0) {
          lVar21 = FUN_00d50b00();
        }
        if (((char)local_c8 == '\0') || (local_108 == (int64_t **)0x0)) {
          local_c8 = CONCAT71((int7)((uint64_t)lVar21 >> 8),1);
          local_108 = pplVar27;
        }
        else {
          uVar22 = FUN_00d50b20();
          local_c8 = CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
          local_108 = pplVar27;
        }
      }
      pvVar20 = _pthread_getspecific((void*)pplVar38);
      pplVar27 = local_108;
      if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
        pplVar38 = local_108;
        pplVar27 = (int64_t **)local_108[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
      }
      lVar21 = (*(*pplVar27)[0x70])();
      pvVar20 = _pthread_getspecific((void*)pplVar38);
      pplVar27 = local_60;
      if ((pvVar20 != (void *)0x0) && (lVar52 = FUN_00e8b990(), lVar52 != 0)) {
        pplVar38 = local_60;
        pplVar27 = (int64_t **)local_60[(uint64_t)(*(uint *)(lVar52 + 0x154) & 1) + 4];
      }
      pVar37 = (void*)pplVar38;
      lVar52 = (*(*pplVar27)[0x70])();
      local_3e8 = local_60;
      local_3e0 = '\0';
      FUN_0147e760(extraout_XMM0_Da_00,&local_3e8);
      pplVar27 = local_58;
      uVar34 = (undefined7)((uint64_t)pplVar46 >> 8);
      if (local_58 == local_68) {
        if (((char)local_48 == '\0') && (local_58 != (int64_t **)0x0)) {
          pplVar27 = local_68;
          if (local_50[0] != '\0') goto LAB_014715f5;
          pplVar38 = (int64_t **)CONCAT71(uVar34,1);
          FUN_00d50b00();
        }
        else {
          pplVar38 = (int64_t **)((uint64_t)local_48 & 0xffffffff);
        }
      }
      else {
        if (local_50[0] == '\0') {
          if (local_58 != (int64_t **)0x0) {
            FUN_00d50b00();
          }
          pplVar38 = (int64_t **)CONCAT71(uVar34,1);
          if (((char)local_48 != '\0') && (local_68 != (int64_t **)0x0)) {
            FUN_00d50b20();
            local_68 = pplVar27;
            goto LAB_01471650;
          }
        }
        else {
          if (((char)local_48 != '\0') && (local_68 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
LAB_014715f5:
          local_50[0] = '\0';
        }
        pplVar38 = (int64_t **)CONCAT71(uVar34,1);
        local_68 = pplVar27;
      }
LAB_01471650:
      if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      if ((local_3e0 != '\0') && (local_3e8 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      if (local_68 == (int64_t **)0x0) {
LAB_01471778:
        iVar54 = iVar17 + 1;
        if (lVar21 <= lVar52) goto LAB_01471781;
      }
      else {
        local_1d8 = (int64_t *)((double)local_68[2] * local_248);
        local_48 = pplVar38;
        pvVar20 = _pthread_getspecific(pVar37);
        pplVar27 = local_60;
        if ((pvVar20 != (void *)0x0) && (local_48 = pplVar38, lVar28 = FUN_00e8b990(), lVar28 != 0))
        {
          pplVar27 = (int64_t **)local_60[(uint64_t)(*(uint *)(lVar28 + 0x154) & 1) + 4];
        }
        pVar37 = (void*)pplVar38;
        local_48 = pplVar38;
        lVar28 = (*(*pplVar27)[0x70])();
        lVar50 = (int64_t)(double)local_1d8;
        if (lVar28 <= lVar50) {
          local_48 = pplVar38;
          pvVar20 = _pthread_getspecific(pVar37);
          pplVar27 = local_108;
          if ((pvVar20 != (void *)0x0) &&
             (local_48 = pplVar38, lVar28 = FUN_00e8b990(), lVar28 != 0)) {
            pplVar27 = (int64_t **)local_108[(uint64_t)(*(uint *)(lVar28 + 0x154) & 1) + 4];
          }
          local_48 = pplVar38;
          lVar28 = (*(*pplVar27)[0x70])();
          if (lVar50 < lVar28) goto LAB_01471778;
        }
LAB_01471781:
        local_58 = local_60;
        local_50[0] = '\0';
        FUN_00ca13a0();
        if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
        local_58 = local_60;
        local_50[0] = '\0';
        FUN_00d23f50();
        iVar54 = iVar17;
        if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar21 = *arg1;
      pVar37 = *(void* *)(lVar21 + 0xc);
      iVar17 = iVar54;
    } while (iVar54 < (int)(pVar37 - 1));
  }
  local_48 = pplVar38;
  if (pVar37 != 0) {
    pvVar20 = _pthread_getspecific(pVar37);
    if (pvVar20 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bb250();
  }
  lVar21 = 0;
  local_20c = (uint32_t)local_c8;
  local_258 = local_108;
  while( true ) {
    local_a8 = local_a8 & 0xffffffff;
    cVar15 = (char)local_a8;
    iVar17 = *(int *)(*arg1 + 0xc);
    pplVar38 = (int64_t **)((int64_t)iVar17 + -1);
    if ((int64_t)pplVar38 <= lVar21) break;
    pplVar27 = *(int64_t ***)(*(int64_t *)(*arg1 + 0x10) + lVar21 * 8);
    if (local_60 == pplVar27) {
      pplVar27 = local_60;
      if ((cVar15 == '\0') && (local_60 != (int64_t **)0x0)) {
        local_a8 = 1;
        FUN_00d50b00();
      }
    }
    else {
      pplVar38 = pplVar27;
      if (pplVar27 != (int64_t **)0x0) {
        FUN_00d50b00();
      }
      local_a8 = 1;
      if ((cVar15 != '\0') && (local_60 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
    }
    local_60 = pplVar27;
    pplVar27 = local_258;
    pVar37 = (void*)pplVar38;
    lVar52 = *(int64_t *)(*arg1 + 0x10);
    pplVar38 = *(int64_t ***)(lVar52 + 8 + lVar21 * 8);
    cVar15 = (char)local_20c;
    if (local_258 == pplVar38) {
      local_c8._0_4_ = local_20c;
      pplVar38 = pplVar27;
      if ((cVar15 == '\0') && (local_258 != (int64_t **)0x0)) {
        local_c8._0_4_ = (uint32_t)CONCAT71((uint7)(uint3)((uint)local_20c >> 8),1);
        FUN_00d50b00();
      }
    }
    else {
      if (pplVar38 != (int64_t **)0x0) {
        lVar52 = FUN_00d50b00();
      }
      local_c8._0_4_ = (uint32_t)CONCAT71((int7)((uint64_t)lVar52 >> 8),1);
      if ((cVar15 != '\0') && (pplVar27 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
    }
    pvVar20 = _pthread_getspecific(pVar37);
    if ((pvVar20 != (void *)0x0) && (lVar52 = FUN_00e8b990(), lVar52 != 0)) {
      pVar37 = (void*)local_60;
    }
    pvVar20 = _pthread_getspecific(pVar37);
    pplVar27 = pplVar38;
    if ((pvVar20 != (void *)0x0) && (lVar52 = FUN_00e8b990(), lVar52 != 0)) {
      pplVar27 = (int64_t **)pplVar38[(uint64_t)(*(uint *)(lVar52 + 0x154) & 1) + 4];
    }
    (*(*pplVar27)[0x70])();
    pvVar20 = _pthread_getspecific(pVar37);
    pplVar27 = local_60;
    if ((pvVar20 != (void *)0x0) && (lVar52 = FUN_00e8b990(), lVar52 != 0)) {
      pplVar27 = (int64_t **)local_60[(uint64_t)(*(uint *)(lVar52 + 0x154) & 1) + 4];
    }
    (*(*pplVar27)[0x70])();
    lVar21 = lVar21 + 1;
    FUN_014bb2b0();
    local_20c = (uint32_t)local_c8;
    local_258 = pplVar38;
  }
  if (iVar17 == 0) {
LAB_01471d6f:
    pVar37 = (void*)pplVar38;
    local_a8._0_1_ = cVar15;
  }
  else {
    FUN_00d23340();
    pplVar27 = local_58;
    pVar37 = (void*)pplVar38;
    local_228 = (int64_t *)CONCAT71(local_228._1_7_,local_50[0]);
    pplVar38 = &local_228;
    if (local_50[0] != '\0') {
      pplVar38 = (int64_t **)local_50;
    }
    *(void*)pplVar38 = 0;
    if ((local_50[0] != '\0') && (pplVar27 != (int64_t **)0x0)) {
      FUN_00d50b20();
    }
    pvVar20 = _pthread_getspecific(pVar37);
    if (pvVar20 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d23340();
    pplVar46 = local_58;
    pplVar38 = &local_240;
    pplVar45 = (int64_t **)local_50;
    if (local_50[0] == '\0') {
      pplVar45 = pplVar38;
    }
    local_240._0_1_ = local_50[0];
    *(void*)pplVar45 = 0;
    if ((local_50[0] != '\0') && (pplVar46 != (int64_t **)0x0)) {
      FUN_00d50b20();
    }
    pvVar20 = _pthread_getspecific((void*)pplVar38);
    pplVar45 = pplVar46;
    if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
      pplVar45 = (int64_t **)pplVar46[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
    }
    (*(*pplVar45)[0x70])();
    FUN_014bb2b0();
    if (((char)local_240 != '\0') && (pplVar46 != (int64_t **)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_228 != '\0') && (pplVar27 != (int64_t **)0x0)) {
      FUN_00d50b20();
    }
    lVar21 = *arg1;
    if (*(int *)(lVar21 + 0xc) < 1) goto LAB_01471d6f;
    lVar52 = 0;
    do {
      pVar37 = (void*)pplVar38;
      pplVar38 = *(int64_t ***)(*(int64_t *)(lVar21 + 0x10) + lVar52 * 8);
      cVar15 = (char)local_a8;
      if (local_60 == pplVar38) {
        pplVar38 = local_60;
        if ((cVar15 == '\0') && (local_60 != (int64_t **)0x0)) {
          local_a8 = 1;
          FUN_00d50b00();
        }
      }
      else {
        pplVar27 = pplVar38;
        if (pplVar38 != (int64_t **)0x0) {
          FUN_00d50b00();
        }
        pVar37 = (void*)pplVar27;
        local_a8 = 1;
        if ((cVar15 != '\0') && (local_60 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
      }
      local_60 = pplVar38;
      pvVar20 = _pthread_getspecific(pVar37);
      if (pvVar20 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc170(g_02390124);
      lVar52 = lVar52 + 1;
      lVar21 = *arg1;
      pVar37 = *(void* *)(lVar21 + 0xc);
      pplVar38 = (int64_t **)(int64_t)(int)pVar37;
    } while (lVar52 < (int64_t)pplVar38);
  }
  local_220 = '\0';
  local_228 = (int64_t *)0x0;
  puVar29 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar29 = &g_02572358;
  pcVar12 = g_02572370;
  (*g_02572370)();
  local_218 = puVar29;
  puVar29 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar29 = &g_02572358;
  (*pcVar12)();
  local_230 = puVar29;
  pvVar20 = _pthread_getspecific(pVar37);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0134a500();
  if (local_58 == (int64_t **)0x0) {
    local_28c = 0;
  }
  else {
    pvVar20 = _pthread_getspecific(pVar37);
    if (pvVar20 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134a500();
    pvVar20 = _pthread_getspecific(pVar37);
    if (pvVar20 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_28c = FUN_0141baf0();
    if ((local_238 != '\0') && (CONCAT71(local_240._1_7_,(char)local_240) != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  pvVar20 = _pthread_getspecific(pVar37);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132dc90();
  pvVar20 = _pthread_getspecific(pVar37);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d9d0(g_02421228);
  pvVar20 = _pthread_getspecific(pVar37);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132da30(g_02421228);
  if ((byte)local_178 == 0 && (char)local_190 == '\0') {
    local_3d8 = *param_2;
    local_3d0 = '\0';
    local_3c8 = 0;
    local_3c0 = '\0';
    FUN_014a42b0((uint32_t)local_1b0,0);
    local_250 = local_58;
    pplVar38 = local_58;
    if (local_58 == (int64_t **)0x0) {
      local_260 = 0;
      local_250 = (int64_t **)0x0;
    }
    else if (local_50[0] == '\0') {
      uVar22 = FUN_00d50b00();
      local_260 = CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
      if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
      local_260 = CONCAT71((int7)((uint64_t)local_58 >> 8),1);
    }
    pVar37 = (void*)pplVar38;
    if ((local_3c0 != '\0') && (local_3c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_3d0 != '\0') && (local_3d8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_250 = (int64_t **)0x0;
    local_260 = 0;
  }
  iVar17 = FUN_00e7d850(SUB84(g_0241b598 * local_248,0));
  uVar59 = FUN_00e7d850(SUB84(local_248,0));
  local_1d8 = (int64_t *)CONCAT44(local_1d8._4_4_,uVar59);
  pvVar20 = _pthread_getspecific(pVar37);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013a2740();
  iVar54 = *(int *)((int64_t)local_58 + 0xc);
  if (local_50[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar54 != 1) goto LAB_01472f1a;
  pvVar20 = _pthread_getspecific(pVar37);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013a2740();
  pvVar20 = _pthread_getspecific(pVar37);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar55 = (double)FUN_011f2ec0();
  if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  pvVar20 = _pthread_getspecific(pVar37);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  ppplVar53 = &local_58;
  FUN_013a2740();
  pvVar20 = _pthread_getspecific(pVar37);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar61 = (double)FUN_011f2ed0();
  if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  iVar54 = FUN_00e7d850(SUB84(local_248 * dVar55,0));
  iVar18 = FUN_00e7d850(SUB84(local_248 * dVar61,0));
  if ((1 < *(int *)(*arg1 + 0xc)) && (0.0 < dVar55)) {
    pplVar38 = (int64_t **)**(void**)(*arg1 + 0x10);
    local_50[0] = '\0';
    local_58 = pplVar38;
    if ((g_027c0170 == '\0') && (iVar43 = ___cxa_guard_acquire(), iVar43 != 0)) {
      g_02790158 = FUN_007ef2d0();
      g_02790140 = "MUAudioSourcePrincipalItem";
      g_02790148 = 0x138;
      pVar37 = 0x10fe5c0;
      g_02790150 = FUN_010fe5c0;
      g_02790160 = 0;
      ram_0000000002790168 = 0;
      g_02790170 = 0;
      ram_0000000002790178 = 0;
      g_02790180 = 0;
      ram_0000000002790188 = 0;
      g_02790190 = 0;
      ram_0000000002790198 = 0;
      g_027901a0 = 0;
      ram_00000000027901a8 = 0;
      g_027901b0 = 0;
      ram_00000000027901b8 = 0;
      g_027901c0 = 0;
      ram_00000000027901c8 = 0;
      g_027901d0 = 0;
      ram_00000000027901d8 = 0;
      g_027901e0 = 0;
      ram_00000000027901e8 = 0;
      g_027901f0 = 0;
      ram_00000000027901f8 = 0;
      g_02790200 = 0;
      ___cxa_guard_release();
    }
    if (pplVar38 == (int64_t **)0x0) {
LAB_014723b5:
      ppplVar30 = &g_02802688;
      pplVar38 = g_02802688;
      if (g_02802690 != '\0') goto LAB_014723c5;
LAB_014723d8:
      if (pplVar38 != (int64_t **)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      (*(*pplVar38)[0x6c])();
      cVar15 = FUN_00e85ea0();
      if (cVar15 == '\0') goto LAB_014723b5;
      ppplVar30 = &local_58;
      pplVar38 = local_58;
      if (local_50[0] == '\0') goto LAB_014723d8;
LAB_014723c5:
      *(void*)(ppplVar30 + 1) = 0;
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
      FUN_00d50b20();
    }
    pvVar20 = _pthread_getspecific(pVar37);
    if (pvVar20 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar15 = FUN_014bc070();
    if (cVar15 != '\0') {
      pplVar27 = *(int64_t ***)(*(int64_t *)(*arg1 + 0x10) + 8);
      local_50[0] = '\0';
      local_58 = pplVar27;
      if ((g_027c0170 == '\0') && (iVar43 = ___cxa_guard_acquire(), iVar43 != 0)) {
        g_02790158 = FUN_007ef2d0();
        g_02790140 = "MUAudioSourcePrincipalItem";
        g_02790148 = 0x138;
        pVar37 = 0x10fe5c0;
        g_02790150 = FUN_010fe5c0;
        g_02790160 = 0;
        ram_0000000002790168 = 0;
        g_02790170 = 0;
        ram_0000000002790178 = 0;
        g_02790180 = 0;
        ram_0000000002790188 = 0;
        g_02790190 = 0;
        ram_0000000002790198 = 0;
        g_027901a0 = 0;
        ram_00000000027901a8 = 0;
        g_027901b0 = 0;
        ram_00000000027901b8 = 0;
        g_027901c0 = 0;
        ram_00000000027901c8 = 0;
        g_027901d0 = 0;
        ram_00000000027901d8 = 0;
        g_027901e0 = 0;
        ram_00000000027901e8 = 0;
        g_027901f0 = 0;
        ram_00000000027901f8 = 0;
        g_02790200 = 0;
        ___cxa_guard_release();
      }
      if (pplVar27 == (int64_t **)0x0) {
LAB_0147248a:
        ppplVar30 = &g_02802688;
        pplVar27 = g_02802688;
        if (g_02802690 != '\0') goto LAB_0147249e;
LAB_014725ef:
        if (pplVar27 != (int64_t **)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        (*(*pplVar27)[0x6c])();
        cVar15 = FUN_00e85ea0();
        if (cVar15 == '\0') goto LAB_0147248a;
        ppplVar30 = &local_58;
        pplVar27 = local_58;
        if (local_50[0] == '\0') goto LAB_014725ef;
LAB_0147249e:
        *(void*)(ppplVar30 + 1) = 0;
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      pvVar20 = _pthread_getspecific(pVar37);
      pplVar46 = pplVar27;
      if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
        pplVar46 = (int64_t **)pplVar27[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
      }
      (*(*pplVar46)[0x70])();
      pvVar20 = _pthread_getspecific(pVar37);
      pplVar46 = pplVar27;
      if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
        pplVar46 = (int64_t **)pplVar27[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
      }
      (*(*pplVar46)[0x71])();
      pvVar20 = _pthread_getspecific(pVar37);
      pplVar46 = pplVar27;
      if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
        pplVar46 = (int64_t **)pplVar27[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
      }
      lVar21 = (*(*pplVar46)[0x70])();
      pVar37 = 0x2802558;
      if (lVar21 - iVar54 < (int64_t)iVar17) {
        pvVar20 = _pthread_getspecific(0x2802558);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bb250();
        pvVar20 = _pthread_getspecific(pVar37);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bb2b0();
        local_50[0] = '\0';
        local_58 = pplVar38;
        FUN_00d23f50();
        if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar20 = _pthread_getspecific(0x2802558);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bb250();
        pvVar20 = _pthread_getspecific(pVar37);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bb2b0();
      }
      if (pplVar27 != (int64_t **)0x0) {
        FUN_00d50b20();
      }
    }
    if (pplVar38 != (int64_t **)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int *)(*arg1 + 0xc) != 0) {
    pplVar38 = (int64_t **)**(void**)(*arg1 + 0x10);
    local_58 = pplVar38;
    local_50[0] = '\0';
    if ((g_027c0170 == '\0') && (iVar17 = ___cxa_guard_acquire(), iVar17 != 0)) {
      g_02790158 = FUN_007ef2d0();
      g_02790140 = "MUAudioSourcePrincipalItem";
      g_02790148 = 0x138;
      pVar37 = 0x10fe5c0;
      g_02790150 = FUN_010fe5c0;
      g_02790160 = 0;
      ram_0000000002790168 = 0;
      g_02790170 = 0;
      ram_0000000002790178 = 0;
      g_02790180 = 0;
      ram_0000000002790188 = 0;
      g_02790190 = 0;
      ram_0000000002790198 = 0;
      g_027901a0 = 0;
      ram_00000000027901a8 = 0;
      g_027901b0 = 0;
      ram_00000000027901b8 = 0;
      g_027901c0 = 0;
      ram_00000000027901c8 = 0;
      g_027901d0 = 0;
      ram_00000000027901d8 = 0;
      g_027901e0 = 0;
      ram_00000000027901e8 = 0;
      g_027901f0 = 0;
      ram_00000000027901f8 = 0;
      g_02790200 = 0;
      ___cxa_guard_release();
    }
    if (pplVar38 == (int64_t **)0x0) {
LAB_0147288a:
      ppplVar53 = &g_02802688;
    }
    else {
      (*(*pplVar38)[0x6c])();
      cVar15 = FUN_00e85ea0();
      if (cVar15 == '\0') goto LAB_0147288a;
    }
    pplVar38 = *ppplVar53;
    if (*(char *)(ppplVar53 + 1) == '\0') {
      if (pplVar38 != (int64_t **)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(ppplVar53 + 1) = 0;
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
      FUN_00d50b20();
    }
    pvVar20 = _pthread_getspecific(pVar37);
    pplVar27 = pplVar38;
    if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
      pplVar27 = (int64_t **)pplVar38[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
    }
    lVar21 = (*(*pplVar27)[0x70])();
    if (lVar21 < iVar54) {
      pvVar20 = _pthread_getspecific(pVar37);
      pplVar27 = pplVar38;
      if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
        pplVar27 = (int64_t **)pplVar38[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
      }
      (*(*pplVar27)[0x70])();
      pvVar20 = _pthread_getspecific(pVar37);
      pplVar27 = pplVar38;
      if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
        pplVar27 = (int64_t **)pplVar38[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
      }
      (*(*pplVar27)[0x71])();
      pvVar20 = _pthread_getspecific(pVar37);
      if (pvVar20 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bb250();
      pvVar20 = _pthread_getspecific(pVar37);
      if (pvVar20 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bb2b0();
    }
    if (pplVar38 != (int64_t **)0x0) {
      FUN_00d50b20();
    }
  }
  iVar17 = *(int *)(*arg1 + 0xc);
  if ((1 < iVar17) && (dVar61 < *(double *)(this_ptr + 0x88))) {
    pVar37 = iVar17 - 1;
    pplVar38 = *(int64_t ***)(*(int64_t *)(*arg1 + 0x10) + (uint64_t)pVar37 * 8);
    local_50[0] = '\0';
    local_58 = pplVar38;
    if ((g_027c0170 == '\0') && (iVar17 = ___cxa_guard_acquire(), iVar17 != 0)) {
      g_02790158 = FUN_007ef2d0();
      g_02790140 = "MUAudioSourcePrincipalItem";
      g_02790148 = 0x138;
      pVar37 = 0x10fe5c0;
      g_02790150 = FUN_010fe5c0;
      g_02790160 = 0;
      ram_0000000002790168 = 0;
      g_02790170 = 0;
      ram_0000000002790178 = 0;
      g_02790180 = 0;
      ram_0000000002790188 = 0;
      g_02790190 = 0;
      ram_0000000002790198 = 0;
      g_027901a0 = 0;
      ram_00000000027901a8 = 0;
      g_027901b0 = 0;
      ram_00000000027901b8 = 0;
      g_027901c0 = 0;
      ram_00000000027901c8 = 0;
      g_027901d0 = 0;
      ram_00000000027901d8 = 0;
      g_027901e0 = 0;
      ram_00000000027901e8 = 0;
      g_027901f0 = 0;
      ram_00000000027901f8 = 0;
      g_02790200 = 0;
      ___cxa_guard_release();
    }
    if (pplVar38 == (int64_t **)0x0) {
LAB_01472a9f:
      ppplVar53 = &g_02802688;
      pplVar38 = g_02802688;
      if (g_02802690 != '\0') goto LAB_01472aaf;
LAB_01472ac2:
      if (pplVar38 != (int64_t **)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      (*(*pplVar38)[0x6c])();
      cVar15 = FUN_00e85ea0();
      if (cVar15 == '\0') goto LAB_01472a9f;
      ppplVar53 = &local_58;
      pplVar38 = local_58;
      if (local_50[0] == '\0') goto LAB_01472ac2;
LAB_01472aaf:
      *(void*)(ppplVar53 + 1) = 0;
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
      FUN_00d50b20();
    }
    pvVar20 = _pthread_getspecific(pVar37);
    if (pvVar20 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar15 = FUN_014bc070();
    if (cVar15 != '\0') {
      pVar37 = *(void* *)(*arg1 + 0xc);
      lVar21 = (int64_t)(int)pVar37;
      pplVar27 = *(int64_t ***)(*(int64_t *)(*arg1 + 0x10) + -0x10 + lVar21 * 8);
      local_50[0] = '\0';
      local_58 = pplVar27;
      // [STATIC_INIT: property registration]
      if (pplVar27 == (int64_t **)0x0) {
LAB_01472b75:
        ppplVar53 = &g_02802688;
        pplVar27 = g_02802688;
        if (g_02802690 != '\0') goto LAB_01472b85;
LAB_01472bbc:
        if (pplVar27 != (int64_t **)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        (*(*pplVar27)[0x6c])();
        cVar15 = FUN_00e85ea0();
        if (cVar15 == '\0') goto LAB_01472b75;
        ppplVar53 = &local_58;
        pplVar27 = local_58;
        if (local_50[0] == '\0') goto LAB_01472bbc;
LAB_01472b85:
        *(void*)(ppplVar53 + 1) = 0;
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      pvVar20 = _pthread_getspecific(pVar37);
      pplVar46 = pplVar27;
      if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
        pplVar46 = (int64_t **)pplVar27[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
      }
      lVar21 = (*(*pplVar46)[0x70])();
      pvVar20 = _pthread_getspecific(pVar37);
      pplVar46 = pplVar27;
      if ((pvVar20 != (void *)0x0) && (lVar52 = FUN_00e8b990(), lVar52 != 0)) {
        pplVar46 = (int64_t **)pplVar27[(uint64_t)(*(uint *)(lVar52 + 0x154) & 1) + 4];
      }
      lVar52 = (*(*pplVar46)[0x71])();
      pVar37 = 0x2802558;
      if ((int64_t)iVar18 - (lVar21 + lVar52) < (int64_t)(int)(float)local_1d8) {
        pvVar20 = _pthread_getspecific(0x2802558);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar20 = _pthread_getspecific(pVar37);
        pplVar46 = pplVar27;
        if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
          pplVar46 = (int64_t **)pplVar27[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
        }
        (*(*pplVar46)[0x70])();
        FUN_014bb2b0();
        local_50[0] = '\0';
        local_58 = pplVar38;
        FUN_00d23f50();
        if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar20 = _pthread_getspecific(0x2802558);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bb2b0();
      }
      if (pplVar27 != (int64_t **)0x0) {
        FUN_00d50b20();
      }
    }
    if (pplVar38 != (int64_t **)0x0) {
      FUN_00d50b20();
    }
  }
  pVar37 = *(void* *)(*arg1 + 0xc);
  lVar21 = (int64_t)(int)pVar37;
  if (lVar21 == 0) goto LAB_01472f1a;
  pplVar38 = *(int64_t ***)(*(int64_t *)(*arg1 + 0x10) + -8 + lVar21 * 8);
  local_50[0] = '\0';
  local_58 = pplVar38;
  // [STATIC_INIT: property registration]
  if (pplVar38 == (int64_t **)0x0) {
LAB_01472dc5:
    ppplVar53 = &g_02802688;
    pplVar38 = g_02802688;
    if (g_02802690 != '\0') goto LAB_01472dd5;
LAB_01472de8:
    if (pplVar38 != (int64_t **)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (*(*pplVar38)[0x6c])();
    cVar15 = FUN_00e85ea0();
    if (cVar15 == '\0') goto LAB_01472dc5;
    ppplVar53 = &local_58;
    pplVar38 = local_58;
    if (local_50[0] == '\0') goto LAB_01472de8;
LAB_01472dd5:
    *(void*)(ppplVar53 + 1) = 0;
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  pvVar20 = _pthread_getspecific(pVar37);
  pplVar27 = pplVar38;
  if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
    pplVar27 = (int64_t **)pplVar38[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
  }
  lVar21 = (*(*pplVar27)[0x70])();
  pvVar20 = _pthread_getspecific(pVar37);
  pplVar27 = pplVar38;
  if ((pvVar20 != (void *)0x0) && (lVar52 = FUN_00e8b990(), lVar52 != 0)) {
    pplVar27 = (int64_t **)pplVar38[(uint64_t)(*(uint *)(lVar52 + 0x154) & 1) + 4];
  }
  lVar52 = (*(*pplVar27)[0x71])();
  if ((int64_t)iVar18 < lVar52 + lVar21) {
    pvVar20 = _pthread_getspecific(pVar37);
    pplVar27 = pplVar38;
    if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
      pplVar27 = (int64_t **)pplVar38[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
    }
    (*(*pplVar27)[0x70])();
    pvVar20 = _pthread_getspecific(pVar37);
    if (pvVar20 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bb2b0();
  }
  if (pplVar38 != (int64_t **)0x0) {
    FUN_00d50b20();
  }
LAB_01472f1a:
  FUN_00d216c0();
  pcVar12 = g_025e6278;
  lVar21 = (int64_t)(int)(g_0240f0f8 * local_248 + g_023942d0);
  lVar52 = (int64_t)(int)(g_0240f100 * local_248 + g_023942d0);
  uVar49 = *(uint *)(*arg1 + 0xc);
  if ((int)uVar49 < 1) {
    local_178 = 0;
    uStack_174 = 0;
    bVar6 = false;
    local_90._0_1_ = '\0';
    local_198 = (void*)0x0;
    local_140._0_1_ = '\0';
    local_98 = (int64_t *)0x0;
    local_190 = (void*)0x0;
    local_c8 = 0;
    local_1f0 = 0;
    local_168 = (void*)0x0;
    uVar39 = 0;
    local_1b8 = (int64_t *)0x0;
    local_b0 = local_48;
    local_1b0 = 0;
    local_1d8 = (int64_t *)0x0;
    cVar15 = '\0';
    local_188 = (int64_t *)0x0;
    cVar10 = '\0';
    plVar26 = (int64_t *)0x0;
  }
  else {
    local_2c0 = g_025dca00;
    uVar47 = 0;
    local_2c8 = &g_025dc9e8;
    local_b0 = local_48;
    plVar26 = (int64_t *)0x0;
    cVar10 = '\0';
    local_188 = (int64_t *)0x0;
    cVar15 = '\0';
    local_1d8 = (int64_t *)0x0;
    local_1b0 = 0;
    local_1b8 = (int64_t *)0x0;
    uVar39 = 0;
    local_168 = (void*)0x0;
    local_1f0 = 0;
    local_c8 = 0;
    local_190 = (void*)0x0;
    local_98 = (int64_t *)0x0;
    local_140 = 0;
    local_198 = (void*)0x0;
    local_90 = 0;
    bVar6 = false;
    local_178 = 0;
    uStack_174 = 0;
    do {
      plVar13 = local_98;
      uVar59 = uStack_174;
      pVar37 = local_178;
      cVar16 = local_220;
      plVar40 = local_228;
      local_31 = (byte)local_90;
      local_48 = (int64_t **)CONCAT71(local_48._1_7_,(char)local_140);
      local_c8 = local_c8 & 0xffffffff;
      uVar39 = uVar39 & 0xffffffff;
      local_32 = cVar15;
      plVar41 = *(int64_t **)(*(int64_t *)(*arg1 + 0x10) + uVar47 * 8);
      if (local_228 == plVar41) {
        if ((local_220 == '\0') && (plVar41 != (int64_t *)0x0)) {
          FUN_00d50b00();
          plVar41 = plVar40;
          goto LAB_01473165;
        }
      }
      else {
        if (plVar41 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_228 = plVar41;
        if ((cVar16 != '\0') && (plVar40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01473165:
        local_220 = '\x01';
        plVar40 = plVar41;
      }
      if ((g_027c0170 == '\0') && (iVar17 = ___cxa_guard_acquire(), iVar17 != 0)) {
        g_02790158 = FUN_007ef2d0();
        g_02790140 = "MUAudioSourcePrincipalItem";
        g_02790148 = 0x138;
        g_02790150 = FUN_010fe5c0;
        g_02790160 = 0;
        ram_0000000002790168 = 0;
        g_02790170 = 0;
        ram_0000000002790178 = 0;
        g_02790180 = 0;
        ram_0000000002790188 = 0;
        g_02790190 = 0;
        ram_0000000002790198 = 0;
        g_027901a0 = 0;
        ram_00000000027901a8 = 0;
        g_027901b0 = 0;
        ram_00000000027901b8 = 0;
        g_027901c0 = 0;
        ram_00000000027901c8 = 0;
        g_027901d0 = 0;
        ram_00000000027901d8 = 0;
        g_027901e0 = 0;
        ram_00000000027901e8 = 0;
        g_027901f0 = 0;
        ram_00000000027901f8 = 0;
        g_02790200 = 0;
        ___cxa_guard_release();
      }
      pplVar38 = (int64_t **)&g_02802688;
      if (plVar40 != (int64_t *)0x0) {
        (**(code **)(*plVar40 + 0x360))();
        cVar15 = FUN_00e85ea0();
        pplVar38 = &local_228;
        if (cVar15 == '\0') {
          pplVar38 = (int64_t **)&g_02802688;
        }
      }
      plVar41 = *pplVar38;
      cVar15 = *(char *)(pplVar38 + 1);
      if (plVar41 == plVar26) {
        bVar57 = cVar15 == '\0';
        plVar40 = plVar26;
        cVar15 = cVar10;
        if (((bVar57) || (cVar10 != '\0')) || (plVar41 == (int64_t *)0x0)) goto joined_r0x0147326c;
        FUN_00d50b00();
        pVar35 = (void*)pplVar38;
        cVar10 = '\x01';
      }
      else {
        if ((cVar15 != '\0') && (plVar41 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        pVar35 = (void*)pplVar38;
        plVar40 = plVar41;
        if (cVar10 == '\0') {
joined_r0x0147326c:
          pVar35 = (void*)pplVar38;
          plVar26 = plVar40;
          cVar10 = cVar15;
        }
        else {
          bVar57 = plVar26 != (int64_t *)0x0;
          plVar26 = plVar41;
          cVar10 = cVar15;
          if (bVar57) {
            FUN_00d50b20();
          }
        }
      }
      if (plVar26 == (int64_t *)0x0) {
        FUN_00e828a0();
      }
      pvVar20 = _pthread_getspecific(pVar35);
      if (pvVar20 != (void *)0x0) {
        FUN_00e8b990();
      }
      plVar41 = (int64_t *)((uint64_t)local_48 & 0xff);
      pvVar20 = _pthread_getspecific((void*)plVar41);
      plVar40 = plVar26;
      if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
        plVar41 = plVar26;
        plVar40 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar28 + 0x154) & 1) + 4];
      }
      pVar35 = (void*)plVar41;
      (**(code **)(*plVar40 + 0x380))();
      iVar17 = FUN_0132dca0();
      pvVar20 = _pthread_getspecific(pVar35);
      if (pvVar20 != (void *)0x0) {
        FUN_00e8b990();
      }
      plVar41 = (int64_t *)((uint64_t)local_48 & 0xff);
      pvVar20 = _pthread_getspecific((void*)plVar41);
      plVar40 = plVar26;
      if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
        plVar41 = plVar26;
        plVar40 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar28 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar40 + 0x380))();
      pvVar20 = _pthread_getspecific((void*)plVar41);
      plVar40 = plVar26;
      if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
        plVar41 = plVar26;
        plVar40 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar28 + 0x154) & 1) + 4];
      }
      pVar35 = (void*)plVar41;
      cVar15 = (char)local_48;
      local_140 = (uint64_t)local_48 & 0xff;
      (**(code **)(*plVar40 + 0x388))();
      iVar54 = FUN_0132dca0();
      puVar29 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)(puVar29 + 7) = 0;
      *(void*)((int64_t)puVar29 + 0x3c) = 0;
      *(void*)(puVar29 + 8) = 0;
      *puVar29 = local_2c8;
      puVar29[9] = 0;
      puVar29[10] = 0;
      (*local_2c0)();
      if (puVar29 == local_198) {
        puVar29 = local_198;
        if (cVar15 == '\0') {
          local_140 = 1;
        }
        else {
          FUN_00d50b20();
        }
      }
      else {
        local_140 = 1;
        if ((cVar15 != '\0') && (local_198 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      local_198 = puVar29;
      pvVar20 = _pthread_getspecific(pVar35);
      if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
        pVar35 = (void*)local_198;
      }
      FUN_013eb950(SUB84(local_268,0));
      pvVar20 = _pthread_getspecific(pVar35);
      if (pvVar20 != (void *)0x0) {
        FUN_00e8b990();
      }
      plVar41 = (int64_t *)(int64_t)iVar17;
      iVar17 = (iVar54 - iVar17) * 4;
      local_48 = (int64_t **)plVar41;
      FUN_00c8e2b0(plVar41,iVar17);
      pplVar38 = local_58;
      if ((((local_50[0] == '\0') && (local_58 != (int64_t **)0x0)) &&
          (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      local_3b8 = pplVar38;
      local_3b0 = '\x01';
      FUN_013eb890();
      if ((local_3b0 != '\0') && (local_3b8 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      pvVar20 = _pthread_getspecific((void*)plVar41);
      if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
        plVar41 = plVar26;
      }
      local_3a8 = local_198;
      local_3a0 = '\0';
      FUN_014bd2d0();
      if ((local_3a0 != '\0') && (local_3a8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      puVar29 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)(puVar29 + 7) = 0;
      *(void*)((int64_t)puVar29 + 0x3c) = 0;
      *(void*)(puVar29 + 8) = 0;
      *puVar29 = local_2c8;
      puVar29[9] = 0;
      puVar29[10] = 0;
      (*local_2c0)();
      if (puVar29 == local_190) {
        puVar29 = local_190;
        if ((char)local_c8 == '\0') goto LAB_01473857;
        FUN_00d50b20();
      }
      else if (((char)local_c8 == '\0') || (local_190 == (void*)0x0)) {
LAB_01473857:
        local_190 = puVar29;
        local_c8 = CONCAT71((int7)((uint64_t)plVar41 >> 8),1);
      }
      else {
        FUN_00d50b20();
        local_c8 = CONCAT71((int7)((uint64_t)plVar41 >> 8),1);
        local_190 = puVar29;
      }
      pVar35 = (void*)local_c8;
      pvVar20 = _pthread_getspecific(pVar35);
      if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
        pVar35 = (void*)local_190;
      }
      FUN_013eb950(SUB84(local_268,0));
      pvVar20 = _pthread_getspecific(pVar35);
      if (pvVar20 != (void *)0x0) {
        FUN_00e8b990();
      }
      pplVar27 = local_48;
      FUN_00c8e2b0(local_48,iVar17);
      pplVar38 = local_58;
      if ((((local_50[0] == '\0') && (local_58 != (int64_t **)0x0)) &&
          (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      local_398 = pplVar38;
      local_390 = '\x01';
      FUN_013eb890();
      if ((local_390 != '\0') && (local_398 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      pvVar20 = _pthread_getspecific((void*)pplVar27);
      if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
        pplVar27 = (int64_t **)plVar26;
      }
      local_388 = local_190;
      local_380 = '\0';
      FUN_014bd350();
      if ((local_380 != '\0') && (local_388 != (void*)0x0)) {
        FUN_00d50b20();
      }
      puVar29 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)(puVar29 + 7) = 0;
      *(void*)((int64_t)puVar29 + 0x3c) = 0;
      *(void*)(puVar29 + 8) = 0;
      *puVar29 = local_2c8;
      puVar29[9] = 0;
      puVar29[10] = 0;
      (*local_2c0)();
      if (puVar29 == local_168) {
        puVar29 = local_168;
        if ((char)uVar39 == '\0') goto LAB_01473b17;
        FUN_00d50b20();
      }
      else if (((char)uVar39 == '\0') || (local_168 == (void*)0x0)) {
LAB_01473b17:
        local_168 = puVar29;
        uVar39 = CONCAT71((int7)((uint64_t)pplVar27 >> 8),1);
      }
      else {
        FUN_00d50b20();
        uVar39 = CONCAT71((int7)((uint64_t)pplVar27 >> 8),1);
        local_168 = puVar29;
      }
      pVar35 = (void*)uVar39;
      pvVar20 = _pthread_getspecific(pVar35);
      if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
        pVar35 = (void*)local_168;
      }
      FUN_013eb950(SUB84(local_268,0));
      pvVar20 = _pthread_getspecific(pVar35);
      if (pvVar20 != (void *)0x0) {
        FUN_00e8b990();
      }
      pplVar27 = local_48;
      FUN_00c8e2b0(local_48,iVar17);
      pplVar38 = local_58;
      if ((((local_50[0] == '\0') && (local_58 != (int64_t **)0x0)) &&
          (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      local_378 = pplVar38;
      local_370 = '\x01';
      FUN_013eb890();
      if ((local_370 != '\0') && (local_378 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      pvVar20 = _pthread_getspecific((void*)pplVar27);
      if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
        pplVar27 = (int64_t **)plVar26;
      }
      local_368 = local_168;
      local_360 = '\0';
      FUN_014bc1d0();
      if ((local_360 != '\0') && (local_368 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pvVar20 = _pthread_getspecific((void*)pplVar27);
      if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
        pplVar27 = (int64_t **)plVar26;
      }
      FUN_014bd640(SUB84(local_248,0));
      pvVar20 = _pthread_getspecific((void*)pplVar27);
      if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
        pplVar27 = (int64_t **)plVar26;
      }
      pvVar20 = _pthread_getspecific((void*)pplVar27);
      plVar41 = plVar26;
      if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
        pplVar27 = (int64_t **)plVar26;
        plVar41 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar28 + 0x154) & 1) + 4];
      }
      pVar35 = (void*)pplVar27;
      (**(code **)(*plVar41 + 0x388))();
      FUN_014bcf80();
      pvVar20 = _pthread_getspecific(pVar35);
      if (pvVar20 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bfad0();
      plVar41 = (int64_t *)FUN_00e8fc40();
      FUN_007eeec0();
      (**(code **)(*plVar41 + 0x18))();
      cVar15 = local_32;
      if (plVar41 == local_188) {
        plVar41 = local_188;
        if (local_32 == '\0') {
          cVar15 = '\x01';
        }
        else {
          FUN_00d50b20();
        }
      }
      else {
        cVar15 = '\x01';
        if ((local_32 != '\0') && (local_188 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_188 = plVar41;
      plVar41 = (int64_t *)FUN_00115860();
      uVar22 = (**(code **)(*plVar41 + 0x18))();
      if (local_1d8 == plVar41) {
        if (((char)local_1b0 == '\0') && (plVar41 = local_1d8, local_1d8 != (int64_t *)0x0))
        goto LAB_0147409b;
        if (local_1d8 == (int64_t *)0x0) {
          local_1d8 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b20();
        }
      }
      else {
        if (((char)local_1b0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
          uVar22 = FUN_00d50b20();
        }
LAB_0147409b:
        local_1d8 = plVar41;
        local_1b0 = CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
      }
      pvVar20 = _pthread_getspecific(pVar35);
      if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
        pVar35 = (void*)local_1d8;
      }
      local_350 = '\0';
      local_358 = plVar26;
      FUN_013dd650();
      if ((local_350 != '\0') && (local_358 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar20 = _pthread_getspecific(pVar35);
      if (pvVar20 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_348 = local_1d8;
      local_340 = '\0';
      FUN_014bc440();
      if ((local_340 != '\0') && (local_348 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar20 = _pthread_getspecific(pVar35);
      pVar36 = (void*)local_188;
      if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
        pVar35 = pVar36;
      }
      local_338 = local_1d8;
      local_330 = '\0';
      uVar60 = FUN_013dfbc0();
      if ((local_330 != '\0') && (local_338 != (int64_t *)0x0)) {
        uVar60 = FUN_00d50b20();
      }
      if (local_98 != (int64_t *)0x0) {
        if ((char)local_28c != '\0') {
          pvVar20 = _pthread_getspecific(pVar35);
          if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
            pVar35 = (void*)local_1d8;
          }
          FUN_013dd6a0();
          pvVar20 = _pthread_getspecific(pVar35);
          if (pvVar20 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar16 = FUN_014bc070();
          uVar60 = extraout_XMM0_Da_01;
          if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
            uVar60 = FUN_00d50b20();
          }
          if (cVar16 == '\0') goto LAB_014745f6;
        }
        pvVar20 = _pthread_getspecific(pVar35);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd6a0();
        pvVar20 = _pthread_getspecific(pVar35);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar20 = _pthread_getspecific(pVar35);
        if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
          pVar35 = (void*)local_1d8;
        }
        FUN_013dd6a0();
        local_280 = 0;
        lVar28 = CONCAT71(local_240._1_7_,(char)local_240);
        if (local_238 == '\0') {
          if (lVar28 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_238 = '\0';
        }
        local_280 = '\x01';
        local_288 = lVar28;
        FUN_014bc360();
        if ((local_280 != '\0') && (local_288 != 0)) {
          FUN_00d50b20();
        }
        if ((local_238 != '\0') && (CONCAT71(local_240._1_7_,(char)local_240) != 0)) {
          FUN_00d50b20();
        }
        if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
        pvVar20 = _pthread_getspecific(pVar35);
        if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
          pVar35 = (void*)local_1d8;
        }
        FUN_013dd6a0();
        pvVar20 = _pthread_getspecific(pVar35);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar20 = _pthread_getspecific(pVar35);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd6a0();
        local_270 = 0;
        lVar28 = CONCAT71(local_240._1_7_,(char)local_240);
        if (local_238 == '\0') {
          if (lVar28 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_238 = '\0';
        }
        local_270 = '\x01';
        local_278 = lVar28;
        uVar60 = FUN_014bc2e0();
        if ((local_270 != '\0') && (local_278 != 0)) {
          uVar60 = FUN_00d50b20();
        }
        if ((local_238 != '\0') && (CONCAT71(local_240._1_7_,(char)local_240) != 0)) {
          uVar60 = FUN_00d50b20();
        }
        if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
          uVar60 = FUN_00d50b20();
        }
      }
LAB_014745f6:
      plVar41 = local_1d8;
      if (local_98 == local_1d8) {
        if ((((char)local_1b0 == '\0') || (local_31 != 0)) || (local_98 == (int64_t *)0x0)) {
          local_90 = (uint64_t)local_31;
        }
        else {
          local_90 = 1;
          uVar60 = FUN_00d50b00();
        }
      }
      else {
        if (((char)local_1b0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
          uVar60 = FUN_00d50b00();
        }
        local_90 = local_1b0;
        local_98 = plVar41;
        if (local_31 != 0) {
          local_98 = local_1d8;
          if (plVar13 != (int64_t *)0x0) {
            uVar60 = FUN_00d50b20();
            local_90 = local_1b0;
            local_98 = local_1d8;
          }
        }
      }
      local_320 = '\0';
      local_328 = plVar26;
      uVar22 = FUN_0147e760(uVar60,&local_328);
      pplVar38 = local_58;
      if (local_58 == local_68) {
        pplVar38 = local_68;
        if (((char)local_b0 == '\0') && (local_58 != (int64_t **)0x0)) {
          if (local_50[0] != '\0') goto LAB_01474738;
          local_48 = (int64_t **)CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
          FUN_00d50b00();
        }
        else {
          local_48 = local_b0;
        }
      }
      else if (local_50[0] == '\0') {
        if (local_58 != (int64_t **)0x0) {
          uVar22 = FUN_00d50b00();
        }
        local_48 = (int64_t **)CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
        if (((char)local_b0 != '\0') && (local_68 != (int64_t **)0x0)) {
          FUN_00d50b20();
          local_68 = pplVar38;
          pplVar38 = local_68;
        }
      }
      else {
        if (((char)local_b0 != '\0') && (local_68 != (int64_t **)0x0)) {
          uVar22 = FUN_00d50b20();
        }
LAB_01474738:
        local_50[0] = '\0';
        local_48 = (int64_t **)CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
      }
      local_68 = pplVar38;
      if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      if ((local_320 != '\0') && (local_328 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_250 == (int64_t **)0x0) {
LAB_01474826:
        if (local_68 == (int64_t **)0x0) {
          local_68 = (int64_t **)0x0;
          local_b0 = local_48;
        }
        else {
          dVar55 = (double)local_68[2] * local_248;
          pvVar20 = _pthread_getspecific(pVar35);
          plVar41 = plVar26;
          if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
            plVar41 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar28 + 0x154) & 1) + 4];
          }
          lVar28 = (**(code **)(*plVar41 + 0x380))();
          lVar28 = (int64_t)dVar55 - lVar28;
          if (lVar21 < lVar28) {
            lVar28 = lVar21;
          }
          puVar29 = (void*)FUN_00e8fc40();
          FUN_007ef480();
          pVar35 = 0x25e6250;
          *puVar29 = &g_025e6260;
          puVar29[7] = &g_025e66c0;
          puVar29[0x1c] = 0;
          puVar29[0x19] = 0;
          puVar29[0x1a] = 0;
          *(void*)(puVar29 + 0x1b) = 0;
          (*pcVar12)();
          if (puVar29 == (void*)CONCAT44(uStack_174,local_178)) {
            if (bVar6) {
              FUN_00d50b20();
              bVar57 = bVar6;
            }
            else {
              bVar57 = true;
            }
          }
          else {
            bVar57 = true;
            local_178 = (void*)puVar29;
            uStack_174 = (uint32_t)((uint64_t)puVar29 >> 0x20);
            if ((bVar6) && (CONCAT44(uVar59,pVar37) != 0)) {
              FUN_00d50b20();
            }
          }
          pvVar20 = _pthread_getspecific(pVar35);
          if (pvVar20 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar50 = lVar52;
          FUN_014bad20(lVar52,lVar28);
          fVar62 = *(float *)(local_68 + 4) * *(float *)(local_68 + 4) * g_0240b530;
          if (fVar62 < g_0240df14) {
            fVar62 = (fVar62 / g_02394dc0) * g_02394214 + g_0240df10;
          }
          pvVar20 = _pthread_getspecific((void*)lVar50);
          if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
            lVar50 = CONCAT44(uStack_174,local_178);
          }
          FUN_014bae10(fVar62);
          pvVar20 = _pthread_getspecific((void*)lVar50);
          if ((pvVar20 == (void *)0x0) || (lVar28 = FUN_00e8b990(), lVar28 == 0)) {
            plVar41 = (int64_t *)CONCAT44(uStack_174,local_178);
          }
          else {
            lVar50 = CONCAT44(uStack_174,local_178);
            plVar41 = *(int64_t **)(lVar50 + 0x20 + (uint64_t)(*(uint *)(lVar28 + 0x154) & 1) * 8)
            ;
          }
          lVar28 = (**(code **)(*plVar41 + 0x380))();
          pvVar20 = _pthread_getspecific((void*)lVar50);
          plVar41 = plVar26;
          if ((pvVar20 != (void *)0x0) && (lVar31 = FUN_00e8b990(), lVar31 != 0)) {
            plVar41 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar31 + 0x154) & 1) + 4];
          }
          lVar31 = (**(code **)(*plVar41 + 0x380))();
          if (lVar28 < lVar31) {
            pvVar20 = _pthread_getspecific((void*)lVar50);
            if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
              lVar50 = CONCAT44(uStack_174,local_178);
            }
            pvVar20 = _pthread_getspecific((void*)lVar50);
            plVar41 = plVar26;
            if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
              plVar41 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar28 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar41 + 0x380))();
            FUN_014bad80();
          }
          pvVar20 = _pthread_getspecific((void*)lVar50);
          if ((pvVar20 == (void *)0x0) || (lVar28 = FUN_00e8b990(), lVar28 == 0)) {
            plVar41 = (int64_t *)CONCAT44(uStack_174,local_178);
          }
          else {
            lVar50 = CONCAT44(uStack_174,local_178);
            plVar41 = *(int64_t **)(lVar50 + 0x20 + (uint64_t)(*(uint *)(lVar28 + 0x154) & 1) * 8)
            ;
          }
          lVar28 = (**(code **)(*plVar41 + 0x380))();
          pvVar20 = _pthread_getspecific((void*)lVar50);
          if ((pvVar20 == (void *)0x0) || (lVar31 = FUN_00e8b990(), lVar31 == 0)) {
            plVar41 = (int64_t *)CONCAT44(uStack_174,local_178);
          }
          else {
            lVar50 = CONCAT44(uStack_174,local_178);
            plVar41 = *(int64_t **)(lVar50 + 0x20 + (uint64_t)(*(uint *)(lVar31 + 0x154) & 1) * 8)
            ;
          }
          lVar31 = (**(code **)(*plVar41 + 0x388))();
          pvVar20 = _pthread_getspecific((void*)lVar50);
          plVar41 = plVar26;
          if ((pvVar20 != (void *)0x0) && (lVar32 = FUN_00e8b990(), lVar32 != 0)) {
            plVar41 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar32 + 0x154) & 1) + 4];
          }
          lVar32 = (**(code **)(*plVar41 + 0x380))();
          pvVar20 = _pthread_getspecific((void*)lVar50);
          plVar41 = plVar26;
          if ((pvVar20 != (void *)0x0) && (lVar33 = FUN_00e8b990(), lVar33 != 0)) {
            plVar41 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar33 + 0x154) & 1) + 4];
          }
          lVar33 = (**(code **)(*plVar41 + 0x388))();
          if (lVar33 + lVar32 < lVar31 + lVar28) {
            pvVar20 = _pthread_getspecific((void*)lVar50);
            if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
              lVar50 = CONCAT44(uStack_174,local_178);
            }
            pvVar20 = _pthread_getspecific((void*)lVar50);
            plVar41 = plVar26;
            if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
              plVar41 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar28 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar41 + 0x380))();
            pvVar20 = _pthread_getspecific((void*)lVar50);
            plVar41 = plVar26;
            if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
              plVar41 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar28 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar41 + 0x388))();
            pvVar20 = _pthread_getspecific((void*)lVar50);
            if ((pvVar20 == (void *)0x0) || (lVar28 = FUN_00e8b990(), lVar28 == 0)) {
              plVar41 = (int64_t *)CONCAT44(uStack_174,local_178);
            }
            else {
              lVar50 = CONCAT44(uStack_174,local_178);
              plVar41 = *(int64_t **)
                         (lVar50 + 0x20 + (uint64_t)(*(uint *)(lVar28 + 0x154) & 1) * 8);
            }
            (**(code **)(*plVar41 + 0x380))();
            FUN_014bb2b0();
          }
          pvVar20 = _pthread_getspecific((void*)lVar50);
          if ((pvVar20 == (void *)0x0) || (lVar28 = FUN_00e8b990(), lVar28 == 0)) {
            plVar41 = (int64_t *)CONCAT44(uStack_174,local_178);
          }
          else {
            lVar50 = CONCAT44(uStack_174,local_178);
            plVar41 = *(int64_t **)(lVar50 + 0x20 + (uint64_t)(*(uint *)(lVar28 + 0x154) & 1) * 8)
            ;
          }
          pVar35 = (void*)lVar50;
          iVar17 = (**(code **)(*plVar41 + 0x3a0))();
          pvVar20 = _pthread_getspecific(pVar35);
          if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
            pVar35 = pVar36;
          }
          iVar54 = FUN_013de650();
          uVar19 = iVar17 - iVar54;
          uVar48 = 0;
          if (-1 < (int)uVar19) {
            uVar48 = (uint64_t)uVar19;
          }
          pvVar20 = _pthread_getspecific(pVar35);
          plVar41 = plVar26;
          if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
            plVar41 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar28 + 0x154) & 1) + 4];
          }
          lVar28 = (**(code **)(*plVar41 + 0x388))();
          pvVar20 = _pthread_getspecific(pVar35);
          if (pvVar20 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bcf30();
          if ((int64_t)uVar48 <= lVar28 && -1 < (int)uVar19) {
            plVar41 = (int64_t *)FUN_00115860();
            uVar22 = (**(code **)(*plVar41 + 0x18))();
            if (local_1b8 == plVar41) {
              if (((char)local_1f0 == '\0') && (plVar41 = local_1b8, local_1b8 != (int64_t *)0x0))
              goto LAB_01474fc5;
              if (local_1b8 == (int64_t *)0x0) {
                local_1b8 = (int64_t *)0x0;
              }
              else {
                FUN_00d50b20();
              }
            }
            else {
              if (((char)local_1f0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
                uVar22 = FUN_00d50b20();
              }
LAB_01474fc5:
              local_1b8 = plVar41;
              local_1f0 = CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
            }
            pvVar20 = _pthread_getspecific(pVar35);
            if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
              pVar35 = (void*)local_1b8;
            }
            local_318 = CONCAT44(uStack_174,local_178);
            local_310 = '\0';
            FUN_013dd650();
            if ((local_310 != '\0') && (local_318 != 0)) {
              FUN_00d50b20();
            }
            pvVar20 = _pthread_getspecific(pVar35);
            if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
              pVar35 = local_178;
            }
            local_308 = local_1b8;
            local_300 = '\0';
            FUN_014bc440();
            if ((local_300 != '\0') && (local_308 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar20 = _pthread_getspecific(pVar35);
            if ((pvVar20 != (void *)0x0) && (lVar28 = FUN_00e8b990(), lVar28 != 0)) {
              pVar35 = pVar36;
            }
            local_2f8 = local_1b8;
            local_2f0 = '\0';
            FUN_013dfce0();
            if ((local_2f0 != '\0') && (local_2f8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01433c40(SUB84(local_248,0));
            local_50[0] = '\0';
            local_58 = (int64_t **)CONCAT44(uStack_174,local_178);
            FUN_00d21140();
            if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
            local_58 = local_68;
            local_50[0] = '\0';
            FUN_00d21140();
            if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
          }
          local_b0 = local_48;
          bVar6 = bVar57;
        }
      }
      else {
        local_58 = local_68;
        local_50[0] = '\0';
        cVar16 = FUN_00d23d70();
        if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
        if (cVar16 != '\0' || local_68 == (int64_t **)0x0) goto LAB_01474826;
        if ((char)local_48 != '\0') {
          FUN_00d50b20();
        }
        local_68 = (int64_t **)0x0;
        local_b0 = (int64_t **)0x0;
      }
      pvVar20 = _pthread_getspecific(pVar35);
      if (pvVar20 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_2e8 = local_188;
      local_2e0 = '\0';
      FUN_01327c60();
      if ((local_2e0 != '\0') && (local_2e8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar20 = _pthread_getspecific(pVar35);
      if (pvVar20 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_2d0 = '\0';
      local_2d8 = plVar26;
      FUN_01328c70();
      if ((local_2d0 != '\0') && (local_2d8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar47 = uVar47 + 1;
    } while (uVar49 != uVar47);
  }
  iVar17 = FUN_00e7d850(SUB84(local_248 * g_0241b6a8,0));
  if (*(int *)((int64_t)local_1c8 + 0xc) < 1) {
    local_48 = local_b0;
  }
  else {
    lVar28 = 0;
    local_48 = local_b0;
    do {
      uVar59 = uStack_174;
      pVar37 = local_178;
      lVar50 = local_1c8[2];
      pplVar38 = *(int64_t ***)(lVar50 + lVar28 * 8);
      if (local_68 == pplVar38) {
        if (((char)local_48 == '\0') && (local_68 != (int64_t **)0x0)) {
          local_48 = (int64_t **)CONCAT71((int7)((uint64_t)lVar50 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (pplVar38 != (int64_t **)0x0) {
          lVar50 = FUN_00d50b00();
        }
        if (((char)local_48 == '\0') || (local_68 == (int64_t **)0x0)) {
          local_48 = (int64_t **)CONCAT71((int7)((uint64_t)lVar50 >> 8),1);
          local_68 = pplVar38;
        }
        else {
          uVar22 = FUN_00d50b20();
          local_48 = (int64_t **)CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
          local_68 = pplVar38;
        }
      }
      local_58 = local_68;
      local_50[0] = '\0';
      cVar16 = FUN_00d23d70();
      if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      if (cVar16 == '\0') {
        dVar55 = (double)local_68[2] * local_248;
        if (0 < *(int *)((int64_t)local_218 + 0xc)) {
          lVar50 = 0;
          do {
            plVar41 = *(int64_t **)(local_218[2] + lVar50 * 8);
            pvVar20 = _pthread_getspecific((void*)local_218);
            if ((pvVar20 != (void *)0x0) && (lVar31 = FUN_00e8b990(), lVar31 != 0)) {
              plVar41 = (int64_t *)plVar41[(uint64_t)(*(uint *)(lVar31 + 0x154) & 1) + 4];
            }
            lVar32 = (**(code **)(*plVar41 + 0x3a0))();
            lVar32 = lVar32 - (int64_t)dVar55;
            lVar31 = -lVar32;
            if (0 < lVar32) {
              lVar31 = lVar32;
            }
            if (lVar31 < iVar17) goto LAB_014754b4;
            lVar50 = lVar50 + 1;
          } while (lVar50 < *(int *)((int64_t)local_218 + 0xc));
        }
        if (0 < *(int *)((int64_t)local_230 + 0xc)) {
          lVar50 = 0;
          do {
            plVar41 = *(int64_t **)(local_230[2] + lVar50 * 8);
            pvVar20 = _pthread_getspecific((void*)local_230);
            if ((pvVar20 != (void *)0x0) && (lVar31 = FUN_00e8b990(), lVar31 != 0)) {
              plVar41 = (int64_t *)plVar41[(uint64_t)(*(uint *)(lVar31 + 0x154) & 1) + 4];
            }
            lVar32 = (**(code **)(*plVar41 + 0x3a0))();
            lVar32 = lVar32 - (int64_t)dVar55;
            lVar31 = -lVar32;
            if (0 < lVar32) {
              lVar31 = lVar32;
            }
            if (lVar31 < iVar17) goto LAB_014754b4;
            lVar50 = lVar50 + 1;
          } while (lVar50 < *(int *)((int64_t)local_230 + 0xc));
        }
        puVar29 = (void*)FUN_00e8fc40();
        FUN_007ef480();
        pVar35 = 0x25e6250;
        *puVar29 = &g_025e6260;
        puVar29[7] = &g_025e66c0;
        puVar29[0x1c] = 0;
        puVar29[0x19] = 0;
        puVar29[0x1a] = 0;
        *(void*)(puVar29 + 0x1b) = 0;
        (*pcVar12)();
        if (puVar29 == (void*)CONCAT44(uStack_174,local_178)) {
          if (bVar6) {
            FUN_00d50b20();
            bVar57 = bVar6;
          }
          else {
            bVar57 = true;
          }
        }
        else {
          bVar57 = true;
          local_178 = (void*)puVar29;
          uStack_174 = (uint32_t)((uint64_t)puVar29 >> 0x20);
          if ((bVar6) && (CONCAT44(uVar59,pVar37) != 0)) {
            FUN_00d50b20();
          }
        }
        bVar6 = bVar57;
        pvVar20 = _pthread_getspecific(pVar35);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar50 = lVar52;
        FUN_014bad20(lVar52,lVar21);
        pvVar20 = _pthread_getspecific((void*)lVar50);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bae10(*(float *)(local_68 + 4) * *(float *)(local_68 + 4) * g_0240b530);
        local_58 = (int64_t **)CONCAT44(uStack_174,local_178);
        local_50[0] = '\0';
        FUN_00d21140();
        if ((local_50[0] != '\0') && (local_58 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_014754b4:
      lVar28 = lVar28 + 1;
    } while (lVar28 < *(int *)((int64_t)local_1c8 + 0xc));
  }
  puVar29 = local_1c8;
  uVar59 = FUN_00d242c0(local_1c8,0);
  FUN_00d242c0(uVar59,0);
  if (0 < *(int *)((int64_t)local_218 + 0xc)) {
    lVar21 = 0;
    do {
      pvVar20 = _pthread_getspecific((void*)puVar29);
      if (pvVar20 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar52 = *(int64_t *)(local_218[2] + lVar21 * 8);
      local_2b0 = 0;
      if (lVar52 != 0) {
        FUN_00d50b00();
      }
      local_2b0 = '\x01';
      local_2b8 = lVar52;
      FUN_01329030();
      if ((local_2b0 != '\0') && (local_2b8 != 0)) {
        FUN_00d50b20();
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 < *(int *)((int64_t)local_218 + 0xc));
  }
  if (0 < *(int *)((int64_t)local_230 + 0xc)) {
    lVar21 = 0;
    do {
      pvVar20 = _pthread_getspecific((void*)puVar29);
      if (pvVar20 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar52 = *(int64_t *)(local_230[2] + lVar21 * 8);
      local_2a0 = 0;
      if (lVar52 != 0) {
        FUN_00d50b00();
      }
      local_2a0 = '\x01';
      local_2a8 = lVar52;
      FUN_013297b0();
      if ((local_2a0 != '\0') && (local_2a8 != 0)) {
        FUN_00d50b20();
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 < *(int *)((int64_t)local_230 + 0xc));
  }
  if (((char)local_260 != '\0') && (local_250 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  pplVar27 = local_200;
  pplVar38 = local_258;
  if (local_230 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_218 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (((char)uVar39 != '\0') && (local_168 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_c8 != '\0') && (local_190 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_140 != '\0') && (local_198 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (CONCAT44(uStack_174,local_178) != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_1f0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_1b0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar15 != '\0') && (local_188 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar10 != '\0') && (plVar26 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_220 != '\0') && (local_228 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_298 != (int64_t **)0x0) {
    FUN_00d50b20();
  }
  if ((bVar9) && (local_a0 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_20c != '\0') && (pplVar38 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_a8 != '\0') && (local_60 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar11) && (local_d0 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_7c != '\0') && (local_128 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_158 != '\0') && (local_150 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar56) && ((int64_t **)local_e8._0_8_ != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_180 != '\0') && (local_138 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  if (local_1c0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_1f8 != '\0') && (local_148 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_1e8 != '\0') && (local_1a0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_208 != '\0') && (local_1c8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_1e0 != '\0') && (pplVar27 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_68 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  return;
}

