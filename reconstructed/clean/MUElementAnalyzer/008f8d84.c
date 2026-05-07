// Function: FUN_008f8d84
// Address: 008f8d84
// Size: 981 bytes
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


void FUN_008f8d84(void)

{
  uint64_t uVar1;
  string *this;
  string *psVar2;
  void*arg1;
  void*this_ptr;
  uint32_t uVar3;
  
  *this_ptr = &g_0251c5a8;
  this_ptr[1] = 0;
  this_ptr[2] = 0;
  this_ptr[3] = 0;
  this_ptr[0xd] = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xf] = 0;
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  this_ptr[10] = 0;
  this_ptr[0x11] = &g_0251c338;
  *(void*)(this_ptr + 0x18) = 0;
  this_ptr[0x12] = 0;
  this_ptr[0x13] = 0;
  this_ptr[0x14] = 0;
  this_ptr[0x15] = 0;
  this_ptr[0x16] = 0;
  this_ptr[0x17] = 0;
  *(void*)(this_ptr + 0x26) = 0;
  this_ptr[0x25] = 0;
  this_ptr[0x24] = 0;
  this_ptr[0x23] = 0;
  this_ptr[0x22] = 0;
  this_ptr[0x21] = 0;
  this_ptr[0x20] = 0;
  this_ptr[0x1f] = 0;
  this_ptr[0x1e] = 0;
  this_ptr[0x1d] = 0;
  this_ptr[0x1c] = 0;
  this_ptr[0x1b] = 0;
  this_ptr[0x1a] = 0;
  this_ptr[0x19] = 0;
  this_ptr[0x27] = 0;
  this_ptr[0x28] = 0;
  this_ptr[0x29] = 0;
  this_ptr[0x2a] = 0;
  this_ptr[0x2b] = 0;
  this_ptr[0x2c] = 0;
  this_ptr[0x2d] = 0;
  this_ptr[0x2e] = 0;
  this_ptr[0x2f] = 0;
  this_ptr[0x30] = 0;
  this_ptr[0x31] = 0;
  *(void*)(this_ptr + 0x32) = 1;
  this_ptr[0x37] = 0;
  this_ptr[0x36] = 0;
  this_ptr[0x35] = 0;
  psVar2 = (string *)&g_0251c3a0;
  this_ptr[0x38] = &g_0251c3a0;
  this_ptr[0x3f] = 0;
  this_ptr[0x3e] = 0;
  this_ptr[0x3d] = 0;
  this_ptr[0x3c] = 0;
  this_ptr[0x3b] = 0;
  this_ptr[0x3a] = 0;
  this_ptr[0x39] = 0;
  this_ptr[0x40] = 0x100000001;
  this_ptr[0x45] = 0;
  this_ptr[0x44] = 0;
  this_ptr[0x43] = 0;
  this_ptr[0x42] = 0;
  this_ptr[0x41] = 0;
  *(void*)(this_ptr + 0x46) = 1;
  *(void*)((int64_t)this_ptr + 0x232) = 0;
  *(void*)((int64_t)this_ptr + 0x233) = 0x1010101;
  *(void*)((int64_t)this_ptr + 0x237) = 0;
  *(void*)((int64_t)this_ptr + 0x239) = 0;
  *(void*)((int64_t)this_ptr + 0x26f) = 0;
  this_ptr[0x4d] = 0;
  this_ptr[0x4c] = 0;
  this_ptr[0x4b] = 0;
  this_ptr[0x4a] = 0;
  this_ptr[0x49] = 0;
  this_ptr[0x48] = 0;
  this = (string *)0x100010000010001;
  *(void*)((int64_t)this_ptr + 0x277) = 0x100010000010001;
  *(void*)((int64_t)this_ptr + 0x27f) = 0;
  if (this_ptr != arg1) {
    psVar2 = (string *)arg1[2];
    FUN_0090c478();
  }
  *(void*)(this_ptr + 4) = *(void*)(arg1 + 4);
  *(void*)((int64_t)this_ptr + 0x21) = *(void*)((int64_t)arg1 + 0x21);
  *(void*)((int64_t)this_ptr + 0x24) = *(void*)((int64_t)arg1 + 0x24);
  std::string::operator=(this,psVar2);
  std::string::operator=(this,psVar2);
  uVar1 = arg1[0xc];
  this_ptr[0xb] = arg1[0xb];
  this_ptr[0xc] = uVar1;
  std::string::operator=(this,psVar2);
  *(void*)(this_ptr + 0x10) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x84) = *(void*)((int64_t)arg1 + 0x84);
  uVar3 = FUN_008f0a5a();
  *(void*)(this_ptr + 0x33) = *(void*)(arg1 + 0x33);
  *(void*)((int64_t)this_ptr + 0x19c) = *(void*)((int64_t)arg1 + 0x19c);
  this_ptr[0x34] = arg1[0x34];
  if (this_ptr != arg1) {
    FUN_008df080(uVar3,arg1[0x36]);
  }
  uVar3 = FUN_008f1a3c();
  if (this_ptr != arg1) {
    uVar3 = FUN_0090c6d6(uVar3,arg1[0x49]);
    FUN_008d3508(uVar3,arg1[0x4c]);
  }
  *(void*)((int64_t)this_ptr + 0x27f) = *(void*)((int64_t)arg1 + 0x27f);
  uVar1 = arg1[0x4e];
  this_ptr[0x4f] = arg1[0x4f];
  this_ptr[0x4e] = uVar1;
  return;
}

