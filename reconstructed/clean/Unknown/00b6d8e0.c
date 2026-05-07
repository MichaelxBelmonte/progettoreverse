// Function: FUN_00b6d8e0
// Address: 00b6d8e0
// Size: 830 bytes
// Class: Unknown

void FUN_00b6d8e0(void)

{
  bool bVar1;
  code *pcVar2;
  uint32_t uVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t lVar6;
  void*puVar7;
  bool bVar8;
  bool bVar9;
  
  if ((g_028a5318 == (void*)0x0) || (g_028a5308 == (void*)0x0)) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    pcVar2 = g_02572370;
    (*g_02572370)();
    if (g_028a5318 == puVar4) {
      bVar9 = false;
      bVar1 = false;
    }
    else {
      bVar9 = true;
      bVar1 = true;
      bVar8 = g_028a5318 != (void*)0x0;
      g_028a5318 = puVar4;
      if (bVar8) {
        FUN_00d50b20();
      }
    }
    if (g_028a5320 == '\0') {
      g_028a5320 = '\x01';
      FUN_00e8cb90();
      bVar1 = bVar9;
    }
    if (!bVar1) {
      FUN_00d50b20();
    }
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    (*pcVar2)();
    if (g_028a5308 == puVar4) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      bVar9 = g_028a5308 != (void*)0x0;
      g_028a5308 = puVar4;
      if (bVar9) {
        FUN_00d50b20();
      }
    }
    if (g_028a5310 == '\0') {
      g_028a5310 = '\x01';
      FUN_00e8cb90();
    }
    if (!bVar1) {
      FUN_00d50b20();
    }
    lVar5 = _MIDIGetNumberOfSources();
    if (lVar5 == 0) {
      bVar1 = false;
      puVar4 = (void*)0x0;
    }
    else {
      lVar6 = 0;
      bVar1 = false;
      puVar7 = (void*)0x0;
      do {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00b6fa70();
        *puVar4 = &g_0253d668;
        *(void*)(puVar4 + 5) = 0;
        *(void*)((int64_t)puVar4 + 0x2a) = 0;
        puVar4[10] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        *(void*)((int64_t)puVar4 + 0x3d) = 0;
        *(void*)((int64_t)puVar4 + 0x45) = 0;
        FUN_00d500e0();
        if (puVar4 == puVar7) {
          puVar4 = puVar7;
          if (bVar1) {
            FUN_00d50b20();
            bVar9 = bVar1;
          }
          else {
            bVar9 = true;
          }
        }
        else {
          bVar9 = true;
          if ((bVar1) && (puVar7 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar1 = bVar9;
        uVar3 = _MIDIGetSource();
        *(void*)puVar4[4] = uVar3;
        *(void*)(puVar4 + 5) = 1;
        FUN_00d21140();
        lVar6 = lVar6 + 1;
        puVar7 = puVar4;
      } while (lVar5 != lVar6);
    }
    lVar5 = _MIDIGetNumberOfDestinations();
    if (lVar5 != 0) {
      lVar6 = 0;
      puVar7 = puVar4;
      do {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00b6fa70();
        *puVar4 = &g_0253d668;
        *(void*)(puVar4 + 5) = 0;
        *(void*)((int64_t)puVar4 + 0x2a) = 0;
        puVar4[10] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        *(void*)((int64_t)puVar4 + 0x3d) = 0;
        *(void*)((int64_t)puVar4 + 0x45) = 0;
        FUN_00d500e0();
        if (puVar4 == puVar7) {
          puVar4 = puVar7;
          if (bVar1) {
            FUN_00d50b20();
            bVar9 = bVar1;
          }
          else {
            bVar9 = true;
          }
        }
        else {
          bVar9 = true;
          if ((bVar1) && (puVar7 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar1 = bVar9;
        uVar3 = _MIDIGetDestination();
        *(void*)puVar4[4] = uVar3;
        *(void*)(puVar4 + 5) = 0x100;
        FUN_00d21140();
        lVar6 = lVar6 + 1;
        puVar7 = puVar4;
      } while (lVar5 != lVar6);
      bVar1 = true;
    }
    if ((bVar1) && (puVar4 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}

