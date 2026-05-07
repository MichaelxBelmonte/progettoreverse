// Function: FUN_009128e4
// Address: 009128e4
// Size: 796 bytes
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


void FUN_009128e4(uint64_t param_1)

{
  uint64_t uVar1;
  int64_t arg1;
  int64_t this_ptr;
  
  *(void*)(this_ptr + 8) = *(void*)(arg1 + 8);
  *(void*)(this_ptr + 0xc) = *(void*)(arg1 + 0xc);
  *(void*)(this_ptr + 0x10) = *(void*)(arg1 + 0x10);
  if (this_ptr == arg1) {
    *(void*)(this_ptr + 0x30) = *(void*)(arg1 + 0x30);
    *(void*)(this_ptr + 0x34) = *(void*)(arg1 + 0x34);
    *(void*)(this_ptr + 0x98) = *(void*)(arg1 + 0x98);
  }
  else {
    FUN_008df080(param_1,*(void*)(arg1 + 0x20));
    *(void*)(this_ptr + 0x30) = *(void*)(arg1 + 0x30);
    *(void*)(this_ptr + 0x34) = *(void*)(arg1 + 0x34);
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
    *(void*)(this_ptr + 0x98) = *(void*)(arg1 + 0x98);
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
  }
  *(void*)(this_ptr + 0xe8) = *(void*)(arg1 + 0xe8);
  *(void*)(this_ptr + 0xec) = *(void*)(arg1 + 0xec);
  if (this_ptr == arg1) {
    *(void*)(this_ptr + 0x150) = *(void*)(arg1 + 0x150);
  }
  else {
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
    *(void*)(this_ptr + 0x150) = *(void*)(arg1 + 0x150);
    FUN_008df080();
  }
  *(void*)(this_ptr + 0x170) = *(void*)(arg1 + 0x170);
  *(void*)(this_ptr + 0x174) = *(void*)(arg1 + 0x174);
  if (this_ptr == arg1) {
    *(void*)(this_ptr + 0x1a8) = *(void*)(arg1 + 0x1a8);
    *(void*)(this_ptr + 0x1ac) = *(void*)(arg1 + 0x1ac);
  }
  else {
    FUN_008df080();
    FUN_008df080();
    *(void*)(this_ptr + 0x1a8) = *(void*)(arg1 + 0x1a8);
    *(void*)(this_ptr + 0x1ac) = *(void*)(arg1 + 0x1ac);
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
    FUN_008df080();
  }
  *(void*)(this_ptr + 0x210) = *(void*)(arg1 + 0x210);
  uVar1 = *(void*)(arg1 + 0x21c);
  *(void*)(this_ptr + 0x214) = *(void*)(arg1 + 0x214);
  *(void*)(this_ptr + 0x21c) = uVar1;
  *(void*)(this_ptr + 0x224) = *(void*)(arg1 + 0x224);
  *(void*)(this_ptr + 0x22c) = *(void*)(arg1 + 0x22c);
  *(void*)(this_ptr + 0x234) = *(void*)(arg1 + 0x234);
  return;
}

