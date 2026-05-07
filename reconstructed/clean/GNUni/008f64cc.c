// Function: FUN_008f64cc
// Address: 008f64cc
// Size: 1064 bytes
// Class: GNUni
// === GNUni properties ===
//   bool            _preferedFrameSizeLocked
//   GNCoord         _verticalScrollerWidth
//   GNCoord         _horizontalScrollerHeight
//   bool            _canGoUp
//   bool            _canRepeat
//   bool            _canGoDown
//   GNInt           _beatDivision
//   GNInt           _beatCount
//   GNInt           _timeSliceCount
//   GNFraction      _allStartBeat
//   float           _pitchOffset
//   bool            _isBlues
//   GNInt           _bluesRoot
//   bool            _considersBlues
//   bool            _reservesPitchRange
//   bool            _limitsHighestPitchIndex
//   bool            _limitsLowestPitchIndex
//   bool            _isQuarterAssignmentIrrelevant
//   bool            _isPitchAssignmentIrrelevant
//   bool            _calcsAlternateChords
//   bool            _isOutputSlot
//   bool            _isDefaultSlot
//   GNInt           _stereoItemCount
//   MDInspectorModeFlags _mode
//   double          _xDistanceResolutionForLinearApproximation
//   double          _yDistanceResolutionForLinearApproximation
//   bool            _didRequestCacheValidation
//   bool            _canChooseDirectory
//   bool            _canChooseFile
//   bool            _allowsMultipleSelection
//   ... +276 more


void FUN_008f64cc(uint64_t param_1,string *param_2)

{
  uint64_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  string *this;
  void*arg1;
  void*this_ptr;
  
  *this_ptr = &g_0251c540;
  this_ptr[3] = 0;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  this_ptr[0xc] = &g_0251c0d8;
  *(void*)(this_ptr + 0xd) = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xf] = 0;
  this_ptr[0x10] = 0;
  this_ptr[0x11] = 0;
  this_ptr[0x12] = 0;
  this_ptr[0x13] = 0;
  this_ptr[0x14] = 0;
  this_ptr[0x15] = 0;
  this_ptr[0x16] = 0;
  this_ptr[0x17] = 0;
  this_ptr[0x18] = 0;
  this_ptr[0x19] = 0;
  this_ptr[0x1a] = 0;
  this_ptr[0x1b] = 0;
  this_ptr[0x1c] = 0;
  this_ptr[0x1d] = 0;
  this_ptr[0x1e] = &g_0251c140;
  *(void*)(this_ptr + 0x1f) = 0;
  this_ptr[0x20] = 0;
  this_ptr[0x21] = 0;
  this_ptr[0x22] = 0;
  *(void*)(this_ptr + 0x23) = 0;
  *(void*)((int64_t)this_ptr + 0x11c) = 0;
  *(void*)((int64_t)this_ptr + 0x122) = 0;
  *(void*)((int64_t)this_ptr + 300) = 0;
  *(void*)((int64_t)this_ptr + 0x134) = 0;
  *(void*)((int64_t)this_ptr + 0x13c) = 0;
  *(void*)((int64_t)this_ptr + 0x143) = 0;
  *(void*)((int64_t)this_ptr + 0x147) = 1;
  *(void*)((int64_t)this_ptr + 0x149) = 0;
  this = (string *)(this_ptr + 0x2a);
  this_ptr[0x2a] = &g_0251c0d8;
  *(void*)(this_ptr + 0x2b) = 0;
  ___bzero();
  this_ptr[0x51] = &g_0251c4d8;
  this_ptr[0x52] = 0;
  this_ptr[0x53] = 0;
  this_ptr[0x54] = 0;
  this_ptr[0x55] = 0;
  this_ptr[0x56] = 0;
  this_ptr[0x57] = 0;
  this_ptr[0x58] = 0;
  this_ptr[0x59] = 0;
  this_ptr[0x5a] = 0;
  this_ptr[0x5b] = 0;
  this_ptr[0x5c] = 0;
  this_ptr[0x5d] = 0;
  *(void*)(this_ptr + 0x5e) = 0;
  this_ptr[0x5f] = 0;
  this_ptr[0x60] = 0;
  this_ptr[0x61] = 0;
  this_ptr[0x62] = 0;
  this_ptr[99] = 0;
  this_ptr[100] = 0;
  this_ptr[0x65] = 0;
  this_ptr[0x66] = 0;
  this_ptr[0x67] = 0;
  this_ptr[0x68] = 0;
  *(void*)(this_ptr + 0x69) = 0;
  *(void*)((int64_t)this_ptr + 0x34a) = 1;
  *(void*)((int64_t)this_ptr + 0x34b) = 0;
  *(void*)((int64_t)this_ptr + 0x34f) = 0;
  this_ptr[0x6b] = 0;
  this_ptr[0x6c] = 0;
  this_ptr[0x6d] = 0;
  *(void*)(this_ptr + 0x6e) = 0;
  *(void*)((int64_t)this_ptr + 0x371) = 0x101;
  *(void*)((int64_t)this_ptr + 0x373) = 1;
  *(void*)((int64_t)this_ptr + 0x374) = 0;
  *(void*)((int64_t)this_ptr + 0x37c) = 0;
  *(void*)((int64_t)this_ptr + 0x381) = 0;
  *(void*)(this_ptr + 1) = *(void*)(arg1 + 1);
  *(void*)((int64_t)this_ptr + 0xc) = *(void*)((int64_t)arg1 + 0xc);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 2);
  *(void*)((int64_t)this_ptr + 0x14) = *(void*)((int64_t)arg1 + 0x14);
  if (this_ptr != arg1) {
    param_2 = (string *)arg1[4];
    FUN_008df080();
  }
  uVar1 = arg1[7];
  this_ptr[6] = arg1[6];
  this_ptr[7] = uVar1;
  uVar2 = *(void*)((int64_t)arg1 + 0x44);
  uVar3 = *(void*)(arg1 + 9);
  uVar4 = *(void*)((int64_t)arg1 + 0x4c);
  *(void*)(this_ptr + 8) = *(void*)(arg1 + 8);
  *(void*)((int64_t)this_ptr + 0x44) = uVar2;
  *(void*)(this_ptr + 9) = uVar3;
  *(void*)((int64_t)this_ptr + 0x4c) = uVar4;
  *(void*)(this_ptr + 10) = *(void*)(arg1 + 10);
  *(void*)((int64_t)this_ptr + 0x54) = *(void*)((int64_t)arg1 + 0x54);
  *(void*)(this_ptr + 0xb) = *(void*)(arg1 + 0xb);
  *(void*)((int64_t)this_ptr + 0x59) = *(void*)((int64_t)arg1 + 0x59);
  FUN_008e8fb4();
  FUN_008ea352();
  FUN_008e8fb4();
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  FUN_008f4bca();
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0x71) = *(void*)(arg1 + 0x71);
  this_ptr[0x70] = arg1[0x70];
  uVar1 = arg1[0x6e];
  this_ptr[0x6f] = arg1[0x6f];
  this_ptr[0x6e] = uVar1;
  return;
}

