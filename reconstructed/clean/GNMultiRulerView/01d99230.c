// Function: FUN_01d99230
// Address: 01d99230
// Size: 1464 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"

void FUN_01d99230(int64_t *param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar8;
  uint32_t uVar9;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  
  if (this_ptr[0x36] == 0) {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_0006daf0();
    *puVar6 = &g_02678958;
    puVar6[2] = &g_02679280;
    puVar6[0x27] = 0;
    *(void*)(puVar6 + 0x28) = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    *(void*)((int64_t)puVar6 + 0x164) = 0;
    *(void*)((int64_t)puVar6 + 0x16c) = 0;
    (*g_02678970)();
    lVar1 = this_ptr[0x36];
    this_ptr[0x36] = (int64_t)puVar6;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    plVar7 = (int64_t *)FUN_01da14a0();
    (**(code **)(*plVar7 + 0x18))();
    (**(code **)(*plVar7 + 0x558))();
    (**(code **)(*plVar7 + 0x570))();
    local_40 = plVar7;
    FUN_01cf5bb0();
    lVar1 = this_ptr[0x36];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x450))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    plVar7 = (int64_t *)this_ptr[0x36];
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_48 = '\0';
    local_50 = plVar7;
    FUN_00d21140();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar3 = true;
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_01d994c9;
  }
  pplVar8 = &local_50;
  FUN_01cf3f40();
  plVar7 = local_50;
  if ((g_027f1760 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
LAB_01d992a0:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01d992a0;
  }
  local_40 = *pplVar8;
  if (*pplVar8 == (int64_t *)0x0) {
    bVar3 = false;
    local_40 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar8 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(void*)(pplVar8 + 1) = 0;
    }
    bVar3 = true;
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01d994c9:
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar7 = (int64_t)&g_0268eee0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  uVar9 = FUN_00d500e0();
  lVar1 = *arg1;
  lVar2 = plVar7[2];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b00();
    }
    plVar7[2] = lVar1;
    if (lVar2 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  lVar1 = *param_1;
  lVar2 = plVar7[3];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b00();
    }
    plVar7[3] = lVar1;
    if (lVar2 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  local_48 = '\0';
  local_50 = plVar7;
  FUN_00d23370(uVar9,param_2);
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_40 + 0x450))();
  (**(code **)(*(int64_t *)*arg1 + 0x558))();
  if (*(int *)((int64_t)this_ptr + 0x1ac) == 0) {
    if (this_ptr[0x37] == 0) {
      plVar7 = (int64_t *)FUN_00e8fc40();
      FUN_0006daf0();
      (**(code **)(*plVar7 + 0x18))();
      lVar1 = this_ptr[0x37];
      this_ptr[0x37] = (int64_t)plVar7;
      if (lVar1 != 0) {
        FUN_00d50b20();
        plVar7 = (int64_t *)this_ptr[0x37];
      }
      (**(code **)(*plVar7 + 0x570))();
      lVar1 = this_ptr[0x37];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x450))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    if (*param_1 != 0) {
      (**(code **)(*(int64_t *)this_ptr[0x37] + 0x450))();
      (**(code **)(*(int64_t *)*param_1 + 0x558))();
    }
  }
  (**(code **)(*this_ptr + 0x928))();
  FUN_00d50b20();
  if (bVar3) {
    FUN_00d50b20();
  }
  return;
}

