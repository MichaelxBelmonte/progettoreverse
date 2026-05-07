// Function: FUN_00551ad0
// Address: 00551ad0
// Size: 1187 bytes
// Class: MDActivityDiagramView
// === MDActivityDiagramView properties ===
//                   _voicesDiagramView
//                   _displayLoadDiagramView
//                   _ioLoadDiagramView
//                   _fftCountDiagramView
//                   _jobDiagramView


void FUN_00551ad0(void)

{
  int64_t *plVar1;
  void*puVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  void*puVar6;
  int64_t this_ptr;
  float fVar7;
  
  FUN_01e534b0();
  plVar1 = *(int64_t **)(this_ptr + 0x80);
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar6 + 0xc) = 0;
  *(void*)((int64_t)puVar6 + 0x14) = 0;
  *(void*)((int64_t)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  *puVar6 = &g_02576dc8;
  pcVar4 = g_02576de0;
  (*g_02576de0)();
  puVar2 = (void*)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (int64_t)puVar6;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(int64_t **)(this_ptr + 0x88);
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02576110;
  *(void*)((int64_t)puVar6 + 0xc) = 0;
  *(void*)((int64_t)puVar6 + 0x14) = 0;
  *(void*)((int64_t)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  pcVar3 = g_02576128;
  (*g_02576128)();
  puVar2 = (void*)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (int64_t)puVar6;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(int64_t **)(this_ptr + 0x88);
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02576110;
  *(void*)((int64_t)puVar6 + 0xc) = 0;
  *(void*)((int64_t)puVar6 + 0x14) = 0;
  *(void*)((int64_t)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  (*pcVar3)();
  puVar2 = (void*)plVar1[0x2a];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x2a] = (int64_t)puVar6;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(int64_t **)(this_ptr + 0x88);
  if ((*(float *)((int64_t)plVar1 + 0x13c) != g_023b36b0) ||
     (NAN(*(float *)((int64_t)plVar1 + 0x13c)) || NAN(g_023b36b0))) {
    *(void*)((int64_t)plVar1 + 0x13c) = 0x41000000;
    (**(code **)(*plVar1 + 0x620))();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar6 + 0xc) = 0;
  *(void*)((int64_t)puVar6 + 0x14) = 0;
  *(void*)((int64_t)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  *puVar6 = &g_02576dc8;
  (*pcVar4)();
  puVar2 = (void*)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (int64_t)puVar6;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  if ((*(float *)((int64_t)plVar1 + 0x13c) != g_02390d34) ||
     (NAN(*(float *)((int64_t)plVar1 + 0x13c)) || NAN(g_02390d34))) {
    *(void*)((int64_t)plVar1 + 0x13c) = 0x40000000;
    (**(code **)(*plVar1 + 0x620))();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x98);
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar6 + 0xc) = 0;
  *(void*)((int64_t)puVar6 + 0x14) = 0;
  *(void*)((int64_t)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  *puVar6 = &g_02576dc8;
  (*pcVar4)();
  puVar2 = (void*)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (int64_t)puVar6;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(int64_t **)(this_ptr + 0x98);
  if ((*(float *)((int64_t)plVar1 + 0x13c) != g_02394dc0) ||
     (NAN(*(float *)((int64_t)plVar1 + 0x13c)) || NAN(g_02394dc0))) {
    *(void*)((int64_t)plVar1 + 0x13c) = 0x3f99999a;
    (**(code **)(*plVar1 + 0x620))();
  }
  plVar1 = *(int64_t **)(this_ptr + 0xa0);
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02576110;
  *(void*)((int64_t)puVar6 + 0xc) = 0;
  *(void*)((int64_t)puVar6 + 0x14) = 0;
  *(void*)((int64_t)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  (*pcVar3)();
  puVar2 = (void*)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (int64_t)puVar6;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(int64_t **)(this_ptr + 0xa8);
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02576110;
  *(void*)((int64_t)puVar6 + 0xc) = 0;
  *(void*)((int64_t)puVar6 + 0x14) = 0;
  *(void*)((int64_t)puVar6 + 0x1a) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  (*pcVar3)();
  puVar2 = (void*)plVar1[0x29];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    plVar1[0x29] = (int64_t)puVar6;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x620))();
  }
  FUN_00d50b20();
  plVar1 = *(int64_t **)(this_ptr + 0xa8);
  iVar5 = FUN_00e36330();
  fVar7 = (float)iVar5;
  if ((*(float *)((int64_t)plVar1 + 0x13c) == fVar7) &&
     (!NAN(*(float *)((int64_t)plVar1 + 0x13c)) && !NAN(fVar7))) {
    return;
  }
  *(float *)((int64_t)plVar1 + 0x13c) = fVar7;
                                          (**(code **)(*plVar1 + 0x620))();
  return;
}

