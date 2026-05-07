// Function: FUN_01d2aeb0
// Address: 01d2aeb0
// Size: 605 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01d2aeb0(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  void*puVar4;
  int iVar5;
  int64_t this_ptr;
  int iVar6;
  void*local_68;
  char local_60;
  
  lVar1 = *(int64_t *)(this_ptr + 0x58);
  if (lVar1 == 0) {
    puVar4 = *(void**)(this_ptr + 0x10);
LAB_01d2af17:
    local_68 = puVar4;
    if (local_68 == (void*)0x0) {
      bVar2 = false;
      local_68 = (void*)0x0;
      goto LAB_01d2b0c1;
    }
    FUN_00d50b00();
    bVar2 = true;
  }
  else {
    puVar4 = *(void**)(this_ptr + 0x10);
    if (*(int *)((int64_t)*(void**)(this_ptr + 0x10) + 0xc) == 0) goto LAB_01d2af17;
    FUN_00d50b00();
    FUN_01d2c130();
    if (local_68 == (void*)0x0) {
      local_68 = (void*)0x0;
      bVar2 = false;
    }
    else if (local_60 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
    }
    else {
      bVar2 = true;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  iVar5 = *(int *)(this_ptr + 0xb4);
  if ((iVar5 == 0) || (local_68 == (void*)0x0)) goto LAB_01d2b0c1;
  iVar6 = *(int *)((int64_t)local_68 + 0xc);
  if (iVar6 < iVar5) {
    *(void*)(this_ptr + 0xb0) = 0;
    goto LAB_01d2b0c1;
  }
  iVar5 = (uint)(0 < iVar6 % iVar5) + iVar6 / iVar5;
  if (iVar5 <= *(int *)(this_ptr + 0xb0)) {
    *(int *)(this_ptr + 0xb0) = iVar5 + -1;
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  iVar5 = *(int *)(this_ptr + 0xb4);
  if (0 < iVar5) {
    iVar6 = 0;
    do {
      iVar5 = iVar5 * *(int *)(this_ptr + 0xb0) + iVar6;
      if (*(int *)((int64_t)local_68 + 0xc) <= iVar5) break;
      lVar1 = *(int64_t *)(local_68[2] + (int64_t)iVar5 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      iVar6 = iVar6 + 1;
      iVar5 = *(int *)(this_ptr + 0xb4);
    } while (iVar6 < iVar5);
  }
  if (puVar4 == local_68) {
    bVar3 = bVar2;
    if ((bVar2) || (puVar4 == (void*)0x0)) goto joined_r0x01d2b112;
    bVar2 = true;
    FUN_00d50b00();
  }
  else {
    if (puVar4 != (void*)0x0) {
      FUN_00d50b00();
    }
    local_68 = puVar4;
    bVar3 = true;
    if (bVar2) {
      FUN_00d50b20();
    }
joined_r0x01d2b112:
    bVar2 = bVar3;
    if (puVar4 == (void*)0x0) goto LAB_01d2b0c1;
  }
  FUN_00d50b20();
LAB_01d2b0c1:
  FUN_01d2b660();
  if ((bVar2) && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return;
}

