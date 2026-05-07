// Function: FUN_00aa7086
// Address: 00aa7086
// Size: 575 bytes
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


void FUN_00aa7086(string *param_1,string *param_2)

{
  uint64_t uVar1;
  void*arg1;
  void*this_ptr;
  
  *this_ptr = &g_0252a558;
  this_ptr[1] = &g_0252a720;
  *(void*)(this_ptr + 2) = 0xffffffff;
  this_ptr[3] = 0xffffffffffffffff;
  *(void*)(this_ptr + 4) = 0x101;
  ___bzero();
  this_ptr[0x27] = 0;
  this_ptr[0x26] = 0;
  this_ptr[0x25] = 0;
  this_ptr[0x24] = 0;
  this_ptr[0x23] = 0;
  this_ptr[0x22] = 0;
  *(void*)(this_ptr + 0x28) = 0x1000100;
  *(void*)((int64_t)this_ptr + 0x144) = 0x100;
  *(void*)((int64_t)this_ptr + 0x146) = 0x1000000000000;
  *(void*)((int64_t)this_ptr + 0x14e) = 0;
  FUN_00aa9d7a();
  *(void*)(this_ptr + 5) = *(void*)(arg1 + 5);
  *(void*)((int64_t)this_ptr + 0x2c) = *(void*)((int64_t)arg1 + 0x2c);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  *(void*)(this_ptr + 0x21) = *(void*)(arg1 + 0x21);
  if (this_ptr != arg1) {
    FUN_009bc850();
    FUN_009bc850();
  }
  uVar1 = arg1[0x28];
  *(void*)((int64_t)this_ptr + 0x147) = *(void*)((int64_t)arg1 + 0x147);
  this_ptr[0x28] = uVar1;
  return;
}

