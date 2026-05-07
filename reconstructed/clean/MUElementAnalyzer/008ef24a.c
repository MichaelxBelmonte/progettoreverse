// Function: FUN_008ef24a
// Address: 008ef24a
// Size: 560 bytes
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


void FUN_008ef24a(string *param_1,string *param_2)

{
  uint64_t uVar1;
  int64_t arg1;
  void*this_ptr;
  
  *this_ptr = &g_0251c2d0;
  this_ptr[0x23] = 0;
  this_ptr[0x24] = 0;
  this_ptr[0x25] = 0;
  ___bzero();
  this_ptr[0x2e] = 0;
  this_ptr[0x2d] = 0;
  this_ptr[0x2c] = 0;
  this_ptr[0x2b] = 0;
  this_ptr[0x2a] = 0;
  *(void*)(this_ptr + 0x2f) = 0;
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  *(void*)(this_ptr + 0x22) = *(void*)(arg1 + 0x110);
  std::string::operator=(param_1,param_2);
  uVar1 = *(void*)(arg1 + 0x138);
  this_ptr[0x26] = *(void*)(arg1 + 0x130);
  this_ptr[0x27] = uVar1;
  *(void*)(this_ptr + 0x28) = *(void*)(arg1 + 0x140);
  this_ptr[0x29] = *(void*)(arg1 + 0x148);
  std::string::operator=(param_1,param_2);
  *(void*)(this_ptr + 0x2f) = *(void*)(arg1 + 0x178);
  uVar1 = *(void*)(arg1 + 0x168);
  this_ptr[0x2e] = *(void*)(arg1 + 0x170);
  this_ptr[0x2d] = uVar1;
  return;
}

