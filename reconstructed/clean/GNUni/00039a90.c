// Function: FUN_00039a90
// Address: 00039a90
// Size: 4091 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNList"
//   "GNObject"
//   "GNRunLoopObserverDelegate"
//   "GNUndoManager"
//   "GNAccessRightManager"
//   "_autovalidationDisableLevel"
//   "GNRunLoopObserver"
//   "_runLoopObserverDidLockModel"
//   "GNCoalescedPropertyObserverNotificationStore"
//   "_knownRegisteredPropertyObserverRegistrationsCount"
//   "_delayedObserverRegistrationsChangesRequired"
//   "GNPropertyObserverRegistration"
//   "_propertyObservationDisableLevel"
//   "_hasObserverRegistrations"
//   "_registersMethodInvocationsForObjectChanges"
//   "_lockModelInMainthreadCounter"
//   "_lockModelInBackgroundthreadCounter"
//   "_isPostingChangeNotifications"
//   ... +11 more
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


void FUN_00039a90(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0257f798;
  FUN_000392d0();
  this_ptr[3] = &g_02582380;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02569280;
  this_ptr[3] = &g_025697c0;
  FUN_0003b160();
  FUN_0003b240();
  FUN_0003b320();
  FUN_0003b400();
  this_ptr[8] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003b4e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNUndoManager");
  }
  this_ptr[9] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003b5d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNString");
  }
  this_ptr[10] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003b6c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNAccessRightManager");
  }
  FUN_0003b7b0();
  *(void*)(this_ptr + 0xc) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xd] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003b890();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNRunLoopObserver");
  }
  *(void*)(this_ptr + 0xe) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xf] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003b980();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  this_ptr[0x10] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003ba70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDictionary");
  }
  this_ptr[0x11] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003bb60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNCoalescedPropertyObserverNotificationStore");
  }
  FUN_0003bc50();
  FUN_0003bd30();
  this_ptr[0x14] = *(void*)(arg1 + 0xa0);
  *(void*)(this_ptr + 0x15) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xac) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x16] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003be10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNPropertyObserverRegistration");
  }
  this_ptr[0x17] = *(void*)(arg1 + 0xb8);
  this_ptr[0x18] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003bf00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNRecursiveLock");
  }
  FUN_0003bff0();
  *(void*)(this_ptr + 0x1a) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x1b] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003c0d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNRecursiveLock");
  }
  *(void*)(this_ptr + 0x1c) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xe1) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xe4) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1d) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_0003c1c0();
  FUN_0003c2a0();
  *(void*)(this_ptr + 0x20) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_0003c380();
  this_ptr[0x22] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003c460();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNError");
  }
  this_ptr[0x23] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003c550();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNString");
  }
  this_ptr[0x24] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003c640();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_editingContext";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingSyncServer");
  }
  this_ptr[0x25] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003c730();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_editingContext";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingSyncClient");
  }
  this_ptr[0x26] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003c820();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingChangeSet");
  }
  *(void*)(this_ptr + 0x27) = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x28] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003c910();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingContextReadCopySyncObserver");
  }
  this_ptr[0x29] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003ca50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNRecursiveLock");
  }
  this_ptr[0x2a] = *(void*)(arg1 + 0x150);
  this_ptr[0x2b] = 0;
  lVar2 = FUN_000390b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0003cb40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNList");
  }
  return;
}

