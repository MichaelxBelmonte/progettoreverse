// Function: FUN_00975848
// Address: 00975848
// Size: 1038 bytes
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


void FUN_00975848(uint32_t param_1,void *param_2,void*param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  void*arg1;
  void*this_ptr;
  byte local_90;
  uint64_t local_78;
  int64_t *local_70;
  void*local_68;
  void*local_60;
  void*local_58;
  void*local_50;
  uint64_t local_48;
  int64_t *local_40;
  uint32_t local_38;
  
  *this_ptr = &g_02520590;
  this_ptr[9] = 0;
  this_ptr[10] = 0;
  this_ptr[1] = 0;
  this_ptr[2] = 0;
  this_ptr[3] = 0;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  *(void*)(this_ptr + 8) = 0;
  this_ptr[0xb] = &g_0251c5a8;
  this_ptr[0xc] = 0;
  this_ptr[0xd] = 0;
  this_ptr[0xe] = 0;
  *(void*)(this_ptr + 0xf) = 0;
  *(void*)((int64_t)this_ptr + 0xb4) = 0;
  *(void*)((int64_t)this_ptr + 0xac) = 0;
  *(void*)((int64_t)this_ptr + 0xa4) = 0;
  *(void*)((int64_t)this_ptr + 0x9c) = 0;
  *(void*)((int64_t)this_ptr + 0x94) = 0;
  *(void*)((int64_t)this_ptr + 0x8c) = 0;
  *(void*)((int64_t)this_ptr + 0x84) = 0;
  *(void*)((int64_t)this_ptr + 0x7c) = 0;
  this_ptr[0x17] = 0xffffffffffffffff;
  *(void*)((int64_t)this_ptr + 0xdc) = 0;
  this_ptr[0x18] = 0;
  this_ptr[0x19] = 0;
  this_ptr[0x1a] = 0;
  *(void*)(this_ptr + 0x1b) = 0;
  this_ptr[0x1c] = &g_0251c338;
  this_ptr[0x1d] = 0;
  this_ptr[0x1e] = 0;
  this_ptr[0x1f] = 0;
  this_ptr[0x20] = 0;
  this_ptr[0x21] = 0;
  this_ptr[0x22] = 0;
  *(void*)(this_ptr + 0x23) = 0;
  this_ptr[0x24] = 0;
  this_ptr[0x25] = 0;
  this_ptr[0x26] = 0;
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
  *(void*)(this_ptr + 0x31) = 0;
  this_ptr[0x3c] = 0;
  this_ptr[0x3b] = 0;
  this_ptr[0x3a] = 0;
  this_ptr[0x39] = 0;
  this_ptr[0x38] = 0;
  this_ptr[0x37] = 0;
  this_ptr[0x36] = 0;
  this_ptr[0x35] = 0;
  this_ptr[0x34] = 0;
  this_ptr[0x33] = 0;
  this_ptr[0x32] = 0;
  *(void*)(this_ptr + 0x3d) = 1;
  *(void*)((int64_t)this_ptr + 500) = 0;
  this_ptr[0x3f] = 0;
  this_ptr[0x40] = 0;
  this_ptr[0x41] = 0;
  this_ptr[0x42] = 0;
  this_ptr[0x43] = &g_0251c3a0;
  this_ptr[0x4a] = 0;
  this_ptr[0x49] = 0;
  this_ptr[0x48] = 0;
  this_ptr[0x47] = 0;
  this_ptr[0x46] = 0;
  this_ptr[0x45] = 0;
  this_ptr[0x44] = 0;
  this_ptr[0x4b] = 0x100000001;
  this_ptr[0x50] = 0;
  this_ptr[0x4f] = 0;
  this_ptr[0x4e] = 0;
  this_ptr[0x4d] = 0;
  this_ptr[0x4c] = 0;
  *(void*)(this_ptr + 0x51) = 1;
  *(void*)((int64_t)this_ptr + 0x28a) = 0;
  *(void*)((int64_t)this_ptr + 0x28b) = 0x1010101;
  *(void*)((int64_t)this_ptr + 0x28f) = 0;
  *(void*)((int64_t)this_ptr + 0x291) = 0;
  *(void*)((int64_t)this_ptr + 0x2c7) = 0;
  this_ptr[0x58] = 0;
  this_ptr[0x57] = 0;
  this_ptr[0x56] = 0;
  this_ptr[0x55] = 0;
  this_ptr[0x54] = 0;
  this_ptr[0x53] = 0;
  *(void*)((int64_t)this_ptr + 0x2cf) = 0x100010000010001;
  *(void*)((int64_t)this_ptr + 0x2d7) = 0;
  *(void*)(this_ptr + 0x3e) = 0;
  this_ptr[0x60] = 0;
  this_ptr[0x5f] = 0;
  this_ptr[0x5e] = 0;
  local_48 = *arg1;
  local_40 = (int64_t *)arg1[1];
  if (local_40 != (int64_t *)0x0) {
    LOCK();
    local_40[1] = local_40[1] + 1;
    UNLOCK();
  }
  local_78 = *param_3;
  plVar3 = (int64_t *)param_3[1];
  if (plVar3 != (int64_t *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  local_68 = this_ptr + 1;
  local_60 = this_ptr + 3;
  local_58 = this_ptr + 9;
  local_50 = this_ptr + 0xb;
  local_70 = plVar3;
  local_38 = param_1;
  FUN_00975c9c(param_2,&local_48,param_1,&local_78);
  if ((local_90 & 1) != 0) {
    operator_delete(param_2);
  }
  if (plVar3 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_40 != (int64_t *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar2 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_40 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

