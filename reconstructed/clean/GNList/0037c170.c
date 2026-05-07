// Function: FUN_0037c170
// Address: 0037c170
// Size: 1238 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNString"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_0037c170(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void*puVar4;
  void*this_ptr;
  int64_t **pplVar5;
  int64_t lVar6;
  int64_t local_c0;
  char local_b8;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  void*local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  local_58 = puVar4;
  (*g_02572370)();
  FUN_00d6f370();
  local_98 = g_02704008;
  if (g_02704008 != 0) {
    FUN_00d50b00();
  }
  local_90 = '\x01';
  local_88 = 0;
  local_80 = '\0';
  FUN_00d704d0(&local_88,&local_98);
  plVar1 = local_50;
  if ((g_027048b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  pplVar5 = (int64_t **)&g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') {
      if ((g_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        ___cxa_guard_release();
      }
      cVar2 = FUN_00e8da30();
      pplVar5 = &local_50;
      if (cVar2 == '\0') {
        pplVar5 = (int64_t **)&g_02802688;
      }
    }
  }
  local_60 = 0;
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  local_60 = '\x01';
  local_68 = plVar1;
  FUN_0009d720();
  if ((local_b8 == '\0') && (local_c0 != 0)) {
    FUN_00d50b00();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_c0 == 0) {
    *this_ptr = local_58;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    if (0 < *(int *)(local_c0 + 0xc)) {
      lVar6 = 0;
      do {
        local_78 = *(int64_t *)(*(int64_t *)(local_c0 + 0x10) + lVar6 * 8);
        local_70 = '\0';
        FUN_00cddf30();
        plVar1 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_50 = plVar1;
        local_48 = '\0';
        FUN_00d235a0();
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(local_c0 + 0xc));
    }
    FUN_00018280();
    *this_ptr = local_58;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  return this_ptr;
}

