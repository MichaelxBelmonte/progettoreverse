// Function: FUN_014ab140
// Address: 014ab140
// Size: 1185 bytes
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


void FUN_014ab140(uint64_t param_1,double param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int iVar8;
  void*in_RDX;
  int64_t *arg1;
  uint64_t uVar9;
  int iVar10;
  uint64_t uVar11;
  int64_t in_R8;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double in_XMM4_Qa;
  int64_t local_b8;
  char local_b0;
  uint64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  uint64_t local_88;
  void*local_80;
  
  local_88 = param_1;
  local_80 = in_RDX;
  FUN_014af180(param_3,param_4);
  lVar7 = *arg1;
  if (0 < *(int *)(lVar7 + 0xc)) {
    lVar13 = 0;
    lVar12 = 0;
    bVar3 = false;
    lVar14 = 0;
    bVar4 = false;
    dVar16 = 0.0;
    do {
      lVar7 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + lVar13 * 8);
      if (lVar12 == lVar7) {
        if ((!bVar3) && (lVar12 != 0)) {
          bVar3 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (lVar12 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
          lVar12 = lVar7;
        }
        else {
          bVar3 = true;
          lVar12 = lVar7;
        }
      }
      dVar21 = in_XMM4_Qa;
      if (lVar13 < (int64_t)*(int *)(*arg1 + 0xc) + -1) {
        lVar7 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + 8 + lVar13 * 8);
        if (lVar14 == lVar7) {
          if ((bVar4) || (lVar14 == 0)) {
            *(double *)(lVar12 + 0x20) = dVar16;
            goto joined_r0x014ab4a2;
          }
          FUN_00d50b00();
          *(double *)(lVar12 + 0x20) = dVar16;
          bVar4 = true;
          lVar7 = *(int64_t *)(lVar14 + 0x40);
          if (lVar7 == 0) goto LAB_014ab330;
LAB_014ab485:
          dVar21 = *(double *)(lVar7 + 0x18);
        }
        else {
          if (lVar7 == 0) {
            lVar7 = 0;
          }
          else {
            FUN_00d50b00();
          }
joined_r0x014ab2d2:
          if ((bVar4) && (lVar14 != 0)) {
            FUN_00d50b20();
          }
          bVar4 = true;
          *(double *)(lVar12 + 0x20) = dVar16;
          lVar14 = lVar7;
joined_r0x014ab4a2:
          if (lVar14 == 0) {
            lVar14 = 0;
          }
          else {
            lVar7 = *(int64_t *)(lVar14 + 0x40);
            if (lVar7 != 0) goto LAB_014ab485;
LAB_014ab330:
            dVar21 = *(double *)(lVar14 + 0x10);
            if (g_02391030 <= dVar21 - *(double *)(lVar12 + 0x18)) {
              iVar8 = (int)(*(double *)(lVar12 + 0x18) * param_2);
              iVar10 = (int)(dVar21 * param_2);
              if (iVar8 < iVar10) {
                uVar6 = (uint64_t)iVar8;
                uVar9 = ~uVar6;
                uVar11 = (uint64_t)(uint)(iVar10 - iVar8) & 3;
                fVar17 = g_02393944;
                fVar15 = g_02393944;
                if ((iVar10 - iVar8 & 3U) != 0) {
                  do {
                    fVar15 = *(float *)(in_R8 + uVar6 * 4);
                    iVar5 = (int)uVar6;
                    if (fVar17 <= fVar15) {
                      fVar15 = fVar17;
                      iVar5 = iVar8;
                    }
                    iVar8 = iVar5;
                    uVar6 = uVar6 + 1;
                    uVar11 = uVar11 - 1;
                    fVar17 = fVar15;
                  } while (uVar11 != 0);
                }
                if (2 < uVar9 + (int64_t)iVar10) {
                  do {
                    fVar17 = *(float *)(in_R8 + uVar6 * 4);
                    iVar5 = (int)uVar6;
                    if (fVar17 < fVar15) {
                      iVar8 = iVar5;
                    }
                    fVar19 = *(float *)(in_R8 + 4 + uVar6 * 4);
                    if (fVar15 <= fVar17) {
                      fVar17 = fVar15;
                    }
                    iVar1 = iVar5 + 1;
                    if (fVar17 <= fVar19) {
                      fVar19 = fVar17;
                      iVar1 = iVar8;
                    }
                    fVar17 = *(float *)(in_R8 + 8 + uVar6 * 4);
                    iVar2 = iVar5 + 2;
                    if (fVar19 <= fVar17) {
                      fVar17 = fVar19;
                      iVar2 = iVar1;
                    }
                    fVar15 = *(float *)(in_R8 + 0xc + uVar6 * 4);
                    iVar8 = iVar5 + 3;
                    if (fVar17 <= fVar15) {
                      fVar15 = fVar17;
                      iVar8 = iVar2;
                    }
                    uVar6 = uVar6 + 4;
                  } while (uVar6 != (int64_t)iVar10);
                }
              }
              dVar21 = (double)iVar8 / param_2;
            }
          }
        }
      }
      else {
        if (lVar14 != 0) {
          lVar7 = 0;
          goto joined_r0x014ab2d2;
        }
        *(double *)(lVar12 + 0x20) = dVar16;
        lVar14 = 0;
      }
      *(double *)(lVar12 + 0x28) = dVar21;
      dVar20 = *(double *)(lVar12 + 0x10);
      if (dVar20 < dVar16) {
        *(double *)(lVar12 + 0x10) = dVar16;
        dVar18 = *(double *)(lVar12 + 0x18);
        if (dVar21 < dVar18) goto LAB_014ab516;
LAB_014ab4e0:
        dVar20 = *(double *)(lVar12 + 0x30);
        if (dVar20 < dVar16) goto LAB_014ab53b;
LAB_014ab531:
        if (dVar18 < dVar20) goto LAB_014ab53b;
      }
      else {
        dVar18 = *(double *)(lVar12 + 0x18);
        dVar16 = dVar20;
        if (dVar18 <= dVar21) goto LAB_014ab4e0;
LAB_014ab516:
        *(double *)(lVar12 + 0x18) = dVar21;
        dVar20 = *(double *)(lVar12 + 0x30);
        dVar18 = dVar21;
        if (dVar16 <= dVar20) goto LAB_014ab531;
LAB_014ab53b:
        local_a8 = *local_80;
        local_a0 = 0;
        local_90 = 0;
        local_98 = lVar12;
        FUN_014b3ce0(local_88,&local_a8,&local_98,0);
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar13 = lVar13 + 1;
      lVar7 = *arg1;
      dVar16 = dVar21;
    } while (lVar13 < *(int *)(lVar7 + 0xc));
    if ((bVar4) && (lVar14 != 0)) {
      FUN_00d50b20();
    }
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  return;
}

