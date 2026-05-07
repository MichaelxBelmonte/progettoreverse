// Function: FUN_0117af60
// Address: 0117af60
// Size: 1432 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MUNote"
//   "GNInt"
//   "MUPartMapping"
//   "MUNoteMappingGroup"
//   "MUNoteMapping"
//   "_sourcePitchIndexCache"
//   "_noteMappings"
//   "MUNoteMappingLine"
//   "_masterMapping"
//   "_slaveMappings"
//   "_noteDirectionMask"
//   "MUNoteDirectionMask"
//   "_picksNextChord"
//   "_isExcludedFromVoicing"
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


void FUN_0117af60(void)

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
  *this_ptr = &g_02604e60;
  *(void*)(this_ptr + 7) = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117b610();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNote");
  }
  this_ptr[9] = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117b700();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_noteMappings";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPartMapping");
  }
  this_ptr[10] = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117b7f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_noteMappings";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMappingGroup");
  }
  this_ptr[0xb] = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117b8e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_noteMappings";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMappingLine");
  }
  this_ptr[0xc] = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117b9d0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_slaveMappings";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMapping");
  }
  this_ptr[0xd] = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117bac0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_masterMapping";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMapping");
  }
  *(void*)(this_ptr + 0xe) = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117bbb0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x74) = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xf) = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117bd20();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x7c) = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x7d) = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x10] = 0;
  lVar9 = FUN_0117ac20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0117bea0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMapping");
  }
  return;
}

