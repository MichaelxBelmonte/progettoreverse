// Function: FUN_00b713e0
// Address: 00b713e0
// Size: 678 bytes
// Class: Unknown

void FUN_00b713e0(int64_t *param_1,void*param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  lVar4 = *(int64_t *)(arg1 + 0x30);
  do {
    if (*(int *)(lVar4 + 0xc) == 0) {
      FUN_00b71320();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_00b71480;
        }
      }
      else if (local_40 != 0) {
LAB_00b71480:
        lVar4 = *(int64_t *)(arg1 + 0x30);
        uVar6 = FUN_00b5b3a0();
        if (local_58 == '\0') {
          if (local_60 != 0) {
            uVar6 = FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_40 = local_60;
        FUN_00d214d0(uVar6,*(void*)(lVar4 + 0xc));
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        uVar6 = FUN_00b5beb0();
        *(void*)(arg1 + 0x38) = uVar6;
        if (*(int64_t *)(arg1 + 0x40) != 0) {
          *(void*)(arg1 + 0x40) = 0;
          FUN_00d50b20();
        }
        FUN_00b5c000();
        lVar4 = *(int64_t *)(arg1 + 0x40);
        if (lVar4 != local_60) {
          if (local_60 == 0) {
            *(void*)(arg1 + 0x40) = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = *(int64_t *)(arg1 + 0x40);
            *(int64_t *)(arg1 + 0x40) = local_60;
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
        }
        local_38 = '\0';
        if (*(int64_t *)(arg1 + 0x40) != 0) {
          *(void*)(arg1 + 0x40) = 0;
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      lVar4 = *(int64_t *)(arg1 + 0x30);
      if (*(int *)(lVar4 + 0xc) == 0) {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        return;
      }
    }
  } while (*(int *)(lVar4 + 0xc) < 1);
  lVar4 = **(int64_t **)(lVar4 + 0x10);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    FUN_00d50b00();
    lVar5 = lVar4;
  }
  FUN_00d23620();
  if (param_2 != (void*)0x0) {
    *param_2 = *(void*)(arg1 + 0x38);
  }
  if (param_1 != (int64_t *)0x0) {
    lVar1 = *(int64_t *)(arg1 + 0x40);
    lVar2 = *param_1;
    lVar3 = param_1[1];
    if (lVar2 == lVar1) {
      if (((char)lVar3 != '\0') || (lVar1 == 0)) goto LAB_00b71658;
      FUN_00d50b00();
    }
    else {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *param_1 = lVar1;
      if (((char)lVar3 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(param_1 + 1) = 1;
  }
LAB_00b71658:
  *(void*)(this_ptr + 1) = 0;
  if ((lVar4 == 0) && (lVar5 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = lVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

