// Function: FUN_00a9cfcc
// Address: 00a9cfcc
// Size: 699 bytes
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


void FUN_00a9cfcc(uint64_t param_1,string *param_2)

{
  uint64_t uVar1;
  string *this;
  void*arg1;
  void*this_ptr;
  uint32_t uVar2;
  
  *this_ptr = &g_0252a1c8;
  this_ptr[1] = &g_0252a720;
  *(void*)(this_ptr + 2) = 0xffffffff;
  this_ptr[3] = 0xffffffffffffffff;
  *(void*)(this_ptr + 4) = 0x101;
  this_ptr[0x12] = 0;
  this_ptr[0x13] = 0;
  this_ptr[0x14] = 0;
  this = (string *)(this_ptr + 0x23);
  this_ptr[0xb] = 0;
  this_ptr[0xc] = 0;
  this_ptr[0xd] = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xf] = 0;
  this_ptr[0x10] = 0;
  this_ptr[0x17] = 0;
  this_ptr[0x18] = 0;
  this_ptr[0x19] = 0;
  this_ptr[0x1a] = 0;
  this_ptr[0x1b] = 0;
  this_ptr[0x1c] = 0;
  this_ptr[0x1d] = 0;
  this_ptr[0x1e] = 0;
  this_ptr[0x1f] = 0;
  this_ptr[0x20] = 0;
  this_ptr[0x21] = 0;
  this_ptr[0x22] = 0;
  this_ptr[0x23] = 0;
  this_ptr[0x24] = 0;
  this_ptr[0x25] = 0;
  *(void*)(this_ptr + 0x26) = 0;
  *(void*)((int64_t)this_ptr + 0x131) = 1;
  *(void*)((int64_t)this_ptr + 0x132) = 0;
  *(void*)((int64_t)this_ptr + 0x13a) = 0;
  *(void**)((int64_t)this_ptr + 0x13e) = &g_01000101;
  *(void*)((int64_t)this_ptr + 0x146) = 0x101;
  *(void*)((int64_t)this_ptr + 0x14a) = 0;
  FUN_00aa9d7a();
  *(void*)(this_ptr + 5) = *(void*)(arg1 + 5);
  *(void*)((int64_t)this_ptr + 0x2c) = *(void*)((int64_t)arg1 + 0x2c);
  *(void*)(this_ptr + 6) = *(void*)(arg1 + 6);
  *(void*)((int64_t)this_ptr + 0x31) = *(void*)((int64_t)arg1 + 0x31);
  *(void*)((int64_t)this_ptr + 0x32) = *(void*)((int64_t)arg1 + 0x32);
  *(void*)((int64_t)this_ptr + 0x34) = *(void*)((int64_t)arg1 + 0x34);
  *(void*)(this_ptr + 7) = *(void*)(arg1 + 7);
  *(void*)((int64_t)this_ptr + 0x3c) = *(void*)((int64_t)arg1 + 0x3c);
  *(void*)(this_ptr + 8) = *(void*)(arg1 + 8);
  *(void*)((int64_t)this_ptr + 0x44) = *(void*)((int64_t)arg1 + 0x44);
  *(void*)(this_ptr + 9) = *(void*)(arg1 + 9);
  *(void*)((int64_t)this_ptr + 0x4c) = *(void*)((int64_t)arg1 + 0x4c);
  *(void*)(this_ptr + 10) = *(void*)(arg1 + 10);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0x11) = *(void*)(arg1 + 0x11);
  std::string::operator=(this,param_2);
  uVar1 = arg1[0x16];
  this_ptr[0x15] = arg1[0x15];
  this_ptr[0x16] = uVar1;
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  uVar2 = std::string::operator=(this,param_2);
  if (this_ptr != arg1) {
    uVar2 = FUN_009bc850(uVar2,arg1[0x21]);
    FUN_009bc850(uVar2,arg1[0x24]);
  }
  *(void*)((int64_t)this_ptr + 0x147) = *(void*)((int64_t)arg1 + 0x147);
  this_ptr[0x28] = arg1[0x28];
  uVar1 = arg1[0x26];
  this_ptr[0x27] = arg1[0x27];
  this_ptr[0x26] = uVar1;
  return;
}

