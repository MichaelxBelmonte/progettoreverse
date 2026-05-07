// Function: FUN_00026600
// Address: 00026600
// Size: 955 bytes
// Class: GNObject
// String references:
//   "bool"
//   "GNObject"
//   "_state"
//   "GNTypedStream"
//   "_coding"
//   "_isSecureSaveEnabled"
//   "GNInt"
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


void FUN_00026600(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_00025ab0();
  *this_ptr = &g_025668e0;
  FUN_00026ba0();
  FUN_00026c80();
  this_ptr[7] = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00026d60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  this_ptr[8] = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00026e50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  FUN_00026f40();
  *(void*)(this_ptr + 10) = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  puVar4 = this_ptr + 0xb;
  this_ptr[0xb] = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00027020();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject",param_3,param_4,puVar4);
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00027110();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream");
  }
  *(void*)(this_ptr + 0xd) = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x69) = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

