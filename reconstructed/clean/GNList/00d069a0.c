// Function: FUN_00d069a0
// Address: 00d069a0
// Size: 914 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_00d069a0(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  void*arg1;
  int64_t this_ptr;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t *local_70;
  char local_68;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  
  plVar1 = (int64_t *)*arg1;
  local_40 = 0;
  lVar7 = *(int64_t *)(this_ptr + 0x10);
  if (lVar7 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_40 = '\x01';
  local_48 = lVar7;
  (**(code **)(*plVar1 + 0x98))(param_1,&local_48);
  local_38 = local_70;
  if (local_68 == '\0') {
    if (local_70 == (int64_t *)0x0) {
      local_38 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  plVar6 = local_38;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  plVar3 = local_38;
  if (plVar6 == (int64_t *)0x0) {
    FUN_00d43000();
    if (local_70 == (int64_t *)0x0) {
      plVar6 = (int64_t *)0x0;
      plVar3 = local_38;
    }
    else {
      plVar6 = local_70;
      plVar3 = local_70;
      if (local_68 == '\0') {
        FUN_00d50b00();
        local_38 = local_70;
        plVar3 = local_38;
      }
    }
  }
  local_38 = plVar3;
  if ((g_027048b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026cd478 = FUN_00d4fe50();
    g_026cd460 = "GNList";
    g_026cd468 = 0x20;
    g_026cd470 = FUN_00018210;
    g_026cd480 = 0;
    ram_00000000026cd488 = 0;
    g_026cd490 = 0;
    g_026cd508 = 0;
    ram_00000000026cd510 = 0;
    g_026cd518 = 0;
    g_026cd51a = 6;
    g_026cd498 = 0;
    ram_00000000026cd4a0 = 0;
    g_026cd4a8 = 0;
    ram_00000000026cd4b0 = 0;
    g_026cd4b8 = 0;
    ram_00000000026cd4c0 = 0;
    g_026cd4c8 = 0;
    ram_00000000026cd4d0 = 0;
    g_026cd4d8 = 0;
    ram_00000000026cd4e0 = 0;
    g_026cd4e8 = 0;
    ram_00000000026cd4f0 = 0;
    g_026cd4f8 = 0;
    ram_00000000026cd500 = 0;
    g_026cd523 = 0;
    g_026cd51b = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_00d06a51:
    if (g_02802688 != 0) goto LAB_00d06a62;
LAB_00d06b5b:
    plVar6 = local_38;
    cVar4 = FUN_00d23d70();
    if (cVar4 == '\0') {
      uVar8 = 0;
    }
    else {
      plVar3 = *(int64_t **)(this_ptr + 0x20);
      uVar8 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
      if (plVar3 != plVar6) {
        if (plVar6 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *(int64_t **)(this_ptr + 0x20) = plVar6;
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
joined_r0x00d06c0e:
    if (plVar6 == (int64_t *)0x0) goto LAB_00d06c18;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00d06a51;
    if (local_38 == (int64_t *)0x0) goto LAB_00d06b5b;
LAB_00d06a62:
    plVar1 = local_38;
    if (local_38 == (int64_t *)0x0) {
      uVar8 = 0;
      plVar6 = (int64_t *)0x0;
      goto joined_r0x00d06c0e;
    }
    lVar7 = 0;
    do {
      if (*(int *)((int64_t)plVar1 + 0xc) <= (int)lVar7) {
        FUN_00083b20();
        uVar8 = 0;
        goto LAB_00d06c10;
      }
      lVar2 = *(int64_t *)(plVar1[2] + lVar7 * 8);
      cVar4 = FUN_00d23d70();
      lVar7 = lVar7 + 1;
    } while (cVar4 == '\0');
    lVar7 = *(int64_t *)(this_ptr + 0x20);
    if (lVar7 != lVar2) {
      if (lVar2 != 0) {
        FUN_00d50b00();
        lVar7 = *(int64_t *)(this_ptr + 0x20);
      }
      *(int64_t *)(this_ptr + 0x20) = lVar2;
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00083b20();
    uVar8 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
  }
LAB_00d06c10:
  FUN_00d50b20();
LAB_00d06c18:
  return uVar8 & 0xffffffff;
}

