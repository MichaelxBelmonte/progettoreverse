// Function: FUN_00cae8f0
// Address: 00cae8f0
// Size: 989 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00cae8f0(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  void*puVar5;
  void*puVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int64_t this_ptr;
  bool bVar9;
  
  if (*(int64_t *)(this_ptr + 0x90) == 0) {
    if ((g_028a7308 == (void*)0x0) || (g_028a7311 == '\0')) {
      FUN_00e8cb50();
      if (g_028a7308 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*g_02572370)();
        if (g_028a7308 == puVar5) {
          bVar3 = false;
          bVar2 = false;
        }
        else {
          bVar3 = true;
          bVar2 = true;
          bVar9 = g_028a7308 != (void*)0x0;
          g_028a7308 = puVar5;
          if (bVar9) {
            FUN_00d50b20();
          }
        }
        if (g_028a7310 == '\0') {
          g_028a7310 = '\x01';
          FUN_00e8cb90();
          bVar2 = bVar3;
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        FUN_00d22760();
        g_028a7311 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a7311 = '\x01';
        FUN_00e8cb70();
      }
    }
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_025823b0;
    puVar6[4] = 0;
    *(void*)((int64_t)puVar6 + 0xc) = 0;
    *(void*)((int64_t)puVar6 + 0x12) = 0;
    (*g_025823c8)();
    puVar5 = *(void**)(this_ptr + 0x68);
    if (puVar5 == puVar6) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0x68) = puVar6;
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00df2b20();
    (**(code **)(*(int64_t *)(this_ptr + 0x18) + 0x10))();
    FUN_00d50b00();
    FUN_00df2b40();
    if ((int64_t *)(this_ptr + 0x18) != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)(this_ptr + 0x18) + 0x10))();
      FUN_00d50b20();
    }
    FUN_00df2c50();
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_025736a8;
    puVar6[3] = 0;
    *(void*)(puVar6 + 4) = 0;
    (*g_025736c0)();
    puVar5 = *(void**)(this_ptr + 0xc0);
    if (puVar5 == puVar6) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0xc0) = puVar6;
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar7 + 0x18))();
    lVar1 = *(int64_t *)(this_ptr + 0x80);
    *(int64_t **)(this_ptr + 0x80) = plVar7;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_0258a670;
    pcVar4 = g_0258a688;
    (*g_0258a688)();
    puVar5 = *(void**)(this_ptr + 0x90);
    if (puVar5 == puVar6) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0x90) = puVar6;
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00e38130(0,1,0);
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_0258a670;
    (*pcVar4)();
    puVar5 = *(void**)(this_ptr + 0x98);
    if (puVar5 == puVar6) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0x98) = puVar6;
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00e38130(0,1,0);
    uVar8 = FUN_00c8d380();
    *(void*)(this_ptr + 0xa0) = uVar8;
    FUN_00c8d600();
    FUN_00c8d610();
    uVar8 = FUN_00c8d380();
    FUN_00c8d600();
    FUN_00c8d610();
    *(void*)(this_ptr + 0xb8) = uVar8;
  }
  return;
}

