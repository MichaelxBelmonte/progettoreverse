// Function: FUN_01ca97a0
// Address: 01ca97a0
// Size: 1714 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01ca97a0(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  bool bVar2;
  code *pcVar3;
  int64_t *plVar4;
  void*puVar5;
  void*puVar6;
  void*puVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t local_c8;
  char local_c0;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40;
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00049200();
  (**(code **)(*plVar4 + 0x18))();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar3 = g_02572370;
  (*g_02572370)();
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*pcVar3)();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*pcVar3)();
  lVar8 = *arg1;
  if (*(int *)(lVar8 + 0xc) < 1) {
    bVar2 = false;
    plVar10 = (int64_t *)0x0;
  }
  else {
    lVar9 = 0;
    plVar10 = (int64_t *)0x0;
    bVar2 = false;
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(lVar8 + 0x10) + lVar9 * 8);
      if (plVar10 == plVar1) {
        if ((!bVar2) && (plVar10 != (int64_t *)0x0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
          bVar2 = true;
          plVar10 = plVar1;
        }
        else {
          bVar2 = true;
          plVar10 = plVar1;
        }
      }
      FUN_00d4efa0();
      FUN_00c7e7b0();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_00d235a0();
      if (local_68 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      FUN_00dd6a00();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_00d21140();
      if (local_68 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar10 + 0x60))();
      if (local_68 != 0) {
        (**(code **)(*plVar10 + 0x60))();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_00d21140();
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      local_40 = '\0';
      local_48 = local_68;
      lVar9 = lVar9 + 1;
      lVar8 = *arg1;
    } while (lVar9 < *(int *)(lVar8 + 0xc));
  }
  (**(code **)(*plVar4 + 0x5f0))();
  lVar8 = g_027eda10;
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
    lVar8 = g_027eda10;
  }
  g_027eda10 = lVar8;
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  FUN_01ca79b0();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar4 + 0x5f0))();
  if (local_48 != 0) {
    FUN_00d50b00();
  }
  lVar8 = g_027eda18;
  if (g_027eda18 != 0) {
    FUN_00d50b00();
  }
  FUN_01ca79b0();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar4 + 0x5f0))();
  if (local_48 != 0) {
    FUN_00d50b00();
  }
  lVar8 = g_027eda20;
  if (g_027eda20 != 0) {
    FUN_00d50b00();
  }
  FUN_01ca79b0();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  lVar8 = g_027eda28;
  if (*param_2 != 0) {
    if (g_027eda28 != 0) {
      FUN_00d50b00();
    }
    FUN_01caa390();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if ((bVar2) && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

