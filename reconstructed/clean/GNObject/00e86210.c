// Function: FUN_00e86210
// Address: 00e86210
// Size: 899 bytes
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


uint64_t FUN_00e86210(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t this_ptr;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0xb0) != 0) goto LAB_00e86231;
  lVar1 = *(int64_t *)(this_ptr + 0x18);
  if ((lVar1 != 0) && (*(int64_t *)(lVar1 + 0xb0) == 0)) {
    FUN_00e86210();
  }
  FUN_00d7e190();
  if (local_a8 == '\0') {
    if (local_b0 != 0) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) goto LAB_00e8629f;
LAB_00e862ed:
    local_98 = '\0';
    local_a0 = 0;
LAB_00e86303:
    local_50 = 0;
  }
  else {
    local_a8 = '\0';
    if (lVar1 == 0) goto LAB_00e862ed;
LAB_00e8629f:
    FUN_00d7e190();
    local_48 = 0;
    if (local_98 == '\0') {
      if (local_a0 != 0) {
        FUN_00d50b00();
        local_50 = local_a0;
        goto LAB_00e8631c;
      }
      goto LAB_00e86303;
    }
    local_50 = local_a0;
    local_98 = '\0';
  }
LAB_00e8631c:
  local_48 = '\x01';
  FUN_00c81410(*(void*)(this_ptr + 0x10),&local_50,*(void*)(this_ptr + 8));
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_b0 != 0) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  *(int64_t *)(this_ptr + 0xb0) = lVar1;
  if ((*(byte *)(this_ptr + 0xba) & 1) != 0) {
    FUN_00c83750();
  }
  for (lVar1 = *(int64_t *)(this_ptr + 0x20);
      (lVar1 != 0 && (*(int64_t *)(lVar1 + 8) == this_ptr)); lVar1 = *(int64_t *)(lVar1 + 0x38))
  {
    lVar2 = FUN_00e85330();
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00c808f0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  for (lVar1 = *(int64_t *)(this_ptr + 0x28);
      (lVar1 != 0 && (*(int64_t *)(lVar1 + 8) == this_ptr)); lVar1 = *(int64_t *)(lVar1 + 0x30))
  {
    lVar2 = FUN_00e85930();
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00c807f0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c811a0();
  for (lVar1 = *(int64_t *)(this_ptr + 0xa8); lVar1 != 0; lVar1 = *(int64_t *)(lVar1 + 8)) {
    FUN_00d7e190();
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00c822a0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_00e86231:
  return *(void*)(this_ptr + 0xb0);
}

