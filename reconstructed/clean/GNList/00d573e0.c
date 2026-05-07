// Function: FUN_00d573e0
// Address: 00d573e0
// Size: 717 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d573e0(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  void*puVar2;
  char cVar3;
  uint8_t uVar4;
  char *pcVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_90;
  char local_88;
  void*local_58;
  uint local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_38;
  
  local_e0 = *param_2;
  local_d8 = '\0';
  (**(code **)(*this_ptr + 0x108))(param_1,&local_e0);
  puVar2 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (void*)0x0) {
      FUN_00e31530();
      if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (puVar2 == (void*)0x0) {
    pcVar5 = "";
  }
  else {
    pcVar5 = (char *)FUN_00d8b910();
  }
  FUN_00e31530();
  local_48 = *arg1;
  local_50 = 2;
  local_58 = &g_024c5048;
  local_40 = 0;
  if (local_48 != 0) {
    FUN_00e31530();
  }
  local_40 = '\x01';
  local_58 = (void*)&g_025df2a0;
  local_38 = (uint32_t)param_1;
  FUN_00d3af80(&g_0277e4c6,pcVar5,&local_58);
  plVar1 = local_90;
  if (local_88 == '\0') {
    if (((local_90 != (int64_t *)0x0) && (FUN_00e31530(), local_88 != '\0')) &&
       (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_88 = '\0';
  }
  local_58 = &g_024c5048;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar1 + 0x368))();
  if (cVar3 == '\0') {
    local_d0 = *arg1;
    local_c8 = '\0';
    local_c0 = *param_2;
    local_b8 = '\0';
    local_a8 = '\0';
    local_b0 = local_c0;
    uVar4 = (**(code **)(*this_ptr + 0x1d0))();
    (**(code **)(*this_ptr + 0x238))(param_1 & 0xffffffff,&local_c0,uVar4);
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

