// Function: FUN_014b3460
// Address: 014b3460
// Size: 1727 bytes
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


void FUN_014b3460(uint param_1,uint param_2)

{
  int64_t lVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int64_t *arg1;
  int iVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t lVar16;
  int64_t local_70;
  int64_t local_68;
  int64_t local_50;
  int64_t local_48;
  
  if (0 < (int)param_2) {
    uVar15 = 0;
    local_50 = 0;
    bVar3 = false;
    local_48 = 0;
    bVar4 = false;
    do {
      lVar16 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar15 * 8);
      if (local_50 == lVar16) {
        if ((!bVar3) && (local_50 != 0)) {
          bVar3 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar16 != 0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (local_50 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
          local_50 = lVar16;
        }
        else {
          bVar3 = true;
          local_50 = lVar16;
        }
      }
      uVar9 = *(uint *)(local_50 + 0xc);
      if ((int)param_1 <= (int)*(uint *)(local_50 + 0xc)) {
        uVar9 = param_1;
      }
      if (0 < (int)uVar9) {
        uVar13 = 0;
        do {
          lVar16 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + uVar13 * 8);
          if (local_48 == lVar16) {
            if ((!bVar4) && (local_48 != 0)) {
              bVar4 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar16 != 0) {
              FUN_00d50b00();
            }
            if ((bVar4) && (local_48 != 0)) {
              FUN_00d50b20();
              bVar4 = true;
              local_48 = lVar16;
            }
            else {
              bVar4 = true;
              local_48 = lVar16;
            }
          }
          *(int *)(local_48 + 0x14) = (int)uVar13;
          *(void*)(local_48 + 0x20) = 0;
          uVar13 = uVar13 + 1;
          *(void*)(local_48 + 0x28) = 0;
          *(void*)(local_48 + 0x30) = 0;
        } while (uVar9 != uVar13);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != param_2);
    if ((int)param_2 < 2) {
      bVar5 = false;
      local_70 = 0;
    }
    else {
      uVar15 = 0;
      local_70 = 0;
      bVar5 = false;
      lVar16 = 0;
      bVar6 = false;
      local_68 = 0;
      bVar7 = false;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar15 * 8);
        if (local_50 == lVar1) {
          if ((!bVar3) && (local_50 != 0)) {
            bVar3 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          if ((bVar3) && (local_50 != 0)) {
            FUN_00d50b20();
            bVar3 = true;
            local_50 = lVar1;
          }
          else {
            bVar3 = true;
            local_50 = lVar1;
          }
        }
        lVar1 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + 8 + uVar15 * 8);
        if (local_70 == lVar1) {
          if ((!bVar5) && (local_70 != 0)) {
            bVar5 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          if ((bVar5) && (local_70 != 0)) {
            FUN_00d50b20();
            bVar5 = true;
            local_70 = lVar1;
          }
          else {
            bVar5 = true;
            local_70 = lVar1;
          }
        }
        uVar9 = *(uint *)(local_50 + 0xc);
        if ((int)param_1 <= (int)*(uint *)(local_50 + 0xc)) {
          uVar9 = param_1;
        }
        uVar2 = *(uint *)(local_70 + 0xc);
        if ((int)param_1 <= (int)*(uint *)(local_70 + 0xc)) {
          uVar2 = param_1;
        }
        if (0 < (int)uVar9) {
          if ((int)uVar2 < 1) {
            uVar13 = 0;
            do {
              lVar1 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + uVar13 * 8);
              if (local_48 == lVar1) {
                if ((!bVar4) && (local_48 != 0)) {
                  bVar4 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar1 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar4) && (local_48 != 0)) {
                  FUN_00d50b20();
                  bVar4 = true;
                  local_48 = lVar1;
                }
                else {
                  bVar4 = true;
                  local_48 = lVar1;
                }
              }
              if (local_68 != 0) {
                if (bVar7) {
                  FUN_00d50b20();
                }
                bVar7 = false;
              }
              uVar13 = uVar13 + 1;
              local_68 = 0;
            } while (uVar9 != uVar13);
            local_68 = 0;
          }
          else {
            uVar13 = 0;
            do {
              lVar1 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + uVar13 * 8);
              if (local_48 == lVar1) {
                if ((!bVar4) && (local_48 != 0)) {
                  bVar4 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar1 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar4) && (local_48 != 0)) {
                  FUN_00d50b20();
                  bVar4 = true;
                  local_48 = lVar1;
                }
                else {
                  bVar4 = true;
                  local_48 = lVar1;
                }
              }
              if (local_68 != 0) {
                if (bVar7) {
                  FUN_00d50b20();
                }
                bVar7 = false;
              }
              iVar12 = 0x14;
              uVar14 = 0;
              local_68 = 0;
              bVar8 = bVar7;
              do {
                lVar1 = *(int64_t *)(*(int64_t *)(local_70 + 0x10) + uVar14 * 8);
                if (lVar16 == lVar1) {
                  if ((!bVar6) && (lVar16 != 0)) {
                    bVar6 = true;
                    FUN_00d50b00();
                  }
                }
                else {
                  if (lVar1 != 0) {
                    FUN_00d50b00();
                  }
                  if ((bVar6) && (lVar16 != 0)) {
                    FUN_00d50b20();
                    bVar6 = true;
                    lVar16 = lVar1;
                  }
                  else {
                    bVar6 = true;
                    lVar16 = lVar1;
                  }
                }
                iVar10 = *(int *)(local_48 + 0x10) - *(int *)(lVar16 + 0x10);
                iVar11 = -iVar10;
                if (0 < iVar10) {
                  iVar11 = iVar10;
                }
                lVar1 = local_68;
                bVar7 = bVar8;
                if ((iVar11 < iVar12) && (*(char *)(lVar16 + 0x20) == '\0')) {
                  iVar12 = iVar11;
                  if (local_68 == lVar16) {
                    if (((bVar6) && (!bVar8)) && (local_68 != 0)) {
                      FUN_00d50b00();
                      bVar7 = true;
                    }
                  }
                  else {
                    if (bVar6) {
                      FUN_00d50b00();
                    }
                    lVar1 = lVar16;
                    bVar7 = bVar6;
                    if ((bVar8) && (local_68 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                local_68 = lVar1;
                uVar14 = uVar14 + 1;
                bVar8 = bVar7;
              } while (uVar2 != uVar14);
              if (local_68 != 0) {
                *(int64_t *)(local_48 + 0x28) = local_68;
                *(int64_t *)(local_68 + 0x30) = local_48;
                *(void*)(local_68 + 0x20) = 1;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar9);
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != param_2 - 1);
      if ((bVar7) && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar6) && (lVar16 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((bVar4) && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar5) && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar3) && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

