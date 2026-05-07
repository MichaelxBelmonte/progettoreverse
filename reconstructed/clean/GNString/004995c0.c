// Function: FUN_004995c0
// Address: 004995c0
// Size: 1866 bytes
// Class: GNString
// String references:
//   "%@: "
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_004995c0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t this_ptr;
  int64_t **pplVar4;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  uint32_t local_40;
  int64_t local_38;
  char local_30;
  
  FUN_00498b30();
  if (*(int64_t **)(this_ptr + 0xe8) != (int64_t *)0x0) {
    pplVar4 = &local_48;
    (**(code **)(**(int64_t **)(this_ptr + 0xe8) + 0x9c0))();
    plVar1 = local_48;
    FUN_0049bd70();
    if (plVar1 == (int64_t *)0x0) {
LAB_00499626:
      pplVar4 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00499626;
    }
    plVar1 = *pplVar4;
    if (*(char *)(pplVar4 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar4 + 1) = 0;
    }
    if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027086c8;
    if (plVar1 != (int64_t *)0x0) {
      if (g_027086c8 != 0) {
        FUN_00d50b00();
      }
      local_e8 = lVar2;
      local_e0 = '\x01';
      FUN_01e57260(param_1,&local_e8);
      local_38 = local_68;
      local_40 = 1;
      local_48 = &g_024c5048;
      local_30 = 0;
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      local_30 = '\x01';
      FUN_00d8cb40(param_1,&local_48);
      local_a8 = local_58;
      local_a0 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_a0 = '\x01';
      FUN_00d4c980();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_48 = &g_024c5048;
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  if (*(int64_t **)(this_ptr + 0xf0) != (int64_t *)0x0) {
    pplVar4 = &local_48;
    (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x9c0))();
    plVar1 = local_48;
    FUN_0049bd70();
    if (plVar1 == (int64_t *)0x0) {
LAB_004997fa:
      pplVar4 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_004997fa;
    }
    plVar1 = *pplVar4;
    if (*(char *)(pplVar4 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar4 + 1) = 0;
    }
    if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027086d0;
    if (plVar1 != (int64_t *)0x0) {
      if (g_027086d0 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar2;
      local_d0 = '\x01';
      FUN_01e57260(param_1,&local_d8);
      lVar2 = local_68;
      local_40 = 1;
      local_48 = &g_024c5048;
      local_30 = 0;
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar2;
      local_30 = '\x01';
      FUN_00d8cb40(param_1,&local_48);
      local_98 = local_58;
      local_90 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_90 = '\x01';
      FUN_00d4c980();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_48 = &g_024c5048;
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  if (*(int64_t **)(this_ptr + 0xf8) != (int64_t *)0x0) {
    pplVar4 = &local_48;
    (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x9c0))();
    plVar1 = local_48;
    FUN_0049bd70();
    if (plVar1 == (int64_t *)0x0) {
LAB_004999ce:
      pplVar4 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_004999ce;
    }
    plVar1 = *pplVar4;
    if (*(char *)(pplVar4 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar4 + 1) = 0;
    }
    if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027086d8;
    if (plVar1 != (int64_t *)0x0) {
      if (g_027086d8 != 0) {
        FUN_00d50b00();
      }
      local_c8 = lVar2;
      local_c0 = '\x01';
      FUN_01e57260(param_1,&local_c8);
      lVar2 = local_68;
      local_40 = 1;
      local_48 = &g_024c5048;
      local_30 = 0;
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar2;
      local_30 = '\x01';
      FUN_00d8cb40(param_1,&local_48);
      local_88 = local_58;
      local_80 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_80 = '\x01';
      FUN_00d4c980();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_48 = &g_024c5048;
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  if (*(int64_t **)(this_ptr + 0x100) == (int64_t *)0x0) {
    return;
  }
  pplVar4 = &local_48;
  (**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x9c0))();
  plVar1 = local_48;
  FUN_0049bd70();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00499b91;
  }
  pplVar4 = (int64_t **)&g_02802688;
LAB_00499b91:
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar4 + 1) = 0;
  }
  if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027087d8;
  if (plVar1 != (int64_t *)0x0) {
    if (g_027087d8 != 0) {
      FUN_00d50b00();
    }
    local_b8 = lVar2;
    local_b0 = '\x01';
    FUN_01e57260(param_1,&local_b8);
    lVar2 = local_68;
    local_40 = 1;
    local_48 = &g_024c5048;
    local_30 = 0;
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_38 = lVar2;
    local_30 = '\x01';
    FUN_00d8cb40(param_1,&local_48);
    local_78 = local_58;
    local_70 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_70 = '\x01';
    FUN_00d4c980();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_48 = &g_024c5048;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

