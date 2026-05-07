// Function: FUN_00aa2c58
// Address: 00aa2c58
// Size: 1112 bytes
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


void FUN_00aa2c58(uint64_t param_1,string *param_2)

{
  uint64_t uVar1;
  string *this;
  void*arg1;
  void*this_ptr;
  
  *this_ptr = &g_0252a390;
  this_ptr[1] = &g_0252a720;
  *(void*)(this_ptr + 2) = 0xffffffff;
  this_ptr[3] = 0xffffffffffffffff;
  *(void*)(this_ptr + 4) = 0x101;
  this_ptr[0xd] = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xf] = 0;
  this_ptr[0x1f] = 0;
  this_ptr[0x20] = 0;
  this_ptr[0x21] = 0;
  this_ptr[0x23] = 0;
  this_ptr[0x24] = 0;
  this_ptr[0x25] = 0;
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  this_ptr[10] = 0;
  this_ptr[0xb] = 0;
  this_ptr[0x16] = 0;
  this_ptr[0x15] = 0;
  this_ptr[0x14] = 0;
  this_ptr[0x13] = 0;
  this_ptr[0x12] = 0;
  this_ptr[0x11] = 0;
  this_ptr[0x1d] = 0;
  this_ptr[0x1c] = 0;
  this_ptr[0x1b] = 0;
  this_ptr[0x1a] = 0;
  this_ptr[0x19] = 0;
  this_ptr[0x18] = 0;
  this_ptr[0x2d] = 0;
  this_ptr[0x2c] = 0;
  this_ptr[0x2b] = 0;
  this_ptr[0x2a] = 0;
  this_ptr[0x29] = 0;
  this_ptr[0x28] = 0;
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
  *(void*)((int64_t)this_ptr + 0x1c1) = 0x101000001;
  *(void*)((int64_t)this_ptr + 0x1c9) = 0x100010101000101;
  this = (string *)(this_ptr + 0x1f);
  *(void*)((int64_t)this_ptr + 0x1d1) = 0;
  *(void*)((int64_t)this_ptr + 0x1d3) = 1;
  *(void*)(this_ptr + 0x3b) = 0;
  *(void*)((int64_t)this_ptr + 0x1d4) = 0;
  *(void*)((int64_t)this_ptr + 0x1da) = 1;
  FUN_00aa9d7a();
  *(void*)(this_ptr + 5) = *(void*)(arg1 + 5);
  *(void*)((int64_t)this_ptr + 0x2c) = *(void*)((int64_t)arg1 + 0x2c);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0xc) = *(void*)(arg1 + 0xc);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0x10) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x84) = *(void*)((int64_t)arg1 + 0x84);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0x17) = *(void*)(arg1 + 0x17);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0x1e) = *(void*)(arg1 + 0x1e);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0x22) = *(void*)(arg1 + 0x22);
  *(void*)((int64_t)this_ptr + 0x111) = *(void*)((int64_t)arg1 + 0x111);
  if (this_ptr != arg1) {
    param_2 = (string *)arg1[0x24];
    FUN_008df080();
  }
  *(void*)(this_ptr + 0x26) = *(void*)(arg1 + 0x26);
  *(void*)((int64_t)this_ptr + 0x131) = *(void*)((int64_t)arg1 + 0x131);
  *(void*)((int64_t)this_ptr + 0x134) = *(void*)((int64_t)arg1 + 0x134);
  *(void*)(this_ptr + 0x27) = *(void*)(arg1 + 0x27);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0x2e) = *(void*)(arg1 + 0x2e);
  *(void*)((int64_t)this_ptr + 0x174) = *(void*)((int64_t)arg1 + 0x174);
  if (this_ptr != arg1) {
    FUN_009bc850();
    FUN_009bc850();
    FUN_009bc850();
  }
  *(void*)((int64_t)this_ptr + 0x1d6) = *(void*)((int64_t)arg1 + 0x1d6);
  this_ptr[0x3a] = arg1[0x3a];
  uVar1 = arg1[0x38];
  this_ptr[0x39] = arg1[0x39];
  this_ptr[0x38] = uVar1;
  return;
}

