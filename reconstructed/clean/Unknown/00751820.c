// Function: FUN_00751820
// Address: 00751820
// Size: 664 bytes
// Class: Unknown

void FUN_00751820(void)

{
  int64_t lVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar6;
  bool bVar7;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  uint64_t local_50;
  
  lVar1 = *(int64_t *)(this_ptr + 0x70);
  if (lVar1 == *arg1) {
    return;
  }
  if (lVar1 == 0) {
LAB_007518b6:
    plVar6 = (int64_t *)0x0;
    local_58 = 0;
    bVar2 = false;
    local_50 = 0;
    plVar5 = (int64_t *)*arg1;
    if (plVar5 == (int64_t *)0x0) goto joined_r0x00751a84;
  }
  else {
    FUN_00d50b00();
    if (*(int64_t **)(this_ptr + 0x70) == (int64_t *)0x0) goto LAB_007518b6;
    bVar2 = *arg1 != 0;
    if (*arg1 == 0) {
      local_58 = 0;
      local_50 = 0;
      plVar6 = *(int64_t **)(this_ptr + 0x90);
    }
    else {
      (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x3f8))();
      local_58 = (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x408))();
      local_50 = (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x418))();
      plVar6 = *(int64_t **)(this_ptr + 0x90);
    }
    if (((plVar6 != (int64_t *)0x0) && (cVar4 = (**(code **)(*plVar6 + 0x390))(), cVar4 != '\0'))
       && (cVar4 = (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x5e8))(), cVar4 != '\0')) {
      (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x390))();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x478))();
    plVar6 = *(int64_t **)(this_ptr + 0x70);
    plVar5 = (int64_t *)*arg1;
    if (plVar6 == plVar5) goto joined_r0x00751a84;
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  *(int64_t **)(this_ptr + 0x70) = plVar5;
  bVar7 = plVar6 != (int64_t *)0x0;
  plVar6 = plVar5;
  if (bVar7) {
    FUN_00d50b20();
    plVar6 = *(int64_t **)(this_ptr + 0x70);
  }
joined_r0x00751a84:
  if (plVar6 != (int64_t *)0x0) {
    if (bVar2) {
      (**(code **)(*plVar6 + 0x400))();
      (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x428))(local_58,local_50);
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x470))();
    (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x4a8))();
    FUN_00d403d0();
    lVar3 = g_026d88d0;
    if (g_026d88d0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_68 = 0;
    local_60 = '\0';
    FUN_00d40470(&local_68,&stack0xffffffffffffffb8,1,3);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    if (*(int64_t **)(this_ptr + 0x70) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x4b0))();
    }
    FUN_00d50b20();
  }
  return;
}

