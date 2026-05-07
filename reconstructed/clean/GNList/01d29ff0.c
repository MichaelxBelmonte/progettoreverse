// Function: FUN_01d29ff0
// Address: 01d29ff0
// Size: 1091 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01d29ff0(uint param_1,int64_t *param_2)

{
  char cVar1;
  int iVar2;
  void*puVar3;
  int64_t *plVar4;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar5;
  int64_t *plVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  int64_t local_60;
  int64_t *local_58;
  int64_t *local_50;
  int64_t local_48;
  int64_t *local_40;
  char local_38;
  
  local_50 = (int64_t *)0x0;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  local_58 = (int64_t *)0x0;
  if (*(char *)(arg1 + 0x80) != '\0') {
    *(void*)(arg1 + 0x80) = 0;
    FUN_01d2bdc0();
  }
  local_48 = *(int64_t *)(arg1 + 0x18);
  if (local_48 == 0) {
    *this_ptr = puVar3;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  FUN_00d50b00();
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)(local_48 + 0xc))) {
    plVar5 = *(int64_t **)(*(int64_t *)(local_48 + 0x10) + (uint64_t)param_1 * 8);
    local_68 = param_2;
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b00();
      local_50 = plVar5;
    }
    FUN_00d21140();
    if (*local_68 == 0) goto LAB_01d2a302;
    plVar4 = plVar5;
    if (*(int64_t *)(arg1 + 0x30) != 0) {
      FUN_00d50b00();
      uVar7 = FUN_00d50b20();
      local_60 = *(int64_t *)(arg1 + 0x30);
      if (local_60 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_98 = *local_68;
      local_90 = '\0';
      FUN_00c85680(uVar7,&local_98);
      plVar6 = local_40;
      if (local_40 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        local_58 = plVar6;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = local_40;
        local_38 = '\0';
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      if (plVar6 != (int64_t *)0x0) {
        FUN_00057a80();
        (**(code **)(*plVar6 + 0x360))();
        cVar1 = FUN_00e85ea0();
        if (cVar1 == '\0') {
          plVar6 = g_02802688;
        }
        if (plVar6 != (int64_t *)0x0) {
          local_88 = *local_68;
          local_80 = '\0';
          (**(code **)(*plVar5 + 0x98))(extraout_XMM0_Da,&local_88);
          plVar6 = local_40;
          if (local_40 == plVar5) {
LAB_01d2a268:
            if ((local_38 != '\0') && (plVar5 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar4 = plVar6;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_50 = plVar6;
              FUN_00d50b20();
              plVar5 = local_40;
              goto LAB_01d2a268;
            }
            local_50 = local_40;
            FUN_00d50b20();
            local_38 = '\0';
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    if (plVar4 != (int64_t *)0x0) {
      if ((g_027048b0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
      (**(code **)(*plVar4 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar5 = local_50;
      plVar4 = local_50;
      if (cVar1 == '\0') {
        plVar4 = g_02802688;
      }
      if (plVar4 == (int64_t *)0x0) {
        local_78 = local_50;
        local_70 = '\0';
        FUN_00d235a0();
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = local_50;
        local_38 = '\0';
        FUN_00d243f0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_01d2a302;
    }
  }
  plVar5 = (int64_t *)0x0;
LAB_01d2a302:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

