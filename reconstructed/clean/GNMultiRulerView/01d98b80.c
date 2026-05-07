// Function: FUN_01d98b80
// Address: 01d98b80
// Size: 591 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"

void FUN_01d98b80(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t **pplVar6;
  int64_t lVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar8;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  int local_38;
  uint64_t local_34;
  
  if (this_ptr[0x2a] == 0) {
    local_48 = '\0';
    plVar3 = (int64_t *)0x0;
  }
  else {
    FUN_01cf3f40();
    plVar3 = local_50;
  }
  local_50 = plVar3;
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
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') {
      pplVar6 = &local_50;
      plVar3 = local_50;
      cVar4 = local_48;
      goto joined_r0x01d98c1e;
    }
  }
  pplVar6 = &g_02802688;
  plVar3 = g_02802688;
  cVar4 = g_02802690;
joined_r0x01d98c1e:
  if (cVar4 == '\0') {
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar3 != (int64_t *)0x0) && (lVar1 = plVar3[0x27], lVar1 != 0)) {
    local_48 = '\0';
    local_50 = (int64_t *)0x0;
    local_34 = 0;
    lVar7 = 0;
    do {
      local_38 = (int)lVar7;
      local_40 = lVar1;
      if (*(int *)(lVar1 + 0xc) <= local_38) goto LAB_01d98cde;
      plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8);
      plVar8 = (int64_t *)plVar2[2];
      lVar7 = lVar7 + 1;
      local_50 = plVar2;
    } while (plVar8 != (int64_t *)*arg1);
    local_38 = (int)lVar7 + -1;
    if ((int64_t *)plVar2[3] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)plVar2[3] + 0x478))();
      plVar8 = (int64_t *)plVar2[2];
    }
    (**(code **)(*plVar8 + 0x478))();
    local_34 = CONCAT44(local_34._4_4_,0xffffffff);
    (**(code **)(*this_ptr + 0x928))();
LAB_01d98cde:
    FUN_01da2210();
  }
  FUN_01d98e50();
  (**(code **)(*this_ptr + 0x928))();
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

