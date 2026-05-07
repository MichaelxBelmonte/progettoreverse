// Function: FUN_00c12480
// Address: 00c12480
// Size: 1618 bytes
// Class: Unknown

void FUN_00c12480(uint64_t param_1,int param_2)

{
  bool bVar1;
  int64_t lVar2;
  void*puVar3;
  void*puVar4;
  void*puVar5;
  void*this_ptr;
  bool bVar6;
  
  puVar4 = g_028a5d50;
  puVar3 = g_028a5d40;
  puVar5 = g_028a5d30;
  if (param_2 == 2) {
    if ((g_028a5d50 == (void*)0x0) || (g_028a5d59 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5d50 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*g_02572370)();
        if (g_028a5d50 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = g_028a5d50 != (void*)0x0;
          g_028a5d50 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028a5d58 == '\0') {
          g_028a5d58 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c350;
        if (g_0276c350 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c358;
        if (g_0276c358 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c360;
        if (g_0276c360 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5d59 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5d59 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = g_028a5d50;
      *(void*)(this_ptr + 1) = 0;
      if (puVar5 == (void*)0x0) goto LAB_00c12ab6;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      puVar5 = puVar4;
    }
    FUN_00d50b00();
    goto LAB_00c12ab8;
  }
  if (param_2 == 1) {
    if ((g_028a5d40 == (void*)0x0) || (g_028a5d49 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5d40 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*g_02572370)();
        if (g_028a5d40 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = g_028a5d40 != (void*)0x0;
          g_028a5d40 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028a5d48 == '\0') {
          g_028a5d48 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c320;
        if (g_0276c320 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c328;
        if (g_0276c328 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c330;
        if (g_0276c330 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c338;
        if (g_0276c338 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c340;
        if (g_0276c340 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c348;
        if (g_0276c348 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5d49 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5d49 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = g_028a5d40;
      *(void*)(this_ptr + 1) = 0;
      if (puVar5 == (void*)0x0) goto LAB_00c12ab6;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      puVar5 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 0) {
      FUN_00b34370();
      return;
    }
    if ((g_028a5d30 == (void*)0x0) || (g_028a5d39 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5d30 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*g_02572370)();
        if (g_028a5d30 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = g_028a5d30 != (void*)0x0;
          g_028a5d30 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028a5d38 == '\0') {
          g_028a5d38 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c318;
        if (g_0276c318 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5d39 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5d39 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = g_028a5d30;
      *(void*)(this_ptr + 1) = 0;
      if (puVar5 == (void*)0x0) {
LAB_00c12ab6:
        puVar5 = (void*)0x0;
        goto LAB_00c12ab8;
      }
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c12ab8:
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

