// Function: FUN_00e85930
// Address: 00e85930
// Size: 875 bytes
// Class: GNObject
// String references:
//   "GNObject"
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


void* FUN_00e85930(void)

{
  byte bVar1;
  void*puVar2;
  int64_t this_ptr;
  int64_t local_70;
  int64_t local_40;
  int64_t local_30;
  char local_28;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_000276d0();
  *puVar2 = &g_025783f8;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  *(void*)((int64_t)puVar2 + 0x5b) = 0;
  *(void*)((int64_t)puVar2 + 99) = 0;
  (*g_02578410)();
  FUN_00d7e190();
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  FUN_00d73b40();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d73c80();
  *(void*)((int64_t)puVar2 + 0x24) = *(void*)(this_ptr + 0x10);
  bVar1 = *(byte *)(this_ptr + 0x18);
  if ((bVar1 & 8) == 0) {
    if ((bVar1 & 0x20) == 0) {
      FUN_00d76d00();
    }
    else {
      FUN_00d76d00();
    }
  }
  else if ((bVar1 & 0x20) == 0) {
    FUN_00d76d00();
  }
  else {
    FUN_00d76d00();
  }
  FUN_00d77e00();
  FUN_00d77e20();
  if ((char)*(byte *)(this_ptr + 0x18) < '\0') {
    FUN_00d7e190();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_00d76cb0();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((*(byte *)(this_ptr + 0x18) & 0x40) == 0) {
      if (*(int64_t *)(this_ptr + 0x20) != 0) goto LAB_00e85ada;
LAB_00e85b09:
      local_28 = '\0';
      local_30 = 0;
LAB_00e85b19:
      local_40 = 0;
    }
    else {
      if ((*(int64_t *)(this_ptr + 0x20) == 0) ||
         (*(int64_t *)(*(int64_t *)(this_ptr + 0x20) + 8) == 0)) goto LAB_00e85b09;
LAB_00e85ada:
      FUN_00d7e190();
      if (local_28 == '\0') {
        if (local_30 == 0) goto LAB_00e85b19;
        FUN_00d50b00();
        local_40 = local_30;
      }
      else {
        local_40 = local_30;
        local_28 = '\0';
      }
    }
    FUN_00d76cb0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  if (((*(byte *)(this_ptr + 0x18) & 0x40) == 0) || (*(int64_t *)(this_ptr + 0x20) == 0)) {
    local_28 = '\0';
    local_30 = 0;
  }
  else {
    FUN_00d7e190();
    if (local_28 != '\0') {
      local_70 = local_30;
      local_28 = '\0';
      goto LAB_00e85c2c;
    }
    if (local_30 != 0) {
      FUN_00d50b00();
      local_70 = local_30;
      goto LAB_00e85c2c;
    }
  }
  local_70 = 0;
LAB_00e85c2c:
  FUN_00d76bf0();
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  puVar2[0xe] = this_ptr;
  *(void**)(this_ptr + 0x28) = puVar2;
  return puVar2;
}

