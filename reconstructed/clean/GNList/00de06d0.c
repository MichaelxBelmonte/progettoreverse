// Function: FUN_00de06d0
// Address: 00de06d0
// Size: 1459 bytes
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


void FUN_00de06d0(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t arg1;
  void*this_ptr;
  int64_t **pplVar6;
  bool bVar7;
  bool bVar8;
  uint32_t uVar9;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  plVar4 = *(int64_t **)(arg1 + 0x20);
  if ((*(int64_t **)(arg1 + 0x20) == (int64_t *)0x0) &&
     ((g_028a8700 == (int64_t *)0x0 || (plVar4 = g_028a8700, g_028a8709 == '\0')))) {
    FUN_00e8cb50();
    if (g_028a8700 == (int64_t *)0x0) {
      uVar9 = FUN_00d30620();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          uVar9 = FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            uVar9 = FUN_00d50b20();
          }
          goto LAB_00de078f;
        }
      }
      else if (local_40 != (int64_t *)0x0) {
LAB_00de078f:
        lVar1 = g_027841a8;
        if (g_027841a8 != 0) {
          uVar9 = FUN_00d50b00();
        }
        local_50 = lVar1;
        local_48 = '\x01';
        FUN_00d31060(uVar9,&local_50);
        plVar4 = local_40;
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
        pplVar6 = (int64_t **)&g_02802688;
        if (plVar4 != (int64_t *)0x0) {
          (**(code **)(*plVar4 + 0x360))();
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
            pplVar6 = &local_40;
            if (cVar2 == '\0') {
              pplVar6 = (int64_t **)&g_02802688;
            }
          }
        }
        plVar4 = *pplVar6;
        plVar5 = g_028a8700;
        if (g_028a8700 != plVar4) {
          if (*(char *)(pplVar6 + 1) == '\0') {
            if (plVar4 == (int64_t *)0x0) {
              plVar5 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              plVar5 = *pplVar6;
            }
          }
          else {
            *(void*)(pplVar6 + 1) = 0;
            plVar5 = plVar4;
          }
          bVar7 = g_028a8700 != (int64_t *)0x0;
          g_028a8700 = plVar5;
          if (bVar7) {
            FUN_00d50b20();
            plVar5 = *pplVar6;
          }
        }
        if ((plVar5 != (int64_t *)0x0) && (g_028a8708 == '\0')) {
          g_028a8708 = '\x01';
          FUN_00e8cb90();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (g_028a8700 == (int64_t *)0x0) {
        plVar4 = (int64_t *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar4 = (int64_t)&g_02572358;
        (*g_02572370)();
        if (g_028a8700 == plVar4) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
          bVar8 = g_028a8700 != (int64_t *)0x0;
          g_028a8700 = plVar4;
          if (bVar8) {
            FUN_00d50b20();
          }
        }
        if (g_028a8708 == '\0') {
          g_028a8708 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar7) {
          FUN_00d50b20();
        }
        plVar4 = g_02772f68;
        if (g_02772f68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_40 = plVar4;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        plVar4 = g_027841b0;
        if (g_027841b0 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_40 = plVar4;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        plVar4 = g_027841b8;
        if (g_027841b8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_40 = plVar4;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        plVar4 = g_027841c0;
        if (g_027841c0 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_40 = plVar4;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        plVar4 = g_02772f60;
        if (g_02772f60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_40 = plVar4;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      g_028a8709 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a8709 = '\x01';
      FUN_00e8cb70();
    }
    plVar4 = g_028a8700;
    *(void*)(this_ptr + 1) = 0;
    if (plVar4 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      goto LAB_00de0713;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00de0713:
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

