// Function: FUN_0193ded0
// Address: 0193ded0
// Size: 997 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_0193ded0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t **pplVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar9;
  int64_t *local_70;
  char local_68;
  int64_t *local_40;
  char local_38;
  
  lVar7 = this_ptr[0x41];
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0xb10))();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  FUN_00d216c0();
  lVar7 = *arg1;
  if (0 < *(int *)(lVar7 + 0xc)) {
    lVar9 = 0;
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(lVar7 + 0x10) + lVar9 * 8);
      local_38 = '\0';
      local_40 = plVar1;
      FUN_0006e1c0();
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar8 = &local_40;
        if (cVar5 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      plVar2 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar8 + 1) = 0;
        if ((local_38 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar2 != (int64_t *)0x0) {
        local_38 = '\0';
        local_40 = plVar2;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar1 = *(int64_t **)(*(int64_t *)(*arg1 + 0x10) + lVar9 * 8);
      local_38 = '\0';
      local_40 = plVar1;
      FUN_007ef2d0();
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar8 = &local_40;
        if (cVar5 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      plVar3 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar8 + 1) = 0;
        if ((local_38 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar3 != (int64_t *)0x0) {
        local_38 = '\0';
        local_40 = plVar3;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      lVar9 = lVar9 + 1;
      lVar7 = *arg1;
    } while (lVar9 < *(int *)(lVar7 + 0xc));
  }
  (**(code **)(*this_ptr + 0xdc8))();
  (**(code **)(*this_ptr + 0xb10))();
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_40 = local_70;
  local_38 = '\0';
  FUN_00d23480();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_70 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x620))();
  (**(code **)(*this_ptr + 0xeb8))();
  (**(code **)(*this_ptr + 0x400))();
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

