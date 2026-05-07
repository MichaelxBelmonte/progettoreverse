// Function: FUN_01158640
// Address: 01158640
// Size: 2084 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "SInt64"
//   "_isLoaded"
//   "_contentSize"
//   "MULoop"
//   "MULoopProject"
//   "MULoopUser"
//   "_loopLibrary"
//   "MULoopWorkflowValue"
//   "MUTagSetDescription"
//   "MULoopProducer"
//   "MULoopMusician"
//   "MULoopWorkflowAspect"
//   "MULoopWorkflowState"
//   "MUTagAttributeOptionType"
//   "MULoopCollection"
//   "MULoopAsset"
//   "MULoopCoverRow"
//   "MUTrackSet"
//   ... +1 more
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


void FUN_01158640(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_01150e50();
  *this_ptr = &g_02614858;
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01159300();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  this_ptr[9] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011593f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagSetDescription");
  }
  this_ptr[10] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011594e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopProducer");
  }
  this_ptr[0xb] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011595d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopUser");
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011596c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopMusician");
  }
  this_ptr[0xd] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011597b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopProject");
  }
  this_ptr[0xe] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011598a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopWorkflowAspect");
  }
  this_ptr[0xf] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01159990();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopWorkflowState");
  }
  this_ptr[0x10] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01159a80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopWorkflowValue");
  }
  this_ptr[0x11] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01159b70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOptionType");
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01159c60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopCollection");
  }
  this_ptr[0x13] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01159d50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopAsset");
  }
  this_ptr[0x14] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01159e40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopCoverRow");
  }
  this_ptr[0x15] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01159f30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_library";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrackSet");
  }
  this_ptr[0x16] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0115a020();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  FUN_0115a110();
  this_ptr[0x18] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0115a1f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopUser");
  }
  FUN_0115a2e0();
  FUN_0115a3c0();
  FUN_0115a4a0();
  FUN_0115a580();
  FUN_0115a660();
  FUN_0115a740();
  this_ptr[0x1f] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

