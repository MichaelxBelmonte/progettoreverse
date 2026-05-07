// Function: FUN_00d590b0
// Address: 00d590b0
// Size: 640 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d590b0(uint64_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar2 = g_02774da0;
  if (g_02774da0 != 0) {
    FUN_00e31530(param_1,0);
  }
  local_90 = lVar2;
  local_88 = '\x01';
  FUN_00d99b10(param_1,&local_90);
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00e31530(param_1,0);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_02774da0;
  if (g_02774da0 != 0) {
    FUN_00e31530(param_1,0);
  }
  local_80 = lVar2;
  local_78 = '\x01';
  FUN_00d99be0(param_1,&local_80);
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00e31530(param_1,0);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) {
    if (this_ptr == (int64_t *)0x0) {
      this_ptr = (int64_t *)0x0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      FUN_00e31530(param_1,0);
    }
  }
  else {
    local_70 = plVar3;
    local_68 = '\0';
    (**(code **)(*this_ptr + 0x98))(param_1,&local_70);
    this_ptr = local_40;
    if (local_40 == (int64_t *)0x0) {
      bVar1 = false;
      this_ptr = (int64_t *)0x0;
    }
    else if (local_38 == '\0') {
      FUN_00e31530(param_1,0);
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_60 = *arg1;
  local_58 = '\0';
  local_50 = plVar4;
  local_48 = '\0';
  (**(code **)(*this_ptr + 200))(param_1,&local_50);
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (bVar1) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

