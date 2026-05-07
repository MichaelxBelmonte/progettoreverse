// Function: FUN_01bd23c0
// Address: 01bd23c0
// Size: 1645 bytes
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


void FUN_01bd23c0(void* param_1)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  if (*(int64_t *)(this_ptr + 0x20) != 0) {
    local_70 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x10) + 0x10))();
    FUN_00d50b00();
    local_70 = '\x01';
    local_60 = 0;
    local_68 = *(int64_t *)(this_ptr + 0x20);
    local_78 = (int64_t *)(this_ptr + 0x10);
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    local_d8 = 0;
    local_d0 = '\0';
    plVar1 = &local_d8;
    FUN_00cbadd0(plVar1,&local_68);
    param_1 = (void*)plVar1;
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      (**(code **)(*local_78 + 0x10))();
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0x40);
    local_50 = 0;
    lVar4 = *(int64_t *)(this_ptr + 0x20);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    local_58 = lVar4;
    (**(code **)(*plVar1 + 0x3a8))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x40) + 0x468))();
    if (*(int64_t *)(this_ptr + 0x20) != 0) {
      *(void*)(this_ptr + 0x20) = 0;
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x28) != 0) {
      *(void*)(this_ptr + 0x28) = 0;
      FUN_00d50b20();
    }
  }
  local_38 = (int64_t *)*arg1;
  local_30 = '\0';
  FUN_00d243f0();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d51d20();
  plVar1 = local_98;
  if (local_90 == '\0') {
    if (local_98 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  local_38 = plVar1;
  local_30 = '\0';
  FUN_00d243f0();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_c8 = *arg1;
  if (local_c8 == 0) {
    return;
  }
  if (*(int *)(local_c8 + 0xc) == 0) {
    return;
  }
  local_c0 = '\0';
  FUN_017fa230();
  plVar1 = *(int64_t **)(this_ptr + 0x20);
  plVar3 = plVar1;
  if (plVar1 == local_38) goto LAB_01bd265a;
  if (local_30 == '\0') {
    if (local_38 == (int64_t *)0x0) {
      plVar3 = (int64_t *)0x0;
      goto LAB_01bd2618;
    }
    FUN_00d50b00();
    plVar1 = *(int64_t **)(this_ptr + 0x20);
    *(int64_t **)(this_ptr + 0x20) = local_38;
    plVar3 = local_38;
  }
  else {
    local_30 = '\0';
    plVar3 = local_38;
LAB_01bd2618:
    *(int64_t **)(this_ptr + 0x20) = plVar3;
  }
  param_1 = (void*)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar3 = local_38;
  }
LAB_01bd265a:
  if ((local_30 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x40) == 0) {
    plVar1 = (int64_t *)FUN_00e8fc40();
    FUN_00039550();
    (**(code **)(*plVar1 + 0x18))();
    lVar4 = *(int64_t *)(this_ptr + 0x40);
    *(int64_t **)(this_ptr + 0x40) = plVar1;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  plVar1 = *(int64_t **)(this_ptr + 0x28);
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        *(void*)(this_ptr + 0x28) = 0;
      }
      else {
        FUN_00d50b00();
        plVar1 = *(int64_t **)(this_ptr + 0x28);
        *(int64_t **)(this_ptr + 0x28) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(int64_t **)(this_ptr + 0x28) = local_38;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c6cb0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017ebb00();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c6cb0();
  plVar1 = local_38;
  pvVar2 = _pthread_getspecific(param_1);
  plVar3 = local_38;
  if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar1 = plVar3, lVar4 != 0)) {
    plVar1 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar1 + 0x1a0))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c6cb0();
  plVar1 = local_38;
  pvVar2 = _pthread_getspecific(param_1);
  plVar3 = local_38;
  if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar1 = plVar3, lVar4 != 0)) {
    plVar1 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar1 + 0x1a0))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x40);
  local_40 = 0;
  lVar4 = *(int64_t *)(this_ptr + 0x20);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\x01';
  local_48 = lVar4;
  (**(code **)(*plVar1 + 0x3a0))();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)(this_ptr + 0x10) + 0x10))();
  FUN_00d50b00();
  local_b0 = '\x01';
  local_80 = 0;
  local_88 = *(int64_t *)(this_ptr + 0x20);
  local_b8 = (int64_t *)(this_ptr + 0x10);
  if (local_88 != 0) {
    FUN_00d50b00();
  }
  local_80 = '\x01';
  local_a8 = 0;
  local_a0 = '\0';
  FUN_00cbad80(&local_a8,&local_88,0x20);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    (**(code **)(*local_b8 + 0x10))();
    FUN_00d50b20();
  }
  return;
}

