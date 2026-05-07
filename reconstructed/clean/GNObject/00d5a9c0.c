// Function: FUN_00d5a9c0
// Address: 00d5a9c0
// Size: 574 bytes
// Class: GNObject
// String references:
//   "Cannot set scalar for key %@ directly. Property is not an attribute"
//   "Cannot set scalar for key %@ directly. Type mismatch."
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


void FUN_00d5a9c0(int64_t *param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t *this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint32_t local_54;
  int64_t *local_50;
  uint local_48;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x360))();
  FUN_00e86210();
  local_88 = *param_1;
  local_80 = '\0';
  FUN_00c841b0(local_88,&local_88);
  plVar2 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00e31530();
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar2 + 0x368))();
  lVar1 = g_0277ddb0;
  if (cVar3 == '\0') {
    local_54 = param_2;
    if (g_0277ddb0 != 0) {
      FUN_00e31530();
    }
    local_78 = lVar1;
    local_70 = '\x01';
    lVar1 = *param_1;
    local_48 = 1;
    local_50 = &g_024c5048;
    local_38 = 0;
    if (lVar1 != 0) {
      FUN_00e31530();
    }
    local_38 = '\x01';
    local_40 = lVar1;
    FUN_00cc7b40();
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    param_2 = local_54;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_0277ddb0;
  if (*(char *)(plVar2[0xc] + 0x19) != (char)param_2) {
    if (g_0277ddb0 != 0) {
      FUN_00e31530();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    lVar1 = *param_1;
    local_48 = 1;
    local_50 = &g_024c5048;
    if (lVar1 != 0) {
      FUN_00e31530();
    }
    local_38 = '\x01';
    local_40 = lVar1;
    FUN_00cc7b40();
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x208))(1,plVar2);
  FUN_00d50b20();
  return;
}

