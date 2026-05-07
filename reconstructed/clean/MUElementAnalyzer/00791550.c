// Function: FUN_00791550
// Address: 00791550
// Size: 1518 bytes
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


uint64_t FUN_00791550(void* param_1,void*param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t **pplVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint32_t uVar12;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  uint64_t local_58;
  uint32_t local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar12 = FUN_00e33de0();
  local_98 = g_0270b920;
  if (g_0270b920 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_90 = '\x01';
  pplVar9 = &local_70;
  FUN_000175c0(uVar12,&local_98);
  plVar8 = local_70;
  FUN_0006e1c0();
  if (plVar8 == (int64_t *)0x0) {
LAB_007915db:
    pplVar9 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_007915db;
  }
  plVar8 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar9 + 1) = 0;
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x988))();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    plVar8 = local_80;
    if (local_78 == '\0') {
      if (local_80 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_70 = plVar8;
    local_68 = '\0';
    uVar4 = FUN_00d23d70();
    uVar11 = (uint64_t)uVar4;
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_007917d5;
  }
  plVar8 = (int64_t *)*arg1;
  if ((g_026e0c38 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  if (plVar8 == (int64_t *)0x0) {
LAB_007916e8:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_007916e8;
  }
  if (*arg1 == 0) {
    uVar11 = 0;
    goto LAB_007917d5;
  }
  FUN_013fb420();
  plVar8 = local_70;
  if ((((local_68 == '\0') && (local_70 != (int64_t *)0x0)) && (FUN_00d50b00(), local_68 != '\0'))
     && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_88 = plVar8;
  (**(code **)(*(int64_t *)*param_2 + 0x988))();
  plVar1 = local_70;
  if (local_68 == '\0') {
    if (local_70 == (int64_t *)0x0) goto LAB_00791a59;
    FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_00791811:
    local_68 = '\0';
    local_70 = (int64_t *)0x0;
    local_60 = plVar1;
    local_50 = 0;
    local_58 = 0;
    if (0 < *(int *)((int64_t)plVar1 + 0xc)) {
      lVar10 = 0;
      do {
        local_70 = *(int64_t **)(plVar1[2] + lVar10 * 8);
        pvVar6 = _pthread_getspecific((void*)arg1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        iVar5 = *(int *)((int64_t)local_48 + 0xc);
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((iVar5 == 1) && (local_88 != (int64_t *)0x0)) {
          pvVar6 = _pthread_getspecific((void*)arg1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          FUN_00d23310();
          plVar8 = local_48;
          local_38[0] = local_40[0];
          arg1 = (int64_t *)local_38;
          plVar7 = (int64_t *)local_40;
          if (local_40[0] == '\0') {
            plVar7 = arg1;
          }
          *(void*)plVar7 = 0;
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar6 = _pthread_getspecific((void*)arg1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126ef70();
          pvVar6 = _pthread_getspecific((void*)arg1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01320d00();
          plVar2 = local_48;
          plVar7 = local_80;
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          plVar8 = local_88;
          if (plVar7 == plVar2) {
            FUN_000be170();
            uVar11 = CONCAT71((int7)((uint64_t)lVar10 >> 8),1);
            goto LAB_00791a6a;
          }
        }
        lVar10 = lVar10 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)lVar10);
        plVar8 = local_88;
      } while ((int)lVar10 < *(int *)((int64_t)plVar1 + 0xc));
    }
    FUN_000be170();
    uVar11 = 0;
LAB_00791a6a:
    FUN_00d50b20();
  }
  else {
    if (local_70 != (int64_t *)0x0) goto LAB_00791811;
LAB_00791a59:
    uVar11 = 0;
  }
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_007917d5:
  return uVar11 & 0xffffffff;
}

