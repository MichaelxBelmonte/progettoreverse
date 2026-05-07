// Function: FUN_00dffe20
// Address: 00dffe20
// Size: 1237 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_00dffe20(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *this_ptr;
  int64_t lVar9;
  int64_t lVar10;
  int64_t local_80;
  char local_78;
  int local_68;
  int64_t local_50;
  int64_t *local_40;
  char local_38;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  FUN_00e00580();
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_00e000af;
    FUN_00d50b00();
  }
  else if (local_80 == 0) goto LAB_00e000af;
  local_68 = -1;
  while( true ) {
    lVar8 = g_02787820;
    lVar10 = (int64_t)local_68;
    local_68 = local_68 + 1;
    if (*(int *)(local_80 + 0xc) <= local_68) break;
    plVar1 = *(int64_t **)(*(int64_t *)(local_80 + 0x10) + 8 + lVar10 * 8);
    if (g_02787820 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x400))();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      cVar5 = (**(code **)(*local_40 + 0x398))();
      if (cVar5 != '\0') {
        FUN_00ca94c0();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if (local_40 != (int64_t *)0x0) {
          local_38 = '\0';
          FUN_00d21140();
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
  }
  FUN_00115910();
  FUN_00d50b20();
  if (puVar6 == (void*)0x0) {
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
LAB_00e000af:
  if (*(int *)((int64_t)puVar6 + 0xc) < 1) {
    lVar8 = 0;
    bVar3 = false;
  }
  else {
    lVar10 = -1;
    lVar9 = 0;
    bVar3 = false;
    local_50 = 0;
    do {
      lVar8 = g_02784ac0;
      lVar2 = *(int64_t *)(puVar6[2] + lVar9 * 8);
      if (g_02784ac0 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      lVar8 = local_50;
      bVar4 = bVar3;
      if (local_40 == (int64_t *)0x0) {
        lVar7 = 0;
        if (lVar10 < 0) goto LAB_00e0022c;
      }
      else {
        lVar7 = FUN_00c71940();
        FUN_00d50b20();
        if (lVar10 < lVar7) {
LAB_00e0022c:
          lVar10 = lVar7;
          if (local_50 == lVar2) {
            if ((!bVar3) && (local_50 != 0)) {
              FUN_00d50b00();
              bVar4 = true;
            }
          }
          else {
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            bVar4 = true;
            lVar8 = lVar2;
            if ((bVar3) && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      bVar3 = bVar4;
      lVar9 = lVar9 + 1;
      local_50 = lVar8;
    } while ((int)lVar9 < *(int *)((int64_t)puVar6 + 0xc));
  }
  FUN_015ac3a0();
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar3) && (lVar8 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = lVar8;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return this_ptr;
}

