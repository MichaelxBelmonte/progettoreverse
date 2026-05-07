// Function: FUN_00c18aa0
// Address: 00c18aa0
// Size: 703 bytes
// Class: GNOverloudParametricEQ

void FUN_00c18aa0(uint64_t param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  
  puVar4 = g_028a5df0;
  if (param_2 != 4) {
    FUN_00b34370();
    return;
  }
  if ((g_028a5df0 == (void*)0x0) || (g_028a5df9 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5df0 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      if (g_028a5df0 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028a5df0 != (void*)0x0;
        g_028a5df0 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028a5df8 == '\0') {
        g_028a5df8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c478;
      if (g_0276c478 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c480;
      if (g_0276c480 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c488;
      if (g_0276c488 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c490;
      if (g_0276c490 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c498;
      if (g_0276c498 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028a5df9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5df9 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = g_028a5df0;
    *(void*)(this_ptr + 1) = 0;
    if (puVar4 == (void*)0x0) {
      puVar4 = (void*)0x0;
      goto LAB_00c18d41;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00c18d41:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

