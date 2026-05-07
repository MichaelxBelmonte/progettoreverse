// Function: FUN_014a6a60
// Address: 014a6a60
// Size: 1982 bytes
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


void FUN_014a6a60(double param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  void*puVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint in_ECX;
  void*puVar8;
  void *pvVar9;
  int iVar10;
  uint64_t uVar11;
  size_t in_R8D;
  bool bVar12;
  int64_t lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float in_XMM4_Da;
  uint32_t in_XMM5_Da;
  uint32_t unaff_XMM6_Da;
  float fVar22;
  int64_t local_60;
  char local_58;
  int64_t local_38;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar8 = &g_02572358;
  *puVar5 = &g_02572358;
  (*g_02572370)();
  lVar6 = FUN_00e83010();
  lVar7 = FUN_00e83010();
  _memcpy(puVar8,(void *)((int64_t)(int)in_ECX << 2),in_R8D);
  pvVar9 = (void *)0x0;
  FUN_015c1480(in_XMM5_Da,in_ECX);
  _memcpy(pvVar9,(void *)((int64_t)(int)in_ECX << 2),in_R8D);
  FUN_015c1480(unaff_XMM6_Da,in_ECX);
  if (0 < (int)in_ECX) {
    fVar14 = (float)((double)param_2 * param_1);
    uVar11 = 0;
    local_38._0_4_ = g_02390d00;
    fVar15 = 0.0;
    fVar19 = g_02393944;
    do {
      fVar4 = (float)local_38;
      fVar16 = *(float *)(lVar7 + uVar11 * 4);
      fVar17 = *(float *)(lVar6 + uVar11 * 4);
      fVar22 = fVar16 / fVar17;
      local_38._0_4_ = g_02390d00;
      if ((in_XMM4_Da <= fVar17 && in_XMM4_Da <= fVar16) && param_3 <= fVar22) {
        local_38._0_4_ = g_02390124;
      }
      fVar20 = fVar22;
      if (fVar19 <= fVar22) {
        fVar20 = fVar19;
      }
      iVar10 = (int)uVar11;
      if ((0.0 <= fVar4) || ((float)local_38 <= 0.0)) {
        fVar21 = fVar22;
        if (fVar22 <= fVar15) {
          fVar21 = fVar15;
        }
        fVar15 = fVar21;
        fVar19 = fVar20;
        if (((in_XMM4_Da > fVar17 || in_XMM4_Da > fVar16) || param_3 > fVar22) && 0.0 < fVar4) {
          iVar1 = *(int *)((int64_t)puVar5 + 0xc);
          if (0 < iVar1) {
            lVar13 = *(int64_t *)(puVar5[2] + (uint64_t)(iVar1 - 1) * 8);
            fVar16 = (float)*(double *)(lVar13 + 0x10);
            fVar17 = (float)iVar10 - fVar16;
            fVar19 = (float)*(double *)(lVar13 + 0x18);
            if ((fVar17 < fVar14) ||
               ((fVar17 < fVar14 + fVar14 &&
                ((fVar21 < param_4 || (g_02390120 < fVar19 / fVar21)))))) {
              FUN_00d23740();
              if (fVar20 <= fVar19) {
                fVar19 = fVar20;
              }
              goto LAB_014a6beb;
            }
            if (((2 < iVar1) &&
                (lVar13 = *(int64_t *)(puVar5[2] + (uint64_t)(iVar1 - 2) * 8),
                fVar16 - (float)*(double *)(lVar13 + 0x10) < fVar14 + fVar14)) &&
               ((g_02390120 < fVar19 / fVar21 ||
                (g_02390120 <
                 fVar19 / (float)((uint)(float)*(double *)(lVar13 + 0x18) ^ g_023945e0))))) {
              FUN_00d23740();
              FUN_00d23740();
            }
          }
          FUN_014328b0(SUB84((double)iVar10,0));
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          FUN_00d21140();
          if (local_60 != 0) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_014a6be0;
        }
      }
      else {
        FUN_014328b0(SUB84((double)iVar10,0));
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        FUN_00d21140();
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
LAB_014a6be0:
        fVar15 = 0.0;
        fVar19 = g_02393944;
      }
LAB_014a6beb:
      uVar11 = uVar11 + 1;
    } while (in_ECX != uVar11);
  }
  FUN_00d216c0();
  if (*(int *)((int64_t)puVar5 + 0xc) < 1) {
    bVar12 = false;
    local_38 = 0;
    bVar3 = false;
    lVar6 = 0;
  }
  else {
    param_1 = g_0238fee8 / param_1;
    lVar7 = 0;
    lVar6 = 0;
    bVar3 = false;
    local_38 = 0;
    bVar12 = false;
    do {
      lVar13 = *(int64_t *)(puVar5[2] + lVar7 * 8);
      if (lVar6 == lVar13) {
        if ((!bVar3) && (lVar6 != 0)) {
          bVar3 = true;
          FUN_00d50b00();
        }
LAB_014a7010:
        if (0.0 < *(double *)(lVar6 + 0x18) || *(double *)(lVar6 + 0x18) == 0.0) {
LAB_014a7049:
          dVar18 = (double)(int)(in_ECX - 1);
          bVar2 = bVar12;
          if (lVar7 < (int64_t)*(int *)((int64_t)puVar5 + 0xc) + -1) {
            lVar13 = *(int64_t *)(puVar5[2] + 8 + lVar7 * 8);
            if (local_38 == lVar13) {
              lVar13 = local_38;
              if ((bVar12) || (local_38 == 0)) goto LAB_014a70ba;
              bVar2 = true;
              FUN_00d50b00();
            }
            else {
              if (lVar13 != 0) {
                FUN_00d50b00();
                goto LAB_014a70a1;
              }
              lVar13 = 0;
              bVar2 = true;
              if (!bVar12) goto LAB_014a70ba;
LAB_014a70a9:
              bVar2 = true;
              if (local_38 != 0) {
                FUN_00d50b20();
              }
LAB_014a70ba:
              local_38 = lVar13;
              if (local_38 == 0) {
                local_38 = 0;
                goto LAB_014a70e1;
              }
            }
            dVar18 = *(double *)(local_38 + 0x10);
          }
          else {
            lVar13 = 0;
            if (local_38 != 0) {
LAB_014a70a1:
              bVar2 = true;
              if (bVar12) goto LAB_014a70a9;
              goto LAB_014a70ba;
            }
            local_38 = 0;
          }
LAB_014a70e1:
          FUN_01432380(SUB84(*(double *)(lVar6 + 0x10) * (double)(float)param_1,0),
                       dVar18 * (double)(float)param_1);
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          FUN_00d21140();
          if (local_60 != 0) {
            FUN_00d50b20();
          }
          bVar12 = bVar2;
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if (lVar13 != 0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (lVar6 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
          lVar6 = lVar13;
          goto LAB_014a7010;
        }
        bVar3 = true;
        lVar6 = lVar13;
        if (0.0 < *(double *)(lVar13 + 0x18) || *(double *)(lVar13 + 0x18) == 0.0)
        goto LAB_014a7049;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((int64_t)puVar5 + 0xc));
  }
  FUN_00e83070();
  FUN_00e83070();
  FUN_00d50b20();
  if ((bVar12) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  return;
}

