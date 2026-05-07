// Function: FUN_01e2ec70
// Address: 01e2ec70
// Size: 766 bytes
// Class: GNClassDescription
// String references:
//   "GNClassDescription"
// === GNClassDescription properties ===
//                   _potentialValues
//                   _derivationSources
//                   _derivationDestinations
//                   _documentation


void FUN_01e2ec70(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t this_ptr;
  
  lVar3 = g_027f3840;
  if (*(char *)(this_ptr + 0x39) != '\0') {
    if (g_027f3840 != 0) {
      FUN_00d50b00();
    }
    cVar4 = FUN_00c9ff50();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d21140();
      lVar3 = g_027f3840;
      if (g_027f3840 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca13a0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  plVar1 = (int64_t *)*param_2;
  if ((g_026cf800 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027760a8 = FUN_00d4fe50();
    g_02776090 = "GNClassDescription";
    g_02776098 = 0xe8;
    g_027760a0 = FUN_0002f240;
    g_027760b0 = 0;
    ram_00000000027760b8 = 0;
    g_027760c0 = 0;
    ram_00000000027760c8 = 0;
    g_027760d0 = 0;
    ram_00000000027760d8 = 0;
    g_027760e0 = 0;
    ram_00000000027760e8 = 0;
    g_027760f0 = 0;
    ram_00000000027760f8 = 0;
    g_02776100 = 0;
    ram_0000000002776108 = 0;
    g_02776110 = 0;
    ram_0000000002776118 = 0;
    g_02776120 = 0;
    ram_0000000002776128 = 0;
    g_02776130 = 0;
    ram_0000000002776138 = 0;
    g_02776140 = 0;
    ram_0000000002776148 = 0;
    g_02776150 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_01e2ed9e;
  }
  param_2 = &g_02802688;
LAB_01e2ed9e:
  lVar3 = g_028b9530;
  if (*param_2 != 0) {
    if (g_028b9530 != 0) {
      FUN_00d50b00();
    }
    cVar4 = FUN_00c9ff50();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_01e2f100();
      lVar2 = *(int64_t *)(this_ptr + 0x30);
      if (lVar2 != lVar3) {
        if (lVar3 == 0) {
          *(void*)(this_ptr + 0x30) = 0;
        }
        else {
          FUN_00d50b00();
          lVar2 = *(int64_t *)(this_ptr + 0x30);
          *(int64_t *)(this_ptr + 0x30) = lVar3;
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00ca1340();
      return;
    }
  }
  if (*(int64_t *)(this_ptr + 0x30) != 0) {
    *(void*)(this_ptr + 0x30) = 0;
    FUN_00d50b20();
  }
  return;
}

