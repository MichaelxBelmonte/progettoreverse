// Function: FUN_01ab4480
// Address: 01ab4480
// Size: 904 bytes
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


void FUN_01ab4480(void)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  int64_t this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_30;
  char local_28;
  
  FUN_01e3b710();
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar1 = *(int64_t *)(this_ptr + 0x178);
  if (lVar1 == local_30) {
    FUN_00d50b20();
  }
  else {
    *(int64_t *)(this_ptr + 0x178) = local_30;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar1 = *(int64_t *)(this_ptr + 0x180);
  if (lVar1 == local_30) {
    FUN_00d50b20();
  }
  else {
    *(int64_t *)(this_ptr + 0x180) = local_30;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar1 = *(int64_t *)(this_ptr + 0x188);
  if (lVar1 == local_30) {
    FUN_00d50b20();
  }
  else {
    *(int64_t *)(this_ptr + 0x188) = local_30;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar1 = *(int64_t *)(this_ptr + 400);
  if (lVar1 == local_30) {
    FUN_00d50b20();
  }
  else {
    *(int64_t *)(this_ptr + 400) = local_30;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  ___bzero();
  lVar1 = *(int64_t *)(this_ptr + 0x170);
  if (lVar1 == local_30) {
    FUN_00d50b20();
  }
  else {
    *(int64_t *)(this_ptr + 0x170) = local_30;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  uVar4 = g_023dccf4._4_4_;
  uVar3 = (uint32_t)g_023dccf4;
  uVar2 = g_023dccec._4_4_;
  *(void*)(this_ptr + 0x1a4) = (uint32_t)g_023dccec;
  *(void*)(this_ptr + 0x1a8) = uVar2;
  *(void*)(this_ptr + 0x1ac) = uVar3;
  *(void*)(this_ptr + 0x1b0) = uVar4;
  *(void*)(this_ptr + 0x1a0) = 0;
  *(void*)(this_ptr + 0x1bc) = 0xffffffff;
  FUN_00d403d0();
  FUN_00d50b00();
  local_60 = g_027e3b40;
  if (g_027e3b40 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  FUN_00d41430(&local_50,&local_60);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}

