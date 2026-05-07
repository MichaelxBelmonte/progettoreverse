// Function: FUN_00c1a2c0
// Address: 00c1a2c0
// Size: 623 bytes
// Class: GNOverloudParametricEQ

void FUN_00c1a2c0(uint64_t param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  
  puVar4 = g_028a5e10;
  if (param_2 != 7) {
    FUN_00b34370();
    return;
  }
  if ((g_028a5e10 == (void*)0x0) || (g_028a5e19 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5e10 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      if (g_028a5e10 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028a5e10 != (void*)0x0;
        g_028a5e10 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028a5e18 == '\0') {
        g_028a5e18 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c590;
      if (g_0276c590 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c598;
      if (g_0276c598 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c5a0;
      if (g_0276c5a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c5a8;
      if (g_0276c5a8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028a5e19 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5e19 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = g_028a5e10;
    *(void*)(this_ptr + 1) = 0;
    if (puVar4 == (void*)0x0) {
      puVar4 = (void*)0x0;
      goto LAB_00c1a511;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00c1a511:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

