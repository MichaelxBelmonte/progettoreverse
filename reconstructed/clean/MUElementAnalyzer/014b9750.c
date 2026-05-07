// Function: FUN_014b9750
// Address: 014b9750
// Size: 1299 bytes
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


void FUN_014b9750(float param_1,int64_t *param_2,int64_t *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint64_t uVar14;
  int64_t lVar15;
  int64_t *in_RCX;
  uint64_t uVar16;
  uint uVar17;
  int64_t *arg1;
  int iVar18;
  int64_t *this_ptr;
  uint64_t uVar19;
  uint64_t uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int64_t local_a0;
  char local_98;
  
  uVar4 = *(uint *)(*this_ptr + 0xc);
  uVar14 = (uint64_t)uVar4;
  iVar12 = *(int *)(*param_3 + 0x18);
  iVar18 = iVar12 + 3;
  if (-1 < iVar12) {
    iVar18 = iVar12;
  }
  uVar21 = iVar18 >> 2;
  fVar1 = *(float *)(*(int64_t *)(*param_3 + 0x10) + 4);
  iVar12 = FUN_00e7d780(param_1 / fVar1);
  uVar13 = iVar12 + 2U;
  if ((int)uVar21 < (int)(iVar12 + 2U)) {
    uVar13 = uVar21;
  }
  FUN_014b9ce0();
  if ((local_98 == '\0') && (local_a0 != 0)) {
    FUN_00d50b00();
  }
  if (0 < (int)uVar4) {
    fVar22 = g_02390124 / fVar1;
    uVar16 = 0;
    do {
      lVar15 = *(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + uVar16 * 8);
      lVar5 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar16 * 8);
      iVar12 = *(int *)(lVar15 + 0x18);
      iVar18 = iVar12 + 3;
      if (-1 < iVar12) {
        iVar18 = iVar12;
      }
      lVar6 = *(int64_t *)(*(int64_t *)(*param_2 + 0x10) + uVar16 * 8);
      ___bzero();
      fVar3 = g_0240e314;
      uVar11 = g_02390140;
      lVar15 = *(int64_t *)(lVar15 + 0x10);
      fVar23 = *(float *)(lVar15 + 4) * g_0240ded4;
      uVar9 = iVar18 >> 2;
      if (iVar18 >> 2 < 2) {
        uVar9 = 1;
      }
      if (7 < iVar12) {
        lVar5 = *(int64_t *)(lVar5 + 0x10);
        uVar20 = 1;
        do {
          fVar2 = *(float *)(lVar15 + uVar20 * 4);
          if (param_1 < fVar2) break;
          fVar25 = (float)((uint)SQRT((float)(int)uVar20) & uVar11) * fVar23;
          fVar24 = fVar1;
          if (fVar1 <= fVar25) {
            fVar24 = fVar25;
          }
          iVar12 = (int)((fVar2 - fVar24) * fVar22);
          iVar18 = (int)((fVar24 + fVar2) * fVar22);
          uVar10 = iVar12 + 1;
          if (iVar12 < 0) {
            uVar10 = 1;
          }
          uVar17 = iVar18 + 1;
          if ((int)uVar21 <= iVar18) {
            uVar17 = uVar21;
          }
          if ((int)uVar10 < (int)uVar17) {
            fVar25 = *(float *)(lVar5 + uVar20 * 4);
            lVar7 = *(int64_t *)(*param_3 + 0x10);
            uVar19 = (uint64_t)uVar10;
            do {
              fVar26 = (float)((uint)(fVar2 - *(float *)(lVar7 + uVar19 * 4)) & uVar11);
              if (fVar26 < fVar24) {
                lVar8 = *(int64_t *)(lVar6 + 0x10);
                *(float *)(lVar8 + uVar19 * 4) =
                     *(float *)(*(int64_t *)(local_a0 + 0x10) +
                               (int64_t)(int)((fVar24 - fVar26) * (fVar3 / fVar24)) * 4) * fVar25 +
                     *(float *)(lVar8 + uVar19 * 4);
              }
              uVar19 = uVar19 + 1;
            } while (uVar17 != (uint)uVar19);
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 != uVar9);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar14);
    lVar15 = *in_RCX;
    if (lVar15 != 0) {
      uVar16 = 0;
      while( true ) {
        fVar1 = *(float *)(*(int64_t *)(lVar15 + 0x10) + uVar16 * 4);
        if ((fVar1 != g_02390124) || (NAN(fVar1) || NAN(g_02390124))) {
          fVar3 = *(float *)(*(int64_t *)
                              (*(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + uVar16 * 8) + 0x10)
                            + 4);
          iVar18 = 1;
          iVar12 = 0x14;
          do {
            uVar21 = FUN_00e7d780((float)iVar18 * fVar3 * fVar22);
            fVar23 = (float)_powf(fVar1);
            if ((0 < (int)uVar21) && ((int)uVar21 < (int)uVar13)) {
              lVar15 = *(int64_t *)
                        (*(int64_t *)(*(int64_t *)(*param_2 + 0x10) + uVar16 * 8) + 0x10);
              *(float *)(lVar15 + (uint64_t)uVar21 * 4) =
                   *(float *)(lVar15 + (uint64_t)uVar21 * 4) * fVar23;
            }
            if ((1 < (int)uVar21) && ((int)uVar21 <= (int)uVar13)) {
              lVar15 = *(int64_t *)
                        (*(int64_t *)(*(int64_t *)(*param_2 + 0x10) + uVar16 * 8) + 0x10);
              *(float *)(lVar15 + (uint64_t)(uVar21 - 1) * 4) =
                   *(float *)(lVar15 + (uint64_t)(uVar21 - 1) * 4) * fVar23;
            }
            if ((-1 < (int)uVar21) && (uVar21 = uVar21 + 1, (int)uVar21 < (int)uVar13)) {
              lVar15 = *(int64_t *)
                        (*(int64_t *)(*(int64_t *)(*param_2 + 0x10) + uVar16 * 8) + 0x10);
              *(float *)(lVar15 + (uint64_t)uVar21 * 4) =
                   fVar23 * *(float *)(lVar15 + (uint64_t)uVar21 * 4);
            }
            iVar18 = iVar18 + 1;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        uVar16 = uVar16 + 1;
        if (uVar16 == uVar14) break;
        lVar15 = *in_RCX;
      }
    }
  }
  fVar1 = g_02394274;
  if ((1 < (int)uVar13) && (0 < (int)uVar4)) {
    lVar15 = *param_2;
    lVar5 = *(int64_t *)(lVar15 + 0x10);
    uVar16 = 1;
    do {
      fVar22 = 0.0;
      uVar20 = 0;
      if (2 < uVar14 - 1) {
        do {
          fVar22 = fVar22 + *(float *)(*(int64_t *)(*(int64_t *)(lVar5 + uVar20 * 8) + 0x10) +
                                      uVar16 * 4) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar5 + 8 + uVar20 * 8) + 0x10) +
                             uVar16 * 4) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar5 + 0x10 + uVar20 * 8) + 0x10) +
                             uVar16 * 4) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar5 + 0x18 + uVar20 * 8) + 0x10) +
                             uVar16 * 4);
          uVar20 = uVar20 + 4;
        } while ((uVar4 & 0xfffffffc) != uVar20);
      }
      if ((uint64_t)(uVar4 & 3) != 0) {
        uVar19 = 0;
        do {
          fVar22 = fVar22 + *(float *)(*(int64_t *)
                                        (*(int64_t *)(lVar5 + uVar20 * 8 + uVar19 * 8) + 0x10) +
                                      uVar16 * 4);
          uVar19 = uVar19 + 1;
        } while ((uVar4 & 3) != uVar19);
      }
      if (fVar1 <= fVar22) {
        fVar22 = g_02390124 / fVar22;
        lVar6 = *(int64_t *)(lVar15 + 0x10);
        uVar20 = 0;
        if (uVar14 != 1) {
          do {
            lVar7 = *(int64_t *)(*(int64_t *)(lVar6 + uVar20 * 8) + 0x10);
            *(float *)(lVar7 + uVar16 * 4) = *(float *)(lVar7 + uVar16 * 4) * fVar22;
            lVar7 = *(int64_t *)(*(int64_t *)(lVar6 + 8 + uVar20 * 8) + 0x10);
            *(float *)(lVar7 + uVar16 * 4) = *(float *)(lVar7 + uVar16 * 4) * fVar22;
            uVar20 = uVar20 + 2;
          } while ((uVar4 & 0xfffffffe) != uVar20);
        }
        if ((uVar4 & 1) != 0) {
          lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + uVar20 * 8) + 0x10);
          *(float *)(lVar6 + uVar16 * 4) = fVar22 * *(float *)(lVar6 + uVar16 * 4);
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar13);
  }
  if (local_a0 != 0) {
    FUN_00d50b20();
  }
  return;
}

