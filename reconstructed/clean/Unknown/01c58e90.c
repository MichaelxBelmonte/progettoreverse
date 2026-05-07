// Function: FUN_01c58e90
// Address: 01c58e90
// Size: 1753 bytes
// Class: Unknown

void FUN_01c58e90(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  uint8_t auVar13 [16];
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  int64_t local_40;
  
  FUN_01d48b40();
  lVar4 = *arg1;
  iVar9 = 0;
  if (*(int *)(lVar4 + 0xc) < 1) {
    bVar12 = false;
    local_40 = 0;
  }
  else {
    bVar12 = false;
    lVar8 = 0;
    do {
      lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + (int64_t)iVar9 * 8);
      bVar2 = bVar12;
      if (*(int64_t *)(lVar4 + 0x18) == 0) {
        if (lVar8 != 0) {
          if (bVar12) {
            FUN_00d50b20();
            bVar2 = false;
          }
          else {
            bVar2 = false;
          }
        }
LAB_01c59116:
        local_50 = (int64_t *)(lVar4 + 0x10);
        iVar5 = *(int *)(*arg1 + 0xc);
        iVar10 = iVar9 + 1;
        bVar12 = bVar2;
        if (iVar10 < iVar5) {
          lVar8 = 0;
          do {
            lVar1 = *(int64_t *)
                     ((int64_t)iVar10 * 8 + *(int64_t *)(*arg1 + 0x10) + lVar8 * 8);
            if (((*(int64_t *)(lVar1 + 0x10) != *local_50) ||
                (*(int64_t *)(lVar1 + 0x18) != *(int64_t *)(lVar4 + 0x18))) || ((int)lVar8 == 99))
            {
              local_40 = 0;
              goto LAB_01c58ee6;
            }
            iVar6 = iVar9 + 1;
            iVar11 = iVar9 + 2;
            lVar8 = lVar8 + 1;
            iVar9 = iVar6;
          } while (iVar11 < iVar5);
          local_40 = 0;
        }
        else {
          local_40 = 0;
        }
      }
      else {
        FUN_01d386e0();
        local_40 = local_60;
        if (local_60 == lVar8) {
          local_40 = lVar8;
          if ((!bVar12) && (local_60 != 0)) {
            bVar2 = true;
            if (local_58 != '\0') goto LAB_01c5900b;
            FUN_00d50b00();
            bVar2 = true;
          }
LAB_01c58ff7:
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
            bVar2 = true;
            if ((bVar12) && (lVar8 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01c58ff7;
          }
          bVar2 = true;
          if ((bVar12) && (lVar8 != 0)) {
            FUN_00d50b20();
          }
        }
LAB_01c5900b:
        auVar13 = insertps(ZEXT416(*(uint *)(lVar4 + 0x20)),*(void*)(lVar4 + 0x28),0x10);
        FUN_01d39180(auVar13._0_8_);
        auVar13 = insertps(ZEXT416(*(uint *)(lVar4 + 0x20)),*(void*)(lVar4 + 0x2c),0x10);
        FUN_01d38830(auVar13._0_8_);
        if (local_40 == 0) goto LAB_01c59116;
        iVar5 = 99;
        lVar8 = lVar4;
        while( true ) {
          iVar10 = iVar9 + 1;
          if ((*(int *)(*arg1 + 0xc) <= iVar10) ||
             (lVar1 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + (int64_t)iVar10 * 8),
             *(int64_t *)(lVar1 + 0x10) != *(int64_t *)(lVar4 + 0x10))) break;
          bVar12 = iVar5 == 0;
          iVar5 = iVar5 + -1;
          if ((*(int64_t *)(lVar1 + 0x18) != *(int64_t *)(lVar4 + 0x18)) || (bVar12)) break;
          auVar13 = insertps(ZEXT416(*(uint *)(lVar8 + 0x24)),*(void*)(lVar8 + 0x30),0x10);
          FUN_01d38830(auVar13._0_8_);
          auVar13 = insertps(ZEXT416(*(uint *)(lVar1 + 0x20)),*(void*)(lVar1 + 0x2c),0x10);
          FUN_01d38830(auVar13._0_8_);
          lVar8 = lVar1;
          iVar9 = iVar10;
        }
        auVar13 = insertps(ZEXT416(*(uint *)(lVar8 + 0x24)),*(void*)(lVar8 + 0x30),0x10);
        FUN_01d38830(auVar13._0_8_);
        FUN_01d38830(*(void*)(lVar8 + 0x24));
        FUN_01d38b10();
        lVar4 = *(int64_t *)(lVar4 + 0x18);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_01d488d0();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        (**(code **)(*(int64_t *)*this_ptr + 0x3a0))();
        bVar12 = bVar2;
      }
LAB_01c58ee6:
      lVar4 = *arg1;
      iVar9 = iVar9 + 1;
      lVar8 = local_40;
    } while (iVar9 < *(int *)(lVar4 + 0xc));
  }
  FUN_01d48b40();
  lVar4 = *arg1;
  if (0 < *(int *)(lVar4 + 0xc)) {
    local_50 = (int64_t *)0x0;
    bVar2 = false;
    iVar9 = 0;
    do {
      lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + (int64_t)iVar9 * 8);
      FUN_01d386e0();
      if ((int64_t *)local_60 == local_50) {
        if ((bVar2) || (local_60 == 0)) {
joined_r0x01c593d9:
          plVar7 = local_50;
          bVar3 = bVar2;
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar7 = local_50;
          bVar3 = true;
          if (local_58 == '\0') {
            FUN_00d50b00();
            goto LAB_01c593c5;
          }
        }
      }
      else {
        plVar7 = (int64_t *)local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar2) && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
            local_50 = (int64_t *)local_60;
LAB_01c593c5:
            bVar2 = true;
            goto joined_r0x01c593d9;
          }
        }
        else {
          bVar3 = true;
          if ((bVar2) && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      bVar2 = bVar3;
      auVar13 = insertps(ZEXT416(*(uint *)(lVar4 + 0x20)),*(void*)(lVar4 + 0x2c),0x10);
      FUN_01d39180(auVar13._0_8_);
      iVar5 = 1;
      lVar8 = lVar4;
      while( true ) {
        iVar10 = iVar9 + iVar5;
        if ((((*(int *)(*arg1 + 0xc) <= iVar10) ||
             (lVar1 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + (int64_t)iVar10 * 8),
             *(int64_t *)(lVar1 + 0x10) != *(int64_t *)(lVar4 + 0x10))) ||
            (*(int64_t *)(lVar1 + 0x18) != *(int64_t *)(lVar4 + 0x18))) || (iVar5 == 100)) break;
        auVar13 = insertps(ZEXT416(*(uint *)(lVar8 + 0x24)),*(void*)(lVar8 + 0x30),0x10);
        FUN_01d38830(auVar13._0_8_);
        iVar5 = iVar5 + 1;
        auVar13 = insertps(ZEXT416(*(uint *)(lVar1 + 0x20)),*(void*)(lVar1 + 0x2c),0x10);
        FUN_01d38830(auVar13._0_8_);
        lVar8 = lVar1;
      }
      FUN_01d48b40();
      lVar4 = *(int64_t *)(lVar4 + 0x10);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      auVar13 = insertps(ZEXT416(*(uint *)(lVar8 + 0x24)),*(void*)(lVar8 + 0x30),0x10);
      FUN_01d38830(auVar13._0_8_);
      (**(code **)(*(int64_t *)*this_ptr + 0x3a8))();
      lVar4 = *arg1;
      local_50 = plVar7;
      iVar9 = iVar10;
    } while (iVar10 < *(int *)(lVar4 + 0xc));
    if ((bVar2) && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((bVar12) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}

