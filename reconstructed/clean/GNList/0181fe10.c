// Function: FUN_0181fe10
// Address: 0181fe10
// Size: 928 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


int64_t * FUN_0181fe10(void)

{
  void*puVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t arg1;
  int64_t *this_ptr;
  bool bVar8;
  int64_t local_40;
  
  lVar6 = *(int64_t *)(arg1 + 0x50);
  if (lVar6 != 0) {
    *(void*)(this_ptr + 1) = 0;
    FUN_00d50b00();
    *this_ptr = lVar6;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  FUN_00d50b00();
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar5 = 0x2572358;
  *puVar1 = &g_02572358;
  (*g_02572370)();
  pvVar2 = _pthread_getspecific(pVar5);
  lVar6 = arg1;
  if (pvVar2 != (void *)0x0) {
    lVar3 = FUN_00e8b990();
    if (lVar3 == 0) {
      local_40 = *(int64_t *)(arg1 + 0x40);
      goto joined_r0x0181febc;
    }
    lVar6 = *(int64_t *)(arg1 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
  }
  local_40 = *(int64_t *)(lVar6 + 0x40);
joined_r0x0181febc:
  pVar5 = (void*)lVar6;
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00d21140();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  lVar6 = arg1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    lVar6 = *(int64_t *)(arg1 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
  }
  lVar3 = *(int64_t *)(lVar6 + 0x60);
  lVar7 = arg1;
  if (lVar3 != 0) {
    FUN_00d50b00();
    do {
      if ((lVar7 != lVar3) && (FUN_00d50b00(), bVar8 = lVar7 != 0, lVar7 = lVar3, bVar8)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific((void*)lVar6);
      if ((pvVar2 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
        local_40 = *(int64_t *)(lVar7 + 0x40);
      }
      else {
        local_40 = *(int64_t *)
                    (*(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) +
                    0x40);
      }
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00d23370();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific((void*)lVar6);
      if ((pvVar2 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
        lVar4 = *(int64_t *)(lVar7 + 0x60);
      }
      else {
        lVar4 = *(int64_t *)
                 (*(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0x60
                 );
      }
      if (lVar4 != lVar3) {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        lVar3 = lVar4;
      }
    } while (lVar3 != 0);
  }
  lVar6 = g_027d64a0;
  if (g_027d64a0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  lVar3 = *(int64_t *)(arg1 + 0x50);
  if (lVar3 != local_40) {
    if (local_40 == 0) {
      local_40 = 0;
    }
    else {
      FUN_00d50b00();
      lVar3 = *(int64_t *)(arg1 + 0x50);
    }
    *(int64_t *)(arg1 + 0x50) = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  lVar6 = *(int64_t *)(arg1 + 0x50);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

