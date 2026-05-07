// Function: FUN_01319320
// Address: 01319320
// Size: 1259 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

uint64_t FUN_01319320(void* param_1,char param_2)

{
  int64_t *plVar1;
  uint8_t uVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  void*puVar6;
  undefined7 uVar8;
  int64_t *plVar7;
  char unaff_SIL;
  int64_t lVar9;
  int64_t **pplVar10;
  int64_t *plVar11;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  uint32_t local_48;
  void* local_40;
  char local_3c;
  int64_t *local_38;
  
  local_40 = param_1;
  local_3c = unaff_SIL;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar10 = &local_68;
  FUN_012e78c0();
  plVar7 = local_68;
  if ((g_0270c820 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027e77e8 = FUN_0015ef90();
    g_027e77d0 = "MULSSGenerator";
    g_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    g_027e77e0 = FUN_0015ef30;
    g_027e77f0 = 0;
    ram_00000000027e77f8 = 0;
    g_027e7800 = 0;
    ram_00000000027e7808 = 0;
    g_027e7810 = 0;
    ram_00000000027e7818 = 0;
    g_027e7820 = 0;
    ram_00000000027e7828 = 0;
    g_027e7830 = 0;
    ram_00000000027e7838 = 0;
    g_027e7840 = 0;
    ram_00000000027e7848 = 0;
    g_027e7850 = 0;
    ram_00000000027e7858 = 0;
    g_027e7860 = 0;
    ram_00000000027e7868 = 0;
    g_027e7870 = 0;
    ram_00000000027e7878 = 0;
    g_027e7880 = 0;
    ram_00000000027e7888 = 0;
    g_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_013193b9:
    pplVar10 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_013193b9;
  }
  plVar11 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar10 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar8 = (undefined7)((uint64_t)plVar7 >> 8);
  if (((char)local_40 == '\0') || (param_2 != '\0')) {
    if (plVar11 != (int64_t *)0x0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c6cb0();
      plVar1 = local_68;
      plVar7 = (int64_t *)CONCAT71(uVar8,local_68 == (int64_t *)0x0);
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((plVar1 == (int64_t *)0x0) || (local_3c == '\0')) goto LAB_01319626;
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c64a0();
    }
LAB_01319624:
    plVar7 = (int64_t *)CONCAT71((int7)((uint64_t)plVar7 >> 8),1);
  }
  else {
    if (plVar11 == (int64_t *)0x0) goto LAB_01319624;
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6cb0();
    plVar1 = local_68;
    plVar7 = (int64_t *)CONCAT71(uVar8,local_68 != (int64_t *)0x0);
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar1 == (int64_t *)0x0) && (local_3c != '\0')) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      param_1 = 0x2607248;
      *puVar6 = &g_02607248;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      puVar6[0xc] = 0;
      puVar6[0xd] = 0;
      puVar6[0xe] = 0;
      *(void*)((int64_t)puVar6 + 0x76) = 0;
      puVar6[0x10] = 0;
      puVar6[0x11] = 0;
      puVar6[0x12] = 0;
      puVar6[0x13] = 0;
      puVar6[0x14] = 0;
      puVar6[0x15] = 0;
      puVar6[0x16] = 0;
      puVar6[0x17] = 0;
      puVar6[0x18] = 0;
      puVar6[0x19] = 0;
      puVar6[0x1a] = 0;
      (*g_02607260)();
      FUN_012c64a0();
      plVar7 = (int64_t *)0x0;
      if (puVar6 == (void*)0x0) goto LAB_01319624;
      FUN_00d50b20();
      plVar7 = (int64_t *)CONCAT71((int7)((uint64_t)puVar6 >> 8),1);
    }
  }
LAB_01319626:
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  plVar1 = local_68;
  if (local_60 == '\0') {
    if (local_68 == (int64_t *)0x0) goto LAB_01319740;
    FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_68 == (int64_t *)0x0) goto LAB_01319740;
  local_60 = '\0';
  local_68 = (int64_t *)0x0;
  local_58 = plVar1;
  local_48 = 0;
  local_50 = 0;
  local_38 = plVar11;
  if (0 < *(int *)((int64_t)plVar1 + 0xc)) {
    uVar2 = (char)local_40;
    lVar9 = 0;
    do {
      local_68 = *(int64_t **)(plVar1[2] + lVar9 * 8);
      cVar3 = FUN_01319320(uVar2,0);
      plVar7 = (int64_t *)((uint64_t)plVar7 & 0xff);
      if (cVar3 == '\0') {
        plVar7 = (int64_t *)0x0;
      }
      lVar9 = lVar9 + 1;
      local_50 = CONCAT44(local_50._4_4_,(int)lVar9);
    } while ((int)lVar9 < *(int *)((int64_t)plVar1 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
  plVar11 = local_38;
LAB_01319740:
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return (uint64_t)plVar7 & 0xffffffff;
}

