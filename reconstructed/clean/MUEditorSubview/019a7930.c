// Function: FUN_019a7930
// Address: 019a7930
// Size: 714 bytes
// Class: MUEditorSubview
// String references:
//   "MUEditorSubview"

void FUN_019a7930(uint32_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  int64_t **pplVar5;
  uint64_t uVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar7;
  int64_t *plVar8;
  uint uVar9;
  undefined7 uVar11;
  uint64_t uVar10;
  int64_t *local_58;
  char local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint local_34;
  
  lVar4 = *(int64_t *)(arg1 + 0x38);
  uVar9 = *(uint *)(lVar4 + 0xc);
  if ((int)uVar9 < 1) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  local_48 = (uint64_t)uVar9;
  local_40 = 0;
  plVar8 = (int64_t *)0x0;
  do {
    local_34 = uVar9 - 1;
    plVar1 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + (uint64_t)(uVar9 - 1) * 8);
    local_58 = plVar1;
    local_50 = '\0';
    if ((g_02702df0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
    pplVar5 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar5 = &local_58;
      if (cVar2 == '\0') {
        pplVar5 = (int64_t **)&g_02802688;
      }
    }
    plVar7 = *pplVar5;
    uVar11 = (undefined7)((uint64_t)plVar1 >> 8);
    if (plVar7 == plVar8) {
      if (((char)local_40 == '\0') && (plVar7 != (int64_t *)0x0)) {
        plVar7 = plVar8;
        if (*(char *)(pplVar5 + 1) != '\0') goto LAB_019a7a14;
        uVar10 = CONCAT71(uVar11,1);
        FUN_00d50b00();
        uVar6 = local_48;
        uVar9 = local_34;
      }
      else {
        uVar10 = local_40 & 0xffffffff;
        uVar6 = local_48;
        plVar7 = plVar8;
        uVar9 = local_34;
      }
    }
    else if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      uVar9 = local_34;
      uVar6 = local_48;
      uVar10 = CONCAT71(uVar11,1);
      if (((char)local_40 != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (((char)local_40 != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_019a7a14:
      *(void*)(pplVar5 + 1) = 0;
      uVar10 = CONCAT71(uVar11,1);
      uVar6 = local_48;
      uVar9 = local_34;
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar7 != (int64_t *)0x0) &&
       (cVar2 = (**(code **)(*plVar7 + 0x960))(param_1), cVar2 != '\0')) {
      *(void*)(this_ptr + 1) = 0;
      if ((char)uVar10 == '\0') {
        FUN_00d50b00();
      }
      *this_ptr = plVar7;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
    if ((int64_t)uVar6 < 2) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      if ((char)uVar10 == '\0') {
        return;
      }
      if (plVar7 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    local_48 = uVar6 - 1;
    lVar4 = *(int64_t *)(arg1 + 0x38);
    local_40 = uVar10 & 0xffffffff;
    plVar8 = plVar7;
  } while( true );
}

