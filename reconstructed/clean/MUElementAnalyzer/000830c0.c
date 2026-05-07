// Function: FUN_000830c0
// Address: 000830c0
// Size: 635 bytes
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


void FUN_000830c0(void)

{
  code *pcVar1;
  int iVar2;
  void*puVar3;
  void*this_ptr;
  
  FUN_00d4ff40();
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  *this_ptr = &g_0267fa98;
  this_ptr[2] = 0;
  if (1 < g_02802630) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    this_ptr[2] = puVar3;
  }
  iVar2 = g_02802630;
  *(void*)(this_ptr + 7) = 0;
  this_ptr[8] = 0;
  this_ptr[3] = 0;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  *this_ptr = &g_0250c388;
  this_ptr[9] = &g_0250c9e8;
  this_ptr[10] = &g_0250ca38;
  this_ptr[0xb] = &g_0250ca68;
  this_ptr[0xc] = 0;
  this_ptr[0xd] = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xf] = 0;
  this_ptr[0x10] = 0;
  this_ptr[0x11] = 0;
  this_ptr[0x12] = 0;
  this_ptr[0x13] = 0;
  this_ptr[0x14] = 0;
  this_ptr[0x15] = 0;
  this_ptr[0x16] = 0;
  this_ptr[0x17] = 0;
  *(void*)((int64_t)this_ptr + 0xb9) = 0;
  *(void*)((int64_t)this_ptr + 0xc1) = 0;
  this_ptr[0x1a] = 0;
  this_ptr[0x1b] = 0;
  *(void*)(this_ptr + 0x1c) = 0;
  this_ptr[0x1d] = 0;
  this_ptr[0x1e] = 0;
  this_ptr[0x1f] = 0;
  this_ptr[0x20] = 0;
  this_ptr[0x21] = 0;
  this_ptr[0x22] = 0;
  this_ptr[0x23] = 0;
  if (iVar2 < 2) {
    this_ptr[0x24] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[0x23] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x24] = 0;
    if (1 < iVar2) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x24] = puVar3;
      iVar2 = g_02802630;
    }
  }
  this_ptr[0x2c] = 0;
  *(void*)(this_ptr + 0x2d) = 0;
  *(void*)((int64_t)this_ptr + 0x174) = 0;
  *(void*)(this_ptr + 0x2f) = 0;
  this_ptr[0x25] = 0;
  this_ptr[0x26] = 0;
  this_ptr[0x27] = 0;
  this_ptr[0x28] = 0;
  this_ptr[0x29] = 0;
  this_ptr[0x2a] = 0;
  *(void*)(this_ptr + 0x2b) = 0;
  *(void*)((int64_t)this_ptr + 0x16c) = 0;
  *(void*)((int64_t)this_ptr + 0x16f) = 0;
  this_ptr[0x30] = 0;
  this_ptr[0x31] = 0;
  this_ptr[0x32] = 0;
  this_ptr[0x33] = 0;
  this_ptr[0x34] = 0;
  this_ptr[0x35] = 0;
  this_ptr[0x36] = 0;
  if (1 < iVar2) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    this_ptr[0x36] = puVar3;
  }
  return;
}

