// Function: FUN_006ffef0
// Address: 006ffef0
// Size: 869 bytes
// Class: Unknown

uint64_t FUN_006ffef0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t *plVar4;
  char cVar5;
  int64_t *plVar6;
  int64_t this_ptr;
  int64_t **pplVar7;
  int64_t local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  pplVar7 = &local_40;
  FUN_013fb460();
  plVar1 = local_40;
  FUN_00152600();
  if (plVar1 == (int64_t *)0x0) {
LAB_006fff44:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_006fff44;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_02727ad8;
  if (plVar1 == (int64_t *)0x0) {
    if (g_02727ad8 != 0) {
      FUN_00d50b00();
    }
    local_70 = 0;
    local_68 = '\0';
    local_60 = 0;
    local_58 = '\0';
    FUN_01e4fcf0(&local_60,&local_70);
    plVar6 = g_0280c928;
    if (g_0280c928 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) {
          plVar6 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b00();
          plVar6 = local_40;
        }
      }
      else {
        local_38 = '\0';
        plVar6 = local_40;
      }
      bVar3 = g_0280c928 != (int64_t *)0x0;
      g_0280c928 = plVar6;
      if (bVar3) {
        FUN_00d50b20();
        plVar6 = local_40;
      }
    }
    if ((plVar6 != (int64_t *)0x0) && (g_0280c930 == '\0')) {
      g_0280c930 = '\x01';
      FUN_00e8cb90();
      plVar6 = local_40;
    }
    if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*g_0280c928 + 0x460))();
  }
  else {
    FUN_01e42030();
    FUN_01d8c6e0();
    FUN_01e5d9c0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  pplVar7 = &local_40;
  FUN_013fb460();
  plVar6 = local_40;
  FUN_00152600();
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 != '\0') goto LAB_00700153;
  }
  pplVar7 = (int64_t **)&g_02802688;
LAB_00700153:
  plVar6 = *pplVar7;
  plVar4 = plVar1;
  if (plVar1 != plVar6) {
    plVar4 = plVar6;
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      *(void*)(pplVar7 + 1) = 0;
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_006f3f00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      lVar2 = *(int64_t *)(this_ptr + 0x88);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_48 = '\x01';
      local_50 = lVar2;
      FUN_0006a090();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return 1;
}

