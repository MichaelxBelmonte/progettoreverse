// Function: FUN_019383e0
// Address: 019383e0
// Size: 2199 bytes
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


void FUN_019383e0(void)

{
  int64_t *plVar1;
  void *pvVar2;
  void* pVar3;
  int64_t lVar4;
  char *pcVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar6;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*this_ptr + 0x978))();
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    (**(code **)(*this_ptr + 0x978))();
    local_e0 = 0;
    local_e8 = this_ptr[0x27];
    if (local_e8 != 0) {
      FUN_00d50b00();
    }
    local_e0 = '\x01';
    (**(code **)(*local_48 + 0x968))();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar6 = FUN_01bfdcc0(g_02390124);
  *(void*)((int64_t)this_ptr + 0x584) = uVar6;
  if ((((this_ptr[0x80] == 0) && (this_ptr[0xaa] != 0)) &&
      (lVar4 = *(int64_t *)(this_ptr[0xaa] + 0x400), lVar4 != 0)) && (lVar4 != 0)) {
    FUN_00d50b00();
    this_ptr[0x80] = lVar4;
  }
  if (((this_ptr[0x81] == 0) && (this_ptr[0xaa] != 0)) &&
     (lVar4 = *(int64_t *)(this_ptr[0xaa] + 0x408), lVar4 != 0)) {
    if (lVar4 != 0) {
      FUN_00d50b00();
      this_ptr[0x81] = lVar4;
    }
    FUN_00d50b00();
    FUN_01a17960();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar1 = (int64_t *)this_ptr[0x27];
  (**(code **)(*(int64_t *)this_ptr[0xaa] + 0x958))();
  (**(code **)(*local_48 + 0x3c8))();
  lVar4 = *plVar1;
  (**(code **)(lVar4 + 0x3d0))();
  pVar3 = (void*)lVar4;
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(&g_000014b0 + *(int64_t *)this_ptr[0xaa]))();
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  (**(code **)(&g_000014a8 + *this_ptr))();
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*arg1 == 0) {
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *(int64_t *)this_ptr[0xaa] + 0x20))();
    if (local_40[0] == '\0') {
      if (local_48 != (int64_t *)0x0) {
        (**(code **)(*local_48 + 0x10))();
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x18))();
    if (local_48 != (int64_t *)0x0) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x18))();
  }
  lVar4 = this_ptr[0xa8];
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(&UNK_000016f8 + *this_ptr))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x5e) = 0;
  (**(code **)(&g_000015b0 + *this_ptr))();
  (**(code **)(*this_ptr + 0x970))();
  FUN_0197be80();
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *this_ptr + 0x20))();
    if (local_40[0] == '\0') {
      if (local_48 != (int64_t *)0x0) {
        (**(code **)(*local_48 + 0x10))();
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    FUN_01a34e60();
    if (local_48 != (int64_t *)0x0) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
    lVar4 = this_ptr[0xa9];
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*local_48 + 0x920))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x7f] == 0) {
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01326de0();
    (**(code **)(&g_000016e0 + *this_ptr))();
  }
  if (this_ptr[0x80] != 0) {
    lVar4 = this_ptr[0x7f];
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    FUN_01e26eb0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  lVar4 = g_026fb998;
  plVar1 = (int64_t *)this_ptr[0x81];
  if (plVar1 != (int64_t *)0x0) {
    if (g_026fb998 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x948))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01e1f270();
  FUN_00d23310();
  pcVar5 = local_38;
  if (local_40[0] != '\0') {
    pcVar5 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar6 = FUN_01e26150();
  local_108 = g_026f6e60;
  if (g_026f6e60 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_100 = '\x01';
  uVar6 = FUN_000175c0(uVar6,&local_108);
  if (local_50 == '\0') {
    if (local_58 != 0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  (**(code **)(*this_ptr + 0xec8))(uVar6,0);
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  local_f0 = '\0';
  local_f8 = 0;
  (**(code **)("/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices" +
              *(int64_t *)this_ptr[0xaa] + 0x18))();
  (**(code **)(&UNK_00001488 + *this_ptr))();
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x79) = *(void*)(this_ptr[0xaa] + 0x3c8);
  (**(code **)(*this_ptr + 0x400))();
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

