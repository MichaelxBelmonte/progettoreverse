// Function: FUN_01d1f850
// Address: 01d1f850
// Size: 1361 bytes
// Class: GNString
// String references:
//   "%@"
//   "GNString"
//   "GNDictionary"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01d1f850(uint64_t param_1,uint64_t param_2)

{
  char cVar1;
  int iVar2;
  uint64_t unaff_RBX;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  int64_t **pplVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  uint local_48;
  int64_t local_40;
  char local_38;
  
  if ((char)this_ptr[6] == '\0') {
    uVar3 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
    goto LAB_01d1fc17;
  }
  FUN_01ccad60();
  plVar7 = local_50;
  if (local_50 == (int64_t *)0x0) {
    plVar7 = (int64_t *)0x0;
joined_r0x01d1f8a9:
    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if ((char)local_48 == '\0') {
    FUN_00d50b00();
    goto joined_r0x01d1f8a9;
  }
  FUN_01e10550();
  local_80 = local_50;
  local_78 = 0;
  local_b8 = g_027e7c20;
  if ((char)local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
      local_b8 = g_027e7c20;
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_78 = '\x01';
  g_027e7c20 = local_b8;
  if (local_b8 != 0) {
    local_78 = '\x01';
    FUN_00d50b00();
  }
  local_b0 = '\x01';
  cVar1 = (**(code **)(*this_ptr + 0x4d8))(param_2,&local_b8);
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar8 = FUN_01e10550();
    local_48 = 1;
    local_50 = &g_024c5048;
    local_38 = 0;
    if (local_c8 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_40 = local_c8;
    local_38 = '\x01';
    uVar8 = FUN_00d8cb40(uVar8,&local_50);
    lVar4 = local_60;
    if (local_60 == 0) {
      lVar4 = 0;
    }
    else if (local_58 == '\0') {
      uVar8 = FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != 0)) {
        uVar8 = FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    local_88 = lVar4;
    FUN_00d8cbf0(uVar8,6);
    local_70 = local_60;
    local_68 = 0;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_68 = '\x01';
    uVar8 = FUN_00de3e90();
    plVar6 = local_50;
    if ((g_026fdd40 == '\0') &&
       (iVar2 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_01, iVar2 != 0)) {
      g_026cd0e8 = FUN_00d4fe50();
      g_026cd0d0 = "GNDictionary";
      g_026cd0d8 = 0x28;
      g_026cd0e0 = FUN_00022d20;
      g_026cd0f0 = 0;
      ram_00000000026cd0f8 = 0;
      g_026cd100 = 0;
      g_026cd178 = 0;
      ram_00000000026cd180 = 0;
      g_026cd188 = 0;
      g_026cd18a = 6;
      g_026cd108 = 0;
      ram_00000000026cd110 = 0;
      g_026cd118 = 0;
      ram_00000000026cd120 = 0;
      g_026cd128 = 0;
      ram_00000000026cd130 = 0;
      g_026cd138 = 0;
      ram_00000000026cd140 = 0;
      g_026cd148 = 0;
      ram_00000000026cd150 = 0;
      g_026cd158 = 0;
      ram_00000000026cd160 = 0;
      g_026cd168 = 0;
      ram_00000000026cd170 = 0;
      g_026cd193 = 0;
      g_026cd18b = 0;
      uVar8 = ___cxa_guard_release();
    }
    pplVar5 = (int64_t **)&g_02802688;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x360))();
      cVar1 = FUN_00e85ea0();
      uVar8 = extraout_XMM0_Da;
      if (cVar1 != '\0') {
        if ((g_026fd0c0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
        cVar1 = FUN_00e8db60();
        pplVar5 = &local_50;
        uVar8 = extraout_XMM0_Da_00;
        if (cVar1 == '\0') {
          pplVar5 = (int64_t **)&g_02802688;
        }
      }
    }
    plVar6 = *pplVar5;
    if (plVar6 == (int64_t *)0x0) {
      plVar6 = (int64_t *)0x0;
    }
    else if (*(char *)(pplVar5 + 1) == '\0') {
      uVar8 = FUN_00d50b00();
    }
    else {
      *(void*)(pplVar5 + 1) = 0;
    }
    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    lVar4 = g_027e7c20;
    local_a0 = '\0';
    local_a8 = plVar6;
    if (g_027e7c20 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_98 = lVar4;
    local_90 = '\x01';
    (**(code **)(*this_ptr + 0x4d0))(uVar8,&local_98);
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 6) = 0;
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    uVar3 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
    if (local_88 != 0) {
      FUN_00d50b20();
    }
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01d1fc17:
  return uVar3 & 0xffffffff;
}

