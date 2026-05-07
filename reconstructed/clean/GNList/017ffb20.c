// Function: FUN_017ffb20
// Address: 017ffb20
// Size: 1500 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_017ffb20(void)

{
  int64_t lVar1;
  code *pcVar2;
  code *pcVar3;
  void*puVar4;
  void*puVar5;
  int64_t this_ptr;
  int iVar6;
  
  FUN_00d50100();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025683c0;
  pcVar2 = g_025683d8;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  puVar5 = *(void**)(this_ptr + 0x10);
  if (puVar5 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x10) = puVar4;
    if (puVar5 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar3 = g_02572370;
  (*g_02572370)();
  lVar1 = *(int64_t *)(this_ptr + 0x18);
  *(void**)(this_ptr + 0x18) = puVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*pcVar3)();
  lVar1 = *(int64_t *)(this_ptr + 0x20);
  *(void**)(this_ptr + 0x20) = puVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*pcVar3)();
  lVar1 = *(int64_t *)(this_ptr + 0x28);
  *(void**)(this_ptr + 0x28) = puVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*pcVar3)();
  lVar1 = *(int64_t *)(this_ptr + 0x30);
  *(void**)(this_ptr + 0x30) = puVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d22760();
  FUN_00d22760();
  FUN_00d22760();
  FUN_00d21370();
  FUN_00d21370();
  FUN_00d21370();
  FUN_00d21370();
  iVar6 = 0x20;
  do {
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_02608110;
    *(void*)((int64_t)puVar5 + 0x1c) = 0;
    *(void*)((int64_t)puVar5 + 0xc) = 0;
    *(void*)((int64_t)puVar5 + 0x12) = 0;
    FUN_00d500e0();
    FUN_00d21140();
    FUN_00d50b20();
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  FUN_00c8e690();
  if (puVar5 != (void*)0x0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  puVar4 = *(void**)(this_ptr + 0x38);
  if (puVar4 == puVar5) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x38) = puVar5;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if (puVar5 != (void*)0x0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  puVar4 = *(void**)(this_ptr + 0x40);
  if (puVar4 == puVar5) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x40) = puVar5;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e710();
  if (puVar5 != (void*)0x0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  puVar4 = *(void**)(this_ptr + 0x48);
  if (puVar4 == puVar5) {
    if (puVar5 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    *(void**)(this_ptr + 0x48) = puVar5;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*pcVar3)();
  lVar1 = *(int64_t *)(this_ptr + 0x50);
  *(void**)(this_ptr + 0x50) = puVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d22760();
  FUN_00d21370();
  FUN_00c8e690();
  if (puVar5 != (void*)0x0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  puVar4 = *(void**)(this_ptr + 0x60);
  if (puVar4 == puVar5) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x60) = puVar5;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025683c0;
  (*pcVar2)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(int64_t *)(this_ptr + 0x58);
  *(void**)(this_ptr + 0x58) = puVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00c8e7d0();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02608488;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0x100000000;
  *(void*)(puVar5 + 6) = 0;
  *(void*)((int64_t)puVar5 + 0x34) = 0x100000000;
  *(void*)(puVar5 + 10) = 0;
  puVar5[0xb] = 0;
  *(void*)((int64_t)puVar5 + 0x3c) = 0;
  *(void*)((int64_t)puVar5 + 0x44) = 0;
  *(void*)((int64_t)puVar5 + 0x4c) = 0;
  FUN_00d500e0();
  lVar1 = *(int64_t *)(this_ptr + 0x68);
  *(void**)(this_ptr + 0x68) = puVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02608488;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0x100000000;
  *(void*)(puVar5 + 6) = 0;
  *(void*)((int64_t)puVar5 + 0x34) = 0x100000000;
  *(void*)(puVar5 + 10) = 0;
  puVar5[0xb] = 0;
  *(void*)((int64_t)puVar5 + 0x3c) = 0;
  *(void*)((int64_t)puVar5 + 0x44) = 0;
  *(void*)((int64_t)puVar5 + 0x4c) = 0;
  FUN_00d500e0();
  lVar1 = *(int64_t *)(this_ptr + 0x70);
  *(void**)(this_ptr + 0x70) = puVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

