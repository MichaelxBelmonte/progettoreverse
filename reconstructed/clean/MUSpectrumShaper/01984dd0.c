// Function: FUN_01984dd0
// Address: 01984dd0
// Size: 12250 bytes
// Class: MUSpectrumShaper
// String references:
//   "%@%@"
//   "%@"
//   "/%@"
//   "                       "
//   "          "
//   "---"
//   "%.3f"
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


void FUN_01984dd0(uint64_t param_1,uint64_t param_2)

{
  void*puVar1;
  float *pfVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  float fVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  void*puVar11;
  void *pvVar12;
  int64_t lVar13;
  void*puVar14;
  void*puVar15;
  void*puVar16;
  int64_t lVar17;
  int64_t lVar18;
  int iVar19;
  void* pVar20;
  int64_t *plVar21;
  int64_t *plVar22;
  uint64_t uVar23;
  int64_t lVar24;
  void*arg1;
  int64_t *this_ptr;
  bool bVar25;
  int64_t *plVar26;
  uint32_t uVar27;
  undefined7 uVar28;
  float fVar29;
  float fVar30;
  uint8_t auVar33 [16];
  uint64_t uVar31;
  uint64_t uVar32;
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t in_XMM1_Qb;
  uint8_t auVar36 [16];
  uint32_t uStack_3c0;
  uint8_t local_388 [16];
  int64_t local_308;
  char local_300;
  int64_t local_2f8;
  char local_2f0;
  int64_t *local_2e8;
  char local_2e0;
  int64_t local_2d8;
  char local_2d0;
  int64_t local_2c8;
  char local_2c0;
  int64_t *local_2b8;
  char local_2b0;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  uint32_t local_28c;
  int64_t *local_288;
  char local_280;
  int64_t *local_278;
  char local_270;
  int64_t local_268;
  int64_t *local_260;
  uint8_t local_258 [16];
  int64_t *local_240;
  char local_238;
  int64_t *local_230;
  char local_228;
  int64_t *local_220;
  char local_218;
  int64_t *local_210;
  char local_208;
  int64_t *local_200;
  char local_1f8;
  int64_t *local_1f0;
  char local_1e8;
  int64_t *local_1e0;
  char local_1d8;
  int64_t *local_1d0;
  char local_1c8;
  int64_t *local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  int64_t *local_1a0;
  char local_198;
  int64_t *local_190;
  char local_188;
  int64_t *local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  void*local_140;
  uint8_t local_138 [16];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  uint8_t local_118 [8];
  uint32_t uStack_110;
  uint32_t uStack_10c;
  int64_t *local_100;
  char local_f8;
  void*local_f0;
  uint8_t local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  int64_t *local_c0;
  uint8_t local_b8 [16];
  uint8_t local_a8 [8];
  uint64_t uStack_a0;
  int64_t *local_78;
  char local_70;
  int64_t *local_60;
  uint local_58;
  uint32_t local_54;
  void*local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[0x30] == 0) {
    puVar11 = (void*)FUN_00e8fc40();
    FUN_00b6fa70();
    *puVar11 = &g_0253d290;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    (*g_0253d2a8)();
    lVar13 = this_ptr[0x30];
    this_ptr[0x30] = (int64_t)puVar11;
    if (lVar13 != 0) {
      FUN_00d50b20();
    }
    local_280 = 0;
    FUN_00d50b00();
    local_280 = '\x01';
    local_288 = this_ptr;
    FUN_00b6bd70();
    if ((local_280 != '\0') && (local_288 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00b6bec0();
    if (g_028b0f48 != (int64_t *)0x0) goto LAB_01984ecd;
LAB_01984eda:
    FUN_00e8cb50();
    if (g_028b0f48 == (int64_t *)0x0) {
      FUN_00c8e690();
      plVar21 = local_60;
      if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00c92170();
      ___bzero();
      plVar26 = g_028b0f48;
      if (g_028b0f48 == plVar21) {
        bVar7 = false;
        bVar25 = false;
      }
      else {
        g_028b0f48 = plVar21;
        bVar7 = true;
        bVar25 = true;
        if (plVar26 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if (g_028b0f50 == '\0') {
        g_028b0f50 = '\x01';
        FUN_00e8cb90();
        bVar25 = bVar7;
      }
      if (!bVar25) {
        FUN_00d50b20();
      }
      FUN_00c8e690();
      plVar21 = local_60;
      if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      plVar26 = g_028b0f58;
      if (g_028b0f58 == plVar21) {
        bVar7 = false;
        bVar25 = false;
      }
      else {
        g_028b0f58 = plVar21;
        bVar7 = true;
        bVar25 = true;
        if (plVar26 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if (g_028b0f60 == '\0') {
        g_028b0f60 = '\x01';
        FUN_00e8cb90();
        bVar25 = bVar7;
      }
      if (!bVar25) {
        FUN_00d50b20();
      }
      FUN_00c8e690();
      plVar21 = local_60;
      if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      plVar26 = g_028b0f78;
      if (g_028b0f78 == plVar21) {
        bVar7 = false;
        bVar25 = false;
      }
      else {
        g_028b0f78 = plVar21;
        bVar7 = true;
        bVar25 = true;
        if (plVar26 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if (g_028b0f80 == '\0') {
        g_028b0f80 = '\x01';
        FUN_00e8cb90();
        bVar25 = bVar7;
      }
      if (!bVar25) {
        FUN_00d50b20();
      }
      FUN_00c8e690();
      plVar21 = local_60;
      if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      plVar26 = g_028b0f68;
      if (g_028b0f68 == plVar21) {
        bVar7 = false;
        bVar25 = false;
      }
      else {
        g_028b0f68 = plVar21;
        bVar7 = true;
        bVar25 = true;
        if (plVar26 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if (g_028b0f70 == '\0') {
        g_028b0f70 = '\x01';
        FUN_00e8cb90();
        bVar25 = bVar7;
      }
      if (!bVar25) {
        FUN_00d50b20();
      }
      g_028b0f90 = 0;
      g_028b0f8c = 0;
      g_028b0f88 = 1;
      g_028b0f94 = '\x01';
      g_028b0f51 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b0f51 = '\x01';
      FUN_00e8cb70();
    }
  }
  else {
    if (g_028b0f48 == (int64_t *)0x0) goto LAB_01984eda;
LAB_01984ecd:
    if (g_028b0f51 == '\0') goto LAB_01984eda;
  }
  if (this_ptr[0x31] == 0) {
    FUN_01e1eb80(g_02390108,this_ptr);
    plVar21 = (int64_t *)this_ptr[0x31];
    plVar26 = plVar21;
    if (plVar21 != local_60) {
      if ((char)local_58 == '\0') {
        if (local_60 == (int64_t *)0x0) {
          plVar26 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b00();
          plVar21 = (int64_t *)this_ptr[0x31];
          plVar26 = local_60;
        }
      }
      else {
        local_58 = local_58 & 0xffffff00;
        plVar26 = local_60;
      }
      this_ptr[0x31] = (int64_t)plVar26;
      if (plVar21 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar26 = local_60;
      }
    }
    if (((char)local_58 != '\0') && (plVar26 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e3f820();
  local_388._8_8_ = in_XMM1_Qb;
  local_388._0_8_ = param_2;
  FUN_01e3f820();
  local_d8 = (float)param_2;
  fStack_d4 = (float)((uint64_t)param_2 >> 0x20);
  fStack_d0 = (float)in_XMM1_Qb;
  fStack_cc = (float)((uint64_t)in_XMM1_Qb >> 0x20);
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_78 + 0x398))();
  local_240 = local_60;
  local_238 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_238 = '\x01';
  FUN_01d488d0();
  if ((local_238 != '\0') && (local_240 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  auVar33._4_4_ = fStack_d4;
  auVar33._0_4_ = local_d8;
  auVar33._8_4_ = fStack_d0;
  auVar33._12_4_ = fStack_cc;
  auVar33 = blendps(auVar33,local_388,0xd);
  local_d8 = auVar33._0_4_ * g_023945d0;
  fStack_2a4 = auVar33._4_4_ * _UNK_023945d4;
  fStack_2a0 = auVar33._8_4_ * _UNK_023945d8;
  fStack_29c = auVar33._12_4_ * _UNK_023945dc;
  local_2a8 = local_d8;
  if (fStack_2a4 <= local_d8) {
    local_2a8 = fStack_2a4;
  }
  local_2a8 = local_2a8 * g_023945a0;
  auVar33 = ZEXT416(g_023945e0 & (uint)(g_0240b530 * local_2a8)) | g_023945f0;
  auVar36._4_12_ = auVar33._4_12_;
  auVar36._0_4_ = auVar33._0_4_ + g_0240b530 * local_2a8;
  auVar33 = roundss(ZEXT816(0),auVar36,0xb);
  plVar21 = (int64_t *)*arg1;
  local_128 = fStack_2a4;
  fStack_124 = fStack_2a4;
  fStack_120 = fStack_29c;
  fStack_11c = fStack_29c;
  fStack_d4 = fStack_2a4;
  fStack_d0 = fStack_2a0;
  fStack_cc = fStack_29c;
  FUN_01e3f820();
  (**(code **)(*plVar21 + 0x3b0))();
  fVar5 = auVar33._0_4_;
  fVar29 = fVar5 + fVar5;
  g_028b0f98 = fVar29;
  FUN_0173ba80();
  local_c0 = local_60;
  if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  fVar30 = g_0241b548 * local_2a8;
  ___bzero();
  uVar23 = 0;
  do {
    cVar8 = FUN_00b6a760();
    if (cVar8 != '\0') {
      *(void*)(g_028b0f48[2] + uVar23 + (uVar23 / 3 & 0xfffffffffffffffc) * -3) = 1;
    }
    uVar23 = uVar23 + 1;
  } while ((int)uVar23 != 0x7f);
  puVar11 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar20 = 0x25f4940;
  *puVar11 = &g_025f4940;
  puVar11[7] = 0;
  puVar11[8] = 0;
  puVar11[9] = 0;
  (*g_025f4958)();
  pvVar12 = _pthread_getspecific(pVar20);
  plVar21 = g_028b0f58;
  if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), plVar21 = g_028b0f58, lVar13 != 0)) {
    pVar20 = (void*)puVar11;
  }
  g_028b0f58 = plVar21;
  if (plVar21 != (int64_t *)0x0) {
    local_270 = 0;
    FUN_00d50b00();
  }
  local_270 = '\x01';
  local_278 = plVar21;
  FUN_015ff220();
  if ((local_270 != '\0') && (local_278 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar12 = _pthread_getspecific(pVar20);
  if ((pvVar12 == (void *)0x0) || (lVar13 = FUN_00e8b990(), lVar13 == 0)) {
    lVar13 = puVar11[7];
  }
  else {
    lVar13 = *(int64_t *)(puVar11[(uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4] + 0x38);
  }
  if (lVar13 != 0) {
    FUN_00d50b00();
  }
  local_268 = lVar13;
  puVar14 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar14 = &g_02572358;
  local_a8 = (uint8_t  [8])g_02572370;
  (*g_02572370)();
  lVar13 = 0;
  local_140 = puVar14;
  do {
    FUN_014328b0((double)(int)lVar13,(double)*(float *)(g_028b0f78[2] + lVar13 * 4));
    if (local_70 == '\0') {
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_60 = local_78;
    local_58 = local_58 & 0xffffff00;
    uVar31 = FUN_00d21140();
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      uVar31 = FUN_00d50b20();
    }
    if (local_78 != (int64_t *)0x0) {
      uVar31 = FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      uVar31 = FUN_00d50b20();
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0xc);
  FUN_00d242c0(uVar31,0);
  puVar14 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar14 = &g_02572358;
  (*local_a8)();
  FUN_00d227d0();
  local_60 = (int64_t *)0x0;
  local_58 = local_58 & 0xffffff00;
  FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = (int64_t *)0x0;
  local_58 = local_58 & 0xffffff00;
  FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = (int64_t *)0x0;
  local_58 = local_58 & 0xffffff00;
  FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = (int64_t *)0x0;
  local_58 = local_58 & 0xffffff00;
  FUN_00d21140();
  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar21 = local_140 + 2;
  lVar13 = local_140[2];
  if (g_0241b598 < *(double *)(*(int64_t *)(lVar13 + 0x20) + 0x18)) {
    FUN_00c8e690();
    plVar26 = local_60;
    if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    uVar31 = ___bzero();
    local_58 = local_58 & 0xffffff00;
    local_60 = plVar26;
    FUN_00d233f0(uVar31,0);
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar9 = FUN_00e7d850(*(void*)(*(int64_t *)*plVar21 + 0x10));
    *(void*)(plVar26[2] + (int64_t)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(void*)(*(int64_t *)(*plVar21 + 8) + 0x10));
    *(void*)(plVar26[2] + (int64_t)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(void*)(*(int64_t *)(*plVar21 + 0x10) + 0x10));
    *(void*)(plVar26[2] + (int64_t)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(void*)(*(int64_t *)(*plVar21 + 0x18) + 0x10));
    *(void*)(plVar26[2] + (int64_t)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(void*)(*(int64_t *)(*plVar21 + 0x20) + 0x10));
    *(void*)(plVar26[2] + (int64_t)iVar9) = 1;
    FUN_00c8e690();
    plVar22 = local_60;
    if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    ___bzero();
    if (plVar26 == plVar22) {
      uVar31 = FUN_00d50b20();
    }
    else {
      uVar31 = FUN_00d50b20();
      plVar26 = plVar22;
    }
    local_58 = local_58 & 0xffffff00;
    local_60 = plVar26;
    FUN_00d233f0(uVar31,1);
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar9 = FUN_00e7d850(*(void*)(*(int64_t *)*plVar21 + 0x10));
    *(void*)(plVar26[2] + (int64_t)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(void*)(*(int64_t *)(*plVar21 + 8) + 0x10));
    *(void*)(plVar26[2] + (int64_t)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(void*)(*(int64_t *)(*plVar21 + 0x10) + 0x10));
    *(void*)(plVar26[2] + (int64_t)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(void*)(*(int64_t *)(*plVar21 + 0x18) + 0x10));
    *(void*)(plVar26[2] + (int64_t)iVar9) = 0;
    iVar9 = FUN_00e7d850(*(void*)(*(int64_t *)(*plVar21 + 0x20) + 0x10));
    *(void*)(plVar26[2] + (int64_t)iVar9) = 1;
    FUN_00d50b20();
    lVar13 = *plVar21;
  }
  if (g_0241b598 < *(double *)(*(int64_t *)(lVar13 + 0x18) + 0x18)) {
    FUN_00c8e690();
    plVar26 = local_60;
    if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    uVar31 = ___bzero();
    local_58 = local_58 & 0xffffff00;
    local_60 = plVar26;
    FUN_00d233f0(uVar31,2);
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar9 = FUN_00e7d850(*(void*)(*(int64_t *)*plVar21 + 0x10));
    *(void*)(plVar26[2] + (int64_t)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(void*)(*(int64_t *)(*plVar21 + 8) + 0x10));
    *(void*)(plVar26[2] + (int64_t)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(void*)(*(int64_t *)(*plVar21 + 0x10) + 0x10));
    *(void*)(plVar26[2] + (int64_t)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(void*)(*(int64_t *)(*plVar21 + 0x18) + 0x10));
    *(void*)(plVar26[2] + (int64_t)iVar9) = 1;
    FUN_00d50b20();
    lVar13 = *plVar21;
  }
  if (g_0241b598 < *(double *)(*(int64_t *)(lVar13 + 0x10) + 0x18)) {
    FUN_00c8e690();
    plVar26 = local_60;
    if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    uVar31 = ___bzero();
    local_58 = local_58 & 0xffffff00;
    local_60 = plVar26;
    FUN_00d233f0(uVar31,3);
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar9 = FUN_00e7d850(*(void*)(*(int64_t *)*plVar21 + 0x10));
    *(void*)(plVar26[2] + (int64_t)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(void*)(*(int64_t *)(*plVar21 + 8) + 0x10));
    *(void*)(plVar26[2] + (int64_t)iVar9) = 1;
    iVar9 = FUN_00e7d850(*(void*)(*(int64_t *)(*plVar21 + 0x10) + 0x10));
    *(void*)(plVar26[2] + (int64_t)iVar9) = 1;
    FUN_00d50b20();
  }
  uVar31 = g_025908a0;
  local_28c = g_028b0f8c;
  local_258._0_8_ = g_025795c0;
  lVar13 = 0;
  plVar21 = (int64_t *)&g_025795a8;
  local_138._0_8_ = &g_025795a8;
  do {
    puVar15 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar15 = local_138._0_8_;
    uVar32 = (*local_258._0_8_)();
    uVar32 = FUN_00d94d80(uVar32,uVar31);
    for (lVar24 = lVar13; lVar24 != 0; lVar24 = lVar24 + -1) {
      uVar32 = FUN_00d94d80(uVar32,uVar31);
    }
    lVar24 = *(int64_t *)(puVar14[2] + lVar13 * 8);
    local_a8 = (uint8_t  [8])lVar24;
    if (lVar24 == 0) {
LAB_01986180:
      FUN_00d94d80(uVar32,uVar31);
      if (local_a8 != (uint8_t  [8])0x0) goto LAB_0198619e;
    }
    else {
      FUN_00d50b00();
      plVar21 = (int64_t *)0x0;
      uVar32 = FUN_018daf60(0,local_28c,0,0);
      local_118 = (uint8_t  [8])local_60;
      if ((char)local_58 == '\0') {
        if (local_60 != (int64_t *)0x0) {
          uVar32 = FUN_00d50b00();
          if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            uVar32 = FUN_00d50b20();
          }
        }
      }
      else {
        local_58 = local_58 & 0xffffff00;
      }
      if (local_118 == (uint8_t  [8])0x0) goto LAB_01986180;
      if (*(int *)((int64_t)local_118 + 0xc) == 0) {
        uVar32 = FUN_00d50b20();
        goto LAB_01986180;
      }
      lVar24 = **(int64_t **)((int64_t)local_118 + 0x10);
      if (lVar24 != 0) {
        FUN_00d50b00();
      }
      local_b8._0_8_ = lVar24;
      FUN_018e0500();
      plVar26 = local_60;
      if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      iVar9 = *(int *)(local_b8._0_8_ + 0x18);
      plVar22 = (int64_t *)(int64_t)*(int *)(local_b8._0_8_ + 0x1c);
      FUN_018d8720();
      local_e8 = (uint8_t  [8])local_60;
      if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar21 = *(int64_t **)(plVar26[2] + (int64_t)iVar9 * 8);
      if (plVar21 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_260 = plVar21;
      puVar16 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar16 = local_138._0_8_;
      (*local_258._0_8_)();
      local_78 = local_260;
      local_100 = (int64_t *)local_e8;
      local_f0 = puVar16;
      uVar32 = FUN_00083ea0(2,&local_100);
      uVar32 = FUN_00d94d80(uVar32,&local_60);
      local_60 = (int64_t *)&g_0253d630;
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar32 = FUN_00d50b20();
      }
      puVar16 = local_f0;
      local_60 = &g_024c5048;
      if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
        uVar32 = FUN_00d50b20();
      }
      plVar21 = (int64_t *)local_b8._0_8_;
      if ((int)*(int64_t *)(local_b8._0_8_ + 0x18) != *(int *)(local_b8._0_8_ + 0x1c)) {
        puVar1 = *(void**)(plVar26[2] + (int64_t)plVar22 * 8);
        local_58 = 1;
        local_60 = &g_024c5048;
        local_48 = 0;
        plVar21 = plVar22;
        if (puVar1 != (void*)0x0) {
          uVar32 = FUN_00d50b00();
          plVar21 = plVar22;
        }
        puVar16 = local_f0;
        local_48 = '\x01';
        local_50 = puVar1;
        FUN_00d94d80(uVar32,&local_60);
        local_60 = &g_024c5048;
        if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      local_58 = 1;
      local_60 = &g_024c5048;
      local_48 = 0;
      uVar32 = FUN_00d50b00();
      local_48 = '\x01';
      local_50 = puVar16;
      FUN_00d94d80(uVar32,&local_60);
      local_60 = &g_024c5048;
      if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (local_260 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_e8 != (uint8_t  [8])0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d50b20();
      FUN_00d50b20();
LAB_0198619e:
      FUN_00d50b20();
    }
    if (puVar15 != (void*)0x0) {
      FUN_00d50b20();
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 4);
  pfVar2 = (float *)g_028b0f58[2];
  uVar28 = (undefined7)((uint64_t)puVar15 >> 8);
  if (((((((0.0 < *pfVar2) || (0.0 < pfVar2[1])) || (0.0 < pfVar2[2])) ||
        ((0.0 < pfVar2[3] || (0.0 < pfVar2[4])))) ||
       ((0.0 < pfVar2[5] || ((0.0 < pfVar2[6] || (0.0 < pfVar2[7])))))) || (0.0 < pfVar2[8])) ||
     (((0.0 < pfVar2[9] || (0.0 < pfVar2[10])) || (0.0 < pfVar2[0xb])))) {
    uVar31 = FUN_015ffad0();
    plVar26 = local_60;
    if (local_60 == (int64_t *)0x0) {
      local_f0 = (void*)0x0;
      plVar26 = (int64_t *)0x0;
    }
    else if ((char)local_58 == '\0') {
      uVar31 = FUN_00d50b00();
      local_f0 = (void*)CONCAT71((int7)((uint64_t)uVar31 >> 8),1);
      if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
      local_f0 = (void*)CONCAT71((int7)((uint64_t)uVar31 >> 8),1);
    }
    auVar36 = _local_118;
    uVar27 = (uint32_t)CONCAT71(uVar28,plVar26 == (int64_t *)0x0);
    if ((g_028b0f94 != '\0') && (plVar26 != (int64_t *)0x0)) {
      iVar9 = *(int *)((int64_t)plVar26 + 0xc);
      if (iVar9 != 0) {
        plVar21 = (int64_t *)(uint64_t)g_028b0f90;
        local_118._0_4_ = iVar9 - 1;
        if ((int)g_028b0f90 < iVar9) {
          local_118._0_4_ = g_028b0f90;
        }
        local_118._4_4_ = 0;
        uVar23 = (uint64_t)local_118;
        _local_118 = auVar36;
        (**(code **)(*this_ptr + 0x640))();
        (**(code **)(*local_100 + 0x370))();
        FUN_01d44d80();
        local_230 = local_60;
        local_228 = 0;
        if ((char)local_58 == '\0') {
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = local_58 & 0xffffff00;
        }
        local_228 = '\x01';
        FUN_01d48a10();
        if ((local_228 != '\0') && (local_230 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        _local_118 = CONCAT88(_uStack_110,uVar23);
        if (0 < *(int *)((int64_t)plVar26 + 0xc)) {
          local_b8 = insertps(local_388,ZEXT416((uint)g_028b0f98),0x10);
          local_a8._4_4_ = g_028b0f98;
          local_a8._0_4_ = g_028b0f98;
          uStack_a0 = 0;
          lVar13 = 0;
          do {
            if (local_118 == (uint8_t  [8])lVar13) {
              FUN_01cfbee0();
              plVar22 = local_60;
              local_218 = 0;
              if ((char)local_58 == '\0') {
                if (local_60 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = local_58 & 0xffffff00;
              }
              local_218 = '\x01';
              local_220 = plVar22;
              FUN_01d488d0();
              if ((local_218 != '\0') && (local_220 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_01cfbee0();
              plVar22 = local_60;
              local_208 = 0;
              if ((char)local_58 == '\0') {
                if (local_60 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = local_58 & 0xffffff00;
              }
              local_208 = '\x01';
              local_210 = plVar22;
              FUN_01d488d0();
              if ((local_208 != '\0') && (local_210 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            pvVar12 = _pthread_getspecific((void*)plVar21);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015feec0();
            plVar22 = local_60;
            if ((char)local_58 == '\0') {
              if (local_60 != (int64_t *)0x0) {
                FUN_00d50b00();
                if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              local_58 = local_58 & 0xffffff00;
            }
            (**(code **)(*(int64_t *)*arg1 + 0x3f8))();
            auVar34._4_4_ = local_a8._4_4_;
            auVar34._0_4_ = local_a8._4_4_;
            auVar34._8_4_ = uStack_a0._4_4_;
            auVar34._12_4_ = uStack_a0._4_4_;
            register0x00001204 = auVar34._4_12_;
            local_e8._0_4_ = (float)local_a8._4_4_ + g_028b0f98;
            if (plVar22 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            _local_a8 = insertps(_local_a8,local_e8._0_4_,0x10);
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)((int64_t)plVar26 + 0xc));
        }
        (**(code **)(*this_ptr + 0x640))();
        (**(code **)(*local_100 + 0x370))();
        FUN_01d44d80();
        local_200 = local_60;
        local_1f8 = 0;
        if ((char)local_58 == '\0') {
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = local_58 & 0xffffff00;
        }
        local_1f8 = '\x01';
        FUN_01d48a10();
        if ((local_1f8 != '\0') && (local_200 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (0 < *(int *)((int64_t)plVar26 + 0xc)) {
          insertps(local_388,ZEXT416((uint)g_028b0f98),0x10);
          _local_a8 = insertps(ZEXT416((uint)(g_023908d8 * g_028b0f98)),
                               ZEXT416((uint)g_028b0f98),0x10);
          lVar13 = 0;
          do {
            pVar20 = (void*)plVar21;
            if (local_118 == (uint8_t  [8])lVar13) {
              FUN_01cfbee0();
              plVar21 = local_60;
              local_1e8 = 0;
              if ((char)local_58 == '\0') {
                if (local_60 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = local_58 & 0xffffff00;
              }
              local_1e8 = '\x01';
              local_1f0 = plVar21;
              FUN_01d488d0();
              if ((local_1e8 != '\0') && (local_1f0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_01cfbee0();
              plVar21 = local_60;
              local_1d8 = 0;
              if ((char)local_58 == '\0') {
                if (local_60 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = local_58 & 0xffffff00;
              }
              local_1d8 = '\x01';
              local_1e0 = plVar21;
              FUN_01d488d0();
              if ((local_1d8 != '\0') && (local_1e0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            lVar24 = *(int64_t *)(plVar26[2] + lVar13 * 8);
            if (lVar24 != 0) {
              FUN_00d50b00();
            }
            puVar15 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar15 = local_138._0_8_;
            (*local_258._0_8_)();
            pvVar12 = _pthread_getspecific(pVar20);
            lVar18 = lVar24;
            if ((pvVar12 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              lVar18 = *(int64_t *)(lVar24 + 0x20 + (uint64_t)(*(uint *)(lVar17 + 0x154) & 1) * 8)
              ;
            }
            local_58 = 1;
            plVar21 = &g_024d0b28;
            local_60 = &g_024d0b28;
            local_54 = *(void*)(lVar18 + 0x4c);
            FUN_00d94d80(&g_024d0b28,&local_60);
            (**(code **)(*(int64_t *)*arg1 + 0x3f8))();
            auVar35._4_4_ = local_a8._4_4_;
            auVar35._0_4_ = local_a8._4_4_;
            auVar35._8_4_ = uStack_a0._4_4_;
            auVar35._12_4_ = uStack_a0._4_4_;
            register0x00001204 = auVar35._4_12_;
            local_e8._0_4_ = (float)local_a8._4_4_ + g_028b0f98;
            FUN_00d50b20();
            if (lVar24 != 0) {
              FUN_00d50b20();
            }
            _local_a8 = insertps(_local_a8,local_e8._0_4_,0x10);
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)((int64_t)plVar26 + 0xc));
          uVar27 = 0;
          goto LAB_01986b0d;
        }
      }
      uVar27 = 0;
    }
  }
  else {
    uVar27 = (uint32_t)CONCAT71(uVar28,1);
    local_f0 = (void*)0x0;
    plVar26 = (int64_t *)0x0;
  }
LAB_01986b0d:
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_78 + 0x3a0))();
  local_1d0 = local_60;
  local_1c8 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_1c8 = '\x01';
  FUN_01d488d0();
  if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  local_e8._0_4_ = local_2a8 + local_2a8;
  local_e8._4_4_ = fStack_2a4;
  fStack_e0 = fStack_2a0;
  fStack_dc = fStack_29c;
  local_138._0_4_ = g_023945e0 ^ local_e8._0_4_;
  local_138._4_4_ = _UNK_023945e4 ^ (uint)fStack_2a4;
  local_138._8_4_ = _UNK_023945e8 ^ (uint)fStack_2a0;
  local_138._12_4_ = _UNK_023945ec ^ (uint)fStack_29c;
  insertps(ZEXT416((uint)(g_0241b54c * (float)local_e8._0_4_)),local_138,0x10);
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  _local_a8 = ZEXT416((uint)(g_0241b554 * (float)local_e8._0_4_));
  insertps(ZEXT416((uint)(g_0241b550 * (float)local_e8._0_4_)),_local_a8,0x10);
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  _local_118 = ZEXT416((uint)(g_0241b55c * (float)local_e8._0_4_));
  insertps(ZEXT416((uint)(g_0241b558 * (float)local_e8._0_4_)),_local_118,0x10);
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  insertps(_local_e8,ZEXT416((uint)(g_0241b560 * local_e8._0_4_)),0x10);
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  local_b8 = ZEXT416((uint)(g_0241b564 * (float)local_e8._0_4_));
  local_258 = ZEXT416((uint)(g_0241b568 * (float)local_e8._0_4_));
  insertps(local_b8,local_258,0x10);
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  insertps(local_258,local_b8._0_4_,0x10);
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  insertps(ZEXT416((uint)(g_0241b56c * local_e8._0_4_)),_local_e8,0x10);
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  insertps(_local_118,ZEXT416((uint)(g_0241b570 * (float)local_e8._0_4_)),0x10);
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  insertps(_local_a8,ZEXT416((uint)(g_0241b574 * (float)local_e8._0_4_)),0x10);
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  insertps(local_138,ZEXT416((uint)(g_0241b578 * (float)local_e8._0_4_)),0x10);
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  insertps(_local_a8,ZEXT416((uint)(g_0241b57c * (float)local_e8._0_4_)),0x10);
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  insertps(_local_118,ZEXT416((uint)(g_0241b580 * (float)local_e8._0_4_)),0x10);
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_100 + 0x370))();
  FUN_01d44d80();
  local_1c0 = local_60;
  local_1b8 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_1b8 = '\x01';
  FUN_01d48a10();
  if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_78 + 0x390))();
  local_1b0 = local_60;
  local_1a8 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_1a8 = '\x01';
  FUN_01d488d0();
  if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_b8._0_4_ = uVar27;
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uStack_3c0 = auVar33._8_4_;
  local_a8._4_4_ = fVar29;
  local_a8._0_4_ = fVar29;
  uStack_a0._0_4_ = uStack_3c0;
  uStack_a0._4_4_ = uStack_3c0;
  local_118._4_4_ = fVar5;
  local_118._0_4_ = fVar5;
  uStack_110 = uStack_3c0;
  uStack_10c = uStack_3c0;
  local_138._4_4_ = fVar30;
  local_138._0_4_ = fVar30;
  local_138._8_8_ = 0;
  iVar9 = 0;
  do {
    pVar20 = (void*)plVar21;
    iVar10 = FUN_015b5e20();
    local_258._0_8_ = ___sincosf_stret((float)iVar10 * g_0241b584 + g_024204d0);
    local_258._8_8_ = extraout_XMM0_Qb;
    pvVar12 = _pthread_getspecific(pVar20);
    lVar13 = g_026e3bc8;
    plVar22 = local_c0;
    if ((pvVar12 != (void *)0x0) &&
       (lVar24 = FUN_00e8b990(), lVar13 = g_026e3bc8, plVar22 = local_c0, lVar24 != 0)) {
      plVar22 = (int64_t *)local_c0[(uint64_t)(*(uint *)(lVar24 + 0x154) & 1) + 4];
    }
    g_026e3bc8 = lVar13;
    if (lVar13 != 0) {
      FUN_00d50b00();
    }
    local_300 = '\x01';
    local_2f8 = 0;
    local_2f0 = '\0';
    plVar21 = &local_308;
    local_308 = lVar13;
    (**(code **)(*plVar22 + 0x3c8))(plVar21,iVar9,&local_2f8);
    plVar22 = local_60;
    if ((char)local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    if ((local_2f0 != '\0') && (local_2f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_300 != '\0') && (local_308 != 0)) {
      FUN_00d50b20();
    }
    local_2e8 = plVar22;
    local_2e0 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x3f8))();
    if ((local_2e0 != '\0') && (local_2e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar22 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0xc);
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_78 + 0x3a8))();
  local_1a0 = local_60;
  local_198 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_198 = '\x01';
  FUN_01d488d0();
  if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  iVar9 = 0;
  do {
    iVar10 = FUN_015b5e90();
    iVar10 = iVar10 + 0x11;
    iVar19 = ((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 2) - (iVar10 >> 0x1f);
    pVar20 = iVar19 * 0x18;
    local_258._0_8_ =
         ___sincosf_stret((float)(iVar10 + iVar19 * -0x18) * g_0241b588 + g_024204d0);
    local_258._8_8_ = extraout_XMM0_Qb_00;
    pvVar12 = _pthread_getspecific(pVar20);
    lVar13 = g_026e3bc8;
    plVar21 = local_c0;
    if ((pvVar12 != (void *)0x0) &&
       (lVar24 = FUN_00e8b990(), lVar13 = g_026e3bc8, plVar21 = local_c0, lVar24 != 0)) {
      plVar21 = (int64_t *)local_c0[(uint64_t)(*(uint *)(lVar24 + 0x154) & 1) + 4];
    }
    g_026e3bc8 = lVar13;
    if (lVar13 != 0) {
      FUN_00d50b00();
    }
    local_2d0 = '\x01';
    local_2c8 = 0;
    local_2c0 = '\0';
    local_2d8 = lVar13;
    (**(code **)(*plVar21 + 0x3c8))(&local_2d8,iVar9,&local_2c8);
    plVar21 = local_60;
    if ((char)local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    if ((local_2c0 != '\0') && (local_2c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2d0 != '\0') && (local_2d8 != 0)) {
      FUN_00d50b20();
    }
    local_2b8 = plVar21;
    local_2b0 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x3f8))();
    if ((local_2b0 != '\0') && (local_2b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar21 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0xc);
  bVar25 = true;
  uVar23 = 0;
  lVar13 = 0;
  iVar9 = 0;
  do {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar23;
    local_118._0_4_ = (float)iVar9 * g_0241b588;
    _local_a8 = ZEXT416((uint)(*(float *)(*(int64_t *)(local_268 + 0x10) +
                                         lVar13 + (SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) *
                                                   2 & 0xffffffffffffffe0U) * -3) * local_2a8 +
                              local_2a8));
    ___sincosf_stret((float)iVar9 * g_0241b588 + g_0241b58c + g_024204d0);
    local_a8._4_4_ = local_a8._0_4_;
    uStack_a0._4_4_ = (uint32_t)uStack_a0;
    if (bVar25) {
      (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
    }
    else {
      (**(code **)(*(int64_t *)*arg1 + 0x4e8))();
    }
    ___sincosf_stret((float)local_118._0_4_ + g_0241b590 + g_024204d0);
    (**(code **)(*(int64_t *)*arg1 + 0x4e8))();
    iVar9 = iVar9 + 1;
    lVar13 = lVar13 + 4;
    uVar23 = uVar23 + 1;
    bVar25 = false;
  } while (iVar9 != 0x19);
  (**(code **)(*(int64_t *)*arg1 + 0x558))();
  FUN_01cfbee0();
  local_190 = local_60;
  local_188 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_188 = '\x01';
  FUN_01d488d0();
  if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x518))();
  FUN_01d48b40();
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_78 + 0x3a8))();
  local_180 = local_60;
  local_178 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_178 = '\x01';
  FUN_01d488d0();
  if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x520))();
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_78 + 0x3a0))();
  local_170 = local_60;
  local_168 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_168 = '\x01';
  FUN_01d488d0();
  if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  (**(code **)(*(int64_t *)*arg1 + 0x3c8))();
  (**(code **)(*(int64_t *)*arg1 + 0x3c8))();
  FUN_01d48b40();
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_78 + 0x3a0))();
  local_160 = local_60;
  local_158 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_158 = '\x01';
  FUN_01d488d0();
  if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar23 = 0;
  lVar13 = 0;
  do {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar23;
    _local_a8 = ZEXT416((uint)(*(float *)(*(int64_t *)(local_268 + 0x10) +
                                         lVar13 + (SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),8) *
                                                   2 & 0xffffffffffffffe0U) * -3) * local_2a8 +
                              local_2a8));
    ___sincosf_stret((float)(int)uVar23 * g_0241b588 + g_024204d0);
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    uVar23 = uVar23 + 1;
    lVar13 = lVar13 + 4;
  } while ((int)uVar23 != 0x19);
  cVar8 = local_b8[0];
  if ((g_028b0f94 != '\0' && cVar8 == '\0') &&
     (iVar9 = *(int *)((int64_t)plVar26 + 0xc), iVar9 != 0)) {
    uVar6 = iVar9 - 1;
    if ((int)g_028b0f90 < iVar9) {
      uVar6 = g_028b0f90;
    }
    lVar13 = plVar26[2];
    lVar24 = *(int64_t *)(lVar13 + (int64_t)(int)uVar6 * 8);
    if (lVar24 != 0) {
      FUN_00d50b00();
    }
    local_138._0_8_ = lVar24;
    pVar20 = (void*)lVar13;
    pvVar12 = _pthread_getspecific(pVar20);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar9 = FUN_015ff8d0();
    pvVar12 = _pthread_getspecific(pVar20);
    if ((pvVar12 == (void *)0x0) || (lVar13 = FUN_00e8b990(), lVar13 == 0)) {
      lVar13 = *(int64_t *)(lVar24 + 0x38);
    }
    else {
      lVar13 = *(int64_t *)
                (*(int64_t *)(lVar24 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8) +
                0x38);
    }
    if (lVar13 != 0) {
      FUN_00d50b00();
    }
    FUN_01cfcdc0();
    local_150 = local_60;
    local_148 = 0;
    if ((char)local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    local_148 = '\x01';
    FUN_01d488d0();
    if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar25 = true;
    iVar10 = 0;
    do {
      iVar19 = iVar9 + iVar10;
      local_118._0_4_ = (float)iVar10 * g_0241b588;
      _local_a8 = ZEXT416((uint)(*(float *)(*(int64_t *)(lVar13 + 0x10) +
                                           (int64_t)
                                           (int)(iVar19 + (((uint)(iVar19 / 6 + (iVar19 >> 0x1f)) >>
                                                           2) - (iVar19 >> 0x1f)) * -0x18) * 4) *
                                 local_2a8 + local_2a8));
      ___sincosf_stret((float)iVar10 * g_0241b588 + g_0241b58c + g_024204d0);
      local_a8._4_4_ = local_a8._0_4_;
      uStack_a0._4_4_ = (uint32_t)uStack_a0;
      if (bVar25) {
        (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
      }
      else {
        (**(code **)(*(int64_t *)*arg1 + 0x4e8))();
      }
      ___sincosf_stret((float)local_118._0_4_ + g_0241b590 + g_024204d0);
      (**(code **)(*(int64_t *)*arg1 + 0x4e8))();
      iVar10 = iVar10 + 1;
      bVar25 = false;
    } while (iVar10 != 0x19);
    (**(code **)(*(int64_t *)*arg1 + 0x558))();
    (**(code **)(*(int64_t *)*arg1 + 0x518))();
    FUN_00d50b20();
    cVar8 = local_b8[0];
    if (local_138._0_8_ != 0) {
      FUN_00d50b20();
    }
  }
  if ((char)local_f0 != '\0' && cVar8 == '\0') {
    FUN_00d50b20();
  }
  if (puVar14 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_140 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_268 != 0) {
    FUN_00d50b20();
  }
  if (puVar11 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_c0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

