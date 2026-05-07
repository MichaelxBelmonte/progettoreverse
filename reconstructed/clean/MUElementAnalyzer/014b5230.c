// Function: FUN_014b5230
// Address: 014b5230
// Size: 2425 bytes
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


void FUN_014b5230(float param_1,float param_2,float param_3,double param_4)

{
  void*puVar1;
  void*puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  uint64_t uVar9;
  float *pfVar10;
  float *in_RCX;
  uint64_t in_RDX;
  int64_t lVar11;
  int64_t lVar12;
  int64_t arg1;
  uint64_t uVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint uVar16;
  uint64_t uVar17;
  int64_t lVar18;
  float *in_R8;
  int64_t lVar19;
  uint64_t uVar20;
  uint uVar21;
  float *in_R9;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint local_38;
  
  if ((param_1 < g_02390d34) || (param_2 < g_02390d34)) {
    if (in_R8 != (float *)0x0) {
      *in_R8 = 0.0;
    }
    if (in_R9 == (float *)0x0) {
      return;
    }
    goto LAB_014b584f;
  }
  param_2 = param_1 / param_2;
  if (param_2 <= g_02390124) {
    fVar29 = g_02390124 / (float)(int)(g_02390124 / param_2 + g_0239011c);
  }
  else {
    fVar29 = (float)(int)(param_2 + g_0239011c);
  }
  fVar23 = param_1 / fVar29 + g_0239011c;
  param_3 = (float)(int)fVar23 * param_3;
  uVar16 = (int)((float)(int)param_3 * fVar29) + 1;
  uVar14 = (uint64_t)uVar16;
  uVar9 = (uint64_t)(int)uVar16;
  if ((int64_t)in_RDX < (int64_t)uVar9) {
    param_3 = (float)(int)in_RDX / fVar29;
    uVar9 = (uint64_t)(int)in_RDX;
    uVar14 = in_RDX & 0xffffffff;
  }
  uVar16 = (uint)param_3;
  uVar13 = 2;
  if (2 < (int)uVar16) {
    uVar13 = (uint64_t)uVar16;
  }
  lVar12 = (int64_t)param_4 - (int64_t)((int)(uVar14 >> 0x1f) + (int)uVar14 >> 1);
  lVar19 = ~uVar9 + in_RDX;
  if ((int64_t)(lVar12 + uVar9) < (int64_t)in_RDX) {
    lVar19 = lVar12;
  }
  lVar12 = 0;
  if (-1 < lVar19) {
    lVar12 = lVar19;
  }
  fVar24 = 0.0;
  local_38 = (uint)uVar13;
  if ((0.0 < fVar29) &&
     ((uVar22 = (uint)((float)(~-(uint)(fVar29 < g_02390124) & (uint)fVar29 |
                              (uint)(g_02390124 / fVar29) & -(uint)(fVar29 < g_02390124)) +
                      g_0239011c), (int)uVar22 <= (int)local_38 || (fVar29 < g_02390124)))) {
    if (uVar22 == 1) {
      uVar21 = local_38 - 1;
      pfVar10 = in_RCX;
      uVar22 = local_38;
      if ((6 < uVar21) &&
         ((uVar9 = (uint64_t)uVar21 + 1,
          (float *)(arg1 + (lVar12 + (uint64_t)uVar21) * 4 + 4) <= in_RCX ||
          (uVar22 = uVar16, in_RCX + uVar9 <= (float *)(arg1 + lVar12 * 4))))) {
        uVar20 = uVar9 & 0xfffffffffffffff8;
        uVar17 = (uVar20 - 8 >> 3) + 1;
        uVar14 = (uint64_t)((uint)uVar17 & 3);
        if (uVar20 - 8 < 0x18) {
          lVar11 = 0;
        }
        else {
          lVar19 = arg1 + lVar12 * 4;
          lVar18 = -(uVar17 & 0xfffffffffffffffc);
          lVar11 = 0;
          do {
            puVar1 = (void*)(lVar19 + lVar11 * 4);
            uVar3 = puVar1[1];
            puVar2 = (void*)(lVar19 + 0x10 + lVar11 * 4);
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            *(void*)(in_RCX + lVar11) = *puVar1;
            *(void*)(in_RCX + lVar11 + 2) = uVar3;
            *(void*)(in_RCX + lVar11 + 4) = uVar4;
            *(void*)(in_RCX + lVar11 + 4 + 2) = uVar5;
            puVar1 = (void*)(lVar19 + 0x20 + lVar11 * 4);
            uVar3 = puVar1[1];
            puVar2 = (void*)(lVar19 + 0x30 + lVar11 * 4);
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            *(void*)(in_RCX + lVar11 + 8) = *puVar1;
            *(void*)(in_RCX + lVar11 + 8 + 2) = uVar3;
            *(void*)(in_RCX + lVar11 + 0xc) = uVar4;
            *(void*)(in_RCX + lVar11 + 0xc + 2) = uVar5;
            puVar1 = (void*)(lVar19 + 0x40 + lVar11 * 4);
            uVar3 = puVar1[1];
            puVar2 = (void*)(lVar19 + 0x50 + lVar11 * 4);
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            *(void*)(in_RCX + lVar11 + 0x10) = *puVar1;
            *(void*)(in_RCX + lVar11 + 0x10 + 2) = uVar3;
            *(void*)(in_RCX + lVar11 + 0x14) = uVar4;
            *(void*)(in_RCX + lVar11 + 0x14 + 2) = uVar5;
            puVar2 = (void*)(lVar19 + 0x60 + lVar11 * 4);
            uVar3 = puVar2[1];
            puVar1 = (void*)(lVar19 + 0x70 + lVar11 * 4);
            uVar4 = *puVar1;
            uVar5 = puVar1[1];
            *(void*)(in_RCX + lVar11 + 0x18) = *puVar2;
            *(void*)(in_RCX + lVar11 + 0x18 + 2) = uVar3;
            *(void*)(in_RCX + lVar11 + 0x1c) = uVar4;
            *(void*)(in_RCX + lVar11 + 0x1c + 2) = uVar5;
            lVar11 = lVar11 + 0x20;
            lVar18 = lVar18 + 4;
          } while (lVar18 != 0);
        }
        if (uVar14 != 0) {
          lVar19 = arg1 + (lVar11 + lVar12) * 4;
          lVar18 = 0;
          do {
            puVar2 = (void*)(lVar19 + lVar18);
            uVar3 = puVar2[1];
            puVar1 = (void*)(lVar19 + 0x10 + lVar18);
            uVar4 = *puVar1;
            uVar5 = puVar1[1];
            puVar1 = (void*)((int64_t)in_RCX + lVar18 + lVar11 * 4);
            *puVar1 = *puVar2;
            puVar1[1] = uVar3;
            puVar1 = (void*)((int64_t)in_RCX + lVar18 + lVar11 * 4 + 0x10);
            *puVar1 = uVar4;
            puVar1[1] = uVar5;
            lVar18 = lVar18 + 0x20;
          } while (uVar14 << 5 != lVar18);
        }
        if (uVar9 == uVar20) goto LAB_014b5398;
        lVar12 = lVar12 + uVar20;
        pfVar10 = in_RCX + uVar20;
        uVar22 = local_38 - (int)uVar20;
      }
      uVar16 = uVar22 - 1;
      if ((uVar22 & 3) != 0) {
        uVar21 = 0;
        do {
          *pfVar10 = *(float *)(arg1 + lVar12 * 4);
          pfVar10 = pfVar10 + 1;
          lVar12 = lVar12 + 1;
          uVar21 = uVar21 + 1;
        } while ((uVar22 & 3) != uVar21);
        uVar22 = uVar22 - uVar21;
      }
      if (2 < uVar16) {
        lVar19 = arg1 + lVar12 * 4;
        lVar12 = 0;
        do {
          pfVar10[lVar12] = *(float *)(lVar19 + lVar12 * 4);
          pfVar10[lVar12 + 1] = *(float *)(lVar19 + 4 + lVar12 * 4);
          pfVar10[lVar12 + 2] = *(float *)(lVar19 + 8 + lVar12 * 4);
          pfVar10[lVar12 + 3] = *(float *)(lVar19 + 0xc + lVar12 * 4);
          lVar12 = lVar12 + 4;
        } while (uVar22 != (uint)lVar12);
      }
    }
    else if (g_02390124 <= fVar29) {
      uVar14 = (uint64_t)(uVar22 - 1);
      lVar11 = -lVar12;
      lVar19 = arg1 + lVar12 * 4;
      pfVar10 = in_RCX;
      uVar9 = uVar13;
      do {
        fVar27 = 0.0;
        uVar16 = uVar22;
        lVar18 = lVar12;
        if ((uVar22 & 3) != 0) {
          lVar18 = 0;
          do {
            fVar27 = fVar27 + *(float *)(lVar19 + lVar18 * 4);
            lVar18 = lVar18 + 1;
          } while ((uVar22 & 3) != (uint)lVar18);
          uVar16 = uVar22 - (uint)lVar18;
          lVar18 = lVar18 - lVar11;
        }
        if (2 < uVar22 - 1) {
          lVar18 = arg1 + 0xc + lVar18 * 4;
          lVar15 = 0;
          do {
            fVar27 = fVar27 + *(float *)(lVar18 + -0xc + lVar15 * 4) +
                     *(float *)(lVar18 + -8 + lVar15 * 4) + *(float *)(lVar18 + -4 + lVar15 * 4) +
                     *(float *)(lVar18 + lVar15 * 4);
            lVar15 = lVar15 + 4;
          } while (uVar16 != (uint)lVar15);
        }
        lVar12 = lVar12 + uVar14 + 1;
        *pfVar10 = fVar27;
        pfVar10 = pfVar10 + 1;
        lVar11 = lVar11 + ~uVar14;
        lVar19 = lVar19 + uVar14 * 4 + 4;
        uVar16 = (int)uVar9 - 1;
        uVar9 = (uint64_t)uVar16;
      } while (uVar16 != 0);
    }
    else {
      fVar27 = *(float *)(arg1 + lVar12 * 4);
      lVar12 = lVar12 + 1;
      fVar25 = 0.0;
      lVar19 = 0;
      uVar16 = 0;
      fVar28 = fVar27;
      do {
        fVar26 = fVar27;
        if (uVar16 == 0) {
          fVar26 = *(float *)(arg1 + lVar12 * 4);
          fVar25 = (fVar26 - fVar27) * fVar29;
          lVar12 = lVar12 + 1;
          uVar16 = uVar22;
          fVar28 = fVar27;
        }
        in_RCX[lVar19] = fVar28;
        if (uVar16 - 1 == 0) {
          fVar27 = *(float *)(arg1 + lVar12 * 4);
          fVar25 = (fVar27 - fVar26) * fVar29;
          lVar12 = lVar12 + 1;
          uVar16 = uVar22;
          fVar28 = fVar26;
        }
        else {
          uVar16 = uVar16 - 1;
          fVar28 = fVar28 + fVar25;
          fVar27 = fVar26;
        }
        uVar16 = uVar16 - 1;
        in_RCX[lVar19 + 1] = fVar28;
        fVar28 = fVar28 + fVar25;
        lVar19 = lVar19 + 2;
      } while ((local_38 & 0xfffffffe) != (uint)lVar19);
      if ((uVar13 & 1) != 0) {
        if (uVar16 != 0) {
          fVar27 = fVar28;
        }
        in_RCX[lVar19] = fVar27;
      }
    }
  }
LAB_014b5398:
  if (uVar13 - 1 < 7) {
    uVar9 = 0;
  }
  else {
    fVar24 = 0.0;
    uVar9 = 0;
    do {
      fVar24 = fVar24 + in_RCX[uVar9] + in_RCX[uVar9 + 1] + in_RCX[uVar9 + 2] + in_RCX[uVar9 + 3] +
               in_RCX[uVar9 + 4] + in_RCX[uVar9 + 5] + in_RCX[uVar9 + 6] + in_RCX[uVar9 + 7];
      uVar9 = uVar9 + 8;
    } while ((local_38 & 0x7ffffff8) != uVar9);
  }
  if ((uint64_t)(local_38 & 7) != 0) {
    uVar14 = 0;
    do {
      fVar24 = fVar24 + in_RCX[uVar9 + uVar14];
      uVar14 = uVar14 + 1;
    } while ((local_38 & 7) != uVar14);
  }
  uVar16 = (uint)fVar23;
  fVar24 = fVar24 / (float)(int)local_38;
  fVar23 = 0.0;
  uVar9 = 0;
  do {
    fVar27 = *(float *)((int64_t)in_RCX + uVar9) - fVar24;
    fVar28 = *(float *)((int64_t)in_RCX + uVar9 + 4) - fVar24;
    fVar23 = (float)(~-(uint)(0.0 < fVar28) & ((uint)fVar28 ^ g_023945e0) |
                    (uint)fVar28 & -(uint)(0.0 < fVar28)) +
             (float)(~-(uint)(0.0 < fVar27) & ((uint)fVar27 ^ g_023945e0) |
                    (uint)fVar27 & -(uint)(0.0 < fVar27)) + fVar23;
    uVar9 = uVar9 + 8;
  } while ((uVar13 * 4 & 0xfffffffffffffff8) != uVar9);
  if ((uVar13 & 1) != 0) {
    fVar24 = *(float *)((int64_t)in_RCX + uVar9) - fVar24;
    fVar23 = fVar23 + (float)(~-(uint)(0.0 < fVar24) & (g_023945e0 ^ (uint)fVar24) |
                             (uint)fVar24 & -(uint)(0.0 < fVar24));
  }
  fVar23 = fVar23 / (float)(int)local_38;
  uVar22 = uVar16;
  fVar24 = g_0240dedc;
  if (0.0 < fVar23) {
    fVar23 = g_02390124 / fVar23;
    uVar22 = uVar16 - 1;
    lVar19 = (int64_t)(int)uVar22;
    uVar9 = uVar13 - lVar19;
    iVar8 = (int)uVar9;
    if (uVar9 == 0 || (int64_t)uVar13 < lVar19) {
      fVar24 = 0.0;
    }
    else {
      pfVar10 = in_RCX + lVar19;
      if ((uVar9 & 1) == 0) {
        fVar24 = 0.0;
        pfVar6 = in_RCX;
        iVar7 = iVar8;
      }
      else {
        fVar24 = *in_RCX - *pfVar10;
        pfVar10 = pfVar10 + 1;
        fVar24 = (float)(~-(uint)(0.0 < fVar24) & (g_023945e0 ^ (uint)fVar24) |
                        (uint)fVar24 & -(uint)(0.0 < fVar24)) + 0.0;
        pfVar6 = in_RCX + 1;
        iVar7 = iVar8 + -1;
      }
      if (local_38 != uVar16) {
        lVar12 = 0;
        do {
          fVar27 = pfVar6[lVar12] - pfVar10[lVar12];
          fVar28 = pfVar6[lVar12 + 1] - pfVar10[lVar12 + 1];
          fVar24 = (float)(~-(uint)(0.0 < fVar28) & ((uint)fVar28 ^ g_023945e0) |
                          (uint)fVar28 & -(uint)(0.0 < fVar28)) +
                   (float)(~-(uint)(0.0 < fVar27) & ((uint)fVar27 ^ g_023945e0) |
                          (uint)fVar27 & -(uint)(0.0 < fVar27)) + fVar24;
          lVar12 = lVar12 + 2;
        } while (iVar7 != (int)lVar12);
      }
    }
    fVar24 = g_02390124 - (fVar24 / (float)(iVar8 * 2)) * fVar23;
    if (fVar24 <= g_0241ee30) {
      fVar24 = g_0241ee30;
      uVar22 = uVar16;
    }
    lVar12 = lVar19 + 1;
    uVar9 = uVar13 - lVar12;
    iVar8 = (int)uVar9;
    if (uVar9 == 0 || (int64_t)uVar13 < lVar12) {
      fVar27 = 0.0;
    }
    else {
      pfVar10 = in_RCX + lVar12;
      if ((uVar9 & 1) == 0) {
        fVar27 = 0.0;
        pfVar6 = in_RCX;
        iVar7 = iVar8;
      }
      else {
        fVar27 = *in_RCX - *pfVar10;
        pfVar10 = pfVar10 + 1;
        fVar27 = (float)(~-(uint)(0.0 < fVar27) & (g_023945e0 ^ (uint)fVar27) |
                        (uint)fVar27 & -(uint)(0.0 < fVar27)) + 0.0;
        pfVar6 = in_RCX + 1;
        iVar7 = iVar8 + -1;
      }
      if (local_38 != uVar16 + 1) {
        lVar11 = 0;
        do {
          fVar28 = pfVar6[lVar11] - pfVar10[lVar11];
          fVar25 = pfVar6[lVar11 + 1] - pfVar10[lVar11 + 1];
          fVar27 = (float)(~-(uint)(0.0 < fVar25) & ((uint)fVar25 ^ g_023945e0) |
                          (uint)fVar25 & -(uint)(0.0 < fVar25)) +
                   (float)(~-(uint)(0.0 < fVar28) & ((uint)fVar28 ^ g_023945e0) |
                          (uint)fVar28 & -(uint)(0.0 < fVar28)) + fVar27;
          lVar11 = lVar11 + 2;
        } while (iVar7 != (int)lVar11);
      }
    }
    fVar27 = g_02390124 - (fVar27 / (float)(iVar8 * 2)) * fVar23;
    if (fVar24 < fVar27) {
      uVar22 = (uint)lVar12;
      fVar24 = fVar27;
    }
    lVar19 = lVar19 + 2;
    uVar9 = uVar13 - lVar19;
    iVar8 = (int)uVar9;
    if (uVar9 == 0 || (int64_t)uVar13 < lVar19) {
      fVar27 = 0.0;
    }
    else {
      pfVar10 = in_RCX + lVar19;
      if ((uVar9 & 1) == 0) {
        fVar27 = 0.0;
        iVar7 = iVar8;
      }
      else {
        fVar27 = *in_RCX - *pfVar10;
        in_RCX = in_RCX + 1;
        pfVar10 = pfVar10 + 1;
        fVar27 = (float)(~-(uint)(0.0 < fVar27) & (g_023945e0 ^ (uint)fVar27) |
                        (uint)fVar27 & -(uint)(0.0 < fVar27)) + 0.0;
        iVar7 = iVar8 + -1;
      }
      if (local_38 - 2 != uVar16) {
        lVar12 = 0;
        do {
          fVar28 = in_RCX[lVar12] - pfVar10[lVar12];
          fVar25 = in_RCX[lVar12 + 1] - pfVar10[lVar12 + 1];
          fVar27 = (float)(~-(uint)(0.0 < fVar25) & ((uint)fVar25 ^ g_023945e0) |
                          (uint)fVar25 & -(uint)(0.0 < fVar25)) +
                   (float)(~-(uint)(0.0 < fVar28) & ((uint)fVar28 ^ g_023945e0) |
                          (uint)fVar28 & -(uint)(0.0 < fVar28)) + fVar27;
          lVar12 = lVar12 + 2;
        } while (iVar7 != (int)lVar12);
      }
    }
    fVar23 = g_02390124 - fVar23 * (fVar27 / (float)(iVar8 * 2));
    if (fVar24 < fVar23) {
      uVar22 = (uint)lVar19;
      fVar24 = fVar23;
    }
  }
  if (in_R8 != (float *)0x0) {
    *in_R8 = fVar24;
  }
  if (in_R9 == (float *)0x0) {
    return;
  }
  param_1 = fVar29 * (float)(int)uVar22;
LAB_014b584f:
  *in_R9 = param_1;
  return;
}

