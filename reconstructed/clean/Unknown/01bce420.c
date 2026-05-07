// Function: FUN_01bce420
// Address: 01bce420
// Size: 1293 bytes
// Class: Unknown

void FUN_01bce420(uint32_t param_1,uint32_t param_2)

{
  uint64_t uVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  bool bVar6;
  int64_t *plVar7;
  char cVar8;
  int iVar9;
  int64_t *this_ptr;
  int64_t lVar10;
  int64_t lVar11;
  bool bVar12;
  uint32_t local_138;
  uint32_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t local_58;
  char local_50;
  int64_t *local_40;
  
  FUN_01c030e0();
  if (local_50 == '\0') {
    if (local_58 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_58 == 0) {
    return;
  }
  FUN_01c03420();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_01c03760();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  if (*(int *)(local_58 + 0x18) < 0x10) {
    bVar6 = false;
    local_40 = (int64_t *)0x0;
  }
  else {
    lVar10 = 8;
    lVar11 = 0;
    local_40 = (int64_t *)0x0;
    bVar6 = false;
    do {
      uVar1 = *(void*)(*(int64_t *)(local_58 + 0x10) + -8 + lVar10);
      uVar14 = *(void*)(*(int64_t *)(local_58 + 0x10) + lVar10);
      uVar15 = 0;
      FUN_01c03aa0();
      local_138 = (uint32_t)uVar1;
      cVar8 = FUN_00d054a0(local_138,(int)uVar14,param_1,param_2,uVar14,uVar15);
      uVar13 = (uint32_t)uVar14;
      if (cVar8 != '\0') {
        plVar3 = *(int64_t **)(*(int64_t *)(local_58 + 0x10) + lVar11 * 8);
        bVar12 = plVar3 != (int64_t *)0x0;
        if (bVar12) {
          FUN_00d50b00();
        }
        cVar8 = (**(code **)(*plVar3 + 0x50))();
        if (cVar8 == '\0') {
          lVar4 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + lVar11 * 8);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          lVar5 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + lVar11 * 8);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*this_ptr + 0x920))(local_138,uVar13,param_1,param_2);
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if (local_40 != plVar3) {
            if (plVar3 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            plVar7 = plVar3;
            if ((bVar6) && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto joined_r0x01bce8b1;
          }
          if (plVar3 == (int64_t *)0x0) goto LAB_01bce568;
          if (!bVar6) {
            bVar6 = true;
            FUN_00d50b00();
          }
        }
        else {
          lVar4 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + lVar11 * 8);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*this_ptr + 0x920))(local_138,uVar13,param_1,param_2);
          plVar7 = local_40;
          bVar12 = bVar6;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
joined_r0x01bce8b1:
          bVar6 = bVar12;
          local_40 = plVar7;
          if (plVar3 == (int64_t *)0x0) goto LAB_01bce568;
        }
        FUN_00d50b20();
      }
LAB_01bce568:
      iVar2 = *(int *)(local_58 + 0x18);
      iVar9 = iVar2 + 0xf;
      if (-1 < iVar2) {
        iVar9 = iVar2;
      }
      lVar10 = lVar10 + 0x10;
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < iVar9 >> 4);
  }
  if ((bVar6) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

