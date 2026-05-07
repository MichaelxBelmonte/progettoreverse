// Function: FUN_014aa770
// Address: 014aa770
// Size: 2019 bytes
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


void FUN_014aa770(uint64_t param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int64_t lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int64_t *in_RDX;
  int iVar13;
  int64_t *arg1;
  uint32_t in_R8D;
  int64_t lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  int64_t local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  char local_d0;
  uint64_t local_c8;
  int64_t local_78;
  int64_t local_60;
  int64_t local_58;
  int64_t local_50;
  int64_t local_48;
  
  local_c8 = param_1;
  FUN_014b3460(in_R8D);
  fVar15 = (float)_logf(param_2 / g_0240e330);
  fVar16 = (float)_logf(param_3 / g_0240e330);
  fVar17 = (float)_logf(param_4 / g_0240e330);
  lVar14 = *arg1;
  if (0 < *(int *)(lVar14 + 0xc)) {
    iVar9 = (int)(fVar15 * g_0240e334 * g_023941f0 + g_0239011c);
    iVar10 = (int)(fVar16 * g_0240e334 * g_023941f0 + g_0239011c);
    iVar11 = (int)(fVar17 * g_0240e334 * g_023941f0 + g_0239011c);
    iVar13 = 0;
    local_78 = 0;
    bVar3 = false;
    local_48 = 0;
    bVar4 = false;
    local_60 = 0;
    bVar7 = false;
    local_50 = 0;
    bVar5 = false;
    local_58 = 0;
    bVar6 = false;
    do {
      lVar14 = *(int64_t *)(*(int64_t *)(lVar14 + 0x10) + (int64_t)iVar13 * 8);
      if (local_78 == lVar14) {
        if ((!bVar3) && (local_78 != 0)) {
          bVar3 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar14 != 0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (local_78 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
          local_78 = lVar14;
        }
        else {
          bVar3 = true;
          local_78 = lVar14;
        }
      }
      local_f8 = *in_RDX;
      local_f0 = 0;
      local_e8 = local_78;
      local_e0 = 0;
      FUN_014b3ce0(local_c8,&local_f8,&local_e8,0);
      lVar14 = local_d8;
      if (local_d8 == local_48) {
        if ((!bVar4) && (local_d8 != 0)) {
          lVar14 = local_48;
          if (local_d0 == '\0') {
            FUN_00d50b00();
          }
joined_r0x014aaa8b:
          bVar4 = true;
          local_48 = lVar14;
          goto joined_r0x014aaa8b;
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
          goto joined_r0x014aaa8b;
        }
joined_r0x014aac3c:
        if (local_48 != 0) goto LAB_014aab1d;
LAB_014aac6a:
        FUN_00d23620();
        iVar13 = iVar13 + -1;
      }
      else {
        if (local_d0 == '\0') {
          if (local_d8 != 0) {
            FUN_00d50b00();
          }
          if (!bVar4) goto joined_r0x014aaa8b;
          if (local_48 == 0) goto LAB_014aaad0;
          FUN_00d50b20();
          bVar4 = true;
          local_48 = lVar14;
        }
        else {
          if ((!bVar4) || (local_48 == 0)) {
LAB_014aaad0:
            bVar4 = true;
            local_48 = lVar14;
            goto joined_r0x014aac3c;
          }
          FUN_00d50b20();
          bVar4 = true;
          local_48 = lVar14;
        }
joined_r0x014aaa8b:
        if (local_48 == 0) goto LAB_014aac6a;
LAB_014aab1d:
        dVar18 = *(double *)(local_78 + 0x18) - *(double *)(local_78 + 0x10);
        iVar1 = *(int *)(local_48 + 0x10);
        iVar12 = iVar9 - iVar1;
        if (iVar11 <= iVar1) {
          iVar12 = 0;
        }
        if (iVar10 < iVar1) {
          iVar12 = iVar1 - iVar9;
        }
        if (0 < iVar12) {
          if (dVar18 < g_02390108) goto LAB_014aac6a;
          if (g_0241f368 <=
              ((float)iVar12 / g_0240e350) * g_02391090 + *(float *)(local_48 + 0x1c))
          goto LAB_014aa923;
          lVar14 = *(int64_t *)
                    (*(int64_t *)(*in_RDX + 0x10) + (int64_t)*(int *)(local_48 + 0xc) * 8);
          if (local_58 == lVar14) {
            if ((!bVar5) && (local_58 != 0)) {
              FUN_00d50b00();
              lVar14 = local_58;
              goto LAB_014aacb8;
            }
            if (local_50 != 0) goto LAB_014aacc3;
LAB_014aaee4:
            iVar1 = *(int *)(local_58 + 0xc);
          }
          else {
            if (lVar14 != 0) {
              FUN_00d50b00();
            }
            if ((bVar5) && (local_58 != 0)) {
              FUN_00d50b20();
            }
LAB_014aacb8:
            bVar5 = true;
            local_58 = lVar14;
            if (local_50 == 0) goto LAB_014aaee4;
LAB_014aacc3:
            if (bVar6) {
              FUN_00d50b20();
              iVar1 = *(int *)(local_58 + 0xc);
            }
            else {
              iVar1 = *(int *)(local_58 + 0xc);
            }
            bVar6 = false;
          }
          if (iVar1 < 1) {
            local_50 = 0;
          }
          else {
            fVar15 = 0.0;
            lVar14 = 0;
            local_50 = 0;
            do {
              lVar8 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + lVar14 * 8);
              if (local_60 == lVar8) {
                if ((!bVar7) && (local_60 != 0)) {
                  bVar7 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar8 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar7) && (local_60 != 0)) {
                  FUN_00d50b20();
                  bVar7 = true;
                  local_60 = lVar8;
                }
                else {
                  bVar7 = true;
                  local_60 = lVar8;
                }
              }
              if (((*(int *)(local_60 + 0x10) < iVar10) && (iVar11 < *(int *)(local_60 + 0x10))) &&
                 (fVar15 < *(float *)(local_60 + 0x1c))) {
                if (local_50 == local_60) {
                  lVar8 = local_50;
                  bVar2 = bVar6;
                  if ((bVar7) && (!bVar6)) {
                    if (local_50 == 0) {
                      bVar2 = false;
                    }
                    else {
                      FUN_00d50b00();
                      bVar2 = true;
                    }
                  }
                }
                else {
                  if (bVar7) {
                    FUN_00d50b00();
                  }
                  lVar8 = local_60;
                  bVar2 = bVar7;
                  if ((bVar6) && (local_50 != 0)) {
                    FUN_00d50b20();
                  }
                }
                fVar15 = *(float *)(local_60 + 0x1c);
                local_50 = lVar8;
                bVar6 = bVar2;
              }
              lVar14 = lVar14 + 1;
            } while (lVar14 < *(int *)(local_58 + 0xc));
            if (local_50 != 0) {
              fVar15 = (float)_exp2f((float)*(int *)(local_50 + 0x10) / g_023941f0);
              *(float *)(local_78 + 0x38) = fVar15 * g_0240e330;
              goto LAB_014aa923;
            }
            local_50 = 0;
          }
          goto LAB_014aac6a;
        }
        if ((dVar18 < g_02390108) &&
           ((*(float *)(local_48 + 0x1c) <= g_0241f368 &&
             g_0241f368 != *(float *)(local_48 + 0x1c) ||
            ((*(int64_t *)(local_48 + 0x30) == 0 && (*(int64_t *)(local_48 + 0x28) == 0))))))
        goto LAB_014aac6a;
      }
LAB_014aa923:
      iVar13 = iVar13 + 1;
      lVar14 = *arg1;
    } while (iVar13 < *(int *)(lVar14 + 0xc));
    if ((bVar5) && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar6) && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar7) && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar3) && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

