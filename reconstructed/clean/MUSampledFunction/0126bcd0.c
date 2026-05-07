// Function: FUN_0126bcd0
// Address: 0126bcd0
// Size: 525 bytes
// Class: MUSampledFunction
// String references:
//   "MUSampledFunction"

void FUN_0126bcd0(void)

{
  double dVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_40;
  char local_38;
  
  if ((*(char *)((int64_t)arg1 + 0x181) != '\0') && (arg1[0xf] == 0)) {
    (**(code **)(*arg1 + 0x1a0))();
  }
  plVar7 = (int64_t *)arg1[0xf];
  if ((g_027c01a0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027af248 = FUN_001016a0();
    g_027af230 = "MUSampledFunction";
    g_027af238 = 0x58;
    g_027af240 = FUN_00101650;
    g_027af250 = 0;
    ram_00000000027af258 = 0;
    g_027af260 = 0;
    ram_00000000027af268 = 0;
    g_027af270 = 0;
    ram_00000000027af278 = 0;
    g_027af280 = 0;
    ram_00000000027af288 = 0;
    g_027af290 = 0;
    ram_00000000027af298 = 0;
    g_027af2a0 = 0;
    ram_00000000027af2a8 = 0;
    g_027af2b0 = 0;
    ram_00000000027af2b8 = 0;
    g_027af2c0 = 0;
    ram_00000000027af2c8 = 0;
    g_027af2d0 = 0;
    ram_00000000027af2d8 = 0;
    g_027af2e0 = 0;
    ram_00000000027af2e8 = 0;
    g_027af2f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_0126bd40:
    plVar7 = &g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar7 = arg1 + 0xf;
    if (cVar3 == '\0') goto LAB_0126bd40;
  }
  lVar2 = *plVar7;
  if (lVar2 == 0) goto LAB_0126bde2;
  FUN_00d50b00();
  pvVar5 = _pthread_getspecific((void*)plVar7);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    if ((*(double *)(lVar2 + 0x50) == g_0238fee8) &&
       (!NAN(*(double *)(lVar2 + 0x50)) && !NAN(g_0238fee8))) goto LAB_0126bdb1;
  }
  else {
    dVar1 = *(double *)
             (*(int64_t *)(lVar2 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8) + 0x50);
    if ((dVar1 == g_0238fee8) && (!NAN(dVar1) && !NAN(g_0238fee8))) {
LAB_0126bdb1:
      FUN_00da5ad0();
      cVar3 = *(char *)(local_40 + 0x18);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        FUN_00d50b20();
        return;
      }
      FUN_0126bf30();
    }
  }
  FUN_00d50b20();
LAB_0126bde2:
  *(void*)(this_ptr + 1) = 0;
  lVar2 = arg1[0xf];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

