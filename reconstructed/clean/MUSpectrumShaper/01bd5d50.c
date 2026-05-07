// Function: FUN_01bd5d50
// Address: 01bd5d50
// Size: 2213 bytes
// Class: MUSpectrumShaper
// String references:
//   "GNModuleView"
//   "MUSpectrumShaperSlider"
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


void FUN_01bd5d50(uint32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t **pplVar6;
  int64_t this_ptr;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  int64_t lVar8;
  uint8_t uVar9;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  lVar2 = g_027e5bc8;
  if (g_027e5bc8 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_88 = lVar2;
  local_80 = '\x01';
  pplVar6 = &local_38;
  uVar7 = FUN_01e57490(param_1,&local_88);
  plVar1 = local_38;
  // [STATIC_INIT: property registration]
  if (plVar1 == (int64_t *)0x0) {
LAB_01bd5dca:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar7 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_01bd5dca;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  lVar2 = g_027e5bd0;
  if (plVar1 != (int64_t *)0x0) {
    if (g_027e5bd0 != 0) {
      FUN_00d50b00();
    }
    FUN_01bd1950(0);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = g_027e5bd8;
    if (g_027e5bd8 != 0) {
      FUN_00d50b00();
    }
    FUN_01bd1950(g_02390124);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = g_027e5be0;
    if (g_027e5be0 != 0) {
      FUN_00d50b00();
    }
    uVar9 = 1;
    lVar8 = lVar2;
    uVar7 = FUN_01bd1950(g_02390d34);
    if (lVar2 != 0) {
      uVar7 = FUN_00d50b20();
    }
    lVar2 = plVar1[0x3d];
    iVar4 = *(int *)(lVar2 + 0x18);
    FUN_00c8e340(uVar7,1,param_3,param_4,lVar8,uVar9);
    *(void*)(*(int64_t *)(lVar2 + 0x10) + (int64_t)iVar4) = 0x3f800000;
    uVar7 = FUN_00d50b20();
  }
  lVar2 = g_027e5be8;
  if (g_027e5be8 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  pplVar6 = &local_38;
  uVar7 = FUN_01e57490(uVar7,&local_78);
  plVar1 = local_38;
  // [STATIC_INIT: property registration]
  if (plVar1 == (int64_t *)0x0) {
LAB_01bd5f81:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar7 = extraout_XMM0_Da_00;
    if (cVar3 == '\0') goto LAB_01bd5f81;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  lVar2 = g_027e5bf0;
  if (plVar1 != (int64_t *)0x0) {
    if (g_027e5bf0 != 0) {
      FUN_00d50b00();
    }
    FUN_01bd1950(g_02390124);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = g_027e5bf8;
    if (g_027e5bf8 != 0) {
      FUN_00d50b00();
    }
    FUN_01bd1950(g_0241df14);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = g_027e5c00;
    if (g_027e5c00 != 0) {
      FUN_00d50b00();
    }
    FUN_01bd1950(0);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = g_027e5c08;
    if (g_027e5c08 != 0) {
      FUN_00d50b00();
    }
    FUN_01bd1950(g_0241df10);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = g_027e5c10;
    if (g_027e5c10 != 0) {
      FUN_00d50b00();
    }
    uVar7 = FUN_01bd1950(g_02390d00);
    if (lVar2 != 0) {
      uVar7 = FUN_00d50b20();
    }
    lVar2 = plVar1[0x3d];
    iVar4 = *(int *)(lVar2 + 0x18);
    uVar7 = FUN_00c8e340(uVar7,1);
    *(void*)(*(int64_t *)(lVar2 + 0x10) + (int64_t)iVar4) = 0xbf34fdf4;
    lVar2 = plVar1[0x3d];
    iVar4 = *(int *)(lVar2 + 0x18);
    uVar7 = FUN_00c8e340(uVar7,1);
    *(void*)(*(int64_t *)(lVar2 + 0x10) + (int64_t)iVar4) = 0;
    lVar2 = plVar1[0x3d];
    iVar4 = *(int *)(lVar2 + 0x18);
    FUN_00c8e340(uVar7,1);
    *(void*)(*(int64_t *)(lVar2 + 0x10) + (int64_t)iVar4) = 0x3f34fdf4;
    uVar7 = FUN_00d50b20();
  }
  lVar2 = g_027e5c18;
  if (g_027e5c18 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_68 = lVar2;
  local_60 = '\x01';
  pplVar6 = &local_38;
  FUN_01e57490(uVar7,&local_68);
  plVar1 = local_38;
  // [STATIC_INIT: property registration]
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01bd621d;
  }
  pplVar6 = (int64_t **)&g_02802688;
LAB_01bd621d:
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    *plVar5 = (int64_t)&g_0265c788;
    plVar5[2] = (int64_t)&g_0265d0b0;
    FUN_00d500e0();
    lVar2 = *(int64_t *)(this_ptr + 0x88);
    *(int64_t **)(this_ptr + 0x88) = plVar5;
    if (lVar2 != 0) {
      FUN_00d50b20();
      plVar5 = *(int64_t **)(this_ptr + 0x88);
    }
    (**(code **)(*plVar1 + 0x4d8))();
    (**(code **)(*plVar5 + 0x4d0))();
    plVar5 = *(int64_t **)(this_ptr + 0x88);
    (**(code **)(*plVar1 + 0x560))();
    (**(code **)(*plVar5 + 0x558))();
    (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x570))();
    FUN_01e40eb0();
    plVar5 = local_38;
    local_40 = 0;
    local_48 = *(int64_t *)(this_ptr + 0x88);
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    (**(code **)(*plVar5 + 0x450))();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x478))();
    FUN_01e3f820();
    (**(code **)(*plVar1 + 0x4d0))();
    local_50 = '\0';
    local_58 = plVar1;
    (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x450))();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x558))();
    FUN_00d50b20();
  }
  FUN_01e534b0();
  return;
}

