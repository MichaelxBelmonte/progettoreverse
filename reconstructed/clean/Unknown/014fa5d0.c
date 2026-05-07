// Function: FUN_014fa5d0
// Address: 014fa5d0
// Size: 755 bytes
// Class: Unknown

void FUN_014fa5d0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  void*puVar4;
  int iVar5;
  int64_t local_b8;
  char local_b0;
  
  if ((g_028acf68 == 0) || (g_028acf71 == '\0')) {
    FUN_00e8cb50();
    if (g_028acf68 == 0) {
      plVar3 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar3 + 0x18))();
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      lVar1 = g_027c20c0;
      if (g_027c20c0 != 0) {
        FUN_00d50b00();
      }
      FUN_01e2af10();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027c20c8;
      if (g_027c20c8 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      lVar2 = g_028acf68;
      if (g_028acf68 != local_b8) {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
        g_028acf68 = local_b8;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_b8 != 0) && (g_028acf70 == '\0')) {
        g_028acf70 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_028acf68;
      if (g_028acf68 != 0) {
        FUN_00d50b00();
        FUN_00d23d90();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      for (iVar5 = 0; iVar5 < *(int *)((int64_t)puVar4 + 0xc); iVar5 = iVar5 + 1) {
        FUN_00d50130();
      }
      FUN_00083b20();
      FUN_00d50b20();
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      g_028acf71 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028acf71 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00e427c0();
  return;
}

