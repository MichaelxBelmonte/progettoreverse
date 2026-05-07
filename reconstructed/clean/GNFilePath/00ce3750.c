// Function: FUN_00ce3750
// Address: 00ce3750
// Size: 1052 bytes
// Class: GNFilePath

uint64_t FUN_00ce3750(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  void*puVar4;
  uint64_t uVar5;
  void*puVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  void*this_ptr;
  int64_t *plVar9;
  bool bVar10;
  int64_t *local_70;
  char local_68;
  int64_t *local_48;
  char local_40;
  void*local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &g_02572358;
  *puVar4 = &g_02572358;
  (*g_02572370)();
  local_38 = (void*)0x0;
  plVar9 = (int64_t *)0x0;
LAB_00ce37a5:
  plVar7 = (int64_t *)((uint64_t)local_38 & 0xffffffff);
  uVar5 = FUN_00cddf30();
  cVar3 = (char)plVar7;
  if (local_48 == plVar9) {
    plVar2 = plVar9;
    if ((cVar3 == '\0') && (local_48 != (int64_t *)0x0)) {
      local_38 = (void*)CONCAT71((int7)((uint64_t)puVar6 >> 8),1);
      puVar6 = local_38;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    else if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) {
      local_38 = (void*)((uint64_t)local_38 & 0xffffffff);
    }
    else {
      FUN_00d50b20();
      local_38 = (void*)((uint64_t)local_38 & 0xffffffff);
    }
  }
  else {
    plVar2 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        uVar5 = FUN_00d50b00();
      }
      local_38 = (void*)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      if ((cVar3 != '\0') && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = (void*)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      if ((cVar3 != '\0') && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  plVar9 = plVar2;
  if (plVar9 != (int64_t *)0x0) {
    cVar3 = (**(code **)(*plVar9 + 0x398))();
    if (cVar3 != '\0') goto LAB_00ce3b5a;
    cVar3 = (**(code **)(*plVar9 + 0x3a0))();
    if (cVar3 != '\0') goto LAB_00ce3a20;
  }
  FUN_00d8a060();
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_48 = local_70;
  local_40 = '\0';
  FUN_00d23370();
  if (local_70 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d8ee20();
  plVar7 = (int64_t *)*this_ptr;
  if (plVar7 == local_70) goto LAB_00ce3980;
  cVar3 = *(char *)(this_ptr + 1);
  if (local_70 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  *this_ptr = local_70;
  if ((cVar3 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  goto LAB_00ce39c2;
LAB_00ce3a20:
  local_38 = (void*)((uint64_t)local_38 & 0xffffffff);
  bVar10 = *(int *)((int64_t)puVar4 + 0xc) == 0;
  uVar8 = CONCAT71((int7)((uint64_t)plVar7 >> 8),bVar10);
  cVar3 = (char)local_38;
  if (bVar10) goto joined_r0x00ce3b77;
  lVar1 = *(int64_t *)puVar4[2];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar9 + 0x400))();
  if (local_48 == plVar9) {
    if ((cVar3 == '\0') && (local_48 != (int64_t *)0x0)) {
      if (local_40 == '\0') {
        FUN_00d50b00();
        goto LAB_00ce3ad3;
      }
      goto LAB_00ce3aed;
    }
joined_r0x00ce3ae6:
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar9 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_38 = (void*)0x1;
      if (cVar3 != '\0') {
        FUN_00d50b20();
LAB_00ce3ad3:
        local_38 = (void*)0x1;
        goto joined_r0x00ce3ae6;
      }
    }
    else {
      if (cVar3 != '\0') {
        FUN_00d50b20();
      }
LAB_00ce3aed:
      local_40 = '\0';
      local_38 = (void*)0x1;
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar9 + 0x420))();
  if (cVar3 == '\0') goto LAB_00ce3b5a;
  FUN_00d23620();
  plVar7 = local_48;
  goto LAB_00ce3a20;
LAB_00ce3980:
  if ((*(char *)(this_ptr + 1) == '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b00();
LAB_00ce39c2:
    *(void*)(this_ptr + 1) = 1;
  }
  goto LAB_00ce37a5;
LAB_00ce3b5a:
  uVar8 = 0;
  cVar3 = (char)local_38;
joined_r0x00ce3b77:
  if (cVar3 != '\0') {
    FUN_00d50b20();
  }
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  return uVar8 & 0xffffffff;
}

