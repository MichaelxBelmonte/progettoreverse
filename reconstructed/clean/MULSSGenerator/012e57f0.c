// Function: FUN_012e57f0
// Address: 012e57f0
// Size: 570 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

void FUN_012e57f0(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  
  if (*(int *)(this_ptr + 0x108) != 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x58) != 0) {
    return;
  }
  plVar1 = *(int64_t **)(this_ptr + 0x118);
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
  lVar2 = g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    lVar2 = g_02802688;
    if (cVar3 != '\0') {
      lVar2 = *(int64_t *)(this_ptr + 0x118);
    }
  }
  if (lVar2 == 0) {
    return;
  }
  FUN_00d50b00();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c6cb0();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_012e596b;
    FUN_00d50b00();
  }
  else if (local_48 == 0) goto LAB_012e596b;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar2 = *(int64_t *)(this_ptr + 0xb0);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_017ecb00();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_012e596b:
  FUN_00d50b20();
  return;
}

