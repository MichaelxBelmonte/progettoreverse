// Function: FUN_00c861e0
// Address: 00c861e0
// Size: 1909 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00c861e0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void*puVar6;
  void*puVar7;
  int64_t this_ptr;
  int iVar8;
  int64_t local_68;
  char local_60;
  int local_50;
  
  FUN_00d50f50();
  FUN_00c86ee0();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 != 0) {
    local_50 = -1;
    while( true ) {
      lVar4 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_50) break;
      lVar4 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
      cVar3 = FUN_00d23d70();
      if (cVar3 == '\0') {
        plVar5 = (int64_t *)FUN_00e8fc40();
        FUN_0004f1e0();
        (**(code **)(*plVar5 + 0x18))();
        FUN_00e2cf00();
        FUN_00e2cfa0();
        FUN_00c7a080();
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_00e2d120();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        puVar6 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &g_024c1cd8;
        puVar6[2] = 0;
        puVar6[3] = 0;
        FUN_00d500e0();
        lVar2 = g_027edfc8;
        if (g_027edfc8 != 0) {
          FUN_00d50b00();
        }
        FUN_00e2de60();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_02772658;
        if (g_02772658 != 0) {
          FUN_00d50b00();
        }
        FUN_00c7ace0();
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_00e2ded0();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        FUN_00e2cff0();
        puVar7 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &g_024c1cd8;
        puVar7[2] = 0;
        puVar7[3] = 0;
        FUN_00d500e0();
        if (puVar6 == puVar7) {
          FUN_00d50b20();
        }
        else {
          FUN_00d50b20();
        }
        lVar2 = g_02772660;
        if (g_02772660 != 0) {
          FUN_00d50b00();
        }
        FUN_00e2de60();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        FUN_00c7a080();
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_00e2ded0();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        FUN_00e2cff0();
        FUN_00c87100();
        FUN_00d50b20();
        FUN_00d50b20();
      }
    }
    FUN_00018280();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x28);
  if (lVar1 != 0) {
    local_50 = -1;
    while (local_50 = local_50 + 1, local_50 < *(int *)(lVar1 + 0xc)) {
      FUN_00d50b00();
      FUN_00d744a0();
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00cc1480();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x30);
  if (lVar1 != 0) {
    local_50 = -1;
    while (local_50 = local_50 + 1, local_50 < *(int *)(lVar1 + 0xc)) {
      FUN_00d50b00();
      FUN_00d744a0();
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00559a70();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar8 = 0;
      do {
        FUN_00d50b00();
        FUN_00e2cfe0();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_00c89410();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  return;
}

