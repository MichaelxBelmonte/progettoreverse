// Function: FUN_00a9f004
// Address: 00a9f004
// Size: 587 bytes
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


void FUN_00a9f004(uint64_t param_1,string *param_2)

{
  uint64_t uVar1;
  string *this;
  void*arg1;
  void*this_ptr;
  
  *this_ptr = &g_0252a260;
  this_ptr[1] = &g_0252a720;
  *(void*)(this_ptr + 2) = 0xffffffff;
  this_ptr[3] = 0xffffffffffffffff;
  *(void*)(this_ptr + 4) = 0x101;
  this_ptr[0xe] = 0;
  this_ptr[0xf] = 0;
  this_ptr[0x10] = 0;
  this_ptr[0x12] = 0;
  this_ptr[0x13] = 0;
  this_ptr[0x14] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  this_ptr[10] = 0;
  this_ptr[0xb] = 0;
  this_ptr[0xc] = 0;
  *(void*)(this_ptr + 0x20) = 0;
  this_ptr[0x1f] = 0;
  this_ptr[0x1e] = 0;
  this_ptr[0x1d] = 0;
  this_ptr[0x1c] = 0;
  this_ptr[0x1b] = 0;
  this_ptr[0x1a] = 0;
  this_ptr[0x19] = 0;
  this_ptr[0x18] = 0;
  this_ptr[0x17] = 0;
  this = (string *)0x100010100000001;
  *(void*)((int64_t)this_ptr + 0x101) = 0x100010100000001;
  *(void*)((int64_t)this_ptr + 0x111) = 0;
  *(void*)((int64_t)this_ptr + 0x109) = 0;
  FUN_00aa9d7a();
  *(void*)(this_ptr + 5) = *(void*)(arg1 + 5);
  *(void*)((int64_t)this_ptr + 0x2c) = *(void*)((int64_t)arg1 + 0x2c);
  *(void*)(this_ptr + 6) = *(void*)(arg1 + 6);
  *(void*)((int64_t)this_ptr + 0x34) = *(void*)((int64_t)arg1 + 0x34);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0xd) = *(void*)(arg1 + 0xd);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0x11) = *(void*)(arg1 + 0x11);
  *(void*)((int64_t)this_ptr + 0x8c) = *(void*)((int64_t)arg1 + 0x8c);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0x15) = *(void*)(arg1 + 0x15);
  *(void*)((int64_t)this_ptr + 0xac) = *(void*)((int64_t)arg1 + 0xac);
  *(void*)(this_ptr + 0x16) = *(void*)(arg1 + 0x16);
  std::string::operator=(this,param_2);
  if (this_ptr != arg1) {
    FUN_009bc850();
    FUN_009bc850();
  }
  *(void*)(this_ptr + 0x22) = *(void*)(arg1 + 0x22);
  uVar1 = arg1[0x20];
  this_ptr[0x21] = arg1[0x21];
  this_ptr[0x20] = uVar1;
  return;
}

