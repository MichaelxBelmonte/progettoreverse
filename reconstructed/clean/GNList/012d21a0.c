// Function: FUN_012d21a0
// Address: 012d21a0
// Size: 747 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_012d21a0(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void*puVar4;
  char *pcVar5;
  int64_t **pplVar6;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  int local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  if (*arg1 != 0) {
    local_68 = '\0';
    local_60 = *(int64_t *)(*arg1 + 0x10);
    local_58 = 0;
    if (0 < *(int *)(local_60 + 0xc)) {
      do {
        local_70 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + (int64_t)local_58 * 8);
        FUN_012d5b70((int64_t)local_58,&local_70);
        plVar1 = local_48;
        local_38[0] = '\0';
        local_50 = local_48;
        pcVar5 = local_38;
        if (local_40[0] != '\0') {
          local_38[0] = '\x01';
          pcVar5 = local_40;
        }
        local_38[0] = local_40[0] != '\0';
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
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
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar6 = &local_50;
          if (cVar2 == '\0') {
            pplVar6 = (int64_t **)&g_02802688;
          }
        }
        plVar1 = local_50;
        if (*pplVar6 == (int64_t *)0x0) {
          FUN_010f2dd0();
          pplVar6 = (int64_t **)&g_02802688;
          if (plVar1 != (int64_t *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar2 = FUN_00e85ea0();
            pplVar6 = &local_50;
            if (cVar2 == '\0') {
              pplVar6 = (int64_t **)&g_02802688;
            }
          }
          if (*pplVar6 != (int64_t *)0x0) {
            local_48 = plVar1;
            local_40[0] = '\0';
            FUN_00d21140();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_48 = local_50;
          local_40[0] = '\0';
          FUN_00d214d0(pplVar6,*(void*)((int64_t)puVar4 + 0xc));
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_58 = local_58 + 1;
      } while (local_58 < *(int *)(local_60 + 0xc));
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

