// Function: FUN_00082580
// Address: 00082580
// Size: 647 bytes
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


void FUN_00082580(void)

{
  code *pcVar1;
  int iVar2;
  void*puVar3;
  void*this_ptr;
  
  FUN_00d4ff40();
  *this_ptr = &g_025d6680;
  this_ptr[7] = 0;
  if (1 < g_02802630) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    FUN_00d22760();
    this_ptr[7] = puVar3;
  }
  iVar2 = g_02802630;
  this_ptr[8] = 0;
  *(void*)(this_ptr + 9) = 0;
  this_ptr[10] = 0;
  if (1 < iVar2) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    this_ptr[10] = puVar3;
    iVar2 = g_02802630;
  }
  *(void*)((int64_t)this_ptr + 100) = 0;
  *(void*)((int64_t)this_ptr + 0x6c) = 0;
  this_ptr[0xb] = 0;
  this_ptr[0xc] = 0;
  this_ptr[0xf] = 0;
  this_ptr[0x10] = 0;
  *(void*)(this_ptr + 0x11) = 0;
  *(void*)((int64_t)this_ptr + 0x8c) = 0;
  *(void*)((int64_t)this_ptr + 0x94) = 0;
  *(void*)((int64_t)this_ptr + 0x9c) = 0;
  this_ptr[0x14] = 0;
  this_ptr[0x15] = 0;
  if (iVar2 < 2) {
    this_ptr[0x16] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[0x15] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x16] = 0;
    if (1 < iVar2) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x16] = puVar3;
      iVar2 = g_02802630;
    }
  }
  this_ptr[0x19] = 0;
  this_ptr[0x1a] = 0;
  this_ptr[0x17] = 0;
  this_ptr[0x18] = 0;
  if (iVar2 < 2) {
    this_ptr[0x1b] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[0x1a] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x1b] = 0;
    if (1 < iVar2) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x1b] = puVar3;
    }
  }
  this_ptr[0x1c] = 0;
  *(void*)(this_ptr + 0x1d) = 0;
  this_ptr[0x1e] = 0;
  *(void*)(this_ptr + 0x1f) = 0;
  this_ptr[0x20] = 0;
  *(void*)(this_ptr + 0x21) = 0;
  this_ptr[0x29] = 0;
  this_ptr[0x22] = 0;
  this_ptr[0x23] = 0;
  this_ptr[0x24] = 0;
  this_ptr[0x25] = 0;
  this_ptr[0x26] = 0;
  this_ptr[0x27] = 0;
  *(void*)(this_ptr + 0x28) = 0;
  return;
}

