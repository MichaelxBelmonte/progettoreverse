// Function: FUN_00d76d10
// Address: 00d76d10
// Size: 831 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_00d76d10(void)

{
  void*puVar1;
  int64_t arg1;
  void*this_ptr;
  int iVar2;
  int64_t local_a8;
  char local_a0;
  int64_t local_88;
  char local_80;
  int64_t local_40;
  char local_38;
  
  FUN_00d744f0();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (local_88 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    puVar1 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar1 = &g_02572358;
    (*g_02572370)();
    FUN_00d744f0();
    if (arg1 != 0) {
      FUN_00d50b00();
    }
    FUN_00c850b0();
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    if (arg1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_88 == 0) {
      *this_ptr = puVar1;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      FUN_00d744f0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00c85760();
      if ((local_80 == '\0') && (local_88 != 0)) {
        FUN_00d50b00();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_88 != 0) {
        if (0 < *(int *)(local_88 + 0xc)) {
          iVar2 = 0;
          do {
            FUN_00d74120();
            if (local_a0 == '\0') {
              if (local_a8 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_a0 = '\0';
            }
            FUN_00d21140();
            if (local_a8 != 0) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(local_88 + 0xc));
        }
        FUN_00559a70();
        FUN_00d50b20();
      }
      *this_ptr = puVar1;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
    }
  }
  return this_ptr;
}

