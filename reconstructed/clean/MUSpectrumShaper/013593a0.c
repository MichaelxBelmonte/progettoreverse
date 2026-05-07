// Function: FUN_013593a0
// Address: 013593a0
// Size: 4873 bytes
// Class: MUSpectrumShaper
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


void FUN_013593a0(void* param_1,int64_t param_2,int64_t *param_3,int param_4)

{
  int64_t lVar1;
  double dVar2;
  int64_t lVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  void *pvVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t *plVar17;
  int64_t *plVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  void*puVar21;
  int64_t lVar22;
  uint uVar23;
  int iVar24;
  void*puVar25;
  void *pvVar26;
  int64_t lVar27;
  uint uVar28;
  int iVar29;
  int64_t lVar30;
  int64_t lVar31;
  int64_t *plVar32;
  uint uVar33;
  int64_t arg1;
  void *pvVar34;
  int64_t lVar35;
  int64_t this_ptr;
  uint64_t uVar36;
  int64_t lVar37;
  uint64_t uVar38;
  int64_t lVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  uint local_res8;
  int local_1d8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  void*local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  void*local_120;
  char local_118;
  int local_10c;
  int64_t local_108;
  int64_t local_100;
  int64_t local_d8;
  char local_d0;
  uint local_b8;
  uint64_t local_a0;
  void*local_80;
  void*local_50;
  
  pvVar26 = (void *)((uint64_t)param_3 & 0xffffffff);
  plVar32 = *(int64_t **)(this_ptr + 0x38);
  plVar18 = param_3;
  pvVar11 = _pthread_getspecific(param_1);
  if (pvVar11 != (void *)0x0) {
    plVar32 = *(int64_t **)(this_ptr + 0x38);
    lVar12 = FUN_00e8b990();
    if (lVar12 != 0) {
      plVar32 = (int64_t *)plVar32[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
    }
  }
  dVar4 = (double)(**(code **)(*plVar32 + 0x370))();
  uVar9 = FUN_014832c0();
  if (param_4 < 0) {
    return;
  }
  if ((int)uVar9 <= param_4) {
    return;
  }
  if (arg1 == 0) {
    return;
  }
  uVar28 = (uint)param_3;
  lVar12 = param_2;
  if (param_2 == 0) {
    lVar12 = FUN_00e83010();
  }
  lVar3 = *(int64_t *)(this_ptr + 0x1a0);
  if (lVar3 == 0) {
    FUN_0132d640();
    lVar3 = *(int64_t *)(this_ptr + 0x1a0);
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  iVar10 = *(int *)(lVar3 + 0x20);
  local_10c = *(int *)(lVar3 + 0x28);
  dVar2 = *(double *)(lVar3 + 0x50);
  if (*(int64_t *)(this_ptr + 0x178) == 0) {
    plVar17 = (int64_t *)FUN_00e8fc40();
    FUN_011410f0();
    (**(code **)(*plVar17 + 0x18))();
    plVar32 = *(int64_t **)(this_ptr + 0x178);
    if (plVar32 == plVar17) {
      FUN_00d50b20();
    }
    else {
      *(int64_t **)(this_ptr + 0x178) = plVar17;
      if (plVar32 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_014832d0();
  if ((local_d0 == '\0') && (local_d8 != 0)) {
    FUN_00d50b00();
  }
  lVar13 = FUN_014838f0();
  lVar14 = FUN_01483910();
  lVar15 = FUN_01483920();
  lVar16 = FUN_01483900();
  local_100 = lVar14;
  if (*(int64_t *)(this_ptr + 400) == 0) {
LAB_0135968e:
    uVar19 = FUN_00e83010();
    *(void*)(this_ptr + 400) = uVar19;
    *(void*)(this_ptr + 0x188) = 0;
    FUN_00d216c0();
    local_1d8 = 0;
    pvVar11 = pvVar26;
    uVar33 = uVar28;
    if (0 < (int)uVar28) {
      do {
        plVar18 = (int64_t *)FUN_00e8fc40();
        FUN_00d4ff60();
        (**(code **)(*plVar18 + 0x18))();
        FUN_00d21140();
        if (plVar18 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        uVar23 = (int)pvVar11 - 1;
        pvVar11 = (void *)(uint64_t)uVar23;
      } while (uVar23 != 0);
    }
  }
  else {
    if (*(uint *)(this_ptr + 0x180) != uVar28) {
LAB_0135967a:
      FUN_00e83070();
      *(void*)(this_ptr + 400) = 0;
      goto LAB_0135968e;
    }
    if (*(void* *)(this_ptr + 0x184) == param_1) {
      bVar8 = false;
      local_80 = (void*)0x0;
      bVar5 = false;
      puVar25 = (void*)0x0;
      goto LAB_01359e82;
    }
    uVar23 = param_1 - *(void* *)(this_ptr + 0x184);
    uVar33 = -uVar23;
    if (0 < (int)uVar23) {
      uVar33 = uVar23;
    }
    if ((int)*(uint *)(this_ptr + 0x180) <= (int)uVar33) goto LAB_0135967a;
    iVar24 = *(int *)(this_ptr + 0x188);
    local_1d8 = (int)(uVar23 + uVar28 + iVar24) % (int)uVar28;
    *(int *)(this_ptr + 0x188) = local_1d8;
    if (-1 < (int)uVar23) {
      local_1d8 = iVar24;
    }
  }
  GNFastFourierTransformer_create();
  if ((local_d0 == '\0') && (local_d8 != 0)) {
    FUN_00d50b00();
  }
  uVar19 = FUN_00e83da0();
  FUN_00e83010();
  uVar20 = FUN_00e83010();
  local_80 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_80 = &g_025f1488;
  *(void*)((int64_t)local_80 + 0xc) = 0;
  *(void*)((int64_t)local_80 + 0x14) = 0;
  *(void*)((int64_t)local_80 + 0x1c) = 0;
  *(void*)((int64_t)local_80 + 0x24) = 0;
  *(void*)((int64_t)local_80 + 0x2c) = 0;
  *(void*)((int64_t)local_80 + 0x34) = 0;
  *(void*)((int64_t)local_80 + 0x3c) = 0;
  *(void*)((int64_t)local_80 + 0x44) = 0;
  local_80[9] = 0;
  local_80[10] = 0;
  pcVar7 = g_025f14a0;
  (*g_025f14a0)();
  local_1c0 = *(int64_t *)(this_ptr + 0x38);
  local_1b8 = '\0';
  local_1a8 = '\0';
  local_1a0 = 0;
  local_198 = '\0';
  local_190 = local_d8;
  local_188 = '\0';
  local_180 = 0;
  local_178 = '\0';
  plVar18 = &local_1c0;
  local_1b0 = lVar3;
  FUN_015c4d90(0,uVar20,plVar18,&local_1b0,&local_190,uVar19,0,6,&local_180);
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if ((int)uVar33 < 1) {
    bVar8 = true;
    bVar5 = false;
    puVar25 = (void*)0x0;
  }
  else {
    local_a0 = 0;
    puVar25 = (void*)0x0;
    bVar5 = false;
    local_50 = local_80;
    bVar6 = true;
    do {
      puVar21 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar21 = &g_025f1488;
      *(void*)((int64_t)puVar21 + 0xc) = 0;
      *(void*)((int64_t)puVar21 + 0x14) = 0;
      *(void*)((int64_t)puVar21 + 0x1c) = 0;
      *(void*)((int64_t)puVar21 + 0x24) = 0;
      *(void*)((int64_t)puVar21 + 0x2c) = 0;
      *(void*)((int64_t)puVar21 + 0x34) = 0;
      *(void*)((int64_t)puVar21 + 0x3c) = 0;
      *(void*)((int64_t)puVar21 + 0x44) = 0;
      puVar21[9] = 0;
      puVar21[10] = 0;
      (*pcVar7)();
      if (puVar21 == puVar25) {
        puVar21 = puVar25;
        if (bVar5) {
          FUN_00d50b20();
          bVar8 = bVar5;
        }
        else {
          bVar8 = true;
        }
      }
      else {
        bVar8 = true;
        if ((bVar5) && (puVar25 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar5 = bVar8;
      puVar25 = puVar21;
      local_170 = *(int64_t *)(this_ptr + 0x38);
      local_168 = '\0';
      local_158 = '\0';
      local_150 = local_50;
      local_148 = '\0';
      local_140 = local_d8;
      local_138 = '\0';
      local_130 = 0;
      local_128 = '\0';
      plVar18 = &local_170;
      local_160 = lVar3;
      FUN_015c4d90(0,uVar20,plVar18,&local_160,&local_140,uVar19,0,0x1e,&local_130);
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      FUN_015c6b60();
      fVar42 = (float)FUN_015c66c0();
      iVar24 = (local_1d8 + (int)local_a0) % (int)uVar28;
      if (0 < (int)uVar9) {
        lVar14 = *(int64_t *)(this_ptr + 400);
        uVar38 = 0;
        do {
          fVar42 = (float)FUN_014b2e80(*(void*)(*(int64_t *)(local_d8 + 0x10) + uVar38 * 4),
                                       iVar10,(float)dVar2,g_02390d2c);
          fVar42 = fVar42 * *(float *)(lVar13 + uVar38 * 4);
          *(float *)(lVar14 + (int64_t)(int)(iVar24 * uVar9) * 4 + uVar38 * 4) = fVar42;
          uVar38 = uVar38 + 1;
        } while (uVar9 != uVar38);
      }
      local_118 = '\0';
      local_120 = puVar25;
      FUN_00d233f0(fVar42,iVar24);
      if ((local_118 != '\0') && (local_120 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (local_50 == puVar25) {
        local_80 = local_50;
        bVar8 = bVar6;
        if ((!bVar6) && (local_50 != (void*)0x0)) {
          FUN_00d50b00();
          bVar8 = true;
        }
      }
      else {
        if (puVar25 != (void*)0x0) {
          FUN_00d50b00();
        }
        local_80 = puVar25;
        bVar8 = bVar5;
        if ((bVar6) && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      local_a0 = local_a0 + 1;
      local_50 = local_80;
      bVar6 = bVar8;
    } while (local_a0 != uVar33);
  }
  FUN_00e83070();
  FUN_00e83070();
  FUN_00e83070();
  if (local_d8 != 0) {
    FUN_00d50b20();
  }
LAB_01359e82:
  *(void* *)(this_ptr + 0x184) = param_1;
  *(uint *)(this_ptr + 0x180) = uVar28;
  lVar13 = (int64_t)(int)uVar9;
  pvVar11 = (void *)(lVar13 * 4);
  pvVar34 = pvVar26;
  if (0 < (int)uVar28) {
    lVar14 = 0;
    do {
      _memcpy(pvVar26,pvVar11,(size_t)plVar18);
      lVar14 = lVar14 + 1;
      pvVar34 = (void *)(int64_t)*(int *)(this_ptr + 0x180);
    } while (lVar14 < (int64_t)pvVar34);
  }
  uVar28 = param_4 + local_res8 + *(int *)(local_100 + 0x20);
  if ((int)uVar9 < (int)uVar28) {
    uVar28 = uVar9;
  }
  if ((param_4 < (int)uVar28) && (local_b8 = (uint)pvVar34, 0 < (int)local_b8)) {
    fVar42 = (float)(dVar4 * g_0240e3a8) / (float)(iVar10 / local_10c);
    fVar43 = g_02390124 / (float)(int)uVar9;
    lVar14 = (int64_t)param_4;
    if (local_b8 == 1) {
      do {
        iVar10 = (int)lVar14;
        fVar40 = (float)_powf(g_02390124 - (float)iVar10 * fVar43,g_0240e31c);
        fVar40 = fVar40 * fVar42;
        if (fVar40 < g_02390124) break;
        fVar41 = (float)_expf(g_0241106c / fVar40);
        fVar40 = *(float *)(lVar12 + lVar14 * 4);
        fVar40 = (fVar40 - fVar40) * fVar41 + fVar40;
        *(float *)(lVar12 + lVar14 * 4) = fVar40;
        if (((uint64_t)pvVar34 & 1) != 0) {
          fVar44 = *(float *)(lVar12 + (int64_t)iVar10 * 4);
          *(float *)(lVar12 + (int64_t)iVar10 * 4) = (fVar40 - fVar44) * fVar41 + fVar44;
        }
        lVar14 = lVar14 + 1;
      } while (uVar28 != (uint)lVar14);
    }
    else {
      uVar33 = local_b8 - 1;
      lVar35 = lVar12 + (lVar14 + lVar13 * 2) * 4;
      lVar39 = lVar12 + (lVar13 + lVar14) * 4;
      local_50 = (void*)-(lVar13 + lVar14);
      do {
        fVar40 = (float)_powf(g_02390124 - (float)(int)lVar14 * fVar43,g_0240e31c);
        fVar40 = fVar40 * fVar42;
        if (fVar40 < g_02390124) break;
        fVar41 = (float)_expf(g_0241106c / fVar40);
        fVar40 = *(float *)(lVar12 + lVar14 * 4);
        fVar40 = (fVar40 - fVar40) * fVar41 + fVar40;
        *(float *)(lVar12 + lVar14 * 4) = fVar40;
        if (local_b8 == 2) {
          lVar30 = lVar13 + lVar14;
LAB_0135a274:
          fVar44 = *(float *)(lVar12 + lVar30 * 4);
          fVar40 = (fVar40 - fVar44) * fVar41 + fVar44;
          *(float *)(lVar12 + lVar30 * 4) = fVar40;
          lVar30 = lVar30 + lVar13;
        }
        else {
          lVar30 = 0;
          iVar10 = -(uVar33 & 0xfffffffe);
          do {
            fVar44 = *(float *)(lVar39 + lVar30 * 4);
            fVar44 = (fVar40 - fVar44) * fVar41 + fVar44;
            *(float *)(lVar39 + lVar30 * 4) = fVar44;
            fVar40 = *(float *)(lVar35 + lVar30 * 4);
            fVar40 = (fVar44 - fVar40) * fVar41 + fVar40;
            *(float *)(lVar35 + lVar30 * 4) = fVar40;
            lVar30 = lVar30 + lVar13 * 2;
            iVar10 = iVar10 + 2;
          } while (iVar10 != 0);
          lVar30 = lVar30 - (int64_t)local_50;
          if ((uVar33 & 1) != 0) goto LAB_0135a274;
        }
        iVar10 = (int)lVar30;
        uVar23 = local_b8;
        if (((uint64_t)pvVar34 & 1) != 0) {
          iVar10 = iVar10 - uVar9;
          fVar44 = *(float *)(lVar12 + (int64_t)iVar10 * 4);
          fVar40 = (fVar40 - fVar44) * fVar41 + fVar44;
          *(float *)(lVar12 + (int64_t)iVar10 * 4) = fVar40;
          uVar23 = uVar33;
        }
        if (uVar33 != 0) {
          iVar24 = uVar23 + 2;
          iVar29 = uVar9 * -2 + iVar10;
          iVar10 = iVar10 - uVar9;
          do {
            fVar44 = *(float *)(lVar12 + (int64_t)iVar10 * 4);
            fVar44 = (fVar40 - fVar44) * fVar41 + fVar44;
            *(float *)(lVar12 + (int64_t)iVar10 * 4) = fVar44;
            fVar40 = *(float *)(lVar12 + (int64_t)iVar29 * 4);
            fVar40 = (fVar44 - fVar40) * fVar41 + fVar40;
            *(float *)(lVar12 + (int64_t)iVar29 * 4) = fVar40;
            iVar24 = iVar24 + -2;
            iVar29 = iVar29 + uVar9 * -2;
            iVar10 = iVar10 + uVar9 * -2;
          } while (2 < iVar24);
        }
        lVar14 = lVar14 + 1;
        local_50 = (void*)((int64_t)local_50 + -1);
        lVar35 = lVar35 + 4;
        lVar39 = lVar39 + 4;
      } while (uVar28 != (uint)lVar14);
    }
  }
  puVar21 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar21 = &g_025f0d98;
  puVar21[2] = 0;
  puVar21[3] = 0;
  puVar21[4] = 0;
  puVar21[5] = 0;
  puVar21[6] = 0;
  puVar21[7] = 0;
  (*g_025f0db0)();
  if (0 < *(int *)(this_ptr + 0x180)) {
    if ((int)local_res8 < 1) {
      lVar12 = 0;
      do {
        local_108 = arg1;
        FUN_015c1480(g_023908d8,local_res8);
        lVar12 = lVar12 + 1;
        arg1 = arg1 + (int64_t)(int)local_res8 * 4;
      } while (lVar12 < *(int *)(this_ptr + 0x180));
    }
    else {
      lVar30 = (int64_t)param_4;
      uVar38 = (uint64_t)local_res8;
      lVar14 = lVar12 + lVar30 * 4;
      lVar31 = 0;
      lVar35 = lVar12;
      lVar39 = arg1;
      do {
        fVar42 = g_02391090;
        lVar1 = lVar12 + lVar31 * lVar13 * 4;
        local_108 = arg1 + lVar31 * uVar38 * 4;
        lVar37 = *(int *)(local_100 + 4) + lVar30;
        uVar36 = 0;
        do {
          fVar43 = 0.0;
          if ((int64_t)(lVar37 + uVar36) < lVar13) {
            fVar43 = *(float *)(lVar35 + lVar37 * 4 + uVar36 * 4) * *(float *)(lVar15 + 4) + 0.0;
            lVar22 = lVar30 + uVar36;
            lVar27 = *(int *)(local_100 + 8) + lVar22;
            if (lVar27 < lVar13) {
              fVar43 = fVar43 + *(float *)(lVar1 + lVar27 * 4) * *(float *)(lVar15 + 8);
              lVar27 = *(int *)(local_100 + 0xc) + lVar22;
              if (lVar27 < lVar13) {
                fVar43 = fVar43 + *(float *)(lVar1 + lVar27 * 4) * *(float *)(lVar15 + 0xc);
                lVar27 = *(int *)(local_100 + 0x10) + lVar22;
                if (lVar27 < lVar13) {
                  fVar43 = fVar43 + *(float *)(lVar1 + lVar27 * 4) * *(float *)(lVar15 + 0x10);
                  lVar27 = *(int *)(local_100 + 0x14) + lVar22;
                  if (lVar27 < lVar13) {
                    fVar43 = fVar43 + *(float *)(lVar1 + lVar27 * 4) * *(float *)(lVar15 + 0x14);
                    lVar27 = *(int *)(local_100 + 0x18) + lVar22;
                    if (lVar27 < lVar13) {
                      fVar43 = fVar43 + *(float *)(lVar1 + lVar27 * 4) * *(float *)(lVar15 + 0x18);
                      lVar27 = *(int *)(local_100 + 0x1c) + lVar22;
                      if (lVar27 < lVar13) {
                        fVar43 = fVar43 + *(float *)(lVar1 + lVar27 * 4) * *(float *)(lVar15 + 0x1c)
                        ;
                        lVar22 = lVar22 + *(int *)(local_100 + 0x20);
                        if (lVar22 < lVar13) {
                          fVar43 = fVar43 + *(float *)(lVar1 + lVar22 * 4) *
                                            *(float *)(lVar15 + 0x20);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          *(float *)(lVar39 + uVar36 * 4) =
               (fVar43 * fVar42 + *(float *)(lVar14 + uVar36 * 4)) * fVar43 * fVar43 *
               *(float *)(lVar16 + lVar30 * 4 + uVar36 * 4);
          uVar36 = uVar36 + 1;
        } while (uVar38 != uVar36);
        FUN_015c1480(g_023908d8,local_res8);
        lVar31 = lVar31 + 1;
        lVar39 = lVar39 + uVar38 * 4;
        lVar14 = lVar14 + (int64_t)pvVar11;
        lVar35 = lVar35 + (int64_t)pvVar11;
      } while (lVar31 < *(int *)(this_ptr + 0x180));
    }
  }
  if (param_2 == 0) {
    FUN_00e83070();
  }
  if (puVar21 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_d8 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((bVar8) && (local_80 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar5) && (puVar25 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return;
}

