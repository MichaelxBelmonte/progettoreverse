// Function: FUN_00d58c40
// Address: 00d58c40
// Size: 654 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d58c40(uint64_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t *local_58;
  char local_50;
  uint32_t local_44;
  int64_t *local_40;
  char local_38;
  
  lVar2 = g_02774da0;
  local_44 = (uint32_t)param_1;
  if (g_02774da0 != 0) {
    FUN_00e31530(param_1,0);
  }
  FUN_00d99b10();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00e31530(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_02774da0;
  if (g_02774da0 != 0) {
    FUN_00e31530();
  }
  FUN_00d99be0();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00e31530(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) {
    if (this_ptr == (int64_t *)0x0) {
      this_ptr = (int64_t *)0x0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      FUN_00e31530();
    }
  }
  else {
    (**(code **)(*this_ptr + 0x98))();
    this_ptr = local_40;
    if (local_40 == (int64_t *)0x0) {
      bVar1 = false;
      this_ptr = (int64_t *)0x0;
    }
    else if (local_38 == '\0') {
      FUN_00e31530();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
  }
  local_58 = plVar4;
  local_50 = '\0';
  (**(code **)(*this_ptr + 0xc0))(local_44,&local_58);
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
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

