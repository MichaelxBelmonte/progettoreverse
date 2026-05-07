// Function: FUN_001c36b0
// Address: 001c36b0
// Size: 3837 bytes
// Class: GNObject
// String references:
//   "bool"
//   "GNObject"
//   "GNQualifier"
//   "GNClassDescription"
//   "GNEditingContext"
//   "GNObjectProvider"
//   "GNView"
//   "GNSortOrdering"
//   "_lastSelectedRow"
//   "GNAssociation"
//   "_emtpySelectionAllowed"
//   "_autoselectNewObjects"
//   "_autoselectObjects"
//   "_autofetchEnabled"
//   "_fetchesOnDemand"
//   "GNMasterDetailAssoc"
//   "_selectionDidUpdateAssociations"
//   "_isAddingObjectsEnabled"
//   "_isRemovingObjectsEnabled"
//   "_revertsObjectsByKeepingGlobalIDs"
//   ... +6 more
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void FUN_001c36b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_00006550();
  *this_ptr = &g_0267f0d0;
  this_ptr[2] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c49e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  puVar4 = this_ptr + 3;
  this_ptr[3] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c4ad0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject",param_3,param_4,puVar4);
  }
  this_ptr[4] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c4bc0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  this_ptr[5] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c4cb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNAssociation");
  }
  this_ptr[6] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c4da0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNClassDescription");
  }
  *(void*)(this_ptr + 7) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x39) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3a) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_001c4e90();
  this_ptr[9] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5060();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNQualifier");
  }
  this_ptr[10] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5150();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNQualifier");
  }
  this_ptr[0xb] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5240();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNQualifier");
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5330();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingContext");
  }
  this_ptr[0xd] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5420();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSortOrdering");
  }
  *(void*)(this_ptr + 0xe) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xf] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5510();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObjectProvider");
  }
  *(void*)(this_ptr + 0x10) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x11] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5600();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMasterDetailAssoc");
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c56f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  *(void*)(this_ptr + 0x13) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x99) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x9a) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x9b) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x9c) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x14] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c57e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNGlobalID");
  }
  *(void*)(this_ptr + 0x15) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xac) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x16) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb4) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x17] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c58d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  return;
}

