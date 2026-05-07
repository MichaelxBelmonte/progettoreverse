// Function: FUN_001f8d00
// Address: 001f8d00
// Size: 3614 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNFormatter"
//   "_isEditable"
//   "GNTextField"
//   "_isBordered"
//   "GNTextView"
//   "GNTextViewDelegate"
//   "GNMultipleValuePresenter"
//   "_dragAndEditEnabled"
//   "_isEditingByDragging"
//   "_isEditing"
//   "GNTextFieldArrows"
//   "_isSendingActionsWhileTyping"
//   "_isValidatingWhileTyping"
//   "_isAccpectingInvalidValuesWhenFinishingEditing"
//   "_isFinishing"
//   "_isRelativeEditingEnabled"
//   "_isSelectable"
//   "_maskCharacters"
//   ... +4 more
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


void FUN_001f8d00(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_000f62d0();
  this_ptr[0x39] = &g_0269d6b8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_0269c118;
  this_ptr[2] = &g_0269cc70;
  this_ptr[0x39] = &g_0269ccb0;
  this_ptr[0x3a] = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001f9e00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFormatter");
  }
  this_ptr[0x3b] = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001f9ef0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMultipleValuePresenter");
  }
  *(void*)(this_ptr + 0x3c) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1e1) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1e2) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1e3) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x3d] = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001f9fe0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField");
  }
  puVar4 = this_ptr + 0x3e;
  this_ptr[0x3e] = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001fa0d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField",param_3,param_4,puVar4);
  }
  this_ptr[0x3f] = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001fa1c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextFieldArrows");
  }
  this_ptr[0x40] = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001fa2b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextView");
  }
  *(void*)(this_ptr + 0x41) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x209) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x20a) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x20b) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x20c) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_001fa3a0();
  FUN_001fa480();
  *(void*)(this_ptr + 0x44) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x221) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x222) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x223) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x224) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_001fa650();
  *(void*)(this_ptr + 0x46) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x231) = 0;
  lVar2 = FUN_001f8a30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_001fa730();
  return;
}

