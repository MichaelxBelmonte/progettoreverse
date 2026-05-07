// Function: FUN_00c07540
// Address: 00c07540
// Size: 2062 bytes
// Class: GNOverloudGainReductionView

void FUN_00c07540(uint64_t param_1,int param_2)

{
  bool bVar1;
  int64_t lVar2;
  void*puVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  
  puVar3 = g_028a5c38;
  puVar4 = g_028a5c28;
  if (param_2 == 2) {
    if ((g_028a5c38 == (void*)0x0) || (g_028a5c41 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5c38 == (void*)0x0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_02572358;
        (*g_02572370)();
        if (g_028a5c38 == puVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar5 = g_028a5c38 != (void*)0x0;
          g_028a5c38 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (g_028a5c40 == '\0') {
          g_028a5c40 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
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
        g_028a5c41 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5c41 = '\x01';
        FUN_00e8cb70();
      }
      puVar4 = g_028a5c38;
      *(void*)(this_ptr + 1) = 0;
      if (puVar4 == (void*)0x0) goto LAB_00c07d34;
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      puVar4 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 0) {
      FUN_00b34370();
      return;
    }
    if ((g_028a5c28 == (void*)0x0) || (g_028a5c31 == '\0')) {
      FUN_00e8cb50();
      if (g_028a5c28 == (void*)0x0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_02572358;
        (*g_02572370)();
        if (g_028a5c28 == puVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar5 = g_028a5c28 != (void*)0x0;
          g_028a5c28 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (g_028a5c30 == '\0') {
          g_028a5c30 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c188;
        if (g_0276c188 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c190;
        if (g_0276c190 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_0276c198;
        if (g_0276c198 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        g_028a5c31 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a5c31 = '\x01';
        FUN_00e8cb70();
      }
      puVar4 = g_028a5c28;
      *(void*)(this_ptr + 1) = 0;
      if (puVar4 == (void*)0x0) {
LAB_00c07d34:
        puVar4 = (void*)0x0;
        goto LAB_00c07d36;
      }
    }
    else {
      *(void*)(this_ptr + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c07d36:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

