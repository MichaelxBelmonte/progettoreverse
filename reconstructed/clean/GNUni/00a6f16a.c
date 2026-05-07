// Function: FUN_00a6f16a
// Address: 00a6f16a
// Size: 964 bytes
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


void FUN_00a6f16a(uint64_t param_1,string *param_2)

{
  uint64_t uVar1;
  string *this;
  void*arg1;
  void*this_ptr;
  uint32_t uVar2;
  
  uVar1 = 0;
  *this_ptr = &g_02528e28;
  this_ptr[1] = &g_0252a720;
  *(void*)(this_ptr + 2) = 0xffffffff;
  this_ptr[3] = 0xffffffffffffffff;
  *(void*)(this_ptr + 4) = 0x101;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  this_ptr[0x15] = 0;
  this_ptr[0x16] = 0;
  this_ptr[0x17] = 0;
  this_ptr[0x19] = 0;
  this_ptr[0x1a] = 0;
  this_ptr[0x1b] = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xf] = 0;
  this_ptr[0x10] = 0;
  this_ptr[0x11] = 0;
  this_ptr[0x12] = 0;
  this_ptr[0x13] = 0;
  ___bzero();
  *(void*)((int64_t)this_ptr + 0x1c1) = 1;
  *(void*)((int64_t)this_ptr + 0x1c2) = 0;
  *(void*)((int64_t)this_ptr + 0x1c9) = 0;
  this = (string *)CONCAT62((int6)((uint64_t)uVar1 >> 0x10),0x101);
  *(void*)((int64_t)this_ptr + 0x1cd) = 0x101;
  *(void*)((int64_t)this_ptr + 0x1cf) = 0;
  *(void*)((int64_t)this_ptr + 0x1d3) = 0;
  *(void*)((int64_t)this_ptr + 0x1d5) = 1;
  *(void*)((int64_t)this_ptr + 0x1d6) = 0;
  *(void*)((int64_t)this_ptr + 0x1de) = 0;
  FUN_00aa9d7a();
  *(void*)(this_ptr + 5) = *(void*)(arg1 + 5);
  *(void*)((int64_t)this_ptr + 0x2c) = *(void*)((int64_t)arg1 + 0x2c);
  *(void*)(this_ptr + 6) = *(void*)(arg1 + 6);
  *(void*)((int64_t)this_ptr + 0x34) = *(void*)((int64_t)arg1 + 0x34);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 10) = *(void*)(arg1 + 10);
  uVar1 = *(void*)((int64_t)arg1 + 0x5c);
  *(void*)((int64_t)this_ptr + 0x54) = *(void*)((int64_t)arg1 + 0x54);
  *(void*)((int64_t)this_ptr + 0x5c) = uVar1;
  *(void*)((int64_t)this_ptr + 100) = *(void*)((int64_t)arg1 + 100);
  *(void*)(this_ptr + 0xd) = *(void*)(arg1 + 0xd);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0x14) = *(void*)(arg1 + 0x14);
  *(void*)((int64_t)this_ptr + 0xa4) = *(void*)((int64_t)arg1 + 0xa4);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0x18) = *(void*)(arg1 + 0x18);
  *(void*)((int64_t)this_ptr + 0xc1) = *(void*)((int64_t)arg1 + 0xc1);
  uVar2 = std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0x1c) = *(void*)(arg1 + 0x1c);
  if (this_ptr != arg1) {
    uVar2 = FUN_009bc850(uVar2,arg1[0x1e]);
    uVar2 = FUN_009bc850(uVar2,arg1[0x21]);
    uVar2 = FUN_009bc850(uVar2,arg1[0x24]);
    uVar2 = FUN_009bc850(uVar2,arg1[0x27]);
    uVar2 = FUN_009bc850(uVar2,arg1[0x2a]);
    uVar2 = FUN_009bc850(uVar2,arg1[0x2d]);
    uVar2 = FUN_009bc850(uVar2,arg1[0x30]);
    uVar2 = FUN_009bc850(uVar2,arg1[0x33]);
    FUN_009bc850(uVar2,arg1[0x36]);
  }
  *(void*)((int64_t)this_ptr + 0x1d7) = *(void*)((int64_t)arg1 + 0x1d7);
  this_ptr[0x3a] = arg1[0x3a];
  uVar1 = arg1[0x38];
  this_ptr[0x39] = arg1[0x39];
  this_ptr[0x38] = uVar1;
  return;
}

