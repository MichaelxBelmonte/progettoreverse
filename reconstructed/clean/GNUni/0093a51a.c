// Function: FUN_0093a51a
// Address: 0093a51a
// Size: 546 bytes
// Class: GNUni
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "convertCountLimitFromIlok1ToPublic was passed a bad userdata at address (0x%16X)"
//   "static petpub::CountLimitRecord pace::AuthorizationVerifier::convertCountLimitFromIlok1ToPublic(con...
//   "convertCountLimitFromIlok1ToPublic was passed userdata with the wrong SpecialFeatureBits (0x%02X)"
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


void FUN_0093a51a(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;
  int64_t arg1;
  void*this_ptr;
  bool bVar4;
  
  *this_ptr = &g_0251c140;
  *(void*)(this_ptr + 1) = 0;
  this_ptr[2] = 0;
  this_ptr[3] = 0;
  this_ptr[4] = 0;
  *(void*)(this_ptr + 5) = 0;
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  *(void*)((int64_t)this_ptr + 0x32) = 0;
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  *(void*)((int64_t)this_ptr + 0x53) = 0;
  *(void*)((int64_t)this_ptr + 0x57) = 1;
  *(void*)((int64_t)this_ptr + 0x59) = 0;
  if (arg1 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("static petpub::CountLimitRecord pace::AuthorizationVerifier::convertCountLimitFromIlok1ToPublic(const uint8_t *, bool, uint32_t, int32_t)"
                 ,&g_00002b4b);
    FUN_009bd14b();
  }
  if ((*(byte *)(arg1 + 7) & 1) == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("static petpub::CountLimitRecord pace::AuthorizationVerifier::convertCountLimitFromIlok1ToPublic(const uint8_t *, bool, uint32_t, int32_t)"
                 ,&g_00002b52);
    FUN_009bd14b();
  }
  *(void*)(this_ptr + 1) = 0x80000000;
  if (param_1 != -1) {
    uVar3 = this_ptr[3] - this_ptr[2];
    if (uVar3 < 4) {
      FUN_0088d550();
    }
    else if (uVar3 != 4) {
      this_ptr[3] = this_ptr[2] + 4;
    }
    FUN_009740dc();
  }
  *(void*)(this_ptr + 5) = 1;
  iVar1 = FUN_0097413b();
  *(int *)((int64_t)this_ptr + 0x2c) = iVar1;
  if ((*(byte *)(arg1 + 7) & 4) == 0) {
    *(void*)(this_ptr + 6) = 0xffffffff;
    *(void*)(this_ptr + 9) = 1;
    bVar4 = false;
  }
  else {
    uVar2 = FUN_0097413b();
    *(uint *)(this_ptr + 6) = uVar2 >> 8;
    iVar1 = *(int *)((int64_t)this_ptr + 0x2c);
    bVar4 = *(char *)(this_ptr + 9) == '\0';
  }
  *(void*)((int64_t)this_ptr + 0x34) = 2;
  *(void*)(this_ptr + 7) = 0;
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  *(void*)((int64_t)this_ptr + 0x49) = 0;
  *(byte *)((int64_t)this_ptr + 0x4a) = (iVar1 != 0 | param_2) & bVar4;
  return;
}

