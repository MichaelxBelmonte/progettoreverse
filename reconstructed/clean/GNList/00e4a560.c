// Function: FUN_00e4a560
// Address: 00e4a560
// Size: 1193 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00e4a560(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar6;
  int64_t local_70;
  uint8_t local_68;
  int64_t local_60;
  uint8_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(char *)(this_ptr + 0x2c) != '\0') {
    local_70 = *param_2;
    local_68 = 0;
    FUN_00e484f0(param_1,&local_70);
    local_40 = *arg1;
    if (local_40 == 0) {
      return;
    }
    local_38 = '\0';
    FUN_00e3a1c0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar5 = (int64_t *)*arg1;
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
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar5 = arg1;
      if (cVar3 != '\0') goto LAB_00e4a618;
    }
    plVar5 = &g_02802688;
LAB_00e4a618:
    if (*plVar5 != 0) {
      FUN_00d227e0();
      local_40 = *arg1;
      local_38 = '\0';
      FUN_00e3a1c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *arg1;
      local_38 = '\0';
      FUN_00e38fb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    return;
  }
  local_40 = *param_2;
  local_38 = '\0';
  FUN_00e3a2a0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_50 = *(int64_t *)(this_ptr + 0x48);
  local_48 = '\0';
  iVar4 = FUN_00e5d7f0();
  uVar6 = extraout_XMM0_Da;
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if (iVar4 == -1) {
    local_60 = *param_2;
    local_58 = 0;
    FUN_00e484f0(uVar6,&local_60);
    lVar2 = *arg1;
    lVar1 = local_40;
  }
  else {
    FUN_00dac5e0();
    lVar2 = *arg1;
    lVar1 = local_40;
  }
  local_40 = lVar2;
  if (local_40 == 0) goto LAB_00e4a864;
  local_38 = '\0';
  FUN_00e3a1c0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = (int64_t *)*arg1;
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
  if (plVar5 == (int64_t *)0x0) {
LAB_00e4a787:
    plVar5 = &g_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar5 = arg1;
    if (cVar3 == '\0') goto LAB_00e4a787;
  }
  if (*plVar5 != 0) {
    FUN_00d227e0();
    local_40 = *arg1;
    local_38 = '\0';
    FUN_00e3a1c0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_40 = *arg1;
    local_38 = '\0';
    FUN_00e38fb0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  local_40 = *arg1;
  local_38 = '\0';
  FUN_00e3a2a0();
  lVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
    lVar1 = local_40;
  }
LAB_00e4a864:
  local_40 = lVar1;
  FUN_00daab70();
  return;
}

