// Function: FUN_01d044d0
// Address: 01d044d0
// Size: 1955 bytes
// Class: GNMultipleValue

void FUN_01d044d0(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint8_t uVar5;
  void*puVar6;
  int64_t *plVar7;
  void*arg1;
  int64_t *this_ptr;
  bool bVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  
  (**(code **)(*this_ptr + 0x640))();
  FUN_01e3f820();
  uVar9 = (**(code **)(*local_60 + 0x548))();
  uVar11 = param_2;
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x640))();
  uVar10 = FUN_01e3f820();
  uVar5 = (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*local_60 + 0x3f0))(uVar10,uVar11,0,uVar5);
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((g_028b7ba8 == (int64_t *)0x0) || (g_028b7bb1 == '\0')) {
    FUN_00e8cb50();
    if (g_028b7ba8 == (int64_t *)0x0) {
      FUN_01cfc6a0(0);
      plVar7 = g_028b7ba8;
      if (g_028b7ba8 != local_60) {
        if (local_58 == '\0') {
          if (local_60 == (int64_t *)0x0) {
            plVar7 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar7 = local_60;
          }
        }
        else {
          local_58 = '\0';
          plVar7 = local_60;
        }
        bVar4 = g_028b7ba8 != (int64_t *)0x0;
        g_028b7ba8 = plVar7;
        if (bVar4) {
          FUN_00d50b20();
          plVar7 = local_60;
        }
      }
      if ((plVar7 != (int64_t *)0x0) && (g_028b7bb0 == '\0')) {
        g_028b7bb0 = '\x01';
        FUN_00e8cb90();
        plVar7 = local_60;
      }
      if ((local_58 != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      g_028b7bb1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b7bb1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028b7bb8 == (int64_t *)0x0) || (g_028b7bc1 == '\0')) {
    FUN_00e8cb50();
    if (g_028b7bb8 == (int64_t *)0x0) {
      FUN_01cfc6a0(g_02390124);
      plVar7 = g_028b7bb8;
      if (g_028b7bb8 != local_60) {
        if (local_58 == '\0') {
          if (local_60 == (int64_t *)0x0) {
            plVar7 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar7 = local_60;
          }
        }
        else {
          local_58 = '\0';
          plVar7 = local_60;
        }
        bVar4 = g_028b7bb8 != (int64_t *)0x0;
        g_028b7bb8 = plVar7;
        if (bVar4) {
          FUN_00d50b20();
          plVar7 = local_60;
        }
      }
      if ((plVar7 != (int64_t *)0x0) && (g_028b7bc0 == '\0')) {
        g_028b7bc0 = '\x01';
        FUN_00e8cb90();
        plVar7 = local_60;
      }
      if ((local_58 != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      g_028b7bc1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b7bc1 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_01d39410();
  if (local_70 == 0) {
    bVar4 = true;
  }
  else if (local_68 == '\0') {
    FUN_00d50b00();
    bVar4 = false;
  }
  else {
    bVar4 = false;
  }
  bVar2 = true;
  FUN_01d39410();
  if (local_70 == 0) {
    bVar3 = true;
  }
  else if (local_68 == '\0') {
    FUN_00d50b00();
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
  plVar7 = g_028b7ba8;
  if (g_028b7ba8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
  plVar7 = g_028b7bb8;
  if (g_028b7bb8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
  lVar1 = this_ptr[0x39];
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_01d488d0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    goto LAB_01d04c0b;
  }
  if ((g_028b7bc8 == (void*)0x0) || (g_028b7bd1 == '\0')) {
    FUN_00e8cb50();
    if (g_028b7bc8 == (void*)0x0) {
      FUN_01cfc9f0(g_02390124,0);
      puVar6 = g_028b7bc8;
      if (g_028b7bc8 != &g_0267a730) {
        bVar2 = false;
        puVar6 = &g_0267a730;
        bVar8 = g_028b7bc8 != (void*)0x0;
        g_028b7bc8 = puVar6;
        if (bVar8) {
          bVar2 = false;
          g_028b7bc8 = &g_0267a730;
          FUN_00d50b20();
          puVar6 = &g_0267a730;
        }
      }
      if ((puVar6 != (void*)0x0) && (g_028b7bd0 == '\0')) {
        g_028b7bd0 = '\x01';
        FUN_00e8cb90();
        puVar6 = &g_0267a730;
      }
      if ((bVar2) && (puVar6 != (void*)0x0)) {
        FUN_00d50b20();
      }
      g_028b7bd1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b7bd1 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028b7bc8 != (void*)0x0) goto LAB_01d04bdb;
    puVar6 = (void*)0x0;
  }
  else {
LAB_01d04bdb:
    puVar6 = g_028b7bc8;
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_01d04c0b:
  (**(code **)(*(int64_t *)*arg1 + 0x3b0))(uVar9,param_2);
  if (!bVar3 && local_70 != 0) {
    FUN_00d50b20();
  }
  if (!bVar4 && local_70 != 0) {
    FUN_00d50b20();
  }
  return;
}

