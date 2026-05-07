// Function: FUN_00d07010
// Address: 00d07010
// Size: 614 bytes
// Class: GNList
// String references:
//   ") in %@"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_00d07010(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  void*puVar4;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar5;
  int64_t local_40;
  char local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025795a8;
  (*g_025795c0)();
  lVar1 = g_02772078;
  if (g_02772078 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8dbf0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = arg1[3];
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      do {
        lVar3 = g_027d64a0;
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
        if ((int)lVar5 != 0) {
          if (g_027d64a0 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8dbf0();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*plVar2 + 400))();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d8dbf0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_00083b20();
  }
  (**(code **)(*arg1 + 0x3e0))();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00d94d80();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

