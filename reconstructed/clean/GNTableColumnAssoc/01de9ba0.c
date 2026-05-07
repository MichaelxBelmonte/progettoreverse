// Function: FUN_01de9ba0
// Address: 01de9ba0
// Size: 731 bytes
// Class: GNTableColumnAssoc

void FUN_01de9ba0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t this_ptr;
  int64_t lVar4;
  int64_t *local_40;
  char local_38;
  
  FUN_01ccad60();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((*(char *)(this_ptr + 0x59) == '\0') && ((param_2 & 4) != 0)) {
    (**(code **)(*local_40 + 0x920))();
  }
  lVar4 = g_02800140;
  if (g_02800140 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 == (int64_t *)0x0) || ((param_2 & 2) == 0)) {
LAB_01de9e5b:
    if (local_40 == (int64_t *)0x0) goto LAB_01de9e6c;
  }
  else {
    cVar2 = FUN_01d26970();
    if (cVar2 != '\0') {
      FUN_01d25cb0();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      (**(code **)(*local_40 + 0x3f8))();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if (0 < *(int *)((int64_t)local_40 + 0xc)) {
        lVar4 = 0;
        do {
          lVar1 = *(int64_t *)(local_40[2] + lVar4 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          cVar2 = FUN_00d24090();
          if (cVar2 == '\0') {
            cVar2 = FUN_01dd3250();
            if (cVar2 != '\0') {
              FUN_01dd4720();
            }
          }
          else {
            cVar2 = FUN_01dd3250();
            if (cVar2 == '\0') {
              FUN_01dd3d20();
            }
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)((int64_t)local_40 + 0xc));
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_01de9e5b;
    }
    iVar3 = FUN_01d26e20();
    if (iVar3 == -1) {
      FUN_01dd4c60();
    }
    else {
      FUN_01dd3d20();
    }
  }
  FUN_00d50b20();
LAB_01de9e6c:
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

