// Function: FUN_000493b0
// Address: 000493b0
// Size: 1047 bytes
// Class: GNObject
// String references:
//   "bool"
//   "GNObject"
//   "GNHashedDictionary"
//   "GNClassDescription"
//   "GNKeyValueArchiverDelegate"
//   "_encodesGlobalIDsOfReferredObjects"
//   "_reflectsOwnerTree"
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


void FUN_000493b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_00025ab0();
  *this_ptr = &g_02570f00;
  puVar4 = this_ptr + 5;
  this_ptr[5] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000499d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject",param_3,param_4,puVar4);
  }
  this_ptr[6] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00049ac0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNHashedDictionary");
  }
  this_ptr[7] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00049bb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNClassDescription");
  }
  FUN_00049ca0();
  FUN_00049d80();
  this_ptr[10] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00049e60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  this_ptr[0xb] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00049f50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNKeyValueArchiverDelegate");
  }
  *(void*)(this_ptr + 0xc) = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004a090();
    FUN_00e87980();
  }
  FUN_0004a200();
  *(void*)(this_ptr + 0xe) = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x71) = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xf] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004a2e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  FUN_0004a3d0();
  FUN_0004a4b0();
  return;
}

