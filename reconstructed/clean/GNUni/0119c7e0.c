// Function: FUN_0119c7e0
// Address: 0119c7e0
// Size: 909 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNFraction"
//   "MUTempoRegion"
//   "MUQuarterTimeline"
//   "MUBarTimeline"
//   "_quartersPerAnchor"
//   "MUQuarterAnchor"
//   "_isUndefinedAtStart"
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


void FUN_0119c7e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  char *pcVar10;
  int64_t arg1;
  void*this_ptr;
  void*puVar11;
  
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
  *this_ptr = &g_025fa1b8;
  *(void*)(this_ptr + 7) = 0;
  lVar9 = FUN_0119c4c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0119ccf0();
    FUN_00e87980();
  }
  FUN_0119ce60();
  FUN_0119cf40();
  this_ptr[10] = 0;
  lVar9 = FUN_0119c4c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0119d020();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUQuarterTimeline");
  }
  puVar11 = this_ptr + 0xb;
  this_ptr[0xb] = 0;
  lVar9 = FUN_0119c4c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0119d110();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUBarTimeline",param_3,param_4,puVar11);
  }
  this_ptr[0xc] = 0;
  lVar9 = FUN_0119c4c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0119d200();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTempoRegion");
  }
  this_ptr[0xd] = 0x100000000;
  lVar9 = FUN_0119c4c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_0119d2f0();
  this_ptr[0xf] = 0;
  lVar9 = FUN_0119c4c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0119d3d0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUQuarterAnchor");
  }
  *(void*)(this_ptr + 0x10) = 0;
  lVar9 = FUN_0119c4c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_0119d4c0();
  return;
}

