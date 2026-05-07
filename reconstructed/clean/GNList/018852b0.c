// Function: FUN_018852b0
// Address: 018852b0
// Size: 1332 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_018852b0(code *param_1,code *param_2)

{
  code cVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void*puVar5;
  int64_t *plVar6;
  void *pvVar7;
  void* pVar8;
  code *pcVar9;
  int64_t arg1;
  void*this_ptr;
  uint8_t local_31;
  
  plVar6 = *(int64_t **)param_2;
  if (*(char *)(arg1 + 0xa0) == '\0') {
    FUN_011b7780();
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 != '\0') goto LAB_0188538c;
    }
    param_2 = &g_02802688;
LAB_0188538c:
    lVar2 = *(int64_t *)param_2;
    cVar1 = param_2[8];
    if ((cVar1 != (code)0x0) && (lVar2 != 0)) {
      FUN_00d50b00();
    }
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)(puVar5 + 7) = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    pVar8 = 0x260f528;
    *puVar5 = &g_0260f528;
    puVar5[10] = 0;
    (*g_0260f540)();
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50b00();
    FUN_01822120();
    if (arg1 != 0) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0188ca50();
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
    if ((cVar1 != (code)0x0) && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    return this_ptr;
  }
  if ((g_027048b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026cd478 = FUN_00d4fe50();
    g_026cd460 = "GNList";
    g_026cd468 = 0x20;
    param_1 = FUN_00018210;
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
  pcVar9 = &g_02802688;
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') {
      FUN_011b7780();
      cVar3 = FUN_00e8da30();
      pcVar9 = param_2;
      if (cVar3 == '\0') {
        pcVar9 = &g_02802688;
      }
    }
  }
  puVar5 = *(void**)pcVar9;
  local_31 = pcVar9[8];
  if ((local_31 != (code)0x0) && (puVar5 != (void*)0x0)) {
    FUN_00d50b00();
    local_31 = (code)0x1;
    goto LAB_018854d6;
  }
  if (puVar5 != (void*)0x0) goto LAB_018854d6;
  plVar6 = *(int64_t **)param_2;
  FUN_011b7780();
  if (plVar6 == (int64_t *)0x0) {
LAB_0188545e:
    param_1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    param_1 = param_2;
    if (cVar3 == '\0') goto LAB_0188545e;
  }
  if (*(int64_t *)param_1 != 0) {
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    param_1 = &g_02572358;
    *puVar5 = &g_02572358;
    (*g_02572370)();
    FUN_00d21140();
    local_31 = (code)0x1;
  }
LAB_018854d6:
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_011bb960();
  (**(code **)(*plVar6 + 0x18))();
  pvVar7 = _pthread_getspecific((void*)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_01822120();
  if (arg1 != 0) {
    FUN_00d50b20();
  }
  if (puVar5 == (void*)0x0) {
    *this_ptr = plVar6;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  if (0 < *(int *)((int64_t)puVar5 + 0xc)) {
    iVar4 = 0;
    do {
      pvVar7 = _pthread_getspecific((void*)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018836f0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int64_t)puVar5 + 0xc));
  }
  FUN_01894e00();
  *this_ptr = plVar6;
  *(void*)(this_ptr + 1) = 1;
  if (local_31 == (code)0x0) {
    return this_ptr;
  }
  FUN_00d50b20();
  return this_ptr;
}

