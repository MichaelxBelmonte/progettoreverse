// Function: FUN_019a5880
// Address: 019a5880
// Size: 739 bytes
// Class: MUEditorSubview
// String references:
//   "MUEditorSubview"

void* FUN_019a5880(uint64_t param_1,void*param_2)

{
  uint uVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t **pplVar8;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t lVar11;
  int64_t *local_40;
  char local_38;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  lVar7 = *(int64_t *)(arg1 + 0x38);
  uVar1 = *(uint *)(lVar7 + 0xc);
  if ((int)uVar1 < 1) {
    bVar2 = false;
    plVar9 = (int64_t *)0x0;
LAB_019a5b3f:
    *this_ptr = puVar6;
    *(void*)(this_ptr + 1) = 1;
    if ((bVar2) && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    return this_ptr;
  }
  lVar11 = 0;
  plVar9 = (int64_t *)0x0;
  bVar2 = false;
  do {
    plVar10 = *(int64_t **)(*(int64_t *)(lVar7 + 0x10) + lVar11 * 8);
    local_40 = plVar10;
    local_38 = '\0';
    if ((g_02702df0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
      ___cxa_guard_release();
    }
    pplVar8 = (int64_t **)&g_02802688;
    if (plVar10 != (int64_t *)0x0) {
      (**(code **)(*plVar10 + 0x360))();
      cVar4 = FUN_00e85ea0();
      pplVar8 = &local_40;
      if (cVar4 == '\0') {
        pplVar8 = (int64_t **)&g_02802688;
      }
    }
    plVar10 = *pplVar8;
    if (plVar10 == plVar9) {
      if ((!bVar2) && (plVar10 != (int64_t *)0x0)) {
        plVar10 = plVar9;
        if (*(char *)(pplVar8 + 1) != '\0') goto LAB_019a5983;
        bVar2 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar10 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar9 = plVar10;
          bVar2 = true;
          goto LAB_019a59d0;
        }
      }
      else {
        if ((bVar2) && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_019a5983:
        *(void*)(pplVar8 + 1) = 0;
      }
      plVar9 = plVar10;
      bVar2 = true;
    }
LAB_019a59d0:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      (**(code **)(*plVar9 + 0x928))();
      plVar3 = local_40;
      plVar10 = (int64_t *)*param_2;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 == plVar10) {
        local_38 = '\0';
        local_40 = plVar9;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if ((uint64_t)uVar1 - 1 == lVar11) goto LAB_019a5b3f;
    lVar7 = *(int64_t *)(arg1 + 0x38);
    lVar11 = lVar11 + 1;
  } while( true );
}

