// Function: FUN_01de2960
// Address: 01de2960
// Size: 1068 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_01de2960(void)

{
  code *pcVar1;
  int64_t *plVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  bool bVar8;
  void*local_48;
  int64_t local_40;
  char local_38;
  
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  local_48 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_48 = &g_02572358;
  pcVar1 = g_02572370;
  (*g_02572370)();
  lVar4 = *(int64_t *)(arg1 + 0x238);
  if (*(int *)(lVar4 + 0xc) < 1) {
    lVar7 = 0;
    lVar5 = 0;
  }
  else {
    lVar6 = 0;
    lVar5 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar6 * 8);
      if (lVar5 != lVar4) {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        bVar8 = lVar5 != 0;
        lVar5 = lVar4;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      FUN_01dba5d0();
      if (local_40 == lVar7) {
LAB_01de2aad:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
LAB_01de2ac1:
        if (lVar7 == 0) goto LAB_01de2a00;
LAB_01de2aca:
        FUN_00d21140();
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          bVar8 = lVar7 != 0;
          lVar7 = local_40;
          if (bVar8) {
            FUN_00d50b20();
            goto LAB_01de2aad;
          }
          goto LAB_01de2ac1;
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        lVar7 = local_40;
        if (local_40 != 0) goto LAB_01de2aca;
LAB_01de2a00:
        lVar7 = 0;
      }
      lVar6 = lVar6 + 1;
      lVar4 = *(int64_t *)(arg1 + 0x238);
    } while (lVar6 < *(int *)(lVar4 + 0xc));
  }
  lVar4 = g_027f2a48;
  if (*(int *)((int64_t)local_48 + 0xc) != 0) {
    if (g_027f2a48 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar4;
    local_38 = '\0';
    FUN_00ca0840();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*pcVar1)();
  if (local_48 == puVar3) {
    FUN_00d50b20();
  }
  else {
    FUN_00d50b20();
    local_48 = puVar3;
  }
  lVar4 = *(int64_t *)(arg1 + 0x160);
  if (0 < *(int *)(lVar4 + 0xc)) {
    lVar6 = 0;
    do {
      lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar6 * 8);
      if (lVar5 != lVar4) {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        bVar8 = lVar5 != 0;
        lVar5 = lVar4;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      FUN_01dba5d0();
      if (local_40 == lVar7) {
LAB_01de2c9d:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
LAB_01de2cb1:
        if (lVar7 == 0) goto LAB_01de2bf0;
LAB_01de2cba:
        FUN_00d21140();
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          bVar8 = lVar7 != 0;
          lVar7 = local_40;
          if (bVar8) {
            FUN_00d50b20();
            goto LAB_01de2c9d;
          }
          goto LAB_01de2cb1;
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        lVar7 = local_40;
        if (local_40 != 0) goto LAB_01de2cba;
LAB_01de2bf0:
        lVar7 = 0;
      }
      lVar6 = lVar6 + 1;
      lVar4 = *(int64_t *)(arg1 + 0x160);
    } while (lVar6 < *(int *)(lVar4 + 0xc));
  }
  lVar4 = g_027f2a50;
  if (*(int *)((int64_t)local_48 + 0xc) != 0) {
    if (g_027f2a50 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar2;
  *(void*)(this_ptr + 1) = 1;
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

