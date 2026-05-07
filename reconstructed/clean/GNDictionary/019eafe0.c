// Function: FUN_019eafe0
// Address: 019eafe0
// Size: 1595 bytes
// Class: GNDictionary

void* FUN_019eafe0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int iVar4;
  int64_t *plVar5;
  void*puVar6;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_b8;
  char local_b0;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  int local_40;
  
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  iVar4 = (**(code **)(*arg1 + 0xd08))();
  bVar2 = true;
  if (iVar4 == 0) {
    FUN_00d46530();
    local_60 = local_58;
    if (local_58 == 0) {
LAB_019eb12a:
      local_60 = 0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
    }
LAB_019eb133:
    lVar3 = g_026dc290;
    if (local_60 != 0) {
      if (g_026dc290 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar3;
      local_50 = '\0';
      FUN_00ca0840();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      bVar2 = false;
    }
  }
  else {
    if (iVar4 == 1) {
      FUN_00d46530();
      local_60 = local_58;
      if (local_58 == 0) goto LAB_019eb12a;
      bVar1 = true;
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_019eb133;
    }
    if (iVar4 == 2) {
      FUN_00d46530();
      local_60 = local_58;
      if (local_58 == 0) goto LAB_019eb12a;
      bVar1 = true;
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_019eb133;
    }
    bVar1 = false;
  }
  if (arg1[0x7f] != 0) {
    FUN_01e1f170();
    FUN_00d46530();
    lVar3 = g_027e1498;
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
      lVar3 = g_027e1498;
    }
    g_027e1498 = lVar3;
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    FUN_01e1f180();
    FUN_00d46530();
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_027e14a0;
    local_58 = g_027e14a0;
    if (g_027e14a0 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\0';
    FUN_00ca0840();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*arg1 + 0xe20))();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_019eb603;
    FUN_00d50b00();
  }
  else if (local_58 == 0) {
LAB_019eb603:
    *this_ptr = plVar5;
    *(void*)(this_ptr + 1) = 1;
    goto joined_r0x019eb61c;
  }
  if (*(int *)(local_58 + 0xc) != 0) {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_02572358;
    (*g_02572370)();
    local_40 = -1;
    while (local_40 = local_40 + 1, local_40 < *(int *)(local_58 + 0xc)) {
      FUN_00dd6a00();
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      FUN_00d21140();
      if (local_b8 != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    lVar3 = g_027e14a8;
    if (g_027e14a8 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (puVar6 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
joined_r0x019eb61c:
  if (bVar1 && !bVar2) {
    FUN_00d50b20();
  }
  return this_ptr;
}

