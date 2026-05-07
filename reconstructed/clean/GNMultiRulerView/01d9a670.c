// Function: FUN_01d9a670
// Address: 01d9a670
// Size: 1119 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"

void FUN_01d9a670(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t **pplVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t *plVar7;
  bool bVar8;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  int local_40;
  uint64_t local_3c;
  
  if (*(int64_t *)(arg1 + 0x150) == 0) {
    local_50 = '\0';
    plVar7 = (int64_t *)0x0;
  }
  else {
    FUN_01cf3f40();
    plVar7 = local_58;
  }
  local_58 = plVar7;
  if ((g_027f1760 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_027f16b0 = FUN_0006d940();
    g_027f1698 = "GNMultiRulerView";
    g_027f16a0 = 0x140;
    g_027f16a8 = FUN_01da14a0;
    g_027f16b8 = 0;
    ram_00000000027f16c0 = 0;
    g_027f16c8 = 0;
    ram_00000000027f16d0 = 0;
    g_027f16d8 = 0;
    ram_00000000027f16e0 = 0;
    g_027f16e8 = 0;
    ram_00000000027f16f0 = 0;
    g_027f16f8 = 0;
    ram_00000000027f1700 = 0;
    g_027f1708 = 0;
    ram_00000000027f1710 = 0;
    g_027f1718 = 0;
    ram_00000000027f1720 = 0;
    g_027f1728 = 0;
    ram_00000000027f1730 = 0;
    g_027f1738 = 0;
    ram_00000000027f1740 = 0;
    g_027f1748 = 0;
    ram_00000000027f1750 = 0;
    g_027f1758 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_01d9a6f2:
    pplVar4 = &g_02802688;
    plVar7 = g_02802688;
    if (g_02802690 != '\0') goto LAB_01d9a702;
LAB_01d9a715:
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01d9a6f2;
    pplVar4 = &local_58;
    plVar7 = local_58;
    if (local_50 == '\0') goto LAB_01d9a715;
LAB_01d9a702:
    *(void*)(pplVar4 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar7 == (int64_t *)0x0) || (lVar6 = plVar7[0x27], lVar6 == 0)) {
LAB_01d9a7bf:
    if (*(int64_t *)(arg1 + 0x158) == 0) {
      local_50 = '\0';
      plVar1 = (int64_t *)0x0;
    }
    else {
      FUN_01cf3f40();
      plVar1 = local_58;
    }
    local_58 = plVar1;
    if ((g_027f1760 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      g_027f16b0 = FUN_0006d940();
      g_027f1698 = "GNMultiRulerView";
      g_027f16a0 = 0x140;
      g_027f16a8 = FUN_01da14a0;
      g_027f16b8 = 0;
      ram_00000000027f16c0 = 0;
      g_027f16c8 = 0;
      ram_00000000027f16d0 = 0;
      g_027f16d8 = 0;
      ram_00000000027f16e0 = 0;
      g_027f16e8 = 0;
      ram_00000000027f16f0 = 0;
      g_027f16f8 = 0;
      ram_00000000027f1700 = 0;
      g_027f1708 = 0;
      ram_00000000027f1710 = 0;
      g_027f1718 = 0;
      ram_00000000027f1720 = 0;
      g_027f1728 = 0;
      ram_00000000027f1730 = 0;
      g_027f1738 = 0;
      ram_00000000027f1740 = 0;
      g_027f1748 = 0;
      ram_00000000027f1750 = 0;
      g_027f1758 = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (int64_t *)0x0) {
LAB_01d9a828:
      pplVar4 = &g_02802688;
      plVar1 = g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_01d9a828;
      pplVar4 = &local_58;
      plVar1 = local_58;
    }
    if (plVar7 != plVar1) {
      if (*(char *)(pplVar4 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar8 = plVar7 != (int64_t *)0x0;
        plVar7 = plVar1;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      else {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        *(void*)(pplVar4 + 1) = 0;
        plVar7 = plVar1;
      }
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar7 == (int64_t *)0x0) || (lVar6 = plVar7[0x27], lVar6 == 0)) {
LAB_01d9a93e:
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      goto joined_r0x01d9a94d;
    }
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_3c = 0;
    lVar5 = 0;
    do {
      local_40 = (int)lVar5;
      local_48 = lVar6;
      if (*(int *)(lVar6 + 0xc) <= local_40) {
        FUN_01da2210();
        goto LAB_01d9a93e;
      }
      local_58 = *(int64_t **)(*(int64_t *)(lVar6 + 0x10) + lVar5 * 8);
      lVar5 = lVar5 + 1;
    } while (local_58[2] != *param_2);
    local_40 = (int)lVar5 + -1;
    *(void*)(this_ptr + 1) = 0;
    lVar6 = local_58[3];
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_3c = 0;
    lVar5 = 0;
    do {
      local_40 = (int)lVar5;
      local_48 = lVar6;
      if (*(int *)(lVar6 + 0xc) <= local_40) {
        FUN_01da2210();
        goto LAB_01d9a7bf;
      }
      local_58 = *(int64_t **)(*(int64_t *)(lVar6 + 0x10) + lVar5 * 8);
      lVar5 = lVar5 + 1;
    } while (local_58[2] != *param_2);
    local_40 = (int)lVar5 + -1;
    *(void*)(this_ptr + 1) = 0;
    lVar6 = local_58[3];
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
  }
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  FUN_01da2210();
joined_r0x01d9a94d:
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

