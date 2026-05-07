// Function: FUN_019a68b0
// Address: 019a68b0
// Size: 819 bytes
// Class: MUEditorSubview
// String references:
//   "MUEditorSubview"

void* FUN_019a68b0(uint32_t param_1)

{
  int iVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar7;
  int64_t *plVar8;
  uint uVar9;
  int64_t **pplVar10;
  int64_t *local_60;
  char local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint local_3c;
  uint64_t local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  lVar4 = *(int64_t *)(arg1 + 0x38);
  uVar9 = *(uint *)(lVar4 + 0xc);
  if (0 < (int)uVar9) {
    local_48 = (uint64_t)uVar9;
    local_50 = 0;
    plVar7 = (int64_t *)0x0;
    do {
      local_3c = uVar9 - 1;
      plVar8 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + (uint64_t)(uVar9 - 1) * 8);
      local_60 = plVar8;
      local_58 = '\0';
      uVar5 = 0;
      if ((g_02702df0 == '\0') && (uVar5 = ___cxa_guard_acquire(), (int)uVar5 != 0)) {
        g_027142d8 = FUN_0006d940();
        g_027142c0 = "MUEditorSubview";
        g_027142c8 = 0x168;
        g_027142d0 = FUN_0034d130;
        g_027142e0 = 0;
        ram_00000000027142e8 = 0;
        g_027142f0 = 0;
        g_02714368 = 0;
        ram_0000000002714370 = 0;
        g_02714378 = 0;
        g_0271437a = 1;
        g_027142f8 = 0;
        ram_0000000002714300 = 0;
        g_02714308 = 0;
        ram_0000000002714310 = 0;
        g_02714318 = 0;
        ram_0000000002714320 = 0;
        g_02714328 = 0;
        ram_0000000002714330 = 0;
        g_02714338 = 0;
        ram_0000000002714340 = 0;
        g_02714348 = 0;
        ram_0000000002714350 = 0;
        g_02714358 = 0;
        ram_0000000002714360 = 0;
        g_02714383 = 0;
        g_0271437b = 0;
        uVar5 = ___cxa_guard_release();
      }
      pplVar10 = (int64_t **)&g_02802688;
      if (plVar8 != (int64_t *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        uVar5 = FUN_00e85ea0();
        pplVar10 = &local_60;
        if ((char)uVar5 == '\0') {
          pplVar10 = (int64_t **)&g_02802688;
        }
      }
      plVar8 = *pplVar10;
      cVar2 = (char)local_50;
      if (plVar8 == plVar7) {
        if ((cVar2 == '\0') && (plVar8 != (int64_t *)0x0)) {
          uVar5 = local_50;
          plVar8 = plVar7;
          if (*(char *)(pplVar10 + 1) != '\0') goto LAB_019a69c7;
          local_38 = CONCAT71((int7)((uint64_t)local_50 >> 8),1);
          FUN_00d50b00();
          uVar6 = local_48;
          uVar9 = local_3c;
        }
        else {
          local_38 = local_50;
          uVar6 = local_48;
          plVar8 = plVar7;
          uVar9 = local_3c;
        }
      }
      else if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar8 != (int64_t *)0x0) {
          uVar5 = FUN_00d50b00();
        }
        uVar9 = local_3c;
        uVar6 = local_48;
        local_38 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        if ((cVar2 != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((cVar2 != '\0') && (plVar7 != (int64_t *)0x0)) {
          uVar5 = FUN_00d50b20();
        }
LAB_019a69c7:
        *(void*)(pplVar10 + 1) = 0;
        local_38 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        uVar6 = local_48;
        uVar9 = local_3c;
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((plVar8 != (int64_t *)0x0) &&
         (cVar2 = (**(code **)(*plVar8 + 0x960))(param_1), cVar2 != '\0')) {
        local_58 = '\0';
        local_60 = plVar8;
        FUN_00d21140();
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((int64_t)uVar6 < 2) goto LAB_019a6b8d;
      local_48 = uVar6 - 1;
      lVar4 = *(int64_t *)(arg1 + 0x38);
      local_50 = local_38;
      plVar7 = plVar8;
    } while( true );
  }
  cVar2 = '\0';
  plVar8 = (int64_t *)0x0;
  iVar1 = *(int *)((int64_t)puVar3 + 0xc);
joined_r0x019a6bba:
  if (iVar1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    FUN_00d50b20();
  }
  else {
    *this_ptr = puVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  if ((cVar2 != '\0') && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
LAB_019a6b8d:
  cVar2 = (char)local_38;
  iVar1 = *(int *)((int64_t)puVar3 + 0xc);
  goto joined_r0x019a6bba;
}

