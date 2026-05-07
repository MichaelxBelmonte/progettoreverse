// Function: FUN_01984820
// Address: 01984820
// Size: 1438 bytes
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


void FUN_01984820(void)

{
  char *pcVar1;
  float *pfVar2;
  float *pfVar3;
  void*puVar4;
  void*puVar5;
  bool bVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  int64_t lVar18;
  int64_t lVar19;
  int64_t *this_ptr;
  float fVar20;
  float fVar21;
  
  if (g_028b0f88 != '\0') goto LAB_01984ad5;
  pcVar1 = *(char **)(g_028b0f48 + 0x10);
  pfVar2 = *(float **)(g_028b0f58 + 0x10);
  if (*pcVar1 == '\0') {
    fVar20 = *pfVar2 * g_02394234 + g_0241b544;
    *pfVar2 = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_0198487f;
  }
  else {
    fVar20 = (*pfVar2 + g_02391090) / g_02394234;
    *pfVar2 = fVar20;
    fVar21 = g_02390124;
    if (g_02390124 < fVar20) {
LAB_0198487f:
      *pfVar2 = fVar21;
    }
  }
  if (pcVar1[1] == '\0') {
    fVar20 = pfVar2[1] * g_02394234 + g_0241b544;
    pfVar2[1] = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_019848b4;
  }
  else {
    fVar20 = (pfVar2[1] + g_02391090) / g_02394234;
    pfVar2[1] = fVar20;
    fVar21 = g_02390124;
    if (g_02390124 < fVar20) {
LAB_019848b4:
      pfVar2[1] = fVar21;
    }
  }
  if (pcVar1[2] == '\0') {
    fVar20 = pfVar2[2] * g_02394234 + g_0241b544;
    pfVar2[2] = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_019848ea;
  }
  else {
    fVar20 = (pfVar2[2] + g_02391090) / g_02394234;
    pfVar2[2] = fVar20;
    fVar21 = g_02390124;
    if (g_02390124 < fVar20) {
LAB_019848ea:
      pfVar2[2] = fVar21;
    }
  }
  if (pcVar1[3] == '\0') {
    fVar20 = pfVar2[3] * g_02394234 + g_0241b544;
    pfVar2[3] = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_01984920;
  }
  else {
    fVar20 = (pfVar2[3] + g_02391090) / g_02394234;
    pfVar2[3] = fVar20;
    fVar21 = g_02390124;
    if (g_02390124 < fVar20) {
LAB_01984920:
      pfVar2[3] = fVar21;
    }
  }
  if (pcVar1[4] == '\0') {
    fVar20 = pfVar2[4] * g_02394234 + g_0241b544;
    pfVar2[4] = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_01984956;
  }
  else {
    fVar20 = (pfVar2[4] + g_02391090) / g_02394234;
    pfVar2[4] = fVar20;
    fVar21 = g_02390124;
    if (g_02390124 < fVar20) {
LAB_01984956:
      pfVar2[4] = fVar21;
    }
  }
  if (pcVar1[5] == '\0') {
    fVar20 = pfVar2[5] * g_02394234 + g_0241b544;
    pfVar2[5] = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_0198498c;
  }
  else {
    fVar20 = (pfVar2[5] + g_02391090) / g_02394234;
    pfVar2[5] = fVar20;
    fVar21 = g_02390124;
    if (g_02390124 < fVar20) {
LAB_0198498c:
      pfVar2[5] = fVar21;
    }
  }
  if (pcVar1[6] == '\0') {
    fVar20 = pfVar2[6] * g_02394234 + g_0241b544;
    pfVar2[6] = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_019849c2;
  }
  else {
    fVar20 = (pfVar2[6] + g_02391090) / g_02394234;
    pfVar2[6] = fVar20;
    fVar21 = g_02390124;
    if (g_02390124 < fVar20) {
LAB_019849c2:
      pfVar2[6] = fVar21;
    }
  }
  if (pcVar1[7] == '\0') {
    fVar20 = pfVar2[7] * g_02394234 + g_0241b544;
    pfVar2[7] = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_019849f8;
  }
  else {
    fVar20 = (pfVar2[7] + g_02391090) / g_02394234;
    pfVar2[7] = fVar20;
    fVar21 = g_02390124;
    if (g_02390124 < fVar20) {
LAB_019849f8:
      pfVar2[7] = fVar21;
    }
  }
  if (pcVar1[8] == '\0') {
    fVar20 = pfVar2[8] * g_02394234 + g_0241b544;
    pfVar2[8] = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_01984a2e;
  }
  else {
    fVar20 = (pfVar2[8] + g_02391090) / g_02394234;
    pfVar2[8] = fVar20;
    fVar21 = g_02390124;
    if (g_02390124 < fVar20) {
LAB_01984a2e:
      pfVar2[8] = fVar21;
    }
  }
  if (pcVar1[9] == '\0') {
    fVar20 = pfVar2[9] * g_02394234 + g_0241b544;
    pfVar2[9] = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_01984a64;
  }
  else {
    fVar20 = (pfVar2[9] + g_02391090) / g_02394234;
    pfVar2[9] = fVar20;
    fVar21 = g_02390124;
    if (g_02390124 < fVar20) {
LAB_01984a64:
      pfVar2[9] = fVar21;
    }
  }
  if (pcVar1[10] == '\0') {
    fVar20 = pfVar2[10] * g_02394234 + g_0241b544;
    pfVar2[10] = fVar20;
    fVar21 = 0.0;
    if (fVar20 < 0.0) goto LAB_01984a9a;
  }
  else {
    fVar20 = (pfVar2[10] + g_02391090) / g_02394234;
    pfVar2[10] = fVar20;
    fVar21 = g_02390124;
    if (g_02390124 < fVar20) {
LAB_01984a9a:
      pfVar2[10] = fVar21;
    }
  }
  if (pcVar1[0xb] == '\0') {
    fVar20 = pfVar2[0xb] * g_02394234 + g_0241b544;
    pfVar2[0xb] = fVar20;
    fVar21 = 0.0;
    if (0.0 <= fVar20) goto LAB_01984ad5;
  }
  else {
    fVar20 = (pfVar2[0xb] + g_02391090) / g_02394234;
    pfVar2[0xb] = fVar20;
    fVar21 = g_02390124;
    if (fVar20 <= g_02390124) goto LAB_01984ad5;
  }
  pfVar2[0xb] = fVar21;
LAB_01984ad5:
  lVar19 = g_028b0f68;
  lVar18 = g_028b0f58;
  pfVar2 = *(float **)(g_028b0f58 + 0x10);
  pfVar3 = *(float **)(g_028b0f68 + 0x10);
  bVar6 = true;
  if ((*pfVar2 == *pfVar3) && (!NAN(*pfVar2) && !NAN(*pfVar3))) {
    if ((pfVar2[1] == pfVar3[1]) && (!NAN(pfVar2[1]) && !NAN(pfVar3[1]))) {
      if ((pfVar2[2] == pfVar3[2]) && (!NAN(pfVar2[2]) && !NAN(pfVar3[2]))) {
        if ((pfVar2[3] == pfVar3[3]) && (!NAN(pfVar2[3]) && !NAN(pfVar3[3]))) {
          if ((pfVar2[4] == pfVar3[4]) && (!NAN(pfVar2[4]) && !NAN(pfVar3[4]))) {
            if ((pfVar2[5] == pfVar3[5]) && (!NAN(pfVar2[5]) && !NAN(pfVar3[5]))) {
              if ((pfVar2[6] == pfVar3[6]) && (!NAN(pfVar2[6]) && !NAN(pfVar3[6]))) {
                if ((pfVar2[7] == pfVar3[7]) && (!NAN(pfVar2[7]) && !NAN(pfVar3[7]))) {
                  if ((pfVar2[8] == pfVar3[8]) && (!NAN(pfVar2[8]) && !NAN(pfVar3[8]))) {
                    if ((pfVar2[9] == pfVar3[9]) && (!NAN(pfVar2[9]) && !NAN(pfVar3[9]))) {
                      if ((pfVar2[10] == pfVar3[10]) && (!NAN(pfVar2[10]) && !NAN(pfVar3[10]))) {
                        if ((pfVar2[0xb] == pfVar3[0xb]) && (!NAN(pfVar2[0xb]) && !NAN(pfVar3[0xb]))
                           ) {
                          bVar6 = false;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00d50b00();
  puVar4 = *(void**)(lVar19 + 0x10);
  puVar5 = *(void**)(lVar18 + 0x10);
  uVar7 = *puVar5;
  uVar8 = puVar5[1];
  uVar9 = puVar5[2];
  uVar10 = puVar5[3];
  uVar11 = puVar5[4];
  uVar12 = puVar5[5];
  uVar13 = puVar5[6];
  uVar14 = puVar5[7];
  uVar15 = puVar5[9];
  uVar16 = puVar5[10];
  uVar17 = puVar5[0xb];
  puVar4[8] = puVar5[8];
  puVar4[9] = uVar15;
  puVar4[10] = uVar16;
  puVar4[0xb] = uVar17;
  puVar4[4] = uVar11;
  puVar4[5] = uVar12;
  puVar4[6] = uVar13;
  puVar4[7] = uVar14;
  *puVar4 = uVar7;
  puVar4[1] = uVar8;
  puVar4[2] = uVar9;
  puVar4[3] = uVar10;
  FUN_00d50b20();
  if (!bVar6) {
    return;
  }
  g_028b0f90 = 0;
                                          (**(code **)(*this_ptr + 0x620))();
  return;
}

