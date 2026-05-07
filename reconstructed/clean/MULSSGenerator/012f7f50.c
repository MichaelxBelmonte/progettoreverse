// Function: FUN_012f7f50
// Address: 012f7f50
// Size: 989 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

void FUN_012f7f50(void* param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t **pplVar5;
  int64_t lVar6;
  int64_t this_ptr;
  int64_t *plVar7;
  int64_t *local_40;
  char local_38;
  
  *(int *)(this_ptr + 0x6c) = *(int *)(this_ptr + 0x6c) + 1;
  lVar6 = *(int64_t *)(this_ptr + 0x58);
  if (lVar6 == 0) goto LAB_012f81c5;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    lVar6 = *(int64_t *)(this_ptr + 0x58);
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  plVar7 = *(int64_t **)(lVar6 + 0x118);
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = plVar7;
  if ((g_0270c820 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
LAB_012f7ff9:
    pplVar5 = &g_02802688;
    plVar7 = g_02802688;
    if (g_02802690 != '\0') goto LAB_012f8009;
LAB_012f801c:
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_012f7ff9;
    pplVar5 = &local_40;
    plVar7 = local_40;
    if (local_38 == '\0') goto LAB_012f801c;
LAB_012f8009:
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (int64_t *)0x0) goto LAB_012f81c5;
  plVar7 = *(int64_t **)(this_ptr + 0x118);
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = plVar7;
  if ((g_0270c820 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
LAB_012f8094:
    pplVar5 = &g_02802688;
    plVar7 = g_02802688;
    if (g_02802690 != '\0') goto LAB_012f80a7;
LAB_012f80bd:
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_012f8094;
    pplVar5 = &local_40;
    plVar7 = local_40;
    if (local_38 == '\0') goto LAB_012f80bd;
LAB_012f80a7:
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6a80();
    FUN_012c6a20();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6af0();
    FUN_012c6a90();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_012f81c5:
  *(int *)(this_ptr + 0x6c) = *(int *)(this_ptr + 0x6c) + -1;
  return;
}

