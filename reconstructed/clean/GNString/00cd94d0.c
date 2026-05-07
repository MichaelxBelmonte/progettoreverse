// Function: FUN_00cd94d0
// Address: 00cd94d0
// Size: 868 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00cd94d0(uint64_t param_1,int param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  void*puVar6;
  void*puVar7;
  uint64_t uVar8;
  int *piVar9;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar10;
  bool bVar11;
  int64_t local_b0;
  char local_a8;
  void*local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int local_64;
  int64_t local_60;
  char local_58;
  void*local_50;
  char local_48;
  void*local_40;
  char local_31;
  
  lVar2 = *(int64_t *)(*(int64_t *)(*arg1 + 0x20) + 0x10);
  lVar10 = (uint64_t)(param_2 - 1) * 0x23c;
  if (*(int64_t *)(lVar2 + 8 + lVar10) == 0) {
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    *(void*)(this_ptr + 1) = 0;
    goto LAB_00cd981a;
  }
  FUN_00c8e690();
  puVar7 = local_50;
  if ((((local_48 == '\0') && (local_50 != (void*)0x0)) && (FUN_00d50b00(), local_48 != '\0')
      ) && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  local_40 = puVar7;
  FUN_00c92170();
  local_31 = puVar7 != (void*)0x0;
  plVar3 = *(int64_t **)(*arg1 + 0x38);
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar3 + 0x3a0))();
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  piVar9 = (int *)(lVar2 + lVar10 + 8);
  local_64 = *piVar9;
  (**(code **)(*plVar3 + 0x380))(&local_64,local_40[2]);
  if (local_50 == (void*)0x0) {
    if (local_64 != *piVar9) goto LAB_00cd9638;
  }
  else {
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
LAB_00cd9638:
    lVar5 = g_02774d90;
    if (g_02774d90 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  plVar4 = *(int64_t **)(*(int64_t *)(*arg1 + 0x48) + 0x20);
  puVar7 = local_40;
  if (plVar4 != (int64_t *)0x0) {
    local_88 = local_40;
    local_80 = '\0';
    uVar8 = 0;
    do {
      uVar1 = uVar8 + 1;
      if (*(short *)(lVar2 + lVar10 + 0x24 + uVar8 * 2) == 0) break;
      bVar11 = uVar8 < 0x100;
      uVar8 = uVar1;
    } while (bVar11);
    if ((int)uVar1 == 1) {
      FUN_00d8ede0();
    }
    else {
      FUN_00d920f0();
    }
    lVar5 = local_78;
    local_58 = 0;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    puVar7 = local_40;
    local_58 = '\x01';
    local_60 = lVar5;
    (**(code **)(*plVar4 + 0x20))
              (&local_60,&local_88,*(void*)(lVar2 + 0x1c + lVar10),
               *(void*)(lVar2 + 0x18 + lVar10));
    puVar6 = local_50;
    if (puVar7 == local_50) {
LAB_00cd97a1:
      if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_48 == '\0') {
        if (local_50 != (void*)0x0) {
          FUN_00d50b00();
        }
        local_31 = '\x01';
        bVar11 = puVar7 != (void*)0x0;
        puVar7 = puVar6;
        if (bVar11) {
          FUN_00d50b20();
        }
        goto LAB_00cd97a1;
      }
      if (puVar7 != (void*)0x0) {
        FUN_00d50b20();
      }
      local_48 = '\0';
      local_31 = '\x01';
      puVar7 = local_50;
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  if ((local_31 == '\0') && (puVar7 != (void*)0x0)) {
    FUN_00d50b00();
  }
LAB_00cd981a:
  *this_ptr = puVar7;
  *(void*)(this_ptr + 1) = 1;
  return;
}

