// Function: FUN_00064b50
// Address: 00064b50
// Size: 713 bytes
// Class: GNObject
// String references:
//   "bool"
//   "GNObject"
//   "_state"
//   "GNTypedStream"
//   "GNClassDescription"
//   "_decoding"
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


void FUN_00064b50(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_00025ab0();
  *this_ptr = &g_0257a838;
  this_ptr[5] = 0;
  lVar2 = FUN_000647b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00064f90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  this_ptr[6] = 0;
  lVar2 = FUN_000647b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00065080();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNClassDescription");
  }
  *(void*)(this_ptr + 7) = 0;
  lVar2 = FUN_000647b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  lVar2 = FUN_000647b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00065170();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream");
  }
  *(void*)(this_ptr + 9) = 0;
  lVar2 = FUN_000647b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_00065260();
  FUN_00065340();
  FUN_00065420();
  return;
}

