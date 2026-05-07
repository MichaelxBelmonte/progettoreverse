// Function: FUN_00e86820
// Address: 00e86820
// Size: 534 bytes
// Class: GNObject
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


void FUN_00e86820(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  void*puVar4;
  int iVar5;
  int iVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  iVar3 = FUN_00d8c7a0();
  if (0 < iVar3) {
    iVar5 = 0;
    do {
      cVar2 = FUN_00d99d20();
      iVar6 = iVar5;
      if (cVar2 == '\0') break;
      iVar5 = iVar5 + 1;
      iVar6 = iVar3;
    } while (iVar3 != iVar5);
    if (iVar6 == 1) {
      FUN_00d9a140();
      return;
    }
    if (iVar6 != 0) {
      if (iVar6 == iVar3) {
        FUN_00d99300();
        return;
      }
      FUN_00d99ce0();
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_025795a8;
      (*g_025795c0)();
      FUN_00d97ce0();
      FUN_00d99300();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d8dbf0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d8f140();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d8dbf0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d8c7d0();
      *this_ptr = (int64_t)puVar4;
      goto LAB_00e86a1f;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  lVar1 = *arg1;
  if ((char)arg1[1] != '\0') {
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(arg1 + 1) = 0;
    return;
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar1;
LAB_00e86a1f:
  *(void*)(this_ptr + 1) = 1;
  return;
}

