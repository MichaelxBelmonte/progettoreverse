// Function: FUN_0149c330
// Address: 0149c330
// Size: 3475 bytes
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


void FUN_0149c330(double param_1,double param_2,float param_3,double param_4,uint32_t param_5,
                 uint64_t param_6,uint32_t param_7,char param_8,float param_9,float param_10)

{
  uint64_t uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  code *pcVar7;
  int iVar8;
  void*puVar9;
  void*puVar10;
  uint64_t uVar11;
  void*puVar12;
  void*puVar13;
  int64_t in_RCX;
  int iVar14;
  int64_t lVar15;
  int64_t *this_ptr;
  int in_R8D;
  int iVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  int64_t lVar20;
  float fVar21;
  float fVar22;
  uint32_t uVar23;
  float fVar24;
  double dVar25;
  uint32_t in_XMM4_Da;
  float in_XMM5_Da;
  uint32_t unaff_XMM7_Da;
  uint local_res8;
  int64_t local_res10;
  int local_res18;
  int local_res20;
  void*local_e8;
  char local_e0;
  int local_d8;
  int local_d4;
  int local_d0;
  float local_cc;
  float local_c8;
  uint32_t local_c4;
  float local_bc;
  double local_b8;
  uint64_t local_b0;
  int64_t local_98;
  float local_8c;
  float local_84;
  uint64_t local_80;
  float local_74;
  float local_68;
  int64_t local_58;
  char local_50;
  void*local_40;
  void*local_38;
  
  if ((int)local_res8 < 1) {
    local_84 = g_02390124;
  }
  else {
    local_84 = g_02390124 / (float)(int)local_res8;
  }
  local_c4 = unaff_XMM7_Da;
  local_bc = in_XMM5_Da;
  local_b8 = param_1;
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_02572358;
  pcVar6 = g_02572370;
  (*g_02572370)();
  puVar10 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = &g_024c1200;
  *(void*)((int64_t)puVar10 + 0xc) = 0;
  *(void*)((int64_t)puVar10 + 0x14) = 0;
  *(void*)((int64_t)puVar10 + 0x1c) = 0;
  FUN_00d500e0();
  FUN_00e3d400();
  FUN_00c8e690();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  uVar1 = *(void*)(local_58 + 0x10);
  FUN_00c8e690();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (local_res10 == 0) {
    FUN_00c8e690();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    uVar11 = FUN_00c92160();
    local_b0 = CONCAT71((int7)((uint64_t)uVar11 >> 8),local_58 != 0);
    local_98 = local_58;
    lVar20 = *(int64_t *)(local_58 + 0x10);
  }
  else {
    local_b0 = 0;
    local_98 = 0;
    lVar20 = 0;
  }
  fVar21 = (float)_logf(in_XMM4_Da);
  local_c8 = (float)_expf(fVar21 / g_023941f0);
  fVar21 = (float)_logf(param_9 / g_0240e330);
  fVar22 = (float)_logf(param_10 / g_0240e330);
  pcVar7 = g_025e4550;
  if ((int)local_res8 < 1) {
    bVar2 = true;
    bVar3 = true;
    bVar4 = false;
    local_40 = (void*)0x0;
    local_38 = (void*)0x0;
    puVar12 = local_38;
  }
  else {
    local_d0 = in_R8D + -1;
    dVar25 = local_b8 / g_02410f78;
    local_cc = param_3 * param_3;
    local_d8 = (int)(fVar21 * g_0240e334 * g_023941f0 + g_0239011c);
    local_d4 = (int)(fVar22 * g_0240e334 * g_023941f0 + g_0239011c);
    local_8c = g_02391090;
    local_80 = 0;
    local_38 = (void*)0x0;
    bVar3 = false;
    local_40 = (void*)0x0;
    bVar4 = false;
    do {
      puVar12 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &g_02572358;
      (*pcVar6)();
      if (puVar12 == local_38) {
        puVar12 = local_38;
        if (bVar3) {
          FUN_00d50b20();
          bVar2 = bVar3;
        }
        else {
          bVar2 = true;
        }
      }
      else {
        bVar2 = true;
        if ((bVar3) && (local_38 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar3 = bVar2;
      FUN_00d21140();
      iVar14 = (int)local_80;
      if (local_res10 != 0) {
        lVar20 = local_res10 + (uint64_t)(uint)(iVar14 * 0x1e0) * 4;
      }
      ___bzero();
      iVar8 = (int)((double)iVar14 * param_4 * param_2);
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      if (in_R8D <= iVar8) {
        iVar8 = local_d0;
      }
      if (param_3 < *(float *)(in_RCX + (int64_t)iVar8 * 4)) {
        local_e0 = '\0';
        local_e8 = puVar10;
        FUN_014b2ee0(SUB84((double)iVar14 * param_4 * local_b8,0),dVar25,&local_e8,uVar1);
        if ((local_e0 != '\0') && (local_e8 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      if (local_cc < 0.0) {
        fVar21 = *(float *)(lVar20 + 0x77c);
        lVar15 = 0x1df;
        do {
          fVar22 = *(float *)(lVar20 + -4 + lVar15 * 4);
          if ((0.0 < fVar22) && (fVar21 <= 0.0)) {
            lVar15 = lVar15 + -1;
            iVar8 = (int)lVar15;
            goto joined_r0x0149c965;
          }
          fVar21 = *(float *)(lVar20 + -8 + lVar15 * 4);
          if ((0.0 < fVar21) && (fVar22 <= 0.0)) {
            iVar16 = (int)lVar15 + -2;
            iVar8 = iVar16;
            goto joined_r0x0149c973;
          }
          fVar22 = *(float *)(lVar20 + -0xc + lVar15 * 4);
          if ((0.0 < fVar22) && (fVar21 <= 0.0)) {
            iVar16 = (int)lVar15 + -3;
            iVar8 = iVar16;
            goto joined_r0x0149c973;
          }
          if (lVar15 == 3) {
            iVar16 = 0x1df;
            goto LAB_0149c9c0;
          }
          fVar21 = *(float *)(lVar20 + -0x10 + lVar15 * 4);
          lVar15 = lVar15 + -4;
        } while ((fVar21 <= 0.0) || (0.0 < fVar22));
        iVar8 = (int)lVar15;
joined_r0x0149c965:
        iVar16 = (int)lVar15;
joined_r0x0149c973:
        if (iVar8 < 0x1df) {
          ___bzero();
        }
LAB_0149c9c0:
        lVar15 = 0x1dc;
        fVar21 = g_02390124;
        do {
          *(float *)(lVar20 + 0xc + lVar15 * 4) = fVar21 * *(float *)(lVar20 + 0xc + lVar15 * 4);
          fVar22 = local_c8 * local_c8 * fVar21;
          *(float *)(lVar20 + 8 + lVar15 * 4) =
               local_c8 * fVar21 * *(float *)(lVar20 + 8 + lVar15 * 4);
          fVar24 = local_c8 * fVar22;
          *(float *)(lVar20 + 4 + lVar15 * 4) = fVar22 * *(float *)(lVar20 + 4 + lVar15 * 4);
          fVar21 = local_c8 * fVar24;
          *(float *)(lVar20 + lVar15 * 4) = fVar24 * *(float *)(lVar20 + lVar15 * 4);
          lVar15 = lVar15 + -4;
        } while (lVar15 != -4);
        if (iVar16 < 0) {
          fVar21 = 0.0;
          local_68 = 0.0;
        }
        else {
          local_68 = 0.0;
          local_74 = 0.0;
          bVar2 = false;
          fVar21 = 0.0;
          uVar17 = 0;
          uVar18 = 0;
          do {
            fVar22 = *(float *)(lVar20 + uVar18 * 4);
            uVar19 = uVar18 + 1;
            if (local_74 <= 0.0 && 0.0 < fVar22) {
              bVar2 = true;
              uVar17 = uVar18 & 0xffffffff;
              fVar21 = fVar22;
            }
            if (((0.0 < local_74) && (fVar22 <= 0.0)) ||
               ((bVar2 && ((fVar22 < fVar21 && (iVar16 == (int)uVar18)))))) {
              puVar13 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar13 = &g_025e4538;
              *(void*)((int64_t)puVar13 + 0xc) = 0;
              *(void*)((int64_t)puVar13 + 0x14) = 0;
              *(void*)((int64_t)puVar13 + 0x19) = 0;
              puVar13[5] = 0;
              puVar13[6] = 0;
              (*pcVar7)();
              if (puVar13 == local_40) {
                puVar13 = local_40;
                if (bVar4) {
                  FUN_00d50b20();
                  bVar5 = bVar4;
                }
                else {
                  bVar5 = true;
                }
              }
              else {
                bVar5 = true;
                if ((bVar4) && (local_40 != (void*)0x0)) {
                  FUN_00d50b20();
                }
              }
              *(int *)((int64_t)puVar13 + 0xc) = iVar14;
              *(int *)(puVar13 + 2) = (int)uVar17;
              *(float *)(puVar13 + 3) = fVar21;
              *(float *)((int64_t)puVar13 + 0x1c) = fVar21;
              FUN_00d21140();
              if (local_68 < fVar21) {
                local_68 = fVar21;
              }
              bVar2 = false;
              local_40 = puVar13;
              bVar4 = bVar5;
            }
            else if ((bool)(bVar2 & fVar21 < fVar22)) {
              uVar17 = uVar18 & 0xffffffff;
              fVar21 = fVar22;
            }
            uVar18 = uVar19;
            local_74 = fVar22;
          } while (iVar16 + 1 != uVar19);
        }
        if (param_8 == '\0') {
          iVar8 = *(int *)((int64_t)puVar12 + 0xc);
LAB_0149cd77:
          if (0 < iVar8) {
            local_68 = local_68 * local_bc;
            iVar8 = 0;
            do {
              puVar13 = *(void**)(puVar12[2] + (int64_t)iVar8 * 8);
              fVar21 = local_68;
              if (local_40 == puVar13) {
                if ((!bVar4) && (local_40 != (void*)0x0)) {
                  bVar4 = true;
                  FUN_00d50b00();
                }
LAB_0149ce30:
                if (*(float *)(local_40 + 3) <= local_68 && local_68 != *(float *)(local_40 + 3)) {
LAB_0149ce6d:
                  fVar21 = (float)FUN_00d23f50();
                  iVar8 = iVar8 + -1;
                }
              }
              else {
                if (puVar13 != (void*)0x0) {
                  FUN_00d50b00();
                }
                if ((bVar4) && (local_40 != (void*)0x0)) {
                  FUN_00d50b20();
                  bVar4 = true;
                  local_40 = puVar13;
                  goto LAB_0149ce30;
                }
                bVar4 = true;
                local_40 = puVar13;
                if (*(float *)(puVar13 + 3) <= local_68 && local_68 != *(float *)(puVar13 + 3))
                goto LAB_0149ce6d;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < *(int *)((int64_t)puVar12 + 0xc));
          }
        }
        else if (0 < *(int *)((int64_t)puVar12 + 0xc)) {
          iVar16 = 0;
          do {
            puVar13 = *(void**)(puVar12[2] + (int64_t)iVar16 * 8);
            if (local_40 == puVar13) {
              if ((!bVar4) && (local_40 != (void*)0x0)) {
                bVar4 = true;
                fVar21 = (float)FUN_00d50b00();
              }
LAB_0149ccf0:
              iVar8 = *(int *)(local_40 + 2);
              if (local_d8 < iVar8) goto LAB_0149cd35;
LAB_0149cd29:
              if (iVar8 < local_d4) goto LAB_0149cd35;
            }
            else {
              if (puVar13 != (void*)0x0) {
                fVar21 = (float)FUN_00d50b00();
              }
              if ((bVar4) && (local_40 != (void*)0x0)) {
                fVar21 = (float)FUN_00d50b20();
                bVar4 = true;
                local_40 = puVar13;
                goto LAB_0149ccf0;
              }
              bVar4 = true;
              iVar8 = *(int *)(puVar13 + 2);
              local_40 = puVar13;
              if (iVar8 <= local_d8) goto LAB_0149cd29;
LAB_0149cd35:
              fVar21 = (float)FUN_00d23f50();
              iVar16 = iVar16 + -1;
            }
            iVar16 = iVar16 + 1;
            iVar8 = *(int *)((int64_t)puVar12 + 0xc);
          } while (iVar16 < iVar8);
          goto LAB_0149cd77;
        }
        FUN_00d242c0(fVar21,0);
        while (local_res18 < *(int *)((int64_t)puVar12 + 0xc)) {
          FUN_00d23740();
        }
        FUN_00d216c0();
        iVar8 = *(int *)((int64_t)puVar12 + 0xc);
        while (local_res20 < iVar8) {
          lVar15 = *(int64_t *)(puVar12[2] + (int64_t)local_res20 * 8);
          if (lVar15 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar15 != 0) {
            FUN_00d50b20();
          }
          FUN_00d23620();
          iVar8 = *(int *)((int64_t)puVar12 + 0xc);
        }
        uVar23 = FUN_014b32a0(local_c4,param_5,param_6,param_7,0);
        FUN_00d242c0(uVar23,0);
        FUN_00d214d0();
      }
      fVar21 = (float)iVar14 * local_84 * g_02391094 + g_02391090;
      if ((g_02394254 < fVar21 - local_8c) &&
         ((**(code **)(*this_ptr + 0x380))(), local_8c = fVar21,
         *(char *)((int64_t)this_ptr + 0x3c) != '\0')) {
        FUN_00e34a60();
        break;
      }
      local_80 = local_80 + 1;
      local_38 = puVar12;
    } while (local_80 != local_res8);
    bVar2 = false;
    bVar3 = false;
  }
  if (((char)local_b0 != '\0') && (bVar3 = bVar2, local_98 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if ((bVar4) && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (!bVar3 && puVar12 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar10 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

