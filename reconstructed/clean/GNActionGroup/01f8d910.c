// Function: FUN_01f8d910
// Address: 01f8d910
// Size: 1346 bytes
// Class: GNActionGroup
// String references:
//   "GNActionGroup"
// === GNActionGroup properties ===
//                   _subgroups
//                   _supergroup
//                   _actionRegistrations


void* FUN_01f8d910(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  int64_t lVar7;
  void*this_ptr;
  int64_t local_b8;
  char local_b0;
  int64_t local_68;
  char local_60;
  int local_50;
  
  lVar3 = local_68;
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  plVar1 = (int64_t *)*param_1;
  if (plVar1 == (int64_t *)0x0) {
    FUN_01caf660();
    FUN_01cafb00();
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      if (0 < *(int *)(local_68 + 0xc)) {
        iVar5 = 0;
        do {
          cVar4 = FUN_01f8ce40();
          if (cVar4 != '\0') {
            FUN_00d21140();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(local_68 + 0xc));
      }
      FUN_01cb0380();
      FUN_00d50b20();
    }
    *this_ptr = puVar6;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  if ((g_026e73b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_02801338 = FUN_00d4fe50();
    g_02801320 = "GNActionGroup";
    g_02801328 = 0x38;
    g_02801330 = FUN_001a4a20;
    g_02801340 = 0;
    ram_0000000002801348 = 0;
    g_02801350 = 0;
    ram_0000000002801358 = 0;
    g_02801360 = 0;
    ram_0000000002801368 = 0;
    g_02801370 = 0;
    ram_0000000002801378 = 0;
    g_02801380 = 0;
    ram_0000000002801388 = 0;
    g_02801390 = 0;
    ram_0000000002801398 = 0;
    g_028013a0 = 0;
    ram_00000000028013a8 = 0;
    g_028013b0 = 0;
    ram_00000000028013b8 = 0;
    g_028013c0 = 0;
    ram_00000000028013c8 = 0;
    g_028013d0 = 0;
    ram_00000000028013d8 = 0;
    g_028013e0 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar1 + 0x360))();
  cVar4 = FUN_00e85ea0();
  if (cVar4 == '\0') {
    param_1 = &g_02802688;
  }
  lVar2 = param_1[1];
  if (((char)lVar2 == '\0') || (*param_1 == 0)) {
    if (*param_1 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      if (puVar6 == (void*)0x0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
  }
  else {
    FUN_00d50b00();
  }
  FUN_01caf140();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_01f8db3c;
    }
  }
  else if (local_68 != 0) {
LAB_01f8db3c:
    local_60 = '\0';
    local_68 = 0;
    local_50 = -1;
    while( true ) {
      lVar7 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(lVar3 + 0xc) <= local_50) break;
      local_68 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + 8 + lVar7 * 8);
      cVar4 = FUN_01f8d150();
      if (cVar4 != '\0') {
        FUN_00d21140();
      }
    }
    FUN_002a0990();
    FUN_00d50b20();
  }
  FUN_01caf110();
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_01f8dd37;
    FUN_00d50b00();
  }
  else if (local_68 == 0) goto LAB_01f8dd37;
  if (0 < *(int *)(local_68 + 0xc)) {
    iVar5 = 0;
    do {
      cVar4 = FUN_01f8ce40();
      if (cVar4 != '\0') {
        FUN_00d21140();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_68 + 0xc));
  }
  FUN_01cb0380();
  FUN_00d50b20();
LAB_01f8dd37:
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
  return this_ptr;
}

