// Function: FUN_00aa0894
// Address: 00aa0894
// Size: 623 bytes
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


void FUN_00aa0894(void)

{
  uint64_t uVar1;
  string *this;
  string *psVar2;
  int64_t arg1;
  void*this_ptr;
  
  *this_ptr = &g_0252a2f8;
  this_ptr[1] = &g_0252a720;
  *(void*)(this_ptr + 2) = 0xffffffff;
  this_ptr[3] = 0xffffffffffffffff;
  *(void*)(this_ptr + 4) = 0x101;
  this_ptr[0x14] = 0;
  this_ptr[0x15] = 0;
  this_ptr[0x16] = 0;
  psVar2 = (string *)(this_ptr + 0x1b);
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  this_ptr[10] = 0;
  this_ptr[0xb] = 0;
  this_ptr[0xd] = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xf] = 0;
  this_ptr[0x10] = 0;
  this_ptr[0x11] = 0;
  this_ptr[0x12] = 0;
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
  this_ptr[0x18] = 0;
  *(void*)(this_ptr + 0x24) = 0;
  this = (string *)0x1010000010001;
  *(void*)((int64_t)this_ptr + 0x121) = 0x1010000010001;
  *(void*)((int64_t)this_ptr + 0x129) = 1;
  *(void*)((int64_t)this_ptr + 0x12a) = 0;
  *(void*)((int64_t)this_ptr + 0x12e) = 0x101;
  FUN_00aa9d7a();
  *(void*)(this_ptr + 5) = *(void*)(arg1 + 0x28);
  *(void*)((int64_t)this_ptr + 0x2c) = *(void*)(arg1 + 0x2c);
  std::string::operator=(this,psVar2);
  std::string::operator=(this,psVar2);
  *(void*)(this_ptr + 0xc) = *(void*)(arg1 + 0x60);
  std::string::operator=(this,psVar2);
  std::string::operator=(this,psVar2);
  *(void*)(this_ptr + 0x13) = *(void*)(arg1 + 0x98);
  std::string::operator=(this,psVar2);
  *(void*)(this_ptr + 0x17) = *(void*)(arg1 + 0xb8);
  *(void*)((int64_t)this_ptr + 0xbc) = *(void*)(arg1 + 0xbc);
  std::string::operator=(this,psVar2);
  std::string::operator=(this,psVar2);
  std::string::operator=(this,psVar2);
  std::string::operator=(this,psVar2);
  uVar1 = *(void*)(arg1 + 0x120);
  this_ptr[0x25] = *(void*)(arg1 + 0x128);
  this_ptr[0x24] = uVar1;
  return;
}

