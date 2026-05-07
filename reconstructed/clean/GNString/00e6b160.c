// Function: FUN_00e6b160
// Address: 00e6b160
// Size: 963 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e6b160(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *arg1;
  int64_t **pplVar6;
  uint32_t uVar7;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  plVar2 = g_027855e8;
  if (*arg1 == 0) {
    return;
  }
  if (g_027855e8 != (int64_t *)0x0) {
    param_1 = FUN_00d50b00();
  }
  lVar3 = g_02787890;
  if (g_02787890 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_90 = lVar3;
  local_88 = '\x01';
  pplVar6 = &local_40;
  FUN_000175c0(param_1,&local_90);
  plVar1 = local_40;
  if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_00e6b214;
  }
  pplVar6 = (int64_t **)&g_02802688;
LAB_00e6b214:
  local_48 = 0;
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  local_48 = '\x01';
  local_50 = plVar1;
  cVar4 = (**(code **)(*plVar2 + 0x50))();
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  uVar7 = FUN_00d50b20();
  local_80 = g_02787930;
  if (cVar4 != '\0') {
    if (g_02787930 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_000175c0(uVar7,&local_80);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = g_02787938;
    local_70 = g_02787940;
    if ((plVar2 == (int64_t *)0x0) && (g_02787938 != (int64_t *)0x0)) {
      FUN_00d50b00();
      local_70 = g_02787940;
      plVar2 = plVar1;
    }
    g_02787940 = local_70;
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    local_58 = '\0';
    local_60 = plVar2;
    uVar7 = FUN_00e97060(g_025908a0,&local_60);
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (uVar7 = FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        uVar7 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    local_a8 = *arg1;
    local_a0 = 0;
    FUN_00e6a750(uVar7,&local_a8);
    FUN_00e971f0();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

