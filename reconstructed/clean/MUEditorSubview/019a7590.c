// Function: FUN_019a7590
// Address: 019a7590
// Size: 638 bytes
// Class: MUEditorSubview

void* FUN_019a7590(uint32_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint uVar6;
  int64_t *plVar7;
  int64_t arg1;
  void*this_ptr;
  int64_t **pplVar8;
  uint64_t local_80;
  int64_t *local_60;
  char local_58;
  void*local_50;
  uint64_t local_48;
  uint64_t local_40;
  int64_t *local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  local_50 = puVar3;
  (*g_02572370)();
  lVar4 = *(int64_t *)(arg1 + 0x38);
  uVar6 = *(uint *)(lVar4 + 0xc);
  local_80 = (uint64_t)uVar6;
  if (0 < (int)uVar6) {
    local_38 = (int64_t *)0x0;
    local_48 = 0;
    do {
      uVar6 = uVar6 - 1;
      plVar1 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + (uint64_t)uVar6 * 8);
      local_58 = '\0';
      local_60 = plVar1;
      uVar5 = FUN_0082d880();
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        uVar5 = FUN_00e85ea0();
        pplVar8 = &local_60;
        if ((char)uVar5 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      plVar7 = *pplVar8;
      if (plVar7 == local_38) {
        if (((char)local_48 == '\0') && (plVar7 != (int64_t *)0x0)) {
          plVar7 = local_38;
          if (*(char *)(pplVar8 + 1) != '\0') goto LAB_019a7696;
          local_40 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          FUN_00d50b00();
          plVar7 = local_38;
        }
        else {
          local_40 = local_48;
          plVar7 = local_38;
        }
      }
      else if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar7 != (int64_t *)0x0) {
          uVar5 = FUN_00d50b00();
        }
        local_40 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        if (((char)local_48 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (((char)local_48 != '\0') && (local_38 != (int64_t *)0x0)) {
          uVar5 = FUN_00d50b20();
        }
LAB_019a7696:
        *(void*)(pplVar8 + 1) = 0;
        local_40 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      }
      local_38 = plVar7;
      if ((local_58 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar5 = local_40;
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
        plVar1 = local_38;
        FUN_01e437f0(param_1);
        cVar2 = (**(code **)(*plVar1 + 0x920))();
        if (arg1 != 0) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          local_60 = local_38;
          local_58 = '\0';
          FUN_00d21140();
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((int64_t)local_80 < 2) goto LAB_019a77ce;
      local_80 = local_80 - 1;
      lVar4 = *(int64_t *)(arg1 + 0x38);
      local_48 = uVar5;
    } while( true );
  }
  uVar5 = 0;
  local_38 = (int64_t *)0x0;
LAB_019a77ce:
  puVar3 = local_50;
  if (*(int *)((int64_t)local_50 + 0xc) == 0) {
    puVar3 = (void*)0x0;
  }
  else {
    FUN_00d50b00();
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  if (((char)uVar5 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this_ptr;
}

