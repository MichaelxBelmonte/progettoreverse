// Function: FUN_0146aec0
// Address: 0146aec0
// Size: 4141 bytes
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


void FUN_0146aec0(int64_t *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  void* pVar8;
  bool bVar9;
  int64_t *plVar10;
  int64_t this_ptr;
  double dVar11;
  double dVar12;
  uint64_t uVar13;
  double dVar14;
  int64_t local_a0;
  char local_98;
  int64_t *local_70;
  char local_68;
  int64_t *local_58;
  int64_t *local_50;
  int64_t local_48;
  char local_40;
  
  plVar10 = *(int64_t **)(this_ptr + 0x60);
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    plVar10 = *(int64_t **)(this_ptr + 0x60);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  dVar11 = (double)(**(code **)(*plVar10 + 0x370))();
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar12 = (double)FUN_01369cc0();
  if (dVar12 < 0.0) {
    return;
  }
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01328c30();
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_00352bd0();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if (local_70 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00352bd0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0134b3e0();
  if (local_70 == (int64_t *)0x0) {
    cVar3 = '\0';
  }
  else {
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134b3e0();
    if (local_98 == '\0') {
      if (local_a0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_98 = '\0';
    }
    cVar3 = FUN_00d23d70();
    if (local_a0 != 0) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134b3e0();
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_00d23f50();
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0134b560();
  if (local_70 == (int64_t *)0x0) {
    cVar3 = '\0';
  }
  else {
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134b560();
    if (local_98 == '\0') {
      if (local_a0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_98 = '\0';
    }
    cVar3 = FUN_00d23d70();
    if (local_a0 != 0) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134b560();
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_00d23f50();
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0134b4a0();
  if (local_70 == (int64_t *)0x0) {
    cVar3 = '\0';
  }
  else {
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134b4a0();
    if (local_98 == '\0') {
      if (local_a0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_98 = '\0';
    }
    cVar3 = FUN_00d23d70();
    if (local_a0 != 0) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134b4a0();
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_00d23f50();
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar13 = FUN_013293b0();
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_00d214d0(uVar13,*(void*)(local_48 + 0xc));
  if (local_70 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)(local_48 + 0xc) < 1) {
    local_58 = (int64_t *)0x0;
    bVar2 = false;
    local_50 = (int64_t *)0x0;
    bVar9 = false;
  }
  else {
    lVar5 = 0;
    local_58 = (int64_t *)0x0;
    bVar2 = false;
    local_50 = (int64_t *)0x0;
    bVar9 = false;
    do {
      plVar10 = *(int64_t **)(*(int64_t *)(local_48 + 0x10) + lVar5 * 8);
      if (local_58 == plVar10) {
        if ((!bVar2) && (local_58 != (int64_t *)0x0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar10 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
          bVar2 = true;
          local_58 = plVar10;
        }
        else {
          bVar2 = true;
          local_58 = plVar10;
        }
      }
      pvVar4 = _pthread_getspecific((void*)param_1);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        param_1 = local_58;
      }
      FUN_014d1d00();
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific((void*)param_1);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        param_1 = local_70;
      }
      FUN_013dfdd0();
      if (local_70 != (int64_t *)0x0) {
        pvVar4 = _pthread_getspecific((void*)param_1);
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          param_1 = local_70;
        }
        FUN_013e5500();
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        pvVar4 = _pthread_getspecific((void*)param_1);
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          param_1 = local_70;
        }
        dVar14 = (double)FUN_014bacf0();
        pvVar4 = _pthread_getspecific((void*)param_1);
        plVar10 = local_58;
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          param_1 = local_58;
          plVar10 = (int64_t *)local_58[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        pVar8 = (void*)param_1;
        lVar6 = (**(code **)(*plVar10 + 0x380))();
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc340();
        if (local_70 == local_50) {
          if ((!bVar9) && (local_70 != (int64_t *)0x0)) {
            bVar9 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar9) && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
            local_50 = local_70;
            bVar9 = true;
          }
          else {
            local_50 = local_70;
            bVar9 = true;
          }
        }
        if (local_50 == (int64_t *)0x0) {
          pvVar4 = _pthread_getspecific(pVar8);
          if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            pVar8 = (void*)local_58;
          }
          FUN_014d44f0();
          if (local_70 == (int64_t *)0x0) {
            local_50 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            bVar9 = true;
            local_50 = local_70;
          }
          if (local_50 != (int64_t *)0x0) goto LAB_0146bb97;
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          param_1 = (int64_t *)0x0;
          FUN_014e7f40(0,1,1);
          bVar1 = true;
          local_50 = (int64_t *)0x0;
        }
        else {
LAB_0146bb97:
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          param_1 = (int64_t *)((int64_t)&MACH_HEADER.magic + 1);
          FUN_014e36c0(1,(int64_t)((dVar14 - dVar12) * dVar11) - lVar6);
          bVar1 = false;
        }
        pvVar4 = _pthread_getspecific((void*)param_1);
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          param_1 = local_70;
        }
        FUN_013dfef0();
        pvVar4 = _pthread_getspecific((void*)param_1);
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          param_1 = local_70;
        }
        FUN_013e0cc0();
        if (!bVar1) {
          pvVar4 = _pthread_getspecific((void*)param_1);
          if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            param_1 = local_50;
          }
          FUN_014d1d00();
          if (local_70 != (int64_t *)0x0) {
            pvVar4 = _pthread_getspecific((void*)param_1);
            if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              param_1 = local_50;
            }
            FUN_014d1d00();
            pvVar4 = _pthread_getspecific((void*)param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfef0();
            pvVar4 = _pthread_getspecific((void*)param_1);
            if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              param_1 = local_50;
            }
            FUN_014d1d00();
            pvVar4 = _pthread_getspecific((void*)param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e0cc0();
          }
        }
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(local_48 + 0xc));
    if (local_48 == 0) goto LAB_0146bf08;
  }
  FUN_00d50b20();
LAB_0146bf08:
  FUN_00d50b20();
  if ((bVar9) && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

