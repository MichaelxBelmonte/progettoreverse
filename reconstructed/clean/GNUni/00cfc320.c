// Function: FUN_00cfc320
// Address: 00cfc320
// Size: 818 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "_connected"
//   "GNHost"
//   "_socketFD"
//   "GNSocketT"
//   "_listening"
//   "_userAbort"
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


void FUN_00cfc320(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int iVar4;
  int64_t lVar5;
  char *pcVar6;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00cfc6e0();
  *this_ptr = &g_0257d0a8;
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  lVar5 = FUN_00cfc0a0();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  uVar1 = *(void*)(arg1 + 0x1c);
  uVar2 = *(void*)(arg1 + 0x20);
  uVar3 = *(void*)(arg1 + 0x24);
  *(void*)(this_ptr + 3) = *(void*)(arg1 + 0x18);
  *(void*)((int64_t)this_ptr + 0x1c) = uVar1;
  *(void*)(this_ptr + 4) = uVar2;
  *(void*)((int64_t)this_ptr + 0x24) = uVar3;
  this_ptr[5] = 0;
  lVar5 = FUN_00cfc0a0();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    FUN_00cfce30();
    iVar4 = FUN_00e7ddf0();
    pcVar6 = "GNUni";
    if (iVar4 == 0) {
      pcVar6 = (char *)0x0;
    }
    FUN_00e879c0(pcVar6,"GNHost");
  }
  *(void*)(this_ptr + 6) = 0;
  lVar5 = FUN_00cfc0a0();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x31) = 0;
  lVar5 = FUN_00cfc0a0();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x32) = 0;
  lVar5 = FUN_00cfc0a0();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

