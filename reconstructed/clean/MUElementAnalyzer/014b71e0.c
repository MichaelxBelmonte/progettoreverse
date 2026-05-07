// Function: FUN_014b71e0
// Address: 014b71e0
// Size: 749 bytes
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


void FUN_014b71e0(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  uint uVar2;
  int64_t lVar3;
  float *in_RCX;
  uint64_t uVar4;
  uint uVar5;
  int64_t in_RDX;
  uint uVar6;
  int64_t arg1;
  uint64_t uVar7;
  uint uVar8;
  int64_t this_ptr;
  int in_R8D;
  float fVar9;
  float fVar10;
  float in_XMM4_Da;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar3 = FUN_00e84250();
  fVar15 = g_0240e314;
  uVar2 = g_02390140;
  fVar13 = g_02390124;
  fVar16 = g_02390124 / param_2;
  uVar6 = (uint)(param_4 * g_02390118 + param_1 / param_3);
  uVar8 = (int)param_4 + uVar6 + 1;
  uVar5 = 1;
  if (0 < (int)uVar6) {
    uVar5 = uVar6;
  }
  uVar6 = in_R8D / 2;
  if ((int)uVar8 <= in_R8D / 2) {
    uVar6 = uVar8;
  }
  uVar4 = (uint64_t)uVar6;
  if ((in_RCX == (float *)0x0) || (in_RDX == 0)) {
    if ((int)uVar5 < (int)uVar6) {
      uVar7 = (uint64_t)uVar5;
      fVar9 = 0.0;
      if (g_02411280 < in_XMM4_Da) {
        do {
          fVar13 = (float)((uint)(param_1 - *(float *)(this_ptr + uVar7 * 4)) & uVar2);
          if (fVar13 < param_2) {
            fVar11 = *(float *)(arg1 + uVar7 * 4);
            fVar13 = *(float *)(lVar3 + (int64_t)(int)((param_2 - fVar13) * fVar16 * fVar15) * 4) *
                     fVar11;
            fVar9 = fVar9 + fVar13;
            *(float *)(arg1 + uVar7 * 4) = fVar11 - fVar13 * in_XMM4_Da;
          }
          uVar7 = uVar7 + 1;
        } while (uVar4 != uVar7);
      }
      else {
        do {
          fVar13 = (float)((uint)(param_1 - *(float *)(this_ptr + uVar7 * 4)) & g_02390140);
          if (fVar13 < param_2) {
            fVar9 = fVar9 + *(float *)(lVar3 + (int64_t)
                                               (int)((param_2 - fVar13) * fVar16 * g_0240e314) * 4
                                      ) * *(float *)(arg1 + uVar7 * 4);
          }
          uVar7 = uVar7 + 1;
        } while (uVar4 != uVar7);
      }
      fVar11 = 0.0;
      goto LAB_014b7416;
    }
  }
  else if ((int)uVar5 < (int)uVar6) {
    uVar7 = (uint64_t)uVar5;
    fVar11 = 0.0;
    if (in_XMM4_Da <= g_02411280) {
      fVar9 = 0.0;
      do {
        fVar13 = (float)((uint)(param_1 - *(float *)(this_ptr + uVar7 * 4)) & g_02390140);
        if (fVar13 < param_2) {
          fVar12 = *(float *)(lVar3 + (int64_t)(int)((param_2 - fVar13) * fVar16 * g_0240e314) *
                                      4) * *(float *)(arg1 + uVar7 * 4);
          fVar13 = *(float *)(in_RDX + uVar7 * 4);
          fVar15 = g_02390124;
          if (fVar13 <= g_02390124) {
            fVar15 = fVar13;
          }
          fVar11 = fVar11 + fVar15 * fVar12;
          fVar9 = fVar9 + fVar12;
        }
        uVar7 = uVar7 + 1;
      } while (uVar4 != uVar7);
    }
    else {
      fVar9 = 0.0;
      do {
        fVar12 = (float)((uint)(param_1 - *(float *)(this_ptr + uVar7 * 4)) & uVar2);
        if (fVar12 < param_2) {
          fVar1 = *(float *)(arg1 + uVar7 * 4);
          fVar14 = *(float *)(lVar3 + (int64_t)(int)((param_2 - fVar12) * fVar16 * fVar15) * 4) *
                   fVar1;
          fVar12 = *(float *)(in_RDX + uVar7 * 4);
          fVar10 = fVar13;
          if (fVar12 <= fVar13) {
            fVar10 = fVar12;
          }
          fVar11 = fVar11 + fVar10 * fVar14;
          fVar9 = fVar9 + fVar14;
          *(float *)(arg1 + uVar7 * 4) = fVar1 - fVar14 * in_XMM4_Da;
        }
        uVar7 = uVar7 + 1;
      } while (uVar4 != uVar7);
    }
LAB_014b7416:
    if (g_02394274 <= fVar9) goto LAB_014b745c;
  }
  fVar11 = (float)((double)(float)((double)*(float *)(arg1 +
                                                     (int64_t)((int)(uVar6 + uVar5) / 2) * 4) *
                                  g_02391030) * g_023934c8);
LAB_014b745c:
  if (in_RCX != (float *)0x0) {
    *in_RCX = fVar11;
  }
  return;
}

