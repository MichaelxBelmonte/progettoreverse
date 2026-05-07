// Function: FUN_00386110
// Address: 00386110
// Size: 1309 bytes
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


void FUN_00386110(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t **pplVar6;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar7;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  lVar2 = g_02704038;
  if (*arg1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  if (g_02704038 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_a8 = lVar2;
  local_a0 = '\x01';
  uVar8 = FUN_00c9fe40(param_1,&local_a8);
  plVar7 = local_48;
  local_30 = local_40 != '\0';
  local_38 = local_48;
  if ((bool)local_30) {
    local_40 = '\0';
  }
  if ((g_026fd0c0 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_00, iVar5 != 0)) {
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
    uVar8 = ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_003861e9:
    pplVar6 = &g_02802688;
    plVar7 = g_02802688;
    if (g_02802690 != '\0') goto LAB_003861f9;
LAB_0038620c:
    if (plVar7 != (int64_t *)0x0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_003861e9;
    pplVar6 = &local_38;
    plVar7 = local_38;
    if (local_30 == '\0') goto LAB_0038620c;
LAB_003861f9:
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = g_02704030;
  if (g_02704030 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_98 = lVar2;
  local_90 = '\x01';
  FUN_00c9fe40(uVar8,&local_98);
  plVar1 = local_48;
  local_30 = local_40 != '\0';
  local_38 = local_48;
  if ((bool)local_30) {
    local_40 = '\0';
  }
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
    if (cVar4 != '\0') {
      pplVar6 = &local_38;
      plVar1 = local_38;
      cVar4 = local_30;
      goto joined_r0x003862fe;
    }
  }
  pplVar6 = &g_02802688;
  plVar1 = g_02802688;
  cVar4 = g_02802690;
joined_r0x003862fe:
  if (cVar4 == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (int64_t *)0x0) {
    local_60 = '\0';
    local_68 = plVar1;
    FUN_00cddf30();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80 = '\0';
    local_88 = plVar7;
    FUN_00cddf30();
    local_58 = local_38;
    local_50 = 0;
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_50 = '\x01';
    uVar8 = FUN_00cd1020();
    plVar3 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (int64_t *)0x0) && (uVar8 = FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (int64_t *)0x0)) {
        uVar8 = FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if (plVar3 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      local_70 = '\0';
      local_78 = plVar1;
      FUN_00cd0bc0(uVar8,&local_78);
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

