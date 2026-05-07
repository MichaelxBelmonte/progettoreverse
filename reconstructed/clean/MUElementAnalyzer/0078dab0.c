// Function: FUN_0078dab0
// Address: 0078dab0
// Size: 1195 bytes
// Class: MUElementAnalyzer
// String references:
//   "GNList"
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


void FUN_0078dab0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Da;
  uint64_t local_80;
  uint8_t local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  cVar3 = FUN_00751ba0();
  if (cVar3 == '\0') {
    return;
  }
  pplVar5 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  if ((g_026e0c38 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar1 == (int64_t *)0x0) {
LAB_0078db19:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0078db19;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
  uVar6 = FUN_00e33de0();
  local_70 = g_027295c0;
  if (g_027295c0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_68 = '\x01';
  pplVar5 = &local_40;
  FUN_000175c0(uVar6,&local_70);
  plVar2 = local_40;
  FUN_00053ac0();
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_0078dbcb;
  }
  pplVar5 = (int64_t **)&g_02802688;
LAB_0078dbcb:
  plVar2 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    cVar3 = FUN_00d45ad0();
    if (cVar3 == '\0') {
      uVar6 = FUN_00e33de0();
      local_60 = g_027295d0;
      if (g_027295d0 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_58 = '\x01';
      FUN_000175c0(uVar6,&local_60);
      plVar2 = local_40;
      if ((g_027048b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_026cd478 = FUN_00d4fe50();
        g_026cd460 = "GNList";
        g_026cd468 = 0x20;
        g_026cd470 = FUN_00018210;
        g_026cd480 = 0;
        ram_00000000026cd488 = 0;
        g_026cd490 = 0;
        g_026cd508 = 0;
        ram_00000000026cd510 = 0;
        g_026cd518 = 0;
        g_026cd51a = 6;
        g_026cd498 = 0;
        ram_00000000026cd4a0 = 0;
        g_026cd4a8 = 0;
        ram_00000000026cd4b0 = 0;
        g_026cd4b8 = 0;
        ram_00000000026cd4c0 = 0;
        g_026cd4c8 = 0;
        ram_00000000026cd4d0 = 0;
        g_026cd4d8 = 0;
        ram_00000000026cd4e0 = 0;
        g_026cd4e8 = 0;
        ram_00000000026cd4f0 = 0;
        g_026cd4f8 = 0;
        ram_00000000026cd500 = 0;
        g_026cd523 = 0;
        g_026cd51b = 0;
        ___cxa_guard_release();
      }
      pplVar5 = (int64_t **)&g_02802688;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 != '\0') {
          FUN_0006e1c0();
          cVar3 = FUN_00e8da30();
          pplVar5 = &local_40;
          if (cVar3 == '\0') {
            pplVar5 = (int64_t **)&g_02802688;
          }
        }
      }
      plVar2 = *pplVar5;
      if (*(char *)(pplVar5 + 1) == '\0') {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar5 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) {
        if (*(int *)((int64_t)plVar2 + 0xc) != 0) {
          local_38 = '\0';
          local_40 = plVar1;
          cVar3 = FUN_00d23d70();
          uVar6 = extraout_XMM0_Da;
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            uVar6 = FUN_00d50b20();
          }
          if (cVar3 == '\0') {
            local_80 = 0;
            local_78 = 0;
            FUN_007649a0(uVar6,&local_80);
          }
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}

