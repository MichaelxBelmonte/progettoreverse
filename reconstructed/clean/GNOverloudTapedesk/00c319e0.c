// Function: FUN_00c319e0
// Address: 00c319e0
// Size: 1459 bytes
// Class: GNOverloudTapedesk

void FUN_00c319e0(uint64_t param_1,int param_2)

{
  bool bVar1;
  int64_t lVar2;
  void*puVar3;
  void*puVar4;
  void*puVar5;
  void*this_ptr;
  bool bVar6;
  
  puVar4 = g_028a5f58;
  puVar3 = g_028a5f48;
  puVar5 = g_028a5f38;
  if (param_2 == 10) {
    if ((g_028a5f58 == (void*)0x0) || (g_028a5f61 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5f58 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*g_02572370)();
        if (g_028a5f58 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = g_028a5f58 != (void*)0x0;
          g_028a5f58 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028a5f60 == '\0') {
          g_028a5f60 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276cc70;
        if (g_0276cc70 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276cc78;
        if (g_0276cc78 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5f61 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5f61 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = g_028a5f58;
      *(void*)(this_ptr + 1) = 0;
      if (puVar5 == (void*)0x0) goto LAB_00c31f77;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      puVar5 = puVar4;
    }
    FUN_00d50b00();
    goto LAB_00c31f79;
  }
  if (param_2 == 9) {
    if ((g_028a5f48 == (void*)0x0) || (g_028a5f51 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5f48 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*g_02572370)();
        if (g_028a5f48 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = g_028a5f48 != (void*)0x0;
          g_028a5f48 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028a5f50 == '\0') {
          g_028a5f50 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276cc58;
        if (g_0276cc58 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276cc60;
        if (g_0276cc60 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276cc68;
        if (g_0276cc68 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5f51 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5f51 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = g_028a5f48;
      *(void*)(this_ptr + 1) = 0;
      if (puVar5 == (void*)0x0) goto LAB_00c31f77;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      puVar5 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 1) {
      FUN_00b34370();
      return;
    }
    if ((g_028a5f38 == (void*)0x0) || (g_028a5f41 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5f38 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*g_02572370)();
        if (g_028a5f38 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = g_028a5f38 != (void*)0x0;
          g_028a5f38 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028a5f40 == '\0') {
          g_028a5f40 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276cc40;
        if (g_0276cc40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276cc48;
        if (g_0276cc48 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276cc50;
        if (g_0276cc50 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5f41 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5f41 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = g_028a5f38;
      *(void*)(this_ptr + 1) = 0;
      if (puVar5 == (void*)0x0) {
LAB_00c31f77:
        puVar5 = (void*)0x0;
        goto LAB_00c31f79;
      }
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c31f79:
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

