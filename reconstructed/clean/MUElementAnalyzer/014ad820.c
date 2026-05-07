// Function: FUN_014ad820
// Address: 014ad820
// Size: 1032 bytes
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


void FUN_014ad820(double param_1,double param_2,int param_3,int64_t *param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  float *pfVar3;
  uint8_t auVar4 [12];
  bool bVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint in_ECX;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t in_RDX;
  uint uVar11;
  uint64_t uVar12;
  int64_t arg1;
  int64_t lVar13;
  uint64_t uVar14;
  float fVar15;
  uint8_t auVar16 [16];
  float fVar21;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  float fVar22;
  float fVar23;
  uint8_t local_58 [16];
  int64_t local_40;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  
  lVar7 = *param_4;
  if (*(int *)(lVar7 + 0xc) < 1) {
    bVar5 = false;
    local_40 = 0;
    uVar11 = in_ECX;
  }
  else {
    lVar13 = 0;
    uVar9 = (uint64_t)in_ECX;
    local_40 = 0;
    bVar5 = false;
    do {
      lVar7 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + lVar13 * 8);
      if (local_40 == lVar7) {
        if ((!bVar5) && (local_40 != 0)) {
          bVar5 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        if ((bVar5) && (local_40 != 0)) {
          FUN_00d50b20();
          bVar5 = true;
          local_40 = lVar7;
        }
        else {
          bVar5 = true;
          local_40 = lVar7;
        }
      }
      iVar6 = (int)(*(double *)(local_40 + 0x10) * param_1);
      if (((int)in_ECX < iVar6 + -5) && (iVar6 + 5 < param_3)) {
        uVar8 = (uint64_t)(iVar6 + -4);
        uVar14 = 0;
        fVar15 = *(float *)(arg1 + (int64_t)(iVar6 + -5) * 4);
        fVar21 = 0.0;
        do {
          fVar22 = *(float *)(arg1 + uVar8 * 4);
          fVar23 = (float)((uint)(fVar22 - fVar15) & g_02390140);
          uVar1 = uVar8 & 0xffffffff;
          if (fVar23 <= fVar21 || fVar23 <= g_023908ec) {
            fVar23 = fVar21;
            uVar1 = uVar14;
          }
          uVar14 = uVar1;
          uVar8 = uVar8 + 1;
          fVar15 = fVar22;
          fVar21 = fVar23;
        } while ((int64_t)uVar8 < (int64_t)(iVar6 + 5));
        if ((int)uVar14 != 0) {
          FUN_015c1480(1,(int)uVar14 - (int)uVar9);
          uVar9 = uVar14;
        }
      }
      lVar13 = lVar13 + 1;
      lVar7 = *param_4;
      uVar11 = (uint)uVar9;
    } while (lVar13 < *(int *)(lVar7 + 0xc));
  }
  FUN_015c1480(1,param_3 - uVar11);
  if ((int)in_ECX < param_3) {
    fVar15 = (float)param_2;
    uVar14 = (uint64_t)(int)in_ECX;
    uVar8 = (uint64_t)param_3;
    uVar9 = uVar8 - uVar14;
    if (3 < uVar9) {
      uVar1 = in_RDX + uVar14 * 4;
      uVar2 = arg1 + uVar14 * 4;
      if ((arg1 + uVar8 * 4 <= uVar1) || (in_RDX + uVar8 * 4 <= uVar2)) {
        uVar10 = uVar9 & 0xfffffffffffffffc;
        uVar14 = uVar14 + uVar10;
        uVar12 = 0;
        do {
          auVar16._4_4_ = fVar15;
          auVar16._0_4_ = fVar15;
          auVar16._8_4_ = fVar15;
          auVar16._12_4_ = fVar15;
          auVar16 = divps(auVar16,*(uint8_t (*) [16])(uVar2 + uVar12 * 4));
          fVar21 = auVar16._4_4_ * _UNK_02394164;
          auVar18._8_4_ = auVar16._8_4_ * _UNK_02394168;
          auVar18._12_4_ = auVar16._12_4_ * _UNK_0239416c;
          local_58._0_8_ = _logf();
          local_58._8_8_ = extraout_XMM0_Qb;
          auVar17._0_8_ = _logf();
          auVar17._8_8_ = extraout_XMM0_Qb_00;
          auVar16 = insertps(local_58,auVar17,0x10);
          auVar4._4_8_ = extraout_XMM0_Qb_00;
          auVar4._0_4_ = fVar21;
          auVar18._0_8_ = auVar4._0_8_ << 0x20;
          auVar19._0_8_ = _logf(auVar18._8_8_);
          auVar19._8_8_ = extraout_XMM0_Qb_01;
          auVar16 = insertps(auVar16,auVar19,0x20);
          auVar20._0_8_ = _logf();
          auVar20._8_8_ = extraout_XMM0_Qb_02;
          auVar16 = insertps(auVar16,auVar20,0x30);
          fVar21 = auVar16._4_4_ * _UNK_02394174;
          fVar22 = auVar16._8_4_ * _UNK_02394178;
          fVar23 = auVar16._12_4_ * _UNK_0239417c;
          pfVar3 = (float *)(uVar1 + uVar12 * 4);
          *pfVar3 = auVar16._0_4_ * g_02394170;
          pfVar3[1] = fVar21;
          pfVar3[2] = fVar22;
          pfVar3[3] = fVar23;
          uVar12 = uVar12 + 4;
        } while (uVar10 != uVar12);
        if (uVar9 == uVar10) goto LAB_014adc2d;
      }
    }
    uVar9 = ~uVar14;
    if ((param_3 - (int)uVar14 & 1U) != 0) {
      fVar21 = (float)_logf((fVar15 / *(float *)(arg1 + uVar14 * 4)) * g_02394204);
      *(float *)(in_RDX + uVar14 * 4) = fVar21 * g_02394208;
      uVar14 = uVar14 + 1;
    }
    if (uVar9 + uVar8 != 0) {
      do {
        fVar21 = (float)_logf((fVar15 / *(float *)(arg1 + uVar14 * 4)) * g_02394204);
        *(float *)(in_RDX + uVar14 * 4) = fVar21 * g_02394208;
        fVar21 = (float)_logf((fVar15 / *(float *)(arg1 + 4 + uVar14 * 4)) * g_02394204);
        *(float *)(in_RDX + 4 + uVar14 * 4) = fVar21 * g_02394208;
        uVar14 = uVar14 + 2;
      } while (uVar8 != uVar14);
    }
  }
LAB_014adc2d:
  if ((bVar5) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}

