// Function: FUN_01ed9200
// Address: 01ed9200
// Size: 946 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ed9200(int64_t *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int64_t *arg1;
  uint64_t uVar8;
  int64_t this_ptr;
  int64_t lVar9;
  uint uVar10;
  int iVar11;
  int64_t local_90;
  char local_88;
  int local_34;
  
  if (param_2 == 0) {
    if ((param_1 != (int64_t *)0x0) && (*param_1 != 0)) {
      *param_1 = 0;
      if ((char)param_1[1] != '\0') {
        FUN_00d50b20();
      }
      *(void*)(param_1 + 1) = 0;
    }
    if (param_3 == (int *)0x0) {
      return;
    }
    *param_3 = 0;
    return;
  }
  iVar3 = FUN_01dcea80();
  uVar4 = param_2;
  if (iVar3 <= (int)param_2) {
    uVar4 = FUN_01dcea80();
  }
  uVar10 = 0xffffffff;
  if ((int)param_2 < 1) {
    local_34 = 0;
    uVar4 = uVar10;
    iVar3 = local_34;
  }
  else {
    lVar9 = *(int64_t *)(*(int64_t *)(this_ptr + 0x2c0) + 0x10);
    iVar11 = *(int *)(lVar9 + -8 + (int64_t)(int)uVar4 * 8);
    local_34 = 0;
    iVar5 = 0;
    uVar7 = param_2;
    while( true ) {
      uVar8 = (uint64_t)(uVar7 - 1);
      if ((*(char *)(lVar9 + 5 + uVar8 * 8) != '\0') &&
         (uVar4 = uVar7 - 1, iVar3 = local_34, uVar7 == param_2)) break;
      do {
        iVar1 = *(int *)(lVar9 + uVar8 * 8);
        uVar7 = (int)uVar8 - (uint)(iVar11 < iVar1);
        uVar8 = (uint64_t)uVar7;
        if (iVar1 <= iVar11) break;
      } while (-1 < (int)uVar7);
      uVar4 = uVar10;
      iVar3 = iVar5;
      if (((uVar7 == 0xffffffff) || (uVar4 = uVar7, iVar1 != iVar11)) ||
         (iVar5 = iVar5 + 1, uVar4 = uVar10, iVar3 = iVar5, (int)uVar7 < 1)) break;
    }
  }
  if (param_1 != (int64_t *)0x0) {
    if (uVar4 == 0xffffffff) {
      if (*param_1 != 0) {
        *param_1 = 0;
        if ((char)param_1[1] != '\0') {
          FUN_00d50b20();
        }
        *(void*)(param_1 + 1) = 0;
      }
    }
    else {
      if ((int)uVar4 < *(int *)(*(int64_t *)(this_ptr + 0x2b8) + 0xc)) {
        lVar9 = *(int64_t *)
                 (*(int64_t *)(*(int64_t *)(this_ptr + 0x2b8) + 0x10) + (uint64_t)uVar4 * 8);
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        lVar2 = *param_1;
        if (lVar2 == lVar9) {
          if (((char)param_1[1] != '\0') || (lVar9 == 0)) {
            if (lVar9 != 0) {
              FUN_00d50b20();
            }
            goto LAB_01ed93e7;
          }
        }
        else {
          *param_1 = lVar9;
          if (((char)param_1[1] != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if (*param_1 == 0) goto LAB_01ed93e7;
        *param_1 = 0;
        if ((char)param_1[1] != '\0') {
          FUN_00d50b20();
        }
      }
      *(void*)(param_1 + 1) = 1;
    }
  }
LAB_01ed93e7:
  if (param_3 != (int *)0x0) {
    if (((int)uVar4 < 0) || (*(int *)(*(int64_t *)(this_ptr + 0x2b8) + 0xc) <= (int)uVar4)) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(int64_t *)
               (*(int64_t *)(*(int64_t *)(this_ptr + 0x2b8) + 0x10) + (uint64_t)uVar4 * 8);
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
    }
    FUN_01ed9690();
    if ((local_88 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    lVar9 = *arg1;
    if (lVar9 == 0) {
      iVar11 = 0x7fffffff;
    }
    else {
      if (*(int *)(lVar9 + 0xc) < 1) {
        iVar11 = 0x7fffffff;
      }
      else {
        iVar11 = 0x7fffffff;
        iVar5 = 0;
        do {
          iVar6 = FUN_00d23d20();
          iVar1 = iVar11;
          if (iVar6 < iVar11) {
            iVar1 = iVar6;
          }
          if (iVar6 == -1) {
            iVar1 = iVar11;
          }
          iVar11 = iVar1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(lVar9 + 0xc));
      }
      FUN_00083b20();
    }
    *param_3 = iVar3 - (uint)(iVar11 < iVar3);
    if (local_90 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

