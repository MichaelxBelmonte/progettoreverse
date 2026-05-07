// Function: FUN_01deae10
// Address: 01deae10
// Size: 514 bytes
// Class: GNTableColumnAssoc

uint64_t FUN_01deae10(void)

{
  int iVar1;
  int64_t lVar2;
  bool bVar3;
  void*puVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t *arg1;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  
  lVar6 = g_02800140;
  if (*arg1 != 0) {
    if (g_02800140 != 0) {
      FUN_00d50b00();
    }
    FUN_01ccaae0();
    local_40 = local_50;
    if (local_50 == 0) {
      bVar3 = true;
      local_40 = 0;
    }
    else if (local_48 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
    }
    else {
      local_48 = '\0';
      bVar3 = false;
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      if (3 < *(int *)(*arg1 + 0x18)) {
        lVar6 = 0;
        do {
          FUN_01d25cb0();
          lVar2 = *(int64_t *)
                   (*(int64_t *)(local_50 + 0x10) +
                   (int64_t)*(int *)(*(int64_t *)(*arg1 + 0x10) + lVar6 * 4) * 8);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          lVar6 = lVar6 + 1;
          iVar1 = *(int *)(*arg1 + 0x18);
          iVar5 = iVar1 + 3;
          if (-1 < iVar1) {
            iVar5 = iVar1;
          }
        } while (lVar6 < iVar5 >> 2);
      }
      FUN_01d2ec10();
      if (puVar4 != (void*)0x0) {
        FUN_00d50b20();
      }
      uVar7 = CONCAT71((int7)((uint64_t)lVar6 >> 8),1);
      if (!bVar3) {
        FUN_00d50b20();
      }
      goto LAB_01deb00e;
    }
  }
  uVar7 = 0;
LAB_01deb00e:
  return uVar7 & 0xffffffff;
}

