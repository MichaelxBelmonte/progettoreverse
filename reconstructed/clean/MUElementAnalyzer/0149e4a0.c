// Function: FUN_0149e4a0
// Address: 0149e4a0
// Size: 1499 bytes
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


void FUN_0149e4a0(uint param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void*puVar9;
  uint64_t uVar10;
  uint in_EDX;
  uint uVar11;
  int64_t *arg1;
  uint64_t uVar12;
  uint64_t in_R8;
  int64_t lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint32_t uVar17;
  uint32_t in_XMM5_Da;
  uint32_t unaff_XMM6_Da;
  char local_res10;
  int64_t local_40;
  int64_t local_38;
  
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_02572358;
  (*g_02572370)();
  fVar14 = (float)_logf(param_2 / g_0240e330);
  fVar15 = (float)_logf(param_3 / g_0240e330);
  fVar16 = (float)_logf(param_4 / g_0240e330);
  if ((int)in_EDX < 1) {
    bVar5 = false;
    local_40 = 0;
  }
  else {
    fVar14 = fVar14 * g_0240e334 * g_023941f0 + g_0239011c;
    iVar6 = (int)(fVar15 * g_0240e334 * g_023941f0 + g_0239011c);
    iVar7 = (int)(fVar16 * g_0240e334 * g_023941f0 + g_0239011c);
    uVar10 = 0;
    local_40 = 0;
    bVar5 = false;
    local_38 = 0;
    bVar4 = false;
    do {
      lVar13 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar10 * 8);
      if (local_40 == lVar13) {
        if ((!bVar5) && (local_40 != 0)) {
          bVar5 = true;
          FUN_00d50b00();
        }
LAB_0149e6a0:
        uVar1 = *(uint *)(local_40 + 0xc);
      }
      else {
        if (lVar13 != 0) {
          FUN_00d50b00();
        }
        if ((bVar5) && (local_40 != 0)) {
          FUN_00d50b20();
          bVar5 = true;
          local_40 = lVar13;
          goto LAB_0149e6a0;
        }
        bVar5 = true;
        uVar1 = *(uint *)(lVar13 + 0xc);
        local_40 = lVar13;
      }
      if (uVar1 != 0) {
        uVar11 = param_1;
        if ((int)uVar1 < (int)param_1) {
          uVar11 = uVar1;
        }
        if (0 < (int)uVar11) {
          uVar12 = 0;
          do {
            iVar2 = *(int *)(*(int64_t *)(*(int64_t *)(local_40 + 0x10) + uVar12 * 8) + 0x10);
            if ((iVar7 < iVar2) && (iVar2 < iVar6)) goto LAB_0149ea00;
            uVar12 = uVar12 + 1;
          } while (uVar11 != uVar12);
        }
        if ((int)param_1 < (int)uVar1) {
          FUN_00d216c0();
          if ((int)uVar11 < *(int *)(local_40 + 0xc)) {
            lVar13 = (int64_t)(int)uVar11;
            do {
              lVar3 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + lVar13 * 8);
              if (local_38 == lVar3) {
                if ((!bVar4) && (local_38 != 0)) {
                  bVar4 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar3 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar4) && (local_38 != 0)) {
                  FUN_00d50b20();
                  bVar4 = true;
                  local_38 = lVar3;
                }
                else {
                  bVar4 = true;
                  local_38 = lVar3;
                }
              }
              if ((iVar7 < *(int *)(local_38 + 0x10)) && (*(int *)(local_38 + 0x10) < iVar6)) {
                FUN_00d21140();
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < *(int *)(local_40 + 0xc));
          }
          if (*(int *)((int64_t)puVar9 + 0xc) != 0) {
            fVar15 = (float)FUN_014b32a0(unaff_XMM6_Da,in_R8,in_XMM5_Da,g_02390124);
            if (0 < *(int *)((int64_t)puVar9 + 0xc)) {
              lVar13 = 0;
              do {
                lVar3 = *(int64_t *)(puVar9[2] + lVar13 * 8);
                if (local_38 == lVar3) {
                  if ((!bVar4) && (local_38 != 0)) {
                    bVar4 = true;
                    FUN_00d50b00();
                  }
                }
                else {
                  if (lVar3 != 0) {
                    FUN_00d50b00();
                  }
                  if ((bVar4) && (local_38 != 0)) {
                    FUN_00d50b20();
                    bVar4 = true;
                    local_38 = lVar3;
                  }
                  else {
                    bVar4 = true;
                    local_38 = lVar3;
                  }
                }
                iVar8 = *(int *)(local_38 + 0x10) - (int)fVar14;
                iVar2 = -iVar8;
                if (0 < iVar8) {
                  iVar2 = iVar8;
                }
                fVar15 = (float)iVar2 * g_0240e338 + g_02390124;
                fVar16 = 0.0;
                if (0.0 <= fVar15) {
                  fVar16 = fVar15;
                }
                *(float *)(local_38 + 0x18) = fVar16 * *(float *)(local_38 + 0x18);
                lVar13 = lVar13 + 1;
              } while (lVar13 < *(int *)((int64_t)puVar9 + 0xc));
            }
            uVar17 = FUN_00d242c0(fVar15,0);
            lVar13 = *(int64_t *)puVar9[2];
            if (lVar13 != 0) {
              uVar17 = FUN_00d50b00();
            }
            FUN_00d23370(uVar17,param_1 - 1);
            if (lVar13 != 0) {
              FUN_00d50b20();
            }
          }
        }
      }
LAB_0149ea00:
      while (iVar2 = *(int *)(local_40 + 0xc), (int)param_1 < iVar2) {
        FUN_00d23740();
      }
      if (local_res10 != '\0') {
        while ((iVar2 != 0 &&
               ((iVar2 = *(int *)(**(int64_t **)(local_40 + 0x10) + 0x10), iVar2 <= iVar7 ||
                (iVar6 <= iVar2))))) {
          FUN_00d23620();
          iVar2 = *(int *)(local_40 + 0xc);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != in_EDX);
    if ((bVar4) && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (puVar9 == (void*)0x0) goto LAB_0149eaa2;
  }
  FUN_00d50b20();
LAB_0149eaa2:
  if ((bVar5) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}

