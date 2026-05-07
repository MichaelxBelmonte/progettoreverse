// Function: FUN_014b9ce0
// Address: 014b9ce0
// Size: 1133 bytes
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


int64_t * FUN_014b9ce0(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint32_t uVar12;
  uint uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int64_t lVar17;
  int64_t *this_ptr;
  uint64_t uVar18;
  int64_t lVar19;
  uint64_t uVar20;
  uint32_t uVar21;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dc_01;
  uint32_t extraout_XMM0_Dc_02;
  uint32_t extraout_XMM0_Dc_03;
  uint32_t extraout_XMM0_Dc_04;
  uint32_t extraout_XMM0_Dc_05;
  uint32_t extraout_XMM0_Dc_06;
  uint32_t extraout_XMM0_Dc_07;
  uint32_t extraout_XMM0_Dc_08;
  uint32_t extraout_XMM0_Dc_09;
  uint32_t extraout_XMM0_Dc_10;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint32_t extraout_XMM0_Dd_01;
  uint32_t extraout_XMM0_Dd_02;
  uint32_t extraout_XMM0_Dd_03;
  uint32_t extraout_XMM0_Dd_04;
  uint32_t extraout_XMM0_Dd_05;
  uint32_t extraout_XMM0_Dd_06;
  uint32_t extraout_XMM0_Dd_07;
  uint32_t extraout_XMM0_Dd_08;
  uint32_t extraout_XMM0_Dd_09;
  uint32_t extraout_XMM0_Dd_10;
  uint8_t auVar22 [16];
  int64_t local_68;
  char local_60;
  uint8_t local_48 [16];
  
  lVar19 = g_028acf48;
  if ((g_028acf48 == 0) || (g_028acf51 == '\0')) {
    FUN_00e8cb50();
    if (g_028acf48 == 0) {
      uVar13 = FUN_00e7d780(g_023b2d70);
      uVar14 = FUN_00e83da0();
      FUN_00c8e690();
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      lVar19 = g_028acf48;
      if ((g_028acf48 != local_68) && (g_028acf48 = local_68, lVar19 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        if (g_028acf50 == '\0') {
          g_028acf50 = '\x01';
          FUN_00e8cb90();
        }
        if (local_68 != 0 && lVar19 == local_68) {
          FUN_00d50b20();
        }
      }
      if (0 < (int)uVar13) {
        uVar2 = *(uint64_t *)(g_028acf48 + 0x10);
        uVar15 = (uint64_t)uVar13;
        if ((uVar13 < 4) || ((uVar2 < uVar14 + uVar15 * 4 && (uVar14 < uVar15 * 4 + uVar2)))) {
          uVar20 = 0;
        }
        else {
          uVar20 = (uint64_t)(uVar13 & 0xfffffffc);
          uVar16 = (uVar20 - 4 >> 2) + 1;
          if (uVar20 - 4 == 0) {
            lVar19 = 0;
          }
          else {
            lVar17 = -(uVar16 & 0xfffffffffffffffe);
            lVar19 = 0;
            do {
              lVar1 = uVar14 + lVar19 * 4;
              uVar21 = *(void*)(lVar1 + 4);
              uVar12 = *(void*)(lVar1 + 0xc);
              local_48._0_8_ = _powf();
              local_48._8_4_ = extraout_XMM0_Dc;
              local_48._12_4_ = extraout_XMM0_Dd;
              uVar3 = _powf(uVar21);
              auVar22._8_4_ = extraout_XMM0_Dc_00;
              auVar22._0_8_ = uVar3;
              auVar22._12_4_ = extraout_XMM0_Dd_00;
              auVar22 = insertps(local_48,auVar22,0x10);
              uVar3 = _powf(*(void*)(uVar14 + 8 + lVar19 * 4));
              auVar4._8_4_ = extraout_XMM0_Dc_01;
              auVar4._0_8_ = uVar3;
              auVar4._12_4_ = extraout_XMM0_Dd_01;
              auVar22 = insertps(auVar22,auVar4,0x20);
              uVar3 = _powf(uVar12);
              auVar5._8_4_ = extraout_XMM0_Dc_02;
              auVar5._0_8_ = uVar3;
              auVar5._12_4_ = extraout_XMM0_Dd_02;
              auVar22 = insertps(auVar22,auVar5,0x30);
              *(uint8_t (*) [16])(uVar2 + lVar19 * 4) = auVar22;
              lVar1 = uVar14 + 0x10 + lVar19 * 4;
              uVar21 = *(void*)(lVar1 + 4);
              uVar12 = *(void*)(lVar1 + 0xc);
              local_48._0_8_ = _powf();
              local_48._8_4_ = extraout_XMM0_Dc_03;
              local_48._12_4_ = extraout_XMM0_Dd_03;
              uVar3 = _powf(uVar21);
              auVar6._8_4_ = extraout_XMM0_Dc_04;
              auVar6._0_8_ = uVar3;
              auVar6._12_4_ = extraout_XMM0_Dd_04;
              auVar22 = insertps(local_48,auVar6,0x10);
              uVar3 = _powf(*(void*)(uVar14 + 0x18 + lVar19 * 4));
              auVar7._8_4_ = extraout_XMM0_Dc_05;
              auVar7._0_8_ = uVar3;
              auVar7._12_4_ = extraout_XMM0_Dd_05;
              auVar22 = insertps(auVar22,auVar7,0x20);
              uVar3 = _powf(uVar12);
              auVar8._8_4_ = extraout_XMM0_Dc_06;
              auVar8._0_8_ = uVar3;
              auVar8._12_4_ = extraout_XMM0_Dd_06;
              auVar22 = insertps(auVar22,auVar8,0x30);
              *(uint8_t (*) [16])(uVar2 + 0x10 + lVar19 * 4) = auVar22;
              lVar19 = lVar19 + 8;
              lVar17 = lVar17 + 2;
            } while (lVar17 != 0);
          }
          if ((uVar16 & 1) != 0) {
            lVar17 = uVar14 + lVar19 * 4;
            uVar21 = *(void*)(lVar17 + 4);
            uVar12 = *(void*)(lVar17 + 0xc);
            local_48._0_8_ = _powf();
            local_48._8_4_ = extraout_XMM0_Dc_07;
            local_48._12_4_ = extraout_XMM0_Dd_07;
            uVar3 = _powf(uVar21);
            auVar9._8_4_ = extraout_XMM0_Dc_08;
            auVar9._0_8_ = uVar3;
            auVar9._12_4_ = extraout_XMM0_Dd_08;
            auVar22 = insertps(local_48,auVar9,0x10);
            uVar3 = _powf(*(void*)(uVar14 + 8 + lVar19 * 4));
            auVar10._8_4_ = extraout_XMM0_Dc_09;
            auVar10._0_8_ = uVar3;
            auVar10._12_4_ = extraout_XMM0_Dd_09;
            auVar22 = insertps(auVar22,auVar10,0x20);
            uVar3 = _powf(uVar12);
            auVar11._8_4_ = extraout_XMM0_Dc_10;
            auVar11._0_8_ = uVar3;
            auVar11._12_4_ = extraout_XMM0_Dd_10;
            auVar22 = insertps(auVar22,auVar11,0x30);
            *(uint8_t (*) [16])(uVar2 + lVar19 * 4) = auVar22;
          }
          if (uVar20 == uVar15) goto LAB_014ba0fe;
        }
        uVar18 = ~uVar20;
        uVar16 = uVar15 & 3;
        if ((uVar13 & 3) != 0) {
          do {
            uVar21 = _powf(*(void*)(uVar14 + uVar20 * 4));
            *(void*)(uVar2 + uVar20 * 4) = uVar21;
            uVar20 = uVar20 + 1;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        if (2 < uVar18 + uVar15) {
          do {
            uVar21 = _powf(*(void*)(uVar14 + uVar20 * 4));
            *(void*)(uVar2 + uVar20 * 4) = uVar21;
            uVar21 = _powf(*(void*)(uVar14 + 4 + uVar20 * 4));
            *(void*)(uVar2 + 4 + uVar20 * 4) = uVar21;
            uVar21 = _powf(*(void*)(uVar14 + 8 + uVar20 * 4));
            *(void*)(uVar2 + 8 + uVar20 * 4) = uVar21;
            uVar21 = _powf(*(void*)(uVar14 + 0xc + uVar20 * 4));
            *(void*)(uVar2 + 0xc + uVar20 * 4) = uVar21;
            uVar20 = uVar20 + 4;
          } while (uVar15 != uVar20);
        }
      }
LAB_014ba0fe:
      FUN_00e83070();
      g_028acf51 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028acf51 = '\x01';
      FUN_00e8cb70();
    }
    lVar19 = g_028acf48;
    *(void*)(this_ptr + 1) = 0;
    if (lVar19 == 0) {
      lVar19 = 0;
      goto LAB_014ba12f;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_014ba12f:
  *this_ptr = lVar19;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

