// Function: FUN_011410f0
// Address: 011410f0
// Size: 1009 bytes
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


void FUN_011410f0(void)

{
  code *pcVar1;
  int iVar2;
  void*puVar3;
  void*this_ptr;
  
  FUN_00d4ff40();
  *(void*)((int64_t)this_ptr + 0x2f) = 0;
  *(void*)((int64_t)this_ptr + 0x37) = 0;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  *(void*)((int64_t)this_ptr + 0x49) = 0;
  *(void*)((int64_t)this_ptr + 0x51) = 0;
  *this_ptr = &g_025e5748;
  this_ptr[2] = &g_025e5b00;
  this_ptr[3] = &g_025e5b38;
  this_ptr[0xc] = 0;
  this_ptr[0xd] = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xf] = 0;
  *(void*)(this_ptr + 0x10) = 0;
  this_ptr[0x11] = 0;
  this_ptr[0x12] = 0;
  this_ptr[0x13] = 0;
  this_ptr[0x14] = 0;
  this_ptr[0x15] = 0;
  this_ptr[0x16] = 0;
  this_ptr[0x17] = 0;
  this_ptr[0x18] = 0;
  this_ptr[0x19] = 0;
  this_ptr[0x1a] = 0;
  iVar2 = g_02802630;
  if (g_02802630 < 2) {
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
      iVar2 = g_02802630;
    }
  }
  *(void*)(this_ptr + 0x1c) = 0;
  this_ptr[0x28] = 0;
  *(void*)(this_ptr + 0x29) = 0;
  *(void*)((int64_t)this_ptr + 0xe4) = 0;
  *(void*)((int64_t)this_ptr + 0xec) = 0;
  *(void*)((int64_t)this_ptr + 0xf4) = 0;
  *(void*)((int64_t)this_ptr + 0xfc) = 0;
  *(void*)((int64_t)this_ptr + 0x104) = 0;
  *(void*)((int64_t)this_ptr + 0x10c) = 0;
  *(void*)((int64_t)this_ptr + 0x114) = 0;
  *(void*)((int64_t)this_ptr + 0x11c) = 0;
  *(void*)((int64_t)this_ptr + 0x124) = 0;
  *(void*)((int64_t)this_ptr + 300) = 0;
  *(void*)((int64_t)this_ptr + 0x131) = 0;
  this_ptr[0x2a] = 0;
  this_ptr[0x2b] = 0;
  this_ptr[0x2c] = 0;
  if (iVar2 < 2) {
    this_ptr[0x2d] = 0;
    this_ptr[0x2e] = 0;
LAB_011413f7:
    this_ptr[0x2f] = 0;
    this_ptr[0x30] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[0x2c] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x2d] = 0;
    if (iVar2 < 2) {
      this_ptr[0x2e] = 0;
      this_ptr[0x2f] = 0;
LAB_0114140d:
      this_ptr[0x30] = 0;
    }
    else {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x2d] = puVar3;
      iVar2 = g_02802630;
      this_ptr[0x2e] = 0;
      if (iVar2 < 2) goto LAB_011413f7;
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x2e] = puVar3;
      iVar2 = g_02802630;
      this_ptr[0x2f] = 0;
      if (iVar2 < 2) goto LAB_0114140d;
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x2f] = puVar3;
      iVar2 = g_02802630;
      this_ptr[0x30] = 0;
      if (1 < iVar2) {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &g_02572358;
        (*g_02572370)();
        this_ptr[0x30] = puVar3;
        iVar2 = g_02802630;
        this_ptr[0x31] = 0;
        if (1 < iVar2) {
          puVar3 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar3 = &g_02572358;
          (*g_02572370)();
          this_ptr[0x31] = puVar3;
        }
        goto LAB_01141423;
      }
    }
  }
  this_ptr[0x31] = 0;
LAB_01141423:
  this_ptr[0x32] = 0;
  *(void*)(this_ptr + 0x33) = 0;
  *(void*)((int64_t)this_ptr + 0x19c) = 0;
  this_ptr[0x35] = 0;
  this_ptr[0x36] = 0;
  this_ptr[0x37] = 0;
  this_ptr[0x38] = 0;
  this_ptr[0x39] = 0;
  this_ptr[0x3a] = 0;
  *(void*)(this_ptr + 0x3b) = 0;
  this_ptr[0x3c] = 0;
  this_ptr[0x3d] = 0;
  this_ptr[0x3e] = 0;
  this_ptr[0x3f] = 0;
  this_ptr[0x40] = 0;
  this_ptr[0x41] = 0;
  this_ptr[0x42] = 0;
  this_ptr[0x43] = 0;
  this_ptr[0x44] = 0;
  this_ptr[0x45] = 0;
  *(void*)(this_ptr + 0x46) = 0;
  this_ptr[0x47] = 0;
  this_ptr[0x48] = 0;
  this_ptr[0x49] = 0;
  this_ptr[0x4a] = 0;
  this_ptr[0x4b] = 0;
  this_ptr[0x4c] = 0;
  this_ptr[0x4d] = 0;
  this_ptr[0x4e] = 0;
  this_ptr[0x4f] = 0;
  this_ptr[0x50] = 0;
  this_ptr[0x51] = 0;
  this_ptr[0x52] = 0;
  this_ptr[0x53] = 0;
  this_ptr[0x54] = 0;
  this_ptr[0x55] = 0;
  this_ptr[0x56] = 0;
  this_ptr[0x57] = 0;
  return;
}

