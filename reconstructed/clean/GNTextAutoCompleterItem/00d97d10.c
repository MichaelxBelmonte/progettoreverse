// Function: FUN_00d97d10
// Address: 00d97d10
// Size: 522 bytes
// Class: GNTextAutoCompleterItem

int64_t * FUN_00d97d10(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint64_t uVar7;
  uint uVar8;
  int64_t arg1;
  uint64_t uVar9;
  int64_t *this_ptr;
  uint uVar10;
  
  uVar10 = *(uint *)(arg1 + 0x20);
  if (uVar10 == 0xffffffff) {
    FUN_00d931c0();
    uVar10 = *(uint *)(arg1 + 0x20);
    lVar1 = *(int64_t *)(arg1 + 0x18);
    if (uVar10 == 0xffffffff) {
      if (*(int64_t *)(arg1 + 0x10) == 0) {
        uVar10 = 0;
        lVar2 = *param_2;
        uVar6 = *(uint *)(lVar2 + 0x20);
        goto joined_r0x00d97d9a;
      }
      uVar10 = FUN_00e7dde0();
    }
    lVar2 = *param_2;
    uVar6 = *(uint *)(lVar2 + 0x20);
  }
  else {
    lVar1 = *(int64_t *)(arg1 + 0x18);
    lVar2 = *param_2;
    uVar6 = *(uint *)(lVar2 + 0x20);
  }
joined_r0x00d97d9a:
  if (uVar6 == 0xffffffff) {
    FUN_00d931c0();
    uVar6 = *(uint *)(*param_2 + 0x20);
    lVar2 = *(int64_t *)(lVar2 + 0x18);
    if (uVar6 == 0xffffffff) {
      if (*(int64_t *)(*param_2 + 0x10) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_00e7dde0();
      }
    }
  }
  else {
    lVar2 = *(int64_t *)(lVar2 + 0x18);
  }
  if ((((param_1 & 4) != 0) && (0 < (int)uVar10)) && (0 < (int)uVar6)) {
    do {
      uVar8 = uVar10 - 1;
      bVar4 = true;
      uVar7 = (uint64_t)uVar6;
      uVar5 = uVar6;
      do {
        uVar5 = uVar5 - 1;
        if (*(short *)(lVar1 + (uint64_t)uVar8 * 2) == *(short *)(lVar2 + (uint64_t)uVar5 * 2)) {
          bVar4 = false;
        }
      } while ((bVar4) && (bVar3 = 1 < (int64_t)uVar7, uVar7 = uVar7 - 1, bVar3));
    } while ((!bVar4) && (uVar10 = uVar8, 0 < (int)uVar8));
  }
  uVar7 = 0;
  if ((((param_1 & 2) != 0) && (0 < (int)uVar10)) && (0 < (int)uVar6)) {
    uVar7 = 0;
    do {
      bVar4 = true;
      uVar9 = (uint64_t)uVar6;
      uVar8 = uVar6;
      do {
        uVar8 = uVar8 - 1;
        if (*(short *)(lVar1 + uVar7 * 2) == *(short *)(lVar2 + (uint64_t)uVar8 * 2)) {
          bVar4 = false;
        }
      } while ((bVar4) && (bVar3 = 1 < (int64_t)uVar9, uVar9 = uVar9 - 1, bVar3));
      uVar10 = uVar10 - (bVar4 == false);
      uVar7 = (uint64_t)((int)uVar7 + (uint)(bVar4 ^ 1));
    } while ((bVar4 == false) && (0 < (int)uVar10));
  }
  if ((int)uVar10 < 1) {
    *(void*)(this_ptr + 1) = 0;
    lVar1 = g_028a8368;
    if (g_028a8368 != 0) {
      FUN_00d50b00(uVar7);
    }
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    FUN_00d920f0(uVar7,uVar10);
  }
  return this_ptr;
}

