// Function: FUN_010604a0
// Address: 010604a0
// Size: 1931 bytes
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


void FUN_010604a0(int64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  void*puVar9;
  uint uVar10;
  uint uVar11;
  uint64_t uVar12;
  uint uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint8_t (*pauVar16) [32];
  uint uVar17;
  int64_t lVar18;
  uint64_t uVar19;
  uint8_t (*arg1) [16];
  uint64_t *this_ptr;
  uint64_t uVar20;
  uint uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  bool bVar26;
  uint8_t auVar27 [64];
  uint8_t extraout_var [56];
  uint8_t auVar28 [64];
  uint8_t auVar29 [32];
  uint8_t auVar30 [64];
  uint8_t auVar31 [64];
  uint8_t auVar32 [64];
  uint8_t auVar33 [32];
  uint8_t auVar34 [32];
  uint8_t auVar35 [32];
  uint8_t auVar36 [32];
  uint8_t auVar37 [32];
  uint8_t auVar38 [32];
  uint8_t auVar39 [32];
  uint8_t auVar40 [32];
  uint8_t auVar41 [32];
  uint8_t auVar42 [32];
  uint8_t auVar43 [32];
  uint8_t auVar44 [32];
  uint8_t auVar45 [32];
  uint8_t auVar46 [32];
  uint8_t auVar47 [32];
  uint8_t auStack_128 [240];
  uint64_t uStack_38;
  
  if ((param_2 < 0x80) && (*(uint *)((int64_t)this_ptr + 0x14) == 0)) {
    param_2 = param_2 >> 4;
    if (param_2 != 0) {
      uVar12 = this_ptr[3];
      uVar15 = this_ptr[4];
      uVar23 = *this_ptr;
      uVar20 = this_ptr[1];
      uVar19 = this_ptr[2];
      uVar24 = (uVar15 >> 2) + uVar15;
      do {
        uVar22 = uVar23 + *(int64_t *)*arg1;
        puVar9 = *arg1;
        uVar23 = (uint64_t)CARRY8(uVar23,*(uint64_t *)*arg1);
        uVar25 = uVar20 + *(uint64_t *)(puVar9 + 8);
        uVar14 = uVar25 + uVar23;
        arg1 = arg1 + 1;
        lVar18 = uVar19 + param_1 +
                 (uint64_t)(CARRY8(uVar20,*(uint64_t *)(puVar9 + 8)) || CARRY8(uVar25,uVar23));
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar15;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar22;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar12;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar22;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar12;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar14;
        auVar1 = auVar1 * auVar5 + auVar3 * auVar7;
        uVar19 = auVar1._0_8_;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar24;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar14;
        auVar2 = auVar4 * auVar8 + auVar2 * auVar6;
        uVar22 = auVar2._0_8_;
        uVar20 = auVar2._8_8_;
        uVar23 = lVar18 * uVar24;
        uVar14 = uVar19 + uVar23;
        uVar25 = uVar20 + uVar14;
        uVar14 = auVar1._8_8_ + (uint64_t)CARRY8(uVar19,uVar23) + lVar18 * uVar12 +
                 (uint64_t)CARRY8(uVar20,uVar14);
        uVar20 = (uVar14 & 0xfffffffffffffffc) + (uVar14 >> 2);
        uVar23 = uVar22 + uVar20;
        uVar19 = (uint64_t)CARRY8(uVar22,uVar20);
        uVar20 = uVar25 + uVar19;
        uVar19 = (uVar14 & 3) + (uint64_t)CARRY8(uVar25,uVar19);
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      *this_ptr = uVar23;
      this_ptr[1] = uVar20;
      this_ptr[2] = uVar19;
    }
    return;
  }
  uVar12 = param_2 & 0xfffffffffffffff0;
  if (uVar12 == 0) {
    return;
  }
  if (*(uint *)((int64_t)this_ptr + 0x14) == 0) {
    uVar15 = *this_ptr;
    uVar23 = this_ptr[1];
    uVar20 = (uint64_t)(uint)this_ptr[2];
    param_2 = param_2 & 0x30;
    while (param_2 != 0) {
      bVar26 = CARRY8(uVar15,*(uint64_t *)*arg1);
      uVar15 = uVar15 + *(int64_t *)*arg1;
      uVar19 = (uint64_t)bVar26;
      bVar26 = CARRY8(uVar23,*(uint64_t *)(*arg1 + 8));
      uVar24 = uVar23 + *(uint64_t *)(*arg1 + 8);
      uVar23 = uVar24 + uVar19;
      arg1 = arg1 + 1;
      uVar20 = uVar20 + param_1 + (uint64_t)(bVar26 || CARRY8(uVar24,uVar19));
      uVar12 = uVar12 - 0x10;
      uStack_38 = 0x10606ac;
      FUN_0105f660();
      param_2 = uVar12 & 0x3f;
    }
    auVar28 = ZEXT464((uint)(uVar15 >> 0x1a) & 0x3ffffff);
    auVar30 = ZEXT464((uint)(uVar15 >> 0x34) | (uint)(uVar23 << 0xc) & 0x3ffffff);
    auVar31 = ZEXT464((uint)(uVar23 >> 0xe) & 0x3ffffff);
    auVar32 = ZEXT464((uint)(uVar20 << 0x18) | (uint)(uVar23 >> 0x28));
    *(uint *)((int64_t)this_ptr + 0x14) = 1;
    uStack_38 = 0x106071e;
    auVar27._0_8_ = FUN_0105f6e0((uint)uVar15 & 0x3ffffff);
    auVar29 = auVar30._0_32_;
    auVar27._8_56_ = extraout_var;
  }
  else {
    if ((param_2 & 0x30) != 0) {
      uVar15 = this_ptr[1];
      uVar23 = (*this_ptr & 0xffffffff) + ((*this_ptr & 0xffffffff80000000) >> 6);
      uVar24 = uVar23 + (uVar15 << 0x34);
      uVar15 = ((uVar15 & 0xffffffff) >> 0xc) + ((uVar15 & 0xffffffff80000000) >> 0x12) +
               (uint64_t)CARRY8(uVar23,uVar15 << 0x34);
      uVar20 = (uint64_t)(uint)this_ptr[2] << 0x28;
      uVar23 = uVar15 + uVar20;
      uVar19 = (uint64_t)((uint)this_ptr[2] >> 0x18) + (uint64_t)CARRY8(uVar15,uVar20);
      uVar15 = (uVar19 >> 2) + (uVar19 & 0xfffffffffffffffc);
      uVar25 = uVar24 + uVar15;
      uVar15 = (uint64_t)CARRY8(uVar24,uVar15);
      uVar20 = uVar23 + uVar15;
      uVar15 = (uVar19 & 3) + (uint64_t)CARRY8(uVar23,uVar15);
      do {
        bVar26 = CARRY8(uVar25,*(uint64_t *)*arg1);
        uVar25 = uVar25 + *(int64_t *)*arg1;
        uVar23 = (uint64_t)bVar26;
        bVar26 = CARRY8(uVar20,*(uint64_t *)(*arg1 + 8));
        uVar19 = uVar20 + *(uint64_t *)(*arg1 + 8);
        uVar20 = uVar19 + uVar23;
        arg1 = arg1 + 1;
        uVar15 = uVar15 + param_1 + (uint64_t)(bVar26 || CARRY8(uVar19,uVar23));
        uVar12 = uVar12 - 0x10;
        uStack_38 = 0x1060581;
        FUN_0105f660();
      } while ((uVar12 & 0x3f) != 0);
      if (param_1 == 0) {
        *this_ptr = uVar25;
        this_ptr[1] = uVar20;
        this_ptr[2] = uVar15;
      }
      else {
        uVar10 = (uint)uVar25 & 0x3ffffff;
        uVar11 = (uint)(uVar25 >> 0x1a) & 0x3ffffff;
        uVar21 = (uint)(uVar25 >> 0x34) | (int)uVar20 * 0x1000 & 0x3ffffffU;
        uVar13 = (uint)(uVar20 >> 0xe) & 0x3ffffff;
        uVar17 = (int)uVar15 * 0x1000000 | (uint)(uVar20 >> 0x28);
        if (uVar12 != 0) {
          auVar27 = ZEXT464(uVar10);
          auVar28 = ZEXT464(uVar11);
          auVar29 = ZEXT432(uVar21);
          auVar31 = ZEXT464(uVar13);
          auVar32 = ZEXT464(uVar17);
          goto LAB_0106077f;
        }
        *(uint *)this_ptr = uVar10;
        *(uint *)((int64_t)this_ptr + 4) = uVar11;
        *(uint *)(this_ptr + 1) = uVar21;
        *(uint *)((int64_t)this_ptr + 0xc) = uVar13;
        *(uint *)(this_ptr + 2) = uVar17;
      }
      return;
    }
    auVar27 = ZEXT464((uint)*this_ptr);
    auVar28 = ZEXT464(*(uint *)((int64_t)this_ptr + 4));
    auVar29 = ZEXT432((uint)this_ptr[1]);
    auVar31 = ZEXT464(*(uint *)((int64_t)this_ptr + 0xc));
    auVar32 = ZEXT464((uint)this_ptr[2]);
  }
LAB_0106077f:
  auVar34 = g_01060ce0;
  auVar47 = auVar32._0_32_;
  auVar46 = auVar31._0_32_;
  auVar44 = auVar28._0_32_;
  auVar39 = auVar27._0_32_;
  pauVar16 = (uint8_t (*) [32])((uint64_t)auStack_128 & 0xfffffffffffffe00);
  auVar1 = *(uint8_t (*) [16])(this_ptr + 0xc);
  auVar2 = *(uint8_t (*) [16])(this_ptr + 0xe);
  auVar3 = *(uint8_t (*) [16])(this_ptr + 0x10);
  auVar4 = *(uint8_t (*) [16])(this_ptr + 0x12);
  auVar43 = vpermd_avx2(g_01060ce0,ZEXT1632(*(uint8_t (*) [16])(this_ptr + 6)));
  auVar5 = *(uint8_t (*) [16])(this_ptr + 0x14);
  auVar37 = vpermd_avx2(g_01060ce0,ZEXT1632(*(uint8_t (*) [16])(this_ptr + 8)));
  auVar6 = *(uint8_t (*) [16])(this_ptr + 0x16);
  auVar45 = vpermd_avx2(g_01060ce0,ZEXT1632(*(uint8_t (*) [16])(this_ptr + 10)));
  *pauVar16 = auVar43;
  auVar43 = vpermd_avx2(auVar34,ZEXT1632(auVar1));
  pauVar16[1] = auVar37;
  auVar37 = vpermd_avx2(auVar34,ZEXT1632(auVar2));
  pauVar16[2] = auVar45;
  auVar45 = vpermd_avx2(auVar34,ZEXT1632(auVar3));
  pauVar16[3] = auVar43;
  auVar43 = vpermd_avx2(auVar34,ZEXT1632(auVar4));
  pauVar16[4] = auVar37;
  auVar37 = vpermd_avx2(auVar34,ZEXT1632(auVar5));
  pauVar16[5] = auVar45;
  auVar45 = vpermd_avx2(auVar34,ZEXT1632(auVar6));
  pauVar16[6] = auVar43;
  pauVar16[7] = auVar37;
  pauVar16[8] = auVar45;
  auVar45._0_16_ = ZEXT116(0) * arg1[2] + ZEXT116(1) * *arg1;
  auVar45._16_16_ = ZEXT116(0) * SUB4816((uint8_t  [48])0x0,0) + ZEXT116(1) * arg1[2];
  auVar34._0_16_ = ZEXT116(0) * arg1[3] + ZEXT116(1) * arg1[1];
  auVar34._16_16_ = ZEXT116(0) * SUB4816((uint8_t  [48])0x0,0) + ZEXT116(1) * arg1[3];
  auVar37 = vpsrldq_avx2(auVar45,6);
  auVar40 = vpsrldq_avx2(auVar34,6);
  auVar43 = vpunpckhqdq_avx2(auVar45,auVar34);
  auVar37 = vpunpcklqdq_avx2(auVar37,auVar40);
  auVar45 = vpunpcklqdq_avx2(auVar45,auVar34);
  auVar41 = vpsrlq_avx2(auVar37,0x1e);
  auVar37 = vpsrlq_avx2(auVar37,4);
  auVar34 = vpsrlq_avx2(auVar45,0x1a);
  auVar40 = vpsrlq_avx2(auVar43,0x28);
  auVar43 = vpand_avx2(auVar37,g_01060cc0);
  auVar37 = vpand_avx2(auVar45,g_01060cc0);
  auVar45 = vpand_avx2(auVar34,g_01060cc0);
  auVar34 = vpand_avx2(auVar41,g_01060cc0);
  auVar40 = vpor_avx2(auVar40,g_01060ca0);
  auVar29 = vpaddq_avx2(auVar43,auVar29);
  while (uVar12 = uVar12 - 0x40, uVar12 != 0) {
    auVar39 = vpaddq_avx2(auVar37,auVar27._0_32_);
    auVar44 = *pauVar16;
    auVar46 = vpaddq_avx2(auVar45,auVar28._0_32_);
    auVar47 = pauVar16[1];
    auVar34 = vpaddq_avx2(auVar34,auVar31._0_32_);
    auVar43 = pauVar16[3];
    auVar40 = vpaddq_avx2(auVar40,auVar32._0_32_);
    auVar37 = pauVar16[6];
    auVar45 = pauVar16[8];
    auVar41 = vpmuludq_avx2(auVar44,auVar29);
    auVar42 = vpmuludq_avx2(auVar47,auVar29);
    auVar36 = vpmuludq_avx2(auVar43,auVar29);
    auVar35 = vpmuludq_avx2(auVar37,auVar29);
    auVar29 = vpmuludq_avx2(auVar45,auVar29);
    auVar33 = vpmuludq_avx2(auVar47,auVar39);
    auVar38 = vpmuludq_avx2(auVar47,auVar46);
    auVar29 = vpaddq_avx2(auVar29,auVar33);
    auVar41 = vpaddq_avx2(auVar41,auVar38);
    auVar47 = vpmuludq_avx2(auVar47,auVar34);
    auVar33 = vpmuludq_avx2(auVar40,pauVar16[2]);
    auVar47 = vpaddq_avx2(auVar36,auVar47);
    auVar36 = vpaddq_avx2(auVar35,auVar33);
    auVar35 = vpmuludq_avx2(auVar44,auVar39);
    auVar33 = vpmuludq_avx2(auVar44,auVar46);
    auVar36 = vpaddq_avx2(auVar36,auVar35);
    auVar29 = vpaddq_avx2(auVar29,auVar33);
    auVar35 = vpmuludq_avx2(auVar44,auVar34);
    auVar33 = vpmuludq_avx2(auVar44,auVar40);
    auVar44 = vpaddq_avx2(auVar42,auVar35);
    auVar47 = vpaddq_avx2(auVar47,auVar33);
    auVar33._0_16_ = ZEXT116(0) * arg1[6] + ZEXT116(1) * arg1[4];
    auVar33._16_16_ = ZEXT116(0) * SUB4816((uint8_t  [48])0x0,0) + ZEXT116(1) * arg1[6];
    auVar42 = vpmuludq_avx2(pauVar16[4],auVar34);
    auVar35 = vpmuludq_avx2(pauVar16[4],auVar40);
    auVar36 = vpaddq_avx2(auVar36,auVar42);
    auVar29 = vpaddq_avx2(auVar29,auVar35);
    auVar42 = vpmuludq_avx2(auVar43,auVar46);
    auVar43 = vpmuludq_avx2(auVar43,auVar39);
    auVar44 = vpaddq_avx2(auVar44,auVar42);
    auVar43 = vpaddq_avx2(auVar41,auVar43);
    auVar35._0_16_ = ZEXT116(0) * arg1[7] + ZEXT116(1) * arg1[5];
    auVar35._16_16_ = ZEXT116(0) * SUB4816((uint8_t  [48])0x0,0) + ZEXT116(1) * arg1[7];
    auVar41 = vpmuludq_avx2(pauVar16[5],auVar46);
    auVar42 = vpmuludq_avx2(pauVar16[5],auVar39);
    auVar38 = vpsrldq_avx2(auVar33,6);
    auVar47 = vpaddq_avx2(auVar47,auVar41);
    auVar44 = vpaddq_avx2(auVar44,auVar42);
    auVar41 = vpmuludq_avx2(auVar37,auVar34);
    auVar37 = vpmuludq_avx2(auVar37,auVar40);
    auVar42 = vpsrldq_avx2(auVar35,6);
    auVar29 = vpaddq_avx2(auVar29,auVar41);
    auVar43 = vpaddq_avx2(auVar43,auVar37);
    auVar41 = vpunpckhqdq_avx2(auVar33,auVar35);
    auVar37 = vpmuludq_avx2(auVar45,auVar34);
    auVar34 = vpmuludq_avx2(auVar45,auVar40);
    auVar40 = vpunpcklqdq_avx2(auVar33,auVar35);
    auVar43 = vpaddq_avx2(auVar43,auVar37);
    auVar44 = vpaddq_avx2(auVar44,auVar34);
    auVar42 = vpunpcklqdq_avx2(auVar38,auVar42);
    auVar37 = vpmuludq_avx2(auVar39,pauVar16[7]);
    auVar45 = vpmuludq_avx2(auVar45,auVar46);
    auVar47 = vpaddq_avx2(auVar47,auVar37);
    auVar37 = vpaddq_avx2(auVar36,auVar45);
    auVar34 = vpsrlq_avx2(auVar44,0x1a);
    auVar45 = vpand_avx2(auVar44,g_01060cc0);
    auVar44 = vpaddq_avx2(auVar47,auVar34);
    auVar34 = vpsrlq_avx2(auVar37,0x1a);
    auVar47 = vpand_avx2(auVar37,g_01060cc0);
    auVar29 = vpaddq_avx2(auVar29,auVar34);
    auVar46 = vpsrlq_avx2(auVar44,0x1a);
    auVar37 = vpand_avx2(auVar44,g_01060cc0);
    auVar39 = vpsrlq_avx2(auVar42,4);
    auVar44 = vpsrlq_avx2(auVar29,0x1a);
    auVar34 = vpand_avx2(auVar29,g_01060cc0);
    auVar29 = vpaddq_avx2(auVar43,auVar44);
    auVar44 = vpaddq_avx2(auVar47,auVar46);
    auVar47 = vpsllq_avx2(auVar46,2);
    auVar44 = vpaddq_avx2(auVar44,auVar47);
    auVar43 = vpand_avx2(auVar39,g_01060cc0);
    auVar36 = vpsrlq_avx2(auVar40,0x1a);
    auVar47 = vpsrlq_avx2(auVar29,0x1a);
    auVar29 = vpand_avx2(auVar29,g_01060cc0);
    auVar47 = vpaddq_avx2(auVar45,auVar47);
    auVar29 = vpaddq_avx2(auVar29,auVar43);
    auVar42 = vpsrlq_avx2(auVar42,0x1e);
    auVar43 = vpsrlq_avx2(auVar44,0x1a);
    auVar39 = vpand_avx2(auVar44,g_01060cc0);
    auVar27 = ZEXT3264(auVar39);
    auVar44 = vpaddq_avx2(auVar34,auVar43);
    auVar28 = ZEXT3264(auVar44);
    auVar43 = vpsrlq_avx2(auVar41,0x28);
    auVar45 = vpsrlq_avx2(auVar47,0x1a);
    auVar46 = vpand_avx2(auVar47,g_01060cc0);
    auVar31 = ZEXT3264(auVar46);
    auVar47 = vpaddq_avx2(auVar37,auVar45);
    auVar32 = ZEXT3264(auVar47);
    auVar37 = vpand_avx2(auVar40,g_01060cc0);
    auVar45 = vpand_avx2(auVar36,g_01060cc0);
    auVar34 = vpand_avx2(auVar42,g_01060cc0);
    auVar40 = vpor_avx2(auVar43,g_01060ca0);
    arg1 = arg1 + 4;
  }
  auVar39 = vpaddq_avx2(auVar37,auVar39);
  auVar43 = *(uint8_t (*) [32])(*pauVar16 + 4);
  auVar41 = vpaddq_avx2(auVar45,auVar44);
  auVar44 = *(uint8_t (*) [32])(pauVar16[1] + 4);
  auVar34 = vpaddq_avx2(auVar34,auVar46);
  auVar37 = *(uint8_t (*) [32])(pauVar16[3] + 4);
  auVar46 = vpaddq_avx2(auVar40,auVar47);
  auVar47 = *(uint8_t (*) [32])(pauVar16[6] + 4);
  auVar45 = *(uint8_t (*) [32])(pauVar16[8] + 4);
  auVar40 = vpmuludq_avx2(auVar43,auVar29);
  auVar42 = vpmuludq_avx2(auVar44,auVar29);
  auVar36 = vpmuludq_avx2(auVar37,auVar29);
  auVar35 = vpmuludq_avx2(auVar47,auVar29);
  auVar29 = vpmuludq_avx2(auVar45,auVar29);
  auVar33 = vpmuludq_avx2(auVar44,auVar39);
  auVar38 = vpmuludq_avx2(auVar44,auVar41);
  auVar29 = vpaddq_avx2(auVar29,auVar33);
  auVar40 = vpaddq_avx2(auVar40,auVar38);
  auVar44 = vpmuludq_avx2(auVar44,auVar34);
  auVar33 = vpmuludq_avx2(auVar46,*(uint8_t (*) [32])(pauVar16[2] + 4));
  auVar44 = vpaddq_avx2(auVar36,auVar44);
  auVar36 = vpaddq_avx2(auVar35,auVar33);
  auVar35 = vpmuludq_avx2(auVar43,auVar39);
  auVar33 = vpmuludq_avx2(auVar43,auVar41);
  auVar36 = vpaddq_avx2(auVar36,auVar35);
  auVar29 = vpaddq_avx2(auVar29,auVar33);
  auVar35 = vpmuludq_avx2(auVar43,auVar34);
  auVar33 = vpmuludq_avx2(auVar43,auVar46);
  auVar43 = vpaddq_avx2(auVar42,auVar35);
  auVar44 = vpaddq_avx2(auVar44,auVar33);
  auVar42 = vpmuludq_avx2(*(uint8_t (*) [32])(pauVar16[4] + 4),auVar34);
  auVar35 = vpmuludq_avx2(*(uint8_t (*) [32])(pauVar16[4] + 4),auVar46);
  auVar36 = vpaddq_avx2(auVar36,auVar42);
  auVar29 = vpaddq_avx2(auVar29,auVar35);
  auVar42 = vpmuludq_avx2(auVar37,auVar41);
  auVar37 = vpmuludq_avx2(auVar37,auVar39);
  auVar43 = vpaddq_avx2(auVar43,auVar42);
  auVar37 = vpaddq_avx2(auVar40,auVar37);
  auVar40 = vpmuludq_avx2(*(uint8_t (*) [32])(pauVar16[5] + 4),auVar41);
  auVar42 = vpmuludq_avx2(*(uint8_t (*) [32])(pauVar16[5] + 4),auVar39);
  auVar44 = vpaddq_avx2(auVar44,auVar40);
  auVar43 = vpaddq_avx2(auVar43,auVar42);
  auVar40 = vpmuludq_avx2(auVar47,auVar34);
  auVar47 = vpmuludq_avx2(auVar47,auVar46);
  auVar29 = vpaddq_avx2(auVar29,auVar40);
  auVar47 = vpaddq_avx2(auVar37,auVar47);
  auVar37 = vpmuludq_avx2(auVar45,auVar34);
  auVar34 = vpmuludq_avx2(auVar45,auVar46);
  auVar47 = vpaddq_avx2(auVar47,auVar37);
  auVar43 = vpaddq_avx2(auVar43,auVar34);
  auVar37 = vpmuludq_avx2(auVar39,*(uint8_t (*) [32])(pauVar16[7] + 4));
  auVar45 = vpmuludq_avx2(auVar45,auVar41);
  auVar44 = vpaddq_avx2(auVar44,auVar37);
  auVar37 = vpaddq_avx2(auVar36,auVar45);
  auVar39 = vpsrldq_avx2(auVar29,8);
  auVar46 = vpsrldq_avx2(auVar47,8);
  auVar40 = vpsrldq_avx2(auVar43,8);
  auVar45 = vpsrldq_avx2(auVar44,8);
  auVar34 = vpsrldq_avx2(auVar37,8);
  auVar29 = vpaddq_avx2(auVar29,auVar39);
  auVar47 = vpaddq_avx2(auVar47,auVar46);
  auVar43 = vpaddq_avx2(auVar43,auVar40);
  auVar44 = vpaddq_avx2(auVar44,auVar45);
  auVar37 = vpaddq_avx2(auVar37,auVar34);
  auVar45 = vpermq_avx2(auVar43,2);
  auVar34 = vpermq_avx2(auVar44,2);
  auVar39 = vpermq_avx2(auVar37,2);
  auVar46 = vpermq_avx2(auVar29,2);
  auVar40 = vpermq_avx2(auVar47,2);
  auVar43 = vpaddq_avx2(auVar43,auVar45);
  auVar44 = vpaddq_avx2(auVar44,auVar34);
  auVar37 = vpaddq_avx2(auVar37,auVar39);
  auVar29 = vpaddq_avx2(auVar29,auVar46);
  auVar47 = vpaddq_avx2(auVar47,auVar40);
  auVar45 = vpsrlq_avx2(auVar43,0x1a);
  auVar43 = vpand_avx2(auVar43,g_01060cc0);
  auVar44 = vpaddq_avx2(auVar44,auVar45);
  auVar45 = vpsrlq_avx2(auVar37,0x1a);
  auVar37 = vpand_avx2(auVar37,g_01060cc0);
  auVar29 = vpaddq_avx2(auVar29,auVar45);
  auVar39 = vpsrlq_avx2(auVar44,0x1a);
  auVar45 = vpand_avx2(auVar44,g_01060cc0);
  auVar44 = vpsrlq_avx2(auVar29,0x1a);
  auVar34 = vpand_avx2(auVar29,g_01060cc0);
  auVar29 = vpaddq_avx2(auVar47,auVar44);
  auVar44 = vpaddq_avx2(auVar37,auVar39);
  auVar47 = vpsllq_avx2(auVar39,2);
  auVar44 = vpaddq_avx2(auVar44,auVar47);
  auVar37 = vpsrlq_avx2(auVar29,0x1a);
  auVar47 = vpand_avx2(auVar29,g_01060cc0);
  auVar29 = vpaddq_avx2(auVar43,auVar37);
  auVar37 = vpsrlq_avx2(auVar44,0x1a);
  auVar43 = vpand_avx2(auVar44,g_01060cc0);
  auVar44 = vpaddq_avx2(auVar34,auVar37);
  auVar34 = vpsrlq_avx2(auVar29,0x1a);
  auVar37 = vpand_avx2(auVar29,g_01060cc0);
  auVar29 = vpaddq_avx2(auVar45,auVar34);
  *(uint *)this_ptr = auVar43._0_4_;
  *(uint *)((int64_t)this_ptr + 4) = auVar44._0_4_;
  *(uint *)(this_ptr + 1) = auVar47._0_4_;
  *(uint *)((int64_t)this_ptr + 0xc) = auVar37._0_4_;
  *(uint *)(this_ptr + 2) = auVar29._0_4_;
  return;
}

