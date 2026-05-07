// Function: FUN_014a74b0
// Address: 014a74b0
// Size: 4322 bytes
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


void FUN_014a74b0(double param_1,int64_t *param_2,uint32_t param_3,float *param_4,float *param_5)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  int64_t lVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  void*puVar16;
  int64_t lVar17;
  int64_t lVar18;
  int in_ECX;
  int iVar19;
  int iVar20;
  int64_t lVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int64_t *arg1;
  size_t sVar25;
  int64_t *in_R8;
  int64_t *plVar26;
  float *pfVar27;
  uint64_t uVar28;
  int64_t lVar29;
  int iVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  uint64_t uVar34;
  uint8_t auVar35 [16];
  uint64_t extraout_XMM0_Qb_00;
  float fVar36;
  float fVar37;
  float *local_res8;
  uint *local_res10;
  float *local_res18;
  void*local_res20;
  int64_t local_1c0;
  uint8_t local_1b8;
  int64_t local_1b0;
  uint8_t local_1a8;
  int64_t local_1a0;
  uint8_t local_198;
  int64_t local_190;
  uint8_t local_188;
  int64_t local_180;
  uint64_t local_178;
  float local_158;
  int local_c0;
  int local_b0;
  int local_ac;
  int64_t local_a8;
  int64_t local_80;
  int64_t local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  int64_t local_48;
  int64_t local_38;
  uint64_t extraout_XMM0_Qb;
  
  plVar26 = in_R8;
  pfVar27 = param_4;
  puVar16 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar16 = &g_02572358;
  (*g_02572370)();
  if (*(int *)(*arg1 + 0xc) == 0) {
    bVar10 = false;
    local_38 = 0;
    bVar9 = false;
    local_48 = 0;
    bVar8 = false;
    local_78 = 0;
    bVar7 = false;
    local_80 = 0;
    bVar6 = false;
    local_60 = 0;
  }
  else {
    lVar17 = FUN_00e83010();
    lVar18 = FUN_00e83010();
    lVar29 = *arg1;
    if (*(int *)(lVar29 + 0xc) < 1) {
      *param_4 = 0.001;
      fVar37 = 0.0;
      bVar12 = false;
      local_a8 = 0;
      bVar10 = false;
      local_38 = 0;
      bVar9 = false;
      local_48 = 0;
      bVar8 = false;
      local_78 = 0;
      bVar7 = false;
      local_80 = 0;
      bVar6 = false;
      local_60 = 0;
      iVar19 = 0;
      fVar36 = 0.0;
      fVar33 = g_023908e0;
    }
    else {
      fVar36 = 0.0;
      lVar21 = 0;
      fVar37 = 0.0;
      local_158 = 0.0;
      iVar19 = 0;
      local_ac = 0;
      iVar30 = 0;
      local_b0 = 0;
      local_c0 = 0;
      local_60 = 0;
      bVar6 = false;
      local_80 = 0;
      bVar7 = false;
      local_78 = 0;
      bVar8 = false;
      local_48 = 0;
      bVar9 = false;
      local_38 = 0;
      bVar10 = false;
      local_a8 = 0;
      bVar12 = false;
      do {
        lVar29 = *(int64_t *)(*(int64_t *)(lVar29 + 0x10) + lVar21 * 8);
        if (local_60 == lVar29) {
          if ((!bVar6) && (local_60 != 0)) {
            bVar6 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar29 != 0) {
            FUN_00d50b00();
          }
          if ((bVar6) && (local_60 != 0)) {
            FUN_00d50b20();
            bVar6 = true;
            local_60 = lVar29;
          }
          else {
            bVar6 = true;
            local_60 = lVar29;
          }
        }
        if (lVar21 < (int64_t)*(int *)(*arg1 + 0xc) + -1) {
          lVar29 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + 8 + lVar21 * 8);
          if (local_80 == lVar29) {
            if ((!bVar7) && (local_80 != 0)) {
              bVar7 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar29 == 0) {
              lVar29 = 0;
            }
            else {
              FUN_00d50b00();
            }
joined_r0x014a7784:
            if ((bVar7) && (local_80 != 0)) {
              FUN_00d50b20();
              bVar7 = true;
              local_80 = lVar29;
            }
            else {
              bVar7 = true;
              local_80 = lVar29;
            }
          }
          if (lVar21 != 0) goto LAB_014a77e0;
LAB_014a787a:
          lVar29 = 0;
          if (local_78 != 0) goto LAB_014a788a;
          local_78 = 0;
        }
        else {
          lVar29 = 0;
          if (local_80 != 0) goto joined_r0x014a7784;
          local_80 = 0;
          if (lVar21 == 0) goto LAB_014a787a;
LAB_014a77e0:
          lVar29 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + -8 + lVar21 * 8);
          if (local_78 == lVar29) {
            if ((!bVar8) && (lVar29 != 0)) {
              bVar8 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar29 != 0) {
              FUN_00d50b00();
            }
LAB_014a788a:
            if ((bVar8) && (local_78 != 0)) {
              FUN_00d50b20();
            }
            bVar8 = true;
            local_78 = lVar29;
          }
        }
        dVar1 = *(double *)(local_60 + 0x10);
        dVar2 = *(double *)(local_60 + 0x18);
        iVar22 = (int)(dVar2 / param_1 + g_023942b8);
        if (in_ECX < iVar22) {
          iVar22 = in_ECX;
        }
        if ((local_80 != 0) && (*(double *)(local_80 + 0x10) - dVar2 < g_023b2c70)) {
          *(float *)(lVar17 + (int64_t)iVar19 * 4) =
               (float)((dVar2 - dVar1) / (*(double *)(local_80 + 0x10) - dVar1));
          iVar19 = iVar19 + 1;
        }
        local_1c0 = *param_2;
        local_1b8 = 0;
        local_1b0 = local_60;
        local_1a8 = 0;
        plVar26 = &local_1b0;
        pfVar27 = (float *)0x0;
        FUN_014b3ce0(param_1,&local_1c0);
        if (local_70 == local_48) {
          if ((bVar9) || (local_70 == 0)) {
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar9 = true;
            if (local_68 == '\0') {
              FUN_00d50b00();
            }
          }
        }
        else if (local_68 == '\0') {
          if (local_70 != 0) {
            FUN_00d50b00();
          }
          if ((!bVar9) || (local_48 == 0)) goto LAB_014a7a40;
          FUN_00d50b20();
          local_48 = local_70;
          bVar9 = true;
        }
        else if ((bVar9) && (local_48 != 0)) {
          FUN_00d50b20();
          local_48 = local_70;
          bVar9 = true;
        }
        else {
LAB_014a7a40:
          local_48 = local_70;
          bVar9 = true;
        }
        FUN_00d216c0();
        iVar14 = (int)(dVar1 / param_1);
        if (local_48 == 0) {
LAB_014a7e0b:
          uVar3 = *(uint *)((int64_t)puVar16 + 0xc);
        }
        else {
          if (local_38 == local_48) {
            local_70 = local_38;
            bVar11 = bVar10;
            if ((bVar9) && (!bVar10)) {
              FUN_00d50b00();
              bVar11 = true;
            }
          }
          else {
            if (bVar9) {
              FUN_00d50b00();
            }
            local_70 = local_48;
            bVar11 = bVar9;
            if ((bVar10) && (local_38 != 0)) {
              FUN_00d50b20();
            }
          }
          auVar35._0_8_ = FUN_00d21140();
          auVar35._8_8_ = extraout_XMM0_Qb;
          while( true ) {
            uVar34 = auVar35._0_8_;
            lVar29 = *(int64_t *)(local_70 + 0x30);
            if (lVar29 == local_70) {
              local_38 = local_70;
              if ((!bVar11) && (lVar29 != 0)) {
                bVar11 = true;
                uVar34 = FUN_00d50b00();
              }
            }
            else {
              if (lVar29 != 0) {
                uVar34 = FUN_00d50b00();
              }
              if (bVar11) {
                uVar34 = FUN_00d50b20();
              }
              bVar11 = true;
              local_38 = lVar29;
              if (lVar29 == 0) {
                bVar11 = true;
                local_38 = 0;
                bVar10 = bVar11;
                if (local_48 == 0) goto LAB_014a7ca3;
                goto LAB_014a7c41;
              }
            }
            if (*(int *)(local_38 + 0xc) < iVar14) break;
            auVar35._0_8_ = FUN_00d23370(uVar34,0);
            auVar35._8_8_ = extraout_XMM0_Qb_00;
            local_70 = local_38;
          }
          bVar10 = bVar11;
          if (local_38 == local_48) {
LAB_014a7ca3:
            lVar29 = local_48;
            if ((bVar9) && (lVar29 = local_48, !bVar10)) {
              FUN_00d50b00();
              lVar29 = local_48;
              bVar10 = true;
            }
          }
          else {
LAB_014a7c41:
            if (bVar9) {
              FUN_00d50b00();
            }
            lVar29 = local_48;
            bVar10 = bVar9;
            if ((bVar11) && (lVar29 = local_48, local_38 != 0)) {
              FUN_00d50b20();
              lVar29 = local_48;
            }
          }
LAB_014a7cf0:
          local_38 = lVar29;
          local_68 = '\0';
          lVar29 = *(int64_t *)(local_38 + 0x28);
          if (lVar29 == local_38) {
            if ((!bVar10) && (lVar29 != 0)) {
              bVar10 = true;
              FUN_00d50b00();
            }
            iVar31 = *(int *)(local_38 + 0xc);
joined_r0x014a7d6b:
            if (iVar22 <= iVar31) goto LAB_014a7db6;
            FUN_00d21140();
            local_70 = local_38;
            lVar29 = local_38;
            goto LAB_014a7cf0;
          }
          if (lVar29 != 0) {
            FUN_00d50b00();
          }
          if (bVar10) {
            FUN_00d50b20();
          }
          bVar10 = true;
          if (lVar29 != 0) {
            iVar31 = *(int *)(lVar29 + 0xc);
            local_38 = lVar29;
            goto joined_r0x014a7d6b;
          }
          local_38 = 0;
LAB_014a7db6:
          uVar3 = *(uint *)((int64_t)puVar16 + 0xc);
          if (uVar3 == 1) {
            lVar29 = *(int64_t *)(local_48 + 0x30);
            fVar32 = 0.0;
            fVar33 = 0.0;
            if (lVar29 != 0) {
              fVar33 = *(float *)(lVar29 + 0x1c);
            }
            lVar4 = *(int64_t *)(local_48 + 0x28);
            if (lVar4 != 0) {
              fVar32 = *(float *)(lVar4 + 0x1c);
            }
            if ((g_02391090 < fVar33) || (g_02391090 < fVar32)) {
              if (fVar33 <= fVar32) {
                local_68 = '\0';
                FUN_00d21140();
                local_70 = lVar4;
              }
              else {
                local_68 = '\0';
                FUN_00d23370(lVar4,0);
                local_70 = lVar29;
              }
            }
            goto LAB_014a7e0b;
          }
        }
        if (1 < (int)uVar3) {
          uVar5 = uVar3 >> 2;
          local_180 = (int64_t)(int)(uVar3 - uVar5);
          iVar31 = 100000;
          uVar28 = 0;
          iVar15 = local_b0;
          local_178 = (uint64_t)uVar3;
          iVar24 = -1;
          do {
            lVar29 = *(int64_t *)(puVar16[2] + uVar28 * 8);
            if (local_38 == lVar29) {
              if ((!bVar10) && (local_38 != 0)) {
                bVar10 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar29 != 0) {
                FUN_00d50b00();
              }
              if ((bVar10) && (local_38 != 0)) {
                FUN_00d50b20();
                bVar10 = true;
                local_38 = lVar29;
              }
              else {
                bVar10 = true;
                local_38 = lVar29;
              }
            }
            local_b0 = *(int *)(local_38 + 0x10);
            iVar20 = iVar31;
            if (local_b0 < iVar31) {
              iVar20 = local_b0;
            }
            iVar23 = iVar24;
            if (iVar24 < local_b0) {
              iVar23 = local_b0;
            }
            if (uVar28 < uVar5 || local_180 <= (int64_t)uVar28) {
              iVar23 = iVar24;
              iVar20 = iVar31;
            }
            iVar31 = iVar20;
            iVar15 = local_b0 - iVar15;
            iVar24 = -iVar15;
            if (0 < iVar15) {
              iVar24 = iVar15;
            }
            if (uVar28 == 0) {
              iVar24 = 0;
            }
            local_c0 = local_c0 + iVar24;
            uVar28 = uVar28 + 1;
            iVar15 = local_b0;
            iVar24 = iVar23;
          } while (local_178 != uVar28);
          fVar33 = (float)(int)((uVar3 - uVar5) - uVar5);
          fVar37 = fVar37 + (float)(iVar23 - iVar31) * fVar33;
          fVar36 = fVar36 + fVar33;
          iVar30 = iVar30 + uVar3 + -1;
        }
        iVar31 = iVar22 - iVar14;
        if (iVar31 != 0 && iVar14 <= iVar22) {
          lVar29 = (int64_t)iVar14;
          local_ac = (local_ac + iVar22) - iVar14;
          do {
            lVar4 = *(int64_t *)(*(int64_t *)(*param_2 + 0x10) + lVar29 * 8);
            if (local_a8 == lVar4) {
              if ((!bVar12) && (local_a8 != 0)) {
                bVar12 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar4 != 0) {
                FUN_00d50b00();
              }
              if ((bVar12) && (local_a8 != 0)) {
                FUN_00d50b20();
                bVar12 = true;
                local_a8 = lVar4;
              }
              else {
                bVar12 = true;
                local_a8 = lVar4;
              }
            }
            fVar33 = g_02394288;
            if (*(int *)(local_a8 + 0xc) != 0) {
              fVar33 = *(float *)(**(int64_t **)(local_a8 + 0x10) + 0x1c);
            }
            local_158 = local_158 + fVar33;
            lVar29 = lVar29 + 1;
            iVar31 = iVar31 + -1;
          } while (iVar31 != 0);
        }
        lVar21 = lVar21 + 1;
        lVar29 = *arg1;
      } while (lVar21 < *(int *)(lVar29 + 0xc));
      fVar33 = g_0239425c;
      if (local_ac != 0) {
        fVar33 = local_158 / (float)local_ac;
      }
      *param_4 = fVar33;
      fVar33 = g_023908e0;
      if (iVar30 != 0) {
        fVar33 = (float)local_c0 / (float)iVar30;
      }
    }
    fVar13 = g_023941f0;
    fVar32 = g_0239394c;
    *local_res8 = (float)(((double)((fVar33 / g_023941f0) * g_0239394c) / param_1) /
                         g_023907c0);
    *local_res10 = ~-(uint)(0.0 < fVar36) & g_0240e34c |
                   (uint)(((fVar37 / fVar36) / fVar13) * fVar32) & -(uint)(0.0 < fVar36);
    fVar37 = g_02394254;
    if (iVar19 != 0) {
      _qsort(FUN_00e8b5c0,4,(size_t)plVar26,(int *)pfVar27);
      lVar29 = *arg1;
      fVar37 = *(float *)(lVar17 + (int64_t)(iVar19 / 2) * 4);
    }
    *local_res18 = fVar37;
    if (*(int *)(lVar29 + 0xc) == 0) {
      *local_res20 = 0x3c23d70a;
      fVar37 = g_02394254;
    }
    else {
      local_198 = 0;
      local_190 = *in_R8;
      local_188 = 0;
      local_1a0 = lVar29;
      FUN_014af180(2,(int)g_0240d308,param_3);
      sVar25 = (size_t)plVar26;
      lVar29 = *arg1;
      if (*(int *)(lVar29 + 0xc) < 1) {
        iVar19 = 0;
      }
      else {
        lVar17 = 0;
        iVar19 = 0;
        do {
          lVar29 = *(int64_t *)(*(int64_t *)(lVar29 + 0x10) + lVar17 * 8);
          if (local_60 == lVar29) {
            if ((!bVar6) && (local_60 != 0)) {
              bVar6 = true;
              FUN_00d50b00();
            }
LAB_014a84e0:
            lVar21 = *(int64_t *)(local_60 + 0x40);
          }
          else {
            if (lVar29 != 0) {
              FUN_00d50b00();
            }
            if ((bVar6) && (local_60 != 0)) {
              FUN_00d50b20();
              bVar6 = true;
              local_60 = lVar29;
              goto LAB_014a84e0;
            }
            bVar6 = true;
            lVar21 = *(int64_t *)(lVar29 + 0x40);
            local_60 = lVar29;
          }
          fVar37 = g_02394254;
          if (lVar21 != 0) {
            iVar19 = iVar19 + 1;
            fVar37 = *(float *)(lVar21 + 0x20);
          }
          sVar25 = (size_t)plVar26;
          *(float *)(lVar18 + lVar17 * 4) = fVar37;
          lVar17 = lVar17 + 1;
          lVar29 = *arg1;
        } while (lVar17 < *(int *)(lVar29 + 0xc));
      }
      _qsort(FUN_00e8b5c0,4,sVar25,(int *)pfVar27);
      iVar30 = *(int *)(*arg1 + 0xc);
      *local_res20 = *(void*)(lVar18 + (int64_t)(iVar30 / 2) * 4);
      fVar37 = (float)iVar19 / (float)iVar30;
    }
    *param_5 = fVar37;
    FUN_00e83070();
    FUN_00e83070();
    if ((bVar12) && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (puVar16 == (void*)0x0) goto LAB_014a85ba;
  }
  FUN_00d50b20();
LAB_014a85ba:
  if ((bVar10) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar9) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar8) && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar7) && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}

