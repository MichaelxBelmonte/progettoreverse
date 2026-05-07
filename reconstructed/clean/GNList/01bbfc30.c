// Function: FUN_01bbfc30
// Address: 01bbfc30
// Size: 1078 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_01bbfc30(void)

{
  int64_t lVar1;
  void*puVar2;
  bool bVar3;
  bool bVar4;
  void*puVar5;
  void *pvVar6;
  void*puVar7;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar8;
  void*local_88;
  char local_80;
  void*local_58;
  char local_50;
  void*local_38;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar7 = &g_02572358;
  *puVar5 = &g_02572358;
  (*g_02572370)();
  lVar1 = *(int64_t *)(arg1 + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific((void*)puVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  puVar2 = local_88;
  if (local_88 == (void*)0x0) {
    bVar3 = false;
    local_38 = (void*)0x0;
  }
  else {
    if (local_80 == '\0') {
      FUN_00d50b00();
    }
    bVar3 = true;
    local_38 = local_88;
    if (*(int *)(local_88 + 0xc) != 0) {
      puVar2 = *(void**)(arg1 + 0x38);
      if (puVar2 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_80 = '\0';
      FUN_00d21140();
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  local_88 = puVar2;
  pvVar6 = _pthread_getspecific((void*)puVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (local_80 == '\0') {
    if (local_88 == (void*)0x0) goto LAB_01bc0047;
    FUN_00d50b00();
  }
  else if (local_88 == (void*)0x0) goto LAB_01bc0047;
  if (0 < *(int *)(local_88 + 0xc)) {
    lVar8 = 0;
    do {
      puVar2 = *(void**)(*(int64_t *)(local_88 + 0x10) + lVar8 * 8);
      pvVar6 = _pthread_getspecific((void*)puVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      if (local_58 == local_38) {
        if ((bVar3) || (local_58 == (void*)0x0)) {
joined_r0x01bbffd5:
          puVar7 = local_38;
          bVar4 = bVar3;
          if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          puVar7 = local_38;
          bVar4 = true;
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_01bbff42;
          }
        }
      }
      else if (local_50 == '\0') {
        if (local_58 != (void*)0x0) {
          FUN_00d50b00();
        }
        puVar7 = local_58;
        bVar4 = true;
        if ((bVar3) && (puVar7 = local_58, local_38 != (void*)0x0)) {
          FUN_00d50b20();
          local_38 = local_58;
LAB_01bbff42:
          bVar3 = true;
          goto joined_r0x01bbffd5;
        }
      }
      else {
        bVar4 = true;
        puVar7 = local_58;
        if ((bVar3) && (puVar7 = local_58, local_38 != (void*)0x0)) {
          FUN_00d50b20();
          puVar7 = local_58;
        }
      }
      bVar3 = bVar4;
      local_38 = puVar7;
      puVar7 = local_38;
      if ((local_38 != (void*)0x0) && (*(int *)(local_38 + 0xc) != 0)) {
        local_50 = '\0';
        FUN_00d21140();
        local_58 = puVar2;
      }
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 < *(int *)(local_88 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_01bc0047:
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_38 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

