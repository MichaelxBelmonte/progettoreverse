// Function: FUN_00771850
// Address: 00771850
// Size: 1279 bytes
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


void FUN_00771850(void* param_1)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  void *pvVar7;
  int64_t lVar8;
  uint uVar9;
  int64_t *this_ptr;
  int64_t **pplVar10;
  double dVar11;
  double dVar12;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int local_70;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint64_t local_40;
  uint32_t local_38;
  
  pplVar10 = &local_58;
  FUN_00d3ecf0();
  plVar1 = local_58;
  FUN_000fe4b0();
  if (plVar1 == (int64_t *)0x0) {
LAB_007718a2:
    pplVar10 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_007718a2;
  }
  plVar1 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar10 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
  FUN_013fe9a0();
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  FUN_00757c60();
  plVar4 = local_58;
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != local_98) goto LAB_00771d4e;
  if (this_ptr[0x29] != 0) {
    FUN_00100170();
  }
  FUN_013fb9b0();
  plVar4 = local_58;
  if ((((local_50 == '\0') && (local_58 != (int64_t *)0x0)) && (FUN_00d50b00(), local_50 != '\0'))
     && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_013fe9d0();
  plVar5 = local_58;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00771a2a;
    }
  }
  else {
LAB_00771a2a:
    if ((plVar4 == (int64_t *)0x0) || (plVar5 == (int64_t *)0x0)) {
LAB_00771d33:
      if (plVar5 == (int64_t *)0x0) goto LAB_00771d40;
    }
    else {
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_58 == (int64_t *)0x0) {
        bVar2 = false;
      }
      else {
        dVar11 = (double)FUN_00b7a6e0();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_01264170();
        bVar2 = g_023908d0 < dVar11 - dVar12;
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar2) goto LAB_00771d33;
      (**(code **)(*plVar1 + 1000))();
      (**(code **)(*this_ptr + 0x610))();
      plVar1 = local_58;
      if (local_50 != '\0') {
        if (local_58 != (int64_t *)0x0) goto LAB_00771b7a;
        goto LAB_00771d33;
      }
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_00771b7a:
        local_50 = '\0';
        local_58 = (int64_t *)0x0;
        local_48 = plVar1;
        local_38 = 0;
        local_40 = 0;
        if (0 < *(int *)((int64_t)plVar1 + 0xc)) {
          uVar9 = 0;
          do {
            lVar3 = local_88;
            local_58 = *(int64_t **)(plVar1[2] + (uint64_t)uVar9 * 8);
            FUN_006f4810();
            FUN_002e4d80();
            if (local_80 == '\0') {
              if (local_88 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_80 = '\0';
            }
            if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_88 != 0) {
              local_80 = '\0';
              local_88 = 0;
              local_70 = -1;
              while( true ) {
                lVar8 = (int64_t)local_70;
                local_70 = local_70 + 1;
                if (*(int *)(lVar3 + 0xc) <= local_70) break;
                local_88 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + 8 + lVar8 * 8);
                FUN_01bca0a0();
              }
              FUN_00713b30();
              FUN_00d50b20();
            }
            uVar9 = uVar9 + 1;
            local_40 = CONCAT44(local_40._4_4_,uVar9);
          } while ((int)uVar9 < *(int *)((int64_t)plVar1 + 0xc));
        }
        FUN_000e3600();
        FUN_00d50b20();
        goto LAB_00771d33;
      }
    }
    FUN_00d50b20();
  }
LAB_00771d40:
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_00771d4e:
  FUN_00d50b20();
  return;
}

