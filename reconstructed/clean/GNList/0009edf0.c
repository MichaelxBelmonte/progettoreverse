// Function: FUN_0009edf0
// Address: 0009edf0
// Size: 642 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_0009edf0(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t arg1;
  void*this_ptr;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  if ((*(int64_t *)(arg1 + 0x78) != 0) && (*(int64_t *)(arg1 + 0x90) != 0)) {
    FUN_006c5b60();
    FUN_006c5ea0();
    lVar1 = g_026d8e58;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
        lVar1 = g_026d8e58;
      }
    }
    else {
      local_40 = '\0';
    }
    g_026d8e58 = lVar1;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_30 = '\0';
    local_38 = lVar1;
    FUN_00ca0840(param_1,&local_38);
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_006c5b60();
  FUN_006c5ea0();
  lVar1 = g_026d8e60;
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
    lVar1 = g_026d8e60;
  }
  g_026d8e60 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_30 = '\0';
  local_38 = lVar1;
  FUN_00ca0840(param_1,&local_38);
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(arg1 + 0xd8);
  if (lVar1 != 0) {
    FUN_00d50b00();
    lVar2 = g_026d8e68;
    if (g_026d8e68 != 0) {
      FUN_00d50b00();
    }
    local_38 = lVar2;
    local_30 = '\0';
    FUN_00ca0840(param_1,&local_38);
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

