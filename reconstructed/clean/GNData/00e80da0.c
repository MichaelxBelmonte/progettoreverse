// Function: FUN_00e80da0
// Address: 00e80da0
// Size: 652 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_00e80da0(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  code *pcVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t this_ptr;
  
  lVar5 = *arg1;
  lVar1 = *(int64_t *)(this_ptr + 0x28);
  if (lVar1 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x28) = lVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = *param_2;
  lVar1 = *(int64_t *)(this_ptr + 0x30);
  if (lVar1 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x30) = lVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_0258a670;
  (*g_0258a688)();
  lVar5 = *(int64_t *)(this_ptr + 0x38);
  *(void**)(this_ptr + 0x38) = puVar4;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_00e38130(1,1,0);
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  pcVar3 = g_02572370;
  (*g_02572370)();
  lVar5 = *(int64_t *)(this_ptr + 0x40);
  *(void**)(this_ptr + 0x40) = puVar4;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_00d22760();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*pcVar3)();
  lVar5 = *(int64_t *)(this_ptr + 0x48);
  *(void**)(this_ptr + 0x48) = puVar4;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_00d22760();
  lVar5 = *(int64_t *)(this_ptr + 0x30);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_019b43b0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_019b43b0();
  plVar2 = *(int64_t **)(this_ptr + 0x50);
  if (plVar2 != param_1) {
    if (plVar2 == (int64_t *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(*plVar2 + 0x10))();
    }
    if (param_1 != (int64_t *)0x0) {
      (**(code **)(*param_1 + 0x10))();
      FUN_00d50b00();
    }
    *(int64_t **)(this_ptr + 0x50) = param_1;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

