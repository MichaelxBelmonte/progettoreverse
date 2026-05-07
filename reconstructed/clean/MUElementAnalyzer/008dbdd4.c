// Function: FUN_008dbdd4
// Address: 008dbdd4
// Size: 656 bytes
// Class: MUElementAnalyzer
// String references:
//   "sha256"
//   "canonical_method_thrift_binary"
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


void FUN_008dbdd4(void)

{
  string *this;
  string *psVar1;
  void*arg1;
  void*this_ptr;
  
  *this_ptr = &g_0251b958;
  this_ptr[2] = 0;
  this_ptr[3] = 0;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  this_ptr[10] = 0;
  this_ptr[0xb] = 0;
  this_ptr[0xc] = 0;
  this_ptr[0xd] = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xf] = 0;
  this_ptr[0x10] = 0;
  this_ptr[0x11] = &g_0251b900;
  this_ptr[0x12] = &g_0251b7a0;
  this_ptr[0x13] = 0;
  *(void*)(this_ptr + 0x14) = 0;
  this_ptr[0x15] = &g_0251b7f8;
  this_ptr[0x16] = &g_0251b850;
  psVar1 = (string *)&g_0251b8a8;
  this_ptr[0x17] = &g_0251b8a8;
  this_ptr[0x18] = 0;
  *(void*)(this_ptr + 0x19) = 0;
  *(void*)(this_ptr + 0x1a) = 0;
  this_ptr[0x1b] = &g_0251b6d0;
  FUN_008d7552();
  FUN_008d7552();
  *(void*)(this_ptr + 0x22) = 0x101;
  this = (string *)0x0;
  this_ptr[0x23] = 0;
  this_ptr[0x24] = 0;
  this_ptr[0x25] = 0;
  *(void*)(this_ptr + 0x26) = 0x101;
  *(void*)((int64_t)this_ptr + 0x132) = 0;
  *(void*)(this_ptr + 1) = *(void*)(arg1 + 1);
  *(void*)((int64_t)this_ptr + 0xc) = *(void*)((int64_t)arg1 + 0xc);
  std::string::operator=((string *)0x0,psVar1);
  std::string::operator=(this,psVar1);
  std::string::operator=(this,psVar1);
  std::string::operator=(this,psVar1);
  std::string::operator=(this,psVar1);
  this_ptr[0x13] = arg1[0x13];
  *(void*)(this_ptr + 0x14) = *(void*)(arg1 + 0x14);
  this_ptr[0x18] = arg1[0x18];
  *(void*)(this_ptr + 0x19) = *(void*)(arg1 + 0x19);
  *(void*)(this_ptr + 0x1a) = *(void*)(arg1 + 0x1a);
  std::string::operator=(this,psVar1);
  std::string::operator=(this,psVar1);
  *(void*)(this_ptr + 0x22) = *(void*)(arg1 + 0x22);
  if (this_ptr != arg1) {
    FUN_008df080();
  }
  *(void*)(this_ptr + 0x27) = *(void*)(arg1 + 0x27);
  this_ptr[0x26] = arg1[0x26];
  return;
}

