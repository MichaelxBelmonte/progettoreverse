// Function: FUN_017d0480
// Address: 017d0480
// Size: 1173 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_017d0480(void* param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  void*puVar7;
  int64_t lVar8;
  int64_t arg1;
  void*this_ptr;
  int64_t **pplVar9;
  uint32_t uVar10;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  int local_48;
  int iStack_44;
  int local_40;
  int64_t *local_38;
  
  plVar1 = *(int64_t **)(arg1 + 0x58);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(param_1);
  plVar2 = plVar1;
  lVar8 = g_027d3978;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar8 = g_027d3978, lVar6 != 0)) {
    plVar2 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  g_027d3978 = lVar8;
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar2 + 0x88))();
  plVar2 = local_60;
  if ((g_027048b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  pplVar9 = (int64_t **)&g_02802688;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') {
      FUN_011b7780();
      cVar3 = FUN_00e8da30();
      pplVar9 = &local_60;
      if (cVar3 == '\0') {
        pplVar9 = (int64_t **)&g_02802688;
      }
    }
  }
  local_38 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar9 + 1) = 0;
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  lVar8 = g_027d3980;
  if (local_38 != (int64_t *)0x0) {
    if (g_027d3980 != 0) {
      FUN_00d50b00();
    }
    FUN_00d242c0();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &g_02572358;
    (*g_02572370)();
    local_58 = 0;
    local_60 = (int64_t *)0x0;
    local_50 = local_38;
    local_48 = -1;
    iStack_44 = 0;
    local_40 = 0;
    while( true ) {
      if (iStack_44 != 0) {
        if (iStack_44 < 1) {
          iStack_44 = -iStack_44;
        }
        else {
          local_48 = local_48 - iStack_44;
          FUN_00d23690();
          local_40 = local_40 + iStack_44;
          iStack_44 = 0;
        }
      }
      lVar8 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((int64_t)local_50 + 0xc) <= local_48) break;
      local_60 = *(int64_t **)(local_50[2] + 8 + lVar8 * 8);
      pvVar5 = _pthread_getspecific((void*)local_50[2]);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01820e20();
      lVar8 = local_70;
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_00d21140();
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar10 = FUN_01894e00();
    local_80 = g_027d64a0;
    if (0 < *(int *)((int64_t)puVar7 + 0xc)) {
      if (g_027d64a0 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_78 = '\x01';
      FUN_00d95130(uVar10,&local_80);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d50b20();
      return this_ptr;
    }
    FUN_00d50b20();
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

