// Function: FUN_0105f8e0
// Address: 0105f8e0
// Size: 2759 bytes
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


void FUN_0105f8e0(int64_t param_1,uint64_t param_2)

{
  uint8_t (*pauVar1) [16];
  uint8_t (*pauVar2) [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
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
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  void*puVar17;
  uint uVar18;
  uint uVar19;
  uint64_t uVar20;
  uint uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint uVar26;
  int64_t lVar27;
  uint64_t uVar28;
  uint8_t (*arg1) [16];
  uint64_t *this_ptr;
  uint uVar29;
  uint64_t uVar30;
  uint64_t uVar31;
  uint64_t uVar32;
  bool bVar33;
  uint8_t auVar34 [16];
  uint8_t auVar35 [64];
  uint8_t extraout_var [56];
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint8_t auVar38 [64];
  uint8_t auVar39 [16];
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  uint8_t auVar42 [64];
  uint8_t auVar43 [16];
  uint8_t auVar44 [64];
  uint8_t auVar45 [16];
  uint8_t auVar46 [64];
  uint8_t auVar47 [16];
  uint8_t auVar48 [16];
  uint8_t auVar49 [16];
  uint8_t auVar50 [16];
  uint8_t auVar51 [16];
  uint8_t auVar52 [16];
  uint8_t auVar53 [16];
  uint8_t auVar54 [16];
  uint8_t auVar55 [16];
  
  if ((param_2 < 0x80) && (*(uint *)((int64_t)this_ptr + 0x14) == 0)) {
    param_2 = param_2 >> 4;
    if (param_2 != 0) {
      uVar20 = this_ptr[3];
      uVar22 = this_ptr[4];
      uVar30 = *this_ptr;
      uVar31 = this_ptr[1];
      uVar23 = this_ptr[2];
      uVar24 = (uVar22 >> 2) + uVar22;
      do {
        uVar32 = uVar30 + *(int64_t *)*arg1;
        puVar17 = *arg1;
        uVar30 = (uint64_t)CARRY8(uVar30,*(uint64_t *)*arg1);
        uVar25 = uVar31 + *(uint64_t *)(puVar17 + 8);
        uVar28 = uVar25 + uVar30;
        arg1 = arg1 + 1;
        lVar27 = uVar23 + param_1 +
                 (uint64_t)(CARRY8(uVar31,*(uint64_t *)(puVar17 + 8)) || CARRY8(uVar25,uVar30));
        auVar54._8_8_ = 0;
        auVar54._0_8_ = uVar22;
        auVar53._8_8_ = 0;
        auVar53._0_8_ = uVar32;
        auVar36._8_8_ = 0;
        auVar36._0_8_ = uVar20;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar32;
        auVar55._8_8_ = 0;
        auVar55._0_8_ = uVar20;
        auVar49._8_8_ = 0;
        auVar49._0_8_ = uVar28;
        auVar54 = auVar54 * auVar53 + auVar55 * auVar49;
        uVar23 = auVar54._0_8_;
        auVar52._8_8_ = 0;
        auVar52._0_8_ = uVar24;
        auVar45._8_8_ = 0;
        auVar45._0_8_ = uVar28;
        auVar36 = auVar52 * auVar45 + auVar36 * auVar34;
        uVar32 = auVar36._0_8_;
        uVar31 = auVar36._8_8_;
        uVar30 = lVar27 * uVar24;
        uVar28 = uVar23 + uVar30;
        uVar25 = uVar31 + uVar28;
        uVar28 = auVar54._8_8_ + (uint64_t)CARRY8(uVar23,uVar30) + lVar27 * uVar20 +
                 (uint64_t)CARRY8(uVar31,uVar28);
        uVar31 = (uVar28 & 0xfffffffffffffffc) + (uVar28 >> 2);
        uVar30 = uVar32 + uVar31;
        uVar23 = (uint64_t)CARRY8(uVar32,uVar31);
        uVar31 = uVar25 + uVar23;
        uVar23 = (uVar28 & 3) + (uint64_t)CARRY8(uVar25,uVar23);
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      *this_ptr = uVar30;
      this_ptr[1] = uVar31;
      this_ptr[2] = uVar23;
    }
    return;
  }
  uVar20 = param_2 & 0xfffffffffffffff0;
  if (uVar20 == 0) {
    return;
  }
  if (*(uint *)((int64_t)this_ptr + 0x14) == 0) {
    uVar22 = *this_ptr;
    uVar30 = this_ptr[1];
    uVar31 = (uint64_t)(uint)this_ptr[2];
    if ((param_2 & 0x10) != 0) {
      bVar33 = CARRY8(uVar22,*(uint64_t *)*arg1);
      uVar22 = uVar22 + *(int64_t *)*arg1;
      uVar23 = (uint64_t)bVar33;
      bVar33 = CARRY8(uVar30,*(uint64_t *)(*arg1 + 8));
      uVar24 = uVar30 + *(uint64_t *)(*arg1 + 8);
      uVar30 = uVar24 + uVar23;
      arg1 = arg1 + 1;
      uVar31 = uVar31 + param_1 + (uint64_t)(bVar33 || CARRY8(uVar24,uVar23));
      uVar20 = uVar20 - 0x10;
      FUN_0105f660();
    }
    auVar38 = ZEXT464((uint)(uVar22 >> 0x1a) & 0x3ffffff);
    auVar42 = ZEXT464((uint)(uVar22 >> 0x34) | (uint)(uVar30 << 0xc) & 0x3ffffff);
    auVar44 = ZEXT464((uint)(uVar30 >> 0xe) & 0x3ffffff);
    auVar46 = ZEXT464((uint)(uVar31 << 0x18) | (uint)(uVar30 >> 0x28));
    *(uint *)((int64_t)this_ptr + 0x14) = 1;
    auVar35._0_8_ = FUN_0105f6e0((uint)uVar22 & 0x3ffffff);
    auVar35._8_56_ = extraout_var;
  }
  else {
    if ((param_2 & 0x10) != 0) {
      uVar22 = this_ptr[1];
      uVar30 = (*this_ptr & 0xffffffff) + ((*this_ptr & 0xffffffff80000000) >> 6);
      uVar31 = uVar30 + (uVar22 << 0x34);
      uVar22 = ((uVar22 & 0xffffffff) >> 0xc) + ((uVar22 & 0xffffffff80000000) >> 0x12) +
               (uint64_t)CARRY8(uVar30,uVar22 << 0x34);
      uVar30 = (uint64_t)(uint)this_ptr[2] << 0x28;
      uVar23 = uVar22 + uVar30;
      uVar28 = (uint64_t)((uint)this_ptr[2] >> 0x18) + (uint64_t)CARRY8(uVar22,uVar30);
      uVar22 = (uVar28 >> 2) + (uVar28 & 0xfffffffffffffffc);
      uVar30 = uVar31 + uVar22;
      uVar22 = (uint64_t)CARRY8(uVar31,uVar22);
      uVar24 = uVar23 + uVar22;
      uVar32 = uVar30 + *(int64_t *)*arg1;
      puVar17 = *arg1;
      uVar30 = (uint64_t)CARRY8(uVar30,*(uint64_t *)*arg1);
      uVar31 = uVar24 + *(uint64_t *)(puVar17 + 8);
      uVar25 = uVar31 + uVar30;
      arg1 = arg1 + 1;
      uVar22 = (uVar28 & 3) + (uint64_t)CARRY8(uVar23,uVar22) + param_1 +
               (uint64_t)(CARRY8(uVar24,*(uint64_t *)(puVar17 + 8)) || CARRY8(uVar31,uVar30));
      FUN_0105f660();
      if (param_1 == 0) {
        *this_ptr = uVar32;
        this_ptr[1] = uVar25;
        this_ptr[2] = uVar22;
      }
      else {
        uVar18 = (uint)uVar32 & 0x3ffffff;
        uVar19 = (uint)(uVar32 >> 0x1a) & 0x3ffffff;
        uVar29 = (uint)(uVar32 >> 0x34) | (int)uVar25 * 0x1000 & 0x3ffffffU;
        uVar21 = (uint)(uVar25 >> 0xe) & 0x3ffffff;
        uVar26 = (int)uVar22 * 0x1000000 | (uint)(uVar25 >> 0x28);
        uVar20 = uVar20 - 0x10;
        if (uVar20 != 0) {
          auVar35 = ZEXT464(uVar18);
          auVar38 = ZEXT464(uVar19);
          auVar42 = ZEXT464(uVar29);
          auVar44 = ZEXT464(uVar21);
          auVar46 = ZEXT464(uVar26);
          goto LAB_0105fb98;
        }
        *(uint *)this_ptr = uVar18;
        *(uint *)((int64_t)this_ptr + 4) = uVar19;
        *(uint *)(this_ptr + 1) = uVar29;
        *(uint *)((int64_t)this_ptr + 0xc) = uVar21;
        *(uint *)(this_ptr + 2) = uVar26;
      }
      return;
    }
    auVar35 = ZEXT464((uint)*this_ptr);
    auVar38 = ZEXT464(*(uint *)((int64_t)this_ptr + 4));
    auVar42 = ZEXT464((uint)this_ptr[1]);
    auVar44 = ZEXT464(*(uint *)((int64_t)this_ptr + 0xc));
    auVar46 = ZEXT464((uint)this_ptr[2]);
  }
LAB_0105fb98:
  auVar36 = auVar46._0_16_;
  auVar53 = auVar44._0_16_;
  auVar54 = auVar38._0_16_;
  auVar52 = auVar35._0_16_;
  auVar55 = auVar42._0_16_;
  uVar22 = uVar20 - 0x40;
  if (uVar20 < 0x40) {
    arg1 = arg1 + -2;
  }
  auVar34 = *(uint8_t (*) [16])(this_ptr + 6);
  pauVar1 = (uint8_t (*) [16])(this_ptr + 0xe);
  auVar49 = arg1[2];
  auVar45 = arg1[3];
  auVar48 = vpsrldq_avx(auVar49,6);
  auVar51 = vpsrldq_avx(auVar45,6);
  auVar47 = vpunpckhqdq_avx(auVar49,auVar45);
  auVar49 = vpunpcklqdq_avx(auVar49,auVar45);
  auVar48 = vpunpcklqdq_avx(auVar48,auVar51);
  auVar51 = vpsrlq_avx(auVar47,0x28);
  auVar47 = vpsrlq_avx(auVar49,0x1a);
  auVar45 = vpand_avx(auVar49,g_01060cc0);
  auVar49 = vpsrlq_avx(auVar48,4);
  auVar47 = vpand_avx(auVar47,g_01060cc0);
  auVar48 = vpsrlq_avx(auVar48,0x1e);
  auVar49 = vpand_avx(auVar49,g_01060cc0);
  auVar48 = vpand_avx(auVar48,g_01060cc0);
  auVar51 = vpor_avx(auVar51,g_01060ca0);
  if (uVar20 >= 0x40 && uVar22 != 0) {
    auVar37 = vpshufd_avx(auVar34,0xee);
    auVar34 = vpshufd_avx(auVar34,0x44);
    auVar41 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 8),0xee);
    auVar40 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 8),0x44);
    auVar43 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 10),0xee);
    auVar4 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 10),0x44);
    auVar5 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 0xc),0xee);
    auVar6 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 0xc),0x44);
    auVar7 = vpshufd_avx(*pauVar1,0xee);
    auVar8 = vpshufd_avx(*pauVar1,0x44);
    auVar9 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 0x10),0xee);
    auVar10 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 0x10),0x44);
    auVar11 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 0x12),0xee);
    auVar12 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 0x12),0x44);
    auVar13 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 0x14),0xee);
    auVar14 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 0x14),0x44);
    auVar15 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 0x16),0xee);
    auVar16 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 0x16),0x44);
    do {
      auVar54 = vpmuludq_avx(auVar34,auVar45);
      auVar53 = vpmuludq_avx(auVar34,auVar47);
      auVar52 = vpmuludq_avx(auVar34,auVar49);
      auVar55 = vpmuludq_avx(auVar34,auVar48);
      auVar36 = vpmuludq_avx(auVar34,auVar51);
      auVar39 = vpmuludq_avx(auVar51,auVar4);
      auVar3 = vpmuludq_avx(auVar40,auVar48);
      auVar54 = vpaddq_avx(auVar54,auVar39);
      auVar36 = vpaddq_avx(auVar36,auVar3);
      auVar39 = vpmuludq_avx(auVar40,auVar49);
      auVar3 = vpmuludq_avx(auVar40,auVar47);
      auVar55 = vpaddq_avx(auVar55,auVar39);
      auVar52 = vpaddq_avx(auVar52,auVar3);
      auVar39 = vpmuludq_avx(auVar40,auVar45);
      auVar3 = vpmuludq_avx(auVar6,auVar49);
      auVar53 = vpaddq_avx(auVar53,auVar39);
      auVar36 = vpaddq_avx(auVar36,auVar3);
      auVar39 = vpmuludq_avx(auVar6,auVar47);
      auVar3 = vpmuludq_avx(auVar6,auVar45);
      auVar55 = vpaddq_avx(auVar55,auVar39);
      auVar52 = vpaddq_avx(auVar52,auVar3);
      auVar39 = vpmuludq_avx(auVar8,auVar51);
      auVar3 = vpmuludq_avx(auVar8,auVar48);
      auVar53 = vpaddq_avx(auVar53,auVar39);
      auVar39 = vpaddq_avx(auVar54,auVar3);
      auVar54 = vpmuludq_avx(auVar10,auVar47);
      auVar50 = vpmuludq_avx(auVar10,auVar45);
      auVar3 = vpaddq_avx(auVar36,auVar54);
      auVar55 = vpaddq_avx(auVar55,auVar50);
      auVar54 = vpmuludq_avx(auVar12,auVar51);
      auVar36 = vpmuludq_avx(auVar12,auVar48);
      auVar52 = vpaddq_avx(auVar52,auVar54);
      auVar54 = *arg1;
      auVar53 = vpaddq_avx(auVar53,auVar36);
      auVar36 = vpmuludq_avx(auVar12,auVar49);
      auVar50 = vpmuludq_avx(auVar16,auVar49);
      auVar49 = vpaddq_avx(auVar39,auVar36);
      auVar36 = arg1[1];
      auVar53 = vpaddq_avx(auVar53,auVar50);
      auVar48 = vpmuludq_avx(auVar16,auVar48);
      auVar51 = vpmuludq_avx(auVar16,auVar51);
      auVar39 = vpsrldq_avx(auVar54,6);
      auVar52 = vpaddq_avx(auVar52,auVar48);
      auVar55 = vpaddq_avx(auVar55,auVar51);
      auVar51 = vpsrldq_avx(auVar36,6);
      auVar45 = vpmuludq_avx(auVar45,auVar14);
      auVar47 = vpmuludq_avx(auVar16,auVar47);
      auVar48 = vpunpckhqdq_avx(auVar54,auVar36);
      auVar45 = vpaddq_avx(auVar3,auVar45);
      auVar49 = vpaddq_avx(auVar49,auVar47);
      auVar54 = vpunpcklqdq_avx(auVar54,auVar36);
      auVar51 = vpunpcklqdq_avx(auVar39,auVar51);
      auVar47 = vpsrldq_avx(auVar48,5);
      auVar36 = vpsrlq_avx(auVar54,0x1a);
      auVar54 = vpand_avx(auVar54,g_01060cc0);
      auVar48 = vpsrlq_avx(auVar51,4);
      auVar36 = vpand_avx(auVar36,g_01060cc0);
      auVar47 = vpand_avx(auVar47,g_01060c80);
      auVar51 = vpsrlq_avx(auVar51,0x1e);
      auVar48 = vpand_avx(auVar48,g_01060cc0);
      auVar51 = vpand_avx(auVar51,g_01060cc0);
      auVar39 = vpor_avx(auVar47,g_01060ca0);
      auVar54 = vpaddq_avx(auVar54,auVar35._0_16_);
      auVar36 = vpaddq_avx(auVar36,auVar38._0_16_);
      auVar47 = vpaddq_avx(auVar48,auVar42._0_16_);
      auVar48 = vpaddq_avx(auVar51,auVar44._0_16_);
      auVar51 = vpaddq_avx(auVar39,auVar46._0_16_);
      pauVar2 = arg1 + 2;
      bVar33 = 0x3f < uVar22;
      uVar22 = uVar22 - 0x40;
      arg1 = arg1 + 4;
      if (!bVar33) {
        arg1 = pauVar2;
      }
      auVar39 = vpmuludq_avx(auVar37,auVar54);
      auVar3 = vpmuludq_avx(auVar37,auVar36);
      auVar49 = vpaddq_avx(auVar49,auVar39);
      auVar53 = vpaddq_avx(auVar53,auVar3);
      auVar39 = vpmuludq_avx(auVar37,auVar47);
      auVar3 = vpmuludq_avx(auVar37,auVar48);
      auVar52 = vpaddq_avx(auVar52,auVar39);
      auVar55 = vpaddq_avx(auVar55,auVar3);
      auVar39 = vpmuludq_avx(auVar37,auVar51);
      auVar3 = vpmuludq_avx(auVar51,auVar43);
      auVar45 = vpaddq_avx(auVar45,auVar39);
      auVar49 = vpaddq_avx(auVar49,auVar3);
      auVar39 = vpmuludq_avx(auVar41,auVar47);
      auVar3 = vpmuludq_avx(auVar41,auVar48);
      auVar55 = vpaddq_avx(auVar55,auVar39);
      auVar45 = vpaddq_avx(auVar45,auVar3);
      auVar39 = vpmuludq_avx(auVar41,auVar36);
      auVar3 = vpmuludq_avx(auVar41,auVar54);
      auVar52 = vpaddq_avx(auVar52,auVar39);
      auVar53 = vpaddq_avx(auVar53,auVar3);
      auVar39 = vpmuludq_avx(auVar5,auVar47);
      auVar3 = vpmuludq_avx(auVar5,auVar36);
      auVar45 = vpaddq_avx(auVar45,auVar39);
      auVar55 = vpaddq_avx(auVar55,auVar3);
      auVar39 = vpmuludq_avx(auVar5,auVar54);
      auVar3 = vpmuludq_avx(auVar7,auVar51);
      auVar52 = vpaddq_avx(auVar52,auVar39);
      auVar53 = vpaddq_avx(auVar53,auVar3);
      auVar39 = vpmuludq_avx(auVar7,auVar48);
      auVar3 = vpmuludq_avx(auVar9,auVar36);
      auVar49 = vpaddq_avx(auVar49,auVar39);
      auVar45 = vpaddq_avx(auVar45,auVar3);
      auVar39 = vpmuludq_avx(auVar9,auVar54);
      auVar3 = vpmuludq_avx(auVar11,auVar51);
      auVar39 = vpaddq_avx(auVar55,auVar39);
      auVar3 = vpaddq_avx(auVar52,auVar3);
      auVar55 = arg1[2];
      auVar52 = vpmuludq_avx(auVar11,auVar48);
      auVar50 = vpmuludq_avx(auVar11,auVar47);
      auVar53 = vpaddq_avx(auVar53,auVar52);
      auVar52 = arg1[3];
      auVar49 = vpaddq_avx(auVar49,auVar50);
      auVar47 = vpmuludq_avx(auVar15,auVar47);
      auVar48 = vpmuludq_avx(auVar15,auVar48);
      auVar50 = vpsrldq_avx(auVar55,6);
      auVar53 = vpaddq_avx(auVar53,auVar47);
      auVar47 = vpmuludq_avx(auVar15,auVar51);
      auVar51 = vpsrldq_avx(auVar52,6);
      auVar3 = vpaddq_avx(auVar3,auVar48);
      auVar39 = vpaddq_avx(auVar39,auVar47);
      auVar54 = vpmuludq_avx(auVar54,auVar13);
      auVar36 = vpmuludq_avx(auVar15,auVar36);
      auVar47 = vpunpckhqdq_avx(auVar55,auVar52);
      auVar54 = vpaddq_avx(auVar45,auVar54);
      auVar36 = vpaddq_avx(auVar49,auVar36);
      auVar55 = vpunpcklqdq_avx(auVar55,auVar52);
      auVar52 = vpunpcklqdq_avx(auVar50,auVar51);
      auVar51 = vpsrldq_avx(auVar47,5);
      auVar49 = vpsrlq_avx(auVar55,0x1a);
      auVar45 = vpand_avx(auVar55,g_01060cc0);
      auVar48 = vpsrlq_avx(auVar52,4);
      auVar47 = vpand_avx(auVar49,g_01060cc0);
      auVar55 = vpand_avx(auVar51,g_01060c80);
      auVar52 = vpsrlq_avx(auVar52,0x1e);
      auVar49 = vpand_avx(auVar48,g_01060cc0);
      auVar48 = vpand_avx(auVar52,g_01060cc0);
      auVar51 = vpor_avx(auVar55,g_01060ca0);
      auVar55 = vpsrlq_avx(auVar39,0x1a);
      auVar52 = vpand_avx(auVar39,g_01060cc0);
      auVar54 = vpaddq_avx(auVar54,auVar55);
      auVar39 = vpsrlq_avx(auVar36,0x1a);
      auVar55 = vpand_avx(auVar36,g_01060cc0);
      auVar36 = vpaddq_avx(auVar53,auVar39);
      auVar53 = vpsrlq_avx(auVar54,0x1a);
      auVar39 = vpand_avx(auVar54,g_01060cc0);
      auVar54 = vpsrlq_avx(auVar36,0x1a);
      auVar50 = vpand_avx(auVar36,g_01060cc0);
      auVar54 = vpaddq_avx(auVar3,auVar54);
      auVar36 = vpaddq_avx(auVar55,auVar53);
      auVar55 = vpsllq_avx(auVar53,2);
      auVar36 = vpaddq_avx(auVar36,auVar55);
      auVar53 = vpsrlq_avx(auVar54,0x1a);
      auVar55 = vpand_avx(auVar54,g_01060cc0);
      auVar42 = ZEXT1664(auVar55);
      auVar53 = vpaddq_avx(auVar52,auVar53);
      auVar54 = vpsrlq_avx(auVar36,0x1a);
      auVar52 = vpand_avx(auVar36,g_01060cc0);
      auVar35 = ZEXT1664(auVar52);
      auVar54 = vpaddq_avx(auVar50,auVar54);
      auVar38 = ZEXT1664(auVar54);
      auVar36 = vpsrlq_avx(auVar53,0x1a);
      auVar53 = vpand_avx(auVar53,g_01060cc0);
      auVar44 = ZEXT1664(auVar53);
      auVar36 = vpaddq_avx(auVar39,auVar36);
      auVar46 = ZEXT1664(auVar36);
    } while (bVar33 && uVar22 != 0);
  }
  auVar34 = vpshufd_avx(auVar34,0x10);
  if (uVar22 == 0xffffffffffffffe0) {
    auVar49 = vpaddq_avx(auVar49,auVar55);
    auVar45 = vpaddq_avx(auVar45,auVar52);
    auVar47 = vpaddq_avx(auVar47,auVar54);
    auVar48 = vpaddq_avx(auVar48,auVar53);
    auVar51 = vpaddq_avx(auVar51,auVar36);
  }
  auVar41 = vpmuludq_avx(auVar34,auVar49);
  auVar43 = vpmuludq_avx(auVar34,auVar45);
  auVar5 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 8),0x10);
  auVar40 = vpmuludq_avx(auVar34,auVar47);
  auVar37 = vpmuludq_avx(auVar34,auVar48);
  auVar34 = vpmuludq_avx(auVar34,auVar51);
  auVar4 = vpmuludq_avx(auVar5,auVar48);
  auVar34 = vpaddq_avx(auVar34,auVar4);
  auVar6 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 10),0x10);
  auVar4 = vpmuludq_avx(auVar5,auVar49);
  auVar37 = vpaddq_avx(auVar37,auVar4);
  auVar7 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 0xc),0x10);
  auVar4 = vpmuludq_avx(auVar5,auVar47);
  auVar41 = vpaddq_avx(auVar41,auVar4);
  auVar4 = vpmuludq_avx(auVar5,auVar45);
  auVar40 = vpaddq_avx(auVar40,auVar4);
  auVar4 = vpmuludq_avx(auVar6,auVar51);
  auVar43 = vpaddq_avx(auVar43,auVar4);
  auVar5 = vpshufd_avx(*pauVar1,0x10);
  auVar4 = vpmuludq_avx(auVar7,auVar49);
  auVar34 = vpaddq_avx(auVar34,auVar4);
  auVar4 = vpmuludq_avx(auVar7,auVar47);
  auVar37 = vpaddq_avx(auVar37,auVar4);
  auVar6 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 0x10),0x10);
  auVar4 = vpmuludq_avx(auVar7,auVar45);
  auVar41 = vpaddq_avx(auVar41,auVar4);
  auVar4 = vpmuludq_avx(auVar5,auVar51);
  auVar40 = vpaddq_avx(auVar40,auVar4);
  auVar7 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 0x12),0x10);
  auVar4 = vpmuludq_avx(auVar5,auVar48);
  auVar43 = vpaddq_avx(auVar43,auVar4);
  auVar4 = vpmuludq_avx(auVar6,auVar47);
  auVar34 = vpaddq_avx(auVar34,auVar4);
  auVar4 = vpmuludq_avx(auVar6,auVar45);
  auVar37 = vpaddq_avx(auVar37,auVar4);
  auVar5 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 0x14),0x10);
  auVar4 = vpmuludq_avx(auVar7,auVar51);
  auVar41 = vpaddq_avx(auVar41,auVar4);
  auVar6 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 0x16),0x10);
  auVar4 = vpmuludq_avx(auVar7,auVar48);
  auVar40 = vpaddq_avx(auVar40,auVar4);
  auVar4 = vpmuludq_avx(auVar7,auVar49);
  auVar43 = vpaddq_avx(auVar43,auVar4);
  auVar45 = vpmuludq_avx(auVar5,auVar45);
  auVar34 = vpaddq_avx(auVar34,auVar45);
  auVar45 = vpmuludq_avx(auVar6,auVar51);
  auVar51 = vpaddq_avx(auVar37,auVar45);
  auVar45 = vpmuludq_avx(auVar6,auVar48);
  auVar48 = vpaddq_avx(auVar41,auVar45);
  auVar49 = vpmuludq_avx(auVar6,auVar49);
  auVar45 = vpaddq_avx(auVar40,auVar49);
  auVar49 = vpmuludq_avx(auVar6,auVar47);
  auVar49 = vpaddq_avx(auVar43,auVar49);
  if (uVar22 != 0xffffffffffffffe0) {
    auVar47 = *arg1;
    auVar37 = arg1[1];
    auVar40 = vpsrldq_avx(auVar47,6);
    auVar43 = vpsrldq_avx(auVar37,6);
    auVar41 = vpunpckhqdq_avx(auVar47,auVar37);
    auVar47 = vpunpcklqdq_avx(auVar47,auVar37);
    auVar40 = vpunpcklqdq_avx(auVar40,auVar43);
    auVar43 = vpsrlq_avx(auVar41,0x28);
    auVar37 = vpsrlq_avx(auVar47,0x1a);
    auVar47 = vpand_avx(auVar47,g_01060cc0);
    auVar41 = vpsrlq_avx(auVar40,4);
    auVar37 = vpand_avx(auVar37,g_01060cc0);
    auVar40 = vpsrlq_avx(auVar40,0x1e);
    auVar41 = vpand_avx(auVar41,g_01060cc0);
    auVar40 = vpand_avx(auVar40,g_01060cc0);
    auVar43 = vpor_avx(auVar43,g_01060ca0);
    auVar4 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 6),0x32);
    auVar52 = vpaddq_avx(auVar47,auVar52);
    auVar54 = vpaddq_avx(auVar37,auVar54);
    auVar55 = vpaddq_avx(auVar41,auVar55);
    auVar53 = vpaddq_avx(auVar40,auVar53);
    auVar36 = vpaddq_avx(auVar43,auVar36);
    auVar47 = vpmuludq_avx(auVar4,auVar52);
    auVar49 = vpaddq_avx(auVar49,auVar47);
    auVar47 = vpmuludq_avx(auVar4,auVar54);
    auVar45 = vpaddq_avx(auVar45,auVar47);
    auVar47 = vpmuludq_avx(auVar4,auVar55);
    auVar47 = vpaddq_avx(auVar48,auVar47);
    auVar37 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 8),0x32);
    auVar48 = vpmuludq_avx(auVar4,auVar53);
    auVar48 = vpaddq_avx(auVar51,auVar48);
    auVar51 = vpmuludq_avx(auVar4,auVar36);
    auVar34 = vpaddq_avx(auVar34,auVar51);
    auVar51 = vpmuludq_avx(auVar37,auVar53);
    auVar34 = vpaddq_avx(auVar34,auVar51);
    auVar41 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 10),0x32);
    auVar51 = vpmuludq_avx(auVar37,auVar55);
    auVar48 = vpaddq_avx(auVar48,auVar51);
    auVar40 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 0xc),0x32);
    auVar51 = vpmuludq_avx(auVar37,auVar54);
    auVar47 = vpaddq_avx(auVar47,auVar51);
    auVar51 = vpmuludq_avx(auVar37,auVar52);
    auVar45 = vpaddq_avx(auVar45,auVar51);
    auVar51 = vpmuludq_avx(auVar41,auVar36);
    auVar49 = vpaddq_avx(auVar49,auVar51);
    auVar37 = vpshufd_avx(*pauVar1,0x32);
    auVar51 = vpmuludq_avx(auVar40,auVar55);
    auVar34 = vpaddq_avx(auVar34,auVar51);
    auVar51 = vpmuludq_avx(auVar40,auVar54);
    auVar48 = vpaddq_avx(auVar48,auVar51);
    auVar41 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 0x10),0x32);
    auVar51 = vpmuludq_avx(auVar40,auVar52);
    auVar47 = vpaddq_avx(auVar47,auVar51);
    auVar51 = vpmuludq_avx(auVar37,auVar36);
    auVar45 = vpaddq_avx(auVar45,auVar51);
    auVar40 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 0x12),0x32);
    auVar51 = vpmuludq_avx(auVar37,auVar53);
    auVar49 = vpaddq_avx(auVar49,auVar51);
    auVar51 = vpmuludq_avx(auVar41,auVar54);
    auVar34 = vpaddq_avx(auVar34,auVar51);
    auVar51 = vpmuludq_avx(auVar41,auVar52);
    auVar48 = vpaddq_avx(auVar48,auVar51);
    auVar37 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 0x14),0x32);
    auVar51 = vpmuludq_avx(auVar40,auVar36);
    auVar47 = vpaddq_avx(auVar47,auVar51);
    auVar41 = vpshufd_avx(*(uint8_t (*) [16])(this_ptr + 0x16),0x32);
    auVar51 = vpmuludq_avx(auVar40,auVar53);
    auVar45 = vpaddq_avx(auVar45,auVar51);
    auVar51 = vpmuludq_avx(auVar40,auVar55);
    auVar49 = vpaddq_avx(auVar49,auVar51);
    auVar52 = vpmuludq_avx(auVar37,auVar52);
    auVar34 = vpaddq_avx(auVar34,auVar52);
    auVar36 = vpmuludq_avx(auVar41,auVar36);
    auVar51 = vpaddq_avx(auVar48,auVar36);
    auVar36 = vpmuludq_avx(auVar41,auVar53);
    auVar48 = vpaddq_avx(auVar47,auVar36);
    auVar36 = vpmuludq_avx(auVar41,auVar55);
    auVar45 = vpaddq_avx(auVar45,auVar36);
    auVar54 = vpmuludq_avx(auVar41,auVar54);
    auVar49 = vpaddq_avx(auVar49,auVar54);
  }
  auVar36 = vpsrldq_avx(auVar34,8);
  auVar54 = vpsrldq_avx(auVar51,8);
  auVar52 = vpsrldq_avx(auVar45,8);
  auVar55 = vpsrldq_avx(auVar49,8);
  auVar53 = vpsrldq_avx(auVar48,8);
  auVar54 = vpaddq_avx(auVar51,auVar54);
  auVar36 = vpaddq_avx(auVar34,auVar36);
  auVar55 = vpaddq_avx(auVar49,auVar55);
  auVar52 = vpaddq_avx(auVar45,auVar52);
  auVar53 = vpaddq_avx(auVar48,auVar53);
  auVar49 = vpsrlq_avx(auVar54,0x1a);
  auVar34 = vpand_avx(auVar54,g_01060cc0);
  auVar54 = vpaddq_avx(auVar36,auVar49);
  auVar36 = vpsrlq_avx(auVar55,0x1a);
  auVar55 = vpand_avx(auVar55,g_01060cc0);
  auVar36 = vpaddq_avx(auVar52,auVar36);
  auVar45 = vpsrlq_avx(auVar54,0x1a);
  auVar52 = vpand_avx(auVar54,g_01060cc0);
  auVar54 = vpsrlq_avx(auVar36,0x1a);
  auVar49 = vpand_avx(auVar36,g_01060cc0);
  auVar54 = vpaddq_avx(auVar53,auVar54);
  auVar36 = vpaddq_avx(auVar55,auVar45);
  auVar55 = vpsllq_avx(auVar45,2);
  auVar36 = vpaddq_avx(auVar36,auVar55);
  auVar53 = vpsrlq_avx(auVar54,0x1a);
  auVar55 = vpand_avx(auVar54,g_01060cc0);
  auVar54 = vpaddq_avx(auVar34,auVar53);
  auVar34 = vpsrlq_avx(auVar36,0x1a);
  auVar53 = vpand_avx(auVar36,g_01060cc0);
  auVar36 = vpaddq_avx(auVar49,auVar34);
  auVar49 = vpsrlq_avx(auVar54,0x1a);
  auVar34 = vpand_avx(auVar54,g_01060cc0);
  auVar54 = vpaddq_avx(auVar52,auVar49);
  *(uint *)this_ptr = auVar53._0_4_;
  *(uint *)((int64_t)this_ptr + 4) = auVar36._0_4_;
  *(uint *)(this_ptr + 1) = auVar55._0_4_;
  *(uint *)((int64_t)this_ptr + 0xc) = auVar34._0_4_;
  *(uint *)(this_ptr + 2) = auVar54._0_4_;
  return;
}

