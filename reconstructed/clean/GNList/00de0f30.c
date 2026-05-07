// Function: FUN_00de0f30
// Address: 00de0f30
// Size: 552 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00de0f30(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  void*puVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  void*local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  (**(code **)(*arg1 + 0x3d0))();
  lVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    (**(code **)(*arg1 + 0x3d0))();
    lVar1 = local_50;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_40 = lVar1;
    local_38 = '\0';
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*arg1 + 0x3e0))();
  lVar1 = local_50;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_40 = lVar1;
  local_38 = '\0';
  FUN_00d214d0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = *param_2;
  local_68 = '\0';
  local_58 = '\0';
  local_60 = puVar2;
  (**(code **)(*arg1 + 0x3d8))(&local_60,&local_70,0);
  lVar1 = local_40;
  *(void*)(this_ptr + 1) = 0;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      *this_ptr = 0;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

