// Function: FUN_014a3550
// Address: 014a3550
// Size: 843 bytes
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


void FUN_014a3550(double param_1,float param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int64_t in_RCX;
  int iVar9;
  int64_t in_RDX;
  uint64_t uVar10;
  int64_t *arg1;
  uint64_t uVar11;
  int64_t lVar12;
  int iVar13;
  uint64_t uVar14;
  int in_R8D;
  uint uVar15;
  int64_t lVar16;
  int64_t lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  uint8_t auVar21 [16];
  uint8_t auVar23 [16];
  float fVar25;
  uint8_t auVar24 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  
  iVar13 = (int)((double)param_2 * param_1);
  if (iVar13 < 1) {
    iVar13 = 1;
  }
  iVar4 = 1;
  if (0 < (int)((double)param_3 * param_1)) {
    iVar4 = (int)((double)param_3 * param_1);
  }
  lVar12 = *arg1;
  if (0 < *(int *)(lVar12 + 0xc)) {
    fVar19 = g_02390124 / (float)iVar4;
    uVar7 = in_R8D - 1;
    lVar17 = 0;
    lVar16 = 0;
    bVar5 = false;
    do {
      lVar12 = *(int64_t *)(*(int64_t *)(lVar12 + 0x10) + lVar17 * 8);
      if (lVar16 == lVar12) {
        if ((!bVar5) && (lVar16 != 0)) {
          FUN_00d50b00();
          bVar5 = true;
        }
      }
      else {
        if (lVar12 != 0) {
          FUN_00d50b00();
        }
        if ((bVar5) && (lVar16 != 0)) {
          bVar5 = true;
          FUN_00d50b20();
          lVar16 = lVar12;
        }
        else {
          bVar5 = true;
          lVar16 = lVar12;
        }
      }
      uVar15 = (uint)(*(double *)(lVar16 + 0x10) * param_1);
      uVar8 = uVar15 + 1;
      uVar6 = uVar8 - iVar4;
      if ((int)(uVar8 - iVar4) < 0) {
        uVar6 = 0;
      }
      uVar10 = (uint64_t)uVar6;
      uVar2 = uVar7;
      if ((int)uVar8 < in_R8D) {
        uVar2 = uVar8;
      }
      uVar1 = *(uint *)(in_RDX + uVar10 * 4);
      auVar21 = ZEXT416(*(uint *)(in_RCX + uVar10 * 4));
      auVar24 = insertps(ZEXT416(uVar1),auVar21,0x10);
      auVar23 = ZEXT816(0);
      if ((int)uVar6 < (int)uVar2) {
        uVar11 = (uint64_t)uVar2;
        auVar21 = insertps(auVar21,ZEXT416(uVar1),0x10);
        fVar20 = auVar21._0_4_ + g_0238ff00;
        fVar22 = auVar21._4_4_ + _UNK_0238ff04;
        auVar21._0_4_ = (auVar24._0_4_ + auVar24._0_4_) * g_023945d0;
        auVar21._4_4_ = (auVar24._4_4_ + auVar24._4_4_) * _UNK_023945d4;
        auVar21._8_4_ = (auVar24._8_4_ + auVar24._8_4_) * _UNK_023945d8;
        auVar21._12_4_ = (auVar24._12_4_ + auVar24._12_4_) * _UNK_023945dc;
        uVar14 = uVar10 + 1;
        auVar24 = auVar21;
        if (uVar14 != uVar11) {
          if ((~uVar6 + uVar2 & 1) != 0) {
            uVar6 = *(uint *)(in_RCX + 4 + uVar10 * 4);
            auVar24 = ZEXT416(*(uint *)(in_RDX + 4 + uVar10 * 4));
            auVar29 = insertps(ZEXT416(uVar6),auVar24,0x10);
            fVar20 = fVar20 + auVar29._0_4_;
            fVar22 = fVar22 + auVar29._4_4_;
            auVar24 = insertps(auVar24,ZEXT416(uVar6),0x10);
            auVar21._0_4_ = (auVar21._0_4_ + auVar24._0_4_) * g_023945d0;
            auVar21._4_4_ = (auVar21._4_4_ + auVar24._4_4_) * _UNK_023945d4;
            auVar21._8_4_ = (auVar21._8_4_ + auVar24._8_4_) * _UNK_023945d8;
            auVar21._12_4_ = (auVar21._12_4_ + auVar24._12_4_) * _UNK_023945dc;
            uVar14 = uVar10 + 2;
          }
          auVar24 = auVar21;
          if (uVar11 - 2 != uVar10) {
            do {
              uVar6 = *(uint *)(in_RCX + uVar14 * 4);
              uVar2 = *(uint *)(in_RCX + 4 + uVar14 * 4);
              auVar24 = ZEXT416(*(uint *)(in_RDX + uVar14 * 4));
              auVar29 = ZEXT416(*(uint *)(in_RDX + 4 + uVar14 * 4));
              auVar31 = insertps(ZEXT416(uVar6),auVar24,0x10);
              auVar30 = insertps(auVar24,ZEXT416(uVar6),0x10);
              auVar24 = insertps(ZEXT416(uVar2),auVar29,0x10);
              fVar20 = auVar24._0_4_ + auVar31._0_4_ + fVar20;
              fVar22 = auVar24._4_4_ + auVar31._4_4_ + fVar22;
              auVar29 = insertps(auVar29,ZEXT416(uVar2),0x10);
              auVar24._0_8_ =
                   CONCAT44((auVar29._4_4_ + (auVar30._4_4_ + auVar21._4_4_) * _UNK_023945d4) *
                            _UNK_023945d4,
                            (auVar29._0_4_ + (auVar30._0_4_ + auVar21._0_4_) * g_023945d0) *
                            g_023945d0);
              auVar24._8_4_ =
                   (auVar29._8_4_ + (auVar30._8_4_ + auVar21._8_4_) * _UNK_023945d8) * _UNK_023945d8
              ;
              auVar24._12_4_ =
                   (auVar29._12_4_ + (auVar30._12_4_ + auVar21._12_4_) * _UNK_023945dc) *
                   _UNK_023945dc;
              uVar14 = uVar14 + 2;
              auVar21._8_4_ = auVar24._8_4_;
              auVar21._0_8_ = auVar24._0_8_;
              auVar21._12_4_ = auVar24._12_4_;
            } while (uVar11 != uVar14);
          }
        }
      }
      else {
        fVar20 = 0.0;
        fVar22 = 0.0;
      }
      uVar6 = uVar8;
      if ((int)uVar15 < -1) {
        uVar6 = 0;
      }
      uVar2 = iVar13 + uVar8;
      if (in_R8D <= (int)(iVar13 + uVar8)) {
        uVar2 = uVar7;
      }
      fVar27 = 0.0;
      fVar28 = 0.0;
      if ((int)uVar6 < (int)uVar2) {
        uVar1 = uVar8 + iVar4;
        if (in_R8D <= (int)(uVar8 + iVar4)) {
          uVar1 = uVar7;
        }
        lVar12 = (int64_t)(int)uVar6;
        iVar9 = uVar2 - uVar6;
        auVar23 = ZEXT816(0);
        fVar28 = 0.0;
        fVar27 = 0.0;
        do {
          fVar18 = *(float *)(in_RDX + lVar12 * 4);
          if (lVar12 < (int)uVar1) {
            fVar28 = fVar28 + fVar18;
            fVar25 = *(float *)(in_RCX + lVar12 * 4);
            fVar27 = fVar27 + fVar25;
          }
          else {
            fVar25 = *(float *)(in_RCX + lVar12 * 4);
          }
          auVar21 = insertps(ZEXT416((uint)fVar18),ZEXT416((uint)fVar25),0x10);
          fVar18 = auVar24._4_4_;
          fVar25 = auVar24._8_4_;
          fVar26 = auVar24._12_4_;
          auVar24._0_4_ = (auVar24._0_4_ + auVar21._0_4_) * g_023945d0;
          auVar24._4_4_ = (fVar18 + auVar21._4_4_) * _UNK_023945d4;
          auVar24._8_4_ = (fVar25 + auVar21._8_4_) * _UNK_023945d8;
          auVar24._12_4_ = (fVar26 + auVar21._12_4_) * _UNK_023945dc;
          auVar29._4_4_ = -(uint)(auVar23._4_4_ < auVar24._4_4_);
          auVar29._0_4_ = -(uint)(auVar23._0_4_ < auVar24._0_4_);
          auVar29._8_4_ = -(uint)(auVar23._8_4_ < auVar24._8_4_);
          auVar29._12_4_ = -(uint)(auVar23._12_4_ < auVar24._12_4_);
          auVar30._4_4_ = auVar24._0_4_;
          auVar30._0_4_ = auVar24._0_4_;
          auVar30._8_4_ = auVar24._8_4_;
          auVar30._12_4_ = auVar24._8_4_;
          auVar23 = blendvps(auVar23,auVar30,auVar29);
          lVar12 = lVar12 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      fVar18 = *(float *)(in_RDX + (int64_t)(int)uVar8 * 4);
      if (-1 < (int)uVar15) {
        fVar18 = (fVar18 + *(float *)(in_RDX + (uint64_t)uVar15 * 4)) * g_0239011c;
      }
      fVar25 = fVar18;
      if (fVar22 * fVar19 <= fVar18) {
        fVar25 = fVar22 * fVar19;
      }
      *(float *)(lVar16 + 0x28) = fVar18;
      *(float *)(lVar16 + 0x2c) = fVar28 * fVar19 - fVar25;
      *(float *)(lVar16 + 0x30) = (fVar27 - fVar20) * fVar19;
      *(int *)(lVar16 + 0x34) = auVar23._0_4_;
      uVar3 = extractps(auVar23,1);
      *(void*)(lVar16 + 0x38) = uVar3;
      lVar17 = lVar17 + 1;
      lVar12 = *arg1;
    } while (lVar17 < *(int *)(lVar12 + 0xc));
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  return;
}

