// Function: FUN_00ccf1e0
// Address: 00ccf1e0
// Size: 716 bytes
// Class: GNBCFA

int64_t * FUN_00ccf1e0(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  bool bVar2;
  uint64_t uVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t local_78;
  char local_70;
  int64_t local_48;
  char local_40;
  
  lVar1 = g_02704060;
  if (param_2 == 0) {
    *(void*)(this_ptr + 1) = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    lVar1 = *(int64_t *)(*(int64_t *)(*arg1 + 0x20) + 0x10);
    lVar6 = (uint64_t)(param_2 - 1) * 0x23c;
    uVar3 = 0;
    do {
      uVar5 = uVar3;
      if (*(short *)(lVar1 + lVar6 + 0x24 + uVar5 * 2) == 0) break;
      uVar3 = uVar5 + 1;
    } while (uVar5 < 0x100);
    if ((int)(uVar5 + 1) == 1) {
      FUN_00d8ede0();
    }
    else {
      FUN_00d920f0(param_1,uVar5);
    }
    if (local_48 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    iVar4 = *(int *)(lVar1 + 0x20 + lVar6);
    while (lVar1 = g_02704060, iVar4 != 0) {
      lVar1 = *(int64_t *)(*(int64_t *)(*arg1 + 0x20) + 0x10);
      lVar6 = (uint64_t)(iVar4 - 1) * 0x23c;
      uVar3 = 0;
      do {
        uVar5 = uVar3;
        if (*(short *)(lVar1 + lVar6 + 0x24 + uVar5 * 2) == 0) break;
        uVar3 = uVar5 + 1;
      } while (uVar5 < 0x100);
      if ((int)(uVar5 + 1) == 1) {
        FUN_00d8ede0();
      }
      else {
        FUN_00d920f0(*(int64_t *)(*arg1 + 0x20),uVar5);
      }
      FUN_00d8ef00();
      if ((bVar2) || (local_48 == 0)) {
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (local_40 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
      }
      else {
        local_40 = '\0';
        bVar2 = true;
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      iVar4 = *(int *)(lVar1 + 0x20 + lVar6);
    }
    if (g_02704060 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8ef00();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((bVar2) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}

