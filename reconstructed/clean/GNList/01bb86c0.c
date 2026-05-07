// Function: FUN_01bb86c0
// Address: 01bb86c0
// Size: 707 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01bb86c0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  FUN_01a13070();
  lVar2 = local_48;
  lVar1 = *arg1;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != lVar2) {
    if (*(int64_t *)(this_ptr + 0xc0) != 0) {
      FUN_00d403d0();
      FUN_00d50b00();
      local_b8 = g_027ebc60;
      if (g_027ebc60 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x958))();
      local_68 = local_38;
      local_60 = 0;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_60 = '\x01';
      FUN_00d41040(&local_68,&local_b8);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    local_a8 = *arg1;
    local_a0 = '\0';
    FUN_01a13040();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0xc0) != 0) {
      FUN_00d403d0();
      FUN_00d50b00();
      local_98 = g_027ebc60;
      if (g_027ebc60 != 0) {
        FUN_00d50b00();
      }
      local_90 = '\x01';
      (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x958))();
      local_58 = local_38;
      local_50 = 0;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_50 = '\x01';
      FUN_00d41430(&local_58,&local_98);
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

