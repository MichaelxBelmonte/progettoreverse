// Function: FUN_00c0bcd0
// Address: 00c0bcd0
// Size: 2739 bytes
// Class: GNOverloudGainReductionView

void FUN_00c0bcd0(uint64_t param_1,int param_2)

{
  bool bVar1;
  int64_t lVar2;
  void*puVar3;
  void*puVar4;
  void*puVar5;
  void*this_ptr;
  bool bVar6;
  
  puVar4 = g_028a5cc8;
  puVar3 = g_028a5cb8;
  puVar5 = g_028a5ca8;
  if (param_2 == 8) {
    if ((g_028a5cc8 == (void*)0x0) || (g_028a5cd1 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5cc8 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*g_02572370)();
        if (g_028a5cc8 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = g_028a5cc8 != (void*)0x0;
          g_028a5cc8 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028a5cd0 == '\0') {
          g_028a5cd0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c268;
        if (g_0276c268 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c270;
        if (g_0276c270 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5cd1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5cd1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = g_028a5cc8;
      *(void*)(this_ptr + 1) = 0;
      if (puVar5 == (void*)0x0) goto LAB_00c0c767;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      puVar5 = puVar4;
    }
    FUN_00d50b00();
    goto LAB_00c0c769;
  }
  if (param_2 == 7) {
    if ((g_028a5cb8 == (void*)0x0) || (g_028a5cc1 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5cb8 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*g_02572370)();
        if (g_028a5cb8 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = g_028a5cb8 != (void*)0x0;
          g_028a5cb8 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028a5cc0 == '\0') {
          g_028a5cc0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c250;
        if (g_0276c250 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c258;
        if (g_0276c258 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c260;
        if (g_0276c260 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5cc1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5cc1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = g_028a5cb8;
      *(void*)(this_ptr + 1) = 0;
      if (puVar5 == (void*)0x0) goto LAB_00c0c767;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      puVar5 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 2) {
      FUN_00b34370();
      return;
    }
    if ((g_028a5ca8 == (void*)0x0) || (g_028a5cb1 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5ca8 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*g_02572370)();
        if (g_028a5ca8 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = g_028a5ca8 != (void*)0x0;
          g_028a5ca8 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028a5cb0 == '\0') {
          g_028a5cb0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c118;
        if (g_0276c118 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c120;
        if (g_0276c120 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c128;
        if (g_0276c128 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c130;
        if (g_0276c130 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c078;
        if (g_0276c078 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c070;
        if (g_0276c070 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c068;
        if (g_0276c068 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c060;
        if (g_0276c060 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_026d7d38;
        if (g_026d7d38 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c050;
        if (g_0276c050 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c048;
        if (g_0276c048 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c040;
        if (g_0276c040 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c038;
        if (g_0276c038 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c030;
        if (g_0276c030 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_026d7d40;
        if (g_026d7d40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c020;
        if (g_0276c020 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c018;
        if (g_0276c018 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c010;
        if (g_0276c010 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c008;
        if (g_0276c008 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5cb1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5cb1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = g_028a5ca8;
      *(void*)(this_ptr + 1) = 0;
      if (puVar5 == (void*)0x0) {
LAB_00c0c767:
        puVar5 = (void*)0x0;
        goto LAB_00c0c769;
      }
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c0c769:
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

