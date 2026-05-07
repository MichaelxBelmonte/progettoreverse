// Function: FUN_01969e40
// Address: 01969e40
// Size: 672 bytes
// Class: MUSampledFunction

void FUN_01969e40(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  void*puVar5;
  int64_t *arg1;
  void*this_ptr;
  bool bVar6;
  
  if ((g_028b0e58 == (void*)0x0) || (g_028b0e61 == '\0')) {
    FUN_00e8cb50();
    if (g_028b0e58 == (void*)0x0) {
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &g_026792c0;
      puVar5[5] = 0;
      *(void*)((int64_t)puVar5 + 0xc) = 0;
      *(void*)((int64_t)puVar5 + 0x14) = 0;
      *(void*)((int64_t)puVar5 + 0x19) = 0;
      (*g_026792d8)();
      if (g_028b0e58 == puVar5) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar6 = g_028b0e58 != (void*)0x0;
        g_028b0e58 = puVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028b0e60 == '\0') {
        g_028b0e60 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01cfcc50(g_0239011c,0,0);
      g_028b0e61 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b0e61 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028b0e68 == (void*)0x0) || (g_028b0e71 == '\0')) {
    FUN_00e8cb50();
    if (g_028b0e68 == (void*)0x0) {
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &g_026792c0;
      puVar5[5] = 0;
      *(void*)((int64_t)puVar5 + 0xc) = 0;
      *(void*)((int64_t)puVar5 + 0x14) = 0;
      *(void*)((int64_t)puVar5 + 0x19) = 0;
      (*g_026792d8)();
      if (g_028b0e68 == puVar5) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar6 = g_028b0e68 != (void*)0x0;
        g_028b0e68 = puVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (g_028b0e70 == '\0') {
        g_028b0e70 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01cfc880(g_0239011c);
      g_028b0e71 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b0e71 = '\x01';
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
      puVar5 = g_028b0e58;
      goto joined_r0x0196a0be;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  puVar5 = g_028b0e68;
joined_r0x0196a0be:
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

