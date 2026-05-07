// Function: FUN_01ab7b20
// Address: 01ab7b20
// Size: 8688 bytes
// Class: MUSpectrumShaper
// String references:
//   "%I"
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


void FUN_01ab7b20(void* param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  bool bVar5;
  uint32_t uVar6;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  code *pcVar18;
  char cVar19;
  char cVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  void *pvVar25;
  int64_t lVar26;
  int64_t lVar27;
  void*puVar28;
  void*puVar29;
  void*puVar30;
  void* pVar31;
  float *pfVar32;
  uint64_t uVar33;
  uint64_t uVar34;
  void*arg1;
  float *this_ptr;
  size_t sVar35;
  uint64_t in_R8;
  uint uVar36;
  byte bVar37;
  char cVar38;
  uint32_t uVar39;
  float fVar41;
  uint32_t extraout_XMM0_Db;
  uint32_t extraout_XMM0_Dc;
  uint8_t auVar42 [16];
  float extraout_XMM0_Da;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  uint8_t auVar45 [16];
  uint8_t auVar46 [16];
  float fVar40;
  uint8_t auVar47 [16];
  uint8_t auVar48 [16];
  uint8_t auVar49 [16];
  uint8_t auVar50 [16];
  float fVar51;
  uint64_t in_XMM1_Qb;
  uint8_t auVar52 [16];
  uint8_t auVar53 [16];
  uint8_t auVar54 [16];
  uint8_t auVar55 [16];
  uint8_t auVar56 [16];
  uint64_t in_XMM2_Qb;
  uint8_t auVar58 [16];
  int64_t lVar57;
  int64_t lVar60;
  uint8_t auVar59 [16];
  float fVar61;
  int64_t lVar62;
  float fVar63;
  float fVar64;
  uint64_t in_XMM3_Qb;
  int64_t lVar65;
  float fVar66;
  float fVar67;
  uint8_t auVar68 [16];
  float fVar69;
  int64_t lVar70;
  int64_t lVar71;
  int64_t lVar72;
  int64_t lVar73;
  int64_t *local_2b8;
  char local_2b0;
  float local_218;
  float fStack_214;
  byte local_108;
  void*local_e8;
  uint32_t local_e0;
  int local_dc;
  uint64_t local_d8;
  uint32_t uStack_d0;
  uint32_t uStack_cc;
  float *local_c0;
  uint8_t local_b8 [16];
  uint8_t local_a8 [16];
  float *local_90;
  float *local_50;
  float *local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb;
  
  local_218 = (float)param_3;
  fStack_214 = (float)((uint64_t)param_3 >> 0x20);
  local_a8._8_8_ = in_XMM1_Qb;
  local_a8._0_8_ = param_2;
  pvVar25 = _pthread_getspecific(param_1);
  if (pvVar25 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b7b80();
  local_90 = local_40;
  if ((local_38 == '\0') && (local_40 != (float *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01ab5650();
  if ((local_38 == '\0') && (local_40 != (float *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (local_40 != (float *)0x0) {
    FUN_00d50b20();
  }
  uStack_d0 = (uint32_t)((uint64_t)in_XMM3_Qb >> 0x20);
  fVar69 = (float)((uint64_t)param_4 >> 0x20);
  auVar42 = roundss(ZEXT816(0),
                    ZEXT416((uint)((float)((uint)(g_0240b530 * fVar69) & g_023945e0 |
                                          g_02394dc8) + g_0240b530 * fVar69)),0xb);
  fVar41 = g_0241fd58;
  if (auVar42._0_4_ <= g_0241fd58) {
    fVar41 = auVar42._0_4_;
  }
  fVar67 = fVar69 - fVar41;
  uVar6 = (uint32_t)((uint64_t)in_XMM2_Qb >> 0x20);
  fVar51 = fStack_214 + fVar67;
  local_d8 = (float *)CONCAT44(fVar69,fVar67);
  fVar69 = g_02390118 * fVar67 + fVar51;
  auVar42 = ZEXT416((uint)((float)((uint)fVar69 & g_023945e0 | g_02394dc8) + fVar69));
  roundss(auVar42,auVar42,0xb);
  uStack_cc = uStack_d0;
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  auVar42._8_8_ = in_XMM2_Qb;
  auVar42._0_8_ = param_3;
  insertps(auVar42,fVar51,0x10);
  auVar45._8_8_ = in_XMM3_Qb;
  auVar45._0_8_ = param_4;
  insertps(auVar45,fVar41,0x10);
  this_ptr[0x67] = 1.41531e-43;
  cVar19 = FUN_00d054a0();
  lVar3 = _UNK_0240e298;
  lVar2 = g_0240e290;
  lVar1 = _UNK_0240dfb8;
  lVar26 = g_0240dfb0;
  uVar17 = _UNK_023945fc;
  uVar16 = _UNK_023945f8;
  uVar15 = _UNK_023945f4;
  uVar14 = g_023945f0;
  uVar13 = _UNK_023945ec;
  uVar24 = _UNK_023945e8;
  uVar36 = _UNK_023945e4;
  uVar22 = g_023945e0;
  fVar69 = (float)param_4;
  fVar67 = fVar69 / g_0241c618;
  if (cVar19 != '\0') {
    lVar27 = *(int64_t *)(*(int64_t *)(this_ptr + 0x5e) + 0x10);
    pfVar32 = (float *)0x0;
    auVar68 = g_0240df90;
    lVar72 = g_0240df80;
    lVar73 = _UNK_0240df88;
    do {
      lVar62 = auVar68._0_8_;
      lVar65 = auVar68._8_8_;
      auVar56._0_4_ =
           (float)(~-(uint)(lVar62 == 0) & (uint)(float)(auVar68._0_4_ + 1)) * fVar67 + local_218;
      fVar63 = (float)(~-(uint)(lVar65 == 0) & (uint)(float)(auVar68._8_4_ + 1)) * fVar67 +
               local_218;
      fVar64 = (float)(~-(uint)(lVar72 == 0) & (uint)(float)((int)lVar72 + 1)) * fVar67 + local_218;
      fVar66 = (float)(~-(uint)(lVar73 == 0) & (uint)(float)((int)lVar73 + 1)) * fVar67 + local_218;
      auVar58._0_4_ = (float)((uint)auVar56._0_4_ & uVar22 | uVar14) + auVar56._0_4_;
      auVar58._4_4_ = (float)((uint)fVar63 & uVar36 | uVar15) + fVar63;
      auVar58._8_4_ = (float)((uint)fVar64 & uVar24 | uVar16) + fVar64;
      auVar58._12_4_ = (float)((uint)fVar66 & uVar13 | uVar17) + fVar66;
      auVar42 = roundps(auVar58,auVar58,0xb);
      *(uint8_t (*) [16])(lVar27 + (int64_t)pfVar32 * 4) = auVar42;
      lVar57 = lVar72 + lVar26;
      lVar60 = lVar73 + lVar1;
      lVar70 = lVar62 + lVar26;
      lVar71 = lVar65 + lVar1;
      auVar56._0_4_ =
           (float)(~-(uint)(lVar70 == 0) & (uint)(float)((int)lVar70 + 1)) * fVar67 + local_218;
      fVar63 = (float)(~-(uint)(lVar71 == 0) & (uint)(float)((int)lVar71 + 1)) * fVar67 + local_218;
      fVar64 = (float)(~-(uint)(lVar57 == 0) & (uint)(float)((int)lVar57 + 1)) * fVar67 + local_218;
      fVar66 = (float)(~-(uint)(lVar60 == 0) & (uint)(float)((int)lVar60 + 1)) * fVar67 + local_218;
      auVar59._0_4_ = (float)((uint)auVar56._0_4_ & uVar22 | uVar14) + auVar56._0_4_;
      auVar59._4_4_ = (float)((uint)fVar63 & uVar36 | uVar15) + fVar63;
      auVar59._8_4_ = (float)((uint)fVar64 & uVar24 | uVar16) + fVar64;
      auVar59._12_4_ = (float)((uint)fVar66 & uVar13 | uVar17) + fVar66;
      auVar42 = roundps(auVar59,auVar59,0xb);
      *(uint8_t (*) [16])(lVar27 + 0x10 + (int64_t)pfVar32 * 4) = auVar42;
      pfVar32 = pfVar32 + 2;
      auVar68._0_8_ = lVar62 + lVar2;
      auVar68._8_8_ = lVar65 + lVar3;
      lVar72 = lVar72 + lVar2;
      lVar73 = lVar73 + lVar3;
    } while (pfVar32 != (float *)(section_000001f8.sectname + 8));
    auVar56._0_4_ = g_0241c61c * fVar67 + local_218;
    auVar52._4_4_ = _UNK_023945f4;
    auVar52._0_4_ = g_023945f0;
    auVar52._8_4_ = _UNK_023945f8;
    auVar52._12_4_ = _UNK_023945fc;
    auVar52 = ZEXT416(g_023945e0 & (uint)auVar56._0_4_) | auVar52;
    auVar53._4_12_ = auVar52._4_12_;
    auVar53._0_4_ = auVar52._0_4_ + auVar56._0_4_;
    auVar42 = roundss(ZEXT816(0),auVar53,0xb);
    *(int *)(lVar27 + 0x800) = auVar42._0_4_;
    pvVar25 = _pthread_getspecific(0x200);
    if (pvVar25 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015b9950();
    if ((local_38 == '\0') && (local_40 != (float *)0x0)) {
      FUN_00d50b00();
    }
    pvVar25 = _pthread_getspecific((void*)pfVar32);
    if (pvVar25 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015b93e0();
    if ((local_38 == '\0') && (local_40 != (float *)0x0)) {
      FUN_00d50b00();
    }
    pvVar25 = _pthread_getspecific((void*)pfVar32);
    if ((pvVar25 != (void *)0x0) && (lVar26 = FUN_00e8b990(), lVar26 != 0)) {
      pfVar32 = local_90;
    }
    uVar39 = FUN_017f2da0();
    local_b8._0_4_ = uVar39;
    pvVar25 = _pthread_getspecific((void*)pfVar32);
    if ((pvVar25 != (void *)0x0) && (lVar26 = FUN_00e8b990(), lVar26 != 0)) {
      pfVar32 = local_90;
    }
    iVar21 = FUN_017f2d90();
    local_b8._0_4_ = (float)local_b8._0_4_ * (float)iVar21;
    lVar26 = 0;
    do {
      pVar31 = (void*)pfVar32;
      _exp2f((float)((int)lVar26 + 0x23) * g_023908e0 * g_023941f4);
      local_a8._4_4_ = extraout_XMM0_Db;
      local_a8._0_4_ = extraout_XMM0_Da * g_023941f8;
      local_a8._8_4_ = extraout_XMM0_Dc;
      local_a8._12_4_ = extraout_XMM0_Dd;
      if (lVar26 != 0) {
        pvVar25 = _pthread_getspecific(pVar31);
        if (pvVar25 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015b9640();
      }
      local_a8._0_4_ = (float)local_a8._0_4_ / (float)local_b8._0_4_;
      FUN_00aea610();
      fVar63 = (float)_powf();
      auVar56._0_4_ = 0.0;
      if (0.0 <= fVar63 * (float)local_d8) {
        auVar56._0_4_ = fVar63 * (float)local_d8;
      }
      *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x60) + 0x10) + lVar26 * 4) = auVar56._0_4_
      ;
      pfVar32 = this_ptr;
      if (lVar26 != 0) {
        pvVar25 = _pthread_getspecific((void*)this_ptr);
        if (pvVar25 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015b9640();
      }
      FUN_00aea610();
      fVar63 = (float)_powf();
      auVar56._0_4_ = 0.0;
      if (0.0 <= fVar63 * (float)local_d8) {
        auVar56._0_4_ = fVar63 * (float)local_d8;
      }
      *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x62) + 0x10) + lVar26 * 4) = auVar56._0_4_
      ;
      lVar26 = lVar26 + 1;
    } while (lVar26 != 0x66);
    FUN_00d50b20();
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr + 0x640))();
  (**(code **)(*local_2b8 + 0x370))();
  FUN_01d44d80();
  if (local_38 == '\0') {
    if (local_40 != (float *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (((char)local_e0 != '\0') && (local_e8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_2b0 != '\0') && (local_2b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01ab4fd0();
  if ((local_38 == '\0') && (local_40 != (float *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (local_40 != (float *)0x0) {
    FUN_00d50b20();
  }
  FUN_01d48a10();
  auVar9._8_8_ = in_XMM3_Qb;
  auVar9._0_8_ = param_4;
  auVar54._4_4_ = _UNK_023945f4;
  auVar54._0_4_ = g_023945f0;
  auVar54._8_4_ = _UNK_023945f8;
  auVar54._12_4_ = _UNK_023945fc;
  auVar54 = ZEXT416(g_023945e0 & (uint)(g_0239011c * fVar67)) | auVar54;
  insertps(auVar9,(float)local_d8,0x10);
  auVar55._4_12_ = auVar54._4_12_;
  auVar55._0_4_ = auVar54._0_4_ + g_0239011c * fVar67;
  auVar42 = roundss(ZEXT816(0),auVar55,0xb);
  local_d8 = (float *)CONCAT44(local_d8._4_4_,(fVar69 / g_023d7ff4) / g_023908e0);
  local_50 = (float *)0x0;
  bVar12 = false;
  iVar21 = 100;
  do {
    auVar43._0_8_ = _logf((float)iVar21 * g_02394204);
    auVar43._8_8_ = extraout_XMM0_Qb;
    local_a8._4_12_ = auVar43._4_12_;
    local_a8._0_4_ = (float)auVar43._0_8_ * g_02394208 + g_0241c624;
    local_e0 = 1;
    local_e8 = &g_024cc6f0;
    local_dc = iVar21;
    FUN_00d8cb40(local_a8._0_8_,&local_e8);
    if (local_40 == local_50) {
      if ((bVar12) || (local_40 == (float *)0x0)) {
joined_r0x01ab857e:
        pfVar32 = local_50;
        bVar5 = bVar12;
        if ((local_38 != '\0') && (local_40 != (float *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        pfVar32 = local_50;
        bVar5 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_01ab8569;
        }
      }
    }
    else {
      pfVar32 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (float *)0x0) {
          FUN_00d50b00();
        }
        bVar5 = true;
        if ((bVar12) && (local_50 != (float *)0x0)) {
          FUN_00d50b20();
          local_50 = local_40;
LAB_01ab8569:
          bVar12 = true;
          goto joined_r0x01ab857e;
        }
      }
      else {
        bVar5 = true;
        if ((bVar12) && (local_50 != (float *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    bVar12 = bVar5;
    auVar44._4_12_ = local_a8._4_12_;
    auVar8._8_8_ = in_XMM2_Qb;
    auVar8._0_8_ = param_3;
    auVar44._0_4_ = local_a8._0_4_ * (float)local_d8 + local_218 + fVar67 + g_023b5d70;
    auVar45 = blendps(auVar44,auVar8,0xe);
    (**(code **)(*(int64_t *)*arg1 + 0x3f8))(auVar45._0_8_,2);
    sVar35 = (size_t)in_R8;
    bVar5 = iVar21 < 10000;
    local_50 = pfVar32;
    iVar21 = iVar21 * 2;
  } while (bVar5);
  auVar10._8_8_ = in_XMM3_Qb;
  auVar10._0_8_ = param_4;
  auVar46._4_12_ = auVar10._4_12_;
  auVar46._0_4_ = fVar69 + fVar67;
  iVar21 = FUN_00e7d780(auVar46._0_8_);
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (float *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_d8 = local_40;
  if (3 < (int)local_40[6]) {
    _memset_pattern16(local_40,(void *)((uint64_t)(((uint)local_40[6] >> 2) - 1) * 4 + 4),sVar35);
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (float *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)local_40[6]) {
    _memset_pattern16(local_40,(void *)((uint64_t)(((uint)local_40[6] >> 2) - 1) * 4 + 4),sVar35);
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (float *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_c0 = local_40;
  if (3 < (int)local_40[6]) {
    _memset_pattern16(local_40,(void *)((uint64_t)(((uint)local_40[6] >> 2) - 1) * 4 + 4),sVar35);
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (float *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)local_40[6]) {
    _memset_pattern16(local_40,(void *)((uint64_t)(((uint)local_40[6] >> 2) - 1) * 4 + 4),sVar35);
  }
  uVar22 = iVar21 + 1;
  uVar36 = 0;
  iVar23 = 0;
  uVar34 = 0;
  do {
    local_b8._0_4_ =
         *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x5e) + 0x10) + uVar34 * 4) +
         auVar42._0_4_;
    fVar69 = *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x5e) + 0x10) + 4 + uVar34 * 4) +
             auVar42._0_4_;
    if ((int)uVar34 == 0x65) {
      iVar23 = FUN_00e7d780();
    }
    else if ((int)uVar34 == 0) {
      uVar36 = FUN_00e7d780();
    }
    uVar33 = uVar34 + 1;
    fVar64 = fVar51 - *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x60) + 0x10) + uVar34 * 4)
    ;
    fVar63 = fVar51 - *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x62) + 0x10) + uVar34 * 4)
    ;
    fVar67 = fVar64;
    auVar56._0_4_ = fVar63;
    if (uVar34 < 0x65) {
      fVar67 = fVar51 - *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x60) + 0x10) +
                                  uVar33 * 4);
      auVar56._0_4_ =
           fVar51 - *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x62) + 0x10) + uVar33 * 4);
    }
    if ((float)local_b8._0_4_ <= fVar69) {
      fVar61 = fVar69 - (float)local_b8._0_4_;
      fVar66 = (float)local_b8._0_4_;
      do {
        local_a8._0_4_ = fVar66;
        uVar24 = FUN_00e7d780();
        if ((-1 < (int)uVar24) && ((int)uVar24 <= iVar21)) {
          fVar66 = ((float)local_a8._0_4_ - (float)local_b8._0_4_) / fVar61;
          fVar40 = (float)_sinf(fVar66 * g_02410f88 + g_02394294);
          fVar40 = (fVar40 + g_02390d00) * g_0239011c;
          uVar34 = (uint64_t)uVar24;
          *(float *)(*(int64_t *)(local_d8 + 4) + uVar34 * 4) = fVar64 - (fVar64 - fVar67) * fVar66
          ;
          *(float *)(*(int64_t *)(local_c0 + 4) + uVar34 * 4) =
               fVar63 - fVar66 * (fVar63 - auVar56._0_4_);
          *(float *)(*(int64_t *)(local_40 + 4) + uVar34 * 4) = (fVar64 - fVar67) * fVar40 + fVar64
          ;
          *(float *)(*(int64_t *)(local_40 + 4) + uVar34 * 4) =
               fVar40 * (fVar63 - auVar56._0_4_) + fVar63;
        }
        fVar66 = (float)local_a8._0_4_ + g_02390124;
      } while (fVar66 <= fVar69);
    }
    uVar34 = uVar33;
  } while (uVar33 != 0x66);
  if (0 < (int)uVar36) {
    lVar27 = (int64_t)(int)uVar36;
    lVar26 = *(int64_t *)(local_d8 + 4);
    lVar1 = *(int64_t *)(local_40 + 4);
    lVar2 = *(int64_t *)(local_c0 + 4);
    lVar3 = *(int64_t *)(local_40 + 4);
    if (uVar36 == 1) {
      uVar34 = 0;
    }
    else {
      uVar34 = 0;
      do {
        *(void*)(lVar26 + uVar34 * 4) = *(void*)(lVar26 + lVar27 * 4);
        *(void*)(lVar1 + uVar34 * 4) = *(void*)(lVar1 + lVar27 * 4);
        *(void*)(lVar2 + uVar34 * 4) = *(void*)(lVar2 + lVar27 * 4);
        *(void*)(lVar3 + uVar34 * 4) = *(void*)(lVar3 + lVar27 * 4);
        *(void*)(lVar26 + 4 + uVar34 * 4) = *(void*)(lVar26 + lVar27 * 4);
        *(void*)(lVar1 + 4 + uVar34 * 4) = *(void*)(lVar1 + lVar27 * 4);
        *(void*)(lVar2 + 4 + uVar34 * 4) = *(void*)(lVar2 + lVar27 * 4);
        *(void*)(lVar3 + 4 + uVar34 * 4) = *(void*)(lVar3 + lVar27 * 4);
        uVar34 = uVar34 + 2;
      } while ((uVar36 & 0xfffffffe) != uVar34);
    }
    if ((uVar36 & 1) != 0) {
      *(void*)(lVar26 + uVar34 * 4) = *(void*)(lVar26 + lVar27 * 4);
      *(void*)(lVar1 + uVar34 * 4) = *(void*)(lVar1 + lVar27 * 4);
      *(void*)(lVar2 + uVar34 * 4) = *(void*)(lVar2 + lVar27 * 4);
      *(void*)(lVar3 + uVar34 * 4) = *(void*)(lVar3 + lVar27 * 4);
    }
  }
  if (iVar23 < iVar21) {
    uVar33 = (uint64_t)iVar23;
    lVar26 = *(int64_t *)(local_d8 + 4);
    lVar1 = *(int64_t *)(local_40 + 4);
    lVar2 = *(int64_t *)(local_c0 + 4);
    lVar3 = *(int64_t *)(local_40 + 4);
    uVar34 = uVar33;
    if ((iVar21 - iVar23 & 1U) != 0) {
      uVar34 = uVar33 + 1;
      *(void*)(lVar26 + 4 + uVar33 * 4) = *(void*)(lVar26 + uVar33 * 4);
      *(void*)(lVar1 + 4 + uVar33 * 4) = *(void*)(lVar1 + uVar33 * 4);
      *(void*)(lVar2 + 4 + uVar33 * 4) = *(void*)(lVar2 + uVar33 * 4);
      *(void*)(lVar3 + 4 + uVar33 * 4) = *(void*)(lVar3 + uVar33 * 4);
    }
    if (~uVar33 + (int64_t)iVar21 != 0) {
      do {
        *(void*)(lVar26 + 4 + uVar34 * 4) = *(void*)(lVar26 + uVar33 * 4);
        *(void*)(lVar1 + 4 + uVar34 * 4) = *(void*)(lVar1 + uVar33 * 4);
        *(void*)(lVar2 + 4 + uVar34 * 4) = *(void*)(lVar2 + uVar33 * 4);
        *(void*)(lVar3 + 4 + uVar34 * 4) = *(void*)(lVar3 + uVar33 * 4);
        *(void*)(lVar26 + 8 + uVar34 * 4) = *(void*)(lVar26 + uVar33 * 4);
        *(void*)(lVar1 + 8 + uVar34 * 4) = *(void*)(lVar1 + uVar33 * 4);
        *(void*)(lVar2 + 8 + uVar34 * 4) = *(void*)(lVar2 + uVar33 * 4);
        *(void*)(lVar3 + 8 + uVar34 * 4) = *(void*)(lVar3 + uVar33 * 4);
        uVar34 = uVar34 + 2;
      } while ((int64_t)iVar21 != uVar34);
    }
  }
  puVar28 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar28 = &g_025f0d98;
  puVar28[2] = 0;
  puVar28[3] = 0;
  puVar28[4] = 0;
  puVar28[5] = 0;
  puVar28[6] = 0;
  puVar28[7] = 0;
  (*g_025f0db0)();
  FUN_015c15b0(1,uVar22);
  FUN_015c15b0(1,uVar22);
  fVar69 = g_02390d30;
  uVar36 = g_02390140;
  if (-1 < iVar21) {
    lVar26 = *(int64_t *)(local_40 + 4);
    lVar1 = *(int64_t *)(local_d8 + 4);
    lVar2 = *(int64_t *)(local_40 + 4);
    lVar3 = *(int64_t *)(local_c0 + 4);
    uVar34 = 0;
    do {
      fVar63 = g_02390124;
      fVar67 = *(float *)(lVar26 + uVar34 * 4);
      auVar56._0_4_ = *(float *)(lVar1 + uVar34 * 4);
      fVar64 = (float)((uint)(fVar67 - auVar56._0_4_) & uVar36);
      if (g_02390124 < fVar64) {
        fVar66 = (fVar64 + g_02390d00) / fVar69;
        fVar64 = g_02390124;
        if (fVar66 <= g_02390124) {
          fVar64 = fVar66;
        }
        *(float *)(lVar1 + uVar34 * 4) = fVar67 * fVar64 + auVar56._0_4_ * (g_02390124 - fVar64);
      }
      fVar67 = *(float *)(lVar2 + uVar34 * 4);
      auVar56._0_4_ = *(float *)(lVar3 + uVar34 * 4);
      fVar64 = (float)((uint)(fVar67 - auVar56._0_4_) & uVar36);
      if (fVar63 < fVar64) {
        fVar64 = (fVar64 + g_02390d00) / fVar69;
        fVar63 = g_02390124;
        if (fVar64 <= g_02390124) {
          fVar63 = fVar64;
        }
        *(float *)(lVar3 + uVar34 * 4) = fVar67 * fVar63 + auVar56._0_4_ * (g_02390124 - fVar63);
      }
      uVar34 = uVar34 + 1;
    } while (uVar22 != uVar34);
  }
  pcVar18 = g_02680418;
  bVar37 = 0;
  puVar30 = (void*)0x0;
  for (lVar26 = 1; lVar26 != 0x66; lVar26 = lVar26 + 1) {
    fVar69 = *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x5e) + 0x10) + lVar26 * 4);
    fVar67 = *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x5e) + 0x10) + 4 + lVar26 * 4);
    puVar29 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar29 = &g_02680400;
    *(void*)((int64_t)puVar29 + 0xc) = 0;
    puVar29[6] = 0;
    puVar29[7] = 0;
    *(void*)((int64_t)puVar29 + 0x39) = 0;
    *(void*)((int64_t)puVar29 + 0x41) = 0;
    (*pcVar18)();
    if ((bool)(bVar37 & puVar30 != (void*)0x0)) {
      FUN_00d50b20();
    }
    local_b8 = ZEXT416((uint)(fVar69 + g_02390d00));
    auVar42 = insertps(local_b8,fVar51,0x10);
    FUN_01d39180(auVar42._0_8_);
    auVar56._0_4_ = local_b8._0_4_;
    auVar45 = local_b8;
    auVar42 = local_a8;
    while (local_a8 = auVar45, auVar56._0_4_ <= fVar67) {
      iVar21 = FUN_00e7d780();
      auVar42 = insertps(local_a8,*(void*)
                                   (*(int64_t *)(local_d8 + 4) + (int64_t)iVar21 * 4),0x10);
      FUN_01d38830(auVar42._0_8_);
      auVar56._4_12_ = local_a8._4_12_;
      auVar56._0_4_ = local_a8._0_4_ + g_02390124;
      auVar45 = auVar56;
      auVar42 = local_a8;
    }
    insertps(ZEXT416((uint)fVar67),fVar51,0x10);
    local_a8 = auVar42;
    FUN_01d38830();
    FUN_01d38830();
    auVar42 = insertps(ZEXT416((uint)fVar69),fVar51,0x10);
    FUN_01d38830(auVar42._0_8_);
    if (*(char *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x5c) + 0x10) + lVar26) == '\0') {
      FUN_01ab5310();
      if ((local_38 == '\0') && (local_40 != (float *)0x0)) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (local_40 != (float *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01ab54b0();
      if ((local_38 == '\0') && (local_40 != (float *)0x0)) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (local_40 != (float *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
    FUN_01cfc6a0();
    if (local_38 == '\0') {
      if (local_40 != (float *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (float *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (float *)0x0)) {
      FUN_00d50b20();
    }
    plVar4 = (int64_t *)*arg1;
    FUN_00e7d780();
    bVar37 = 1;
    (**(code **)(*plVar4 + 0x3e0))();
    puVar30 = puVar29;
  }
  uVar39 = FUN_00e7d780();
  local_a8._0_4_ = uVar39;
  iVar21 = FUN_00e7d780();
  puVar29 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar29 = &g_02680400;
  *(void*)((int64_t)puVar29 + 0xc) = 0;
  puVar29[6] = 0;
  puVar29[7] = 0;
  *(void*)((int64_t)puVar29 + 0x39) = 0;
  *(void*)((int64_t)puVar29 + 0x41) = 0;
  (*pcVar18)();
  if ((bool)(bVar37 & puVar30 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((int)local_a8._0_4_ <= iVar21) {
    lVar26 = (int64_t)(int)local_a8._0_4_;
    do {
      auVar42 = insertps(ZEXT416((uint)(float)(int)lVar26),
                         *(void*)(*(int64_t *)(local_c0 + 4) + lVar26 * 4),0x10);
      FUN_01d38830(auVar42._0_8_);
      lVar26 = lVar26 + 1;
    } while (iVar21 + 1 != (int)lVar26);
  }
  FUN_01ab5650();
  if ((local_38 == '\0') && (local_40 != (float *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (local_40 != (float *)0x0) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
  puVar30 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar30 = &g_02680400;
  *(void*)((int64_t)puVar30 + 0xc) = 0;
  puVar30[6] = 0;
  puVar30[7] = 0;
  *(void*)((int64_t)puVar30 + 0x39) = 0;
  *(void*)((int64_t)puVar30 + 0x41) = 0;
  (*pcVar18)();
  if (puVar29 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((int)local_a8._0_4_ <= iVar21) {
    lVar26 = (int64_t)(int)local_a8._0_4_;
    do {
      auVar42 = insertps(ZEXT416((uint)(float)(int)lVar26),
                         *(void*)(*(int64_t *)(local_d8 + 4) + lVar26 * 4),0x10);
      FUN_01d38830(auVar42._0_8_);
      lVar26 = lVar26 + 1;
    } while (iVar21 + 1 != (int)lVar26);
  }
  FUN_01ab6350();
  if ((local_38 == '\0') && (local_40 != (float *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (local_40 != (float *)0x0) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
  FUN_01d48b40();
  local_b8._0_4_ = **(void**)(*(int64_t *)(this_ptr + 0x5e) + 0x10);
  local_a8 = ZEXT416((uint)(*(void**)(*(int64_t *)(this_ptr + 0x5e) + 0x10))[1]);
  pfVar32 = *(float **)(*(int64_t *)(this_ptr + 0x60) + 0x10);
  fVar69 = *pfVar32;
  if (**(char **)(*(int64_t *)(this_ptr + 0x5c) + 0x10) == '\0') {
    FUN_01ab5310();
    if ((local_38 == '\0') && (local_40 != (float *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_40 != (float *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01ab54b0();
    if ((local_38 == '\0') && (local_40 != (float *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_40 != (float *)0x0) {
      FUN_00d50b20();
    }
  }
  fVar67 = local_a8._0_4_ - (float)local_b8._0_4_;
  auVar56._0_4_ = g_0239426c * fVar67 + (float)local_b8._0_4_;
  auVar47._4_4_ = _UNK_023945f4;
  auVar47._0_4_ = g_023945f0;
  auVar47._8_4_ = _UNK_023945f8;
  auVar47._12_4_ = _UNK_023945fc;
  auVar47 = ZEXT416(g_023945e0 & (uint)fVar69) | auVar47;
  auVar48._4_12_ = auVar47._4_12_;
  auVar48._0_4_ = auVar47._0_4_ + fVar69;
  auVar42 = roundss(auVar48,auVar48,0xb);
  auVar11._4_4_ = fStack_214;
  auVar11._0_4_ = fVar51;
  auVar11._8_4_ = uVar6;
  auVar11._12_4_ = uVar6;
  local_b8._4_12_ = auVar11._4_12_;
  local_b8._0_4_ = fVar51 - auVar42._0_4_;
  local_a8._0_4_ = fVar67 * g_0239011c;
  auVar42 = insertps(ZEXT416((uint)auVar56._0_4_),local_b8,0x10);
  auVar45 = blendps(g_0241f3a0,local_a8,1);
  (**(code **)(*(int64_t *)*arg1 + 0x3b0))(auVar42._0_8_,auVar45._0_8_);
  FUN_01cfc6a0();
  if (local_38 == '\0') {
    if (local_40 != (float *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (float *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (float *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  if (cVar19 != '\0') {
    FUN_01abc630();
    FUN_0177fdd0();
    if ((local_38 == '\0') && (local_40 != (float *)0x0)) {
      FUN_00d50b00();
    }
    local_b8._0_8_ = local_40;
    FUN_01d48a10();
    fVar41 = fVar41 + fVar51 + g_02390d00 + g_023b2664;
    cVar38 = -5;
    cVar19 = -0xb;
    local_108 = 0x23;
    lVar26 = 0;
    do {
      local_a8 = ZEXT416((uint)((*(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x5e) + 0x10) +
                                           lVar26 * 4) +
                                *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x5e) + 0x10) + 4
                                          + lVar26 * 4)) * g_0239011c));
      if (local_50 != (float *)0x0) {
        if (bVar12) {
          FUN_00d50b20();
        }
        bVar12 = false;
      }
      if (lVar26 == 0) {
        if (g_0277e580 != (float *)0x0) {
          local_50 = g_0277e580;
          FUN_00d50b00();
          bVar12 = true;
          goto LAB_01ab9b47;
        }
LAB_01ab98d0:
        local_50 = (float *)0x0;
      }
      else {
        FUN_0173ba80();
        pvVar25 = _pthread_getspecific((void*)pfVar32);
        if (pvVar25 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01740240();
        if (local_38 == '\0') {
          if (local_40 != (float *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if (((char)local_e0 != '\0') && (local_e8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 == (float *)0x0) goto LAB_01ab98d0;
        pvVar25 = _pthread_getspecific((void*)pfVar32);
        if (pvVar25 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar20 = FUN_01739620();
        if (cVar20 == '\0') {
          local_50 = (float *)0x0;
        }
        else {
          bVar37 = local_108 / 0xc;
          iVar21 = ((byte)(cVar19 + bVar37 * -0x54) / 3 & 0xfffffffc) * 3;
          cVar20 = (char)iVar21;
          FUN_01780260(iVar21,(byte)(((cVar38 + ((byte)((cVar38 - cVar20) + bVar37 * -0x54) / 3 &
                                                0xfc) * -3) - cVar20) + bVar37 * -0x54) - 6);
          local_50 = local_40;
          pfVar32 = local_40;
          if (local_40 == (float *)0x0) {
            local_50 = (float *)0x0;
          }
          else {
            bVar12 = true;
            if (local_38 == '\0') {
              FUN_00d50b00();
            }
          }
        }
        FUN_00d50b20();
LAB_01ab9b47:
        if (local_50 == (float *)0x0) goto LAB_01ab98d0;
        auVar49._0_4_ = (uint)local_a8._0_4_ & g_023945e0;
        auVar49._4_4_ = local_a8._4_4_ & _UNK_023945e4;
        auVar49._8_4_ = local_a8._8_4_ & _UNK_023945e8;
        auVar49._12_4_ = local_a8._12_4_ & _UNK_023945ec;
        auVar7._4_4_ = _UNK_023945f4;
        auVar7._0_4_ = g_023945f0;
        auVar7._8_4_ = _UNK_023945f8;
        auVar7._12_4_ = _UNK_023945fc;
        auVar50._4_12_ = SUB1612(auVar49 | auVar7,4);
        auVar50._0_4_ = SUB164(auVar49 | auVar7,0) + local_a8._0_4_;
        auVar42 = roundss(auVar50,auVar50,0xb);
        local_a8._4_12_ = auVar42._4_12_;
        local_a8._0_4_ = auVar42._0_4_ + g_02394248 + g_02390d00;
        FUN_01ab4de0();
        if ((local_38 == '\0') && (local_40 != (float *)0x0)) {
          FUN_00d50b00();
        }
        FUN_01d488d0();
        if (local_40 != (float *)0x0) {
          FUN_00d50b20();
        }
        auVar42 = insertps(local_a8,fVar41,0x10);
        pfVar32 = local_50;
        (**(code **)(*(int64_t *)*arg1 + 0x3f8))(auVar42._0_8_,2);
      }
      lVar26 = lVar26 + 1;
      cVar38 = cVar38 + '\a';
      cVar19 = cVar19 + '\a';
      local_108 = local_108 + 1;
    } while (lVar26 != 0x66);
    if (local_b8._0_8_ != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01abe040();
  FUN_01abec70();
  if (puVar28 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar30 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != (float *)0x0) {
    FUN_00d50b20();
  }
  if (local_c0 != (float *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != (float *)0x0) {
    FUN_00d50b20();
  }
  if (local_d8 != (float *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar12) && (local_50 != (float *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (float *)0x0) {
    FUN_00d50b20();
  }
  if (local_90 != (float *)0x0) {
    FUN_00d50b20();
  }
  return;
}

