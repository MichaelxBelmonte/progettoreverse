// Function: FUN_00d6c3d0
// Address: 00d6c3d0
// Size: 796 bytes
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


void FUN_00d6c3d0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  int64_t *plVar7;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_50;
  char local_48;
  
  plVar7 = (int64_t *)FUN_00be9900();
  (**(code **)(*plVar7 + 0x18))();
  lVar1 = *arg1;
  lVar2 = plVar7[3];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar7[3] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  plVar7[4] = *(int64_t *)(*param_2 + 0x38);
  if (*arg1 != 0) {
    FUN_00d8c7a0();
    sVar6 = FUN_00d8cbc0();
    if ((sVar6 == 0x2f) || ((*arg1 != 0 && (sVar6 = FUN_00d8cbc0(), sVar6 == 0x3f)))) {
      plVar7[5] = *(int64_t *)(*param_2 + 0x38);
      *this_ptr = plVar7;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
  }
  bVar4 = true;
  do {
    FUN_00d6b9a0();
    if (local_88 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      break;
    }
    sVar6 = FUN_00d8cbc0();
    if (sVar6 == 0x2f) {
      FUN_00d6be80();
      FUN_00d6be80();
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      cVar5 = (**(code **)(*local_50 + 0x50))();
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') goto LAB_00d6c6b0;
      plVar7[5] = *(int64_t *)(*param_2 + 0x30);
      *(void*)(this_ptr + 1) = 0;
      if (!bVar4) {
        FUN_00d50b00();
      }
      *this_ptr = plVar7;
      *(void*)(this_ptr + 1) = 1;
      bVar4 = false;
      bVar3 = false;
    }
    else {
      FUN_00d6c3d0();
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_00d6c5bc;
        }
      }
      else if (local_50 != (int64_t *)0x0) {
LAB_00d6c5bc:
        local_48 = '\0';
        FUN_00d21140();
        bVar3 = true;
        FUN_00d50b20();
        goto joined_r0x00d6c6c2;
      }
LAB_00d6c6b0:
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      bVar3 = false;
    }
joined_r0x00d6c6c2:
    if (local_80 != '\0') {
      FUN_00d50b20();
    }
  } while (bVar3);
  if ((bVar4) && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

