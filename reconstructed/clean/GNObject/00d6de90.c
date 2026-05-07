// Function: FUN_00d6de90
// Address: 00d6de90
// Size: 784 bytes
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


void FUN_00d6de90(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00055590();
  (**(code **)(*plVar4 + 0x18))();
  lVar1 = *arg1;
  lVar2 = plVar4[2];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar4[2] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3c0))();
  plVar5 = (int64_t *)plVar4[6];
  plVar7 = plVar5;
  if (plVar5 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar7 = (int64_t *)0x0;
        goto LAB_00d6df1a;
      }
      FUN_00d50b00();
      plVar5 = (int64_t *)plVar4[6];
      plVar4[6] = (int64_t)local_40;
      plVar7 = local_40;
    }
    else {
      local_38 = '\0';
      plVar7 = local_40;
LAB_00d6df1a:
      plVar4[6] = (int64_t)plVar7;
    }
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar7 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d6e310();
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00d6e047;
    }
  }
  else if (local_40 != (int64_t *)0x0) goto LAB_00d6e047;
  FUN_00d6ebd0();
  plVar7 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d6ebd0();
    if ((local_88 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
    }
    FUN_00d6e310();
    if ((local_40 != (int64_t *)0x0) && (plVar5 = local_40, local_38 == '\0')) {
      FUN_00d50b00();
    }
    if (local_90 != 0) {
      FUN_00d50b20();
    }
  }
LAB_00d6e047:
  if (plVar5 == (int64_t *)0x0) {
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar5 + 0x18))();
  }
  plVar7 = (int64_t *)plVar4[3];
  if (plVar7 != plVar5) {
    FUN_00d50b00();
    plVar4[3] = (int64_t)plVar5;
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02578b00;
  (*g_02578b18)();
  puVar3 = (void*)plVar4[4];
  if (puVar3 == puVar6) {
    FUN_00d50b20();
  }
  else {
    plVar4[4] = (int64_t)puVar6;
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  local_60 = g_0277e5d8;
  if (g_0277e5d8 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  local_48 = '\0';
  local_50 = plVar4;
  FUN_00d41430(&local_50,&local_60);
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return;
}

