// Function: FUN_00d8a4a0
// Address: 00d8a4a0
// Size: 1583 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00d8a4a0(uint64_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  void*puVar7;
  uint64_t uVar8;
  int64_t arg1;
  void*this_ptr;
  int64_t *local_58;
  char local_50;
  int64_t *local_40;
  
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_025795a8;
  FUN_00d500e0();
  iVar6 = *(int *)(arg1 + 0x20);
  if (iVar6 == -1) {
    if (*(int64_t *)(arg1 + 0x10) == 0) goto LAB_00d8a56c;
    iVar6 = FUN_00e7dde0();
  }
  if (iVar6 == 0) {
LAB_00d8a56c:
    *this_ptr = puVar7;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  iVar6 = *(int *)(arg1 + 0x20);
  if (iVar6 == -1) {
    if (*(int64_t *)(arg1 + 0x10) != 0) {
      iVar6 = FUN_00e7dde0();
      goto LAB_00d8a51d;
    }
LAB_00d8a579:
    bVar1 = false;
    local_40 = (int64_t *)0x0;
  }
  else {
LAB_00d8a51d:
    if (iVar6 < 4) goto LAB_00d8a579;
    if ((((*(int *)(arg1 + 0x20) == -1) && (*(int64_t *)(arg1 + 0x10) != 0)) &&
        (FUN_00e7dde0(), *(int *)(arg1 + 0x20) == -1)) &&
       (*(int64_t *)(arg1 + 0x10) != 0)) {
      FUN_00e7dde0();
    }
    uVar8 = FUN_00e7b4e0();
    FUN_00d8e3d0(param_1,uVar8);
    lVar2 = g_027816d0;
    if (local_58 == (int64_t *)0x0) {
      local_40 = (int64_t *)0x0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      local_40 = local_58;
      if (local_50 == '\0') {
        FUN_00d50b00();
        lVar2 = g_027816d0;
      }
    }
    g_027816d0 = lVar2;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*local_40 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = g_027816e0;
    if (cVar4 != '\0') {
      if ((*(int *)(arg1 + 0x20) == -1) && (*(int64_t *)(arg1 + 0x10) != 0)) {
        FUN_00e7dde0();
      }
      uVar8 = FUN_00e7b4e0();
      FUN_00d8e3d0(param_1,uVar8);
      if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      lVar2 = g_027816c8;
      if (g_027816c8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00d8aa9f;
    }
    if (g_027816e0 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*local_40 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      if ((*(int *)(arg1 + 0x20) == -1) && (*(int64_t *)(arg1 + 0x10) != 0)) {
        FUN_00e7dde0();
      }
      uVar8 = FUN_00e7b4e0();
      FUN_00d8e3d0(param_1,uVar8);
      if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      lVar2 = g_027816d8;
      if (g_027816d8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00d8aa9f;
    }
  }
  iVar6 = *(int *)(arg1 + 0x20);
  if (iVar6 == -1) {
    if (*(int64_t *)(arg1 + 0x10) != 0) {
      iVar6 = FUN_00e7dde0();
      goto LAB_00d8a59d;
    }
  }
  else {
LAB_00d8a59d:
    if (1 < iVar6) {
      if ((((*(int *)(arg1 + 0x20) == -1) && (*(int64_t *)(arg1 + 0x10) != 0)) &&
          (FUN_00e7dde0(), *(int *)(arg1 + 0x20) == -1)) &&
         (*(int64_t *)(arg1 + 0x10) != 0)) {
        FUN_00e7dde0();
      }
      uVar8 = FUN_00e7b4e0();
      FUN_00d8e3d0(param_1,uVar8);
      if (local_58 == local_40) {
        if ((bVar1) || (local_58 == (int64_t *)0x0)) {
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar1 = true;
          if (local_50 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((!bVar1) || (local_40 == (int64_t *)0x0)) goto LAB_00d8a7d8;
        local_40 = local_58;
        FUN_00d50b20();
        bVar1 = true;
      }
      else if ((bVar1) && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
        local_40 = local_58;
        bVar1 = true;
      }
      else {
LAB_00d8a7d8:
        local_40 = local_58;
        bVar1 = true;
      }
      lVar2 = g_026d7d98;
      if (g_026d7d98 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*local_40 + 0x50))();
      lVar3 = g_02781660;
      cVar5 = '\x01';
      if (cVar4 == '\0') {
        if (g_02781660 != 0) {
          FUN_00d50b00();
        }
        cVar5 = (**(code **)(*local_40 + 0x50))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') {
        if ((*(int *)(arg1 + 0x20) == -1) && (*(int64_t *)(arg1 + 0x10) != 0)) {
          FUN_00e7dde0();
        }
        uVar8 = FUN_00e7b4e0();
        FUN_00d8e3d0(param_1,uVar8);
        if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        FUN_00d8dbf0();
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_00d8aa9f;
      }
    }
  }
  FUN_00d50b00();
  FUN_00d8dbf0();
  FUN_00d50b20();
  *(byte *)((int64_t)puVar7 + 0x24) = *(byte *)((int64_t)puVar7 + 0x24) & 0xfe;
LAB_00d8aa9f:
  *this_ptr = puVar7;
  *(void*)(this_ptr + 1) = 1;
  if (!bVar1) {
    return;
  }
  if (local_40 == (int64_t *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}

