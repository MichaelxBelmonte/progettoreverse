// Function: FUN_00aae772
// Address: 00aae772
// Size: 574 bytes
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


void FUN_00aae772(uint64_t param_1,string *param_2)

{
  uint64_t uVar1;
  string *this;
  void*arg1;
  void*this_ptr;
  
  this = (string *)(segment_command_00000020.segname + 8);
  *this_ptr = &g_0252a9f0;
  this_ptr[1] = &g_0252a720;
  *(void*)(this_ptr + 2) = 0xffffffff;
  this_ptr[3] = 0xffffffffffffffff;
  *(void*)(this_ptr + 4) = 0x101;
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
  this_ptr[0x11] = 0;
  this_ptr[0x12] = 0;
  this_ptr[0x19] = 0;
  this_ptr[0x18] = 0;
  this_ptr[0x17] = 0;
  this_ptr[0x16] = 0;
  this_ptr[0x15] = 0;
  this_ptr[0x14] = 0;
  this_ptr[0x20] = 0;
  this_ptr[0x1f] = 0;
  this_ptr[0x1e] = 0;
  this_ptr[0x1d] = 0;
  this_ptr[0x1c] = 0;
  this_ptr[0x1b] = 0;
  *(void*)(this_ptr + 0x21) = 0;
  *(void*)((int64_t)this_ptr + 0x109) = 0x101010100000001;
  *(void*)((int64_t)this_ptr + 0x111) = 0x10100;
  *(void*)((int64_t)this_ptr + 0x115) = 0;
  FUN_00aa9d7a();
  *(void*)(this_ptr + 5) = *(void*)(arg1 + 5);
  *(void*)((int64_t)this_ptr + 0x2c) = *(void*)((int64_t)arg1 + 0x2c);
  *(void*)(this_ptr + 6) = *(void*)(arg1 + 6);
  *(void*)((int64_t)this_ptr + 0x34) = *(void*)((int64_t)arg1 + 0x34);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0x13) = *(void*)(arg1 + 0x13);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0x1a) = *(void*)(arg1 + 0x1a);
  std::string::operator=(this,param_2);
  if (this_ptr != arg1) {
    FUN_009bc850();
  }
  uVar1 = arg1[0x21];
  *(void*)((int64_t)this_ptr + 0x10f) = *(void*)((int64_t)arg1 + 0x10f);
  this_ptr[0x21] = uVar1;
  return;
}

