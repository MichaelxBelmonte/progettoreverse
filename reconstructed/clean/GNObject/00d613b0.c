// Function: FUN_00d613b0
// Address: 00d613b0
// Size: 617 bytes
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


void FUN_00d613b0(int param_1,int64_t param_2,char param_3,char param_4)

{
  int64_t *plVar1;
  char cVar2;
  int extraout_var;
  int extraout_var_00;
  char *pcVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_a8;
  char local_a0 [8];
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  char local_3c;
  char local_38 [8];
  
  if (param_1 == -1) {
    param_1 = *(int *)(*(int64_t *)((int64_t)*(int *)(param_2 + 0x24) + (int64_t)this_ptr) + 0xc
                      );
  }
  if ((param_4 == '\0') || (cVar2 = (**(code **)(*this_ptr + 0x1e0))(), cVar2 == '\0')) {
    local_3c = '\0';
  }
  else {
    local_98 = *arg1;
    local_90 = '\0';
    (**(code **)(*this_ptr + 0x160))(param_1,param_2);
    local_3c = '\x01';
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  local_88 = *arg1;
  local_80 = '\0';
  FUN_00d23370();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (param_3 != '\0') {
    FUN_00d77be0();
    pcVar3 = local_38;
    if (local_a0[0] != '\0') {
      pcVar3 = local_a0;
    }
    local_38[0] = local_a0[0];
    *pcVar3 = '\0';
    if ((local_a0[0] != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (local_a8 != 0) {
      FUN_00d77bd0();
      if (extraout_var < 2) {
        FUN_00d77bd0();
        if (extraout_var_00 == 1) {
          plVar1 = (int64_t *)*arg1;
          if (this_ptr != (int64_t *)0x0) {
            FUN_00e31530();
          }
          (**(code **)(*plVar1 + 0x200))(0,local_a8,local_3c);
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        plVar1 = (int64_t *)*arg1;
        if (this_ptr != (int64_t *)0x0) {
          FUN_00e31530();
        }
        (**(code **)(*plVar1 + 0x220))(0xffffffff,local_a8,0,local_3c);
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
    }
  }
  if (local_3c != '\0') {
    local_78 = *arg1;
    local_70 = '\0';
    (**(code **)(*this_ptr + 0x170))(param_1,param_2);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

