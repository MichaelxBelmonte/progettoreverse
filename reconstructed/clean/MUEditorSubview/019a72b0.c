// Function: FUN_019a72b0
// Address: 019a72b0
// Size: 543 bytes
// Class: MUEditorSubview

void* FUN_019a72b0(uint32_t param_1)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t *plVar3;
  bool bVar4;
  char cVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar8;
  int64_t **pplVar9;
  int64_t *local_78;
  char local_70;
  int64_t *local_40;
  
  lVar6 = *(int64_t *)(arg1 + 0x38);
  if (*(int *)(lVar6 + 0xc) < 1) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  uVar7 = (uint64_t)(*(int *)(lVar6 + 0xc) - 1);
  local_40 = (int64_t *)0x0;
  bVar2 = false;
  do {
    plVar1 = *(int64_t **)(*(int64_t *)(lVar6 + 0x10) + uVar7 * 8);
    local_70 = '\0';
    local_78 = plVar1;
    FUN_0082d880();
    pplVar9 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar5 = FUN_00e85ea0();
      pplVar9 = &local_78;
      if (cVar5 == '\0') {
        pplVar9 = (int64_t **)&g_02802688;
      }
    }
    plVar8 = *pplVar9;
    if (plVar8 == local_40) {
      plVar3 = local_40;
      bVar4 = bVar2;
      if ((!bVar2) && (plVar8 != (int64_t *)0x0)) {
        plVar8 = local_40;
        if (*(char *)(pplVar9 + 1) != '\0') goto LAB_019a738a;
        FUN_00d50b00();
        bVar4 = true;
      }
    }
    else if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar4 = true;
      plVar3 = plVar8;
      if ((bVar2) && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((bVar2) && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_019a738a:
      *(void*)(pplVar9 + 1) = 0;
      plVar3 = plVar8;
      bVar4 = true;
    }
    bVar2 = bVar4;
    local_40 = plVar3;
    if ((local_70 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      FUN_01e437f0(param_1);
      cVar5 = (**(code **)(*local_40 + 0x920))();
      if (arg1 != 0) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') {
        *(void*)(this_ptr + 1) = 0;
        if (!bVar2) {
          FUN_00d50b00();
        }
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
        return this_ptr;
      }
    }
    if ((int64_t)uVar7 < 1) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      if (!bVar2) {
        return this_ptr;
      }
      if (local_40 == (int64_t *)0x0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
    uVar7 = uVar7 - 1;
    lVar6 = *(int64_t *)(arg1 + 0x38);
  } while( true );
}

