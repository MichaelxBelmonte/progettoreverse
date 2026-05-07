// Function: FUN_01a96f20
// Address: 01a96f20
// Size: 741 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_01a96f20(uint32_t param_1)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar7;
  bool bVar8;
  int64_t *plVar9;
  float fVar10;
  float local_98;
  int local_68;
  int64_t *local_40;
  char local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  lVar7 = *(int64_t *)(arg1 + 0x38);
  if (lVar7 != 0) {
    local_68 = -1;
    while( true ) {
      lVar5 = (int64_t)local_68;
      local_68 = local_68 + 1;
      if (*(int *)(lVar7 + 0xc) <= local_68) break;
      plVar6 = *(int64_t **)(*(int64_t *)(lVar7 + 0x10) + 8 + lVar5 * 8);
      if (plVar6 != (int64_t *)0x0) {
        FUN_01a58dc0();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01e437f0(param_1);
        cVar3 = (**(code **)(*plVar6 + 0x920))();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          local_38 = '\0';
          FUN_00d21140();
          local_40 = plVar6;
        }
      }
    }
    FUN_01a80d20();
    if (puVar4 == (void*)0x0) {
      *this_ptr = 0;
      *(void*)(this_ptr + 1) = 1;
      return this_ptr;
    }
  }
  if (*(int *)((int64_t)puVar4 + 0xc) < 1) {
    bVar8 = false;
    plVar6 = (int64_t *)0x0;
  }
  else {
    local_98 = g_0241c4b8;
    lVar7 = 0;
    bVar8 = false;
    plVar9 = (int64_t *)0x0;
    do {
      plVar1 = *(int64_t **)(puVar4[2] + lVar7 * 8);
      fVar10 = (float)(**(code **)(*plVar1 + 0x4d8))();
      plVar6 = plVar9;
      bVar2 = bVar8;
      if (local_98 < fVar10) {
        local_98 = fVar10;
        if (plVar9 == plVar1) {
          if ((!bVar8) && (plVar9 != (int64_t *)0x0)) {
            FUN_00d50b00();
            bVar2 = true;
          }
        }
        else {
          FUN_00d50b00();
          plVar6 = plVar1;
          bVar2 = true;
          if ((bVar8) && (plVar9 != (int64_t *)0x0)) {
            FUN_00d50b20();
            bVar2 = true;
          }
        }
      }
      bVar8 = bVar2;
      lVar7 = lVar7 + 1;
      plVar9 = plVar6;
    } while ((int)lVar7 < *(int *)((int64_t)puVar4 + 0xc));
  }
  FUN_01a80d20();
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar8) && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = plVar6;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return this_ptr;
}

