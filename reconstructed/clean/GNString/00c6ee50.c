// Function: FUN_00c6ee50
// Address: 00c6ee50
// Size: 1121 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00c6ee50(void)

{
  bool bVar1;
  int iVar2;
  void*puVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar6;
  int64_t lVar7;
  int64_t local_80;
  char local_78;
  int local_68;
  int64_t *local_58;
  char local_50;
  int64_t *local_40;
  char local_38;
  
  if ((arg1[4] != 0) || (*(int *)(arg1[2] + 0xc) <= *(int *)(arg1[3] + 0xc)))
  goto LAB_00c6f278;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  (**(code **)(*arg1 + 0x3d8))();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
      goto LAB_00c6eef9;
    }
  }
  else if (local_80 != 0) {
LAB_00c6eef9:
    local_68 = -1;
    while( true ) {
      lVar7 = (int64_t)local_68;
      local_68 = local_68 + 1;
      if (*(int *)(local_80 + 0xc) <= local_68) break;
      plVar4 = *(int64_t **)(*(int64_t *)(local_80 + 0x10) + 8 + lVar7 * 8);
      (**(code **)(*plVar4 + 0x3c8))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        local_38 = '\0';
        FUN_00d21140();
        local_40 = plVar4;
      }
    }
    FUN_00c6f7c0();
    FUN_00d50b20();
  }
  if (*(int *)((int64_t)puVar3 + 0xc) != 0) {
    FUN_00d242c0();
    lVar7 = 0;
    bVar1 = false;
    plVar4 = (int64_t *)0x0;
    do {
      bVar6 = bVar1;
      if (*(int *)((int64_t)puVar3 + 0xc) <= (int)lVar7) goto LAB_00c6f219;
      plVar5 = *(int64_t **)(puVar3[2] + lVar7 * 8);
      if (plVar4 == (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x3c8))();
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        FUN_00c6f510();
        if (local_40 == (int64_t *)0x0) {
          plVar5 = (int64_t *)0x0;
        }
        else {
          plVar5 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
            bVar1 = true;
          }
          else {
            local_38 = '\0';
            bVar1 = true;
          }
        }
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*plVar5 + 0x3c8))();
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_40 = local_58;
        local_38 = '\0';
        FUN_00d7ab40();
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        plVar5 = plVar4;
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      iVar2 = FUN_00c8d620();
      lVar7 = lVar7 + 1;
      plVar4 = plVar5;
    } while (iVar2 != 0);
    plVar4 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar4 = (int64_t)&g_02578b00;
    (*g_02578b18)();
    if (plVar4 == plVar5) {
      if (bVar1) {
        FUN_00d50b20();
        plVar4 = plVar5;
        bVar6 = bVar1;
      }
      else {
        plVar4 = plVar5;
        bVar6 = true;
      }
    }
    else {
      bVar6 = true;
      if (bVar1) {
        FUN_00d50b20();
      }
    }
LAB_00c6f219:
    FUN_00c6f7c0();
    plVar5 = (int64_t *)arg1[4];
    if (plVar5 != plVar4) {
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      arg1[4] = (int64_t)plVar4;
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((bVar6) && (plVar4 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_00c6f278:
  *(void*)(this_ptr + 1) = 0;
  lVar7 = arg1[4];
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar7;
  *(void*)(this_ptr + 1) = 1;
  return;
}

