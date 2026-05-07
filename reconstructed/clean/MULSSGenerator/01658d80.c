// Function: FUN_01658d80
// Address: 01658d80
// Size: 1084 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

void FUN_01658d80(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int64_t **pplVar5;
  int64_t *local_40;
  char local_38;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f5240();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar5 = &local_40;
  FUN_012e78c0();
  plVar1 = local_40;
  if ((g_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  if (plVar1 == (int64_t *)0x0) {
LAB_01658e71:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01658e71;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar5 = &local_40;
  FUN_012e78c0();
  plVar1 = local_40;
  if ((g_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_01658f37;
  }
  pplVar5 = (int64_t **)&g_02802688;
LAB_01658f37:
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6cb0();
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_012c6b80();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

