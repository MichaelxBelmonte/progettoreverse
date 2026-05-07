// Function: FUN_002dc360
// Address: 002dc360
// Size: 543 bytes
// Class: MDMetaWindowController

void FUN_002dc360(void)

{
  void*puVar1;
  int64_t *plVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  void*puVar6;
  int64_t *plVar7;
  void *pvVar8;
  void* pVar9;
  int64_t this_ptr;
  
  FUN_00e8b7a0();
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02509790;
  *(void*)((int64_t)puVar6 + 0xc) = 0;
  puVar6[0xf] = 0;
  *(void*)(puVar6 + 0x10) = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  *(void*)(puVar6 + 5) = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  *(void*)((int64_t)puVar6 + 0x4e) = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  *(void*)((int64_t)puVar6 + 100) = 0;
  *(void*)((int64_t)puVar6 + 0x6c) = 0;
  (*g_025097a8)();
  puVar1 = *(void**)(this_ptr + 0x48);
  if (puVar1 != puVar6) {
    FUN_00d50b00();
    *(void**)(this_ptr + 0x48) = puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_024f4960;
  *(void*)((int64_t)puVar6 + 100) = 0;
  puVar6[0xe] = 0;
  *(void*)(puVar6 + 0xf) = 0;
  puVar6[0x10] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *(void*)(puVar6 + 4) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  *(void*)((int64_t)puVar6 + 0x51) = 0;
  *(void*)((int64_t)puVar6 + 0x59) = 0;
  (*g_024f4978)();
  puVar1 = *(void**)(this_ptr + 0x40);
  if (puVar1 != puVar6) {
    FUN_00d50b00();
    *(void**)(this_ptr + 0x40) = puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  uVar5 = _UNK_023b1e2c;
  uVar4 = _UNK_023b1e28;
  uVar3 = _UNK_023b1e24;
  *(void*)(this_ptr + 0x50) = g_023b1e20;
  *(void*)(this_ptr + 0x54) = uVar3;
  *(void*)(this_ptr + 0x58) = uVar4;
  *(void*)(this_ptr + 0x5c) = uVar5;
  *(void*)(this_ptr + 0x60) = 0x41c00000;
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar9 = 0x25d84d8;
  *puVar6 = &g_025d84d8;
  puVar6[7] = 0;
  puVar6[8] = 0;
  (*g_025d84f0)();
  puVar1 = *(void**)(this_ptr + 0x68);
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x68) = puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 0x70) = 0;
  plVar7 = (int64_t *)FUN_002dd0f0();
  (**(code **)(*plVar7 + 0x18))();
  plVar2 = *(int64_t **)(this_ptr + 0x78);
  if (plVar2 == plVar7) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x78) = plVar7;
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar8 = _pthread_getspecific(pVar9);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00aea5e0(0);
  FUN_01530a20();
  return;
}

