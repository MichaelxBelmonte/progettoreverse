// Function: FUN_00ccbd90
// Address: 00ccbd90
// Size: 986 bytes
// Class: GNBCFA
// String references:
//   "Cannot open %@ (%d)."

void FUN_00ccbd90(int64_t **param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar6;
  int64_t *plVar7;
  char cVar8;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  uint local_50;
  int64_t local_48;
  char local_40;
  int local_38;
  
  plVar7 = (int64_t *)*arg1;
  cVar8 = (char)arg1[1];
  if ((cVar8 == '\0') || (plVar7 == (int64_t *)0x0)) {
    if (plVar7 == (int64_t *)0x0) goto LAB_00ccbebb;
  }
  else {
    FUN_00d50b00();
  }
  do {
    cVar3 = (**(code **)(*plVar7 + 0x4c0))();
    if (cVar3 == '\0') goto LAB_00ccbfb0;
    (**(code **)(*plVar7 + 0x4c8))();
    plVar6 = local_58;
    if (local_58 == plVar7) {
      plVar6 = plVar7;
      if ((cVar8 == '\0') && (local_58 != (int64_t *)0x0)) {
        if ((char)local_50 == '\0') {
          FUN_00d50b00();
          goto LAB_00ccbe70;
        }
        goto LAB_00ccbdd9;
      }
joined_r0x00ccbe9e:
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((char)local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (cVar8 == '\0') {
          cVar8 = '\x01';
        }
        else {
          FUN_00d50b20();
          plVar7 = plVar6;
LAB_00ccbe70:
          plVar6 = plVar7;
          cVar8 = '\x01';
        }
        goto joined_r0x00ccbe9e;
      }
      if (cVar8 != '\0') {
        FUN_00d50b20();
      }
LAB_00ccbdd9:
      local_50 = local_50 & 0xffffff00;
      cVar8 = '\x01';
    }
    plVar7 = plVar6;
  } while (plVar6 != (int64_t *)0x0);
  plVar7 = (int64_t *)0x0;
LAB_00ccbebb:
  lVar1 = g_027726e0;
  if (g_027726e0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x368))();
  local_50 = 2;
  local_58 = &g_024c5048;
  local_40 = 0;
  if (local_68 != 0) {
    FUN_00d50b00();
  }
  local_48 = local_68;
  local_40 = '\x01';
  local_58 = (int64_t *)&g_025df2a0;
  local_38 = 0;
  param_1 = &local_58;
  FUN_00cc7a20(param_1,"Cannot open %@ (%d).");
  FUN_00cc76c0();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_58 = &g_024c5048;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_00ccbfb0:
  FUN_00cde020();
  iVar4 = _open((char *)param_1,0x1a4);
  *(int *)(this_ptr + 0x18) = iVar4;
  lVar1 = g_027726e0;
  if (iVar4 == -1) {
    if (g_027726e0 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x368))();
    piVar5 = ___error();
    iVar4 = *piVar5;
    local_50 = 2;
    local_58 = &g_024c5048;
    local_40 = 0;
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_48 = local_68;
    local_40 = '\x01';
    local_58 = (int64_t *)&g_025df2a0;
    local_38 = iVar4;
    FUN_00cc7a20(&local_58,"Cannot open %@ (%d).");
    FUN_00cc76c0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    local_58 = &g_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x20);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x20) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((cVar8 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

