// Function: FUN_0196a1c0
// Address: 0196a1c0
// Size: 682 bytes
// Class: Unknown

void FUN_0196a1c0(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  void*puVar5;
  int64_t *arg1;
  void*this_ptr;
  bool bVar6;
  
  if ((g_028b0e78 == (void*)0x0) || (g_028b0e81 == '\0')) {
    FUN_00e8cb50();
    if (g_028b0e78 == (void*)0x0) {
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &g_026792c0;
      puVar5[5] = 0;
      *(void*)((int64_t)puVar5 + 0xc) = 0;
      *(void*)((int64_t)puVar5 + 0x14) = 0;
      *(void*)((int64_t)puVar5 + 0x19) = 0;
      (*g_026792d8)();
      if (g_028b0e78 == puVar5) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar6 = g_028b0e78 != (void*)0x0;
        g_028b0e78 = puVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028b0e80 == '\0') {
        g_028b0e80 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01cfcc50(g_02394234,g_02390120,g_02390128);
      g_028b0e81 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b0e81 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028b0e88 == (void*)0x0) || (g_028b0e91 == '\0')) {
    FUN_00e8cb50();
    if (g_028b0e88 == (void*)0x0) {
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &g_026792c0;
      puVar5[5] = 0;
      *(void*)((int64_t)puVar5 + 0xc) = 0;
      *(void*)((int64_t)puVar5 + 0x14) = 0;
      *(void*)((int64_t)puVar5 + 0x19) = 0;
      (*g_026792d8)();
      if (g_028b0e88 == puVar5) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar6 = g_028b0e88 != (void*)0x0;
        g_028b0e88 = puVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028b0e90 == '\0') {
        g_028b0e90 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01cfc880(g_02390128);
      g_028b0e91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b0e91 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar1 = arg1[0x2f];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*arg1 + 0x9d8))();
  if (cVar4 == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    cVar4 = *(char *)((int64_t)arg1 + 0x1c4);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      *(void*)(this_ptr + 1) = 0;
      puVar5 = g_028b0e78;
      goto joined_r0x0196a448;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  puVar5 = g_028b0e88;
joined_r0x0196a448:
  if (puVar5 == (void*)0x0) {
    puVar5 = (void*)0x0;
  }
  else {
    FUN_00d50b00();
  }
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

