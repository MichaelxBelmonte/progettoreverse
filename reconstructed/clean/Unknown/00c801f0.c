// Function: FUN_00c801f0
// Address: 00c801f0
// Size: 940 bytes
// Class: Unknown

void FUN_00c801f0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *arg1;
  void*this_ptr;
  int iVar4;
  int local_50;
  int64_t local_40;
  char local_38;
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_0002f270();
  (**(code **)(*plVar3 + 0x18))();
  lVar1 = *(int64_t *)(*arg1 + 0x10);
  if (lVar1 == 0) {
    if (plVar3[2] != 0) {
      plVar3[2] = 0;
LAB_00c8026a:
      FUN_00d50b20();
      if (lVar1 != 0) goto LAB_00c80277;
    }
  }
  else {
    FUN_00d50b00();
    lVar2 = plVar3[2];
    if (lVar2 != lVar1) {
      FUN_00d50b00();
      plVar3[2] = lVar1;
      if (lVar2 != 0) goto LAB_00c8026a;
    }
LAB_00c80277:
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(*arg1 + 0x18);
  if (lVar1 == 0) {
    if (plVar3[3] == 0) goto LAB_00c802d1;
    plVar3[3] = 0;
LAB_00c802bc:
    FUN_00d50b20();
    if (lVar1 == 0) goto LAB_00c802d1;
  }
  else {
    FUN_00d50b00();
    lVar2 = plVar3[3];
    if (lVar2 != lVar1) {
      FUN_00d50b00();
      plVar3[3] = lVar1;
      if (lVar2 != 0) goto LAB_00c802bc;
    }
  }
  FUN_00d50b20();
LAB_00c802d1:
  lVar1 = *(int64_t *)(*arg1 + 0x58);
  if (lVar1 == 0) {
    plVar3[0xb] = 0;
    lVar1 = *(int64_t *)(*arg1 + 0x30);
  }
  else {
    FUN_00d50b00();
    plVar3[0xb] = lVar1;
    FUN_00d50b20();
    lVar1 = *(int64_t *)(*arg1 + 0x30);
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
    local_50 = -1;
    while (local_50 = local_50 + 1, local_50 < *(int *)(lVar1 + 0xc)) {
      FUN_00d773e0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00c807f0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00559a70();
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(*arg1 + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        FUN_00c779c0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00c808f0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_00cc1480();
    FUN_00d50b20();
  }
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

