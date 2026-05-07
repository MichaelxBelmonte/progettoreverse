// Function: FUN_00c75180
// Address: 00c75180
// Size: 1053 bytes
// Class: GNValue

void FUN_00c75180(void)

{
  int64_t *plVar1;
  void*puVar2;
  bool bVar3;
  bool bVar4;
  int64_t *plVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t this_ptr;
  int64_t lVar9;
  int64_t lVar10;
  int64_t local_40;
  
  *(void*)(this_ptr + 0x50) = 1;
  FUN_00d216c0();
  FUN_00d216c0();
  plVar5 = (int64_t *)FUN_00023900();
  (**(code **)(*plVar5 + 0x18))();
  plVar1 = *(int64_t **)(this_ptr + 0x28);
  if (plVar1 == plVar5) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x28) = plVar5;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e39cc0(1,1);
  plVar5 = (int64_t *)FUN_00023900();
  (**(code **)(*plVar5 + 0x18))();
  plVar1 = *(int64_t **)(this_ptr + 0x48);
  if (plVar1 == plVar5) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x48) = plVar5;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e39cc0(1,1);
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02578b00;
  (*g_02578b18)();
  puVar2 = *(void**)(this_ptr + 0x30);
  if (puVar2 == puVar6) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x30) = puVar6;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d7a0f0(1,1);
  lVar7 = *(int64_t *)(this_ptr + 0x58);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  FUN_00d7a410();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x58);
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0x120))();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar7 = *(int64_t *)(this_ptr + 0x58);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  FUN_00e3a1c0();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  lVar7 = *(int64_t *)(this_ptr + 0x40);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  FUN_00e39f80();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  local_40 = *(int64_t *)(this_ptr + 0x38);
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00e39f80();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00d216c0();
  FUN_00d216c0();
  if (*(int64_t *)(this_ptr + 0x30) != 0) {
    *(void*)(this_ptr + 0x30) = 0;
    FUN_00d50b20();
  }
  lVar7 = *(int64_t *)(this_ptr + 0x28);
  if (0 < *(int *)(*(int64_t *)(lVar7 + 0x10) + 0xc)) {
    lVar8 = 0;
    bVar3 = false;
    lVar9 = 0;
    do {
      (**(code **)(**(int64_t **)(*(int64_t *)(*(int64_t *)(lVar7 + 0x10) + 0x10) + lVar8 * 8) +
                  0x128))();
      if (local_40 == lVar9) {
        lVar10 = lVar9;
        bVar4 = bVar3;
        if ((!bVar3) && (local_40 != 0)) {
          FUN_00d50b00();
          goto LAB_00c75505;
        }
      }
      else {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        lVar10 = local_40;
        bVar4 = true;
        if ((bVar3) && (lVar9 != 0)) {
          FUN_00d50b20();
          lVar9 = local_40;
LAB_00c75505:
          lVar10 = lVar9;
          bVar4 = true;
        }
      }
      bVar3 = bVar4;
      if (lVar10 != 0) {
        FUN_00e3a1c0();
        local_40 = lVar10;
      }
      lVar8 = lVar8 + 1;
      lVar7 = *(int64_t *)(this_ptr + 0x28);
      lVar9 = lVar10;
    } while (lVar8 < *(int *)(*(int64_t *)(lVar7 + 0x10) + 0xc));
    if ((bVar3) && (lVar10 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

