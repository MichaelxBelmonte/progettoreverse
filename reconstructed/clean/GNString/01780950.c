// Function: FUN_01780950
// Address: 01780950
// Size: 1701 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_01780950(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t *plVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void*puVar11;
  char *pcVar12;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *local_70;
  int64_t *local_58;
  char local_50 [8];
  void*local_48;
  char local_40;
  char local_38 [8];
  
  if (*arg1 == 0) {
    return -0x80000000;
  }
  lVar1 = *(int64_t *)(this_ptr + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00ddb860();
  if (local_50[0] == '\0') {
    if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  FUN_00d95590();
  if (local_50[0] == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50[0] = '\0';
  }
  (**(code **)(*local_58 + 0x3e0))();
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  bVar3 = false;
  local_70 = (int64_t *)0x0;
  FUN_00d23310();
  pcVar12 = local_38;
  if (local_50[0] != '\0') {
    pcVar12 = local_50;
  }
  local_38[0] = local_50[0];
  *pcVar12 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  iVar8 = FUN_00d8c7a0();
  if ((local_38[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar7 = (**(code **)(*local_58 + 0x3d0))();
  if (cVar7 != '\0') {
    FUN_00d8a110();
    if (local_58 == (int64_t *)0x0) {
LAB_01780b85:
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_50[0] == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_70 = local_58;
        bVar3 = true;
        goto LAB_01780b85;
      }
      local_70 = local_58;
      bVar3 = true;
    }
    plVar6 = local_70;
    lVar5 = g_027ce8c8;
    if (iVar8 == 2) {
      if (g_027ce8c8 != 0) {
        FUN_00d50b00();
      }
      cVar7 = (**(code **)(*local_70 + 0x50))();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      plVar4 = g_027ce790;
      if (cVar7 != '\0') {
        if (g_027ce790 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (local_70 == plVar4) {
          if ((!bVar3) && (plVar4 != (int64_t *)0x0)) goto LAB_01780c43;
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        else {
          local_70 = plVar4;
          if ((bVar3) && (plVar6 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01780c43:
          bVar3 = true;
        }
        lVar5 = g_027ce8d0;
        if (g_027ce8d0 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*local_58 + 0x3e0))();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
    }
    puVar11 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar11 = &g_025795a8;
    (*g_025795c0)();
    FUN_00d8dbf0();
    lVar5 = g_027ce8d8;
    if (g_027ce8d8 != 0) {
      FUN_00d50b00();
    }
    cVar7 = (**(code **)(*local_58 + 0x3e0))();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    iVar8 = 0;
    if (cVar7 != '\0') {
      iVar8 = 0;
      cVar7 = FUN_00d8ca70();
      if (cVar7 == '#') {
        iVar8 = FUN_00d8c7a0();
      }
      cVar7 = FUN_00d8ca70();
      if (cVar7 == 'b') {
        iVar9 = FUN_00d8c7a0();
        iVar8 = iVar8 - iVar9;
      }
    }
    local_40 = '\0';
    local_48 = puVar11;
    cVar7 = (**(code **)(**(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 0x18) + 0x50))();
    if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b20();
    }
    iVar9 = 0;
    if (cVar7 == '\0') {
      local_40 = '\0';
      local_48 = puVar11;
      cVar7 = (**(code **)(*(int64_t *)**(void**)(lVar1 + 0x10) + 0x50))();
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar9 = 1;
      if (cVar7 != '\0') goto LAB_01780f5c;
      local_40 = '\0';
      local_48 = puVar11;
      cVar7 = (**(code **)(**(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 0x20) + 0x50))();
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar9 = 2;
      if (cVar7 != '\0') goto LAB_01780f5c;
      local_40 = '\0';
      local_48 = puVar11;
      cVar7 = (**(code **)(**(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8) + 0x50))();
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar9 = 3;
      if (cVar7 != '\0') goto LAB_01780f5c;
      local_40 = '\0';
      local_48 = puVar11;
      cVar7 = (**(code **)(**(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 0x28) + 0x50))();
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar9 = 4;
      if (cVar7 != '\0') goto LAB_01780f5c;
      local_40 = '\0';
      local_48 = puVar11;
      cVar7 = (**(code **)(**(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 0x10) + 0x50))();
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar9 = 5;
      if (cVar7 != '\0') goto LAB_01780f5c;
      local_40 = '\0';
      local_48 = puVar11;
      iVar10 = (**(code **)(**(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 0x30) + 0x50))();
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      iVar9 = 6;
      if ((char)iVar10 != '\0') goto LAB_01780f5c;
      bVar2 = false;
    }
    else {
LAB_01780f5c:
      iVar10 = iVar8 * 7 + iVar9 + -1;
      bVar2 = true;
    }
    FUN_00d50b20();
    if (bVar2) goto LAB_01780f82;
  }
  iVar10 = -0x80000000;
LAB_01780f82:
  if ((bVar3) && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return iVar10;
}

