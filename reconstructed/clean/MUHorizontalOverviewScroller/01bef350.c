// Function: FUN_01bef350
// Address: 01bef350
// Size: 1326 bytes
// Class: MUHorizontalOverviewScroller

void FUN_01bef350(char param_1,char param_2,char param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  void*puVar8;
  int iVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar10;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  (*g_02572370)();
  lVar1 = *arg1;
  if (lVar1 == 0) {
    if (this_ptr[0x2d] != 0) {
      this_ptr[0x2d] = 0;
      FUN_00d50b20();
    }
  }
  else if (param_2 == '\0') {
    if (param_1 == '\0') {
      local_50 = '\0';
      FUN_00d21140();
      lVar3 = *arg1;
      lVar2 = this_ptr[0x2d];
      local_58 = lVar1;
      if (lVar2 != lVar3) {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        this_ptr[0x2d] = lVar3;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_01beea30();
      if ((local_70 == '\0') && (local_78 != 0)) {
        FUN_00d50b00();
      }
      FUN_00d214d0();
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      local_58 = *arg1;
      local_50 = '\0';
      cVar5 = FUN_00d23d70();
      if (cVar5 == '\0') {
        local_58 = *arg1;
        local_50 = '\0';
        FUN_00d21140();
        lVar1 = *arg1;
        lVar3 = this_ptr[0x2d];
        if (lVar3 != lVar1) {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          this_ptr[0x2d] = lVar1;
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else if (param_3 == '\0') {
        local_58 = *arg1;
        local_50 = '\0';
        FUN_00d23f50();
      }
    }
  }
  else {
    if (this_ptr[0x2d] == 0) {
      uVar6 = 0;
    }
    else {
      FUN_01d2b630();
      lVar1 = this_ptr[0x2d];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      uVar6 = FUN_00d237a0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((int)uVar6 < 0) goto LAB_01bef87a;
    }
    FUN_01d2b630();
    uVar7 = FUN_00d237a0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((int)uVar7 < 0) goto LAB_01bef87a;
    uVar4 = uVar6;
    if ((int)uVar7 < (int)uVar6) {
      uVar4 = uVar7;
    }
    uVar10 = (uint64_t)uVar4;
    if ((int)uVar7 < (int)uVar6) {
      uVar7 = uVar6;
    }
    do {
      FUN_01d2b630();
      local_58 = *(int64_t *)(*(int64_t *)(local_78 + 0x10) + uVar10 * 8);
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      local_50 = '\0';
      FUN_00d21140();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      uVar10 = uVar10 + 1;
    } while (uVar7 + 1 != (int)uVar10);
  }
  FUN_01d2b630();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_01bef788;
    }
  }
  else if (local_58 != 0) {
LAB_01bef788:
    if (0 < *(int *)(local_58 + 0xc)) {
      iVar9 = 0;
      do {
        cVar5 = FUN_00d23d70();
        if (cVar5 == '\0') {
          FUN_01bc08b0();
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(local_58 + 0xc));
    }
    FUN_00083b20();
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x9d0))();
  (**(code **)(*this_ptr + 0x400))();
  if (puVar8 == (void*)0x0) {
    return;
  }
LAB_01bef87a:
  FUN_00d50b20();
  return;
}

