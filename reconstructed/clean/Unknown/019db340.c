// Function: FUN_019db340
// Address: 019db340
// Size: 532 bytes
// Class: Unknown

void FUN_019db340(uint64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *this_ptr;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  int64_t *local_48;
  char local_40;
  uint64_t local_38;
  
  lVar1 = this_ptr[0x7a];
  local_50 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
    if (this_ptr[0x7a] != 0) {
      this_ptr[0x7a] = 0;
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(lVar1 + 0x10);
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      plVar4 = (int64_t *)0x0;
      uVar3 = 0;
      do {
        local_60 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
        local_58 = '\0';
        (**(code **)(*this_ptr + 0xab0))(param_1,&local_60);
        plVar2 = local_48;
        if (local_48 == plVar4) {
          plVar2 = plVar4;
          if (((char)uVar3 == '\0') && (local_48 != (int64_t *)0x0)) {
            if (local_40 != '\0') goto LAB_019db423;
            FUN_00d50b00();
LAB_019db490:
            uVar3 = 1;
            plVar2 = plVar4;
          }
joined_r0x019db4f4:
          plVar4 = plVar2;
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_40 == '\0') {
            local_38 = uVar3;
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            uVar3 = 1;
            if (((char)local_38 != '\0') && (plVar4 != (int64_t *)0x0)) {
              FUN_00d50b20();
              plVar4 = plVar2;
              goto LAB_019db490;
            }
            goto joined_r0x019db4f4;
          }
          if (((char)uVar3 != '\0') && (plVar4 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_019db423:
          local_40 = '\0';
          uVar3 = 1;
          plVar4 = plVar2;
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (plVar4 != (int64_t *)0x0) {
          FUN_0198a800();
          (**(code **)(*plVar4 + 0x620))();
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(lVar1 + 0xc));
      goto LAB_019db4fe;
    }
  }
  uVar3 = 0;
  plVar4 = (int64_t *)0x0;
LAB_019db4fe:
  lVar5 = local_50;
  FUN_00ca1340();
  lVar1 = this_ptr[0x7a];
  if (lVar1 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0x7a] = lVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (((char)uVar3 != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return;
}

