// Function: FUN_0142ed20
// Address: 0142ed20
// Size: 1270 bytes
// Class: MUSpectrumShaper
// String references:
//   "Slave of %@"
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


void FUN_0142ed20(void* param_1)

{
  int64_t lVar1;
  void*puVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  uint *puVar6;
  int64_t *arg1;
  void*this_ptr;
  void*puVar7;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  void*local_60;
  uint local_58 [2];
  int64_t local_50;
  char local_48;
  char local_40;
  undefined7 uStack_3f;
  char local_38;
  
  if (*(int *)(arg1[0x1f] + 0xc) != 0) {
    FUN_00d23340();
    puVar6 = (uint *)&local_40;
    if ((char)local_58[0] != '\0') {
      puVar6 = local_58;
    }
    local_40 = (char)local_58[0];
    *(void*)puVar6 = 0;
    if (((char)local_58[0] != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 == '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b00();
    }
    FUN_00d23740();
    *this_ptr = local_60;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  lVar1 = arg1[0x1d];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123f310();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  if ((char)local_58[0] == '\0') {
    if (local_60 != (void*)0x0) {
      FUN_00d50b00();
      if (((char)local_58[0] != '\0') && (local_60 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_58[0] = local_58[0] & 0xffffff00;
  }
  if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar7 = local_60;
  if ((local_60 != (void*)0x0) && (iVar4 = FUN_00d8c7a0(), iVar4 != 0)) goto LAB_0142f16b;
  lVar1 = arg1[0x1d];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123f310();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012eb770();
  if (((char)local_58[0] != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_60 == (void*)0x0) goto LAB_0142f16b;
  lVar1 = arg1[0x1d];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123f310();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012eb770();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  local_58[0] = 1;
  local_48 = 0;
  if (local_90 != 0) {
    FUN_00d50b00();
  }
  local_50 = local_90;
  local_48 = '\x01';
  FUN_00d8cb40();
  puVar2 = (void*)CONCAT71(uStack_3f,local_40);
  if (local_60 == puVar2) {
LAB_0142f0ec:
    if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    puVar7 = puVar2;
    if (local_38 == '\0') {
      if (puVar2 != (void*)0x0) {
        FUN_00d50b00();
      }
      if (local_60 != (void*)0x0) {
        FUN_00d50b20();
      }
      goto LAB_0142f0ec;
    }
    if (local_60 != (void*)0x0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
  }
  local_60 = &g_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_0142f16b:
  (**(code **)(*arg1 + 0x5d0))();
  if (local_60 == (void*)0x0) {
    cVar3 = '\0';
  }
  else {
    (**(code **)(*arg1 + 0x5d0))();
    cVar3 = (**(code **)(*(int64_t *)CONCAT71(uStack_3f,local_40) + 0x420))();
    if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
      FUN_00d50b20();
    }
  }
  if (((char)local_58[0] != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_01430160();
  }
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

