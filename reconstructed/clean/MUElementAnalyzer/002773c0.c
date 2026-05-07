// Function: FUN_002773c0
// Address: 002773c0
// Size: 1546 bytes
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


void FUN_002773c0(void)

{
  code *pcVar1;
  int iVar2;
  void*puVar3;
  void*this_ptr;
  
  FUN_00d4ff40();
  *this_ptr = &g_025d8f90;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  if (1 < g_02802630) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    this_ptr[8] = puVar3;
  }
  iVar2 = g_02802630;
  this_ptr[0x19] = 0;
  this_ptr[9] = 0;
  this_ptr[10] = 0;
  this_ptr[0xb] = 0;
  this_ptr[0xc] = 0;
  this_ptr[0xd] = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xf] = 0;
  this_ptr[0x10] = 0;
  this_ptr[0x11] = 0;
  this_ptr[0x12] = 0;
  this_ptr[0x13] = 0;
  this_ptr[0x14] = 0;
  *(void*)(this_ptr + 0x15) = 0;
  this_ptr[0x16] = 0;
  this_ptr[0x17] = 0;
  *(void*)(this_ptr + 0x18) = 0;
  if (iVar2 < 2) {
    this_ptr[0x1a] = 0;
    this_ptr[0x1b] = 0;
LAB_00277772:
    this_ptr[0x1c] = 0;
    this_ptr[0x1d] = 0;
LAB_002777cc:
    this_ptr[0x1e] = 0;
LAB_002777e2:
    this_ptr[0x1f] = 0;
LAB_002777f8:
    this_ptr[0x20] = 0;
LAB_0027780e:
    this_ptr[0x21] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[0x19] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x1a] = 0;
    if (iVar2 < 2) {
      this_ptr[0x1b] = 0;
      this_ptr[0x1c] = 0;
LAB_002777b6:
      this_ptr[0x1d] = 0;
      goto LAB_002777cc;
    }
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*pcVar1)();
    this_ptr[0x1a] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x1b] = 0;
    if (iVar2 < 2) goto LAB_00277772;
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*pcVar1)();
    this_ptr[0x1b] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x1c] = 0;
    if (iVar2 < 2) goto LAB_002777b6;
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*pcVar1)();
    this_ptr[0x1c] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x1d] = 0;
    if (iVar2 < 2) goto LAB_002777cc;
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    this_ptr[0x1d] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x1e] = 0;
    if (iVar2 < 2) goto LAB_002777e2;
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*pcVar1)();
    this_ptr[0x1e] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x1f] = 0;
    if (iVar2 < 2) goto LAB_002777f8;
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*pcVar1)();
    this_ptr[0x1f] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x20] = 0;
    if (iVar2 < 2) goto LAB_0027780e;
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*pcVar1)();
    this_ptr[0x20] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x21] = 0;
    if (1 < iVar2) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x21] = puVar3;
      iVar2 = g_02802630;
      this_ptr[0x22] = 0;
      if (1 < iVar2) {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &g_02572358;
        (*g_02572370)();
        this_ptr[0x22] = puVar3;
        iVar2 = g_02802630;
      }
      goto LAB_00277836;
    }
  }
  this_ptr[0x22] = 0;
LAB_00277836:
  *(void*)((int64_t)this_ptr + 0x121) = 0;
  *(void*)((int64_t)this_ptr + 0x129) = 0;
  this_ptr[0x23] = 0;
  this_ptr[0x24] = 0;
  *(void*)((int64_t)this_ptr + 0x134) = 0;
  *(void*)((int64_t)this_ptr + 0x13a) = 0;
  this_ptr[0x29] = 0;
  this_ptr[0x2a] = 0;
  *(void*)((int64_t)this_ptr + 0x154) = 0;
  *(void*)((int64_t)this_ptr + 0x15c) = 0;
  this_ptr[0x2d] = 0;
  *(void*)(this_ptr + 0x2e) = 0;
  this_ptr[0x2f] = 0;
  this_ptr[0x30] = 0;
  *(void*)(this_ptr + 0x31) = 0;
  this_ptr[0x32] = 0;
  this_ptr[0x33] = 0;
  if (1 < iVar2) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    this_ptr[0x33] = puVar3;
    iVar2 = g_02802630;
  }
  *(void*)((int64_t)this_ptr + 0x1a5) = 0;
  this_ptr[0x34] = 0;
  this_ptr[0x36] = 0;
  this_ptr[0x37] = 0;
  this_ptr[0x38] = 0;
  this_ptr[0x39] = 0;
  *(void*)(this_ptr + 0x3a) = 0;
  this_ptr[0x3b] = 0;
  this_ptr[0x3c] = 0;
  this_ptr[0x3d] = 0;
  if (iVar2 < 2) {
    this_ptr[0x3e] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[0x3d] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x3e] = 0;
    if (1 < iVar2) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x3e] = puVar3;
    }
  }
  *(void*)((int64_t)this_ptr + 0x201) = 0;
  *(void*)((int64_t)this_ptr + 0x209) = 0;
  this_ptr[0x3f] = 0;
  this_ptr[0x40] = 0;
  *(void*)((int64_t)this_ptr + 0x214) = 0;
  *(void*)((int64_t)this_ptr + 0x21c) = 0;
  return;
}

