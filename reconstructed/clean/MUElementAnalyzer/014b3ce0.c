// Function: FUN_014b3ce0
// Address: 014b3ce0
// Size: 3503 bytes
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


int64_t * FUN_014b3ce0(double param_1,int64_t *param_2,int64_t *param_3,char param_4)

{
  float fVar1;
  void*puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  dword dVar9;
  code *pcVar10;
  int iVar11;
  void*puVar12;
  int in_ECX;
  int iVar13;
  uint uVar14;
  uint64_t uVar15;
  uint uVar16;
  int iVar17;
  int64_t lVar18;
  int64_t *this_ptr;
  int64_t lVar19;
  int64_t lVar20;
  int iVar21;
  int64_t lVar22;
  bool bVar23;
  float fVar24;
  double dVar25;
  float local_98;
  int64_t local_88;
  int64_t local_70;
  int64_t local_58;
  void*local_48;
  void*local_40;
  
  local_70 = FUN_00e83010();
  puVar12 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &g_02572358;
  pcVar10 = g_02572370;
  (*g_02572370)();
  dVar25 = *(double *)(*param_3 + 0x10);
  iVar17 = (int)(*(double *)(*param_3 + 0x18) / param_1 + g_023942b8);
  if (in_ECX < iVar17) {
    iVar17 = in_ECX;
  }
  iVar13 = 0;
  FUN_00d216c0();
  iVar11 = (int)(dVar25 / param_1);
  iVar21 = iVar17 - iVar11;
  if (iVar21 == 0 || iVar17 < iVar11) {
    local_88 = 0;
    bVar5 = false;
    local_40 = (void*)0x0;
    bVar8 = false;
    lVar20 = 0;
    bVar6 = false;
    iVar11 = 0;
    iVar17 = *(int *)((int64_t)puVar12 + 0xc);
    if (0 < iVar17) goto LAB_014b41c0;
LAB_014b47b3:
    if ((iVar17 == 0) || (local_48 = *(void**)puVar12[2], local_48 == (void*)0x0)) {
LAB_014b47e1:
      bVar23 = false;
      goto LAB_014b47ed;
    }
    FUN_00d50b00();
    bVar23 = true;
LAB_014b4803:
    bVar4 = false;
    if (*(int *)((int64_t)local_48 + 0xc) < 1) {
      bVar7 = false;
    }
    else {
      iVar17 = 0;
      local_98 = g_02394214;
      lVar19 = 0;
      local_58 = 0;
      bVar4 = false;
      do {
        lVar18 = *(int64_t *)(local_48[2] + lVar19 * 8);
        if (lVar20 == lVar18) {
          if ((!bVar6) && (lVar20 != 0)) {
            bVar6 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar18 != 0) {
            FUN_00d50b00();
          }
          if ((bVar6) && (lVar20 != 0)) {
            FUN_00d50b20();
            bVar6 = true;
            lVar20 = lVar18;
          }
          else {
            bVar6 = true;
            lVar20 = lVar18;
          }
        }
        fVar24 = *(float *)(lVar20 + 0x1c);
        lVar18 = local_58;
        bVar7 = bVar4;
        if (local_98 < fVar24) {
          local_98 = fVar24;
          if (local_58 == lVar20) {
            if (((bVar6) && (!bVar4)) && (local_58 != 0)) {
              FUN_00d50b00();
              bVar7 = true;
            }
          }
          else {
            if (bVar6) {
              FUN_00d50b00();
            }
            lVar18 = lVar20;
            bVar7 = bVar6;
            if ((bVar4) && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        local_58 = lVar18;
        iVar17 = iVar17 + *(int *)(lVar20 + 0x10);
        lVar19 = lVar19 + 1;
        bVar4 = bVar7;
      } while (lVar19 < *(int *)((int64_t)local_48 + 0xc));
      if (local_58 != 0) {
        if (param_4 == '\0') {
          fVar24 = (float)*(int *)(local_58 + 0x10);
        }
        else {
          fVar24 = (float)iVar17 / (float)*(int *)((int64_t)local_48 + 0xc);
        }
        fVar24 = (float)_exp2f(fVar24 / g_023941f0);
        lVar19 = *param_3;
        *(float *)(lVar19 + 0x38) = fVar24 * g_0240e330;
        bVar3 = false;
        bVar4 = false;
        dVar25 = (double)*(int *)(local_58 + 0xc) * param_1;
        goto LAB_014b49db;
      }
      bVar4 = false;
    }
  }
  else {
    lVar19 = (int64_t)iVar11;
    uVar16 = 0;
    iVar13 = 0;
    local_88 = 0;
    bVar5 = false;
    local_40 = (void*)0x0;
    bVar8 = false;
    lVar20 = 0;
    bVar6 = false;
    do {
      lVar18 = *(int64_t *)(*(int64_t *)(*param_2 + 0x10) + lVar19 * 8);
      if (local_88 == lVar18) {
        if ((!bVar5) && (local_88 != 0)) {
          bVar5 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar18 != 0) {
          FUN_00d50b00();
        }
        if ((bVar5) && (local_88 != 0)) {
          FUN_00d50b20();
          bVar5 = true;
          local_88 = lVar18;
        }
        else {
          bVar5 = true;
          local_88 = lVar18;
        }
      }
      iVar11 = *(int *)(local_88 + 0xc);
      if (iVar11 != 0) {
        uVar14 = iVar11 - 1;
        if ((int)uVar16 < iVar11) {
          uVar14 = uVar16;
        }
        lVar18 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + (int64_t)(int)uVar14 * 8);
        if (lVar20 == lVar18) {
          if ((!bVar6) && (lVar20 != 0)) {
            FUN_00d50b00();
            lVar18 = lVar20;
            goto LAB_014b3ff0;
          }
        }
        else {
          if (lVar18 != 0) {
            FUN_00d50b00();
          }
          if ((bVar6) && (lVar20 != 0)) {
            FUN_00d50b20();
          }
LAB_014b3ff0:
          bVar6 = true;
          lVar20 = lVar18;
        }
        if (local_40 == (void*)0x0) {
          local_40 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *local_40 = &g_02572358;
          (*pcVar10)();
          FUN_00d21140();
          bVar8 = true;
        }
        FUN_00d21140();
        lVar18 = *(int64_t *)(lVar20 + 0x28);
        uVar16 = 0;
        if (lVar18 != 0) {
          if (*(int *)(lVar18 + 0x14) == 0) {
            bVar23 = true;
            uVar16 = 0;
          }
          else {
            if ((((*(int *)(lVar18 + 0x14) != 1) ||
                 (lVar18 = *(int64_t *)(lVar18 + 0x28), lVar18 == 0)) ||
                (uVar16 = 0, *(int *)(lVar18 + 0x14) != 0)) || (*(int64_t *)(lVar18 + 0x28) == 0))
            goto LAB_014b3ea0;
            bVar23 = *(int *)(*(int64_t *)(lVar18 + 0x28) + 0x14) == 0;
            uVar16 = (uint)bVar23;
          }
          if ((iVar17 + -1 != lVar19) && (bVar23)) goto LAB_014b3ede;
        }
LAB_014b3ea0:
        if (iVar13 < *(int *)((int64_t)local_40 + 0xc)) {
          iVar13 = *(int *)((int64_t)local_40 + 0xc);
        }
        if (bVar8) {
          FUN_00d50b20();
        }
        bVar8 = false;
        local_40 = (void*)0x0;
      }
LAB_014b3ede:
      lVar19 = lVar19 + 1;
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    iVar11 = (int)((double)iVar13 * g_023942b8);
    if (iVar13 == 2) {
      iVar11 = 2;
    }
    iVar17 = *(int *)((int64_t)puVar12 + 0xc);
    if (iVar17 < 1) goto LAB_014b47b3;
LAB_014b41c0:
    iVar21 = 0;
    do {
      puVar2 = *(void**)(puVar12[2] + (int64_t)iVar21 * 8);
      if (local_40 == puVar2) {
        if (bVar8) {
          dVar9 = *(dword *)((int64_t)local_40 + 0xc);
        }
        else {
          dVar9 = MACH_HEADER.filetype;
          if (local_40 != (void*)0x0) {
            FUN_00d50b00();
            goto LAB_014b422b;
          }
        }
      }
      else {
        if (puVar2 != (void*)0x0) {
          FUN_00d50b00();
        }
        if ((bVar8) && (local_40 != (void*)0x0)) {
          FUN_00d50b20();
          local_40 = puVar2;
LAB_014b422b:
          bVar8 = true;
          dVar9 = *(dword *)((int64_t)local_40 + 0xc);
        }
        else {
          bVar8 = true;
          local_40 = puVar2;
          dVar9 = *(dword *)((int64_t)puVar2 + 0xc);
        }
      }
      if ((int)dVar9 < iVar11) {
        FUN_00d23f50();
        iVar21 = iVar21 + -1;
      }
      iVar21 = iVar21 + 1;
      iVar17 = *(int *)((int64_t)puVar12 + 0xc);
    } while (iVar21 < iVar17);
    if (iVar17 < 2) goto LAB_014b47b3;
    if (100 < iVar13) {
      if (local_70 != 0) {
        FUN_00e83070();
      }
      local_70 = FUN_00e83010();
      if (0 < *(int *)((int64_t)puVar12 + 0xc)) goto LAB_014b435f;
      goto LAB_014b47e1;
    }
LAB_014b435f:
    fVar24 = 0.0;
    lVar19 = 0;
    local_48 = (void*)0x0;
    bVar23 = false;
    do {
      puVar2 = *(void**)(puVar12[2] + lVar19 * 8);
      if (local_40 == puVar2) {
        if (!bVar8) {
          bVar8 = true;
          FUN_00d50b00();
        }
LAB_014b4410:
        uVar16 = *(uint *)((int64_t)local_40 + 0xc);
      }
      else {
        if (puVar2 != (void*)0x0) {
          FUN_00d50b00();
        }
        local_40 = puVar2;
        if (bVar8) {
          FUN_00d50b20();
          bVar8 = true;
          goto LAB_014b4410;
        }
        bVar8 = true;
        uVar16 = *(uint *)((int64_t)puVar2 + 0xc);
      }
      uVar15 = (uint64_t)uVar16;
      if (0 < (int)uVar16) {
        lVar18 = 0;
        do {
          lVar22 = *(int64_t *)(local_40[2] + lVar18 * 8);
          if (lVar20 == lVar22) {
            if ((!bVar6) && (lVar20 != 0)) {
              bVar6 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar22 != 0) {
              FUN_00d50b00();
            }
            if ((bVar6) && (lVar20 != 0)) {
              FUN_00d50b20();
              bVar6 = true;
              lVar20 = lVar22;
            }
            else {
              bVar6 = true;
              lVar20 = lVar22;
            }
          }
          *(void*)(local_70 + lVar18 * 4) = *(void*)(lVar20 + 0x1c);
          lVar18 = lVar18 + 1;
          uVar15 = (uint64_t)*(int *)((int64_t)local_40 + 0xc);
        } while (lVar18 < (int64_t)uVar15);
      }
      FUN_015c1480(g_02394298,uVar15 & 0xffffffff);
      if (0 < *(int *)((int64_t)local_40 + 0xc)) {
        if (bVar8) {
          lVar18 = 0;
          bVar4 = bVar23;
          do {
            fVar1 = *(float *)(local_70 + lVar18 * 4);
            puVar2 = local_48;
            bVar23 = bVar4;
            if (fVar24 < fVar1) {
              puVar2 = local_40;
              fVar24 = fVar1;
              if (local_48 == local_40) {
                if (!bVar4) {
                  FUN_00d50b00();
                  bVar23 = true;
                }
              }
              else {
                FUN_00d50b00();
                bVar23 = bVar8;
                if ((bVar4) && (local_48 != (void*)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            local_48 = puVar2;
            lVar22 = *(int64_t *)(local_40[2] + lVar18 * 8);
            if (lVar20 == lVar22) {
              if ((!bVar6) && (lVar20 != 0)) {
                bVar6 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar22 != 0) {
                FUN_00d50b00();
              }
              if ((bVar6) && (lVar20 != 0)) {
                FUN_00d50b20();
                bVar6 = true;
                lVar20 = lVar22;
              }
              else {
                bVar6 = true;
                lVar20 = lVar22;
              }
            }
            lVar18 = lVar18 + 1;
            bVar4 = bVar23;
          } while (lVar18 < *(int *)((int64_t)local_40 + 0xc));
        }
        else {
          lVar18 = 0;
          do {
            fVar1 = *(float *)(local_70 + lVar18 * 4);
            if (fVar1 <= fVar24) {
              lVar22 = *(int64_t *)(local_40[2] + lVar18 * 8);
              if (lVar20 == lVar22) goto LAB_014b4742;
LAB_014b4781:
              if (lVar22 != 0) {
                FUN_00d50b00();
              }
              bVar4 = true;
              if ((bVar6) && (lVar20 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_48 != local_40) {
                if ((bVar23) && (local_48 != (void*)0x0)) {
                  FUN_00d50b20();
                }
                bVar23 = false;
              }
              lVar22 = *(int64_t *)(local_40[2] + lVar18 * 8);
              local_48 = local_40;
              fVar24 = fVar1;
              if (lVar20 != lVar22) goto LAB_014b4781;
LAB_014b4742:
              lVar22 = lVar20;
              bVar4 = bVar6;
              if ((!bVar6) && (lVar20 != 0)) {
                FUN_00d50b00();
                bVar4 = true;
              }
            }
            bVar6 = bVar4;
            lVar20 = lVar22;
            lVar18 = lVar18 + 1;
          } while (lVar18 < *(int *)((int64_t)local_40 + 0xc));
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < *(int *)((int64_t)puVar12 + 0xc));
    if (local_48 != (void*)0x0) goto LAB_014b4803;
LAB_014b47ed:
    bVar4 = true;
    bVar7 = false;
  }
  lVar19 = *param_3;
  *(void*)(lVar19 + 0x38) = 0xbf800000;
  bVar3 = true;
  local_58 = 0;
  dVar25 = g_023b19a0;
LAB_014b49db:
  *(double *)(lVar19 + 0x30) = dVar25;
  FUN_00e83070();
  *(void*)(this_ptr + 1) = 0;
  if (!bVar7 && !bVar3) {
    FUN_00d50b00();
  }
  *this_ptr = local_58;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar6) && (lVar20 != 0)) {
    FUN_00d50b20();
  }
  if (bVar23 && !bVar4) {
    FUN_00d50b20();
  }
  if ((bVar8) && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar12 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((bVar5) && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

