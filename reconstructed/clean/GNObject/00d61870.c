// Function: FUN_00d61870
// Address: 00d61870
// Size: 934 bytes
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


void FUN_00d61870(char param_1,uint64_t param_2,char param_3)

{
  int64_t *plVar1;
  char cVar2;
  int extraout_var;
  uint64_t uVar3;
  char *pcVar4;
  void*arg1;
  int64_t *this_ptr;
  char cVar5;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*this_ptr + 0x210))();
  if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00e31530(), local_40[0] != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((param_3 == '\0') || (cVar2 = (**(code **)(*this_ptr + 0x1e0))(), cVar2 == '\0')) {
    cVar5 = '\0';
    cVar2 = '\0';
  }
  else {
    (**(code **)(*this_ptr + 0x168))();
    cVar5 = '\x01';
    cVar2 = '\x01';
  }
  if (param_1 != '\0') {
    FUN_00d77be0();
    pcVar4 = local_38;
    if (local_40[0] != '\0') {
      pcVar4 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    cVar2 = cVar5;
    if (local_48 != 0) {
      FUN_00d77be0();
      FUN_00d77bd0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (extraout_var < 2) {
        FUN_00d77be0();
        uVar3 = FUN_00d77bd0();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((uVar3 & 0xffffffff00000000) == 0x100000000) {
          plVar1 = (int64_t *)*arg1;
          FUN_00d77f60();
          local_60 = 0;
          if (local_40[0] == '\0') {
            if (local_48 != 0) {
              FUN_00e31530();
            }
          }
          else {
            local_40[0] = '\0';
          }
          local_60 = '\x01';
          local_68 = local_48;
          (**(code **)(*plVar1 + 0x1f0))(0,&local_68,cVar5);
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        plVar1 = (int64_t *)*arg1;
        FUN_00e31530();
        (**(code **)(*plVar1 + 0x228))(0,local_48,1);
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d23f50();
  if (cVar2 != '\0') {
    (**(code **)(*this_ptr + 0x178))();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}

