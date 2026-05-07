// Function: FUN_019ad3e0
// Address: 019ad3e0
// Size: 633 bytes
// Class: MUEditorSubview
// String references:
//   "MUEditorSubview"

void FUN_019ad3e0(void)

{
  uint uVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t **pplVar6;
  void*arg1;
  int64_t this_ptr;
  int64_t *plVar7;
  int64_t lVar8;
  undefined7 uVar10;
  uint64_t uVar9;
  int64_t *plVar11;
  int64_t *local_48;
  char local_40;
  uint64_t local_38;
  
  lVar5 = *(int64_t *)(this_ptr + 0x38);
  uVar1 = *(uint *)(lVar5 + 0xc);
  if ((int)uVar1 < 1) {
    return;
  }
  lVar8 = 0;
  plVar11 = (int64_t *)0x0;
  local_38 = 0;
  do {
    plVar2 = *(int64_t **)(*(int64_t *)(lVar5 + 0x10) + lVar8 * 8);
    local_48 = plVar2;
    local_40 = '\0';
    if ((g_02702df0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
    pplVar6 = (int64_t **)&g_02802688;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar6 = &local_48;
      if (cVar3 == '\0') {
        pplVar6 = (int64_t **)&g_02802688;
      }
    }
    plVar7 = *pplVar6;
    uVar10 = (undefined7)((uint64_t)plVar2 >> 8);
    if (plVar7 == plVar11) {
      if (((char)local_38 == '\0') && (plVar7 != (int64_t *)0x0)) {
        plVar7 = plVar11;
        if (*(char *)(pplVar6 + 1) != '\0') goto LAB_019ad4b4;
        uVar9 = CONCAT71(uVar10,1);
        FUN_00d50b00();
      }
      else {
        uVar9 = local_38 & 0xffffffff;
      }
    }
    else {
      if (*(char *)(pplVar6 + 1) == '\0') {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        uVar9 = CONCAT71(uVar10,1);
        if (((char)local_38 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar11 = plVar7;
          goto LAB_019ad500;
        }
      }
      else {
        if (((char)local_38 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_019ad4b4:
        *(void*)(pplVar6 + 1) = 0;
      }
      uVar9 = CONCAT71(uVar10,1);
      plVar11 = plVar7;
    }
LAB_019ad500:
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar11 != (int64_t *)0x0) {
      (**(code **)(*plVar11 + 0x928))();
      plVar7 = local_48;
      plVar2 = (int64_t *)*arg1;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == plVar2) {
        (**(code **)(*plVar11 + 0x620))();
      }
    }
    if ((uint64_t)uVar1 - 1 == lVar8) {
      if ((char)uVar9 == '\0') {
        return;
      }
      if (plVar11 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    lVar5 = *(int64_t *)(this_ptr + 0x38);
    lVar8 = lVar8 + 1;
    local_38 = uVar9 & 0xffffffff;
  } while( true );
}

