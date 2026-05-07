// Function: FUN_01668130
// Address: 01668130
// Size: 1305 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01668130(void* param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t this_ptr;
  bool bVar7;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar6 = local_58;
  if (*(int64_t *)(this_ptr + 0xf0) == 0) {
    lVar6 = *arg1;
    lVar5 = *(int64_t *)(this_ptr + 0x120);
    if (lVar5 == lVar6) {
      return;
    }
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x120) = lVar6;
    if (lVar5 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124e100();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_01668224;
    }
  }
  else if (local_58 != 0) {
LAB_01668224:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    bVar1 = false;
    while( true ) {
      bVar7 = bVar1;
      lVar5 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar6 + 0xc) <= local_40) break;
      local_58 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar5 * 8);
      cVar2 = FUN_00e34240();
      bVar1 = bVar7;
      if ((cVar2 == '\0') && (cVar2 = FUN_00e34a50(), cVar2 == '\0')) {
        FUN_013fb3a0();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (local_68 != 0) {
          FUN_013fb3a0();
          if (local_60 == '\0') {
            if (local_68 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          cVar2 = FUN_01667f00();
          if (local_68 != 0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          bVar1 = true;
          if (cVar2 == '\0') {
            FUN_00e34b50();
            bVar1 = bVar7;
          }
        }
      }
    }
    FUN_00540b60();
    param_1 = (void*)lVar6;
    FUN_00d50b20();
    if (bVar7) goto LAB_01668612;
  }
  cVar2 = FUN_01667df0();
  if (cVar2 != '\0') {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124e000();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_0132dd30();
    if (2 < iVar3) {
      if (*(int64_t *)(this_ptr + 0x120) != 0) {
        *(void*)(this_ptr + 0x120) = 0;
        FUN_00d50b20();
      }
      if (local_58 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124e000();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134a500();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 == 0) {
      bVar1 = true;
    }
    else {
      cVar2 = FUN_01667f00();
      bVar1 = true;
      if (cVar2 != '\0') {
        if (*(int64_t *)(this_ptr + 0x120) != 0) {
          *(void*)(this_ptr + 0x120) = 0;
          FUN_00d50b20();
        }
        bVar1 = false;
      }
      FUN_00d50b20();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
    }
    if (!bVar1) {
      return;
    }
  }
LAB_01668612:
  lVar6 = *arg1;
  lVar5 = *(int64_t *)(this_ptr + 0x120);
  if (lVar5 != lVar6) {
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x120) = lVar6;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

