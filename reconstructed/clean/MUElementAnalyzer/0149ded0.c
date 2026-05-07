// Function: FUN_0149ded0
// Address: 0149ded0
// Size: 1138 bytes
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


void FUN_0149ded0(float param_1,float param_2,float param_3,float param_4)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  void*puVar6;
  int in_ECX;
  uint64_t uVar7;
  uint in_EDX;
  int64_t lVar8;
  int64_t *arg1;
  int64_t lVar9;
  int64_t lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float in_XMM4_Da;
  float in_XMM5_Da;
  
  if (param_4 < param_1) {
    return;
  }
  fVar11 = (float)_logf(in_XMM4_Da / g_0240e330);
  fVar12 = (float)_logf(in_XMM5_Da / g_0240e330);
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  fVar13 = (float)_logf(param_4 / param_1);
  if ((int)in_EDX < 1) {
    bVar2 = false;
    lVar10 = 0;
  }
  else {
    fVar11 = fVar11 * g_0240e334;
    fVar15 = fVar11 * g_023941f0 + g_0239011c;
    fVar12 = fVar12 * g_0240e334 * g_023941f0 + g_0239011c;
    fVar13 = fVar13 * g_0240e334;
    uVar7 = 0;
    lVar10 = 0;
    bVar2 = false;
    bVar3 = false;
    lVar8 = 0;
    do {
      lVar9 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar7 * 8);
      if (lVar10 == lVar9) {
        if ((!bVar2) && (lVar10 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (lVar10 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          lVar10 = lVar9;
        }
        else {
          bVar2 = true;
          lVar10 = lVar9;
        }
      }
      lVar9 = lVar8;
      if (*(int *)(lVar10 + 0xc) != 0) {
        fVar14 = (float)FUN_00d216c0();
        lVar9 = **(int64_t **)(lVar10 + 0x10);
        if (lVar8 == lVar9) {
          lVar9 = lVar8;
          bVar4 = bVar3;
          if ((!bVar3) && (lVar8 != 0)) {
            fVar14 = (float)FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar9 != 0) {
            fVar14 = (float)FUN_00d50b00();
          }
          bVar4 = true;
          if ((bVar3) && (lVar8 != 0)) {
            fVar14 = (float)FUN_00d50b20();
          }
        }
        iVar5 = *(int *)(lVar10 + 0xc);
        if (((int)fVar12 < *(int *)(lVar9 + 0x10)) && (*(int *)(lVar9 + 0x10) < (int)fVar15)) {
          while (in_ECX < iVar5) {
            lVar8 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + (int64_t)in_ECX * 8);
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            FUN_00d21140();
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            fVar14 = (float)FUN_00d23620();
            iVar5 = *(int *)(lVar10 + 0xc);
          }
        }
        if (0 < iVar5) {
          lVar8 = 0;
          do {
            lVar1 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + lVar8 * 8);
            if (lVar9 == lVar1) {
              if ((!bVar4) && (lVar9 != 0)) {
                bVar4 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
              if ((bVar4) && (lVar9 != 0)) {
                FUN_00d50b20();
                bVar4 = true;
                lVar9 = lVar1;
              }
              else {
                bVar4 = true;
                lVar9 = lVar1;
              }
            }
            fVar14 = (float)*(int *)(lVar9 + 0x10) / g_023941f0;
            fVar14 = (float)_powf(fVar13 * param_3 + param_2,
                                  ~-(uint)(fVar11 < fVar14) & (uint)fVar14 |
                                  (uint)((fVar11 + fVar11) - fVar14) & -(uint)(fVar11 < fVar14));
            fVar14 = fVar14 * *(float *)(lVar9 + 0x1c);
            *(float *)(lVar9 + 0x18) = fVar14;
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(lVar10 + 0xc));
        }
        FUN_00d242c0(fVar14,0);
        FUN_00d214d0();
        bVar3 = bVar4;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar9;
    } while (uVar7 != in_EDX);
    if ((bVar3) && (lVar9 != 0)) {
      FUN_00d50b20();
    }
    if (puVar6 == (void*)0x0) goto LAB_0149e35c;
  }
  FUN_00d50b20();
LAB_0149e35c:
  if ((bVar2) && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return;
}

