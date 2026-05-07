// Function: FUN_0117c2b0
// Address: 0117c2b0
// Size: 559 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "_didRequestCacheValidation"
//   "MUPartMapping"
//   "MUPartMapper"
//   "_noteMappingGroup"
//   "MUNoteMapping"
//   "_noteMappingGroups"
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


void FUN_0117c2b0(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  int64_t arg1;
  void*this_ptr;
  char *pcVar10;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_02605560;
  FUN_0117c5b0();
  this_ptr[8] = 0;
  lVar9 = FUN_0117bf90();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117c690();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_noteMappingGroup";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPartMapper");
  }
  this_ptr[9] = 0;
  lVar9 = FUN_0117bf90();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117c780();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_noteMappingGroup";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMapping");
  }
  this_ptr[10] = 0;
  lVar9 = FUN_0117bf90();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117c870();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_noteMappingGroups";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPartMapping");
  }
  FUN_0117c960();
  *(void*)(this_ptr + 0xc) = 0;
  lVar9 = FUN_0117bf90();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

