// Function: FUN_0009e200
// Address: 0009e200
// Size: 1555 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_0009e200(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  byte bVar2;
  byte bVar3;
  void*puVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t *plVar7;
  int64_t this_ptr;
  int64_t *plVar8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int local_40;
  
  bVar2 = 1;
  if ((*(int64_t *)(this_ptr + 0x78) != 0) && (*(int64_t *)(this_ptr + 0x88) != 0)) {
    FUN_01e40eb0();
    if (local_58 == (int64_t *)0x0) {
      bVar3 = 0;
    }
    else {
      FUN_01f27fe0();
      bVar3 = (**(code **)(*local_68 + 0x450))();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar3 = bVar3 ^ 1;
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar2 = 1;
    if (bVar3 != 0) {
      if (*(int64_t *)(this_ptr + 0xd8) == 0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_02572358;
        (*g_02572370)();
        lVar6 = *(int64_t *)(this_ptr + 0xd8);
        *(void**)(this_ptr + 0xd8) = puVar4;
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d216c0();
      FUN_006c5ea0();
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_58 = local_68;
      local_50 = '\0';
      FUN_00d214d0();
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar2 = 0;
    }
  }
  plVar7 = local_58;
  if ((((param_2 != '\0') && (*(int64_t *)(this_ptr + 0x88) == 0)) &&
      (FUN_01e53c20(), local_a8 != '\0')) && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = (int64_t *)*arg1;
  if (plVar5 == (int64_t *)0x0) {
    plVar5 = (int64_t *)0x0;
    plVar8 = *(int64_t **)(this_ptr + 0x78);
    if (plVar8 == (int64_t *)0x0) goto LAB_0009e6b0;
  }
  else {
    if (*(int64_t *)(this_ptr + 0x90) == 0) {
      FUN_0009ddd0();
      plVar5 = (int64_t *)*arg1;
    }
    plVar8 = *(int64_t **)(this_ptr + 0x78);
    if (plVar8 == plVar5) goto LAB_0009e6b0;
  }
  if (plVar8 == (int64_t *)0x0) {
    if (plVar5 == (int64_t *)0x0) goto LAB_0009e6b0;
    lVar6 = *(int64_t *)(this_ptr + 0x10);
    lVar1 = *(int64_t *)(this_ptr + 0x90);
    if (lVar6 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x10) = lVar1;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    plVar7 = (int64_t *)*arg1;
joined_r0x0009e450:
    if (plVar7 == (int64_t *)0x0) goto LAB_0009e6b0;
  }
  else {
    (**(code **)(*plVar8 + 0x478))();
    (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x4a0))();
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_0009e4b6;
      }
    }
    else if (local_58 != (int64_t *)0x0) {
LAB_0009e4b6:
      local_50 = '\0';
      local_58 = (int64_t *)0x0;
      local_40 = -1;
      while( true ) {
        lVar6 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((int64_t)plVar7 + 0xc) <= local_40) break;
        local_58 = *(int64_t **)(plVar7[2] + 8 + lVar6 * 8);
        (**(code **)(*local_58 + 0x560))();
        (**(code **)(*local_58 + 0x558))();
      }
      FUN_000a9680();
      FUN_00d50b20();
    }
    plVar7 = (int64_t *)*arg1;
    if (plVar7 == (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x478))();
      plVar7 = (int64_t *)*arg1;
      goto joined_r0x0009e450;
    }
  }
  plVar5 = local_58;
  (**(code **)(*plVar7 + 0x4a0))();
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_0009e5c6;
    }
  }
  else if (local_58 != (int64_t *)0x0) {
LAB_0009e5c6:
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_40 = -1;
    while( true ) {
      lVar6 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)((int64_t)plVar5 + 0xc) <= local_40) break;
      local_58 = *(int64_t **)(plVar5[2] + 8 + lVar6 * 8);
      (**(code **)(*local_58 + 0x560))();
      (**(code **)(*local_58 + 0x558))();
    }
    FUN_000a9680();
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x9e0))();
LAB_0009e6b0:
  if (*(int64_t *)(this_ptr + 0x88) != 0) {
    FUN_01e40eb0();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_58 != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x478))();
    }
  }
  if (param_2 != '\0') {
    if (*arg1 == 0) {
      lVar6 = *(int64_t *)(this_ptr + 0x10);
      lVar1 = *(int64_t *)(this_ptr + 0x88);
      if (lVar6 != lVar1) {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        *(int64_t *)(this_ptr + 0x10) = lVar1;
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      lVar6 = *(int64_t *)(this_ptr + 0x88);
      plVar7 = *(int64_t **)(this_ptr + 0x90);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar7 + 0x450))();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if ((*(int64_t *)(this_ptr + 0x78) != 0) && (*(int64_t *)(this_ptr + 0x88) != 0)) {
    FUN_01e40eb0();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((bool)(bVar2 & local_58 != (int64_t *)0x0)) &&
       (lVar6 = *(int64_t *)(this_ptr + 0xd8), lVar6 != 0)) {
      FUN_00d50b00();
      FUN_006c5ee0();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
  }
  *(int64_t *)(this_ptr + 0x78) = *arg1;
  return;
}

