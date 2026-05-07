// Function: FUN_0115f970
// Address: 0115f970
// Size: 769 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "_collection"
//   "_source"
//   "MULoop"
//   "MULoopLibrary"
//   "_collections"
//   "_showInSearch"
//   "MULoopCollectionAsset"
//   "MULoopCollectionRelation"
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


void FUN_0115f970(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_01150e50();
  *this_ptr = &g_025bfd80;
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  lVar2 = FUN_0115f4e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0115fe40();
    FUN_00e87980();
  }
  FUN_0115ffb0();
  FUN_01160090();
  FUN_01160170();
  this_ptr[0xb] = 0;
  lVar2 = FUN_0115f4e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01160250();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  FUN_01160340();
  FUN_01160420();
  FUN_01160500();
  FUN_011605e0();
  FUN_011606c0();
  *(void*)(this_ptr + 0x11) = 0;
  lVar2 = FUN_0115f4e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_0115f4e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011607a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_collection";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopCollectionAsset");
  }
  this_ptr[0x13] = 0;
  lVar2 = FUN_0115f4e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01160890();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_source";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopCollectionRelation");
  }
  this_ptr[0x14] = 0;
  lVar2 = FUN_0115f4e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01160980();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_collections";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopLibrary");
  }
  return;
}

