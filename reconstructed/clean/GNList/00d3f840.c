// Function: FUN_00d3f840
// Address: 00d3f840
// Size: 544 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d3f840(void)

{
  int64_t lVar1;
  void*puVar2;
  uint64_t uVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t local_28;
  char local_20;
  
  FUN_00d50100();
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_025736a8;
  puVar2[3] = 0;
  *(void*)(puVar2 + 4) = 0;
  (*g_025736c0)();
  puVar4 = *(void**)(this_ptr + 0x10);
  if (puVar4 == puVar2) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x10) = puVar2;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00da5ad0();
  lVar1 = *(int64_t *)(this_ptr + 0x18);
  lVar5 = lVar1;
  if (lVar1 != local_28) {
    lVar5 = local_28;
    if (local_20 == '\0') {
      if (local_28 == 0) {
        lVar5 = 0;
        goto LAB_00d3f8cc;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x18);
      *(int64_t *)(this_ptr + 0x18) = local_28;
    }
    else {
      local_20 = '\0';
LAB_00d3f8cc:
      *(int64_t *)(this_ptr + 0x18) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_28;
    }
  }
  if ((local_20 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d3fad0();
  lVar1 = *(int64_t *)(this_ptr + 0x20);
  lVar5 = lVar1;
  if (lVar1 == local_28) goto LAB_00d3f985;
  lVar5 = local_28;
  if (local_20 == '\0') {
    if (local_28 == 0) {
      lVar5 = 0;
      goto LAB_00d3f943;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x20);
    *(int64_t *)(this_ptr + 0x20) = local_28;
  }
  else {
    local_20 = '\0';
LAB_00d3f943:
    *(int64_t *)(this_ptr + 0x20) = lVar5;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar5 = local_28;
  }
LAB_00d3f985:
  if ((local_20 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_0258a670;
  (*g_0258a688)();
  puVar4 = *(void**)(this_ptr + 0x38);
  if (puVar4 == puVar2) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x38) = puVar2;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  uVar3 = FUN_00c8d380();
  *(void*)(this_ptr + 0x28) = uVar3;
  FUN_00c8d600();
  FUN_00c8d610();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  lVar1 = *(int64_t *)(this_ptr + 0x30);
  *(void**)(this_ptr + 0x30) = puVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

