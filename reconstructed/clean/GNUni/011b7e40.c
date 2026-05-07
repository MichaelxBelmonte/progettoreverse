// Function: FUN_011b7e40
// Address: 011b7e40
// Size: 1940 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNInt"
//   "MUTagAttributeOptionType"
//   "_wikipediaPageId"
//   "_orderindex"
//   "_searchConfigIndex"
//   "_requiredOptions"
//   "MUTagAttributeOption"
//   "_usageCount"
//   "_subOptions"
//   "_superOption"
//   "_options"
//   "_requiredByOptions"
//   "MUTagAttributeOptionSubstitution"
//   "_instrumentTypeMask"
//   "MULoopInstrumentTypeMask"
//   "_spellings"
//   "_mainSpelling"
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


void FUN_011b7e40(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_01150e50();
  *this_ptr = &g_0260a060;
  FUN_011b88c0();
  FUN_011b89a0();
  FUN_011b8a80();
  this_ptr[0xb] = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b8b60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_superOption";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b8c50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_subOptions";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  this_ptr[0xd] = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b8d40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_options";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOptionType");
  }
  *(void*)(this_ptr + 0xe) = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x74) = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xf] = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b8e30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_requiredOptions";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  this_ptr[0x10] = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b8f20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_requiredByOptions";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  this_ptr[0x11] = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b9010();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b9100();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  *(void*)(this_ptr + 0x13) = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_011b91f0();
  FUN_011b92d0();
  FUN_011b93b0();
  this_ptr[0x17] = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b9490();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOptionSubstitution");
  }
  *(void*)(this_ptr + 0x18) = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x19] = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b9580();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_mainSpelling";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  this_ptr[0x1a] = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b9670();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_spellings";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  *(void*)(this_ptr + 0x1b) = 0;
  lVar2 = FUN_011b7780();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

