// Function: FUN_00e3ddb0
// Address: 00e3ddb0
// Size: 2063 bytes
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


void FUN_00e3ddb0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  void*puVar8;
  uint64_t uVar9;
  void*arg1;
  int64_t *this_ptr;
  int64_t *plVar10;
  int64_t *plVar11;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  void*local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_68;
  char local_60;
  int64_t *local_40;
  char local_38;
  
  local_60 = '\0';
  local_68 = (int64_t *)0x0;
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_025795a8;
  (*g_025795c0)();
  (**(code **)(*(int64_t *)*arg1 + 0x370))();
  local_c8 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_c8 = '\x01';
  local_d0 = local_40;
  FUN_00d8dbf0();
  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x380))();
  plVar3 = local_c0;
  uVar12 = FUN_00e128b0();
  local_b0 = local_e0;
  local_a8 = 0;
  if (local_d8 == '\0') {
    if (local_e0 != 0) {
      uVar12 = FUN_00d50b00();
    }
  }
  else {
    local_d8 = '\0';
  }
  local_a8 = '\x01';
  (**(code **)(*plVar3 + 0x98))(uVar12,&local_b0);
  if (local_40 == (int64_t *)0x0) {
    bVar1 = false;
    plVar3 = local_68;
  }
  else {
    plVar3 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_60 = '\x01';
      bVar1 = true;
    }
    else {
      local_60 = '\x01';
      local_38 = '\0';
      bVar1 = true;
    }
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x398))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    uVar12 = (**(code **)(*this_ptr + 0x398))();
    local_110 = local_40;
    local_108 = '\0';
    (**(code **)(*local_c0 + 0x388))(uVar12,&local_110);
    if ((bVar1) || (local_40 == (int64_t *)0x0)) {
LAB_00e3e0f5:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
        local_60 = '\x01';
        goto LAB_00e3e0f5;
      }
      local_60 = '\x01';
      local_38 = '\0';
    }
    if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar10 = local_40;
  if (plVar3 == (int64_t *)0x0) {
    FUN_00d8ede0();
    if (local_40 != (int64_t *)0x0) {
      bVar1 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00e3e251;
    }
LAB_00e3e24b:
    plVar10 = (int64_t *)0x0;
  }
  else {
    if ((g_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
    (**(code **)(*plVar3 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') {
      plVar10 = g_02802688;
      cVar5 = g_02802690;
      if (g_02802690 == '\0') goto LAB_00e3e1ec;
LAB_00e3e1dd:
      if (plVar10 == (int64_t *)0x0) goto LAB_00e3e1ec;
      FUN_00d50b00();
    }
    else {
      plVar10 = plVar3;
      cVar5 = local_60;
      if (local_60 != '\0') goto LAB_00e3e1dd;
LAB_00e3e1ec:
      if (plVar10 == (int64_t *)0x0) {
        (**(code **)(*plVar3 + 400))();
        if (local_40 != (int64_t *)0x0) {
          bVar1 = true;
          plVar10 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          goto LAB_00e3e251;
        }
        goto LAB_00e3e24b;
      }
    }
    if (cVar5 != '\0') {
      FUN_00d50b00();
      FUN_00d50b20();
      bVar1 = true;
      goto LAB_00e3e251;
    }
  }
  bVar1 = false;
LAB_00e3e251:
  iVar6 = FUN_00d8c7a0();
  plVar4 = g_027866e0;
  plVar11 = plVar10;
  bVar2 = bVar1;
  if (iVar6 == 0) {
    if (g_027866e0 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    if (plVar10 == plVar4) {
      bVar2 = true;
      if (plVar4 == (int64_t *)0x0) {
        bVar2 = bVar1;
      }
      if ((bVar1) && (bVar2 = bVar1, plVar4 != (int64_t *)0x0)) {
        FUN_00d50b20();
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
      plVar11 = plVar4;
      if ((bVar1) && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  uVar7 = FUN_00d8c7a0();
  uVar12 = (**(code **)(*this_ptr + 0x380))();
  local_88 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_88 = '\x01';
  local_90 = local_40;
  uVar9 = FUN_00d906a0(uVar12,(uint64_t)uVar7 << 0x20);
  uVar12 = extraout_XMM0_Da;
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if (uVar9 >> 0x20 != 0) {
    do {
      local_f8 = '\0';
      local_100 = plVar11;
      FUN_00d8e100(uVar12,&local_100);
      if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar7 = FUN_00d8c7a0();
      uVar12 = (**(code **)(*this_ptr + 0x380))();
      local_78 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          uVar12 = FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = '\x01';
      local_80 = local_40;
      uVar9 = FUN_00d906a0(uVar12,(uint64_t)uVar7 << 0x20);
      uVar12 = extraout_XMM0_Da_00;
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
    } while (uVar9 >> 0x20 != 0);
  }
  local_e8 = '\0';
  local_f0 = puVar8;
  (**(code **)(*(int64_t *)*arg1 + 0x368))();
  if ((local_e8 != '\0') && (local_f0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar8 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

