// Function: FUN_01d1dc70
// Address: 01d1dc70
// Size: 1147 bytes
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


uint64_t FUN_01d1dc70(uint64_t param_1,int64_t *param_2)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t *arg1;
  int64_t lVar4;
  int64_t **pplVar5;
  int64_t *plVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_b0;
  char local_a8;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_60;
  uint32_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  local_b0 = *param_2;
  local_a8 = '\0';
  cVar1 = FUN_01ccbbc0(param_1,&local_b0);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  lVar4 = g_027e7c20;
  if (cVar1 == '\0') {
LAB_01d1de4e:
    uVar3 = 0;
    goto LAB_01d1de50;
  }
  param_2 = (int64_t *)*param_2;
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar4;
  local_88 = '\x01';
  cVar1 = (**(code **)(*param_2 + 0x50))();
  if (cVar1 == '\0') {
    uVar3 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_01d1de50;
  }
  lVar4 = *arg1;
  uVar7 = extraout_XMM0_Da;
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if (lVar4 == 0) {
    uVar3 = 1;
    goto LAB_01d1de50;
  }
  lVar4 = *arg1;
  local_58 = 1;
  local_60 = &g_024c5048;
  local_48 = 0;
  if (lVar4 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_48 = '\x01';
  local_50 = lVar4;
  FUN_00d8cb40(uVar7,&local_60);
  lVar4 = local_40;
  if (local_40 == 0) {
    lVar4 = 0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  local_60 = &g_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 == 0) goto LAB_01d1de4e;
  iVar2 = FUN_00d8c7a0();
  if (iVar2 == 0) {
LAB_01d1e320:
    uVar3 = 0;
  }
  else {
    FUN_00d8cbf0(extraout_XMM0_Da_00,6);
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    FUN_00de3e90();
    plVar6 = local_60;
    if ((g_026fdd40 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
      ___cxa_guard_release();
    }
    pplVar5 = (int64_t **)&g_02802688;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x360))();
      cVar1 = FUN_00e85ea0();
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
        pplVar5 = &local_60;
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
      FUN_00d50b00();
    }
    else {
      *(void*)(pplVar5 + 1) = 0;
    }
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (int64_t *)0x0) goto LAB_01d1e320;
    uVar3 = CONCAT71((int7)((uint64_t)pplVar5 >> 8),1);
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01d1de50:
  return uVar3 & 0xffffffff;
}

