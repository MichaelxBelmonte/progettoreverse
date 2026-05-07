// Function: FUN_01cc98b0
// Address: 01cc98b0
// Size: 597 bytes
// Class: GNDictionary

int64_t * FUN_01cc98b0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t uVar5;
  char *pcVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  uint64_t local_40;
  char local_38 [8];
  
  lVar4 = *(int64_t *)(arg1 + 0x10);
  if ((*(int *)(lVar4 + 0xc) == 0) && (*(int64_t *)(arg1 + 0x38) != 0)) {
    FUN_00ca1380();
    pcVar6 = local_38;
    if (local_50[0] != '\0') {
      pcVar6 = local_50;
    }
    local_38[0] = local_50[0];
    *pcVar6 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_50[0] = '\0';
    FUN_00d243f0();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    lVar4 = *(int64_t *)(arg1 + 0x10);
  }
  if (*(int *)(lVar4 + 0xc) < 1) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    lVar7 = 0;
    local_48 = 0;
    local_40 = 0;
    do {
      lVar4 = *(int64_t *)(lVar4 + 0x10);
      lVar1 = *(int64_t *)(lVar4 + lVar7 * 8);
      if (local_48 == lVar1) {
        if (((char)local_40 == '\0') && (local_48 != 0)) {
          local_40 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          lVar4 = FUN_00d50b00();
        }
        if (((char)local_40 == '\0') || (local_48 == 0)) {
          local_40 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
          local_48 = lVar1;
        }
        else {
          local_48 = lVar1;
          uVar5 = FUN_00d50b20();
          local_40 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        }
      }
      if (*(int64_t *)(local_48 + 0x18) != 0) {
        FUN_00d50b00();
        plVar2 = *(int64_t **)(local_48 + 0x18);
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*plVar2 + 0x50))();
        FUN_00d50b20();
        FUN_00d50b20();
        lVar4 = local_48;
        if (cVar3 != '\0') {
          *(void*)(this_ptr + 1) = 0;
          if ((char)local_40 != '\0') {
            *this_ptr = local_48;
            *(void*)(this_ptr + 1) = 1;
            return this_ptr;
          }
          FUN_00d50b00();
          *this_ptr = lVar4;
          *(void*)(this_ptr + 1) = 1;
          return this_ptr;
        }
      }
      lVar7 = lVar7 + 1;
      lVar4 = *(int64_t *)(arg1 + 0x10);
    } while (lVar7 < *(int *)(lVar4 + 0xc));
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    if ((char)local_40 != '\0') {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}

