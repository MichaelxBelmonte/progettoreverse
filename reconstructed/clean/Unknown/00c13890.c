// Function: FUN_00c13890
// Address: 00c13890
// Size: 1405 bytes
// Class: Unknown

void FUN_00c13890(uint64_t param_1,int param_2)

{
  bool bVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *arg1;
  void*this_ptr;
  bool bVar4;
  float fVar5;
  
  puVar3 = g_028a5d70;
  if (param_2 == 7) {
    if ((g_028a5d80 == (void*)0x0) || (g_028a5d89 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5d80 == (void*)0x0) {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &g_02572358;
        (*g_02572370)();
        if (g_028a5d80 == puVar3) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar4 = g_028a5d80 != (void*)0x0;
          g_028a5d80 = puVar3;
          if (bVar4) {
            FUN_00d50b20();
          }
        }
        if (g_028a5d88 == '\0') {
          g_028a5d88 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c3e8;
        if (g_0276c3e8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c3f0;
        if (g_0276c3f0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c3f8;
        if (g_0276c3f8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5d89 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5d89 = '\x01';
        FUN_00e8cb70();
      }
    }
    if ((g_028a5d90 == (void*)0x0) || (g_028a5d99 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5d90 == (void*)0x0) {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &g_02572358;
        (*g_02572370)();
        if (g_028a5d90 == puVar3) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar4 = g_028a5d90 != (void*)0x0;
          g_028a5d90 = puVar3;
          if (bVar4) {
            FUN_00d50b20();
          }
        }
        if (g_028a5d98 == '\0') {
          g_028a5d98 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c3e8;
        if (g_0276c3e8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c3f0;
        if (g_0276c3f0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5d99 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5d99 = '\x01';
        FUN_00e8cb70();
      }
    }
    fVar5 = (float)(**(code **)(*arg1 + 0x458))();
    bVar1 = NAN(g_02390d34);
    bVar4 = fVar5 == g_02390d34;
    *(void*)(this_ptr + 1) = 0;
    puVar3 = g_028a5d80;
    if ((bVar4) && (!NAN(fVar5) && !bVar1)) {
      puVar3 = g_028a5d90;
    }
    if (puVar3 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    if (param_2 != 0) {
      FUN_00b34370();
      return;
    }
    if ((g_028a5d70 == (void*)0x0) || (g_028a5d79 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5d70 == (void*)0x0) {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &g_02572358;
        (*g_02572370)();
        if (g_028a5d70 == puVar3) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar4 = g_028a5d70 != (void*)0x0;
          g_028a5d70 = puVar3;
          if (bVar4) {
            FUN_00d50b20();
          }
        }
        if (g_028a5d78 == '\0') {
          g_028a5d78 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c3d0;
        if (g_0276c3d0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c3d8;
        if (g_0276c3d8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c3e0;
        if (g_0276c3e0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5d79 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5d79 = '\x01';
        FUN_00e8cb70();
      }
      puVar3 = g_028a5d70;
      *(void*)(this_ptr + 1) = 0;
      if (puVar3 == (void*)0x0) {
        puVar3 = (void*)0x0;
        goto LAB_00c13de5;
      }
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c13de5:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

