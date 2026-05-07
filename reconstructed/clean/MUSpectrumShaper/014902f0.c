// Function: FUN_014902f0
// Address: 014902f0
// Size: 36910 bytes
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


void FUN_014902f0(void* param_1)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  float *pfVar4;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  void *pvVar15;
  uint64_t uVar16;
  int64_t lVar17;
  int64_t lVar18;
  int64_t lVar19;
  void*puVar20;
  float *pfVar21;
  void*puVar22;
  undefined7 uVar27;
  uint64_t uVar23;
  uint64_t uVar24;
  void *pvVar25;
  uint8_t auVar26 [8];
  void* pVar28;
  uint64_t uVar29;
  uint64_t uVar30;
  int64_t lVar31;
  uint *puVar32;
  int iVar33;
  int64_t lVar34;
  uint uVar35;
  void*puVar36;
  byte bVar37;
  int iVar38;
  float **ppfVar39;
  float *this_ptr;
  uint64_t uVar40;
  uint uVar41;
  size_t sVar42;
  void*puVar43;
  int64_t lVar44;
  uint64_t uVar45;
  uint uVar46;
  float *pfVar47;
  void*puVar48;
  float *pfVar49;
  uint *puVar50;
  char cVar51;
  int iVar52;
  int64_t lVar53;
  float *pfVar54;
  void*puVar55;
  bool bVar56;
  bool bVar57;
  uint32_t uVar58;
  float fVar59;
  uint8_t auVar60 [16];
  uint8_t auVar61 [16];
  uint64_t extraout_XMM0_Qb;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar62 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint32_t extraout_XMM0_Dd_00;
  uint8_t auVar63 [16];
  uint8_t auVar64 [16];
  uint8_t auVar65 [16];
  uint8_t auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  uint8_t auVar70 [12];
  uint8_t auVar71 [12];
  uint8_t auVar72 [16];
  uint8_t auVar73 [16];
  uint8_t auVar74 [16];
  uint8_t auVar75 [16];
  uint8_t auVar76 [16];
  float fVar84;
  float fVar85;
  float fVar86;
  uint8_t auVar77 [16];
  uint8_t auVar78 [16];
  uint8_t auVar79 [16];
  uint8_t auVar80 [16];
  uint8_t auVar81 [16];
  uint8_t auVar82 [16];
  uint8_t auVar83 [16];
  float fVar87;
  uint8_t auVar88 [16];
  uint8_t auVar90 [16];
  uint8_t auVar92 [16];
  uint8_t auVar93 [16];
  uint8_t auVar94 [16];
  uint8_t auVar95 [16];
  int64_t local_420;
  uint8_t local_418;
  float *local_410;
  uint8_t local_408;
  int64_t local_400;
  uint8_t local_3f8;
  void*local_3f0;
  uint8_t local_3e8;
  uint64_t local_3e0;
  uint64_t local_3d8;
  uint64_t local_3d0;
  uint64_t local_3c8;
  uint64_t local_3c0;
  int64_t local_3b8;
  int64_t local_3b0;
  uint64_t local_3a8;
  uint64_t local_3a0;
  uint64_t local_398;
  uint64_t local_390;
  void*local_388;
  int64_t local_380;
  int64_t local_378;
  float *local_370;
  int64_t local_368;
  float *local_360;
  float *local_358;
  int64_t local_350;
  void*local_348;
  double local_340;
  float *local_338;
  float *local_330;
  char local_328;
  float *local_320;
  char local_318;
  uint64_t local_310;
  char local_308;
  int64_t local_300;
  char local_2f8;
  float *local_2f0;
  char local_2e8;
  int local_2dc;
  void*local_2d8;
  void*local_2d0;
  int64_t local_2c8;
  float *local_2c0;
  uint64_t local_2b8;
  double local_2b0;
  float *local_2a8;
  void *local_2a0;
  float *local_298;
  char local_290;
  float *local_288;
  int64_t local_280;
  float *local_278;
  uint64_t local_270;
  void*local_268;
  uint64_t local_260;
  float local_254;
  code *local_250;
  void*local_248;
  uint64_t local_240;
  int64_t local_238;
  float *local_230;
  float *local_228;
  float *local_220;
  float *local_218;
  void*local_210;
  void*local_208;
  void*local_200;
  float local_1f4;
  float *local_1f0;
  float *local_1e8;
  uint64_t local_1e0;
  uint64_t local_1d8;
  uint64_t local_1c8;
  float fStack_1c0;
  float fStack_1bc;
  float *local_1b8;
  void*local_1b0;
  uint8_t local_1a8 [16];
  float local_18c;
  void*local_188;
  float *local_180;
  float local_178;
  uint32_t uStack_174;
  uint64_t uStack_170;
  void*local_160;
  void*local_158;
  void*local_150;
  uint64_t local_148;
  float *local_140;
  char local_138;
  float *local_130;
  uint64_t local_128;
  uint64_t local_120;
  void*local_118;
  void *local_110;
  void*local_108;
  void *local_100;
  float *local_f8;
  float *local_e0;
  uint8_t local_d8 [16];
  float *local_c8;
  float *local_c0;
  float *local_b8;
  float *local_b0;
  uint8_t local_a8 [8];
  uint64_t uStack_a0;
  float *local_90;
  float *local_88;
  float *local_80;
  uint64_t local_78;
  uint64_t local_68;
  uint64_t uStack_60;
  float *local_58;
  uint64_t local_50;
  float *local_48;
  char local_40;
  float *local_38;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar89 [16];
  uint8_t auVar91 [16];
  
  FUN_013fb420();
  pvVar15 = _pthread_getspecific(param_1);
  if (pvVar15 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  local_180 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (float *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (float *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_138 != '\0') && (local_140 != (float *)0x0)) {
    FUN_00d50b20();
  }
  local_228 = (float *)(uint64_t)(uint)local_180[8];
  local_108 = (void*)(uint64_t)(uint)local_180[9];
  local_254 = local_180[10];
  local_268 = (void*)(int64_t)(int)local_180[0xc];
  local_340 = *(double *)(local_180 + 0xe);
  local_a8 = (uint8_t  [8])*(void*)(local_180 + 0x14);
  lVar53 = *(int64_t *)(this_ptr + 0x1a);
  if (lVar53 != 0) {
    FUN_00d50b00();
  }
  lVar17 = *(int64_t *)(this_ptr + 0x58);
  if (lVar17 != 0) {
    FUN_00d50b00();
  }
  local_418 = 1;
  local_410 = local_180;
  local_408 = 0;
  local_420 = lVar17;
  FUN_014b0a60(this_ptr[0x67],&local_420,&local_410,0);
  if (lVar17 != 0) {
    FUN_00d50b20();
  }
  if (lVar53 != 0) {
    FUN_00d50b20();
  }
  fVar67 = this_ptr[0x67];
  FUN_00d216c0();
  if (*(int64_t *)(this_ptr + 0x6a) != 0) {
    FUN_00e83070();
    this_ptr[0x6a] = 0.0;
    this_ptr[0x6b] = 0.0;
  }
  if (*(int64_t *)(this_ptr + 0x6e) != 0) {
    FUN_00e83070();
    this_ptr[0x6e] = 0.0;
    this_ptr[0x6f] = 0.0;
  }
  if (*(int64_t *)(this_ptr + 0x8e) != 0) {
    FUN_00e83070();
    this_ptr[0x8e] = 0.0;
    this_ptr[0x8f] = 0.0;
  }
  if (*(int64_t *)(this_ptr + 0x90) != 0) {
    FUN_00e83070();
    this_ptr[0x90] = 0.0;
    this_ptr[0x91] = 0.0;
  }
  if (*(int64_t *)(this_ptr + 0x92) != 0) {
    FUN_00e83070();
    this_ptr[0x92] = 0.0;
    this_ptr[0x93] = 0.0;
  }
  if (*(int64_t *)(this_ptr + 0x94) != 0) {
    FUN_00e83070();
    this_ptr[0x94] = 0.0;
    this_ptr[0x95] = 0.0;
  }
  if (*(int64_t *)(this_ptr + 0x96) != 0) {
    FUN_00e83070();
    this_ptr[0x96] = 0.0;
    this_ptr[0x97] = 0.0;
  }
  uVar16 = FUN_00e83010();
  *(void*)(this_ptr + 0x6a) = uVar16;
  local_2dc = (int)fVar67 * 0x1f90;
  uVar16 = FUN_00e83010();
  *(void*)(this_ptr + 0x6e) = uVar16;
  uVar16 = FUN_00e83010();
  *(void*)(this_ptr + 0x8e) = uVar16;
  uVar16 = FUN_00e83010();
  *(void*)(this_ptr + 0x90) = uVar16;
  uVar16 = FUN_00e83010();
  *(void*)(this_ptr + 0x92) = uVar16;
  uVar16 = FUN_00e83010();
  *(void*)(this_ptr + 0x94) = uVar16;
  uVar16 = FUN_00e83010();
  *(void*)(this_ptr + 0x96) = uVar16;
  ___bzero();
  local_2a0 = (void *)((int64_t)(int)fVar67 * 0x1f90);
  ___bzero();
  (**(code **)(*(int64_t *)this_ptr + 0x380))();
  if (*(char *)(this_ptr + 0xf) == '\0') {
    lVar53 = *(int64_t *)(this_ptr + 0x58);
    if (lVar53 != 0) {
      FUN_00d50b00();
    }
    local_3f8 = 1;
    local_3e0 = *(void*)(this_ptr + 0x92);
    local_3d8 = *(void*)(this_ptr + 0x94);
    puVar43 = local_108;
    local_400 = lVar53;
    FUN_014b25b0(local_340,&local_3d8);
    if (lVar53 != 0) {
      FUN_00d50b20();
    }
    FUN_014832d0();
    local_288 = local_48;
    if ((local_40 == '\0') && (local_48 != (float *)0x0)) {
      FUN_00d50b00();
    }
    local_e0 = this_ptr + 0x67;
    FUN_00c8e690();
    pfVar21 = local_48;
    if ((((local_40 == '\0') && (local_48 != (float *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
       && (local_48 != (float *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    local_18c = (float)(double)local_a8;
    uVar46 = (uint)local_108;
    fVar67 = (float)(int)(uVar46 - 1) * local_18c;
    if (*(float *)(&g_00001f8c + *(int64_t *)(local_288 + 4)) <= fVar67) {
      fVar67 = *(float *)(&g_00001f8c + *(int64_t *)(local_288 + 4));
    }
    local_148 = CONCAT44(local_148._4_4_,fVar67);
    local_338 = pfVar21;
    uVar29 = *(uint64_t *)(pfVar21 + 4);
    ___bzero();
    local_1e0 = uVar29;
    ___bzero();
    uVar41 = (int)((float)local_148 / local_18c) + 1;
    if ((int)uVar46 <= (int)((float)local_148 / local_18c)) {
      uVar41 = uVar46;
    }
    if (*(char *)(local_180 + 0x17) == '\0') {
      fVar59 = local_180[0x16];
      lVar53 = FUN_015c7920();
      fVar67 = *local_e0;
      if ((int)fVar67 < 1) goto LAB_01490d99;
      local_a8._0_4_ = (float)(int)fVar59;
      local_1a8._0_4_ = (int)fVar59 + -1;
      if ((int)uVar41 < 2) {
        if ((int)local_108 < 2) {
          lVar53 = 0;
          uVar29 = 0;
          pfVar21 = (float *)0x0;
          do {
            lVar17 = *(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10);
            local_58 = *(float **)(lVar17 + lVar53 * 8);
            if (pfVar21 == local_58) {
              local_58 = pfVar21;
              local_50 = uVar29;
              if (((char)uVar29 == '\0') && (pfVar21 != (float *)0x0)) {
                FUN_00d50b00();
                local_50 = CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
              }
            }
            else {
              if (local_58 != (float *)0x0) {
                lVar17 = FUN_00d50b00();
              }
              local_50 = CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
              if (((char)uVar29 != '\0') && (pfVar21 != (float *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_015c6b60();
            FUN_015c6ba0();
            lVar53 = lVar53 + 1;
            fVar67 = *local_e0;
            uVar29 = local_50 & 0xffffffff;
            pfVar21 = local_58;
          } while (lVar53 < (int)fVar67);
        }
        else {
          lVar17 = 0;
          local_58 = (float *)0x0;
          local_178 = 0.0;
          do {
            lVar18 = *(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10);
            pfVar21 = *(float **)(lVar18 + lVar17 * 8);
            if (local_58 == pfVar21) {
              if ((local_178._0_1_ == '\0') && (local_58 != (float *)0x0)) {
                local_50._0_4_ = (float)CONCAT71((int7)((uint64_t)lVar18 >> 8),1);
                local_178 = 0.0;
                local_1d8 = local_58;
                FUN_00d50b00();
              }
              else {
                local_50._0_4_ = local_178;
              }
            }
            else {
              local_1d8 = local_58;
              if (pfVar21 != (float *)0x0) {
                lVar18 = FUN_00d50b00();
              }
              local_50._0_4_ = (float)CONCAT71((int7)((uint64_t)lVar18 >> 8),1);
              local_58 = pfVar21;
              if ((local_178._0_1_ != '\0') && (local_1d8 != (float *)0x0)) {
                local_1d8 = pfVar21;
                FUN_00d50b20();
              }
            }
            lVar19 = FUN_015c6b60();
            lVar34 = FUN_015c6ba0();
            lVar18 = *(int64_t *)(this_ptr + 0x90);
            fVar67 = *(float *)(lVar18 + lVar17 * 4);
            puVar36 = (void*)0x1;
            do {
              iVar52 = (int)(*(float *)(lVar34 + (int64_t)puVar36 * 4) * (float)local_a8._0_4_);
              if (iVar52 < 0) {
                iVar52 = 0;
              }
              if ((int)fVar59 <= iVar52) {
                iVar52 = local_1a8._0_4_;
              }
              fVar67 = fVar67 + (g_02390124 - *(float *)(lVar53 + (int64_t)iVar52 * 4)) *
                                *(float *)(lVar19 + (int64_t)puVar36 * 4);
              *(float *)(lVar18 + lVar17 * 4) = fVar67;
              puVar36 = puVar36 + 1;
            } while (local_108 != puVar36);
            lVar17 = lVar17 + 1;
            fVar67 = *local_e0;
            local_178 = (float)local_50;
          } while (lVar17 < (int)fVar67);
        }
      }
      else {
        uVar29 = (uint64_t)uVar41;
        if ((int)local_108 < 2) {
          local_38 = (float *)(uVar29 - 2);
          uVar30 = (uint64_t)((uint)(uVar29 - 1) & 3);
          lVar53 = 0;
          local_58 = (float *)0x0;
          local_50 = 0;
          do {
            lVar17 = *(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10);
            pfVar21 = *(float **)(lVar17 + lVar53 * 8);
            if (local_58 == pfVar21) {
              if (((char)local_50 == '\0') && (local_58 != (float *)0x0)) {
                local_50 = CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if (pfVar21 != (float *)0x0) {
                lVar17 = FUN_00d50b00();
              }
              if (((char)local_50 == '\0') || (local_58 == (float *)0x0)) {
                local_50 = CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                local_58 = pfVar21;
              }
              else {
                uVar16 = FUN_00d50b20();
                local_50 = CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                local_58 = pfVar21;
              }
            }
            lVar17 = FUN_015c6b60();
            FUN_015c6ba0();
            fVar67 = *(float *)(local_1e0 + lVar53 * 4);
            lVar18 = 1;
            if ((float *)((int64_t)&MACH_HEADER.magic + 2) < local_38) {
              uVar45 = 0;
              do {
                uVar40 = uVar45;
                fVar67 = fVar67 + *(float *)(lVar17 + 4 + uVar40 * 4);
                *(float *)(local_1e0 + lVar53 * 4) = fVar67;
                fVar67 = fVar67 + *(float *)(lVar17 + 8 + uVar40 * 4);
                *(float *)(local_1e0 + lVar53 * 4) = fVar67;
                fVar67 = fVar67 + *(float *)(lVar17 + 0xc + uVar40 * 4);
                *(float *)(local_1e0 + lVar53 * 4) = fVar67;
                fVar67 = fVar67 + *(float *)(lVar17 + 0x10 + uVar40 * 4);
                *(float *)(local_1e0 + lVar53 * 4) = fVar67;
                uVar45 = uVar40 + 4;
              } while ((uVar29 - 1 & 0xfffffffffffffffc) != uVar40 + 4);
              lVar18 = uVar40 + 5;
            }
            if (uVar30 != 0) {
              uVar45 = 0;
              do {
                fVar67 = fVar67 + *(float *)(lVar17 + lVar18 * 4 + uVar45 * 4);
                *(float *)(local_1e0 + lVar53 * 4) = fVar67;
                uVar45 = uVar45 + 1;
              } while (uVar30 != uVar45);
            }
            lVar53 = lVar53 + 1;
            fVar67 = *local_e0;
          } while (lVar53 < (int)fVar67);
        }
        else {
          local_38 = (float *)(uVar29 - 2);
          local_178 = (float)((uint)(uVar29 - 1) & 3);
          uStack_174 = 0;
          local_1d8 = (float *)(uVar29 - 1 & 0xfffffffffffffffc);
          lVar17 = 0;
          local_58 = (float *)0x0;
          local_50 = 0;
          do {
            lVar18 = *(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10);
            pfVar21 = *(float **)(lVar18 + lVar17 * 8);
            if (local_58 == pfVar21) {
              if (((char)local_50 == '\0') && (local_58 != (float *)0x0)) {
                local_50 = CONCAT71((int7)((uint64_t)lVar18 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if (pfVar21 != (float *)0x0) {
                lVar18 = FUN_00d50b00();
              }
              if (((char)local_50 == '\0') || (local_58 == (float *)0x0)) {
                local_50 = CONCAT71((int7)((uint64_t)lVar18 >> 8),1);
                local_58 = pfVar21;
              }
              else {
                uVar16 = FUN_00d50b20();
                local_50 = CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                local_58 = pfVar21;
              }
            }
            lVar19 = FUN_015c6b60();
            lVar34 = FUN_015c6ba0();
            lVar18 = *(int64_t *)(this_ptr + 0x90);
            fVar67 = *(float *)(lVar18 + lVar17 * 4);
            puVar36 = (void*)0x1;
            do {
              iVar52 = (int)(*(float *)(lVar34 + (int64_t)puVar36 * 4) * (float)local_a8._0_4_);
              if (iVar52 < 0) {
                iVar52 = 0;
              }
              if ((int)fVar59 <= iVar52) {
                iVar52 = local_1a8._0_4_;
              }
              fVar67 = fVar67 + (g_02390124 - *(float *)(lVar53 + (int64_t)iVar52 * 4)) *
                                *(float *)(lVar19 + (int64_t)puVar36 * 4);
              *(float *)(lVar18 + lVar17 * 4) = fVar67;
              puVar36 = puVar36 + 1;
            } while (local_108 != puVar36);
            fVar67 = *(float *)(local_1e0 + lVar17 * 4);
            puVar36 = (void*)0x1;
            if ((float *)((int64_t)&MACH_HEADER.magic + 2) < local_38) {
              pfVar21 = (float *)0x0;
              do {
                pfVar47 = pfVar21;
                fVar67 = fVar67 + *(float *)(lVar19 + 4 + (int64_t)pfVar47 * 4);
                *(float *)(local_1e0 + lVar17 * 4) = fVar67;
                fVar67 = fVar67 + *(float *)(lVar19 + 8 + (int64_t)pfVar47 * 4);
                *(float *)(local_1e0 + lVar17 * 4) = fVar67;
                fVar67 = fVar67 + *(float *)(lVar19 + 0xc + (int64_t)pfVar47 * 4);
                *(float *)(local_1e0 + lVar17 * 4) = fVar67;
                fVar67 = fVar67 + *(float *)(lVar19 + 0x10 + (int64_t)pfVar47 * 4);
                *(float *)(local_1e0 + lVar17 * 4) = fVar67;
                pfVar21 = pfVar47 + 1;
              } while (local_1d8 != pfVar47 + 1);
              puVar36 = (void*)((int64_t)pfVar47 + 5);
            }
            if (CONCAT44(uStack_174,local_178) != 0) {
              lVar18 = 0;
              do {
                fVar67 = fVar67 + *(float *)(lVar19 + (int64_t)puVar36 * 4 + lVar18 * 4);
                *(float *)(local_1e0 + lVar17 * 4) = fVar67;
                lVar18 = lVar18 + 1;
              } while (CONCAT44(uStack_174,local_178) != lVar18);
            }
            lVar17 = lVar17 + 1;
            fVar67 = *local_e0;
          } while (lVar17 < (int)fVar67);
        }
      }
    }
    else {
      fVar67 = *local_e0;
      if ((int)fVar67 < 1) {
LAB_01490d99:
        local_50._0_4_ = 0.0;
        local_58 = (float *)0x0;
      }
      else if ((int)uVar41 < 2) {
        if ((int)local_108 < 2) {
          lVar53 = 0;
          uVar29 = 0;
          pfVar21 = (float *)0x0;
          do {
            lVar17 = *(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10);
            local_58 = *(float **)(lVar17 + lVar53 * 8);
            if (pfVar21 == local_58) {
              local_58 = pfVar21;
              local_50 = uVar29;
              if (((char)uVar29 == '\0') && (pfVar21 != (float *)0x0)) {
                FUN_00d50b00();
                local_50 = CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
              }
            }
            else {
              if (local_58 != (float *)0x0) {
                lVar17 = FUN_00d50b00();
              }
              local_50 = CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
              if (((char)uVar29 != '\0') && (pfVar21 != (float *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_015c6b60();
            FUN_015c6ba0();
            lVar53 = lVar53 + 1;
            fVar67 = *local_e0;
            uVar29 = local_50 & 0xffffffff;
            pfVar21 = local_58;
          } while (lVar53 < (int)fVar67);
        }
        else {
          puVar36 = local_108 + -1;
          lVar53 = 0;
          local_58 = (float *)0x0;
          local_50 = 0;
          do {
            lVar17 = *(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10);
            pfVar21 = *(float **)(lVar17 + lVar53 * 8);
            if (local_58 == pfVar21) {
              if (((char)local_50 == '\0') && (local_58 != (float *)0x0)) {
                local_50 = CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if (pfVar21 != (float *)0x0) {
                lVar17 = FUN_00d50b00();
              }
              if (((char)local_50 == '\0') || (local_58 == (float *)0x0)) {
                local_50 = CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                local_58 = pfVar21;
              }
              else {
                uVar16 = FUN_00d50b20();
                local_50 = CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                local_58 = pfVar21;
              }
            }
            lVar18 = FUN_015c6b60();
            lVar19 = FUN_015c6ba0();
            fVar59 = g_02390124;
            lVar17 = *(int64_t *)(this_ptr + 0x90);
            fVar67 = *(float *)(lVar17 + lVar53 * 4);
            lVar34 = 1;
            if ((int)local_108 != 2) {
              lVar34 = 1;
              do {
                fVar68 = fVar59 - *(float *)(lVar19 + lVar34 * 4);
                fVar69 = 0.0;
                if (0.0 <= fVar68) {
                  fVar69 = fVar68;
                }
                fVar67 = fVar69 * *(float *)(lVar18 + lVar34 * 4) + fVar67;
                *(float *)(lVar17 + lVar53 * 4) = fVar67;
                fVar68 = fVar59 - *(float *)(lVar19 + 4 + lVar34 * 4);
                fVar69 = 0.0;
                if (0.0 <= fVar68) {
                  fVar69 = fVar68;
                }
                fVar67 = fVar69 * *(float *)(lVar18 + 4 + lVar34 * 4) + fVar67;
                *(float *)(lVar17 + lVar53 * 4) = fVar67;
                lVar31 = lVar34 - ((uint64_t)puVar36 & 0xfffffffffffffffe);
                lVar34 = lVar34 + 2;
              } while (lVar31 != -1);
            }
            if (((uint64_t)puVar36 & 1) != 0) {
              fVar69 = g_02390124 - *(float *)(lVar19 + lVar34 * 4);
              fVar59 = 0.0;
              if (0.0 <= fVar69) {
                fVar59 = fVar69;
              }
              *(float *)(lVar17 + lVar53 * 4) = fVar67 + fVar59 * *(float *)(lVar18 + lVar34 * 4);
            }
            lVar53 = lVar53 + 1;
            fVar67 = *local_e0;
          } while (lVar53 < (int)fVar67);
        }
      }
      else {
        uVar29 = (uint64_t)uVar41;
        if ((int)local_108 < 2) {
          local_a8 = (uint8_t  [8])(uVar29 - 2);
          uVar30 = (uint64_t)((uint)(uVar29 - 1) & 3);
          lVar53 = 0;
          local_58 = (float *)0x0;
          local_50 = 0;
          do {
            lVar17 = *(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10);
            pfVar21 = *(float **)(lVar17 + lVar53 * 8);
            if (local_58 == pfVar21) {
              if (((char)local_50 == '\0') && (local_58 != (float *)0x0)) {
                local_50 = CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if (pfVar21 != (float *)0x0) {
                lVar17 = FUN_00d50b00();
              }
              if (((char)local_50 == '\0') || (local_58 == (float *)0x0)) {
                local_50 = CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                local_58 = pfVar21;
              }
              else {
                uVar16 = FUN_00d50b20();
                local_50 = CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                local_58 = pfVar21;
              }
            }
            lVar17 = FUN_015c6b60();
            FUN_015c6ba0();
            fVar67 = *(float *)(local_1e0 + lVar53 * 4);
            lVar18 = 1;
            if (2 < (uint64_t)local_a8) {
              uVar45 = 0;
              do {
                uVar40 = uVar45;
                fVar67 = fVar67 + *(float *)(lVar17 + 4 + uVar40 * 4);
                *(float *)(local_1e0 + lVar53 * 4) = fVar67;
                fVar67 = fVar67 + *(float *)(lVar17 + 8 + uVar40 * 4);
                *(float *)(local_1e0 + lVar53 * 4) = fVar67;
                fVar67 = fVar67 + *(float *)(lVar17 + 0xc + uVar40 * 4);
                *(float *)(local_1e0 + lVar53 * 4) = fVar67;
                fVar67 = fVar67 + *(float *)(lVar17 + 0x10 + uVar40 * 4);
                *(float *)(local_1e0 + lVar53 * 4) = fVar67;
                uVar45 = uVar40 + 4;
              } while ((uVar29 - 1 & 0xfffffffffffffffc) != uVar40 + 4);
              lVar18 = uVar40 + 5;
            }
            if (uVar30 != 0) {
              uVar45 = 0;
              do {
                fVar67 = fVar67 + *(float *)(lVar17 + lVar18 * 4 + uVar45 * 4);
                *(float *)(local_1e0 + lVar53 * 4) = fVar67;
                uVar45 = uVar45 + 1;
              } while (uVar30 != uVar45);
            }
            lVar53 = lVar53 + 1;
            fVar67 = *local_e0;
          } while (lVar53 < (int)fVar67);
        }
        else {
          puVar36 = local_108 + -1;
          local_a8 = (uint8_t  [8])(uVar29 - 2);
          uVar30 = (uint64_t)((uint)(uVar29 - 1) & 3);
          local_38 = (float *)(uVar29 - 1 & 0xfffffffffffffffc);
          local_1a8._0_8_ = puVar36;
          lVar53 = 0;
          local_58 = (float *)0x0;
          local_50 = 0;
          do {
            lVar17 = *(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10);
            pfVar21 = *(float **)(lVar17 + lVar53 * 8);
            if (local_58 == pfVar21) {
              if (((char)local_50 == '\0') && (local_58 != (float *)0x0)) {
                local_50 = CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if (pfVar21 != (float *)0x0) {
                lVar17 = FUN_00d50b00();
              }
              if (((char)local_50 == '\0') || (local_58 == (float *)0x0)) {
                local_50 = CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                local_58 = pfVar21;
              }
              else {
                uVar16 = FUN_00d50b20();
                local_50 = CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                local_58 = pfVar21;
              }
            }
            lVar18 = FUN_015c6b60();
            lVar19 = FUN_015c6ba0();
            fVar59 = g_02390124;
            lVar17 = *(int64_t *)(this_ptr + 0x90);
            fVar67 = *(float *)(lVar17 + lVar53 * 4);
            lVar34 = 1;
            if ((int)local_108 != 2) {
              lVar34 = 1;
              do {
                fVar68 = fVar59 - *(float *)(lVar19 + lVar34 * 4);
                fVar69 = 0.0;
                if (0.0 <= fVar68) {
                  fVar69 = fVar68;
                }
                fVar67 = fVar69 * *(float *)(lVar18 + lVar34 * 4) + fVar67;
                *(float *)(lVar17 + lVar53 * 4) = fVar67;
                fVar68 = fVar59 - *(float *)(lVar19 + 4 + lVar34 * 4);
                fVar69 = 0.0;
                if (0.0 <= fVar68) {
                  fVar69 = fVar68;
                }
                fVar67 = fVar69 * *(float *)(lVar18 + 4 + lVar34 * 4) + fVar67;
                *(float *)(lVar17 + lVar53 * 4) = fVar67;
                lVar31 = lVar34 - ((uint64_t)puVar36 & 0xfffffffffffffffe);
                lVar34 = lVar34 + 2;
              } while (lVar31 != -1);
            }
            if ((local_1a8[0] & 1) != 0) {
              fVar69 = g_02390124 - *(float *)(lVar19 + lVar34 * 4);
              fVar59 = 0.0;
              if (0.0 <= fVar69) {
                fVar59 = fVar69;
              }
              *(float *)(lVar17 + lVar53 * 4) = fVar67 + fVar59 * *(float *)(lVar18 + lVar34 * 4);
            }
            fVar67 = *(float *)(local_1e0 + lVar53 * 4);
            puVar20 = (void*)0x1;
            if (2 < (uint64_t)local_a8) {
              pfVar21 = (float *)0x0;
              do {
                pfVar47 = pfVar21;
                fVar67 = fVar67 + *(float *)(lVar18 + 4 + (int64_t)pfVar47 * 4);
                *(float *)(local_1e0 + lVar53 * 4) = fVar67;
                fVar67 = fVar67 + *(float *)(lVar18 + 8 + (int64_t)pfVar47 * 4);
                *(float *)(local_1e0 + lVar53 * 4) = fVar67;
                fVar67 = fVar67 + *(float *)(lVar18 + 0xc + (int64_t)pfVar47 * 4);
                *(float *)(local_1e0 + lVar53 * 4) = fVar67;
                fVar67 = fVar67 + *(float *)(lVar18 + 0x10 + (int64_t)pfVar47 * 4);
                *(float *)(local_1e0 + lVar53 * 4) = fVar67;
                pfVar21 = pfVar47 + 1;
              } while (local_38 != pfVar47 + 1);
              puVar20 = (void*)((int64_t)pfVar47 + 5);
            }
            if (uVar30 != 0) {
              uVar29 = 0;
              do {
                fVar67 = fVar67 + *(float *)(lVar18 + (int64_t)puVar20 * 4 + uVar29 * 4);
                *(float *)(local_1e0 + lVar53 * 4) = fVar67;
                uVar29 = uVar29 + 1;
              } while (uVar30 != uVar29);
            }
            lVar53 = lVar53 + 1;
            fVar67 = *local_e0;
          } while (lVar53 < (int)fVar67);
        }
      }
    }
    local_3d0 = local_1e0;
    local_a8._0_4_ = (float)(int)local_254;
    FUN_015c1480(g_023908d8 * (float)(int)local_254 * g_0240dec8,fVar67);
    fVar87 = _UNK_0241109c;
    fVar68 = _UNK_02411098;
    fVar69 = _UNK_02411094;
    fVar59 = g_02411090;
    fVar67 = this_ptr[0x67];
    uVar29 = (uint64_t)(uint)fVar67;
    local_3c8 = *(uint64_t *)(this_ptr + 0x90);
    if (0 < (int)fVar67) {
      if (((uint)fVar67 < 4) ||
         ((local_3c8 < local_1e0 + uVar29 * 4 && (local_1e0 < local_3c8 + uVar29 * 4)))) {
        uVar30 = 0;
        fVar67 = g_02394274;
      }
      else {
        uVar30 = (uint64_t)((uint)fVar67 & 0xfffffffc);
        uVar45 = 0;
        do {
          auVar83 = *(uint8_t (*) [16])(local_1e0 + uVar45 * 4);
          auVar93 = *(uint8_t (*) [16])(local_3c8 + uVar45 * 4);
          auVar77 = divps(auVar93,auVar83);
          uVar46 = -(uint)(fVar69 <= auVar83._4_4_);
          uVar41 = -(uint)(fVar68 <= auVar83._8_4_);
          uVar35 = -(uint)(fVar87 <= auVar83._12_4_);
          auVar61._4_4_ = uVar46;
          auVar61._0_4_ = -(uint)(fVar59 <= auVar83._0_4_);
          auVar61._8_4_ = uVar41;
          auVar61._12_4_ = uVar35;
          uVar40 = extractps(auVar61,0);
          if ((uVar40 & 1) != 0) {
            *(int *)(local_3c8 + uVar45 * 4) = auVar77._0_4_;
          }
          if ((uVar46 & 1) != 0) {
            uVar16 = extractps(auVar77,1);
            *(void*)(local_3c8 + 4 + uVar45 * 4) = uVar16;
          }
          if ((uVar41 & 1) != 0) {
            uVar16 = extractps(auVar77,2);
            *(void*)(local_3c8 + 8 + uVar45 * 4) = uVar16;
          }
          if ((uVar35 & 1) != 0) {
            uVar16 = extractps(auVar77,3);
            *(void*)(local_3c8 + 0xc + uVar45 * 4) = uVar16;
          }
          auVar60._4_4_ = -(uint)(auVar83._4_4_ < fVar69);
          auVar60._0_4_ = -(uint)(auVar83._0_4_ < fVar59);
          auVar60._8_4_ = -(uint)(auVar83._8_4_ < fVar68);
          auVar60._12_4_ = -(uint)(auVar83._12_4_ < fVar87);
          auVar83 = blendvps(auVar77,auVar93,auVar60);
          fVar67 = auVar83._0_4_ * auVar83._0_4_;
          fVar84 = auVar83._4_4_ * auVar83._4_4_;
          fVar85 = auVar83._8_4_ * auVar83._8_4_;
          fVar86 = auVar83._12_4_ * auVar83._12_4_;
          pfVar21 = (float *)(local_3c8 + uVar45 * 4);
          *pfVar21 = fVar67 + fVar67;
          pfVar21[1] = fVar84 + fVar84;
          pfVar21[2] = fVar85 + fVar85;
          pfVar21[3] = fVar86 + fVar86;
          uVar45 = uVar45 + 4;
        } while (uVar30 != uVar45);
        fVar67 = g_02394274;
        if (uVar30 == uVar29) goto LAB_01491706;
      }
      do {
        fVar59 = *(float *)(local_1e0 + uVar30 * 4);
        fVar69 = *(float *)(local_3c8 + uVar30 * 4);
        if (fVar67 <= fVar59) {
          fVar69 = fVar69 / fVar59;
          *(float *)(local_3c8 + uVar30 * 4) = fVar69;
        }
        *(float *)(local_3c8 + uVar30 * 4) = fVar69 * fVar69 + fVar69 * fVar69;
        uVar30 = uVar30 + 1;
      } while (uVar29 != uVar30);
    }
LAB_01491706:
    local_a8._0_4_ = (float)local_a8._0_4_ * g_02394298 * g_0240dec8;
    FUN_015c1480(1);
    local_3c0 = *(void*)(this_ptr + 0x90);
    FUN_015c1480(1,this_ptr[0x67]);
    FUN_00d216c0();
    local_80 = *(float **)(this_ptr + 0x2a);
    local_200 = (void*)(int64_t)(int)(g_0240f0f8 * (double)local_80 + g_023942d0);
    local_270 = (uint64_t)(int)(g_0240f100 * (double)local_80 + g_023942d0);
    uVar29 = (uint64_t)(uint)this_ptr[0x67];
    if (0 < (int)this_ptr[0x67]) {
      pfVar21 = *(float **)(this_ptr + 0x90);
      fVar67 = *pfVar21;
      local_f8 = g_025e6278;
      local_d8._0_8_ = -(uint64_t)(4 < (int)local_254);
      uVar30 = 0xffffffffffffffff;
      local_1c8 = CONCAT44(local_1c8._4_4_,fVar67);
      local_178 = 0.0;
      uStack_174 = 0;
      uStack_170 = 0;
      local_1a8 = ZEXT816(0);
      local_a8._0_4_ = fVar67;
      bVar57 = false;
      local_b0 = (float *)0x0;
      local_260 = 0;
      local_1d8 = (float *)0x0;
      do {
        uVar58 = uStack_174;
        fVar69 = fVar67 - (float)local_a8._0_4_;
        fVar59 = fVar69;
        if (fVar69 <= local_178) {
          fVar59 = local_178;
        }
        local_68._0_4_ =
             (float)(~-(uint)(0.0 < fVar69) & (uint)local_178 | (uint)fVar59 & -(uint)(0.0 < fVar69)
                    );
        local_68._4_4_ = uStack_174;
        uStack_60._0_4_ = (int)uStack_170;
        uStack_60._4_4_ = (int)((uint64_t)uStack_170 >> 0x20);
        fVar68 = local_1a8._0_4_;
        fVar59 = (float)((uint)fVar69 & g_02390140);
        if ((float)((uint)fVar69 & g_02390140) <= fVar68) {
          fVar59 = fVar68;
        }
        auVar83._0_4_ = ~-(uint)(fVar69 < g_0239424c) & (uint)fVar68;
        auVar83._4_4_ = local_1a8._4_4_;
        auVar83._8_4_ = local_1a8._8_4_;
        auVar83._12_4_ = local_1a8._12_4_;
        local_1a8 = auVar83 | ZEXT416((uint)fVar59 & -(uint)(fVar69 < g_0239424c));
        local_a8._0_4_ = fVar67;
        if ((uVar30 == 0xffffffffffffffff) ||
           (pfVar21[uVar30] <= fVar67 && fVar67 != pfVar21[uVar30])) {
          if (((int64_t)(uVar30 + 1) < (int64_t)((int)uVar29 + -1)) &&
             (pfVar21[uVar30 + 2] <= fVar67)) {
            pfVar21 = (float *)FUN_00e8fc40();
            FUN_007ef480();
            pVar28 = 0x25e6250;
            *(void**)pfVar21 = &g_025e6260;
            *(void**)(pfVar21 + 0xe) = &g_025e66c0;
            pfVar21[0x38] = 0.0;
            pfVar21[0x39] = 0.0;
            pfVar21[0x32] = 0.0;
            pfVar21[0x33] = 0.0;
            pfVar21[0x34] = 0.0;
            pfVar21[0x35] = 0.0;
            pfVar21[0x36] = 0.0;
            uVar16 = (*local_f8)();
            uVar27 = (undefined7)((uint64_t)uVar16 >> 8);
            if (pfVar21 == local_b0) {
              if ((char)local_260 == '\0') {
                local_260 = CONCAT71(uVar27,1);
                pfVar21 = local_b0;
              }
              else {
                FUN_00d50b20();
                pfVar21 = local_b0;
              }
            }
            else {
              bVar56 = (char)local_260 != '\0';
              local_260 = CONCAT71(uVar27,1);
              if ((bVar56) && (local_b0 != (float *)0x0)) {
                FUN_00d50b20();
              }
            }
            local_b0 = pfVar21;
            pvVar15 = _pthread_getspecific(pVar28);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar29 = local_270;
            FUN_014bad20(local_270,local_200);
            pvVar15 = _pthread_getspecific((void*)uVar29);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bae10();
            local_48 = local_b0;
            local_40 = '\0';
            FUN_00d21140();
            if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
              FUN_00d50b20();
            }
            local_1a8 = ZEXT816(0);
          }
          if (uVar30 != 0xffffffffffffffff) {
            pfVar21 = *(float **)(this_ptr + 0x90);
            fVar67 = pfVar21[uVar30 + 1];
            if (fVar67 <= pfVar21[uVar30 & 0xffffffff]) goto LAB_01491b19;
          }
LAB_01491bc0:
          uStack_170 = uStack_60;
          local_38 = (float *)CONCAT44(local_38._4_4_,(float)local_1c8);
          local_178 = (float)local_68;
          uStack_174 = uVar58;
        }
        else {
          if (pfVar21[(uint64_t)((int64_t)local_1d8 + -1) & 0xffffffff] < fVar67)
          goto LAB_01491bc0;
LAB_01491b19:
          if ((uVar30 + 1 != (uint64_t)((int)*local_e0 - 1)) && (pfVar21[uVar30 + 2] <= fVar67))
          goto LAB_01491bc0;
          local_38 = (float *)CONCAT44(local_38._4_4_,fVar67);
          local_178 = 0.0;
          uStack_174 = 0;
          uStack_170 = 0;
          if (local_b0 == (float *)0x0) {
            local_b0 = (float *)0x0;
            bVar57 = true;
          }
          else {
            if ((!bVar57) || ((float)local_68 <= g_0239424c)) {
              pvVar15 = _pthread_getspecific((void*)pfVar21);
              pVar28 = (void*)pfVar21;
              if ((pvVar15 != (void *)0x0) && (lVar53 = FUN_00e8b990(), lVar53 != 0)) {
                pVar28 = (void*)local_b0;
              }
              FUN_014bae60();
            }
            else {
              pvVar15 = _pthread_getspecific((void*)pfVar21);
              pVar28 = (void*)pfVar21;
              if ((pvVar15 != (void *)0x0) && (lVar53 = FUN_00e8b990(), lVar53 != 0)) {
                pVar28 = (void*)local_b0;
              }
              uVar58 = FUN_014bae60();
              local_b8 = (float *)CONCAT44(local_b8._4_4_,uVar58);
              pvVar15 = _pthread_getspecific(pVar28);
              if ((pvVar15 != (void *)0x0) && (lVar53 = FUN_00e8b990(), lVar53 != 0)) {
                pVar28 = (void*)local_b0;
              }
              FUN_014bae60();
              _powf();
            }
            pvVar15 = _pthread_getspecific(pVar28);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bae10();
            bVar57 = true;
          }
        }
        uVar29 = (uint64_t)(int)*local_e0;
        if ((int64_t)uVar29 <= (int64_t)(uVar30 + 2)) goto LAB_01491db1;
        pfVar21 = *(float **)(this_ptr + 0x90);
        fVar67 = pfVar21[uVar30 + 2];
        uVar30 = uVar30 + 1;
        local_1d8 = (float *)((int64_t)local_1d8 + 1);
        local_1c8 = CONCAT44(local_1c8._4_4_,local_38._0_4_);
      } while( true );
    }
    local_260 = 0;
    local_b0 = (float *)0x0;
LAB_01491db1:
    local_160 = (void*)FUN_00e83010();
    local_90 = (float *)FUN_00e83010();
    iVar52 = (int)local_254 / 2;
    uVar46 = iVar52 * (int)local_268;
    pfVar47 = (float *)(uint64_t)uVar46;
    local_2b8 = (uint64_t)((int)local_228 + uVar46 * 2);
    local_1e8 = (float *)FUN_00e83010();
    local_110 = (void *)FUN_00e83010();
    local_1f0 = (float *)FUN_00e83da0();
    puVar22 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pfVar21 = (float *)&g_02572358;
    local_248 = &g_02572358;
    *puVar22 = &g_02572358;
    local_250 = g_02572370;
    (*g_02572370)();
    local_1b0 = puVar22;
    GNFastFourierTransformer_create();
    local_c0 = local_48;
    if ((((local_40 == '\0') && (local_48 != (float *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
       && (local_48 != (float *)0x0)) {
      FUN_00d50b20();
    }
    iVar33 = (int)(((uint)((uint64_t)local_228 >> 0x1f) & 1) + (uint)local_228) >> 1;
    lVar53 = *(int64_t *)(this_ptr + 0x5c);
    local_238 = CONCAT44(local_238._4_4_,iVar33);
    if (*(int *)(lVar53 + 0xc) < 1) {
      local_178 = 0.0;
      uStack_174 = 0;
      auVar93._8_8_ = 0;
      auVar93._0_8_ = local_1a8._8_8_;
      local_1a8 = auVar93 << 0x40;
      local_218 = (float *)0x0;
      local_c8 = (float *)0x0;
      local_88 = (float *)CONCAT44(local_88._4_4_,(float)local_50);
      local_130 = local_58;
    }
    else {
      local_370 = (float *)(int64_t)(int)((double)local_80 * g_0240e3a0 + g_023942d0);
      iVar38 = (int)local_2b8;
      local_2b0 = (double)(int)local_268;
      local_1f4 = (float)(int)(uVar46 * 2) * g_0239011c;
      local_2c8 = (int64_t)iVar52;
      local_378 = (int64_t)iVar33;
      local_380 = (int64_t)iVar38;
      local_2a8 = (float *)(local_380 * 4);
      local_80 = (float *)CONCAT44(local_80._4_4_,(float)iVar33);
      local_158 = (void*)CONCAT44(local_158._4_4_,(float)(iVar38 - iVar33));
      local_100 = (void *)(int64_t)(iVar33 * 4);
      local_278 = (float *)(local_160 + 1);
      local_118 = local_108 + -1;
      local_188 = (void*)((uint64_t)local_118 & 0xfffffffffffffffc);
      local_230 = (float *)(uint64_t)((uint)local_228 & 0xfffffff8);
      local_120 = -(int64_t)local_228;
      local_130 = local_58;
      local_88 = (float *)CONCAT44(local_88._4_4_,(float)local_50);
      local_220 = local_90 + local_378;
      local_210 = (void*)CONCAT44(local_210._4_4_,(float)iVar38 * g_0239011c);
      local_350 = (int64_t)((float)iVar38 * g_0239011c);
      local_2d0 = (void*)((int64_t)local_228 + -1);
      local_368 = (int64_t)local_228 * 4;
      local_360 = local_90 + (int64_t)local_228;
      local_358 = local_1f0 + (int64_t)local_228;
      local_2c0 = (float *)(local_160 + (int64_t)local_108);
      local_348 = local_188 + 1;
      local_1b8 = (float *)((uint64_t)local_268 & 0xffffffff);
      local_b8 = (float *)0xffffffffffffd8f0;
      lVar17 = 0;
      pfVar47 = (float *)0x0;
      auVar77._8_8_ = 0;
      auVar77._0_8_ = local_1a8._8_8_;
      local_1a8 = auVar77 << 0x40;
      pfVar21 = (float *)0x0;
      local_178 = 0.0;
      uStack_174 = 0;
      puVar43 = local_268;
      pfVar49 = (float *)0x0;
      do {
        pfVar54 = *(float **)(*(int64_t *)(lVar53 + 0x10) + lVar17 * 8);
        local_280 = lVar17;
        if (pfVar49 == pfVar54) {
          local_218 = pfVar47;
          pfVar4 = pfVar49;
          if (((char)pfVar47 == '\0') && (pfVar49 != (float *)0x0)) {
            local_218 = (float *)CONCAT71((int7)((uint64_t)pfVar54 >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          uVar16 = 0;
          pfVar21 = pfVar54;
          local_c8 = pfVar54;
          if (pfVar54 != (float *)0x0) {
            uVar16 = FUN_00d50b00();
            pfVar21 = pfVar54;
          }
          local_218 = (float *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
          pfVar4 = local_c8;
          if (((char)pfVar47 != '\0') && (pfVar49 != (float *)0x0)) {
            FUN_00d50b20();
            pfVar4 = local_c8;
          }
        }
        local_c8 = pfVar4;
        pvVar15 = _pthread_getspecific((void*)pfVar21);
        pfVar47 = local_c8;
        if ((pvVar15 != (void *)0x0) && (lVar53 = FUN_00e8b990(), pfVar47 = local_c8, lVar53 != 0))
        {
          pfVar21 = local_c8;
          pfVar47 = *(float **)(local_c8 + (uint64_t)(*(uint *)(lVar53 + 0x154) & 1) * 2 + 8);
        }
        lVar53 = (**(code **)(*(int64_t *)pfVar47 + 0x3a0))();
        lVar53 = (int64_t)(int)((double)lVar53 / local_2b0 + g_023942d0);
        uVar30 = lVar53 - local_2c8;
        puVar55 = (void*)(lVar53 + local_2c8);
        ___bzero();
        uVar29 = (uint64_t)(int)uVar30;
        local_58 = local_130;
        local_150 = puVar55;
        local_128 = uVar30;
        if ((int64_t)uVar29 <= (int64_t)puVar55) {
          if ((int)(uint)local_228 < 1) {
            local_50 = (uint64_t)local_88 & 0xffffffff;
            do {
              while( true ) {
                uVar58 = (uint32_t)local_50;
                if (-1 < (int64_t)uVar29) break;
                local_88 = (float *)CONCAT44(local_88._4_4_,uVar58);
                uVar29 = uVar29 + 1;
                if ((int64_t)local_150 < (int64_t)uVar29) goto LAB_0149221c;
              }
              if ((int64_t)(int)*local_e0 <= (int64_t)uVar29) {
                local_88 = (float *)CONCAT44(local_88._4_4_,uVar58);
                break;
              }
              lVar53 = *(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10);
              pfVar47 = *(float **)(lVar53 + uVar29 * 8);
              if (local_58 == pfVar47) {
                pfVar47 = local_58;
                if ((char)local_50 == '\0') {
                  if (local_58 == (float *)0x0) {
                    local_88 = (float *)CONCAT44(local_88._4_4_,uVar58);
                  }
                  else {
                    local_88 = (float *)CONCAT44(local_88._4_4_,
                                                 (int)CONCAT71((int7)((uint64_t)lVar53 >> 8),1));
                    FUN_00d50b00();
                  }
                }
                else {
                  local_88 = (float *)CONCAT44(local_88._4_4_,uVar58);
                }
              }
              else {
                if (pfVar47 != (float *)0x0) {
                  lVar53 = FUN_00d50b00();
                }
                local_88 = (float *)CONCAT44(local_88._4_4_,
                                             (int)CONCAT71((int7)((uint64_t)lVar53 >> 8),1));
                if (((char)local_50 != '\0') && (local_58 != (float *)0x0)) {
                  FUN_00d50b20();
                }
              }
              local_240 = uVar29;
              local_78 = FUN_015c6b60();
              lVar53 = FUN_015c6310();
              pfVar49 = (float *)FUN_015c6ba0();
              uVar29 = local_78;
              puVar22 = local_160;
              puVar36 = local_188;
              local_130 = pfVar47;
              if (1 < (int)local_108) {
                puVar20 = (void*)0x1;
                puVar48 = local_108;
                local_38 = pfVar49;
                if ((void*)0x3 < local_118) {
                  pfVar21 = pfVar49 + (int64_t)local_108;
                  puVar43 = (void*)
                            CONCAT71((int7)((uint64_t)pfVar21 >> 8),local_278 < pfVar21);
                  if (((local_278 >= pfVar21 || local_2c0 <= pfVar49 + 1) &&
                      ((float *)(local_78 + (int64_t)local_108 * 4) <= local_278 ||
                       local_2c0 <= (float *)(local_78 + 4))) &&
                     ((float *)(lVar53 + (int64_t)local_108 * 4) <= local_278 ||
                      local_2c0 <= (float *)(lVar53 + 4))) {
                    puVar20 = (void*)0x0;
                    do {
                      pfVar21 = local_38 + (int64_t)(puVar20 + 1);
                      auVar74._0_4_ = g_023b2d50 - *pfVar21;
                      auVar74._4_4_ = _UNK_023b2d54 - pfVar21[1];
                      auVar74._8_4_ = _UNK_023b2d58 - pfVar21[2];
                      auVar74._12_4_ = _UNK_023b2d5c - pfVar21[3];
                      auVar83 = maxps(ZEXT816(0),auVar74);
                      pfVar21 = (float *)(uVar29 + 4 + (int64_t)puVar20 * 4);
                      fStack_1c0 = pfVar21[2] * auVar83._8_4_;
                      fStack_1bc = pfVar21[3] * auVar83._12_4_;
                      local_1c8 = CONCAT44(pfVar21[1] * auVar83._4_4_,*pfVar21 * auVar83._0_4_);
                      local_1d8 = (float *)___sincosf_stret();
                      local_d8._0_8_ = ___sincosf_stret();
                      local_d8._8_8_ = extraout_XMM0_Qb_01;
                      _local_a8 = insertps(local_d8,local_1d8._4_4_,0xc);
                      local_f8 = (float *)___sincosf_stret();
                      uStack_a0._0_4_ = (int)((uint64_t)local_f8 >> 0x20);
                      uStack_a0._4_4_ = extraout_XMM0_Dd_00;
                      auVar63._0_8_ = ___sincosf_stret();
                      auVar63._8_8_ = extraout_XMM0_Qb_02;
                      auVar93 = insertps(_local_a8,auVar63,0x70);
                      auVar90._0_4_ = auVar93._0_4_ * (float)local_1c8;
                      auVar91._4_4_ = auVar93._4_4_ * local_1c8._4_4_;
                      auVar91._0_4_ = auVar90._0_4_;
                      fVar67 = (float)((uint)fStack_1c0 ^ _UNK_023945e8);
                      fVar59 = (float)((uint)fStack_1bc ^ _UNK_023945ec);
                      auVar80._4_4_ = local_d8._0_4_;
                      auVar80._0_4_ = (uint32_t)local_1d8;
                      auVar80._8_8_ = local_f8;
                      auVar83 = insertps(auVar80,auVar63,0x30);
                      auVar91._8_4_ = auVar91._4_4_;
                      auVar91._12_4_ =
                           auVar83._4_4_ * (float)((uint)local_1c8._4_4_ ^ _UNK_023945e4);
                      auVar90._8_8_ = auVar91._8_8_;
                      auVar90._4_4_ =
                           auVar83._0_4_ * (float)((uint)(float)local_1c8 ^ g_023945e0);
                      *(uint8_t (*) [16])(puVar22 + (int64_t)(puVar20 + 1)) = auVar90;
                      pfVar21 = (float *)(puVar22 + (int64_t)(puVar20 + 3));
                      *pfVar21 = auVar93._8_4_ * fStack_1c0;
                      pfVar21[1] = auVar83._8_4_ * fVar67;
                      pfVar21[2] = auVar93._12_4_ * fStack_1bc;
                      pfVar21[3] = auVar83._12_4_ * fVar59;
                      puVar20 = puVar20 + 4;
                    } while (puVar36 != puVar20);
                    pfVar21 = local_38;
                    puVar20 = local_348;
                    puVar48 = local_108;
                    if (local_118 == puVar36) goto LAB_01492d32;
                  }
                }
                do {
                  auVar71 = ZEXT812(0);
                  if (0.0 <= g_02390124 - local_38[(int64_t)puVar20]) {
                    auVar71._4_8_ = 0;
                    auVar71._0_4_ = g_02390124 - local_38[(int64_t)puVar20];
                  }
                  local_a8._0_4_ = auVar71._0_4_ * *(float *)(uVar29 + (int64_t)puVar20 * 4);
                  register0x00001244 = auVar71._4_8_;
                  uStack_a0._4_4_ = 0;
                  fVar67 = (float)_cosf();
                  *(float *)(puVar22 + (int64_t)puVar20) = fVar67 * (float)local_a8._0_4_;
                  local_a8._0_4_ = local_a8._0_4_ ^ g_023945e0;
                  local_a8._4_4_ = local_a8._4_4_ ^ _UNK_023945e4;
                  uStack_a0._0_4_ = (uint)uStack_a0 ^ _UNK_023945e8;
                  uStack_a0._4_4_ = uStack_a0._4_4_ ^ _UNK_023945ec;
                  fVar67 = (float)_sinf();
                  *(float *)((int64_t)puVar22 + (int64_t)puVar20 * 8 + 4) =
                       fVar67 * (float)local_a8._0_4_;
                  puVar20 = puVar20 + 1;
                  pfVar21 = local_38;
                } while (puVar48 != puVar20);
              }
LAB_01492d32:
              *puVar22 = 0;
              FUN_00e83640();
              pvVar15 = local_100;
              _memcpy(pfVar21,local_100,(size_t)puVar43);
              _memcpy(pfVar21,pvVar15,(size_t)puVar43);
              local_58 = local_130;
              _memcpy(pfVar21,pvVar15,(size_t)puVar43);
              local_50 = (uint64_t)local_88 & 0xffffffff;
              uVar29 = local_240 + 1;
            } while ((int64_t)uVar29 <= (int64_t)local_150);
          }
          else {
            local_78 = 0;
            local_208 = (void*)((uint64_t)local_208 & 0xffffffff00000000);
            pfVar47 = local_130;
            do {
              local_58 = pfVar47;
              if (-1 < (int64_t)uVar29) {
                if ((int64_t)(int)*local_e0 <= (int64_t)uVar29) break;
                lVar53 = *(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10);
                local_58 = *(float **)(lVar53 + uVar29 * 8);
                if (pfVar47 == local_58) {
                  if (((char)local_88 == '\0') && (pfVar47 != (float *)0x0)) {
                    local_50._0_4_ = (float)CONCAT71((int7)((uint64_t)lVar53 >> 8),1);
                    local_88 = (float *)((uint64_t)local_88 & 0xffffffff00000000);
                    FUN_00d50b00();
                    local_58 = pfVar47;
                  }
                  else {
                    local_50._0_4_ = SUB84(local_88,0);
                    local_58 = pfVar47;
                  }
                }
                else {
                  if (local_58 != (float *)0x0) {
                    lVar53 = FUN_00d50b00();
                  }
                  local_50._0_4_ = (float)CONCAT71((int7)((uint64_t)lVar53 >> 8),1);
                  if (((char)local_88 != '\0') && (pfVar47 != (float *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                local_240 = uVar29;
                local_88 = (float *)FUN_015c6b60();
                local_130 = (float *)FUN_015c6310();
                pfVar49 = (float *)FUN_015c6ba0();
                pfVar47 = local_88;
                puVar22 = local_160;
                if (1 < (int)local_108) {
                  puVar20 = (void*)0x1;
                  puVar36 = local_108;
                  pfVar21 = pfVar47;
                  if ((void*)0x3 < local_118) {
                    pfVar54 = pfVar49 + (int64_t)local_108;
                    puVar43 = (void*)
                              CONCAT71((int7)((uint64_t)pfVar54 >> 8),local_278 < pfVar54);
                    if (((local_278 >= pfVar54 || local_2c0 <= pfVar49 + 1) &&
                        (local_88 + (int64_t)local_108 <= local_278 || local_2c0 <= local_88 + 1))
                       && (local_130 + (int64_t)local_108 <= local_278 ||
                           local_2c0 <= local_130 + 1)) {
                      puVar36 = (void*)0x0;
                      do {
                        pfVar54 = pfVar49 + (int64_t)(puVar36 + 1);
                        auVar73._0_4_ = g_023b2d50 - *pfVar54;
                        auVar73._4_4_ = _UNK_023b2d54 - pfVar54[1];
                        auVar73._8_4_ = _UNK_023b2d58 - pfVar54[2];
                        auVar73._12_4_ = _UNK_023b2d5c - pfVar54[3];
                        auVar83 = maxps(ZEXT816(0),auVar73);
                        pfVar54 = pfVar47 + (int64_t)(puVar36 + 1);
                        fStack_1c0 = pfVar54[2] * auVar83._8_4_;
                        fStack_1bc = pfVar54[3] * auVar83._12_4_;
                        local_1c8 = CONCAT44(pfVar54[1] * auVar83._4_4_,*pfVar54 * auVar83._0_4_);
                        local_1d8 = (float *)___sincosf_stret();
                        local_d8._0_8_ = ___sincosf_stret();
                        local_d8._8_8_ = extraout_XMM0_Qb;
                        _local_a8 = insertps(local_d8,local_1d8._4_4_,0xc);
                        local_f8 = (float *)___sincosf_stret();
                        uStack_a0._0_4_ = (int)((uint64_t)local_f8 >> 0x20);
                        uStack_a0._4_4_ = extraout_XMM0_Dd;
                        auVar62._0_8_ = ___sincosf_stret();
                        auVar62._8_8_ = extraout_XMM0_Qb_00;
                        auVar93 = insertps(_local_a8,auVar62,0x70);
                        auVar88._0_4_ = auVar93._0_4_ * (float)local_1c8;
                        auVar89._4_4_ = auVar93._4_4_ * local_1c8._4_4_;
                        auVar89._0_4_ = auVar88._0_4_;
                        fVar67 = (float)((uint)fStack_1c0 ^ _UNK_023945e8);
                        fVar59 = (float)((uint)fStack_1bc ^ _UNK_023945ec);
                        auVar79._4_4_ = local_d8._0_4_;
                        auVar79._0_4_ = (uint32_t)local_1d8;
                        auVar79._8_8_ = local_f8;
                        auVar83 = insertps(auVar79,auVar62,0x30);
                        auVar89._8_4_ = auVar89._4_4_;
                        auVar89._12_4_ =
                             auVar83._4_4_ * (float)((uint)local_1c8._4_4_ ^ _UNK_023945e4);
                        auVar88._8_8_ = auVar89._8_8_;
                        auVar88._4_4_ =
                             auVar83._0_4_ * (float)((uint)(float)local_1c8 ^ g_023945e0);
                        *(uint8_t (*) [16])(puVar22 + (int64_t)(puVar36 + 1)) = auVar88;
                        pfVar54 = (float *)(puVar22 + (int64_t)(puVar36 + 3));
                        *pfVar54 = auVar93._8_4_ * fStack_1c0;
                        pfVar54[1] = auVar83._8_4_ * fVar67;
                        pfVar54[2] = auVar93._12_4_ * fStack_1bc;
                        pfVar54[3] = auVar83._12_4_ * fVar59;
                        puVar36 = puVar36 + 4;
                      } while (local_188 != puVar36);
                      puVar20 = local_348;
                      puVar36 = local_108;
                      if (local_118 == local_188) goto LAB_01492665;
                    }
                  }
                  do {
                    local_38 = pfVar49;
                    auVar70 = ZEXT812(0);
                    if (0.0 <= g_02390124 - local_38[(int64_t)puVar20]) {
                      auVar70._4_8_ = 0;
                      auVar70._0_4_ = g_02390124 - local_38[(int64_t)puVar20];
                    }
                    local_a8._0_4_ = auVar70._0_4_ * pfVar47[(int64_t)puVar20];
                    register0x00001244 = auVar70._4_8_;
                    uStack_a0._4_4_ = 0;
                    fVar67 = (float)_cosf();
                    *(float *)(puVar22 + (int64_t)puVar20) = fVar67 * (float)local_a8._0_4_;
                    local_a8._0_4_ = local_a8._0_4_ ^ g_023945e0;
                    local_a8._4_4_ = local_a8._4_4_ ^ _UNK_023945e4;
                    uStack_a0._0_4_ = (uint)uStack_a0 ^ _UNK_023945e8;
                    uStack_a0._4_4_ = uStack_a0._4_4_ ^ _UNK_023945ec;
                    fVar67 = (float)_sinf();
                    *(float *)((int64_t)puVar22 + (int64_t)puVar20 * 8 + 4) =
                         fVar67 * (float)local_a8._0_4_;
                    puVar20 = puVar20 + 1;
                    pfVar49 = local_38;
                  } while (puVar36 != puVar20);
                }
LAB_01492665:
                *puVar22 = 0;
                FUN_00e83640();
                pvVar15 = local_100;
                _memcpy(pfVar21,local_100,(size_t)puVar43);
                _memcpy(pfVar21,pvVar15,(size_t)puVar43);
                _memcpy(pfVar21,pvVar15,(size_t)puVar43);
                if ((uint)local_228 < 8) {
                  pfVar47 = (float *)0x0;
LAB_014929d0:
                  pfVar21 = pfVar47;
                  if (((uint64_t)local_228 & 1) != 0) {
                    iVar52 = ((int)local_240 - (int)(float)local_128) * (int)local_268 +
                             (int)pfVar47;
                    local_1e8[iVar52] =
                         local_90[(int64_t)pfVar47] * local_1f0[(int64_t)pfVar47] +
                         local_1e8[iVar52];
                    pfVar21 = (float *)((uint64_t)pfVar47 | 1);
                  }
                  if (~(uint64_t)pfVar47 != local_120) {
                    do {
                      iVar52 = (int)local_78 + (int)pfVar21;
                      local_1e8[iVar52] =
                           local_90[(int64_t)pfVar21] * local_1f0[(int64_t)pfVar21] +
                           local_1e8[iVar52];
                      local_1e8[iVar52 + 1] =
                           local_90[(int64_t)((int64_t)pfVar21 + 1)] *
                           local_1f0[(int64_t)((int64_t)pfVar21 + 1)] + local_1e8[iVar52 + 1];
                      pfVar21 = (float *)((int64_t)pfVar21 + 2);
                    } while (local_228 != pfVar21);
                  }
                }
                else {
                  iVar52 = (int)local_268 * (int)local_208;
                  if (iVar52 + (int)local_2d0 < iVar52) {
LAB_014929cd:
                    pfVar47 = (float *)0x0;
                    goto LAB_014929d0;
                  }
                  pfVar47 = (float *)0x0;
                  if ((uint64_t)local_2d0 >> 0x20 != 0) goto LAB_014929d0;
                  pfVar21 = local_1e8 + iVar52;
                  pfVar49 = (float *)(local_368 + (int64_t)iVar52 * 4 + (int64_t)local_1e8);
                  puVar43 = (void*)
                            CONCAT71((int7)((uint64_t)puVar43 >> 8),pfVar21 < local_360);
                  if (local_90 < pfVar49 && pfVar21 < local_360) goto LAB_014929cd;
                  pfVar47 = (float *)0x0;
                  if (local_1f0 < pfVar49 && pfVar21 < local_358) goto LAB_014929d0;
                  pfVar47 = (float *)0x0;
                  do {
                    pfVar49 = local_90 + (int64_t)pfVar47;
                    pfVar1 = local_90 + (int64_t)(pfVar47 + 1);
                    pfVar54 = local_1f0 + (int64_t)pfVar47;
                    pfVar2 = local_1f0 + (int64_t)(pfVar47 + 1);
                    pfVar21 = (float *)(int64_t)((int)local_78 + (int)pfVar47);
                    pfVar4 = local_1e8 + (int64_t)pfVar21;
                    auVar72._0_4_ = *pfVar4 + *pfVar54 * *pfVar49;
                    auVar72._4_4_ = pfVar4[1] + pfVar54[1] * pfVar49[1];
                    auVar72._8_4_ = pfVar4[2] + pfVar54[2] * pfVar49[2];
                    auVar72._12_4_ = pfVar4[3] + pfVar54[3] * pfVar49[3];
                    pfVar49 = local_1e8 + (int64_t)(pfVar21 + 1);
                    auVar78._0_4_ = *pfVar49 + *pfVar2 * *pfVar1;
                    auVar78._4_4_ = pfVar49[1] + pfVar2[1] * pfVar1[1];
                    auVar78._8_4_ = pfVar49[2] + pfVar2[2] * pfVar1[2];
                    auVar78._12_4_ = pfVar49[3] + pfVar2[3] * pfVar1[3];
                    *(uint8_t (*) [16])(local_1e8 + (int64_t)pfVar21) = auVar72;
                    *(uint8_t (*) [16])(local_1e8 + (int64_t)(pfVar21 + 1)) = auVar78;
                    pfVar47 = pfVar47 + 2;
                  } while (local_230 != pfVar47);
                  pfVar47 = local_230;
                  if (local_230 != local_228) goto LAB_014929d0;
                }
                local_88 = (float *)CONCAT44(local_88._4_4_,(float)local_50);
                uVar29 = local_240;
              }
              uVar29 = uVar29 + 1;
              local_208 = (void*)CONCAT44(local_208._4_4_,(int)local_208 + 1);
              local_78 = local_78 + (int64_t)local_1b8;
              pfVar47 = local_58;
            } while ((int64_t)uVar29 <= (int64_t)local_150);
          }
        }
LAB_0149221c:
        puVar22 = local_1b0;
        FUN_015c2d90(0,local_110);
        FUN_00d216c0();
        local_3f0 = puVar22;
        local_3e8 = 0;
        FUN_014b2970(*(void*)(this_ptr + 0x2a),local_110);
        lVar17 = local_128 * (int64_t)local_268 - local_378;
        lVar53 = local_350;
        local_130 = local_58;
        if (0 < *(int *)((int64_t)puVar22 + 0xc)) {
          auVar5._12_4_ = 0;
          auVar5._0_12_ = stack0xffffffffffffff5c;
          _local_a8 = auVar5 << 0x20;
          lVar18 = 0;
          do {
            lVar19 = local_1b0[2];
            lVar34 = *(int64_t *)(lVar19 + lVar18 * 8);
            if (local_1a8._0_8_ == lVar34) {
              if ((local_178._0_1_ == '\0') && (local_1a8._0_8_ != 0)) {
                local_178 = (float)CONCAT71((int7)((uint64_t)lVar19 >> 8),1);
                uStack_174 = (uint32_t)((uint64_t)lVar19 >> 0x20);
                FUN_00d50b00();
              }
            }
            else {
              if (lVar34 != 0) {
                lVar19 = FUN_00d50b00();
              }
              if ((local_178._0_1_ == '\0') || (local_1a8._0_8_ == 0)) {
                local_178 = (float)CONCAT71((int7)((uint64_t)lVar19 >> 8),1);
                uStack_174 = (uint32_t)((uint64_t)lVar19 >> 0x20);
                local_1a8._0_8_ = lVar34;
              }
              else {
                local_1a8._0_8_ = lVar34;
                uVar16 = FUN_00d50b20();
                local_178 = (float)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                uStack_174 = (uint32_t)((uint64_t)uVar16 >> 0x20);
              }
            }
            fVar67 = (float)(*(double *)(local_1a8._0_8_ + 0x10) * *(double *)(this_ptr + 0x2a));
            if ((((int64_t)local_b8 < (int64_t)((double)fVar67 + g_023942d0) + lVar17) &&
                (local_80._0_4_ < fVar67)) && (fVar67 < local_158._0_4_)) {
              fVar59 = (float)((double)(local_1f4 -
                                       (float)((uint)(local_210._0_4_ - fVar67) & g_02390140)) *
                              *(double *)(local_1a8._0_8_ + 0x18));
              if ((float)local_a8._0_4_ < fVar59) {
                local_a8._0_4_ = fVar59;
                lVar53 = (int64_t)((double)fVar67 + g_023942d0);
              }
            }
            lVar18 = lVar18 + 1;
          } while (lVar18 < *(int *)((int64_t)local_1b0 + 0xc));
        }
        pfVar21 = (float *)(lVar53 + lVar17);
        if ((int64_t)pfVar21 < (int64_t)local_370) {
          pfVar21 = local_370;
        }
        local_b8 = (float *)(*(int64_t *)(this_ptr + 0x26) + -1);
        if ((int64_t)pfVar21 < *(int64_t *)(this_ptr + 0x26)) {
          local_b8 = pfVar21;
        }
        pvVar15 = _pthread_getspecific((void*)local_b8);
        lVar17 = local_280;
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bad20(local_270,local_200);
        lVar17 = lVar17 + 1;
        lVar53 = *(int64_t *)(this_ptr + 0x5c);
        pfVar21 = (float *)(int64_t)*(int *)(lVar53 + 0xc);
        pfVar47 = (float *)((uint64_t)local_218 & 0xffffffff);
        pfVar49 = local_c8;
      } while (lVar17 < (int64_t)pfVar21);
    }
    local_58 = local_130;
    local_50 = (uint64_t)local_88 & 0xffffffff;
    FUN_00e83070();
    FUN_00e83070();
    FUN_00e83070();
    FUN_00e83070();
    FUN_00e83070();
    local_1b0 = (void*)0x0;
    FUN_00d50b20();
    if (local_c0 != (float *)0x0) {
      local_1b0 = (void*)0x0;
      local_c0 = (float *)0x0;
      FUN_00d50b20();
    }
    if ((local_178._0_1_ != '\0') && (local_1a8._0_8_ != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_218 != '\0') && (local_c8 != (float *)0x0)) {
      FUN_00d50b20();
    }
    uVar16 = FUN_00e83010();
    local_178 = (float)uVar16;
    uStack_174 = (uint32_t)((uint64_t)uVar16 >> 0x20);
    if ((int)*local_e0 < 1) {
      local_120 = (uint64_t)local_120._4_4_ << 0x20;
    }
    else {
      local_1a8._0_4_ = g_02390124 / local_18c;
      local_120 = (uint64_t)local_120._4_4_ << 0x20;
      pfVar47 = (float *)0x0;
      do {
        pfVar49 = *(float **)
                   (*(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10) + (int64_t)pfVar47 * 8);
        if (local_58 == pfVar49) {
          if (((char)local_50 == '\0') && (local_58 != (float *)0x0)) {
            local_50 = 1;
            FUN_00d50b00();
          }
        }
        else {
          if (pfVar49 != (float *)0x0) {
            FUN_00d50b00();
          }
          if (((char)local_50 == '\0') || (local_58 == (float *)0x0)) {
            local_50 = 1;
            local_58 = pfVar49;
          }
          else {
            FUN_00d50b20();
            local_50 = 1;
            local_58 = pfVar49;
          }
        }
        lVar53 = FUN_015c6b60();
        lVar17 = FUN_015c66c0();
        FUN_015c6be0();
        local_38 = (float *)CONCAT44(local_38._4_4_,
                                     g_02390124 /
                                     *(float *)(*(int64_t *)(this_ptr + 0x94) +
                                               (int64_t)pfVar47 * 4));
        lVar18 = 0;
        do {
          fVar67 = *(float *)(*(int64_t *)(local_288 + 4) + lVar18 * 4);
          local_a8._0_4_ = fVar67;
          if ((float)local_148 <= fVar67) break;
          lVar19 = FUN_00e84250();
          uVar41 = (uint)((float)local_a8._0_4_ / local_18c + g_023b1608);
          uVar46 = uVar41;
          if ((int)uVar41 < 1) {
            uVar46 = 1;
          }
          puVar43 = (void*)(uint64_t)uVar46;
          uVar35 = uVar41 + 5;
          if ((int)(uint)local_238 < (int)(uVar41 + 5)) {
            uVar35 = (uint)local_238;
          }
          if ((int)uVar46 < (int)uVar35) {
            uVar29 = (uint64_t)uVar46;
            auVar64 = ZEXT816(0);
            do {
              fVar67 = (float)((uint)((float)local_a8._0_4_ - *(float *)(lVar17 + uVar29 * 4)) &
                              g_02390140);
              if (fVar67 < local_18c) {
                auVar64._0_4_ =
                     auVar64._0_4_ +
                     *(float *)(lVar19 + (int64_t)
                                         (int)((local_18c - fVar67) * (float)local_1a8._0_4_ *
                                              g_0240e314) * 4) * *(float *)(lVar53 + uVar29 * 4);
              }
              uVar29 = uVar29 + 1;
            } while (uVar35 != uVar29);
            if (auVar64._0_4_ < g_02394274) goto LAB_01493210;
          }
          else {
LAB_01493210:
            auVar64 = ZEXT416((uint)(float)((double)*(float *)(lVar53 + (int64_t)
                                                                        ((int)(uVar35 + uVar46) / 2)
                                                                        * 4) * g_02391030));
          }
          fVar67 = *(float *)(g_02802ef0 + lVar18 * 4) * local_38._0_4_ * auVar64._0_4_;
          pfVar21 = (float *)(lVar18 + (uint64_t)(uint)((int)pfVar47 * 0x7e4));
          *(float *)(*(int64_t *)(this_ptr + 0x6a) + (int64_t)pfVar21 * 4) = fVar67;
          local_120 = CONCAT44(local_120._4_4_,(float)local_120 + fVar67);
          lVar18 = lVar18 + 1;
        } while (lVar18 != 0x7e4);
        pfVar47 = (float *)((int64_t)pfVar47 + 1);
      } while ((int64_t)pfVar47 < (int64_t)(int)*local_e0);
    }
    FUN_00e83070();
    local_1f0 = (float *)(g_0238fee8 / (double)local_18c);
    local_a8._0_4_ =
         (float)(*(double *)(this_ptr + 0x2a) * g_0240e3a8) /
         (float)(int)((int64_t)
                      ((uint64_t)(uint)((int)local_228 >> 0x1f) << 0x20 |
                      (uint64_t)local_228 & 0xffffffff) / (int64_t)(int)local_254);
    lVar53 = 0;
    do {
      fVar67 = (float)_powf((float)(int)lVar53 * g_0240e318 + g_02390124);
      if (fVar67 * (float)local_a8._0_4_ < g_02390124) break;
      fVar59 = (float)_expf();
      fVar67 = this_ptr[0x67];
      if (0 < (int)fVar67) {
        lVar18 = *(int64_t *)(this_ptr + 0x6a);
        fVar69 = *(float *)(lVar18 + lVar53 * 4);
        fVar69 = (fVar69 - fVar69) * fVar59 + fVar69;
        *(float *)(lVar18 + lVar53 * 4) = fVar69;
        lVar17 = lVar53 + 0x7e4;
        if (fVar67 != 1.4013e-45) {
          if (fVar67 != 2.8026e-45) {
            iVar52 = -((int)fVar67 - 1U & 0xfffffffe);
            do {
              fVar68 = *(float *)(lVar18 + lVar17 * 4);
              fVar68 = (fVar69 - fVar68) * fVar59 + fVar68;
              *(float *)(lVar18 + lVar17 * 4) = fVar68;
              fVar69 = (fVar68 - *(float *)(&g_00001f90 + lVar17 * 4 + lVar18)) * fVar59 +
                       *(float *)(&g_00001f90 + lVar17 * 4 + lVar18);
              *(float *)(&g_00001f90 + lVar17 * 4 + lVar18) = fVar69;
              lVar17 = lVar17 + 0xfc8;
              iVar52 = iVar52 + 2;
            } while (iVar52 != 0);
          }
          if (((int)fVar67 - 1U & 1) != 0) {
            fVar68 = *(float *)(lVar18 + lVar17 * 4);
            fVar69 = (fVar69 - fVar68) * fVar59 + fVar68;
            *(float *)(lVar18 + lVar17 * 4) = fVar69;
            lVar17 = lVar17 + 0x7e4;
          }
        }
        pfVar21 = (float *)(lVar18 + (int64_t)(int)lVar17 * 4 + -0x1f90);
        iVar52 = (int)fVar67 + 1;
        do {
          fVar69 = (fVar69 - *pfVar21) * fVar59 + *pfVar21;
          *pfVar21 = fVar69;
          pfVar21 = pfVar21 + -0x7e4;
          iVar52 = iVar52 + -1;
        } while (1 < iVar52);
      }
      lVar53 = lVar53 + 1;
    } while (lVar53 != 0x7e4);
    ___bzero();
    fVar67 = this_ptr[0x67];
    if (0 < (int)fVar67) {
      pfVar21 = *(float **)(this_ptr + 0x6a);
      lVar53 = *(int64_t *)(this_ptr + 0x8e);
      uVar29 = 0;
      do {
        fVar59 = 0.0;
        lVar17 = 4;
        do {
          fVar59 = fVar59 + pfVar21[lVar17 + -4] + pfVar21[lVar17 + -3] + pfVar21[lVar17 + -2] +
                   pfVar21[lVar17 + -1] + pfVar21[lVar17];
          lVar17 = lVar17 + 5;
        } while (lVar17 != 0x7e8);
        fVar69 = g_02390124;
        if (g_02390124 <= fVar59) {
          fVar69 = g_02390124 / fVar59;
        }
        *(float *)(lVar53 + uVar29 * 4) = fVar69;
        uVar29 = uVar29 + 1;
        pfVar21 = pfVar21 + 0x7e4;
      } while (uVar29 != (uint)fVar67);
    }
    if (*(int64_t *)(this_ptr + 0x6c) != 0) {
      _memcpy(pfVar21,local_2a0,(size_t)puVar43);
    }
    if (((char)local_260 != '\0') && (local_b0 != (float *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)this_ptr + 0x380))();
    if (*(char *)(this_ptr + 0xf) == '\0') {
      puVar22 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar22 = local_248;
      (*local_250)();
      local_200 = puVar22;
      puVar22 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar22 = local_248;
      (*local_250)();
      local_160 = puVar22;
      puVar22 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar22 = local_248;
      (*local_250)();
      local_208 = puVar22;
      puVar22 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar22 = local_248;
      (*local_250)();
      local_210 = puVar22;
      pfVar21 = (float *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void**)pfVar21 = local_248;
      (*local_250)();
      local_130 = pfVar21;
      puVar22 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar22 = local_248;
      (*local_250)();
      iVar52 = 0;
      local_1b0 = puVar22;
      if ((int)*local_e0 < 1) {
        local_78 = (uint64_t)local_78._4_4_ << 0x20;
        local_f8 = (float *)0x0;
      }
      else {
        local_f8 = (float *)0x0;
        local_78 = (uint64_t)local_78._4_4_ << 0x20;
        do {
          pfVar21 = (float *)FUN_00e8fc40();
          FUN_00d4ff40();
          *(void**)pfVar21 = local_248;
          uVar16 = (*local_250)();
          uVar27 = (undefined7)((uint64_t)uVar16 >> 8);
          if (pfVar21 == local_f8) {
            if ((char)local_78 == '\0') {
              local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71(uVar27,1));
              pfVar21 = local_f8;
            }
            else {
              FUN_00d50b20();
              pfVar21 = local_f8;
            }
          }
          else {
            bVar57 = (char)local_78 != '\0';
            local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71(uVar27,1));
            if ((bVar57) && (local_f8 != (float *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_40 = '\0';
          local_f8 = pfVar21;
          local_48 = pfVar21;
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
            FUN_00d50b20();
          }
          iVar52 = iVar52 + 1;
        } while (iVar52 < (int)*local_e0);
      }
      FUN_00e84080();
      pfVar21 = local_48;
      if ((((local_40 == '\0') && (local_48 != (float *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
         && (local_48 != (float *)0x0)) {
        FUN_00d50b20();
      }
      local_2a8 = pfVar21;
      local_1d8 = *(float **)(pfVar21 + 4);
      *local_1d8 = *local_1d8 * *local_1d8;
      local_1d8[1] = local_1d8[1] * local_1d8[1];
      local_1d8[2] = local_1d8[2] * local_1d8[2];
      local_1d8[3] = local_1d8[3] * local_1d8[3];
      auVar75._0_4_ = local_1d8[4] * local_1d8[4];
      auVar75._4_4_ = local_1d8[5] * local_1d8[5];
      auVar75._8_4_ = local_1d8[6] * local_1d8[6];
      auVar75._12_4_ = local_1d8[7] * local_1d8[7];
      *(uint8_t (*) [16])(local_1d8 + 4) = auVar75;
      auVar81._0_4_ = local_1d8[8] * local_1d8[8];
      auVar81._4_4_ = local_1d8[9] * local_1d8[9];
      auVar81._8_4_ = local_1d8[10] * local_1d8[10];
      auVar81._12_4_ = local_1d8[0xb] * local_1d8[0xb];
      *(uint8_t (*) [16])(local_1d8 + 8) = auVar81;
      local_220 = (float *)(uint64_t)((int)this_ptr[0x67] - 1);
      this_ptr[0x68] = 0.0;
      local_118 = (void*)CONCAT44(local_118._4_4_,(float)((int)local_108 + -2));
      iVar52 = 0;
      local_100 = (void *)((uint64_t)local_100 & 0xffffffff00000000);
      local_2b0 = (double)((uint64_t)local_2b0 & 0xffffffff00000000);
      local_270 = local_270 & 0xffffffff00000000;
      local_68 = (float *)0x0;
      local_38 = (float *)0x0;
      local_238 = 0;
      local_240 = local_240 & 0xffffffff00000000;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_1a8._8_8_;
      local_1a8 = auVar6 << 0x40;
      local_178 = 0.0;
      uStack_174 = 0;
      local_128 = local_128 & 0xffffffff00000000;
      pvVar15 = (void *)0xffffffff;
      do {
        sVar42 = (size_t)puVar43;
        local_2c8 = CONCAT44(local_2c8._4_4_,iVar52);
        local_2b8 = CONCAT44(local_2b8._4_4_,(int)pvVar15);
        iVar52 = (int)local_220;
        if ((int)local_100._0_4_ <= iVar52) {
          lVar53 = (int64_t)(int)local_100._0_4_;
          pfVar47 = (float *)(lVar53 * 0x7e4);
          do {
            lVar34 = g_02802ef8;
            lVar18 = *(int64_t *)(this_ptr + 0x6a);
            lVar19 = *(int64_t *)(this_ptr + 0x6e);
            lVar17 = lVar18 + lVar53 * 0x1f90;
            lVar44 = lVar53 * 0x1f90 + lVar19;
            lVar31 = 0;
            do {
              iVar33 = (int)lVar31;
              iVar38 = *(int *)(g_02802f00 + 4) + iVar33;
              fVar67 = 0.0;
              if (iVar38 < 0x7e4) {
                fVar67 = *(float *)(lVar17 + (int64_t)iVar38 * 4) * *(float *)(g_02802f10 + 4) +
                         g_0239424c;
                iVar38 = *(int *)(g_02802f00 + 8) + iVar33;
                if (iVar38 < 0x7e4) {
                  fVar67 = fVar67 + *(float *)(lVar17 + (int64_t)iVar38 * 4) *
                                    *(float *)(g_02802f10 + 8);
                  iVar38 = *(int *)(g_02802f00 + 0xc) + iVar33;
                  if (iVar38 < 0x7e4) {
                    fVar67 = fVar67 + *(float *)(lVar17 + (int64_t)iVar38 * 4) *
                                      *(float *)(g_02802f10 + 0xc);
                    iVar38 = *(int *)(g_02802f00 + 0x10) + iVar33;
                    if (iVar38 < 0x7e4) {
                      fVar67 = fVar67 + *(float *)(lVar17 + (int64_t)iVar38 * 4) *
                                        *(float *)(g_02802f10 + 0x10);
                      iVar38 = *(int *)(g_02802f00 + 0x14) + iVar33;
                      if (iVar38 < 0x7e4) {
                        fVar67 = fVar67 + *(float *)(lVar17 + (int64_t)iVar38 * 4) *
                                          *(float *)(g_02802f10 + 0x14);
                        iVar38 = *(int *)(g_02802f00 + 0x18) + iVar33;
                        if (iVar38 < 0x7e4) {
                          fVar67 = fVar67 + *(float *)(lVar17 + (int64_t)iVar38 * 4) *
                                            *(float *)(g_02802f10 + 0x18);
                          iVar38 = *(int *)(g_02802f00 + 0x1c) + iVar33;
                          if (iVar38 < 0x7e4) {
                            fVar67 = fVar67 + *(float *)(lVar17 + (int64_t)iVar38 * 4) *
                                              *(float *)(g_02802f10 + 0x1c);
                            iVar33 = *(int *)(g_02802f00 + 0x20) + iVar33;
                            if (iVar33 < 0x7e4) {
                              fVar67 = fVar67 + *(float *)(lVar17 + (int64_t)iVar33 * 4) *
                                                *(float *)(g_02802f10 + 0x20);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              *(float *)(lVar19 + (int64_t)pfVar47 * 4 + lVar31 * 4) =
                   (fVar67 * g_02391090 + *(float *)(lVar18 + (int64_t)pfVar47 * 4 + lVar31 * 4))
                   * fVar67 * fVar67 * *(float *)(lVar34 + lVar31 * 4);
              lVar31 = lVar31 + 1;
            } while (lVar31 != 0x7e4);
            pvVar15 = (void *)((int64_t)&MACH_HEADER.magic + 1);
            local_3b8 = lVar44;
            FUN_015c1480();
            sVar42 = (size_t)lVar44;
            lVar53 = lVar53 + 1;
            pfVar47 = pfVar47 + 0x1f9;
          } while (iVar52 + 1 != (int)lVar53);
        }
        if ((*(int64_t *)(this_ptr + 0x70) != 0) && ((int)local_270 == 0)) {
          _memcpy(pvVar15,local_2a0,sVar42);
        }
        FUN_00d216c0();
        fVar67 = 0.0;
        if ((int)local_100._0_4_ <= (int)local_220) {
          lVar53 = *(int64_t *)(this_ptr + 0x96);
          lVar17 = (int64_t)(int)local_100._0_4_;
          uVar46 = (int)local_220 + 1;
          local_220 = (float *)(uint64_t)uVar46;
          puVar43 = (void*)(*(int64_t *)(this_ptr + 0x6e) + lVar17 * 0x1f90 + 8);
          do {
            lVar18 = 0;
            fVar59 = 0.0;
            fVar67 = 0.0;
            do {
              fVar69 = *(float *)(puVar43 + lVar18 * 4 + -8);
              fVar68 = (float)lVar18;
              if (fVar59 < fVar69) {
                fVar67 = fVar68;
              }
              if (fVar69 <= fVar59) {
                fVar69 = fVar59;
              }
              fVar87 = *(float *)(puVar43 + lVar18 * 4 + -4);
              fVar84 = (float)((int)fVar68 + 1);
              if (*(float *)(puVar43 + lVar18 * 4 + -4) <= fVar69) {
                fVar87 = fVar69;
                fVar84 = fVar67;
              }
              fVar59 = *(float *)(puVar43 + lVar18 * 4);
              fVar67 = (float)((int)fVar68 + 2);
              if (*(float *)(puVar43 + lVar18 * 4) <= fVar87) {
                fVar59 = fVar87;
                fVar67 = fVar84;
              }
              lVar18 = lVar18 + 3;
            } while (lVar18 != 0x7e3);
            *(float *)(lVar53 + lVar17 * 0xc) = fVar67;
            *(float *)(lVar53 + 8 + lVar17 * 0xc) = fVar59;
            lVar17 = lVar17 + 1;
            puVar43 = &g_00001f90 + (int64_t)puVar43;
          } while (uVar46 != (uint)lVar17);
        }
        fVar59 = *local_e0;
        pfVar21 = local_e0;
        if ((int)fVar59 < 1) {
LAB_014955d5:
          if (local_208 == (void*)0x0) {
            puVar43 = (void*)CONCAT71((int7)((uint64_t)pfVar21 >> 8),1);
            local_118 = puVar43;
            goto LAB_0149560c;
          }
          break;
        }
        puVar43 = *(void**)(this_ptr + 0x96);
        if (fVar59 == 1.4013e-45) {
          local_100 = (void *)CONCAT44(local_100._4_4_,0xffffffff);
          auVar7._12_4_ = 0;
          auVar7._0_12_ = stack0xffffffffffffff5c;
          _local_a8 = auVar7 << 0x20;
          uVar29 = 0;
        }
        else {
          pfVar21 = (float *)(puVar43 + 0x14);
          local_100 = (void *)CONCAT44(local_100._4_4_,0xffffffff);
          auVar8._12_4_ = 0;
          auVar8._0_12_ = stack0xffffffffffffff5c;
          _local_a8 = auVar8 << 0x20;
          uVar29 = 0;
          do {
            fVar69 = (float)local_a8._0_4_;
            if ((float)local_a8._0_4_ < pfVar21[-3]) {
              fVar67 = pfVar21[-5];
              local_100 = (void *)CONCAT44(local_100._4_4_,(int)uVar29);
              fVar69 = pfVar21[-3];
            }
            if (fVar69 < *pfVar21) {
              fVar67 = pfVar21[-2];
              local_100 = (void *)CONCAT44(local_100._4_4_,(int)uVar29 + 1);
              fVar69 = *pfVar21;
            }
            local_a8._0_4_ = fVar69;
            uVar29 = uVar29 + 2;
            pfVar21 = pfVar21 + 6;
          } while (((uint)fVar59 & 0xfffffffe) != uVar29);
        }
        if (((uint)fVar59 & 1) != 0) {
          if ((float)local_a8._0_4_ < *(float *)(puVar43 + uVar29 * 0xc + 8)) {
            fVar67 = *(float *)(puVar43 + uVar29 * 0xc);
            local_100 = (void *)CONCAT44(local_100._4_4_,(int)uVar29);
            local_a8._0_4_ = *(float *)(puVar43 + uVar29 * 0xc + 8);
          }
        }
        pfVar21 = (float *)((uint64_t)local_100 & 0xffffffff);
        if ((int)local_100._0_4_ < 0) goto LAB_014955d5;
        local_d8._0_8_ = (double)(int)local_100._0_4_ + g_023934c8;
        FUN_01432b10((double)(int)local_100._0_4_ + g_023934c8,(double)(int)fVar67 + g_023934c8)
        ;
        pfVar21 = local_140;
        if (local_138 == '\0') {
          if (local_140 != (float *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_138 = '\0';
        }
        local_48 = pfVar21;
        local_40 = '\0';
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
          FUN_00d50b20();
        }
        if (pfVar21 != (float *)0x0) {
          FUN_00d50b20();
        }
        if ((local_138 != '\0') && (local_140 != (float *)0x0)) {
          FUN_00d50b20();
        }
        local_1c8 = CONCAT44(local_1c8._4_4_,(float)local_a8._0_4_ * g_02391090);
        if (g_02394274 <= (float)local_a8._0_4_) {
          lVar53 = *(int64_t *)(this_ptr + 0x6e);
          lVar19 = (int64_t)((int)local_100._0_4_ * 0x7e4);
          lVar18 = (int64_t)(int)fVar67;
          lVar17 = *(int *)(g_02802f00 + 8) + lVar18;
          if (((int)lVar17 < 0x7e4) &&
             ((float)local_a8._0_4_ * g_02391090 < *(float *)(lVar53 + (lVar17 + lVar19) * 4))) {
            FUN_01432b10(local_d8._0_8_);
            pfVar47 = local_140;
            if (local_138 == '\0') {
              if (local_140 != (float *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_138 = '\0';
            }
            local_48 = pfVar47;
            local_40 = '\0';
            FUN_00d21140();
            if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
              FUN_00d50b20();
            }
            if (pfVar47 != (float *)0x0) {
              FUN_00d50b20();
            }
            if ((local_138 != '\0') && (local_140 != (float *)0x0)) {
              FUN_00d50b20();
            }
          }
          lVar17 = *(int *)(g_02802f00 + 0xc) + lVar18;
          if (((int)lVar17 < 0x7e4) &&
             ((float)local_1c8 < *(float *)(lVar53 + (lVar17 + lVar19) * 4))) {
            FUN_01432b10(local_d8._0_8_);
            pfVar47 = local_140;
            if (local_138 == '\0') {
              if (local_140 != (float *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_138 = '\0';
            }
            local_48 = pfVar47;
            local_40 = '\0';
            FUN_00d21140();
            if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
              FUN_00d50b20();
            }
            if (pfVar47 != (float *)0x0) {
              FUN_00d50b20();
            }
            if ((local_138 != '\0') && (local_140 != (float *)0x0)) {
              FUN_00d50b20();
            }
          }
          lVar18 = *(int *)(g_02802f00 + 0x10) + lVar18;
          if (((int)lVar18 < 0x7e4) &&
             ((float)local_1c8 < *(float *)(lVar53 + (lVar18 + lVar19) * 4))) {
            FUN_01432b10(local_d8._0_8_);
            pfVar47 = local_140;
            if (local_138 == '\0') {
              if (local_140 != (float *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_138 = '\0';
            }
            local_48 = pfVar47;
            local_40 = '\0';
            FUN_00d21140();
            if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
              FUN_00d50b20();
            }
            if (pfVar47 != (float *)0x0) {
              FUN_00d50b20();
            }
            if ((local_138 != '\0') && (local_140 != (float *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00d216c0();
        if (*(int *)((int64_t)local_200 + 0xc) < 1) {
          local_220 = (float *)((uint64_t)local_100 & 0xffffffff);
          pvVar15 = (void *)((uint64_t)local_100 & 0xffffffff);
        }
        else {
          pfVar21 = (float *)0x0;
          local_220 = (float *)((uint64_t)local_100 & 0xffffffff);
          do {
            pfVar49 = *(float **)(local_200[2] + (int64_t)pfVar21 * 8);
            local_2c0 = pfVar21;
            if (pfVar49 != (float *)0x0) {
              FUN_00d50b00();
            }
            uVar46 = (uint)*(double *)(pfVar49 + 4);
            dVar3 = *(double *)(pfVar49 + 6);
            local_278 = pfVar49;
            local_90._0_4_ = (int)local_38;
            FUN_00d216c0();
            local_218 = (float *)CONCAT44(local_218._4_4_,(int)dVar3);
            uVar16 = FUN_014ee9e0();
            pfVar21 = local_48;
            uVar27 = (undefined7)((uint64_t)uVar16 >> 8);
            if (local_48 == local_68) {
              pfVar21 = local_68;
              if (((char)local_38 == '\0') && (local_48 != (float *)0x0)) {
                local_90 = (float *)CONCAT44(local_90._4_4_,(int)CONCAT71(uVar27,1));
                if (local_40 != '\0') goto LAB_014943c4;
                local_90 = (float *)CONCAT44(local_90._4_4_,(int)CONCAT71(uVar27,1));
                FUN_00d50b00();
              }
              else {
                local_90 = (float *)CONCAT44(local_90._4_4_,(int)local_38);
              }
joined_r0x01494378:
              if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_40 == '\0') {
                if (local_48 != (float *)0x0) {
                  uVar16 = FUN_00d50b00();
                }
                local_90 = (float *)CONCAT44(local_90._4_4_,
                                             (int)CONCAT71((int7)((uint64_t)uVar16 >> 8),1));
                if (((char)local_38 != '\0') && (local_68 != (float *)0x0)) {
                  FUN_00d50b20();
                }
                goto joined_r0x01494378;
              }
              local_90 = (float *)CONCAT44(local_90._4_4_,(int)CONCAT71(uVar27,1));
              if (((char)local_38 != '\0') && (local_68 != (float *)0x0)) {
                FUN_00d50b20();
              }
            }
LAB_014943c4:
            local_40 = '\0';
            local_48 = pfVar21;
            FUN_00d21140();
            if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
              FUN_00d50b20();
            }
            local_40 = '\0';
            local_48 = pfVar21;
            FUN_00d21140();
            if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
              FUN_00d50b20();
            }
            iVar52 = (int)local_218;
            fVar67 = *(float *)(*(int64_t *)(this_ptr + 0x6e) +
                               (int64_t)(int)(uVar46 * 0x7e4 + (int)local_218) * 4);
            local_1b8 = (float *)CONCAT44(local_1b8._4_4_,fVar67 * g_023b81d4);
            local_280 = CONCAT44(local_280._4_4_,fVar67);
            local_230 = (float *)CONCAT44(local_230._4_4_,fVar67 * g_02394dc0);
            FUN_00d216c0();
            ppfVar39 = (float **)
                       CONCAT71((int7)((uint64_t)&local_48 >> 8),(int)(uVar46 + 1) < (int)*local_e0
                               );
            local_2d0 = (void*)CONCAT44(local_2d0._4_4_,uVar46 - 1);
            pfVar49 = (float *)((int64_t)&MACH_HEADER.magic + 1);
            local_1f4 = (float)CONCAT71((uint7)(uint3)(uVar46 - 1 >> 8),1);
            auVar9._8_8_ = 0;
            auVar9._0_8_ = local_d8._8_8_;
            local_d8 = auVar9 << 0x40;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uStack_a0;
            _local_a8 = auVar10 << 0x40;
            local_b0 = (float *)0x0;
            uVar41 = uVar46 + 1;
            local_110 = (void *)(uint64_t)uVar46;
            local_68 = pfVar21;
            do {
              local_188 = (void*)CONCAT44(local_188._4_4_,uVar41 * 0x7e4);
              local_158 = (void*)CONCAT44(local_158._4_4_,(int)pfVar49 * 0x7e4);
              local_1c8 = CONCAT44(local_1c8._4_4_,iVar52);
              local_c8 = (float *)((uint64_t)local_c8 & 0xffffffff00000000);
              local_148 = CONCAT44(local_148._4_4_,(uint32_t)local_280);
              local_c0 = (float *)CONCAT44(local_c0._4_4_,local_230._0_4_);
              local_1e8 = pfVar49;
              do {
                iVar52 = (int)(float)local_1c8;
                if ((int)(float)local_1c8 < 8) {
                  iVar52 = 7;
                }
                local_1c8 = local_1c8 & 0xffffffff00000000;
                pfVar21 = (float *)(uint64_t)uVar41;
                if (((uint64_t)ppfVar39 & 1) == 0) {
LAB_01494530:
                  iVar52 = (int)pfVar21;
                  bVar37 = 0;
                  fVar67 = (float)local_148;
                }
                else {
                  local_150 = (void*)CONCAT44(local_150._4_4_,(int)ppfVar39);
                  pfVar21 = *(float **)(this_ptr + 0x6e);
                  FUN_00d216c0();
                  pfVar47 = pfVar21 + (uint64_t)(iVar52 - 6) + (int64_t)(int)local_188;
                  lVar53 = 0;
                  local_b8 = (float *)((uint64_t)local_b8 & 0xffffffff00000000);
                  local_80 = (float *)((uint64_t)local_80 & 0xffffffff00000000);
                  local_1c8 = local_1c8 & 0xffffffff00000000;
                  pfVar54 = pfVar21;
                  uVar46 = iVar52 - 7;
                  local_88 = (float *)(uint64_t)uVar41;
                  do {
                    uVar35 = uVar46 + 1;
                    if (0 < (int)uVar35) {
                      if (0x7e1 < (int)uVar35) break;
                      fVar67 = *(float *)((int64_t)pfVar47 + lVar53);
                      if ((pfVar21[(int64_t)(int)(uVar41 * 0x7e4) + (uint64_t)uVar46] <= fVar67 &&
                           fVar67 != pfVar21[(int64_t)(int)(uVar41 * 0x7e4) + (uint64_t)uVar46])
                         && (*(float *)((int64_t)pfVar47 + lVar53 + 4) <= fVar67)) {
                        fVar67 = fVar67 * *(float *)((int64_t)local_1d8 + lVar53);
                        local_38 = (float *)CONCAT44(local_38._4_4_,fVar67);
                        FUN_014328b0((double)(int)uVar35 + g_023942d0,(double)fVar67);
                        pfVar54 = local_140;
                        if (local_138 == '\0') {
                          if (local_140 != (float *)0x0) {
                            FUN_00d50b00();
                          }
                        }
                        else {
                          local_138 = '\0';
                        }
                        local_48 = pfVar54;
                        local_40 = '\0';
                        FUN_00d21140();
                        if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (pfVar54 != (float *)0x0) {
                          FUN_00d50b20();
                        }
                        if ((local_138 != '\0') && (local_140 != (float *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (local_80._0_4_ < local_38._0_4_) {
                          local_b8 = (float *)CONCAT44(local_b8._4_4_,
                                                       *(void*)((int64_t)pfVar47 + lVar53));
                          local_1c8 = CONCAT44(local_1c8._4_4_,uVar35);
                          local_80 = (float *)CONCAT44(local_80._4_4_,local_38._0_4_);
                        }
                      }
                    }
                    lVar53 = lVar53 + 4;
                    uVar46 = uVar35;
                  } while (lVar53 != 0x30);
                  pfVar49 = local_1e8;
                  if (((1 < *(int *)((int64_t)local_1b0 + 0xc)) &&
                      (iVar52 = (int)local_88, 0 < iVar52)) && (iVar52 < (int)*local_e0 + -1)) {
                    pfVar54 = (float *)((int64_t)((iVar52 + (int)local_1e8) * 0x7e4) * 4 +
                                       *(int64_t *)(this_ptr + 0x6e));
                    local_38 = (float *)((uint64_t)local_38 & 0xffffffff00000000);
                    lVar53 = 0;
                    do {
                      auVar83 = local_d8;
                      lVar17 = local_1b0[2];
                      lVar18 = *(int64_t *)(lVar17 + lVar53 * 8);
                      if (local_a8 == (uint8_t  [8])lVar18) {
                        if ((local_d8[0] == '\0') && (local_a8 != (uint8_t  [8])0x0)) {
                          local_d8._1_7_ = (int7)((uint64_t)lVar17 >> 8);
                          local_d8[0] = 1;
                          local_d8._8_8_ = auVar83._8_8_;
                          pfVar47 = (float *)0x0;
                          FUN_00d50b00();
                        }
                      }
                      else {
                        if (lVar18 != 0) {
                          pfVar47 = (float *)(local_d8._0_8_ & 0xffffffff);
                          lVar17 = FUN_00d50b00();
                        }
                        auVar83 = local_d8;
                        if ((local_d8[0] == '\0') || (local_a8 == (uint8_t  [8])0x0)) {
                          local_d8._1_7_ = (int7)((uint64_t)lVar17 >> 8);
                          local_d8[0] = 1;
                          local_d8._8_8_ = auVar83._8_8_;
                          local_a8 = (uint8_t  [8])lVar18;
                        }
                        else {
                          pfVar47 = (float *)(local_d8._0_8_ & 0xffffffff);
                          local_a8 = (uint8_t  [8])lVar18;
                          uVar16 = FUN_00d50b20();
                          auVar83 = local_d8;
                          local_d8._1_7_ = (int7)((uint64_t)uVar16 >> 8);
                          local_d8[0] = 1;
                          local_d8._8_8_ = auVar83._8_8_;
                        }
                      }
                      iVar52 = (int)*(double *)((int64_t)local_a8 + 0x10);
                      lVar17 = 0;
                      uVar46 = iVar52 - 7;
                      do {
                        uVar41 = uVar46 + 1;
                        if (0 < (int)uVar41) {
                          if (0x7e1 < (int)uVar41) break;
                          fVar67 = pfVar54[uVar41];
                          if ((pfVar54[uVar46] <= fVar67 && fVar67 != pfVar54[uVar46]) &&
                             (pfVar54[uVar46 + 2] <= fVar67)) {
                            fVar67 = (float)((double)(fVar67 * local_1d8[lVar17]) +
                                            *(double *)((int64_t)local_a8 + 0x18));
                            if (local_38._0_4_ < fVar67) {
                              local_b8 = (float *)CONCAT44(local_b8._4_4_,pfVar54[iVar52]);
                              local_1c8 = CONCAT44(local_1c8._4_4_,iVar52);
                              local_38 = (float *)CONCAT44(local_38._4_4_,fVar67);
                            }
                          }
                        }
                        lVar17 = lVar17 + 1;
                        uVar46 = uVar41;
                      } while (lVar17 != 0xc);
                      lVar53 = lVar53 + 1;
                    } while (lVar53 < *(int *)((int64_t)local_1b0 + 0xc));
                  }
                  iVar52 = (int)local_88;
                  if ((float)local_1c8 == 0.0) {
                    bVar37 = 0;
                    fVar67 = (float)local_148;
                  }
                  else {
                    pfVar21 = local_88;
                    if ((local_b8._0_4_ <= local_1b8._0_4_) || (local_c0._0_4_ <= local_b8._0_4_))
                    goto LAB_01494530;
                    FUN_014ee9e0();
                    pfVar21 = local_48;
                    uVar27 = (undefined7)((uint64_t)pfVar54 >> 8);
                    if (local_48 == local_68) {
                      pfVar21 = local_68;
                      if (((char)local_90 != '\0') || (local_48 == (float *)0x0)) {
                        uVar58 = local_90._0_4_;
                        goto joined_r0x01494a07;
                      }
                      uVar58 = (uint32_t)CONCAT71(uVar27,1);
                      if (local_40 == '\0') {
                        FUN_00d50b00();
                        goto LAB_014949ed;
                      }
                    }
                    else if (local_40 == '\0') {
                      if (local_48 != (float *)0x0) {
                        FUN_00d50b00();
                      }
                      uVar58 = (uint32_t)CONCAT71(uVar27,1);
                      if (((char)local_90 != '\0') && (local_68 != (float *)0x0)) {
                        FUN_00d50b20();
                        local_68 = pfVar21;
LAB_014949ed:
                        uVar58 = (uint32_t)CONCAT71(uVar27,1);
                        pfVar21 = local_68;
                      }
joined_r0x01494a07:
                      if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      uVar58 = (uint32_t)CONCAT71(uVar27,1);
                      if (((char)local_90 != '\0') && (local_68 != (float *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    local_40 = '\0';
                    local_48 = pfVar21;
                    FUN_00d21140();
                    if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
                      FUN_00d50b20();
                    }
                    fVar67 = (float)local_148;
                    if (local_b8._0_4_ < (float)local_148) {
                      local_c0 = (float *)CONCAT44(local_c0._4_4_,local_b8._0_4_ * g_02394dc0);
                      local_c8 = (float *)CONCAT44(local_c8._4_4_,
                                                   *(void*)((int64_t)local_160 + 0xc));
                      fVar67 = local_b8._0_4_;
                    }
                    local_90 = (float *)CONCAT44(local_90._4_4_,uVar58);
                    bVar37 = (byte)local_150;
                    local_68 = pfVar21;
                  }
                }
                uVar46 = (uint)bVar37;
                if ((int)*local_e0 <= iVar52 + (int)pfVar49) {
                  uVar46 = 0;
                }
                uVar41 = iVar52 + (int)pfVar49;
                if ((int)uVar41 < 0) {
                  uVar46 = 0;
                }
                ppfVar39 = (float **)(uint64_t)uVar46;
                local_188 = (void*)
                            CONCAT44(local_188._4_4_,(int)local_188 + (int)local_158._0_4_);
                local_148 = CONCAT44(local_148._4_4_,fVar67);
              } while ((uVar46 & 1) != 0);
              if (0 < (int)local_c8) {
                pfVar21 = (float *)((uint64_t)local_c8 & 0xffffffff);
                pfVar47 = (float *)0x0;
                do {
                  lVar53 = local_160[2];
                  pfVar49 = *(float **)(lVar53 + (int64_t)pfVar47 * 8);
                  if (local_68 == pfVar49) {
                    if (((char)local_90 == '\0') && (local_68 != (float *)0x0)) {
                      local_90 = (float *)CONCAT44(local_90._4_4_,
                                                   (int)CONCAT71((int7)((uint64_t)lVar53 >> 8),1));
                      FUN_00d50b00();
                    }
LAB_01494ba0:
                    if (((uint)local_1f4 & 1) != 0) goto LAB_01494ba9;
LAB_01494bf5:
                    local_48 = local_68;
                    local_40 = '\0';
                    FUN_00d23370();
                    if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    if (pfVar49 != (float *)0x0) {
                      lVar53 = FUN_00d50b00();
                    }
                    if (((char)local_90 != '\0') && (local_68 != (float *)0x0)) {
                      uVar16 = FUN_00d50b20();
                      local_90 = (float *)CONCAT44(local_90._4_4_,
                                                   (int)CONCAT71((int7)((uint64_t)uVar16 >> 8),1));
                      local_68 = pfVar49;
                      goto LAB_01494ba0;
                    }
                    local_90 = (float *)CONCAT44(local_90._4_4_,
                                                 (int)CONCAT71((int7)((uint64_t)lVar53 >> 8),1));
                    local_68 = pfVar49;
                    if (((uint)local_1f4 & 1) == 0) goto LAB_01494bf5;
LAB_01494ba9:
                    local_48 = local_68;
                    local_40 = '\0';
                    FUN_00d21140();
                    if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  local_48 = local_68;
                  local_40 = '\0';
                  ppfVar39 = &local_48;
                  FUN_00d21140();
                  if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
                    FUN_00d50b20();
                  }
                  lVar53 = (int64_t)(int)local_68[3];
                  pfVar49 = *(float **)(*(int64_t *)(local_130 + 4) + lVar53 * 8);
                  if (local_f8 == pfVar49) {
                    if (((char)local_78 == '\0') && (local_f8 != (float *)0x0)) {
                      local_78 = CONCAT44(local_78._4_4_,
                                          (int)CONCAT71((int7)(int3)((uint)local_68[3] >> 8),1));
                      FUN_00d50b00();
                    }
LAB_01494ce0:
                    if (local_238 != 0) goto LAB_01494cea;
LAB_01494d40:
                    fVar67 = local_f8[3];
                  }
                  else {
                    if (pfVar49 != (float *)0x0) {
                      lVar53 = FUN_00d50b00();
                    }
                    if (((char)local_78 != '\0') && (local_f8 != (float *)0x0)) {
                      local_f8 = pfVar49;
                      uVar16 = FUN_00d50b20();
                      local_78 = CONCAT44(local_78._4_4_,
                                          (int)CONCAT71((int7)((uint64_t)uVar16 >> 8),1));
                      goto LAB_01494ce0;
                    }
                    local_78 = CONCAT44(local_78._4_4_,
                                        (int)CONCAT71((int7)((uint64_t)lVar53 >> 8),1));
                    local_f8 = pfVar49;
                    if (local_238 == 0) goto LAB_01494d40;
LAB_01494cea:
                    if ((char)local_240 != '\0') {
                      FUN_00d50b20();
                    }
                    local_240 = local_240 & 0xffffffff00000000;
                    fVar67 = local_f8[3];
                  }
                  if (0 < (int)fVar67) {
                    lVar53 = 0;
                    do {
                      lVar17 = *(int64_t *)(local_f8 + 4);
                      lVar18 = *(int64_t *)(lVar17 + lVar53 * 8);
                      if (local_1a8._0_8_ == lVar18) {
                        if ((local_178._0_1_ == '\0') && (local_1a8._0_8_ != 0)) {
                          local_178 = (float)CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                          uStack_174 = (uint32_t)((uint64_t)lVar17 >> 0x20);
                          FUN_00d50b00();
                        }
                      }
                      else {
                        if (lVar18 != 0) {
                          lVar17 = FUN_00d50b00();
                        }
                        if ((local_178._0_1_ == '\0') || (local_1a8._0_8_ == 0)) {
                          local_178 = (float)CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                          uStack_174 = (uint32_t)((uint64_t)lVar17 >> 0x20);
                          local_1a8._0_8_ = lVar18;
                        }
                        else {
                          local_1a8._0_8_ = lVar18;
                          uVar16 = FUN_00d50b20();
                          local_178 = (float)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                          uStack_174 = (uint32_t)((uint64_t)uVar16 >> 0x20);
                        }
                      }
                      if (*(float *)(local_1a8._0_8_ + 0x50) == local_68[0x14]) {
                        if (local_178._0_1_ != '\0') {
                          FUN_00d50b00();
                        }
                        local_68[0x15] = 0.0;
                        local_240 = CONCAT44(local_240._4_4_,local_178);
                        local_238 = local_1a8._0_8_;
                        goto joined_r0x01494e72;
                      }
                      lVar53 = lVar53 + 1;
                    } while (lVar53 < (int)local_f8[3]);
                  }
                  local_238 = 0;
joined_r0x01494e72:
                  pfVar47 = (float *)((int64_t)pfVar47 + 1);
                } while (pfVar47 != pfVar21);
              }
              pvVar15 = local_110;
              iVar52 = (int)local_218;
              if (((uint64_t)local_b0 & 1) != 0) break;
              uVar16 = FUN_00d216c0();
              local_b0 = (float *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
              pfVar49 = (float *)0xffffffff;
              local_1f4 = 0.0;
              ppfVar39 = (float **)CONCAT71((int7)((uint64_t)ppfVar39 >> 8),1);
              uVar41 = (uint)local_2d0;
            } while (0 < (int)pvVar15);
            if (*(int *)((int64_t)local_210 + 0xc) < 1) {
              local_38 = (float *)((uint64_t)local_90 & 0xffffffff);
            }
            else {
              lVar53 = 0;
              local_38 = (float *)((uint64_t)local_90 & 0xffffffff);
              do {
                lVar17 = local_210[2];
                pfVar21 = *(float **)(lVar17 + lVar53 * 8);
                if (local_68 == pfVar21) {
                  if (((char)local_38 == '\0') && (local_68 != (float *)0x0)) {
                    local_38 = (float *)CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                    FUN_00d50b00();
                  }
                }
                else {
                  if (pfVar21 != (float *)0x0) {
                    lVar17 = FUN_00d50b00();
                  }
                  if (((char)local_38 == '\0') || (local_68 == (float *)0x0)) {
                    local_38 = (float *)CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                    local_68 = pfVar21;
                  }
                  else {
                    uVar16 = FUN_00d50b20();
                    local_38 = (float *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                    local_68 = pfVar21;
                  }
                }
                fVar67 = local_68[3];
                fVar59 = local_100._0_4_;
                if ((int)fVar67 < (int)local_100._0_4_) {
                  fVar59 = fVar67;
                }
                local_100 = (void *)CONCAT44(local_100._4_4_,fVar59);
                iVar52 = (int)local_220;
                local_220 = (float *)((uint64_t)local_220 & 0xffffffff);
                if (iVar52 < (int)fVar67) {
                  local_220 = (float *)(uint64_t)(uint)fVar67;
                }
                pfVar21 = *(float **)
                           (*(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10) +
                           (int64_t)(int)fVar67 * 8);
                if (local_58 == pfVar21) {
                  if (((char)local_50 == '\0') && (local_58 != (float *)0x0)) {
                    local_50 = 1;
                    FUN_00d50b00();
                  }
                }
                else {
                  if (pfVar21 != (float *)0x0) {
                    FUN_00d50b00();
                  }
                  if (((char)local_50 == '\0') || (local_58 == (float *)0x0)) {
                    local_50 = 1;
                    local_58 = pfVar21;
                  }
                  else {
                    FUN_00d50b20();
                    local_50 = 1;
                    local_58 = pfVar21;
                  }
                }
                lVar31 = FUN_015c6ba0();
                lVar19 = g_02802f18;
                puVar43 = (void*)(int64_t)(int)local_68[3];
                lVar34 = *(int64_t *)(this_ptr + 0x6a);
                lVar17 = lVar34 + (int64_t)puVar43 * 0x1f90;
                lVar44 = (int64_t)(int)local_68[0x14];
                lVar18 = g_02802f18 + lVar44 * 0x1f90;
                iVar52 = *(int *)(g_02802f20 + lVar44 * 4);
                uVar29 = (uint64_t)iVar52;
                if (local_68[0x15] == -NAN) {
                  auVar65 = ZEXT816(0);
                  fVar67 = 0.0;
                  if (iVar52 < 0x7e4) {
                    iVar52 = iVar52 + -0x7e4;
                    fVar67 = 0.0;
                    auVar65 = ZEXT816(0);
                    fVar59 = 0.0;
                    do {
                      fVar69 = *(float *)(lVar17 + uVar29 * 4);
                      fVar68 = *(float *)(lVar18 + uVar29 * 4) * fVar69;
                      *(float *)(lVar17 + uVar29 * 4) = fVar68;
                      fVar69 = fVar69 - fVar68;
                      auVar65._0_4_ = auVar65._0_4_ + fVar69;
                      if ((int64_t)uVar29 < lVar44 + 600) {
                        fVar87 = (float)((double)*(float *)(*(int64_t *)(local_288 + 4) +
                                                           uVar29 * 4) * (double)local_1f0);
                        fVar68 = 0.0;
                        if (0.0 <= fVar87) {
                          fVar68 = fVar87;
                        }
                        if (local_118._0_4_ < fVar68) break;
                        fVar87 = *(float *)(lVar31 + (int64_t)(int)fVar68 * 4);
                        fVar59 = fVar59 + ((*(float *)(lVar31 + 4 + (int64_t)(int)fVar68 * 4) -
                                           fVar87) * (fVar68 - (float)(int)fVar68) + fVar87) *
                                          fVar69;
                        fVar67 = fVar67 + fVar69;
                      }
                      uVar29 = uVar29 + 1;
                      iVar52 = iVar52 + 1;
                    } while (iVar52 != 0);
                    if (fVar67 < g_02394274) goto LAB_0149522e;
                    local_68[4] = fVar59 / fVar67;
                    if (fVar59 / fVar67 < g_023d59b4) goto LAB_01495248;
                  }
                  else {
LAB_0149522e:
                    if (local_68[4] < g_023d59b4) {
LAB_01495248:
                      local_68[4] = 0.0001;
                    }
                  }
                  fVar59 = auVar65._0_4_;
                  fVar67 = fVar67 * *(float *)(*(int64_t *)(this_ptr + 0x8e) +
                                              (int64_t)puVar43 * 4);
                  local_68[0x16] = fVar67;
                  if (fVar67 < g_02394274) {
                    local_68[0x16] = 1.1754944e-38;
                  }
                }
                else {
                  fVar59 = 0.0;
                  if (iVar52 < 0x7e4) {
                    fVar59 = 0.0;
                    if ((uVar29 & 1) != 0) {
                      fVar67 = *(float *)(lVar17 + uVar29 * 4);
                      fVar59 = *(float *)(lVar18 + uVar29 * 4) * fVar67;
                      *(float *)(lVar17 + uVar29 * 4) = fVar59;
                      fVar59 = (fVar67 - fVar59) + g_0239424c;
                      uVar29 = uVar29 + 1;
                    }
                    if (iVar52 != 0x7e3) {
                      lVar19 = lVar19 + lVar44 * 0x1f90;
                      lVar34 = lVar34 + (int64_t)puVar43 * 0x1f90;
                      do {
                        fVar67 = *(float *)(lVar34 + uVar29 * 4);
                        fVar69 = *(float *)(lVar34 + 4 + uVar29 * 4);
                        fVar87 = *(float *)(lVar19 + uVar29 * 4) * fVar67;
                        *(float *)(lVar34 + uVar29 * 4) = fVar87;
                        fVar68 = *(float *)(lVar19 + 4 + uVar29 * 4) * fVar69;
                        *(float *)(lVar34 + 4 + uVar29 * 4) = fVar68;
                        fVar59 = (fVar69 - fVar68) + (fVar67 - fVar87) + fVar59;
                        uVar29 = uVar29 + 2;
                      } while ((int)uVar29 != 0x7e4);
                    }
                  }
                }
                local_128 = CONCAT44(local_128._4_4_,(float)local_128 + fVar59);
                lVar53 = lVar53 + 1;
              } while (lVar53 < *(int *)((int64_t)local_210 + 0xc));
            }
            if (local_278 != (float *)0x0) {
              FUN_00d50b20();
            }
            pvVar15 = local_110;
            pfVar21 = local_2c0;
            if ((local_d8[0] != '\0') && (local_a8 != (uint8_t  [8])0x0)) {
              FUN_00d50b20();
            }
            pfVar21 = (float *)((int64_t)pfVar21 + 1);
          } while ((int64_t)pfVar21 < (int64_t)*(int *)((int64_t)local_200 + 0xc));
        }
        local_110 = pvVar15;
        if (0 < *(int *)((int64_t)local_208 + 0xc)) {
          lVar53 = 0;
          pfVar47 = (float *)(local_78 & 0xffffffff);
          do {
            pfVar49 = local_f8;
            lVar17 = local_208[2];
            pfVar21 = *(float **)(lVar17 + lVar53 * 8);
            if (local_68 == pfVar21) {
              if (((char)local_38 == '\0') && (local_68 != (float *)0x0)) {
                local_38 = (float *)CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                FUN_00d50b00();
              }
LAB_01495400:
              if (local_68[0x15] == -NAN) goto LAB_0149540e;
LAB_01495368:
              local_78 = CONCAT44(local_78._4_4_,(int)pfVar47);
              local_f8 = pfVar49;
            }
            else {
              if (pfVar21 != (float *)0x0) {
                lVar17 = FUN_00d50b00();
              }
              if (((char)local_38 != '\0') && (local_68 != (float *)0x0)) {
                uVar16 = FUN_00d50b20();
                local_38 = (float *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                local_68 = pfVar21;
                goto LAB_01495400;
              }
              local_38 = (float *)CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
              local_68 = pfVar21;
              if (pfVar21[0x15] != -NAN) goto LAB_01495368;
LAB_0149540e:
              fVar67 = this_ptr[0x68];
              this_ptr[0x68] = (float)((int)fVar67 + 1);
              local_68[0x15] = (float)((int)fVar67 + 1);
              lVar17 = (int64_t)(int)local_68[3];
              pfVar21 = *(float **)(*(int64_t *)(local_130 + 4) + lVar17 * 8);
              if (pfVar49 == pfVar21) {
                pfVar21 = pfVar49;
                if (((char)pfVar47 == '\0') && (pfVar49 != (float *)0x0)) {
                  local_78 = CONCAT44(local_78._4_4_,
                                      (int)CONCAT71((int7)(int3)((uint)local_68[3] >> 8),1));
                  FUN_00d50b00();
                }
                else {
                  local_78 = CONCAT44(local_78._4_4_,(int)pfVar47);
                }
              }
              else {
                if (pfVar21 != (float *)0x0) {
                  lVar17 = FUN_00d50b00();
                }
                local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71((int7)((uint64_t)lVar17 >> 8),1));
                if (((char)pfVar47 != '\0') && (pfVar49 != (float *)0x0)) {
                  FUN_00d50b20();
                }
              }
              local_48 = local_68;
              local_40 = '\0';
              local_f8 = pfVar21;
              FUN_00d21140();
              if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
                FUN_00d50b20();
              }
              pfVar47 = (float *)(local_78 & 0xffffffff);
            }
            lVar53 = lVar53 + 1;
          } while (lVar53 < *(int *)((int64_t)local_208 + 0xc));
        }
        if (*(int *)((int64_t)local_210 + 0xc) == 0) break;
        iVar52 = 0;
        if ((int)local_110 == (int)local_2b8) {
          if (999 < (int)local_2c8) break;
          iVar52 = (int)local_2c8 + 1;
        }
        if ((float)local_120 <= g_02411280) break;
        fVar67 = ((float)local_128 / (float)local_120) / g_023b8bc0;
        fVar59 = fVar67 * fVar67 * fVar67;
        iVar33 = (int)(fVar59 * g_023b16a0);
        if (local_2b0._0_4_ < iVar33) {
          local_a8._0_4_ = fVar67;
          (**(code **)(*(int64_t *)this_ptr + 0x380))(fVar59 * g_0239011c + g_023945a0);
          local_2b0 = (double)CONCAT44(local_2b0._4_4_,iVar33);
          fVar67 = (float)local_a8._0_4_;
          if (*(char *)(this_ptr + 0xf) != '\0') {
            uVar16 = FUN_00e34a60();
            uVar27 = (undefined7)((uint64_t)uVar16 >> 8);
            local_b0 = (float *)CONCAT71(uVar27,1);
            bVar57 = true;
            local_128 = CONCAT71(uVar27,1);
            local_118 = (void*)CONCAT71(uVar27,1);
            local_120 = CONCAT71(uVar27,1);
            local_110 = (void *)CONCAT71(uVar27,1);
            goto joined_r0x01498ff7;
          }
        }
        if (g_02390124 <= fVar67) break;
        iVar33 = (int)local_270 + 1;
        local_270 = CONCAT44(local_270._4_4_,iVar33);
        pvVar15 = local_110;
      } while (iVar33 != 1000000);
      local_118 = (void*)0x0;
      local_208 = (void*)0x0;
      pfVar47 = (float *)((uint64_t)pfVar47 & 0xffffffffffffff00);
      puVar43 = (void*)FUN_00d50b20();
LAB_0149560c:
      uVar27 = (undefined7)((uint64_t)puVar43 >> 8);
      local_120 = CONCAT71(uVar27,1);
      if (local_210 == (void*)0x0) {
        uVar29 = CONCAT71(uVar27,1);
        local_210 = (void*)0x0;
        local_128 = uVar29;
      }
      else {
        local_128 = 0;
        local_210 = (void*)0x0;
        pfVar47 = (float *)((uint64_t)local_118 & 0xffffffff);
        uVar29 = FUN_00d50b20();
      }
      if (local_160 != (void*)0x0) {
        local_120 = 0;
        pfVar47 = (float *)((uint64_t)local_118 & 0xffffffff);
        local_160 = (void*)0x0;
        uVar29 = FUN_00d50b20();
      }
      uVar27 = (undefined7)(uVar29 >> 8);
      local_110 = (void *)CONCAT71(uVar27,1);
      if (local_1b0 == (void*)0x0) {
        local_b0 = (float *)CONCAT71(uVar27,1);
        local_1b0 = (void*)0x0;
      }
      else {
        local_b0 = (float *)0x0;
        local_1b0 = (void*)0x0;
        pfVar47 = (float *)((uint64_t)local_118 & 0xffffffff);
        FUN_00d50b20();
      }
      if (local_200 != (void*)0x0) {
        local_110 = (void *)0x0;
        pfVar47 = (float *)((uint64_t)local_118 & 0xffffffff);
        local_200 = (void*)0x0;
        FUN_00d50b20();
      }
      uVar16 = *(void*)(this_ptr + 0x6e);
      uVar23 = FUN_00e83da0();
      local_d8._0_8_ = uVar16;
      ___bzero();
      if ((int)*local_e0 < 1) {
        pfVar47 = (float *)((uint64_t)local_38 & 0xffffffff);
      }
      else {
        lVar53 = 0;
        do {
          lVar17 = *(int64_t *)(local_130 + 4);
          local_a8 = (uint8_t  [8])lVar53;
          pfVar21 = *(float **)(lVar17 + lVar53 * 8);
          uVar16 = local_d8._0_8_;
          if (local_f8 == pfVar21) {
            if (((char)local_78 == '\0') && (local_f8 != (float *)0x0)) {
              local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71((int7)((uint64_t)lVar17 >> 8),1));
              FUN_00d50b00();
            }
          }
          else {
            if (pfVar21 != (float *)0x0) {
              lVar17 = FUN_00d50b00();
            }
            if (((char)local_78 == '\0') || (local_f8 == (float *)0x0)) {
              local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71((int7)((uint64_t)lVar17 >> 8),1));
              local_f8 = pfVar21;
            }
            else {
              local_f8 = pfVar21;
              uVar24 = FUN_00d50b20();
              local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71((int7)((uint64_t)uVar24 >> 8),1));
            }
          }
          if ((int)local_f8[3] < 1) {
            pfVar47 = (float *)((uint64_t)local_38 & 0xffffffff);
          }
          else {
            uVar46 = local_a8._0_4_ * 0x7e4;
            lVar53 = 0;
            do {
              pfVar21 = *(float **)(*(int64_t *)(local_f8 + 4) + lVar53 * 8);
              uVar27 = (undefined7)((uint64_t)pfVar47 >> 8);
              if (local_68 == pfVar21) {
                pfVar21 = local_68;
                if ((char)local_38 == '\0') {
                  if (local_68 == (float *)0x0) {
                    pfVar47 = (float *)((uint64_t)local_38 & 0xffffffff);
                  }
                  else {
                    pfVar47 = (float *)CONCAT71(uVar27,1);
                    local_38 = (float *)0x0;
                    FUN_00d50b00();
                  }
                }
                else {
                  pfVar47 = (float *)((uint64_t)local_38 & 0xffffffff);
                }
              }
              else {
                if (pfVar21 != (float *)0x0) {
                  FUN_00d50b00();
                }
                pfVar47 = (float *)CONCAT71(uVar27,1);
                if (((char)local_38 != '\0') && (local_68 != (float *)0x0)) {
                  FUN_00d50b20();
                }
              }
              local_68 = pfVar21;
              local_3b0 = uVar16 + (uint64_t)uVar46 * 4;
              local_3a8 = uVar23;
              FUN_015c31c0(&local_3a8,local_68[0x14],0x14);
              lVar53 = lVar53 + 1;
              local_38 = (float *)((uint64_t)pfVar47 & 0xffffffff);
            } while (lVar53 < (int)local_f8[3]);
          }
          lVar53 = (int64_t)local_a8 + 1;
          local_38 = (float *)((uint64_t)pfVar47 & 0xffffffff);
        } while (lVar53 < (int)*local_e0);
      }
      FUN_00e83070();
      pfVar21 = local_e0;
      uVar29 = FUN_00e83010();
      pfVar21 = (float *)(uint64_t)(uint)*pfVar21;
      lVar53 = 0;
      puVar50 = (uint *)local_d8._0_8_;
      do {
        uVar30 = local_d8._0_8_ + lVar53 * 4;
        local_a8 = (uint8_t  [8])uVar30;
        local_38 = (float *)(lVar53 - 0x7e3);
        uVar46 = (uint)pfVar21;
        if (0 < (int)uVar46) {
          if ((uVar46 < 8) ||
             ((local_1e0 <
               (uint64_t)(local_d8._0_8_ + ((int64_t)pfVar21 * 0x7e4 + (int64_t)local_38) * 4) &&
              (uVar30 < local_1e0 + (int64_t)pfVar21 * 4)))) {
            pfVar49 = (float *)0x0;
            lVar17 = lVar53;
          }
          else {
            pfVar49 = (float *)(uint64_t)(uVar46 & 0xfffffff8);
            lVar17 = (int64_t)pfVar49 * 0x7e4 + lVar53;
            pfVar54 = (float *)0x0;
            puVar32 = puVar50;
            do {
              auVar83 = insertps(ZEXT416(*puVar32),puVar32[0x7e4],0x10);
              auVar83 = insertps(auVar83,puVar32[0xfc8],0x20);
              auVar83 = insertps(auVar83,puVar32[0x17ac],0x30);
              auVar93 = insertps(ZEXT416(puVar32[0x1f90]),puVar32[0x2774],0x10);
              auVar93 = insertps(auVar93,puVar32[0x2f58],0x20);
              auVar93 = insertps(auVar93,puVar32[0x373c],0x30);
              *(uint8_t (*) [16])(local_1e0 + (int64_t)pfVar54 * 4) = auVar83;
              *(uint8_t (*) [16])(local_1e0 + 0x10 + (int64_t)pfVar54 * 4) = auVar93;
              pfVar54 = pfVar54 + 2;
              puVar32 = puVar32 + 0x3f20;
            } while (pfVar49 != pfVar54);
            if (pfVar49 == pfVar21) goto LAB_01495b90;
          }
          uVar45 = ~(uint64_t)pfVar49;
          for (uVar30 = (uint64_t)pfVar21 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
            *(void*)(local_1e0 + (int64_t)pfVar49 * 4) =
                 *(void*)(local_d8._0_8_ + lVar17 * 4);
            lVar17 = lVar17 + 0x7e4;
            pfVar49 = (float *)((int64_t)pfVar49 + 1);
          }
          if ((void*)0x2 < (void*)(uVar45 + (int64_t)pfVar21)) {
            puVar55 = (void*)(local_d8._0_8_ + lVar17 * 4);
            do {
              *(void*)(local_1e0 + (int64_t)pfVar49 * 4) = *puVar55;
              *(void*)(local_1e0 + 4 + (int64_t)pfVar49 * 4) = puVar55[0x7e4];
              *(void*)(local_1e0 + 8 + (int64_t)pfVar49 * 4) = puVar55[0xfc8];
              *(void*)(local_1e0 + 0xc + (int64_t)pfVar49 * 4) = puVar55[0x17ac];
              pfVar49 = pfVar49 + 1;
              puVar55 = puVar55 + 0x1f90;
            } while (pfVar21 != pfVar49);
          }
        }
LAB_01495b90:
        ___bzero();
        fVar84 = g_0240e320;
        fVar87 = _UNK_0240e23c;
        fVar68 = _UNK_0240e238;
        fVar69 = _UNK_0240e234;
        fVar59 = g_0240e230;
        fVar67 = *local_e0;
        pfVar21 = (float *)(uint64_t)(uint)fVar67;
        if (4 < (int)fVar67) {
          lVar17 = 0;
          do {
            fVar85 = *(float *)(local_1e0 + 8 + lVar17 * 4);
            if (0.0 < fVar85) {
              auVar92._4_4_ = fVar85 * fVar69;
              auVar92._0_4_ = fVar85 * fVar59;
              auVar83 = *(uint8_t (*) [16])(uVar29 + lVar17 * 4);
              auVar92._8_4_ = fVar68 * 0.0;
              auVar92._12_4_ = fVar87 * 0.0;
              auVar93 = blendps(auVar92,ZEXT416((uint)(fVar85 * fVar84)),1);
              auVar94._0_4_ = auVar93._0_4_ + auVar83._0_4_;
              auVar94._4_4_ = auVar93._4_4_ + auVar83._4_4_;
              auVar94._8_4_ = fVar85 * fVar59 + auVar83._8_4_;
              auVar94._12_4_ = fVar85 * fVar69 + auVar83._12_4_;
              *(uint8_t (*) [16])(uVar29 + lVar17 * 4) = auVar94;
              *(float *)(uVar29 + 0x10 + lVar17 * 4) =
                   fVar85 * fVar84 + *(float *)(uVar29 + 0x10 + lVar17 * 4);
            }
            lVar17 = lVar17 + 1;
          } while ((uint64_t)((int)fVar67 - 2) - 2 != lVar17);
        }
        if (0 < (int)fVar67) {
          if (((uint)fVar67 < 8) ||
             (((uint64_t)local_a8 < uVar29 + (int64_t)pfVar21 * 4 &&
              (uVar29 < (uint64_t)
                        (local_d8._0_8_ + ((int64_t)pfVar21 * 0x7e4 + (int64_t)local_38) * 4)))))
          {
            pfVar49 = (float *)0x0;
            lVar17 = lVar53;
          }
          else {
            pfVar49 = (float *)(uint64_t)((uint)fVar67 & 0xfffffff8);
            lVar17 = (int64_t)pfVar49 * 0x7e4 + lVar53;
            pfVar54 = (float *)0x0;
            puVar32 = puVar50;
            do {
              auVar83 = *(uint8_t (*) [16])(uVar29 + (int64_t)pfVar54 * 4);
              auVar93 = *(uint8_t (*) [16])(uVar29 + 0x10 + (int64_t)pfVar54 * 4);
              *puVar32 = auVar83._0_4_;
              uVar16 = extractps(auVar83,1);
              *(void*)(puVar32 + 0x7e4) = uVar16;
              uVar16 = extractps(auVar83,2);
              *(void*)(puVar32 + 0xfc8) = uVar16;
              uVar16 = extractps(auVar83,3);
              *(void*)(puVar32 + 0x17ac) = uVar16;
              puVar32[0x1f90] = auVar93._0_4_;
              uVar16 = extractps(auVar93,1);
              *(void*)(puVar32 + 0x2774) = uVar16;
              uVar16 = extractps(auVar93,2);
              *(void*)(puVar32 + 0x2f58) = uVar16;
              uVar16 = extractps(auVar93,3);
              *(void*)(puVar32 + 0x373c) = uVar16;
              pfVar54 = pfVar54 + 2;
              puVar32 = puVar32 + 0x3f20;
            } while (pfVar49 != pfVar54);
            if (pfVar49 == pfVar21) goto LAB_014959d0;
          }
          uVar45 = ~(uint64_t)pfVar49;
          uVar30 = (uint64_t)pfVar21 & 3;
          if (((uint)fVar67 & 3) != 0) {
            do {
              *(void*)(local_d8._0_8_ + lVar17 * 4) =
                   *(void*)(uVar29 + (int64_t)pfVar49 * 4);
              lVar17 = lVar17 + 0x7e4;
              pfVar49 = (float *)((int64_t)pfVar49 + 1);
              uVar30 = uVar30 - 1;
            } while (uVar30 != 0);
          }
          if ((void*)0x2 < (void*)(uVar45 + (int64_t)pfVar21)) {
            puVar55 = (void*)(local_d8._0_8_ + lVar17 * 4);
            do {
              *puVar55 = *(void*)(uVar29 + (int64_t)pfVar49 * 4);
              puVar55[0x7e4] = *(void*)(uVar29 + 4 + (int64_t)pfVar49 * 4);
              puVar55[0xfc8] = *(void*)(uVar29 + 8 + (int64_t)pfVar49 * 4);
              puVar55[0x17ac] = *(void*)(uVar29 + 0xc + (int64_t)pfVar49 * 4);
              pfVar49 = pfVar49 + 1;
              puVar55 = puVar55 + 0x1f90;
            } while (pfVar21 != pfVar49);
          }
        }
LAB_014959d0:
        lVar53 = lVar53 + 1;
        puVar50 = puVar50 + 1;
      } while (lVar53 != 0x7e4);
      FUN_00e83070();
      pfVar49 = (float *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void**)pfVar49 = local_248;
      (*local_250)();
      if ((int)*local_e0 < 1) {
        pfVar54 = (float *)0x0;
        local_1c8 = 0;
        local_1e8 = pfVar49;
LAB_0149628e:
        FUN_00d50b20();
        local_218 = (float *)0x0;
        local_38 = (float *)((uint64_t)pfVar47 & 0xffffffff);
        local_1e8 = (float *)0x0;
      }
      else {
        local_38 = (float *)((uint64_t)pfVar47 & 0xffffffff);
        pfVar47 = (float *)0x0;
        pfVar54 = (float *)0x0;
        local_1c8 = 0;
        lVar53 = local_d8._0_8_;
        local_1e8 = pfVar49;
        do {
          lVar17 = *(int64_t *)(local_130 + 4);
          pfVar49 = *(float **)(lVar17 + (int64_t)pfVar47 * 8);
          if (local_f8 == pfVar49) {
            if (((char)local_78 == '\0') && (local_f8 != (float *)0x0)) {
              local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71((int7)((uint64_t)lVar17 >> 8),1));
              FUN_00d50b00();
            }
          }
          else {
            if (pfVar49 != (float *)0x0) {
              lVar17 = FUN_00d50b00();
            }
            if (((char)local_78 == '\0') || (local_f8 == (float *)0x0)) {
              local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71((int7)((uint64_t)lVar17 >> 8),1));
              local_f8 = pfVar49;
            }
            else {
              local_f8 = pfVar49;
              uVar16 = FUN_00d50b20();
              local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71((int7)((uint64_t)uVar16 >> 8),1));
            }
          }
          FUN_00d216c0();
          FUN_01483650();
          pfVar49 = local_48;
          if ((local_40 == '\0') && (local_48 != (float *)0x0)) {
            FUN_00d50b00();
          }
          local_90 = pfVar49;
          pfVar49 = (float *)(lVar53 + (uint64_t)(uint)((int)pfVar47 * 0x7e4) * 4);
          lVar17 = 1;
          local_b8 = pfVar47;
          local_80 = pfVar49;
          do {
            fVar67 = pfVar49[lVar17];
            auVar26 = (uint8_t  [8])(lVar17 + 1);
            if (pfVar49[lVar17 + -1] <= fVar67 && fVar67 != pfVar49[lVar17 + -1]) {
              local_a8 = auVar26;
              if (pfVar49[(int64_t)auVar26] <= fVar67) {
                fVar67 = this_ptr[0x68];
                if (pfVar54 != (float *)0x0) {
                  if ((char)local_1c8 == '\0') {
                    local_1c8 = 0;
                  }
                  else {
                    FUN_00d50b20();
                    local_1c8 = 0;
                  }
                }
                if ((int)local_f8[3] < 1) {
                  lVar53 = local_d8._0_8_;
                }
                else {
                  lVar53 = 0;
                  local_1d8 = (float *)0x0;
                  do {
                    lVar18 = *(int64_t *)(local_f8 + 4);
                    pfVar47 = *(float **)(lVar18 + lVar53 * 8);
                    if (local_68 == pfVar47) {
                      if (((char)local_38 == '\0') && (local_68 != (float *)0x0)) {
                        local_38 = (float *)CONCAT71((int7)((uint64_t)lVar18 >> 8),1);
                        FUN_00d50b00();
                      }
                    }
                    else {
                      if (pfVar47 != (float *)0x0) {
                        lVar18 = FUN_00d50b00();
                      }
                      if (((char)local_38 == '\0') || (local_68 == (float *)0x0)) {
                        local_38 = (float *)CONCAT71((int7)((uint64_t)lVar18 >> 8),1);
                        local_68 = pfVar47;
                      }
                      else {
                        uVar16 = FUN_00d50b20();
                        local_38 = (float *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                        local_68 = pfVar47;
                      }
                    }
                    uVar41 = (int)local_68[0x14] - (int)lVar17;
                    uVar46 = -uVar41;
                    if (0 < (int)uVar41) {
                      uVar46 = uVar41;
                    }
                    if ((uVar46 < 6) && (fVar59 = local_68[0x15], (int)fVar59 < (int)fVar67)) {
                      fVar67 = fVar59;
                      if (local_1d8 == local_68) {
                        if ((((char)local_38 != '\0') && ((char)local_1c8 == '\0')) &&
                           (local_1d8 != (float *)0x0)) {
                          local_1c8 = CONCAT71((uint7)(uint3)(uVar41 >> 8),1);
                          FUN_00d50b00();
                        }
                      }
                      else {
                        if ((char)local_38 != '\0') {
                          FUN_00d50b00();
                        }
                        if (((char)local_1c8 == '\0') || (local_1d8 == (float *)0x0)) {
                          local_1c8 = (uint64_t)local_38;
                          local_1d8 = local_68;
                        }
                        else {
                          local_1d8 = local_68;
                          FUN_00d50b20(local_1c8);
                          local_1c8 = (uint64_t)local_38;
                        }
                      }
                    }
                    pfVar54 = local_1d8;
                    lVar53 = lVar53 + 1;
                  } while (lVar53 < (int)local_f8[3]);
                  lVar53 = local_d8._0_8_;
                  if (local_1d8 != (float *)0x0) {
                    FUN_014eeb50();
                    local_48 = pfVar54;
                    local_40 = '\0';
                    FUN_00d21140();
                    pfVar49 = local_80;
                    pfVar47 = local_b8;
                    lVar53 = local_d8._0_8_;
                    auVar26 = local_a8;
                    if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_48 = pfVar54;
                    local_40 = '\0';
                    FUN_00d23f50();
                    if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_01495f03;
                  }
                }
                pfVar54 = (float *)0x0;
                pfVar49 = local_80;
                pfVar47 = local_b8;
                auVar26 = local_a8;
              }
            }
LAB_01495f03:
            pfVar4 = local_f8;
            lVar17 = (int64_t)auVar26;
          } while (auVar26 != (uint8_t  [8])0x7e3);
          uVar16 = FUN_00d216c0();
          local_48 = local_1e8;
          local_40 = '\0';
          FUN_00d214d0(uVar16,pfVar4[3]);
          if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
            FUN_00d50b20();
          }
          if (local_90 != (float *)0x0) {
            FUN_00d50b20();
          }
          pfVar47 = (float *)((int64_t)pfVar47 + 1);
        } while ((int64_t)pfVar47 < (int64_t)(int)*local_e0);
        if (local_1e8 != (float *)0x0) {
          pfVar47 = (float *)((uint64_t)local_38 & 0xffffffff);
          goto LAB_0149628e;
        }
        local_218 = (float *)CONCAT71((int7)((uint64_t)pfVar4 >> 8),1);
      }
      local_1d8 = pfVar54;
      FUN_013fb420();
      local_c8 = local_48;
      if ((((local_40 == '\0') && (local_48 != (float *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
         && (local_48 != (float *)0x0)) {
        FUN_00d50b20();
      }
      if (0 < (int)this_ptr[0x67]) {
        pfVar49 = (float *)(uint64_t)(uint)((int)local_108 / 3);
        pfVar47 = (float *)0x0;
        local_90 = pfVar49;
        do {
          lVar53 = *(int64_t *)(local_130 + 4);
          pfVar21 = *(float **)(lVar53 + (int64_t)pfVar47 * 8);
          if (local_f8 == pfVar21) {
            if (((char)local_78 == '\0') && (local_f8 != (float *)0x0)) {
              local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71((int7)((uint64_t)lVar53 >> 8),1));
              FUN_00d50b00();
            }
          }
          else {
            if (pfVar21 != (float *)0x0) {
              lVar53 = FUN_00d50b00();
            }
            if (((char)local_78 == '\0') || (local_f8 == (float *)0x0)) {
              local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71((int7)((uint64_t)lVar53 >> 8),1));
              local_f8 = pfVar21;
            }
            else {
              local_f8 = pfVar21;
              uVar16 = FUN_00d50b20();
              local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71((int7)((uint64_t)uVar16 >> 8),1));
            }
          }
          pfVar21 = *(float **)
                     (*(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10) + (int64_t)pfVar47 * 8)
          ;
          if (local_58 == pfVar21) {
            if (((char)local_50 == '\0') && (local_58 != (float *)0x0)) {
              local_50 = 1;
              FUN_00d50b00();
            }
          }
          else {
            if (pfVar21 != (float *)0x0) {
              FUN_00d50b00();
            }
            if (((char)local_50 == '\0') || (local_58 == (float *)0x0)) {
              local_50 = 1;
              local_58 = pfVar21;
            }
            else {
              FUN_00d50b20();
              local_50 = 1;
              local_58 = pfVar21;
            }
          }
          uVar16 = FUN_015c6b60();
          local_a8 = (uint8_t  [8])uVar16;
          uVar16 = FUN_015c66c0();
          local_d8._0_8_ = uVar16;
          local_b8 = (float *)FUN_015c6ba0();
          local_80 = pfVar47;
          if (0 < (int)local_f8[3]) {
            lVar53 = 0;
            pfVar21 = local_68;
            do {
              uVar29 = (uint64_t)local_38 & 0xffffffff;
              lVar17 = *(int64_t *)(local_f8 + 4);
              local_68 = *(float **)(lVar17 + lVar53 * 8);
              if (pfVar21 == local_68) {
                local_68 = pfVar21;
                local_38 = (float *)uVar29;
                if (((char)uVar29 == '\0') && (pfVar21 != (float *)0x0)) {
                  local_38 = (float *)CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                  FUN_00d50b00();
                }
              }
              else {
                if (local_68 != (float *)0x0) {
                  lVar17 = FUN_00d50b00();
                }
                local_38 = (float *)CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                if (((char)uVar29 != '\0') && (pfVar21 != (float *)0x0)) {
                  FUN_00d50b20();
                }
              }
              FUN_014eecb0(local_b8,local_a8,(uint64_t)local_228 & 0xffffffff);
              FUN_014eed60();
              lVar53 = lVar53 + 1;
              pfVar49 = local_f8;
              pfVar21 = local_68;
            } while (lVar53 < (int)local_f8[3]);
          }
          pfVar54 = local_1d8;
          pvVar15 = _pthread_getspecific((void*)pfVar49);
          pfVar47 = local_80;
          pfVar21 = local_b8;
          if (pvVar15 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_330 = local_f8;
          local_328 = '\0';
          pfVar49 = (float *)local_d8._0_8_;
          uVar16 = FUN_013924d0(local_d8._0_8_,local_a8,pfVar21,local_90);
          if ((local_328 != '\0') && (local_330 != (float *)0x0)) {
            uVar16 = FUN_00d50b20();
          }
          local_48 = local_f8;
          local_40 = '\0';
          FUN_00d214d0(uVar16,*(void*)(*(int64_t *)(this_ptr + 0x5e) + 0xc));
          if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
            FUN_00d50b20();
          }
          pfVar47 = (float *)((int64_t)pfVar47 + 1);
        } while ((int64_t)pfVar47 < (int64_t)(int)*local_e0);
      }
      (**(code **)(*(int64_t *)this_ptr + 0x380))();
      if (*(char *)(this_ptr + 0xf) == '\0') {
        pfVar47 = (float *)FUN_00e83010();
        ___bzero();
        uVar46 = (uint)local_108;
        if ((int)(g_0240e324 / local_18c) <= (int)(uint)local_108) {
          uVar46 = (int)(g_0240e324 / local_18c);
        }
        FUN_00c8e690();
        pfVar49 = local_48;
        if ((((local_40 == '\0') && (local_48 != (float *)0x0)) &&
            (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (float *)0x0)) {
          FUN_00d50b20();
        }
        local_a8 = (uint8_t  [8])pfVar49;
        FUN_00c92170();
        FUN_00c92160();
        uVar16 = _UNK_0240e248;
        puVar22 = *(void**)(pfVar49 + 4);
        *puVar22 = g_0240e240;
        puVar22[1] = uVar16;
        uVar16 = _UNK_0240e258;
        puVar22[2] = g_0240e250;
        puVar22[3] = uVar16;
        *(void*)(puVar22 + 4) = 0x3eaaaaab;
        local_80 = pfVar47;
        if (0 < (int)*local_e0) {
          if ((int)uVar46 < 2) {
            uVar46 = 0;
            lVar53 = 0;
            do {
              lVar17 = *(int64_t *)
                        (*(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10) + lVar53 * 8);
              if (lVar17 != 0) {
                FUN_00d50b00();
              }
              FUN_015c6b60();
              FUN_015c66c0();
              FUN_015c6ba0();
              local_2d8 = pfVar47 + uVar46;
              FUN_015c15b0(0,0x7e4);
              if (lVar17 != 0) {
                FUN_00d50b20();
              }
              lVar53 = lVar53 + 1;
              uVar46 = uVar46 + 0x7e4;
            } while (lVar53 < (int)*local_e0);
          }
          else {
            uVar29 = 0;
            do {
              pfVar49 = *(float **)
                         (*(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10) + uVar29 * 8);
              if (pfVar49 != (float *)0x0) {
                FUN_00d50b00();
              }
              local_90 = pfVar49;
              FUN_015c6b60();
              local_b8 = (float *)FUN_015c66c0();
              lVar17 = FUN_015c6ba0();
              lVar53 = g_02802f00;
              puVar55 = pfVar47 + (uint)((int)uVar29 * 0x7e4);
              uVar30 = 1;
              local_148 = uVar29;
              do {
                fVar59 = (*(float *)(lVar17 + uVar30 * 4) + g_0240e328) / g_02390128;
                fVar67 = 0.0;
                if (0.0 <= fVar59) {
                  fVar67 = fVar59;
                }
                fVar59 = g_02390124;
                if (fVar67 * fVar67 <= g_02390124) {
                  fVar59 = fVar67 * fVar67;
                }
                if (g_0239424c < fVar59) {
                  local_d8._0_4_ = fVar59;
                  fVar67 = (float)_logf(local_b8[uVar30] * g_02394204);
                  iVar52 = (int)((double)((fVar67 * g_02394208 + g_0239420c) * g_02391094) +
                                g_023942d0);
                  if (iVar52 < 0) {
                    iVar52 = 0;
                  }
                  if (0x7e2 < iVar52) {
                    iVar52 = 0x7e3;
                  }
                  uVar41 = iVar52 - *(int *)(lVar53 + 4);
                  if (uVar41 < 0x7e4) {
                    puVar55[uVar41] =
                         *(float *)(*(int64_t *)((int64_t)local_a8 + 0x10) + 4) *
                         (float)local_d8._0_4_ + (float)puVar55[uVar41];
                    uVar41 = iVar52 - *(int *)(lVar53 + 8);
                    if (0x7e3 < uVar41) goto LAB_0149696b;
LAB_01496a52:
                    puVar55[uVar41] =
                         *(float *)(*(int64_t *)((int64_t)local_a8 + 0x10) + 8) *
                         (float)local_d8._0_4_ + (float)puVar55[uVar41];
                    uVar41 = iVar52 - *(int *)(lVar53 + 0xc);
                    if (0x7e3 < uVar41) goto LAB_01496a84;
LAB_0149697d:
                    puVar55[uVar41] =
                         *(float *)(*(int64_t *)((int64_t)local_a8 + 0x10) + 0xc) *
                         (float)local_d8._0_4_ + (float)puVar55[uVar41];
                    uVar41 = iVar52 - *(int *)(lVar53 + 0x10);
                    if (0x7e3 < uVar41) goto LAB_014969af;
LAB_01496a96:
                    puVar55[uVar41] =
                         *(float *)(*(int64_t *)((int64_t)local_a8 + 0x10) + 0x10) *
                         (float)local_d8._0_4_ + (float)puVar55[uVar41];
                    uVar41 = iVar52 - *(int *)(lVar53 + 0x14);
                    if (0x7e3 < uVar41) goto LAB_01496ac8;
LAB_014969c1:
                    puVar55[uVar41] =
                         *(float *)(*(int64_t *)((int64_t)local_a8 + 0x10) + 0x14) *
                         (float)local_d8._0_4_ + (float)puVar55[uVar41];
                    uVar41 = iVar52 - *(int *)(lVar53 + 0x18);
                    if (0x7e3 < uVar41) goto LAB_014969f3;
LAB_01496ada:
                    puVar55[uVar41] =
                         *(float *)(*(int64_t *)((int64_t)local_a8 + 0x10) + 0x18) *
                         (float)local_d8._0_4_ + (float)puVar55[uVar41];
                    uVar41 = iVar52 - *(int *)(lVar53 + 0x1c);
                    if (0x7e3 < uVar41) goto LAB_01496b0c;
LAB_01496a05:
                    puVar55[uVar41] =
                         *(float *)(*(int64_t *)((int64_t)local_a8 + 0x10) + 0x1c) *
                         (float)local_d8._0_4_ + (float)puVar55[uVar41];
                    iVar33 = *(int *)(lVar53 + 0x20);
                  }
                  else {
                    uVar41 = iVar52 - *(int *)(lVar53 + 8);
                    if (uVar41 < 0x7e4) goto LAB_01496a52;
LAB_0149696b:
                    uVar41 = iVar52 - *(int *)(lVar53 + 0xc);
                    if (uVar41 < 0x7e4) goto LAB_0149697d;
LAB_01496a84:
                    uVar41 = iVar52 - *(int *)(lVar53 + 0x10);
                    if (uVar41 < 0x7e4) goto LAB_01496a96;
LAB_014969af:
                    uVar41 = iVar52 - *(int *)(lVar53 + 0x14);
                    if (uVar41 < 0x7e4) goto LAB_014969c1;
LAB_01496ac8:
                    uVar41 = iVar52 - *(int *)(lVar53 + 0x18);
                    if (uVar41 < 0x7e4) goto LAB_01496ada;
LAB_014969f3:
                    uVar41 = iVar52 - *(int *)(lVar53 + 0x1c);
                    if (uVar41 < 0x7e4) goto LAB_01496a05;
LAB_01496b0c:
                    iVar33 = *(int *)(lVar53 + 0x20);
                  }
                  uVar41 = iVar52 - iVar33;
                  if (uVar41 < 0x7e4) {
                    puVar55[uVar41] =
                         (float)local_d8._0_4_ *
                         *(float *)(*(int64_t *)((int64_t)local_a8 + 0x10) + 0x20) +
                         (float)puVar55[uVar41];
                  }
                }
                uVar30 = uVar30 + 1;
              } while (uVar46 != uVar30);
              local_2d8 = puVar55;
              FUN_015c15b0(0,0x7e4);
              pfVar47 = local_80;
              uVar29 = local_148;
              if (local_90 != (float *)0x0) {
                FUN_00d50b20();
              }
              uVar29 = uVar29 + 1;
            } while ((int64_t)uVar29 < (int64_t)(int)*local_e0);
          }
        }
        FUN_00c8e690();
        pfVar49 = local_48;
        if (((local_40 == '\0') && (local_48 != (float *)0x0)) &&
           ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (float *)0x0)))) {
          FUN_00d50b20();
        }
        local_88 = pfVar49;
        FUN_00c92170();
        FUN_00c92160();
        FUN_00c8e690();
        pfVar54 = local_48;
        if (((local_40 == '\0') && (local_48 != (float *)0x0)) &&
           ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (float *)0x0)))) {
          FUN_00d50b20();
        }
        local_b8 = pfVar54;
        FUN_00c92170();
        FUN_00c92160();
        local_d8._0_4_ = (float)((g_0238fee8 / local_340) * g_0240e3c8);
        uVar29 = (uint64_t)(uint)*local_e0;
        lVar53 = 0;
LAB_01496d51:
        do {
          uVar46 = (uint)uVar29;
          if (0 < (int)uVar46) {
            lVar17 = *(int64_t *)(pfVar49 + 4);
            if (uVar29 - 1 < 3) {
              uVar29 = 0;
            }
            else {
              puVar55 = pfVar47 + lVar53;
              uVar29 = 0;
              do {
                *(void*)(lVar17 + uVar29 * 4) = *puVar55;
                *(void*)(lVar17 + 4 + uVar29 * 4) = puVar55[0x7e4];
                *(void*)(lVar17 + 8 + uVar29 * 4) = puVar55[0xfc8];
                *(void*)(lVar17 + 0xc + uVar29 * 4) = puVar55[0x17ac];
                uVar29 = uVar29 + 4;
                puVar55 = puVar55 + 0x1f90;
              } while ((uVar46 & 0xfffffffc) != uVar29);
            }
            if ((uint64_t)(uVar46 & 3) != 0) {
              puVar55 = pfVar47 + lVar53 + uVar29 * 0x7e4;
              uVar30 = 0;
              do {
                *(void*)(lVar17 + uVar29 * 4 + uVar30 * 4) = *puVar55;
                uVar30 = uVar30 + 1;
                puVar55 = puVar55 + 0x7e4;
              } while ((uVar46 & 3) != uVar30);
            }
          }
          local_3a0 = *(void*)(pfVar49 + 4);
          FUN_015c15b0(1);
          fVar67 = *local_e0;
          uVar29 = (uint64_t)(uint)fVar67;
          if ((int)fVar67 < 1) goto LAB_01496d40;
          lVar17 = *(int64_t *)(pfVar49 + 4);
          if (uVar29 - 1 < 3) {
            uVar30 = 0;
          }
          else {
            puVar55 = pfVar47 + lVar53;
            uVar30 = 0;
            do {
              *puVar55 = *(void*)(lVar17 + uVar30 * 4);
              puVar55[0x7e4] = *(void*)(lVar17 + 4 + uVar30 * 4);
              puVar55[0xfc8] = *(void*)(lVar17 + 8 + uVar30 * 4);
              puVar55[0x17ac] = *(void*)(lVar17 + 0xc + uVar30 * 4);
              uVar30 = uVar30 + 4;
              puVar55 = puVar55 + 0x1f90;
            } while (((uint)fVar67 & 0xfffffffc) != uVar30);
          }
          if ((uint64_t)((uint)fVar67 & 3) != 0) {
            puVar55 = pfVar47 + lVar53 + uVar30 * 0x7e4;
            uVar45 = 0;
            do {
              *puVar55 = *(void*)(lVar17 + uVar30 * 4 + uVar45 * 4);
              puVar55 = puVar55 + 0x7e4;
              uVar45 = uVar45 + 1;
            } while (((uint)fVar67 & 3) != uVar45);
          }
          lVar53 = lVar53 + 1;
        } while (lVar53 != 0x681);
        local_158 = pfVar47 + 3;
        local_150 = pfVar47 + 1;
        uVar30 = 0;
        lVar53 = 0;
        do {
          pfVar49 = *(float **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10) + lVar53 * 8);
          if (pfVar49 != (float *)0x0) {
            FUN_00d50b00();
          }
          pfVar54 = local_b8;
          puVar55 = local_150;
          uVar29 = (uint64_t)((uint)uVar30 & 0x3fffffff);
          uVar45 = lVar53 * 0x1f90 & 0x3fffffff0;
          local_188 = (void*)((int64_t)pfVar47 + uVar45);
          puVar43 = *(void**)(local_b8 + 4);
          if ((puVar43 < &g_00001f90 + (int64_t)pfVar47 + uVar45) &&
             (local_188 < &g_00001f90 + (int64_t)puVar43)) {
            lVar17 = 0;
          }
          else {
            lVar17 = 0x1c;
            do {
              uVar16 = *(void*)((int64_t)(pfVar47 + uVar29 * 4 + lVar17 + -0x1c) + 8);
              uVar23 = *(void*)(pfVar47 + uVar29 * 4 + lVar17 + -0x18);
              uVar24 = *(void*)((int64_t)(pfVar47 + uVar29 * 4 + lVar17 + -0x18) + 8);
              *(void*)(puVar43 + lVar17 * 4 + -0x70) =
                   *(void*)(pfVar47 + uVar29 * 4 + lVar17 + -0x1c);
              *(void*)((int64_t)(puVar43 + lVar17 * 4 + -0x70) + 8) = uVar16;
              *(void*)(puVar43 + lVar17 * 4 + -0x60) = uVar23;
              *(void*)((int64_t)(puVar43 + lVar17 * 4 + -0x60) + 8) = uVar24;
              uVar16 = *(void*)((int64_t)(pfVar47 + uVar29 * 4 + lVar17 + -0x14) + 8);
              uVar23 = *(void*)(pfVar47 + uVar29 * 4 + lVar17 + -0x10);
              uVar24 = *(void*)((int64_t)(pfVar47 + uVar29 * 4 + lVar17 + -0x10) + 8);
              *(void*)(puVar43 + lVar17 * 4 + -0x50) =
                   *(void*)(pfVar47 + uVar29 * 4 + lVar17 + -0x14);
              *(void*)((int64_t)(puVar43 + lVar17 * 4 + -0x50) + 8) = uVar16;
              *(void*)(puVar43 + lVar17 * 4 + -0x40) = uVar23;
              *(void*)((int64_t)(puVar43 + lVar17 * 4 + -0x40) + 8) = uVar24;
              uVar16 = *(void*)((int64_t)(pfVar47 + uVar29 * 4 + lVar17 + -0xc) + 8);
              uVar23 = *(void*)(pfVar47 + uVar29 * 4 + lVar17 + -8);
              uVar24 = *(void*)((int64_t)(pfVar47 + uVar29 * 4 + lVar17 + -8) + 8);
              *(void*)(puVar43 + lVar17 * 4 + -0x30) =
                   *(void*)(pfVar47 + uVar29 * 4 + lVar17 + -0xc);
              *(void*)((int64_t)(puVar43 + lVar17 * 4 + -0x30) + 8) = uVar16;
              *(void*)(puVar43 + lVar17 * 4 + -0x20) = uVar23;
              *(void*)((int64_t)(puVar43 + lVar17 * 4 + -0x20) + 8) = uVar24;
              uVar16 = *(void*)((int64_t)(pfVar47 + uVar29 * 4 + lVar17 + -4) + 8);
              uVar23 = *(void*)(pfVar47 + uVar29 * 4 + lVar17);
              uVar24 = *(void*)((int64_t)(pfVar47 + uVar29 * 4 + lVar17) + 8);
              *(void*)(puVar43 + lVar17 * 4 + -0x10) =
                   *(void*)(pfVar47 + uVar29 * 4 + lVar17 + -4);
              *(void*)((int64_t)(puVar43 + lVar17 * 4 + -0x10) + 8) = uVar16;
              *(void*)(puVar43 + lVar17 * 4) = uVar23;
              *(void*)((int64_t)(puVar43 + lVar17 * 4) + 8) = uVar24;
              lVar17 = lVar17 + 0x20;
            } while (lVar17 != 0x7fc);
            lVar17 = 0x7e0;
          }
          do {
            *(void*)(puVar43 + lVar17 * 4) = local_158[uVar29 * 4 + lVar17 + -3];
            *(void*)(puVar43 + lVar17 * 4 + 4) = local_158[uVar29 * 4 + lVar17 + -2];
            *(void*)(puVar43 + lVar17 * 4 + 8) = local_158[uVar29 * 4 + lVar17 + -1];
            *(void*)(puVar43 + lVar17 * 4 + 0xc) = local_158[uVar29 * 4 + lVar17];
            lVar17 = lVar17 + 4;
          } while (lVar17 != 0x7e4);
          local_398 = *(void*)(local_b8 + 4);
          local_148 = uVar30;
          local_90 = pfVar49;
          FUN_015c1480(0,0x7e4);
          pfVar49 = local_88;
          uVar30 = local_148;
          puVar43 = *(void**)(pfVar54 + 4);
          if ((local_188 < &g_00001f90 + (int64_t)puVar43) &&
             (puVar43 < &g_00001f90 + (int64_t)pfVar47 + uVar45)) {
            lVar17 = 0;
          }
          else {
            lVar17 = 0xc;
            do {
              pfVar54 = (float *)(puVar43 + lVar17 * 4 + -0x30);
              pfVar4 = (float *)(puVar43 + lVar17 * 4 + -0x20);
              pfVar1 = pfVar47 + uVar29 * 4 + lVar17 + -0xc;
              auVar82._0_4_ = *pfVar1 - *pfVar54;
              auVar82._4_4_ = pfVar1[1] - pfVar54[1];
              auVar82._8_4_ = pfVar1[2] - pfVar54[2];
              auVar82._12_4_ = pfVar1[3] - pfVar54[3];
              pfVar54 = pfVar47 + uVar29 * 4 + lVar17 + -8;
              auVar66._0_4_ = *pfVar54 - *pfVar4;
              auVar66._4_4_ = pfVar54[1] - pfVar4[1];
              auVar66._8_4_ = pfVar54[2] - pfVar4[2];
              auVar66._12_4_ = pfVar54[3] - pfVar4[3];
              pfVar54 = pfVar47 + uVar29 * 4 + lVar17 + -4;
              fVar67 = *pfVar54;
              fVar59 = pfVar54[1];
              fVar69 = pfVar54[2];
              fVar68 = pfVar54[3];
              pfVar54 = pfVar47 + uVar29 * 4 + lVar17;
              fVar87 = pfVar54[1];
              fVar84 = pfVar54[2];
              fVar85 = pfVar54[3];
              auVar93 = maxps(ZEXT816(0),auVar82);
              auVar83 = maxps(ZEXT816(0),auVar66);
              *(uint8_t (*) [16])(pfVar47 + uVar29 * 4 + lVar17 + -0xc) = auVar93;
              *(uint8_t (*) [16])(pfVar47 + uVar29 * 4 + lVar17 + -8) = auVar83;
              pfVar4 = (float *)(puVar43 + lVar17 * 4 + -0x10);
              auVar76._0_4_ = fVar67 - *pfVar4;
              auVar76._4_4_ = fVar59 - pfVar4[1];
              auVar76._8_4_ = fVar69 - pfVar4[2];
              auVar76._12_4_ = fVar68 - pfVar4[3];
              pfVar4 = (float *)(puVar43 + lVar17 * 4);
              auVar95._0_4_ = *pfVar54 - *pfVar4;
              auVar95._4_4_ = fVar87 - pfVar4[1];
              auVar95._8_4_ = fVar84 - pfVar4[2];
              auVar95._12_4_ = fVar85 - pfVar4[3];
              auVar83 = maxps(ZEXT816(0),auVar76);
              auVar93 = maxps(ZEXT816(0),auVar95);
              *(uint8_t (*) [16])(pfVar47 + uVar29 * 4 + lVar17 + -4) = auVar83;
              *(uint8_t (*) [16])(pfVar47 + uVar29 * 4 + lVar17) = auVar93;
              lVar17 = lVar17 + 0x10;
            } while (lVar17 != 0x7ec);
            lVar17 = 0x7e0;
          }
          do {
            fVar67 = 0.0;
            if (0.0 <= (float)puVar55[uVar29 * 4 + lVar17 + -1] - *(float *)(puVar43 + lVar17 * 4))
            {
              fVar67 = (float)puVar55[uVar29 * 4 + lVar17 + -1] - *(float *)(puVar43 + lVar17 * 4);
            }
            puVar55[uVar29 * 4 + lVar17 + -1] = fVar67;
            fVar67 = 0.0;
            if (0.0 <= (float)puVar55[uVar29 * 4 + lVar17] - *(float *)(puVar43 + lVar17 * 4 + 4)) {
              fVar67 = (float)puVar55[uVar29 * 4 + lVar17] - *(float *)(puVar43 + lVar17 * 4 + 4);
            }
            puVar55[uVar29 * 4 + lVar17] = fVar67;
            lVar17 = lVar17 + 2;
          } while (lVar17 != 0x7e4);
          if (local_90 != (float *)0x0) {
            FUN_00d50b20();
          }
          lVar53 = lVar53 + 1;
          uVar29 = (uint64_t)(int)*local_e0;
          uVar30 = (uint64_t)((int)uVar30 + 0x1f9);
          pfVar47 = local_80;
        } while (lVar53 < (int64_t)uVar29);
LAB_014971f3:
        lVar53 = 0;
        do {
          uVar46 = (uint)uVar29;
          if (0 < (int)uVar46) {
            lVar17 = *(int64_t *)(pfVar49 + 4);
            if ((uVar29 & 0xffffffff) - 1 < 3) {
              uVar29 = 0;
            }
            else {
              uVar29 = 0;
              puVar55 = pfVar47;
              do {
                *(void*)(lVar17 + uVar29 * 4) = *puVar55;
                *(void*)(lVar17 + 4 + uVar29 * 4) = puVar55[0x7e4];
                *(void*)(lVar17 + 8 + uVar29 * 4) = puVar55[0xfc8];
                *(void*)(lVar17 + 0xc + uVar29 * 4) = puVar55[0x17ac];
                uVar29 = uVar29 + 4;
                puVar55 = puVar55 + 0x1f90;
              } while ((uVar46 & 0xfffffffc) != uVar29);
            }
            if ((uint64_t)(uVar46 & 3) != 0) {
              puVar55 = pfVar47 + uVar29 * 0x7e4;
              uVar30 = 0;
              do {
                *(void*)(lVar17 + uVar29 * 4 + uVar30 * 4) = *puVar55;
                uVar30 = uVar30 + 1;
                puVar55 = puVar55 + 0x7e4;
              } while ((uVar46 & 3) != uVar30);
            }
          }
          local_390 = *(void*)(pfVar49 + 4);
          FUN_015c15b0(1);
          pfVar54 = local_80;
          fVar67 = *local_e0;
          uVar29 = (uint64_t)(uint)fVar67;
          if (0 < (int)fVar67) {
            lVar17 = *(int64_t *)(pfVar49 + 4);
            if (uVar29 - 1 < 3) {
              uVar30 = 0;
            }
            else {
              uVar30 = 0;
              puVar55 = pfVar47;
              do {
                *puVar55 = *(void*)(lVar17 + uVar30 * 4);
                puVar55[0x7e4] = *(void*)(lVar17 + 4 + uVar30 * 4);
                puVar55[0xfc8] = *(void*)(lVar17 + 8 + uVar30 * 4);
                puVar55[0x17ac] = *(void*)(lVar17 + 0xc + uVar30 * 4);
                uVar30 = uVar30 + 4;
                puVar55 = puVar55 + 0x1f90;
              } while (((uint)fVar67 & 0xfffffffc) != uVar30);
            }
            if ((uint64_t)((uint)fVar67 & 3) != 0) {
              puVar55 = pfVar47 + uVar30 * 0x7e4;
              uVar45 = 0;
              do {
                *puVar55 = *(void*)(lVar17 + uVar30 * 4 + uVar45 * 4);
                puVar55 = puVar55 + 0x7e4;
                uVar45 = uVar45 + 1;
              } while (((uint)fVar67 & 3) != uVar45);
            }
          }
          lVar53 = lVar53 + 1;
          pfVar47 = pfVar47 + 1;
        } while (lVar53 != 0x681);
        lVar53 = *(int64_t *)(this_ptr + 0x5e);
        if (0 < *(int *)(lVar53 + 0xc)) {
          lVar17 = 0;
          do {
            pfVar47 = *(float **)(*(int64_t *)(lVar53 + 0x10) + lVar17 * 8);
            if (local_68 == pfVar47) {
              if (((char)local_38 == '\0') && (local_68 != (float *)0x0)) {
                local_38 = (float *)CONCAT71((int7)((uint64_t)local_68 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              pfVar49 = local_68;
              if (pfVar47 != (float *)0x0) {
                pfVar49 = (float *)FUN_00d50b00();
              }
              if (((char)local_38 == '\0') || (local_68 == (float *)0x0)) {
                local_38 = (float *)CONCAT71((int7)((uint64_t)pfVar49 >> 8),1);
                local_68 = pfVar47;
              }
              else {
                uVar16 = FUN_00d50b20();
                local_38 = (float *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                local_68 = pfVar47;
              }
            }
            local_68[0x12] =
                 pfVar54[(int64_t)(int)local_68[0x14] + (int64_t)(int)local_68[3] * 0x7e4] *
                 g_02390128;
            lVar17 = lVar17 + 1;
            lVar53 = *(int64_t *)(this_ptr + 0x5e);
          } while (lVar17 < *(int *)(lVar53 + 0xc));
          if (0 < *(int *)(lVar53 + 0xc)) {
            lVar17 = 0;
            do {
              lVar53 = *(int64_t *)(lVar53 + 0x10);
              pfVar47 = *(float **)(lVar53 + lVar17 * 8);
              cVar51 = (char)((uint64_t)local_38 & 0xffffffff);
              if (local_68 == pfVar47) {
                local_38 = (float *)((uint64_t)local_38 & 0xffffffff);
                if (cVar51 == '\0') {
                  local_38 = (float *)CONCAT71((int7)((uint64_t)lVar53 >> 8),1);
                  FUN_00d50b00();
                }
              }
              else {
                if (pfVar47 != (float *)0x0) {
                  lVar53 = FUN_00d50b00();
                }
                local_38 = (float *)CONCAT71((int7)((uint64_t)lVar53 >> 8),1);
                local_68 = pfVar47;
                if (cVar51 != '\0') {
                  FUN_00d50b20();
                }
              }
              uVar29 = (uint64_t)((int)local_68[0x14] - 0x14);
              if ((int)local_68[0x14] < 0x14) {
                uVar29 = 0;
              }
              local_388 = local_80 + (int64_t)(int)local_68[3] * 0x7e4 + uVar29;
              FUN_015b32a0(0,&local_48);
              fVar67 = (float)FUN_00e83930(&local_140,(uint64_t)local_48 & 0xffffffff);
              fVar67 = (fVar67 + (float)(int)uVar29) / g_02391094 + g_0239423c;
              uVar46 = -(uint)((float)((uint)(fVar67 - local_68[5]) & g_02390140) < g_0240e32c)
              ;
              local_68[0x13] = (float)(~uVar46 & (uint)local_68[5] | (uint)fVar67 & uVar46);
              lVar17 = lVar17 + 1;
              lVar53 = *(int64_t *)(this_ptr + 0x5e);
            } while (lVar17 < *(int *)(lVar53 + 0xc));
          }
        }
        FUN_00e83070();
        pfVar47 = local_88;
        auVar26 = local_a8;
        if (local_b8 != (float *)0x0) {
          FUN_00d50b20();
        }
        if (pfVar47 != (float *)0x0) {
          FUN_00d50b20();
        }
        if (auVar26 != (uint8_t  [8])0x0) {
          FUN_00d50b20();
        }
        puVar22 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar22 = local_248;
        (*local_250)();
        pfVar47 = (float *)FUN_00e8fc40();
        FUN_00d4ff40();
        *(void**)pfVar47 = local_248;
        (*local_250)();
        local_a8 = (uint8_t  [8])puVar22;
        lVar53 = *(int64_t *)(this_ptr + 0x5e);
        local_1b8 = pfVar47;
        if (0 < *(int *)(lVar53 + 0xc)) {
          lVar17 = 0;
          do {
            lVar53 = *(int64_t *)(lVar53 + 0x10);
            pfVar47 = *(float **)(lVar53 + lVar17 * 8);
            if (local_68 == pfVar47) {
              if (((char)local_38 == '\0') && (local_68 != (float *)0x0)) {
                local_38 = (float *)CONCAT71((int7)((uint64_t)lVar53 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if (pfVar47 != (float *)0x0) {
                lVar53 = FUN_00d50b00();
              }
              if (((char)local_38 == '\0') || (local_68 == (float *)0x0)) {
                local_38 = (float *)CONCAT71((int7)((uint64_t)lVar53 >> 8),1);
                local_68 = pfVar47;
              }
              else {
                uVar16 = FUN_00d50b20();
                local_38 = (float *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                local_68 = pfVar47;
              }
            }
            local_320 = local_68;
            local_318 = '\0';
            FUN_014f9d00();
            pfVar47 = local_140;
            if (local_138 == '\0') {
              if (local_140 != (float *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_138 = '\0';
            }
            local_48 = pfVar47;
            local_40 = '\0';
            FUN_00d21140();
            if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
              FUN_00d50b20();
            }
            if (pfVar47 != (float *)0x0) {
              FUN_00d50b20();
            }
            if ((local_138 != '\0') && (local_140 != (float *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_318 != '\0') && (local_320 != (float *)0x0)) {
              FUN_00d50b20();
            }
            lVar17 = lVar17 + 1;
            lVar53 = *(int64_t *)(this_ptr + 0x5e);
          } while (lVar17 < *(int *)(lVar53 + 0xc));
        }
        auVar26 = local_a8;
        local_310 = (uint64_t)local_a8;
        local_308 = '\0';
        FUN_014f7330();
        local_1f0 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != (float *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
             (local_48 != (float *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_308 != '\0') && (local_310 != 0)) {
          FUN_00d50b20();
        }
        if ((int)local_1f0[3] < 1) {
          local_80 = (float *)0x0;
          lVar53 = 0;
          local_c0 = (float *)0x0;
        }
        else {
          lVar17 = 0;
          local_c0 = (float *)0x0;
          local_80 = (float *)0x0;
          do {
            lVar53 = *(int64_t *)(*(int64_t *)(local_1f0 + 4) + lVar17 * 8);
            pfVar47 = local_1f0;
            if (lVar53 != 0) {
              FUN_00d50b00();
            }
            pVar28 = (void*)pfVar47;
            local_300 = *(int64_t *)(this_ptr + 0x18);
            local_2f8 = '\0';
            FUN_014f6f10();
            pfVar47 = local_140;
            local_290 = 0;
            if (local_138 == '\0') {
              if (local_140 != (float *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_138 = '\0';
            }
            local_290 = '\x01';
            local_298 = pfVar47;
            uVar16 = FUN_014ef210();
            pfVar49 = local_48;
            uVar27 = (undefined7)((uint64_t)pfVar47 >> 8);
            if (local_48 == local_80) {
              if (((char)local_c0 == '\0') && (local_48 != (float *)0x0)) {
                pfVar49 = local_80;
                if (local_40 != '\0') goto LAB_014979e3;
                uVar29 = CONCAT71(uVar27,1);
                FUN_00d50b00();
              }
              else {
                uVar29 = (uint64_t)local_c0 & 0xffffffff;
              }
LAB_01497a50:
              if ((local_40 == '\0') || (local_48 == (float *)0x0)) {
                local_c0 = (float *)(uVar29 & 0xffffffff);
              }
              else {
                FUN_00d50b20();
                local_c0 = (float *)(uVar29 & 0xffffffff);
              }
            }
            else {
              if (local_40 == '\0') {
                if (local_48 != (float *)0x0) {
                  FUN_00d50b00();
                }
                uVar29 = CONCAT71(uVar27,1);
                if (((char)local_c0 == '\0') || (local_80 == (float *)0x0)) {
                  local_80 = pfVar49;
                }
                else {
                  FUN_00d50b20();
                  local_80 = pfVar49;
                }
                goto LAB_01497a50;
              }
              if (((char)local_c0 != '\0') && (local_80 != (float *)0x0)) {
                uVar16 = FUN_00d50b20();
              }
LAB_014979e3:
              local_40 = '\0';
              local_c0 = (float *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
              local_80 = pfVar49;
            }
            if ((local_290 != '\0') && (local_298 != (float *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_138 != '\0') && (local_140 != (float *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_2f8 != '\0') && (local_300 != 0)) {
              FUN_00d50b20();
            }
            pvVar15 = _pthread_getspecific(pVar28);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014c2a40();
            if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
              FUN_00d50b20();
            }
            local_48 = local_80;
            local_40 = '\0';
            FUN_00d21140();
            if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar53 != 0) {
              FUN_00d50b20();
            }
            lVar17 = lVar17 + 1;
            lVar53 = (int64_t)(int)local_1f0[3];
          } while (lVar17 < lVar53);
        }
        if (auVar26 == (uint8_t  [8])0x0) {
          local_230 = (float *)CONCAT71((int7)((uint64_t)lVar53 >> 8),1);
        }
        else {
          FUN_00d50b20();
          local_230 = (float *)0x0;
        }
        local_108 = (void*)0x0;
        local_280 = CONCAT71(local_280._1_7_,auVar26 != (uint8_t  [8])0x0);
        if ((int)*local_e0 < 1) {
          uVar58 = (uint32_t)local_78;
        }
        else {
          lVar53 = 0;
          pfVar47 = local_f8;
          do {
            pfVar49 = *(float **)(*(int64_t *)(local_130 + 4) + lVar53 * 8);
            uVar27 = (undefined7)((uint64_t)auVar26 >> 8);
            local_f8 = pfVar47;
            if (pfVar47 == pfVar49) {
              if ((char)local_78 == '\0') {
                if (pfVar47 == (float *)0x0) {
                  auVar26 = (uint8_t  [8])(local_78 & 0xffffffff);
                }
                else {
                  auVar26 = (uint8_t  [8])CONCAT71(uVar27,1);
                  local_78 = local_78 & 0xffffffff00000000;
                  FUN_00d50b00();
                }
              }
              else {
                auVar26 = (uint8_t  [8])(local_78 & 0xffffffff);
              }
            }
            else {
              if (pfVar49 != (float *)0x0) {
                FUN_00d50b00();
              }
              auVar26 = (uint8_t  [8])CONCAT71(uVar27,1);
              pfVar47 = pfVar49;
              if (((char)local_78 != '\0') && (local_f8 != (float *)0x0)) {
                local_f8 = pfVar49;
                FUN_00d50b20();
              }
            }
            FUN_00d216c0();
            lVar53 = lVar53 + 1;
            uVar58 = SUB84(auVar26,0);
            local_78 = CONCAT44(local_78._4_4_,uVar58);
            local_f8 = pfVar47;
          } while (lVar53 < (int)*local_e0);
        }
        fVar67 = local_1b8[3];
        if ((int)fVar67 < 1) {
          local_88 = (float *)0x0;
          local_100 = (void *)0x0;
        }
        else {
          lVar53 = 0;
          local_88 = (float *)0x0;
          local_78 = CONCAT44(local_78._4_4_,uVar58);
          pvVar15 = (void *)0x0;
          do {
            lVar17 = *(int64_t *)(local_1b8 + 4);
            pfVar47 = *(float **)(lVar17 + lVar53 * 8);
            pfVar49 = local_1b8;
            if (local_80 == pfVar47) {
              if (((char)local_c0 == '\0') && (local_80 != (float *)0x0)) {
                local_c0 = (float *)CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if (pfVar47 != (float *)0x0) {
                lVar17 = FUN_00d50b00();
              }
              if (((char)local_c0 == '\0') || (local_80 == (float *)0x0)) {
                local_c0 = (float *)CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                local_80 = pfVar47;
              }
              else {
                local_80 = pfVar47;
                uVar16 = FUN_00d50b20();
                local_c0 = (float *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
              }
            }
            pvVar25 = _pthread_getspecific((void*)pfVar49);
            if (pvVar25 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar16 = FUN_014c2a40();
            pfVar47 = local_48;
            uVar27 = (undefined7)((uint64_t)uVar16 >> 8);
            cVar51 = (char)pvVar15;
            if (local_48 == local_88) {
              local_100 = pvVar15;
              pfVar47 = local_88;
              if ((cVar51 == '\0') && (local_48 != (float *)0x0)) {
                local_100 = (void *)CONCAT71(uVar27,1);
                if (local_40 == '\0') {
                  local_100 = (void *)CONCAT71(uVar27,1);
                  FUN_00d50b00();
                  pfVar47 = local_88;
                  goto joined_r0x01497ec8;
                }
              }
              else {
joined_r0x01497ec8:
                local_88 = pfVar47;
                if (local_40 == '\0') {
                  fVar67 = *(float *)((int64_t)local_88 + 0xc);
                  goto joined_r0x0149809f;
                }
                if (local_48 != (float *)0x0) {
                  FUN_00d50b20();
                  goto LAB_01497ee4;
                }
              }
              fVar67 = local_88[3];
            }
            else {
              if (local_40 == '\0') {
                if (local_48 != (float *)0x0) {
                  uVar16 = FUN_00d50b00();
                }
                local_100 = (void *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                if ((cVar51 != '\0') && (local_88 != (float *)0x0)) {
                  FUN_00d50b20();
                }
                goto joined_r0x01497ec8;
              }
              local_100 = (void *)CONCAT71(uVar27,1);
              if ((cVar51 == '\0') || (local_88 == (float *)0x0)) {
                fVar67 = local_48[3];
                local_88 = local_48;
              }
              else {
                FUN_00d50b20();
                local_88 = pfVar47;
LAB_01497ee4:
                fVar67 = local_88[3];
              }
            }
joined_r0x0149809f:
            if (0 < (int)fVar67) {
              lVar17 = 0;
              do {
                lVar18 = *(int64_t *)(local_88 + 4);
                pfVar47 = *(float **)(lVar18 + lVar17 * 8);
                if (local_68 == pfVar47) {
                  if (((char)local_38 == '\0') && (local_68 != (float *)0x0)) {
                    local_38 = (float *)CONCAT71((int7)((uint64_t)lVar18 >> 8),1);
                    FUN_00d50b00();
                  }
                }
                else {
                  if (pfVar47 != (float *)0x0) {
                    lVar18 = FUN_00d50b00();
                  }
                  if (((char)local_38 == '\0') || (local_68 == (float *)0x0)) {
                    local_38 = (float *)CONCAT71((int7)((uint64_t)lVar18 >> 8),1);
                    local_68 = pfVar47;
                  }
                  else {
                    uVar16 = FUN_00d50b20();
                    local_38 = (float *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                    local_68 = pfVar47;
                  }
                }
                lVar18 = (int64_t)(int)local_68[3];
                pfVar47 = *(float **)(*(int64_t *)(local_130 + 4) + lVar18 * 8);
                if (local_f8 == pfVar47) {
                  if (((char)local_78 == '\0') && (local_f8 != (float *)0x0)) {
                    local_78 = CONCAT44(local_78._4_4_,
                                        (int)CONCAT71((int7)(int3)((uint)local_68[3] >> 8),1));
                    FUN_00d50b00();
                  }
                }
                else {
                  if (pfVar47 != (float *)0x0) {
                    lVar18 = FUN_00d50b00();
                  }
                  if (((char)local_78 == '\0') || (local_f8 == (float *)0x0)) {
                    local_78 = CONCAT44(local_78._4_4_,
                                        (int)CONCAT71((int7)((uint64_t)lVar18 >> 8),1));
                    local_f8 = pfVar47;
                  }
                  else {
                    local_f8 = pfVar47;
                    uVar16 = FUN_00d50b20();
                    local_78 = CONCAT44(local_78._4_4_,
                                        (int)CONCAT71((int7)((uint64_t)uVar16 >> 8),1));
                  }
                }
                local_48 = local_68;
                local_40 = '\0';
                FUN_00d21140();
                if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
                  FUN_00d50b20();
                }
                lVar17 = lVar17 + 1;
              } while (lVar17 < (int)local_88[3]);
            }
            lVar53 = lVar53 + 1;
            fVar67 = local_1b8[3];
            pvVar15 = local_100;
          } while (lVar53 < (int)fVar67);
          uVar58 = (uint32_t)local_78;
        }
        pfVar54 = local_1d8;
        if ((int)fVar67 < 1) {
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uStack_a0;
          _local_a8 = auVar13 << 0x40;
          local_78 = CONCAT44(local_78._4_4_,uVar58);
          local_90 = (float *)0x0;
          pfVar47 = (float *)0x0;
          local_150 = (void*)0x0;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = local_d8._8_8_;
          local_d8 = auVar14 << 0x40;
          local_188 = (void*)0x0;
        }
        else {
          local_1f4 = 0.0;
          pfVar47 = (float *)0x0;
          local_188 = (void*)0x0;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = local_d8._8_8_;
          local_d8 = auVar11 << 0x40;
          local_158 = (void*)0x0;
          local_b8 = (float *)0x0;
          local_90 = (float *)0x0;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uStack_a0;
          _local_a8 = auVar12 << 0x40;
          local_78 = CONCAT44(local_78._4_4_,uVar58);
          do {
            pfVar49 = *(float **)(local_1b8 + 4);
            pfVar4 = *(float **)(pfVar49 + (int64_t)pfVar47 * 2);
            auVar26 = (uint8_t  [8])local_1b8;
            local_220 = pfVar47;
            if (local_80 == pfVar4) {
              if (((char)local_c0 == '\0') && (local_80 != (float *)0x0)) {
                local_c0 = (float *)CONCAT71((int7)((uint64_t)pfVar49 >> 8),1);
                pfVar49 = (float *)FUN_00d50b00();
              }
            }
            else {
              if (pfVar4 != (float *)0x0) {
                pfVar49 = (float *)FUN_00d50b00();
              }
              if (((char)local_c0 == '\0') || (local_80 == (float *)0x0)) {
                pfVar49 = (float *)CONCAT71((int7)((uint64_t)pfVar49 >> 8),1);
                local_c0 = pfVar49;
                local_80 = pfVar4;
              }
              else {
                local_80 = pfVar4;
                uVar16 = FUN_00d50b20();
                pfVar49 = (float *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                local_c0 = pfVar49;
              }
            }
            local_148 = CONCAT44(local_148._4_4_,(int)CONCAT71((int7)((uint64_t)pfVar49 >> 8),1));
LAB_014981f0:
            pVar28 = SUB84(auVar26,0);
            uVar46 = (uint)local_90;
            bVar57 = true;
            if ((char)local_148 != '\0') goto LAB_0149893c;
LAB_0149820a:
            pfVar47 = (float *)((uint64_t)local_90 & 0xffffffff);
            pvVar15 = _pthread_getspecific(SUB84(auVar26,0));
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar16 = FUN_014c3620();
            auVar26 = (uint8_t  [8])local_48;
            uVar27 = (undefined7)((uint64_t)uVar16 >> 8);
            cVar51 = (char)pfVar47;
            if ((uint8_t  [8])local_48 == local_a8) {
              local_90 = pfVar47;
              if ((cVar51 == '\0') && (local_48 != (float *)0x0)) {
                local_90 = (float *)CONCAT71(uVar27,1);
                if (local_40 == '\0') {
                  local_90 = (float *)CONCAT71(uVar27,1);
                  FUN_00d50b00();
                  goto joined_r0x0149831e;
                }
              }
              else {
joined_r0x0149831e:
                if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
                  FUN_00d50b20();
                  auVar26 = local_a8;
                  goto LAB_01498367;
                }
              }
              auVar26 = local_a8;
            }
            else {
              if (local_40 == '\0') {
                if (local_48 != (float *)0x0) {
                  uVar16 = FUN_00d50b00();
                }
                local_90 = (float *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                if ((cVar51 == '\0') || (local_a8 == (uint8_t  [8])0x0)) {
                  local_a8 = auVar26;
                }
                else {
                  FUN_00d50b20();
                  local_a8 = auVar26;
                }
                goto joined_r0x0149831e;
              }
              local_90 = (float *)CONCAT71(uVar27,1);
              if ((cVar51 != '\0') && (local_a8 != (uint8_t  [8])0x0)) {
                FUN_00d50b20();
              }
            }
LAB_01498367:
            local_a8 = auVar26;
            iVar52 = (int)*(float *)((int64_t)auVar26 + 0xc) + 1;
            if (iVar52 < (int)*local_e0) {
              do {
                if (bVar57) {
                  local_1f4 = *(float *)((int64_t)auVar26 + 0x20) * g_0240e2f0;
                }
                lVar53 = *(int64_t *)(local_130 + 4);
                pfVar47 = *(float **)(lVar53 + (int64_t)iVar52 * 8);
                if (local_f8 == pfVar47) {
                  if (((char)local_78 == '\0') && (local_f8 != (float *)0x0)) {
                    local_78._4_4_ = (uint)(local_78 >> 0x20);
                    local_78 = CONCAT44(local_78._4_4_,
                                        (int)CONCAT71((int7)((uint64_t)lVar53 >> 8),1));
                    FUN_00d50b00();
                  }
LAB_01498430:
                  fVar67 = local_f8[3];
                }
                else {
                  if (pfVar47 != (float *)0x0) {
                    lVar53 = FUN_00d50b00();
                  }
                  if (((char)local_78 != '\0') && (local_f8 != (float *)0x0)) {
                    local_f8 = pfVar47;
                    uVar16 = FUN_00d50b20();
                    local_78 = CONCAT44(local_78._4_4_,
                                        (int)CONCAT71((int7)((uint64_t)uVar16 >> 8),1));
                    goto LAB_01498430;
                  }
                  local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71((int7)((uint64_t)lVar53 >> 8),1)
                                     );
                  fVar67 = pfVar47[3];
                  local_f8 = pfVar47;
                }
                if (0 < (int)fVar67) {
                  lVar53 = 0;
                  do {
                    lVar17 = *(int64_t *)(local_f8 + 4);
                    pfVar47 = *(float **)(lVar17 + lVar53 * 8);
                    auVar26 = (uint8_t  [8])local_f8;
                    if (local_68 == pfVar47) {
                      if (((char)local_38 == '\0') && (local_68 != (float *)0x0)) {
                        local_38 = (float *)CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                        FUN_00d50b00();
                      }
                    }
                    else {
                      if (pfVar47 != (float *)0x0) {
                        lVar17 = FUN_00d50b00();
                      }
                      if (((char)local_38 == '\0') || (local_68 == (float *)0x0)) {
                        local_38 = (float *)CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                        local_68 = pfVar47;
                      }
                      else {
                        uVar16 = FUN_00d50b20();
                        local_38 = (float *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                        local_68 = pfVar47;
                      }
                    }
                    puVar55 = local_158;
                    pfVar54 = local_1d8;
                    if ((float)((uint)(local_68[5] - *(float *)((int64_t)local_a8 + 0x14)) &
                               g_02390140) < g_02390438) goto joined_r0x01498b22;
                    lVar53 = lVar53 + 1;
                  } while (lVar53 < (int)local_f8[3]);
                }
                uVar16 = FUN_014eea90();
                pfVar21 = local_48;
                pfVar54 = local_1d8;
                uVar27 = (undefined7)((uint64_t)uVar16 >> 8);
                if (local_48 == local_b8) {
                  local_150 = local_158;
                  pfVar21 = local_b8;
                  if (((char)local_158 == '\0') && (local_48 != (float *)0x0)) {
                    local_150 = (void*)CONCAT71(uVar27,1);
                    if (local_40 != '\0') goto LAB_0149867e;
                    local_150 = (void*)CONCAT71(uVar27,1);
                    FUN_00d50b00();
                    pfVar21 = local_b8;
                  }
joined_r0x01498642:
                  local_b8 = pfVar21;
                  if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (local_40 == '\0') {
                    if (local_48 != (float *)0x0) {
                      uVar16 = FUN_00d50b00();
                    }
                    local_150 = (void*)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                    if (((char)local_158 != '\0') && (local_b8 != (float *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto joined_r0x01498642;
                  }
                  local_150 = (void*)CONCAT71(uVar27,1);
                  if (((char)local_158 == '\0') || (local_b8 == (float *)0x0)) {
                    local_b8 = local_48;
                  }
                  else {
                    FUN_00d50b20();
                    local_b8 = pfVar21;
                  }
                }
LAB_0149867e:
                lVar53 = *(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10);
                lVar17 = *(int64_t *)(lVar53 + (int64_t)iVar52 * 8);
                if (local_d8._0_8_ == lVar17) {
                  if (((char)local_188 == '\0') && (local_d8._0_8_ != 0)) {
                    local_188 = (void*)CONCAT71((int7)((uint64_t)lVar53 >> 8),1);
                    FUN_00d50b00();
                  }
                }
                else {
                  if (lVar17 != 0) {
                    lVar53 = FUN_00d50b00();
                  }
                  if (((char)local_188 == '\0') || (local_d8._0_8_ == 0)) {
                    local_d8._0_8_ = lVar17;
                    local_188 = (void*)CONCAT71((int7)((uint64_t)lVar53 >> 8),1);
                  }
                  else {
                    local_d8._0_8_ = lVar17;
                    uVar16 = FUN_00d50b20();
                    local_188 = (void*)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                  }
                }
                uVar16 = FUN_015c6b60();
                FUN_015c66c0();
                auVar26 = (uint8_t  [8])FUN_015c6ba0();
                pfVar21 = local_228;
                FUN_014eecb0(auVar26,uVar16);
                if (*(char *)(*(int64_t *)(this_ptr + 0x18) + 0xac) == '\0') {
LAB_014987c7:
                  puVar55 = local_150;
                  if ((local_b8[8] < *(float *)((int64_t)local_a8 + 0x20) * g_0240e2f0) &&
                     (puVar55 = local_150, local_b8[8] < local_1f4)) goto LAB_014987f6;
joined_r0x01498b22:
                  local_158 = puVar55;
                  uVar29 = local_148 & 1;
                  local_148 = local_148 & 0xffffffff00000000;
                  if (uVar29 != 0) goto LAB_014981f0;
                  break;
                }
                fVar67 = local_b8[3];
                auVar26 = (uint8_t  [8])
                          (uint64_t)((int)fVar67 - ((int)fVar67 >> 0x1f) & 0xfffffffe);
                if ((int)fVar67 % 2 == 1) goto LAB_014987c7;
LAB_014987f6:
                FUN_014eed60();
                pfVar47 = local_b8;
                fVar67 = this_ptr[0x68];
                this_ptr[0x68] = (float)((int)fVar67 + 1);
                local_b8[0x15] = (float)((int)fVar67 + 1);
                fVar59 = local_b8[8] / *(float *)((int64_t)local_a8 + 0x20);
                fVar67 = g_02390d34;
                if (fVar59 <= g_02390d34) {
                  fVar67 = fVar59;
                }
                local_b8[10] = *(float *)((int64_t)local_a8 + 0x28) * fVar67;
                fVar67 = fVar67 * *(float *)((int64_t)local_a8 + 0x58);
                fVar59 = g_02394274;
                if (g_02394274 <= fVar67) {
                  fVar59 = fVar67;
                }
                local_b8[0x16] = fVar59;
                auVar26 = (uint8_t  [8])this_ptr;
                pvVar15 = _pthread_getspecific((void*)this_ptr);
                if ((pvVar15 != (void *)0x0) && (lVar53 = FUN_00e8b990(), lVar53 != 0)) {
                  auVar26 = (uint8_t  [8])local_80;
                }
                local_2f0 = pfVar47;
                local_2e8 = '\0';
                FUN_014c2e20();
                if ((local_2e8 != '\0') && (local_2f0 != (float *)0x0)) {
                  FUN_00d50b20();
                }
                local_48 = pfVar47;
                local_40 = '\0';
                FUN_00d21140();
                if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
                  FUN_00d50b20();
                }
                pVar28 = SUB84(auVar26,0);
                bVar57 = false;
                uVar46 = (uint)local_90;
                local_158 = local_150;
                if ((local_148 & 1) == 0) goto LAB_0149820a;
LAB_0149893c:
                pvVar15 = _pthread_getspecific(pVar28);
                if (pvVar15 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar16 = FUN_014c35c0();
                auVar26 = (uint8_t  [8])local_48;
                uVar27 = (undefined7)((uint64_t)uVar16 >> 8);
                cVar51 = (char)uVar46;
                if ((uint8_t  [8])local_48 == local_a8) {
                  if ((cVar51 == '\0') && (local_a8 != (uint8_t  [8])0x0)) {
                    local_90 = (float *)CONCAT71(uVar27,1);
                    if (local_40 == '\0') {
                      local_90 = (float *)CONCAT71(uVar27,1);
                      FUN_00d50b00();
                      goto joined_r0x01498a5e;
                    }
                  }
                  else {
                    local_90 = (float *)(uint64_t)uVar46;
joined_r0x01498a5e:
                    if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
                      FUN_00d50b20();
                      auVar26 = local_a8;
                      goto LAB_01498aa7;
                    }
                  }
                  auVar26 = local_a8;
                }
                else {
                  if (local_40 == '\0') {
                    if (local_48 != (float *)0x0) {
                      uVar16 = FUN_00d50b00();
                    }
                    local_90 = (float *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                    if ((cVar51 == '\0') || (local_a8 == (uint8_t  [8])0x0)) {
                      local_a8 = auVar26;
                    }
                    else {
                      FUN_00d50b20();
                      local_a8 = auVar26;
                    }
                    goto joined_r0x01498a5e;
                  }
                  local_90 = (float *)CONCAT71(uVar27,1);
                  if ((cVar51 != '\0') && (local_a8 != (uint8_t  [8])0x0)) {
                    FUN_00d50b20();
                  }
                }
LAB_01498aa7:
                local_a8 = auVar26;
                puVar55 = local_158;
                if ((int)*(float *)((int64_t)auVar26 + 0xc) < 1) goto joined_r0x01498b22;
                iVar52 = (int)*(float *)((int64_t)auVar26 + 0xc) + -1;
              } while( true );
            }
            pfVar47 = (float *)((int64_t)local_220 + 1);
            fVar67 = local_1b8[3];
          } while ((int64_t)pfVar47 < (int64_t)(int)fVar67);
          local_150 = local_158;
          pfVar47 = local_b8;
        }
        pfVar49 = *(float **)(this_ptr + 0x18);
        if ((*(char *)(pfVar49 + 0x2b) != '\0') && (0 < (int)fVar67)) {
          puVar55 = (void*)0x0;
          bVar57 = false;
          lVar53 = 0;
          local_148 = CONCAT44(local_148._4_4_,(int)local_100);
          local_b8 = pfVar47;
          do {
            lVar17 = *(int64_t *)(local_1b8 + 4);
            pfVar47 = *(float **)(lVar17 + (int64_t)puVar55 * 8);
            pfVar49 = local_1b8;
            local_158 = puVar55;
            if (local_80 == pfVar47) {
              if (((char)local_c0 == '\0') && (local_80 != (float *)0x0)) {
                local_c0 = (float *)CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if (pfVar47 != (float *)0x0) {
                lVar17 = FUN_00d50b00();
              }
              if (((char)local_c0 == '\0') || (local_80 == (float *)0x0)) {
                local_c0 = (float *)CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                local_80 = pfVar47;
              }
              else {
                local_80 = pfVar47;
                uVar16 = FUN_00d50b20();
                local_c0 = (float *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
              }
            }
            pvVar15 = _pthread_getspecific((void*)pfVar49);
            if (pvVar15 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar16 = FUN_014c2a40();
            pfVar47 = local_48;
            uVar27 = (undefined7)((uint64_t)uVar16 >> 8);
            if (local_48 == local_88) {
              if (((char)local_148 == '\0') && (local_48 != (float *)0x0)) {
                local_100 = (void *)CONCAT71(uVar27,1);
                pfVar47 = local_88;
                if (local_40 != '\0') goto LAB_01498dab;
                local_100 = (void *)CONCAT71(uVar27,1);
                FUN_00d50b00();
                pfVar47 = local_88;
              }
              else {
                local_100 = (void *)(local_148 & 0xffffffff);
                pfVar47 = local_88;
              }
joined_r0x01498d87:
              local_88 = pfVar47;
              pfVar47 = local_88;
              if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
                FUN_00d50b20();
                pfVar47 = local_88;
              }
            }
            else {
              if (local_40 == '\0') {
                if (local_48 != (float *)0x0) {
                  uVar16 = FUN_00d50b00();
                }
                local_100 = (void *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                if (((char)local_148 != '\0') && (local_88 != (float *)0x0)) {
                  FUN_00d50b20();
                }
                goto joined_r0x01498d87;
              }
              local_100 = (void *)CONCAT71(uVar27,1);
              if (((char)local_148 != '\0') && (local_88 != (float *)0x0)) {
                FUN_00d50b20();
              }
            }
LAB_01498dab:
            local_88 = pfVar47;
            if (0 < (int)pfVar47[3]) {
              lVar17 = 0;
              do {
                lVar18 = *(int64_t *)(local_88 + 4);
                pfVar47 = *(float **)(lVar18 + lVar17 * 8);
                if (local_68 == pfVar47) {
                  if (((char)local_38 == '\0') && (local_68 != (float *)0x0)) {
                    local_38 = (float *)CONCAT71((int7)((uint64_t)lVar18 >> 8),1);
                    FUN_00d50b00();
                  }
                }
                else {
                  if (pfVar47 != (float *)0x0) {
                    lVar18 = FUN_00d50b00();
                  }
                  if (((char)local_38 == '\0') || (local_68 == (float *)0x0)) {
                    local_38 = (float *)CONCAT71((int7)((uint64_t)lVar18 >> 8),1);
                    local_68 = pfVar47;
                  }
                  else {
                    uVar16 = FUN_00d50b20();
                    local_38 = (float *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                    local_68 = pfVar47;
                  }
                }
                if ((lVar17 < (int64_t)(int)local_88[3] + -1) && (((uint)local_68[3] & 1) == 0)) {
                  lVar18 = *(int64_t *)(*(int64_t *)(local_88 + 4) + 8 + lVar17 * 8);
                  if (lVar53 == lVar18) {
                    if ((!bVar57) && (lVar53 != 0)) {
                      FUN_00d50b00();
                      lVar18 = lVar53;
                      goto LAB_01498ef0;
                    }
                    fVar67 = local_68[4];
                    if (!NAN(fVar67) && !NAN(fVar67)) goto LAB_01498efe;
                  }
                  else {
                    if (lVar18 != 0) {
                      FUN_00d50b00();
                    }
                    if ((bVar57) && (lVar53 != 0)) {
                      FUN_00d50b20();
                    }
LAB_01498ef0:
                    bVar57 = true;
                    fVar67 = local_68[4];
                    lVar53 = lVar18;
                    if (!NAN(fVar67)) {
LAB_01498efe:
                      if (!NAN(*(float *)(lVar53 + 0x10))) {
                        local_68[4] = (fVar67 + *(float *)(lVar53 + 0x10)) * g_0239011c;
                      }
                    }
                  }
                  fVar67 = g_0239011c;
                  local_68[5] = (local_68[5] + *(float *)(lVar53 + 0x14)) * g_0239011c;
                  local_68[6] = (local_68[6] + *(float *)(lVar53 + 0x18)) * fVar67;
                  local_68[7] = (local_68[7] + *(float *)(lVar53 + 0x1c)) * fVar67;
                  fVar67 = *(float *)(lVar53 + 0x58);
                  if (local_68[0x16] <= fVar67 && fVar67 != local_68[0x16]) {
                    local_68[0x16] = fVar67;
                  }
                }
                lVar17 = lVar17 + 1;
              } while (lVar17 < (int)local_88[3]);
            }
            pfVar47 = local_b8;
            pfVar54 = local_1d8;
            puVar55 = (void*)((int64_t)local_158 + 1);
            local_148 = CONCAT44(local_148._4_4_,(int)local_100);
          } while ((int64_t)puVar55 < (int64_t)(int)local_1b8[3]);
          pfVar49 = local_1b8;
          if ((bVar57) && (lVar53 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d216c0();
        sVar42 = (size_t)pfVar21;
        if (0 < (int)local_1b8[3]) {
          lVar53 = 0;
          do {
            lVar17 = *(int64_t *)(local_1b8 + 4);
            pfVar4 = *(float **)(lVar17 + lVar53 * 8);
            if (local_80 == pfVar4) {
              if (((char)local_c0 == '\0') && (local_80 != (float *)0x0)) {
                local_c0 = (float *)CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if (pfVar4 != (float *)0x0) {
                lVar17 = FUN_00d50b00();
              }
              if (((char)local_c0 == '\0') || (local_80 == (float *)0x0)) {
                local_c0 = (float *)CONCAT71((int7)((uint64_t)lVar17 >> 8),1);
                local_80 = pfVar4;
              }
              else {
                local_80 = pfVar4;
                uVar16 = FUN_00d50b20();
                local_c0 = (float *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
              }
            }
            pvVar15 = _pthread_getspecific((void*)pfVar49);
            if ((pvVar15 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              pfVar49 = local_80;
            }
            FUN_014c2a40();
            pfVar4 = local_140;
            if (local_138 == '\0') {
              if (local_140 != (float *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_138 = '\0';
            }
            local_48 = pfVar4;
            local_40 = '\0';
            FUN_00d214d0();
            if ((local_40 != '\0') && (local_48 != (float *)0x0)) {
              FUN_00d50b20();
            }
            if (pfVar4 != (float *)0x0) {
              FUN_00d50b20();
            }
            if ((local_138 != '\0') && (local_140 != (float *)0x0)) {
              FUN_00d50b20();
            }
            sVar42 = (size_t)pfVar21;
            lVar53 = lVar53 + 1;
          } while (lVar53 < (int)local_1b8[3]);
        }
        local_1b8 = (float *)0x0;
        FUN_00d50b20();
        if (((char)local_188 != '\0') && (local_d8._0_8_ != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_150 != '\0') && (pfVar47 != (float *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_90 != '\0') && (local_a8 != (uint8_t  [8])0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_100 != '\0') && (local_88 != (float *)0x0)) {
          FUN_00d50b20();
        }
        if (local_1f0 != (float *)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_c0 != '\0') && (local_80 != (float *)0x0)) {
          FUN_00d50b20();
        }
        bVar37 = (byte)local_280 | local_108 == (void*)0x0;
        local_280 = CONCAT71(local_280._1_7_,bVar37);
        if (bVar37 == 0) {
          FUN_00d50b20();
        }
        if (*(char *)(*(int64_t *)(this_ptr + 0x18) + 0xac) != '\0') {
          uVar29 = *(uint64_t *)(this_ptr + 0x26);
          uVar30 = (int64_t)local_268 * 2;
          pvVar15 = (void *)((uVar29 | (uint64_t)local_268) >> 0x20);
          if (pvVar15 == (void *)0x0) {
            uVar45 = (uVar29 & 0xffffffff) % (uVar30 & 0xffffffff);
            iVar52 = (int)((uVar29 & 0xffffffff) / (uVar30 & 0xffffffff));
          }
          else {
            uVar45 = (int64_t)uVar29 % (int64_t)uVar30;
            iVar52 = (int)((int64_t)uVar29 / (int64_t)uVar30);
          }
          fVar59 = (float)(iVar52 + 1);
          fVar67 = 1.4013e-45;
          if (0 < (int)fVar59) {
            fVar67 = fVar59;
          }
          lVar53 = FUN_00e83010(pvVar15,uVar45);
          _memcpy(pvVar15,(void *)((int64_t)(int)this_ptr[0x67] << 2),sVar42);
          FUN_00e83070();
          this_ptr[0x92] = 0.0;
          this_ptr[0x93] = 0.0;
          lVar17 = FUN_00e83010();
          *(int64_t *)(this_ptr + 0x92) = lVar17;
          fVar69 = this_ptr[0x67];
          iVar52 = (int)fVar69 + -1;
          if ((int)fVar59 < 2) {
            uVar29 = 0;
          }
          else {
            iVar33 = 2;
            uVar29 = 0;
            do {
              iVar38 = iVar33 + -2;
              if ((int)fVar69 <= iVar33 + -2) {
                iVar38 = iVar52;
              }
              *(void*)(lVar17 + uVar29 * 4) = *(void*)(lVar53 + (int64_t)iVar38 * 4);
              iVar38 = iVar52;
              if (iVar33 < (int)fVar69) {
                iVar38 = iVar33;
              }
              *(void*)(lVar17 + 4 + uVar29 * 4) =
                   *(void*)(lVar53 + (int64_t)iVar38 * 4);
              uVar29 = uVar29 + 2;
              iVar33 = iVar33 + 4;
            } while (((uint)fVar67 & 0x7ffffffe) != uVar29);
          }
          if (((uint)fVar67 & 1) != 0) {
            iVar33 = (int)uVar29 * 2;
            if (iVar33 < (int)fVar69) {
              iVar52 = iVar33;
            }
            *(void*)(lVar17 + uVar29 * 4) = *(void*)(lVar53 + (int64_t)iVar52 * 4);
          }
          FUN_00e83070();
          lVar53 = *(int64_t *)(this_ptr + 0x5e);
          if (0 < *(int *)(lVar53 + 0xc)) {
            iVar52 = 0;
            do {
              lVar53 = *(int64_t *)(lVar53 + 0x10);
              pfVar21 = *(float **)(lVar53 + (int64_t)iVar52 * 8);
              if (local_68 == pfVar21) {
                if (((char)local_38 == '\0') && (local_68 != (float *)0x0)) {
                  local_38 = (float *)CONCAT71((int7)((uint64_t)lVar53 >> 8),1);
                  FUN_00d50b00();
                }
              }
              else {
                if (pfVar21 != (float *)0x0) {
                  lVar53 = FUN_00d50b00();
                }
                if (((char)local_38 == '\0') || (local_68 == (float *)0x0)) {
                  local_38 = (float *)CONCAT71((int7)((uint64_t)lVar53 >> 8),1);
                  local_68 = pfVar21;
                }
                else {
                  uVar16 = FUN_00d50b20();
                  local_38 = (float *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                  local_68 = pfVar21;
                }
              }
              if ((int)local_68[3] % 2 == 1) {
                FUN_00d23620();
                iVar52 = iVar52 + -1;
              }
              iVar52 = iVar52 + 1;
              lVar53 = *(int64_t *)(this_ptr + 0x5e);
            } while (iVar52 < *(int *)(lVar53 + 0xc));
            if (0 < *(int *)(lVar53 + 0xc)) {
              iVar52 = 0;
              do {
                pfVar21 = *(float **)(*(int64_t *)(lVar53 + 0x10) + (int64_t)iVar52 * 8);
                if (local_68 == pfVar21) {
                  if ((char)local_38 == '\0') {
                    local_38 = (float *)CONCAT71((int7)((uint64_t)*(int64_t *)(lVar53 + 0x10) >> 8
                                                       ),1);
                    FUN_00d50b00();
                  }
                }
                else {
                  if (pfVar21 != (float *)0x0) {
                    FUN_00d50b00();
                  }
                  local_68 = pfVar21;
                  if ((char)local_38 == '\0') {
                    local_38 = (float *)CONCAT71((int7)((uint64_t)local_38 >> 8),1);
                  }
                  else {
                    uVar16 = FUN_00d50b20();
                    local_38 = (float *)CONCAT71((int7)((uint64_t)uVar16 >> 8),1);
                  }
                }
                fVar59 = local_68[3];
                local_68[3] = (float)((int)fVar59 / 2);
                if ((int)fVar67 <= (int)fVar59 / 2) {
                  FUN_00d23620();
                  iVar52 = iVar52 + -1;
                }
                iVar52 = iVar52 + 1;
                lVar53 = *(int64_t *)(this_ptr + 0x5e);
              } while (iVar52 < *(int *)(lVar53 + 0xc));
            }
          }
          *local_e0 = fVar67;
        }
        (**(code **)(*(int64_t *)this_ptr + 0x380))();
        if (*(char *)(this_ptr + 0xf) == '\0') {
          if (local_130 == (float *)0x0) {
            bVar57 = true;
          }
          else {
            bVar57 = false;
            local_130 = (float *)0x0;
            FUN_00d50b20();
          }
        }
        else {
          bVar57 = true;
          FUN_00e34a60();
        }
        goto joined_r0x01499738;
      }
      bVar57 = true;
      FUN_00e34a60();
joined_r0x01499738:
      if (local_c8 != (float *)0x0) {
        FUN_00d50b20();
      }
      if (local_1e8 != (float *)0x0 && (char)local_218 == '\x01') {
        FUN_00d50b20();
      }
      if (((char)local_1c8 != '\0') && (pfVar54 != (float *)0x0)) {
        FUN_00d50b20();
      }
joined_r0x01498ff7:
      if (local_2a8 != (float *)0x0) {
        FUN_00d50b20();
      }
      if ((local_178._0_1_ != '\0') && (local_1a8._0_8_ != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_240 != '\0') && (local_238 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_78 != '\0') && (local_f8 != (float *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_b0 != '\0') && (local_1b0 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar57) && (local_130 != (float *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_128 != '\0') && (local_210 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_118 != '\0') && (local_208 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_120 != '\0') && (local_160 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_110 != '\0') && (local_200 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00e34a60();
      local_38 = (float *)0x0;
      local_68 = (float *)0x0;
    }
    if (local_338 != (float *)0x0) {
      FUN_00d50b20();
    }
    if (local_288 != (float *)0x0) {
      FUN_00d50b20();
    }
    if (local_180 == (float *)0x0) goto LAB_014936b5;
  }
  else {
    FUN_00e34a60();
    local_58 = (float *)0x0;
    local_50._0_1_ = '\0';
    local_68 = (float *)0x0;
    local_38 = (float *)0x0;
  }
  FUN_00d50b20();
LAB_014936b5:
  if (((char)local_38 != '\0') && (local_68 != (float *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != (float *)0x0)) {
    FUN_00d50b20();
  }
  return;
LAB_01496d40:
  lVar53 = lVar53 + 1;
  if (lVar53 == 0x681) goto LAB_014971f3;
  goto LAB_01496d51;
}

