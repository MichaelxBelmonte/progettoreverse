// Function: FUN_014adca0
// Address: 014adca0
// Size: 2407 bytes
// Class: MUElementAnalyzer
// String references:
//   "MUElementAnalyzerEngine::findAmpEnvelope: call without sourceSignal not implemented!"
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


void FUN_014adca0(double param_1,float param_2,double param_3,uint param_4)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  uint64_t uVar7;
  uint uVar8;
  bool bVar9;
  uint64_t uVar10;
  uint uVar11;
  int iVar12;
  uint64_t uVar13;
  uint uVar14;
  int64_t in_RCX;
  uint64_t uVar15;
  uint64_t in_RDX;
  uint64_t uVar16;
  uint uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  int64_t lVar21;
  int64_t arg1;
  uint64_t uVar22;
  uint64_t uVar23;
  int64_t in_R8;
  uint64_t uVar24;
  int64_t lVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  int64_t *local_res8;
  float *local_res10;
  uint64_t local_98;
  int64_t local_58;
  float local_48;
  uint local_44;
  
  bVar3 = *(int *)(*local_res8 + 0xc) < 1;
  if (bVar3) {
    uVar22 = in_RDX - 1;
    local_58 = 0;
  }
  else {
    local_58 = **(int64_t **)(*local_res8 + 0x10);
    FUN_00d50b00();
    uVar22 = (uint64_t)(*(double *)(local_58 + 0x10) * param_1);
  }
  bVar9 = !bVar3;
  local_98 = in_RDX - 1;
  local_44 = (uint)!bVar3;
  dVar29 = param_1 / param_3;
  uVar15 = (uint64_t)param_4;
  fVar28 = g_023d59b4;
  if (0 < (int)param_4) {
    uVar18 = 0;
    uVar23 = 0;
    local_48 = g_023d59b4;
    do {
      fVar32 = *(float *)(in_R8 + uVar18 * 4);
      uVar24 = (uint64_t)((double)(int)uVar18 * dVar29);
      uVar27 = uVar22;
      if (((int64_t)uVar22 <= (int64_t)uVar24) &&
         (uVar27 = local_98, (int)local_44 < *(int *)(*local_res8 + 0xc))) {
        lVar21 = *(int64_t *)(*(int64_t *)(*local_res8 + 0x10) + (int64_t)(int)local_44 * 8);
        if (local_58 == lVar21) {
          lVar21 = local_58;
          bVar3 = bVar9;
          if ((!bVar9) && (local_58 != 0)) {
            FUN_00d50b00();
            bVar3 = true;
          }
        }
        else {
          if (lVar21 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar9) && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar9 = bVar3;
        local_44 = local_44 + 1;
        uVar23 = uVar22;
        uVar27 = (int64_t)(*(double *)(lVar21 + 0x10) * param_1);
        local_58 = lVar21;
      }
      uVar22 = uVar27;
      iVar12 = (int)fVar32;
      if (iVar12 < (int)dVar29) {
        iVar12 = (int)dVar29;
      }
      uVar26 = uVar24 - (int64_t)iVar12;
      uVar19 = (int64_t)iVar12 + uVar24;
      uVar27 = uVar26;
      if ((int64_t)uVar26 < (int64_t)uVar23) {
        uVar27 = uVar23;
      }
      uVar20 = uVar19;
      if ((int64_t)uVar22 < (int64_t)uVar19) {
        uVar20 = uVar22;
      }
      if ((int64_t)uVar27 < 0) {
        uVar27 = 0;
      }
      if ((int64_t)in_RDX < (int64_t)uVar20) {
        uVar20 = in_RDX;
      }
      uVar16 = uVar20;
      if (arg1 == 0) {
        FUN_00e828a0();
        fVar33 = g_023d59b4;
        fVar32 = g_023d59b4;
joined_r0x014ae129:
        fVar34 = fVar32;
        g_023d59b4 = fVar33;
        if ((int64_t)uVar23 <= (int64_t)uVar26) goto LAB_014ae12b;
LAB_014ae1a6:
        fVar32 = local_48;
        if (local_48 <= fVar34) {
          fVar32 = fVar34;
        }
        uVar20 = uVar16;
        fVar34 = fVar33;
        if ((int64_t)uVar22 < (int64_t)uVar19) goto LAB_014ae1c3;
LAB_014ae13c:
        lVar21 = uVar20 - uVar27;
        if (lVar21 != 0 && (int64_t)uVar27 <= (int64_t)uVar20) goto LAB_014ae145;
LAB_014ae1d8:
        if (fVar32 <= fVar33) {
          *(float *)(in_RCX + uVar18 * 4) = fVar33;
          local_48 = fVar33;
        }
        else {
          *(float *)(in_RCX + uVar18 * 4) = fVar32;
          local_48 = fVar32;
        }
      }
      else {
        fVar32 = g_023d59b4;
        if ((int64_t)uVar27 < (int64_t)uVar24) {
          uVar13 = uVar27;
          if (((int)uVar24 - (int)uVar27 & 1U) != 0) {
            fVar32 = *(float *)(arg1 + uVar27 * 4) * param_2;
            fVar32 = (float)(~-(uint)(fVar32 < g_0239424c) & (uint)fVar32 |
                            ((uint)fVar32 ^ g_023945e0) & -(uint)(fVar32 < g_0239424c));
            if (fVar32 <= g_023d59b4) {
              fVar32 = g_023d59b4;
            }
            uVar13 = uVar27 + 1;
          }
          if (~uVar27 + uVar24 != 0) {
            do {
              fVar33 = *(float *)(arg1 + uVar13 * 4) * param_2;
              fVar33 = (float)(~-(uint)(fVar33 < 0.0) & (uint)fVar33 |
                              ((uint)fVar33 ^ g_023945e0) & -(uint)(fVar33 < 0.0));
              fVar34 = fVar32;
              if (fVar32 < fVar33) {
                uVar27 = uVar13;
                fVar34 = fVar33;
              }
              fVar32 = *(float *)(arg1 + 4 + uVar13 * 4) * param_2;
              fVar32 = (float)(~-(uint)(fVar32 < 0.0) & (uint)fVar32 |
                              ((uint)fVar32 ^ g_023945e0) & -(uint)(fVar32 < 0.0));
              uVar10 = uVar13 + 1;
              if (fVar32 <= fVar34) {
                fVar32 = fVar34;
                uVar10 = uVar27;
              }
              uVar27 = uVar10;
              uVar13 = uVar13 + 2;
            } while (uVar13 != uVar24);
          }
        }
        fVar33 = g_023d59b4;
        if ((int64_t)uVar20 <= (int64_t)uVar24) goto joined_r0x014ae129;
        uVar13 = uVar24 + 1;
        uVar10 = uVar24;
        if (((int)uVar20 - (int)uVar24 & 1U) != 0) {
          fVar34 = *(float *)(arg1 + uVar24 * 4) * param_2;
          fVar34 = (float)(~-(uint)(fVar34 < g_0239424c) & (uint)fVar34 |
                          ((uint)fVar34 ^ g_023945e0) & -(uint)(fVar34 < g_0239424c));
          uVar10 = uVar13;
          if (g_023d59b4 < fVar34) {
            uVar16 = uVar24;
            fVar33 = fVar34;
          }
        }
        while (uVar20 != uVar13) {
          fVar34 = *(float *)(arg1 + uVar10 * 4) * param_2;
          fVar34 = (float)(~-(uint)(fVar34 < 0.0) & (uint)fVar34 |
                          ((uint)fVar34 ^ g_023945e0) & -(uint)(fVar34 < 0.0));
          if (fVar33 < fVar34) {
            uVar16 = uVar10;
            fVar33 = fVar34;
          }
          fVar34 = *(float *)(arg1 + 4 + uVar10 * 4) * param_2;
          fVar34 = (float)(~-(uint)(fVar34 < 0.0) & (uint)fVar34 |
                          ((uint)fVar34 ^ g_023945e0) & -(uint)(fVar34 < 0.0));
          uVar7 = uVar10 + 1;
          if (fVar34 <= fVar33) {
            fVar34 = fVar33;
            uVar7 = uVar16;
          }
          uVar13 = uVar10 + 2;
          uVar10 = uVar13;
          uVar16 = uVar7;
          fVar33 = fVar34;
        }
        uVar20 = uVar16;
        fVar34 = fVar32;
        if ((int64_t)uVar26 < (int64_t)uVar23) goto LAB_014ae1a6;
LAB_014ae12b:
        fVar34 = fVar33;
        if ((int64_t)uVar19 <= (int64_t)uVar22) goto LAB_014ae13c;
LAB_014ae1c3:
        fVar33 = local_48;
        if (local_48 <= fVar34) {
          fVar33 = fVar34;
        }
        lVar21 = uVar20 - uVar27;
        if (lVar21 == 0 || (int64_t)uVar20 < (int64_t)uVar27) goto LAB_014ae1d8;
LAB_014ae145:
        local_48 = (fVar33 - fVar32) * ((float)(int64_t)(uVar24 - uVar27) / (float)lVar21) + fVar32
        ;
        *(float *)(in_RCX + uVar18 * 4) = local_48;
      }
      if (fVar32 <= fVar28) {
        fVar32 = fVar28;
      }
      if (local_48 < g_023d59b4) {
        *(void*)(in_RCX + uVar18 * 4) = 0x38d1b717;
        local_48 = g_023d59b4;
      }
      fVar28 = fVar33;
      if (fVar33 <= fVar32) {
        fVar28 = fVar32;
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar15);
  }
  dVar30 = param_3 / g_0240f0f0;
  lVar21 = *local_res8;
  uVar14 = *(uint *)(lVar21 + 0xc);
  uVar22 = (uint64_t)uVar14;
  if (uVar14 == 0) {
    FUN_015c1480(1);
  }
  else if (-1 < (int)uVar14) {
    lVar25 = 0;
    uVar14 = 0;
    do {
      uVar17 = param_4;
      if (lVar25 < (int)uVar22) {
        uVar17 = (int)(*(double *)(*(int64_t *)(*(int64_t *)(lVar21 + 0x10) + lVar25 * 8) + 0x10)
                      * param_3) + 1;
      }
      iVar12 = uVar17 - uVar14;
      dVar31 = (double)*(float *)(in_R8 + (int64_t)(iVar12 / 2) * 4) / dVar29;
      fVar33 = (float)(dVar31 + dVar31);
      fVar32 = g_023d59b4;
      if (0 < (int)uVar14) {
        fVar32 = *(float *)(in_RCX + (uint64_t)(uVar14 - 1) * 4);
      }
      fVar34 = g_02390d30;
      if (g_02390d30 <= fVar33) {
        fVar34 = fVar33;
      }
      uVar4 = uVar14 + 7;
      if ((int)uVar17 < (int)(uVar14 + 7)) {
        uVar4 = uVar17;
      }
      uVar22 = (uint64_t)(int)uVar14;
      if ((int)uVar14 < (int)uVar4) {
        uVar23 = ~uVar22;
        uVar18 = (uint64_t)(uVar4 - uVar14) & 3;
        if ((uVar4 - uVar14 & 3) == 0) {
          fVar33 = 0.0;
        }
        else {
          fVar35 = fVar32;
          fVar37 = 0.0;
          do {
            fVar32 = *(float *)(in_RCX + uVar22 * 4);
            fVar33 = fVar32 - fVar35;
            uVar11 = (uint)uVar22;
            if (fVar33 <= fVar37) {
              fVar33 = fVar37;
              uVar11 = uVar14;
            }
            uVar14 = uVar11;
            uVar22 = uVar22 + 1;
            uVar18 = uVar18 - 1;
            fVar35 = fVar32;
            fVar37 = fVar33;
          } while (uVar18 != 0);
        }
        if (2 < uVar23 + (int64_t)(int)uVar4) {
          do {
            fVar35 = *(float *)(in_RCX + uVar22 * 4);
            fVar37 = *(float *)(in_RCX + 4 + uVar22 * 4);
            fVar36 = fVar37 - fVar35;
            fVar35 = fVar35 - fVar32;
            uVar11 = (uint)uVar22;
            if (fVar33 < fVar35) {
              uVar14 = uVar11;
            }
            fVar2 = *(float *)(in_RCX + 8 + uVar22 * 4);
            fVar37 = fVar2 - fVar37;
            if (fVar35 <= fVar33) {
              fVar35 = fVar33;
            }
            uVar8 = uVar11 + 1;
            if (fVar36 <= fVar35) {
              fVar36 = fVar35;
              uVar8 = uVar14;
            }
            uVar5 = uVar11 + 2;
            if (fVar37 <= fVar36) {
              uVar5 = uVar8;
              fVar37 = fVar36;
            }
            fVar32 = *(float *)(in_RCX + 0xc + uVar22 * 4);
            fVar33 = fVar32 - fVar2;
            uVar14 = uVar11 + 3;
            if (fVar33 <= fVar37) {
              fVar33 = fVar37;
              uVar14 = uVar5;
            }
            uVar22 = uVar22 + 4;
          } while (uVar22 != (int64_t)(int)uVar4);
        }
        iVar12 = uVar17 - uVar14;
      }
      FUN_015c1480(fVar34 * (float)dVar30,iVar12);
      lVar21 = *local_res8;
      uVar22 = (uint64_t)*(int *)(lVar21 + 0xc);
      bVar3 = lVar25 < (int64_t)uVar22;
      lVar25 = lVar25 + 1;
      uVar14 = uVar17;
    } while (bVar3);
  }
  fVar35 = _UNK_0240e1fc;
  fVar34 = _UNK_0240e1f8;
  fVar33 = _UNK_0240e1f4;
  fVar32 = g_023d59b4;
  if (0 < (int)param_4) {
    if (param_4 < 8) {
      uVar22 = 0;
    }
    else {
      uVar22 = (uint64_t)(param_4 & 0xfffffff8);
      uVar23 = 0;
      do {
        pfVar1 = (float *)(in_RCX + uVar23 * 4);
        fVar37 = pfVar1[1];
        fVar36 = pfVar1[2];
        fVar2 = pfVar1[3];
        if (*pfVar1 < fVar32) {
          *(void*)(in_RCX + uVar23 * 4) = 0x38d1b717;
        }
        if (fVar37 < fVar33) {
          *(void*)(in_RCX + 4 + uVar23 * 4) = 0x38d1b717;
        }
        if (fVar34 <= fVar36) {
          if (fVar2 < fVar35) goto LAB_014ae5a0;
LAB_014ae52b:
          pfVar1 = (float *)(in_RCX + 0x10 + uVar23 * 4);
          fVar37 = *pfVar1;
          fVar36 = pfVar1[1];
          fVar2 = pfVar1[2];
          fVar6 = pfVar1[3];
        }
        else {
          *(void*)(in_RCX + 8 + uVar23 * 4) = 0x38d1b717;
          if (fVar35 <= fVar2) goto LAB_014ae52b;
LAB_014ae5a0:
          *(void*)(in_RCX + 0xc + uVar23 * 4) = 0x38d1b717;
          pfVar1 = (float *)(in_RCX + 0x10 + uVar23 * 4);
          fVar37 = *pfVar1;
          fVar36 = pfVar1[1];
          fVar2 = pfVar1[2];
          fVar6 = pfVar1[3];
        }
        if (fVar37 < fVar32) {
          *(void*)(in_RCX + 0x10 + uVar23 * 4) = 0x38d1b717;
        }
        if (fVar36 < fVar33) {
          *(void*)(in_RCX + 0x14 + uVar23 * 4) = 0x38d1b717;
        }
        if (fVar2 < fVar34) {
          *(void*)(in_RCX + 0x18 + uVar23 * 4) = 0x38d1b717;
        }
        if (fVar6 < fVar35) {
          *(void*)(in_RCX + 0x1c + uVar23 * 4) = 0x38d1b717;
        }
        uVar23 = uVar23 + 8;
      } while (uVar22 != uVar23);
      fVar32 = g_023d59b4;
      if (uVar22 == uVar15) goto LAB_014ae5e8;
    }
    do {
      pfVar1 = (float *)(in_RCX + uVar22 * 4);
      if (*pfVar1 <= fVar32 && fVar32 != *pfVar1) {
        *(void*)(in_RCX + uVar22 * 4) = 0x38d1b717;
      }
      uVar22 = uVar22 + 1;
    } while (uVar15 != uVar22);
  }
LAB_014ae5e8:
  *local_res10 = fVar28;
  if ((bVar9) && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}

