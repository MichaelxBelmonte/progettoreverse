// Function: FUN_019a6f50
// Address: 019a6f50
// Size: 657 bytes
// Class: MUEditorSubview

void* FUN_019a6f50(uint64_t param_1,void*param_2)

{
  int iVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  void*puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t *plVar8;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar9;
  char cVar10;
  int64_t **pplVar11;
  uint64_t local_68;
  int64_t *local_58;
  char local_50;
  void*local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  lVar5 = *(int64_t *)(arg1 + 0x38);
  uVar7 = *(uint *)(lVar5 + 0xc);
  local_68 = (uint64_t)uVar7;
  if (0 < (int)uVar7) {
    plVar9 = (int64_t *)0x0;
    local_40 = 0;
    local_48 = puVar4;
    do {
      uVar7 = uVar7 - 1;
      plVar2 = *(int64_t **)(*(int64_t *)(lVar5 + 0x10) + (uint64_t)uVar7 * 8);
      local_50 = '\0';
      local_58 = plVar2;
      uVar6 = FUN_0082d880();
      pplVar11 = (int64_t **)&g_02802688;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x360))();
        uVar6 = FUN_00e85ea0();
        pplVar11 = &local_58;
        if ((char)uVar6 == '\0') {
          pplVar11 = (int64_t **)&g_02802688;
        }
      }
      puVar4 = local_48;
      plVar8 = *pplVar11;
      if (plVar8 == plVar9) {
        plVar3 = plVar9;
        local_38 = local_40;
        if (((char)local_40 == '\0') && (plVar8 != (int64_t *)0x0)) {
          plVar8 = plVar9;
          if (*(char *)(pplVar11 + 1) != '\0') goto LAB_019a7055;
          local_38 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
          FUN_00d50b00();
        }
      }
      else if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar8 != (int64_t *)0x0) {
          uVar6 = FUN_00d50b00();
        }
        puVar4 = local_48;
        local_38 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        plVar3 = plVar8;
        if (((char)local_40 != '\0') && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (((char)local_40 != '\0') && (plVar9 != (int64_t *)0x0)) {
          uVar6 = FUN_00d50b20();
        }
LAB_019a7055:
        *(void*)(pplVar11 + 1) = 0;
        local_38 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        plVar3 = plVar8;
        puVar4 = local_48;
      }
      plVar9 = plVar3;
      if ((local_50 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 0x928))();
        plVar8 = local_58;
        plVar2 = (int64_t *)*param_2;
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar8 == plVar2) {
          local_50 = '\0';
          local_58 = plVar9;
          FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((int64_t)local_68 < 2) goto LAB_019a718f;
      local_68 = local_68 - 1;
      lVar5 = *(int64_t *)(arg1 + 0x38);
      local_40 = local_38;
    } while( true );
  }
  cVar10 = '\0';
  plVar9 = (int64_t *)0x0;
  iVar1 = *(int *)((int64_t)puVar4 + 0xc);
joined_r0x019a71b2:
  if (iVar1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    FUN_00d50b20();
  }
  else {
    *this_ptr = puVar4;
    *(void*)(this_ptr + 1) = 1;
  }
  if ((cVar10 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
LAB_019a718f:
  cVar10 = (char)local_38;
  iVar1 = *(int *)((int64_t)puVar4 + 0xc);
  goto joined_r0x019a71b2;
}

