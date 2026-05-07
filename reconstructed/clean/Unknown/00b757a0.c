// Function: FUN_00b757a0
// Address: 00b757a0
// Size: 784 bytes
// Class: Unknown

void FUN_00b757a0(void)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  uint uVar7;
  int64_t lVar8;
  uint32_t unaff_ESI;
  uint64_t uVar9;
  int64_t this_ptr;
  int64_t lVar10;
  int64_t lVar11;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int *)(*(int64_t *)(this_ptr + 0x98) + 0xc) != 0) {
    FUN_00d23340();
    local_38[0] = local_40[0];
    pcVar6 = local_40;
    if (local_40[0] == '\0') {
      pcVar6 = local_38;
    }
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    iVar1 = *(int *)(local_48 + 0x18);
    if ((local_38[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (iVar1 < 0x40) {
      FUN_00d23340();
      pcVar6 = local_40;
      if (local_40[0] == '\0') {
        pcVar6 = local_38;
      }
      local_38[0] = local_40[0];
      *pcVar6 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        if (local_38[0] == '\0') {
          FUN_00d50b00();
        }
        bVar4 = true;
        goto LAB_00b75a74;
      }
    }
  }
  if (*(int *)(*(int64_t *)(this_ptr + 0x98) + 0xc) == 0) {
    bVar5 = false;
  }
  else {
    lVar11 = *(int64_t *)
              ((int64_t)*(int *)(*(int64_t *)(this_ptr + 0x70) + 0x18) + -8 +
              *(int64_t *)(*(int64_t *)(this_ptr + 0x70) + 0x10));
    FUN_00d23340();
    pcVar6 = local_38;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) {
      bVar5 = false;
      bVar4 = true;
      lVar10 = 0;
    }
    else {
      bVar5 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
      bVar4 = false;
      lVar10 = local_48;
      if (local_48 != 0) {
        iVar1 = *(int *)(local_48 + 0x18);
        iVar3 = iVar1 + 3;
        if (-1 < iVar1) {
          iVar3 = iVar1;
        }
        if (3 < iVar1) {
          uVar7 = iVar3 >> 2;
          lVar2 = *(int64_t *)(local_48 + 0x10);
          if (uVar7 - 1 < 7) {
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            do {
              lVar11 = (uint64_t)*(uint *)(lVar2 + 0x1c + uVar9 * 4) +
                       (uint64_t)*(uint *)(lVar2 + 0x18 + uVar9 * 4) +
                       (uint64_t)*(uint *)(lVar2 + 0x14 + uVar9 * 4) +
                       (uint64_t)*(uint *)(lVar2 + 0x10 + uVar9 * 4) +
                       (uint64_t)*(uint *)(lVar2 + 0xc + uVar9 * 4) +
                       (uint64_t)*(uint *)(lVar2 + 8 + uVar9 * 4) +
                       (uint64_t)*(uint *)(lVar2 + 4 + uVar9 * 4) +
                       (uint64_t)*(uint *)(lVar2 + uVar9 * 4) + lVar11;
              uVar9 = uVar9 + 8;
            } while ((uVar7 & 0xfffffff8) != (uint)uVar9);
          }
          if ((uVar7 & 7) != 0) {
            lVar8 = 0;
            do {
              lVar11 = lVar11 + (uint64_t)*(uint *)(lVar2 + (uVar9 & 0xffffffff) * 4 + lVar8 * 4);
              lVar8 = lVar8 + 1;
            } while ((uVar7 & 7) != (uint)lVar8);
          }
        }
      }
    }
    lVar2 = *(int64_t *)(this_ptr + 0x70);
    iVar1 = *(int *)(lVar2 + 0x18);
    FUN_00c8e340();
    *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + (int64_t)iVar1) = lVar11;
    if (lVar10 != 0) {
      bVar5 = false;
    }
    if (lVar10 != 0 && !bVar4) {
      bVar5 = false;
      FUN_00d50b20();
    }
  }
  FUN_00c8e710();
  if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  bVar4 = true;
  if (local_48 == 0) {
    bVar4 = bVar5;
  }
  local_40[0] = '\0';
  FUN_00d21140();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_00b75a74:
  iVar1 = *(int *)(local_48 + 0x18);
  FUN_00c8e340();
  *(void*)(*(int64_t *)(local_48 + 0x10) + (int64_t)iVar1) = unaff_ESI;
  if (bVar4) {
    FUN_00d50b20();
  }
  return;
}

