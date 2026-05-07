// Function: FUN_01432ed0
// Address: 01432ed0
// Size: 1100 bytes
// Class: MUElementAnalyzer
// String references:
//   "MUElementAnalyzer"
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


void FUN_01432ed0(void)

{
  int64_t *plVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  void *pvVar5;
  void* pVar6;
  int64_t lVar7;
  int64_t **pplVar8;
  int iVar9;
  int64_t *arg1;
  uint32_t uVar10;
  int64_t *local_90;
  uint64_t local_88;
  uint8_t local_80;
  int64_t local_78;
  uint64_t local_70;
  int local_68;
  void*local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  uVar10 = (*g_02572370)();
  if (*arg1 != 0) {
    local_80 = 0;
    local_88 = 0;
    local_70 = 0xffffffff;
    local_68 = 0;
    iVar9 = 0;
    local_78 = *arg1;
    local_60 = puVar3;
    while( true ) {
      if (iVar9 != 0) {
        if (iVar9 < 1) {
          iVar9 = -iVar9;
        }
        else {
          local_70 = CONCAT44(local_70._4_4_,(int)local_70 - iVar9);
          FUN_00d23690(uVar10,iVar9);
          local_68 = local_68 + iVar9;
          iVar9 = 0;
        }
        local_70 = CONCAT44(iVar9,(int)local_70);
      }
      lVar4 = (int64_t)(int)local_70;
      iVar9 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar9);
      if (*(int *)(local_78 + 0xc) <= iVar9) break;
      lVar7 = *(int64_t *)(local_78 + 0x10);
      local_88 = *(void*)(lVar7 + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((void*)lVar7);
      pVar6 = (void*)lVar7;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar10 = FUN_01266fe0();
      plVar1 = local_58;
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_0126ef70();
        plVar1 = local_58;
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_014330a0;
          }
        }
        else if (local_58 != (int64_t *)0x0) {
LAB_014330a0:
          local_50 = '\0';
          local_58 = plVar1;
          cVar2 = FUN_00d24090();
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar2 == '\0') {
            local_50 = '\0';
            local_58 = plVar1;
            FUN_00d21140();
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar5 = _pthread_getspecific(pVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124e0d0();
            plVar1 = local_58;
            if (local_50 == '\0') {
              if (local_58 != (int64_t *)0x0) {
                FUN_00d50b00();
                if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01433172;
              }
            }
            else if (local_58 != (int64_t *)0x0) {
LAB_01433172:
              local_50 = '\0';
              local_58 = (int64_t *)0x0;
              local_48 = plVar1;
              local_40 = 0xffffffff;
              local_38 = 0;
              local_40._4_4_ = 0;
              while( true ) {
                if (local_40._4_4_ != 0) {
                  if (local_40._4_4_ < 1) {
                    iVar9 = -local_40._4_4_;
                  }
                  else {
                    iVar9 = (int)local_40 - local_40._4_4_;
                    local_40 = CONCAT44(local_40._4_4_,iVar9);
                    FUN_00d23690();
                    local_38 = local_38 + local_40._4_4_;
                    iVar9 = 0;
                  }
                  local_40 = CONCAT44(iVar9,(int)local_40);
                }
                lVar4 = (int64_t)(int)local_40;
                iVar9 = (int)local_40 + 1;
                local_40 = CONCAT44(local_40._4_4_,iVar9);
                if (*(int *)((int64_t)local_48 + 0xc) <= iVar9) break;
                plVar1 = *(int64_t **)(local_48[2] + 8 + lVar4 * 8);
                local_58 = plVar1;
                local_90 = plVar1;
                if ((g_026e0c38 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
                  g_026e0b88 = FUN_000fddb0();
                  g_026e0b70 = "MUElementAnalyzer";
                  g_026e0b78 = 0x180;
                  g_026e0b80 = FUN_000fdd80;
                  g_026e0b90 = 0;
                  ram_00000000026e0b98 = 0;
                  g_026e0ba0 = 0;
                  g_026e0c18 = 0;
                  ram_00000000026e0c20 = 0;
                  g_026e0c28 = 0;
                  g_026e0c2a = 1;
                  g_026e0ba8 = 0;
                  ram_00000000026e0bb0 = 0;
                  g_026e0bb8 = 0;
                  ram_00000000026e0bc0 = 0;
                  g_026e0bc8 = 0;
                  ram_00000000026e0bd0 = 0;
                  g_026e0bd8 = 0;
                  ram_00000000026e0be0 = 0;
                  g_026e0be8 = 0;
                  ram_00000000026e0bf0 = 0;
                  g_026e0bf8 = 0;
                  ram_00000000026e0c00 = 0;
                  g_026e0c08 = 0;
                  ram_00000000026e0c10 = 0;
                  g_026e0c33 = 0;
                  g_026e0c2b = 0;
                  ___cxa_guard_release();
                }
                pplVar8 = (int64_t **)&g_02802688;
                if (plVar1 != (int64_t *)0x0) {
                  (**(code **)(*plVar1 + 0x360))();
                  cVar2 = FUN_00e85ea0();
                  pplVar8 = &local_90;
                  if (cVar2 == '\0') {
                    pplVar8 = (int64_t **)&g_02802688;
                  }
                }
                if (*pplVar8 != (int64_t *)0x0) {
                  FUN_00e34b50();
                }
              }
              FUN_00713bd0();
              FUN_00d50b20();
            }
          }
          uVar10 = FUN_00d50b20();
        }
      }
      iVar9 = local_70._4_4_;
    }
    FUN_001159b0();
    if (local_60 == (void*)0x0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
}

