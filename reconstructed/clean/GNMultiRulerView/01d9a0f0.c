// Function: FUN_01d9a0f0
// Address: 01d9a0f0
// Size: 1176 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"

void FUN_01d9a0f0(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar7;
  bool bVar8;
  int64_t local_70;
  uint8_t local_68;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  int local_40;
  uint64_t local_3c;
  
  if (this_ptr[0x2a] == 0) {
    local_50 = '\0';
    plVar7 = (int64_t *)0x0;
  }
  else {
    FUN_01cf3f40();
    plVar7 = local_58;
  }
  local_58 = plVar7;
  if ((g_027f1760 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
LAB_01d9a173:
    pplVar5 = &g_02802688;
    plVar7 = g_02802688;
    if (g_02802690 != '\0') goto LAB_01d9a183;
LAB_01d9a196:
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01d9a173;
    pplVar5 = &local_58;
    plVar7 = local_58;
    if (local_50 == '\0') goto LAB_01d9a196;
LAB_01d9a183:
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar7 == (int64_t *)0x0) || (lVar1 = plVar7[0x27], lVar1 == 0)) {
LAB_01d9a2a1:
    if (this_ptr[0x2b] == 0) {
      local_50 = '\0';
      plVar2 = (int64_t *)0x0;
    }
    else {
      FUN_01cf3f40();
      plVar2 = local_58;
    }
    local_58 = plVar2;
    if ((g_027f1760 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
    if (plVar2 == (int64_t *)0x0) {
LAB_01d9a309:
      pplVar5 = &g_02802688;
      plVar2 = g_02802688;
    }
    else {
      (**(code **)(*plVar2 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01d9a309;
      pplVar5 = &local_58;
      plVar2 = local_58;
    }
    if (plVar7 != plVar2) {
      if (*(char *)(pplVar5 + 1) == '\0') {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar8 = plVar7 != (int64_t *)0x0;
        plVar7 = plVar2;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      else {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        *(void*)(pplVar5 + 1) = 0;
        plVar7 = plVar2;
      }
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (int64_t *)0x0) {
      return;
    }
    lVar1 = plVar7[0x27];
    if (lVar1 == 0) goto LAB_01d9a40b;
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_3c = 0;
    lVar6 = 0;
    do {
      local_40 = (int)lVar6;
      local_48 = lVar1;
      if (*(int *)(lVar1 + 0xc) <= local_40) goto LAB_01d9a402;
      local_58 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar6 * 8);
      lVar6 = lVar6 + 1;
    } while (local_58[2] != *param_2);
    local_40 = (int)lVar6 + -1;
    if (*arg1 != local_58[3]) {
      (**(code **)(*this_ptr + 0x928))();
    }
  }
  else {
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_3c = 0;
    lVar6 = 0;
    do {
      local_40 = (int)lVar6;
      local_48 = lVar1;
      if (*(int *)(lVar1 + 0xc) <= local_40) {
        FUN_01da2210();
        goto LAB_01d9a2a1;
      }
      local_58 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar6 * 8);
      lVar6 = lVar6 + 1;
    } while (local_58[2] != *param_2);
    local_40 = (int)lVar6 + -1;
    if (*arg1 != local_58[3]) {
      *(int *)(this_ptr + 0x35) = (int)this_ptr[0x35] + 1;
      FUN_01d98b80();
      local_70 = *arg1;
      local_68 = 0;
      FUN_01d98360(&local_70,local_3c._4_4_ + local_40,param_3,param_4,0);
      *(int *)(this_ptr + 0x35) = (int)this_ptr[0x35] + -1;
      (**(code **)(*this_ptr + 0x928))();
    }
  }
LAB_01d9a402:
  FUN_01da2210();
LAB_01d9a40b:
  FUN_00d50b20();
  return;
}

