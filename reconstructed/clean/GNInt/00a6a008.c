// Function: FUN_00a6a008
// Address: 00a6a008
// Size: 727 bytes
// Class: GNInt
// === GNInt properties ===
//   GNInt           _assembledElementRendererCount
//   bool            _processPeriodBased
//   bool            _usesPososc
//   bool            _resetAllPhasesAtAttack
//   bool            _continueAllPhasesByDefault
//   bool            _renderWithOriginalTime
//   float           _freqDomainFormantResolution
//   GNInt           _freqDomainFourierSize
//   float           _freqDomainPhaseResetParametersScale
//   float           _formantPitchUpCompensationFactor
//   float           _formantPitchDownCompensationFactor
//   bool            _didFail
//   GNInt           _expectedResultLength
//   GNInt           _httpStatusCode
//   bool            _isSuspended
//   SInt64          _uploadLength
//   GNInt           _receivedResultLength
//   bool            _didTimeOut
//   float           _cent
//   GNInt           _westernStandardPitchIndexOffset
//   bool            _isLoop
//   GNInt           _numerator
//   GNInt           _denominator
//   GNInt           _beats
//   GNInt           _tonalKey
//   GNInt           _tonalGender
//   float           _time
//   float           _nextBeepStartTime
//   float           _beepTime
//   float           _beepLength
//   ... +133 more


void FUN_00a6a008(uint64_t param_1,string *param_2)

{
  uint64_t uVar1;
  string *this;
  void*arg1;
  void*this_ptr;
  
  *this_ptr = &g_02528c60;
  this_ptr[1] = &g_0252a720;
  *(void*)(this_ptr + 2) = 0xffffffff;
  this_ptr[3] = 0xffffffffffffffff;
  *(void*)(this_ptr + 4) = 0x101;
  this = (string *)0x0;
  this_ptr[0x1e] = 0;
  this_ptr[0x1f] = 0;
  this_ptr[0x20] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  this_ptr[10] = 0;
  this_ptr[0xb] = 0;
  this_ptr[0xc] = 0;
  this_ptr[0xf] = 0;
  this_ptr[0x10] = 0;
  this_ptr[0x11] = 0;
  this_ptr[0x12] = 0;
  this_ptr[0x13] = 0;
  this_ptr[0x14] = 0;
  this_ptr[0x1b] = 0;
  this_ptr[0x1a] = 0;
  this_ptr[0x19] = 0;
  this_ptr[0x18] = 0;
  this_ptr[0x17] = 0;
  this_ptr[0x16] = 0;
  this_ptr[0x25] = 0;
  this_ptr[0x24] = 0;
  this_ptr[0x23] = 0;
  *(void*)(this_ptr + 0x26) = 0x100;
  *(void*)((int64_t)this_ptr + 0x132) = 0;
  *(void*)((int64_t)this_ptr + 0x13a) = 0;
  *(void*)((int64_t)this_ptr + 0x13b) = 0x101;
  *(void*)((int64_t)this_ptr + 0x13d) = 1;
  *(void*)((int64_t)this_ptr + 0x13e) = 0;
  *(void*)((int64_t)this_ptr + 0x146) = 0;
  FUN_00aa9d7a();
  *(void*)(this_ptr + 5) = *(void*)(arg1 + 5);
  *(void*)((int64_t)this_ptr + 0x2c) = *(void*)((int64_t)arg1 + 0x2c);
  *(void*)(this_ptr + 6) = *(void*)(arg1 + 6);
  *(void*)((int64_t)this_ptr + 0x34) = *(void*)((int64_t)arg1 + 0x34);
  if (this_ptr != arg1) {
    FUN_008df080();
    param_2 = (string *)arg1[0xb];
    FUN_008df080();
  }
  *(void*)(this_ptr + 0xd) = *(void*)(arg1 + 0xd);
  *(void*)((int64_t)this_ptr + 0x6c) = *(void*)((int64_t)arg1 + 0x6c);
  *(void*)(this_ptr + 0xe) = *(void*)(arg1 + 0xe);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0x15) = *(void*)(arg1 + 0x15);
  std::string::operator=(this,param_2);
  if (this_ptr != arg1) {
    param_2 = (string *)arg1[0x1a];
    FUN_008df080();
  }
  *(void*)(this_ptr + 0x1c) = *(void*)(arg1 + 0x1c);
  *(void*)((int64_t)this_ptr + 0xe4) = *(void*)((int64_t)arg1 + 0xe4);
  *(void*)(this_ptr + 0x1d) = *(void*)(arg1 + 0x1d);
  *(void*)((int64_t)this_ptr + 0xec) = *(void*)((int64_t)arg1 + 0xec);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0x21) = *(void*)(arg1 + 0x21);
  *(void*)((int64_t)this_ptr + 0x10c) = *(void*)((int64_t)arg1 + 0x10c);
  *(void*)(this_ptr + 0x22) = *(void*)(arg1 + 0x22);
  if (this_ptr != arg1) {
    FUN_009bc850();
  }
  this_ptr[0x28] = arg1[0x28];
  uVar1 = arg1[0x26];
  this_ptr[0x27] = arg1[0x27];
  this_ptr[0x26] = uVar1;
  return;
}

