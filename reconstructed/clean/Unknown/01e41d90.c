// Function: FUN_01e41d90
// Address: 01e41d90
// Size: 543 bytes
// Class: Unknown

void FUN_01e41d90(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *this_ptr;
  int64_t *plVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar9;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar10;
  int local_48;
  
  uVar10 = (uint32_t)((uint64_t)param_2 >> 0x20);
  plVar7 = (int64_t *)this_ptr[6];
  plVar8 = this_ptr;
  while (plVar4 = plVar7, plVar4 != (int64_t *)0x0) {
    plVar7 = (int64_t *)plVar4[6];
    plVar8 = plVar4;
    if ((int64_t *)plVar4[6] == plVar4) {
      plVar7 = plVar4;
    }
  }
  cVar5 = (**(code **)(*plVar8 + 0x4b8))();
  if (cVar5 == '\0') {
    plVar8 = (int64_t *)0x0;
    iVar1 = *(int *)((int64_t)this_ptr + 0xb4);
    uVar9 = extraout_XMM0_Da;
  }
  else {
    uVar9 = FUN_00d50b00();
    iVar1 = *(int *)((int64_t)this_ptr + 0xb4);
  }
  if (iVar1 == 0) {
    plVar4 = (int64_t *)this_ptr[6];
    plVar7 = this_ptr;
    while (plVar3 = plVar4, plVar3 != (int64_t *)0x0) {
      plVar4 = (int64_t *)plVar3[6];
      plVar7 = plVar3;
      if ((int64_t *)plVar3[6] == plVar3) {
        plVar4 = plVar3;
      }
    }
    cVar5 = (**(code **)(*plVar7 + 0x4b8))();
    uVar9 = extraout_XMM0_Da_00;
    if (cVar5 != '\0') {
      FUN_00d50b00();
      FUN_00d50b20();
      uVar9 = uVar10;
      FUN_01e436c0();
    }
  }
  FUN_01e3c350(uVar9);
  lVar2 = this_ptr[7];
  if (lVar2 != 0) {
    local_48 = -1;
    while( true ) {
      lVar6 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_48) break;
      (**(code **)(**(int64_t **)(*(int64_t *)(lVar2 + 0x10) + 8 + lVar6 * 8) + 0x4c0))();
    }
    FUN_000a9680();
  }
  if (plVar8 != (int64_t *)0x0) {
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_01d8fd00();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar7 = (int64_t *)this_ptr[0xc];
  FUN_00015ff0();
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x360))();
    cVar5 = FUN_00e85ea0();
    plVar7 = this_ptr + 0xc;
    if (cVar5 != '\0') goto LAB_01e41f89;
  }
  plVar7 = &g_02802688;
LAB_01e41f89:
  if (*plVar7 != 0) {
    (**(code **)(*(int64_t *)this_ptr[0xc] + 0x4e0))();
  }
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

