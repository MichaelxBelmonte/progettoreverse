// Function: FUN_00d57ab0
// Address: 00d57ab0
// Size: 663 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d57ab0(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  void*puVar2;
  char cVar3;
  uint8_t uVar4;
  char *pcVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_88;
  char local_80;
  void*local_50;
  uint local_48;
  int64_t local_40;
  char local_38;
  
  local_d8 = *param_2;
  local_d0 = '\0';
  (**(code **)(*this_ptr + 0x100))(param_1,&local_d8);
  puVar2 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (void*)0x0) {
      FUN_00e31530();
      if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (puVar2 == (void*)0x0) {
    pcVar5 = "";
  }
  else {
    pcVar5 = (char *)FUN_00d8b910();
  }
  FUN_00e31530();
  local_40 = *arg1;
  local_48 = 1;
  local_50 = &g_024c5048;
  local_38 = 0;
  if (local_40 != 0) {
    FUN_00e31530();
  }
  local_38 = '\x01';
  FUN_00d3af80(&g_026dc63a,pcVar5,&local_50);
  plVar1 = local_88;
  if (local_80 == '\0') {
    if (((local_88 != (int64_t *)0x0) && (FUN_00e31530(), local_80 != '\0')) &&
       (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80 = '\0';
  }
  local_50 = &g_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar1 + 0x368))();
  if (cVar3 == '\0') {
    local_c8 = *arg1;
    local_c0 = '\0';
    local_b8 = *param_2;
    local_b0 = '\0';
    local_a0 = '\0';
    local_a8 = local_b8;
    uVar4 = (**(code **)(*this_ptr + 0x1d0))();
    (**(code **)(*this_ptr + 0x230))(uVar4,&local_b8);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

