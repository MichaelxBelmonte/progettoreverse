// Function: FUN_01c65c50
// Address: 01c65c50
// Size: 2040 bytes
// Class: GNFilePath

uint64_t FUN_01c65c50(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  int64_t **pplVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t local_a0;
  char local_98;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  if (*(int *)(this_ptr + 0x1c8) != 0) {
    lVar1 = *(int64_t *)(this_ptr + 0x188);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01c651f0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x188);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_016cbba0();
    lVar2 = *(int64_t *)(this_ptr + 0x2a0);
    plVar3 = *(int64_t **)(lVar2 + 0x18);
    plVar5 = plVar3;
    if (plVar3 == local_40) goto LAB_01c65da5;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
        goto LAB_01c65d06;
      }
      FUN_00d50b00();
      plVar3 = *(int64_t **)(lVar2 + 0x18);
      *(int64_t **)(lVar2 + 0x18) = local_40;
      plVar5 = local_40;
    }
    else {
      local_38 = '\0';
      plVar5 = local_40;
LAB_01c65d06:
      *(int64_t **)(lVar2 + 0x18) = plVar5;
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar5 = local_40;
    }
LAB_01c65da5:
    if ((local_38 != '\0') && (plVar5 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 == 0) {
      return 1;
    }
    FUN_00d50b20();
    return 1;
  }
  *(void*)(this_ptr + 0x2e0) = 1;
  lVar1 = *(int64_t *)(this_ptr + 0x188);
  if (lVar1 == 0) {
    local_48 = (int64_t *)(this_ptr + 0x2a0);
    if (*(int64_t *)(*(int64_t *)(this_ptr + 0x2a0) + 0x18) != 0) {
      *(void*)(*(int64_t *)(this_ptr + 0x2a0) + 0x18) = 0;
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    local_48 = (int64_t *)(this_ptr + 0x2a0);
    lVar2 = *(int64_t *)(*(int64_t *)(this_ptr + 0x2a0) + 0x18);
    if (lVar2 == lVar1) {
      FUN_00d50b20();
    }
    else {
      *(int64_t *)(*(int64_t *)(this_ptr + 0x2a0) + 0x18) = lVar1;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  lVar1 = *(int64_t *)(this_ptr + 0x188);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pplVar6 = &local_40;
  FUN_016cbba0();
  lVar2 = *local_48;
  plVar3 = *(int64_t **)(lVar2 + 0x10);
  plVar5 = plVar3;
  if (plVar3 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
        goto LAB_01c65e5d;
      }
      FUN_00d50b00();
      plVar3 = *(int64_t **)(lVar2 + 0x10);
      *(int64_t **)(lVar2 + 0x10) = local_40;
      plVar5 = local_40;
    }
    else {
      local_38 = '\0';
      plVar5 = local_40;
LAB_01c65e5d:
      *(int64_t **)(lVar2 + 0x10) = plVar5;
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar5 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(*local_48 + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01c518b0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x178);
  if (lVar1 == 0) {
    if (*(int64_t *)(*local_48 + 0x20) != 0) {
      *(void*)(*local_48 + 0x20) = 0;
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    lVar2 = *(int64_t *)(*local_48 + 0x20);
    if (lVar2 == lVar1) {
      FUN_00d50b20();
    }
    else {
      *(int64_t *)(*local_48 + 0x20) = lVar1;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  lVar1 = *(int64_t *)(this_ptr + 0x170);
  if (lVar1 == 0) {
    if (*(int64_t *)(*local_48 + 0x30) != 0) {
      *(void*)(*local_48 + 0x30) = 0;
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    lVar2 = *(int64_t *)(*local_48 + 0x30);
    if (lVar2 == lVar1) {
      FUN_00d50b20();
    }
    else {
      *(int64_t *)(*local_48 + 0x30) = lVar1;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  plVar3 = *(int64_t **)(this_ptr + 0x178);
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = plVar3;
  FUN_00083c20();
  if (plVar3 == (int64_t *)0x0) {
LAB_01c65ffd:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01c65ffd;
  }
  local_50 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    cVar4 = '\x01';
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
    cVar4 = local_38;
  }
  if ((cVar4 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == (int64_t *)0x0) {
    return 1;
  }
  plVar3 = *(int64_t **)(this_ptr + 0x170);
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  uVar8 = (**(code **)(*plVar3 + 0x368))();
  plVar3 = *(int64_t **)(this_ptr + 0x170);
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  uVar9 = (**(code **)(*plVar3 + 0x378))();
  plVar3 = *(int64_t **)(this_ptr + 0x170);
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  uVar7 = (**(code **)(*plVar3 + 0x398))();
  FUN_01a919e0(uVar8,uVar9,uVar7);
  lVar1 = *local_48;
  plVar3 = *(int64_t **)(lVar1 + 0x38);
  plVar5 = plVar3;
  if (plVar3 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
        goto LAB_01c660f3;
      }
      FUN_00d50b00();
      plVar3 = *(int64_t **)(lVar1 + 0x38);
      *(int64_t **)(lVar1 + 0x38) = local_40;
      plVar5 = local_40;
    }
    else {
      local_38 = '\0';
      plVar5 = local_40;
LAB_01c660f3:
      *(int64_t **)(lVar1 + 0x38) = plVar5;
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar5 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  plVar3 = local_50;
  FUN_01a904a0();
  uVar7 = FUN_01a90480();
  (**(code **)(*plVar3 + 0x388))();
  local_58 = 0;
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_98 = '\0';
  }
  local_58 = '\x01';
  local_60 = local_a0;
  local_78 = 0;
  lVar1 = *(int64_t *)(*local_48 + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  local_80 = lVar1;
  FUN_01a905a0();
  FUN_01a8bce0(1,uVar7,&local_60,&local_80);
  lVar1 = *local_48;
  plVar3 = *(int64_t **)(lVar1 + 0x28);
  plVar5 = plVar3;
  if (plVar3 == local_40) goto LAB_01c66274;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_01c66232;
    }
    FUN_00d50b00();
    plVar3 = *(int64_t **)(lVar1 + 0x28);
    *(int64_t **)(lVar1 + 0x28) = local_40;
    plVar5 = local_40;
  }
  else {
    local_38 = '\0';
    plVar5 = local_40;
LAB_01c66232:
    *(int64_t **)(lVar1 + 0x28) = plVar5;
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar5 = local_40;
  }
LAB_01c66274:
  if ((local_38 != '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  plVar3 = *(int64_t **)(*local_48 + 0x38);
  local_68 = 0;
  lVar1 = *(int64_t *)(*local_48 + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_70 = lVar1;
  (**(code **)(*plVar3 + 0x3d8))();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x170);
  lVar2 = *(int64_t *)(*(int64_t *)(this_ptr + 0x2a0) + 0x38);
  if (lVar1 != lVar2) {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x170) = lVar2;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(*local_48 + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01c51df0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x160) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(int64_t *)(this_ptr + 0x160);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    lVar2 = *(int64_t *)(*local_48 + 0x28);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01c87b20();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return 1;
}

