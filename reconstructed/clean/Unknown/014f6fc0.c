// Function: FUN_014f6fc0
// Address: 014f6fc0
// Size: 663 bytes
// Class: Unknown

uint64_t FUN_014f6fc0(void)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t *arg1;
  uint64_t this_ptr;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t local_38;
  
  lVar2 = *(int64_t *)(*arg1 + 0x10);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  iVar4 = FUN_014f6f40();
  if (iVar4 == *(int *)(**(int64_t **)(*(int64_t *)(this_ptr + 0x10) + 0x10) + 0x28) + -1) {
    uVar1 = *(uint *)(lVar2 + 0xc);
    if ((int)uVar1 < 1) {
LAB_014f7232:
      uVar10 = CONCAT71((int7)(this_ptr >> 8),1);
      goto joined_r0x014f7238;
    }
    lVar9 = (uint64_t)uVar1 + 1;
    uVar10 = (uint64_t)(uVar1 - 1);
    lVar8 = 0;
    local_38 = 0;
    do {
      lVar6 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + uVar10 * 8);
      if (lVar8 == lVar6) {
        if (((char)local_38 == '\0') && (lVar8 != 0)) {
          local_38 = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if (((char)local_38 == '\0') || (lVar8 == 0)) {
          local_38 = 1;
          lVar8 = lVar6;
        }
        else {
          FUN_00d50b20();
          local_38 = 1;
          lVar8 = lVar6;
        }
      }
      *(uint64_t *)(lVar8 + 0x18) = this_ptr;
      FUN_00d23370();
      lVar9 = lVar9 + -1;
      uVar10 = (uint64_t)((int)uVar10 - 1);
    } while (1 < lVar9);
  }
  else {
    iVar4 = *(int *)(**(int64_t **)(*(int64_t *)(*arg1 + 0x10) + 0x10) + 0x28);
    iVar5 = FUN_014f6f40();
    if (iVar4 != iVar5 + 1) {
      uVar10 = 0;
      goto joined_r0x014f7238;
    }
    if (*(int *)(lVar2 + 0xc) < 1) goto LAB_014f7232;
    lVar9 = 0;
    lVar8 = 0;
    local_38 = 0;
    uVar10 = this_ptr;
    do {
      lVar6 = *(int64_t *)(lVar2 + 0x10);
      lVar3 = *(int64_t *)(lVar6 + lVar9 * 8);
      if (lVar8 == lVar3) {
        if (((char)local_38 == '\0') && (lVar8 != 0)) {
          local_38 = CONCAT71((int7)((uint64_t)lVar6 >> 8),1);
          uVar10 = 0;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar3 != 0) {
          uVar10 = local_38 & 0xffffffff;
          lVar6 = FUN_00d50b00();
        }
        if (((char)local_38 == '\0') || (lVar8 == 0)) {
          local_38 = CONCAT71((int7)((uint64_t)lVar6 >> 8),1);
          lVar8 = lVar3;
        }
        else {
          uVar10 = local_38 & 0xffffffff;
          uVar7 = FUN_00d50b20();
          local_38 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
          lVar8 = lVar3;
        }
      }
      *(uint64_t *)(lVar8 + 0x18) = this_ptr;
      FUN_00d21140();
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(lVar2 + 0xc));
  }
  uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
  if ((char)local_38 != '\0') {
    FUN_00d50b20();
  }
joined_r0x014f7238:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return uVar10 & 0xffffffff;
}

