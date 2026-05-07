// Function: FUN_01f7b490
// Address: 01f7b490
// Size: 517 bytes
// Class: GNRadialColorGradient

void FUN_01f7b490(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  void*puVar4;
  uint64_t uVar5;
  int64_t *this_ptr;
  bool bVar6;
  
  if ((g_028baff0 == (void*)0x0) || (g_028baff9 == '\0')) {
    FUN_00e8cb50();
    if (g_028baff0 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_026792c0;
      puVar4[5] = 0;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      *(void*)((int64_t)puVar4 + 0x14) = 0;
      *(void*)((int64_t)puVar4 + 0x19) = 0;
      (*g_026792d8)();
      if (g_028baff0 == puVar4) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar6 = g_028baff0 != (void*)0x0;
        g_028baff0 = puVar4;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028baff8 == '\0') {
        g_028baff8 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      g_028baff9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028baff9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028bb000 == (void*)0x0) || (g_028bb009 == '\0')) {
    FUN_00e8cb50();
    if (g_028bb000 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_026792c0;
      puVar4[5] = 0;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      *(void*)((int64_t)puVar4 + 0x14) = 0;
      *(void*)((int64_t)puVar4 + 0x19) = 0;
      (*g_026792d8)();
      if (g_028bb000 == puVar4) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar6 = g_028bb000 != (void*)0x0;
        g_028bb000 = puVar4;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028bb008 == '\0') {
        g_028bb008 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      g_028bb009 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028bb009 = '\x01';
      FUN_00e8cb70();
    }
  }
  uVar5 = (uint64_t)g_028bb010;
  g_028bb010 = (int)(uVar5 ^ 1);
  *(void*)(this_ptr + 1) = 0;
  lVar1 = (int64_t)(&g_028baff0)[(uVar5 ^ 1) * 2];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

