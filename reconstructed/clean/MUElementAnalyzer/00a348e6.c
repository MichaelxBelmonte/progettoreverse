// Function: FUN_00a348e6
// Address: 00a348e6
// Size: 503 bytes
// Class: MUElementAnalyzer
// String references:
//   "drift"
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


void FUN_00a348e6(void)

{
  uint64_t uVar1;
  void*this_ptr;
  
  *this_ptr = &g_0252a390;
  this_ptr[1] = &g_0252a720;
  *(void*)(this_ptr + 2) = 0xffffffff;
  this_ptr[3] = 0xffffffffffffffff;
  *(void*)(this_ptr + 4) = 0x101;
  *(void*)(this_ptr + 5) = 0;
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  FUN_00a35b58();
  *(void*)(this_ptr + 0xc) = 0x1e;
  this_ptr[0xd] = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xf] = 0;
  this_ptr[0x10] = 0;
  FUN_00a35b58();
  FUN_00a35b58();
  *(void*)(this_ptr + 0x17) = 0;
  FUN_00a35b58();
  FUN_00a35b58();
  *(void*)(this_ptr + 0x1e) = 1;
  this_ptr[0x1f] = 0;
  this_ptr[0x20] = 0;
  this_ptr[0x21] = 0;
  *(void*)(this_ptr + 0x22) = 1;
  this_ptr[0x23] = 0;
  this_ptr[0x24] = 0;
  this_ptr[0x25] = 0;
  *(void*)(this_ptr + 0x26) = 1;
  *(void*)((int64_t)this_ptr + 0x134) = 0;
  *(void*)(this_ptr + 0x2e) = 0;
  this_ptr[0x28] = 0;
  this_ptr[0x29] = 0;
  this_ptr[0x2a] = 0;
  this_ptr[0x2b] = 0;
  this_ptr[0x2c] = 0;
  this_ptr[0x2d] = 0;
  *(void*)((int64_t)this_ptr + 0x174) = 1;
  this_ptr[0x37] = 0;
  this_ptr[0x36] = 0;
  this_ptr[0x35] = 0;
  this_ptr[0x34] = 0;
  this_ptr[0x33] = 0;
  this_ptr[0x32] = 0;
  this_ptr[0x31] = 0;
  this_ptr[0x30] = 0;
  this_ptr[0x2f] = 0;
  *(void*)(this_ptr + 0x38) = 0;
  uVar1 = _UNK_023d4eb8;
  *(void*)((int64_t)this_ptr + 0x1c1) = g_023d4eb0;
  *(void*)((int64_t)this_ptr + 0x1c9) = uVar1;
  *(void*)((int64_t)this_ptr + 0x1d1) = 0;
  *(void*)((int64_t)this_ptr + 0x1d3) = 1;
  *(void*)(this_ptr + 0x3b) = 0;
  *(void*)((int64_t)this_ptr + 0x1d4) = 0;
  *(void*)((int64_t)this_ptr + 0x1da) = 1;
  return;
}

