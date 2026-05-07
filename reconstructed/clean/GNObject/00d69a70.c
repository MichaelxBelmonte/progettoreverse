// Function: FUN_00d69a70
// Address: 00d69a70
// Size: 795 bytes
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


int64_t * FUN_00d69a70(void)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar3;
  int64_t lVar4;
  int64_t local_98;
  char local_90;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  if (*(int *)(arg1[3] + 0xc) != 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  (**(code **)(*arg1 + 0x3d8))();
  if (local_90 == '\0') {
    if (local_98 == 0) goto LAB_00d69ceb;
    FUN_00d50b00();
LAB_00d69afb:
    if (*(int *)(local_98 + 0xc) < 1) {
      bVar2 = false;
      lVar3 = 0;
    }
    else {
      lVar4 = 0;
      lVar3 = 0;
      bVar2 = false;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(local_98 + 0x10) + lVar4 * 8);
        if (lVar3 == 0) {
          (**(code **)(*plVar1 + 0x3c8))();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_00c6f510();
          if (local_58 == 0) {
            lVar3 = 0;
          }
          else {
            lVar3 = local_58;
            if (local_50 == '\0') {
              FUN_00d50b00();
              bVar2 = true;
            }
            else {
              local_50 = '\0';
              bVar2 = true;
            }
          }
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          (**(code **)(*plVar1 + 0x3c8))();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_58 = local_48;
          local_50 = '\0';
          FUN_00d7ad40();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(local_98 + 0xc));
    }
    FUN_00c6f7c0();
    FUN_00d50b20();
  }
  else {
    if (local_98 != 0) goto LAB_00d69afb;
LAB_00d69ceb:
    lVar3 = 0;
    bVar2 = false;
  }
  lVar4 = arg1[4];
  if (lVar4 != lVar3) {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    arg1[4] = lVar3;
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar4 = arg1[4];
      *(void*)(this_ptr + 1) = 0;
      goto joined_r0x00d69d69;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  lVar4 = lVar3;
joined_r0x00d69d69:
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar4;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar2) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

