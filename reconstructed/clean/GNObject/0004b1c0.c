// Function: FUN_0004b1c0
// Address: 0004b1c0
// Size: 1082 bytes
// Class: GNObject
// String references:
//   "bool"
//   "GNObject"
//   "GNHashedDictionary"
//   "_predictedDecodedValuesIndex"
//   "GNKeyValueUnarchiverDelegate"
//   "GNEditingContext"
//   "_reflectsOwnerTree"
//   "_awakesObjectsAfterDecodig"
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


void FUN_0004b1c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_00025ab0();
  *this_ptr = &g_02571d38;
  FUN_0004b7d0();
  this_ptr[6] = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004b8b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  this_ptr[7] = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004b9a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNHashedDictionary");
  }
  this_ptr[8] = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004ba90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  FUN_0004bb80();
  this_ptr[10] = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004bc60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNKeyValueUnarchiverDelegate");
  }
  *(void*)(this_ptr + 0xb) = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_0004bda0();
  puVar4 = this_ptr + 0xd;
  this_ptr[0xd] = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004be80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingContext",param_3,param_4,puVar4);
  }
  FUN_0004bf70();
  *(void*)(this_ptr + 0xf) = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x7c) = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_0004c050();
  return;
}

