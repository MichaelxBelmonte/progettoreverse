// Function: FUN_01153590
// Address: 01153590
// Size: 5423 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "SInt64"
//   "GNInt"
//   "MULibraryFile"
//   "MULoop"
//   "_isPlaceholder"
//   "_loopId"
//   "MUTagSet"
//   "MULoopRelation"
//   "_sourceLoop"
//   "_destinationLoop"
//   "MULoopProject"
//   "_loops"
//   "MULoopUser"
//   "MULoopProducerCommit"
//   "MULoopMusicianContract"
//   "_grooveReferenceIsNone"
//   "_prelistenAccompanyIsNone"
//   "_prelistenDrumsIsNone"
//   ... +22 more
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


void FUN_01153590(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_01150e50();
  *this_ptr = &g_026043c0;
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_01155230();
  FUN_01155310();
  this_ptr[0xb] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011553f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagSet");
  }
  *(void*)(this_ptr + 0xc) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011554e0();
    FUN_00e87980();
  }
  puVar4 = this_ptr + 0xd;
  this_ptr[0xd] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01155740();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULibraryFile",param_3,param_4,puVar4);
  }
  this_ptr[0xe] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01155830();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_sourceLoop";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopRelation");
  }
  this_ptr[0xf] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01155920();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_destinationLoop";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopRelation");
  }
  this_ptr[0x10] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01155a10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  this_ptr[0x11] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01155b00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01155bf0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  this_ptr[0x13] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01155ce0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  this_ptr[0x14] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01155dd0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  this_ptr[0x15] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01155ec0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  this_ptr[0x16] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01155fb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loops";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopProject");
  }
  this_ptr[0x17] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011560a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loops";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopUser");
  }
  this_ptr[0x18] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156190();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loops";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopProducerCommit");
  }
  this_ptr[0x19] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156280();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopMusicianContract");
  }
  this_ptr[0x1a] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156370();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopUser");
  }
  this_ptr[0x1b] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156460();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopUser");
  }
  this_ptr[0x1c] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156550();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopUser");
  }
  *(void*)(this_ptr + 0x1d) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xe9) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xea) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xeb) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xec) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1e) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156640();
    FUN_00e87980();
  }
  this_ptr[0x1f] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011567b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loops";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopLibrary");
  }
  this_ptr[0x20] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011568a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loop";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopWorkflowValue");
  }
  this_ptr[0x21] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156990();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopWorkflowValue");
  }
  this_ptr[0x22] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156a80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loop";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopComponent");
  }
  *(void*)(this_ptr + 0x23) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x11c) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156b70();
    FUN_00e87980();
  }
  this_ptr[0x24] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156cf0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_layerLoops";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  this_ptr[0x25] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156de0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_layers";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  *(void*)(this_ptr + 0x26) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x27] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156ed0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loops";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopSet");
  }
  FUN_01156fc0();
  FUN_011570a0();
  *(void*)(this_ptr + 0x2a) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01157180();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x154) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x2b) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x15c) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x15d) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x15e) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x2c) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_011572f0();
  FUN_011573d0();
  *(void*)(this_ptr + 0x2f) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

