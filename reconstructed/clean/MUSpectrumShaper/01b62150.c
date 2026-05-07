// Function: FUN_01b62150
// Address: 01b62150
// Size: 1309 bytes
// Class: MUSpectrumShaper
// === MUSpectrumShaper properties ===
//   GNInt           _assembledElementRendererCount
//   MUSpectrumShaperSpectrumType _spectrumType
//   bool            _processSpectrumShaper
//   bool            _canUseSpectrumShaper
//   bool            _processEqualizer
//   bool            _processLowerSpectrum
//   bool            _processUpperSpectrum
//   bool            _isBypassed
//   GNInt           _overallSpectrumFundamentalPitchIndex
//   float           _overallSpectrumFreqPerBin
//   float           _referenceMagnitudeSum
//   float           _maximumMagnitudeSum
//   float           _synthAmps
//   float           _synthPhases
//   float           _emphasizePow
//   float           _allGain
//   float           _ampDifferencePow
//   float           _clipLimit
//   bool            _didRequestCacheValidation
//   bool            _appliedEqualizerFactorsAreValid
//   bool            _appliedEqualizerFormantFactorsAreValid
//   bool            _processSpectrumShaperIsValid
//   float           _startValue
//   float           _riseDuration
//   float           _riseEndValue
//   float           _decayStartTime
//   float           _decayEndTime
//   float           _decayFactor
//   float           _endValue
//   bool            _needsProcessEnvelope
//   ... +35 more


uint32_t FUN_01b62150(void* param_1,byte param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  uint32_t uVar5;
  void *pvVar6;
  int64_t **pplVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  bool bVar10;
  int64_t local_b8;
  char local_b0;
  int64_t *local_40;
  char local_38;
  
  FUN_01b5e510();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return 0;
    }
    FUN_00d50b00();
    plVar8 = g_027e4cc8;
  }
  else {
    plVar8 = g_027e4cc8;
    if (local_40 == (int64_t *)0x0) {
      return 0;
    }
  }
  g_027e4cc8 = plVar8;
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar4 = FUN_015b7ba0();
  plVar2 = g_027e4cc0;
  if (iVar4 == 3) {
    if (g_027e4cc0 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    if (plVar8 == plVar2) {
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      bVar10 = plVar8 != (int64_t *)0x0;
      plVar8 = plVar2;
      if (bVar10) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01ca6970();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01ca8220();
  local_38 = '\0';
  local_40 = plVar8;
  uVar5 = FUN_00d23d70();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = g_027e4cc0;
  if (((byte)uVar5 & param_2) == 0) goto LAB_01b62636;
  if (g_027e4cc0 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar8 + 0x50))();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar9 = g_027e4cc8;
  plVar1 = g_027e4cc0;
  if (cVar3 == '\0') {
    if (g_027e4cc8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    pplVar7 = &local_40;
    FUN_01cacbe0();
    plVar1 = local_40;
    FUN_011b2c10();
    if (plVar1 == (int64_t *)0x0) {
LAB_01b6241d:
      pplVar7 = &g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01b6241d;
    }
    plVar1 = *pplVar7;
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar7 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015bea90();
      FUN_00d50b20();
    }
    goto LAB_01b62636;
  }
  if (g_027e4cc0 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  pplVar7 = &local_40;
  FUN_01cacbe0();
  plVar9 = local_40;
  FUN_006ddb00();
  if (plVar9 == (int64_t *)0x0) {
    pplVar7 = &g_02802688;
    plVar9 = g_02802688;
    if (g_02802690 == '\0') goto LAB_01b6245c;
LAB_01b623b4:
    *(void*)(pplVar7 + 1) = 0;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
      pplVar7 = &g_02802688;
    }
    plVar9 = *pplVar7;
    if (*(char *)(pplVar7 + 1) != '\0') goto LAB_01b623b4;
LAB_01b6245c:
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017eca70();
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_015bea90();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_01b62636:
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return uVar5;
}

