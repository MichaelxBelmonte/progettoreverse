// Function: FUN_014a42b0
// Address: 014a42b0
// Size: 3734 bytes
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


void* FUN_014a42b0(float param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  bool bVar9;
  code *pcVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  void*puVar14;
  void*puVar15;
  int64_t lVar16;
  char in_CL;
  int64_t *in_RDX;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  double unaff_XMM7_Qa;
  float local_b4;
  double local_a0;
  int64_t local_88;
  int64_t local_70;
  int64_t local_68;
  int64_t local_50;
  int64_t local_38;
  
  puVar14 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar14 = &g_02572358;
  pcVar10 = g_02572370;
  (*g_02572370)();
  puVar15 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar15 = &g_02572358;
  (*pcVar10)();
  fVar18 = (float)_powf(g_023908ec * param_1,g_02394288);
  lVar16 = *arg1;
  if (*(int *)(lVar16 + 0xc) == 0) {
    *this_ptr = puVar15;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    if (*(int *)(lVar16 + 0xc) < 1) {
      bVar4 = false;
      local_50 = 0;
    }
    else if (in_CL == '\0') {
      lVar17 = 0;
      local_50 = 0;
      bVar4 = false;
      do {
        lVar16 = *(int64_t *)(*(int64_t *)(lVar16 + 0x10) + lVar17 * 8);
        if (local_50 == lVar16) {
          if ((!bVar4) && (local_50 != 0)) {
            bVar4 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar16 != 0) {
            FUN_00d50b00();
          }
          if ((bVar4) && (local_50 != 0)) {
            FUN_00d50b20();
            bVar4 = true;
            local_50 = lVar16;
          }
          else {
            bVar4 = true;
            local_50 = lVar16;
          }
        }
        if ((((*(byte *)(local_50 + 0x3c) & 0x33) != 0) && (param_2 < *(float *)(local_50 + 0x20)))
           && ((param_3 < *(float *)(local_50 + 0x34) || (param_3 < *(float *)(local_50 + 0x38)))))
        {
          FUN_00d21140();
        }
        lVar17 = lVar17 + 1;
        lVar16 = *arg1;
      } while (lVar17 < *(int *)(lVar16 + 0xc));
    }
    else {
      lVar17 = 0;
      local_50 = 0;
      bVar4 = false;
      do {
        lVar16 = *(int64_t *)(*(int64_t *)(lVar16 + 0x10) + lVar17 * 8);
        if (local_50 == lVar16) {
          if ((!bVar4) && (local_50 != 0)) {
            bVar4 = true;
            FUN_00d50b00();
          }
LAB_014a4450:
          uVar12 = *(uint *)(local_50 + 0x3c);
        }
        else {
          if (lVar16 != 0) {
            FUN_00d50b00();
          }
          if ((bVar4) && (local_50 != 0)) {
            FUN_00d50b20();
            bVar4 = true;
            local_50 = lVar16;
            goto LAB_014a4450;
          }
          bVar4 = true;
          uVar12 = *(uint *)(lVar16 + 0x3c);
          local_50 = lVar16;
        }
        if ((((uVar12 & 0x33) != 0) && (param_2 < *(float *)(local_50 + 0x20))) &&
           ((param_3 < *(float *)(local_50 + 0x34) || (param_3 < *(float *)(local_50 + 0x38))))) {
          FUN_00d21140();
          uVar12 = *(uint *)(local_50 + 0x3c);
        }
        if ((uVar12 == 8) && (in_XMM5_Da < *(float *)(local_50 + 0x20))) {
          FUN_00d21140();
        }
        lVar17 = lVar17 + 1;
        lVar16 = *arg1;
      } while (lVar17 < *(int *)(lVar16 + 0xc));
    }
    lVar16 = *in_RDX;
    if ((lVar16 != 0) && (0 < *(int *)(lVar16 + 0xc))) {
      lVar17 = 0;
      do {
        lVar16 = *(int64_t *)(*(int64_t *)(lVar16 + 0x10) + lVar17 * 8);
        if (local_50 == lVar16) {
          if ((!bVar4) && (local_50 != 0)) {
            bVar4 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar16 != 0) {
            FUN_00d50b00();
          }
          if ((bVar4) && (local_50 != 0)) {
            FUN_00d50b20();
            bVar4 = true;
            local_50 = lVar16;
          }
          else {
            bVar4 = true;
            local_50 = lVar16;
          }
        }
        cVar11 = FUN_00d23d70();
        if (cVar11 != '\0') {
          FUN_00d23f50();
        }
        FUN_00d21140();
        lVar17 = lVar17 + 1;
        lVar16 = *in_RDX;
      } while (lVar17 < *(int *)(lVar16 + 0xc));
    }
    fVar19 = g_02390124;
    if (fVar18 <= g_02390124) {
      fVar19 = fVar18;
    }
    bVar5 = false;
    local_88 = 0;
    bVar7 = false;
    local_68 = 0;
    bVar3 = false;
    local_38 = 0;
    bVar6 = false;
    local_70 = 0;
LAB_014a4700:
    if (local_70 != 0) {
      if (bVar6) {
        FUN_00d50b20();
        bVar6 = false;
      }
      else {
        bVar6 = false;
      }
    }
    if (local_38 != 0) {
      if (bVar3) {
        bVar3 = false;
        FUN_00d50b20();
      }
      else {
        bVar3 = false;
      }
    }
    bVar9 = bVar7;
    if (*(int *)((int64_t)puVar15 + 0xc) == 0) {
      local_a0 = unaff_XMM7_Qa;
      if (local_68 != 0) {
        if (bVar7) {
          FUN_00d50b20();
          bVar9 = false;
          lVar16 = 0;
          goto LAB_014a481e;
        }
        bVar9 = false;
      }
      lVar16 = 0;
    }
    else {
      lVar16 = *(int64_t *)puVar15[2];
      if (local_68 == lVar16) {
        lVar16 = local_68;
        if ((!bVar7) && (local_68 != 0)) {
          FUN_00d50b00();
          bVar9 = true;
        }
      }
      else {
        if (lVar16 != 0) {
          FUN_00d50b00();
        }
        bVar9 = true;
        if ((bVar7) && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      local_a0 = *(double *)(lVar16 + 0x10);
    }
LAB_014a481e:
    if (0 < *(int *)((int64_t)puVar14 + 0xc)) {
      lVar17 = 0;
      iVar8 = 0;
      iVar13 = 0;
      local_70 = 0;
      local_38 = 0;
      local_b4 = param_1;
      bVar7 = bVar6;
      do {
        lVar2 = *(int64_t *)(puVar14[2] + lVar17 * 8);
        if (local_88 == lVar2) {
          if ((!bVar5) && (local_88 != 0)) {
            bVar5 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          if ((bVar5) && (local_88 != 0)) {
            FUN_00d50b20();
            bVar5 = true;
            local_88 = lVar2;
          }
          else {
            bVar5 = true;
            local_88 = lVar2;
          }
        }
        dVar21 = local_a0;
        if ((lVar16 != 0) && (dVar20 = *(double *)(local_88 + 0x10), local_a0 < dVar20)) {
          local_a0 = (double)(int64_t)iVar13;
          do {
            local_a0 = (double)((int64_t)local_a0 + 1);
            iVar13 = iVar13 + 1;
            if (local_38 == lVar16) {
              if ((bVar9) && (!bVar3)) {
                bVar6 = true;
                FUN_00d50b00();
                lVar2 = local_38;
                goto LAB_014a4a40;
              }
              iVar1 = *(int *)((int64_t)puVar15 + 0xc);
            }
            else {
              if (bVar9) {
                FUN_00d50b00();
              }
              lVar2 = lVar16;
              bVar6 = bVar9;
              if ((bVar3) && (local_38 != 0)) {
                FUN_00d50b20();
              }
LAB_014a4a40:
              local_38 = lVar2;
              iVar1 = *(int *)((int64_t)puVar15 + 0xc);
              bVar3 = bVar6;
            }
            if ((int64_t)iVar1 <= (int64_t)local_a0) {
              if (bVar9) {
                FUN_00d50b20();
              }
              bVar9 = false;
              lVar16 = 0;
              dVar21 = unaff_XMM7_Qa;
              break;
            }
            lVar2 = *(int64_t *)(puVar15[2] + (int64_t)local_a0 * 8);
            if (lVar16 == lVar2) {
              if (!bVar9) {
                FUN_00d50b00();
                goto LAB_014a4af0;
              }
              dVar21 = *(double *)(lVar16 + 0x10);
            }
            else {
              if (lVar2 != 0) {
                FUN_00d50b00();
              }
              lVar16 = lVar2;
              if (bVar9) {
                FUN_00d50b20();
              }
LAB_014a4af0:
              bVar9 = true;
              dVar21 = *(double *)(lVar16 + 0x10);
            }
            if ((lVar16 == 0) || (dVar20 <= dVar21)) break;
          } while( true );
        }
        dVar20 = g_0240e3d8;
        if (local_38 != 0) {
          dVar20 = *(double *)(local_38 + 0x10);
        }
        dVar20 = *(double *)(local_88 + 0x18) - dVar20;
        dVar23 = unaff_XMM7_Qa;
        if (lVar16 != 0) {
          dVar23 = *(double *)(lVar16 + 0x18);
        }
        dVar23 = dVar23 - *(double *)(local_88 + 0x10);
        if (dVar23 <= dVar20) {
          dVar20 = dVar23;
        }
        if (g_0238fee8 <= dVar20 * g_0240e3e0) {
          fVar18 = *(float *)(local_88 + 0x20);
          fVar22 = g_02390124;
          if (*(int *)(local_88 + 0x3c) == 8) goto LAB_014a4c5d;
LAB_014a4c8f:
          fVar22 = fVar22 * fVar18;
        }
        else {
          dVar20 = (double)_pow(dVar20 * g_0240e3e0,(double)fVar19);
          fVar18 = *(float *)(local_88 + 0x20);
          fVar22 = (float)dVar20;
          if (*(int *)(local_88 + 0x3c) != 8) goto LAB_014a4c8f;
LAB_014a4c5d:
          fVar22 = fVar22 * fVar18 * unaff_XMM6_Da;
        }
        lVar2 = local_70;
        bVar6 = bVar7;
        if ((local_b4 < fVar22) && (param_1 < fVar22)) {
          local_b4 = fVar22;
          iVar8 = iVar13;
          if (local_70 == local_88) {
            if (((bVar5) && (!bVar7)) && (local_70 != 0)) {
              FUN_00d50b00();
              bVar6 = true;
            }
          }
          else {
            if (bVar5) {
              FUN_00d50b00();
            }
            lVar2 = local_88;
            bVar6 = bVar5;
            if ((bVar7) && (lVar2 = local_88, local_70 != 0)) {
              FUN_00d50b20();
              lVar2 = local_88;
            }
          }
        }
        local_70 = lVar2;
        lVar17 = lVar17 + 1;
        local_a0 = dVar21;
        bVar7 = bVar6;
      } while (lVar17 < *(int *)((int64_t)puVar14 + 0xc));
      if (local_70 == 0) goto LAB_014a5044;
      bVar7 = bVar9;
      if (iVar8 < 1) {
        lVar17 = 0;
        if (local_38 != 0) goto joined_r0x014a4dcb;
        local_38 = 0;
        iVar13 = *(int *)((int64_t)puVar15 + 0xc);
joined_r0x014a4e9a:
        if (iVar13 <= iVar8) goto LAB_014a4ea0;
LAB_014a4e43:
        local_68 = *(int64_t *)(puVar15[2] + (int64_t)iVar8 * 8);
        if (lVar16 == local_68) {
          local_68 = lVar16;
          if ((!bVar9) && (lVar16 != 0)) {
            FUN_00d50b00();
            bVar7 = true;
          }
        }
        else {
          if (local_68 == 0) {
            local_68 = 0;
          }
          else {
            FUN_00d50b00();
          }
joined_r0x014a4ed4:
          bVar7 = true;
          if ((bVar9) && (bVar7 = true, lVar16 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        lVar17 = *(int64_t *)(puVar15[2] + (uint64_t)(iVar8 - 1) * 8);
        if (local_38 == lVar17) {
          if (!bVar3) {
            if (local_38 == 0) {
              iVar13 = *(int *)((int64_t)puVar15 + 0xc);
              goto joined_r0x014a4e9a;
            }
            FUN_00d50b00();
            lVar17 = local_38;
            goto LAB_014a4e30;
          }
          iVar13 = *(int *)((int64_t)puVar15 + 0xc);
        }
        else {
          if (lVar17 == 0) {
            lVar17 = 0;
          }
          else {
            FUN_00d50b00();
          }
joined_r0x014a4dcb:
          if ((bVar3) && (local_38 != 0)) {
            FUN_00d50b20();
          }
LAB_014a4e30:
          bVar3 = true;
          iVar13 = *(int *)((int64_t)puVar15 + 0xc);
          local_38 = lVar17;
        }
        if (iVar8 < iVar13) goto LAB_014a4e43;
LAB_014a4ea0:
        local_68 = 0;
        if (lVar16 != 0) goto joined_r0x014a4ed4;
        local_68 = 0;
      }
      dVar21 = g_0240e3d8;
      if (local_38 != 0) {
        dVar21 = *(double *)(local_38 + 0x10);
      }
      dVar21 = *(double *)(local_70 + 0x18) - dVar21;
      dVar20 = unaff_XMM7_Qa;
      if (local_68 != 0) {
        dVar20 = *(double *)(local_68 + 0x18);
      }
      dVar20 = dVar20 - *(double *)(local_70 + 0x10);
      if (dVar20 <= dVar21) {
        dVar21 = dVar20;
      }
      fVar18 = in_XMM4_Da;
      if (*(int *)(local_70 + 0x3c) != 8) {
        fVar18 = param_4;
      }
      if ((double)fVar18 < dVar21) {
        FUN_00d23370(dVar21,iVar8);
      }
      FUN_00d23f50();
      goto LAB_014a4700;
    }
    local_38 = 0;
LAB_014a5044:
    *this_ptr = puVar15;
    *(void*)(this_ptr + 1) = 1;
    if ((bVar5) && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar9) && (lVar16 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar3) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return this_ptr;
}

