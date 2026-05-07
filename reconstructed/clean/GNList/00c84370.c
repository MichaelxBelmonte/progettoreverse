// Function: FUN_00c84370
// Address: 00c84370
// Size: 695 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_00c84370(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar4;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  int local_48;
  uint64_t local_44;
  int64_t *local_38;
  
  local_38 = param_2;
  if (*(char *)(arg1 + 0x49) == '\0') {
    lVar1 = *(int64_t *)(arg1 + 0x30);
    if (lVar1 != 0) {
      local_58 = '\0';
      local_60 = (int64_t *)0x0;
      local_44 = 0;
      lVar4 = 0;
      local_50 = lVar1;
      while (local_48 = (int)lVar4, local_48 < *(int *)(lVar1 + 0xc)) {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar4 * 8);
        local_60 = plVar2;
        FUN_00d74120();
        if (local_a8 == 0) {
          cVar3 = '\0';
        }
        else {
          FUN_00d74120();
          local_70 = *local_38;
          local_68 = '\0';
          cVar3 = (**(code **)(*local_98 + 0x50))();
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
        if (cVar3 != '\0') {
          *(void*)(this_ptr + 1) = 0;
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          *this_ptr = plVar2;
          *(void*)(this_ptr + 1) = 1;
          FUN_00559a70();
          return this_ptr;
        }
      }
      FUN_00559a70();
    }
    FUN_00c80a40();
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_00c845de;
      }
    }
    else if (local_60 != (int64_t *)0x0) {
LAB_00c845de:
      local_b8 = *local_38;
      local_b0 = 0;
      FUN_00c84370(param_1,&local_b8);
      FUN_00d50b20();
      return this_ptr;
    }
  }
  else {
    if (*(int64_t *)(arg1 + 0x90) == 0) {
      FUN_00c83bf0();
    }
    local_80 = *local_38;
    local_78 = '\0';
    FUN_00c84100(param_1,&local_80);
    plVar2 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
         (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x370))();
      if (cVar3 != '\0') {
        *this_ptr = plVar2;
        *(void*)(this_ptr + 1) = 1;
        return this_ptr;
      }
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      FUN_00d50b20();
      return this_ptr;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

