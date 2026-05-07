// Function: FUN_00e4ad10
// Address: 00e4ad10
// Size: 1396 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00e4ad10(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int local_58;
  int64_t local_48;
  char local_40;
  
  cVar3 = FUN_00d24b50();
  lVar1 = *arg1;
  if (*(char *)(this_ptr + 0x2c) == '\0') {
    FUN_00d4efa0();
    FUN_00c7e7b0();
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_00e48e90();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_00daab70();
    lVar1 = *arg1;
    lVar2 = arg1[1];
    if (((char)lVar2 == '\0') || (lVar1 == 0)) {
      if (lVar1 == 0) {
        return;
      }
    }
    else {
      FUN_00d50b00();
    }
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar4 = 0;
      if (cVar3 == '\0') {
        do {
          if (*(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar4 * 8) == 0) {
            FUN_00daab70();
          }
          else {
            FUN_00e3a1c0();
            FUN_00e3a2a0();
            FUN_00daab70();
          }
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
      }
      else {
        do {
          if (*(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar4 * 8) == 0) {
            FUN_00daab70();
          }
          else {
            FUN_00e3a1c0();
            FUN_00e3a1c0();
            FUN_00e38fb0();
            FUN_00e3a2a0();
            FUN_00daab70();
          }
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
      }
    }
    FUN_00083b20();
    if ((char)lVar2 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = arg1[1];
    if ((char)lVar2 != '\0') {
      FUN_00d50b00();
    }
    local_58 = -1;
    if (cVar3 == '\0') {
      while( true ) {
        lVar4 = (int64_t)local_58;
        local_58 = local_58 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_58) break;
        lVar4 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
        if (lVar4 != 0) {
          local_40 = '\0';
          FUN_00e3a1c0();
          local_48 = lVar4;
        }
      }
    }
    else {
      while( true ) {
        lVar4 = (int64_t)local_58;
        local_58 = local_58 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_58) break;
        lVar4 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
        if (lVar4 != 0) {
          FUN_00e3a1c0();
          FUN_00e3a1c0();
          local_40 = '\0';
          FUN_00e38fb0();
          local_48 = lVar4;
        }
      }
    }
    FUN_00083b20();
    FUN_00d4efa0();
    FUN_00c7e7b0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_00e3a1c0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((char)lVar2 != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}

