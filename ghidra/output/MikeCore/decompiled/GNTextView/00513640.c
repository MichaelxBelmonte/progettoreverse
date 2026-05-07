// Function: FUN_00513640
// Address: 00513640
// Size: 3389 bytes
// Class: GNTextView
// String references:
//   "[%@] %s"
//   "Beta"
//   "Alpha"
//   "GNTextView"
//   "%@ %@.%@ %@"
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00513640(undefined4 param_1,float param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  longlong **pplVar9;
  longlong unaff_RDI;
  longlong *plVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar13 [16];
  longlong local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong *local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  uint local_b0;
  longlong *local_a8;
  char local_a0;
  char *local_98;
  longlong *local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar5 = DAT_0270b080;
  if (DAT_0270b080 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_1a8 = lVar5;
  local_1a0 = '\x01';
  pplVar9 = &local_b8;
  FUN_01e57490(param_1,&local_1a8);
  plVar1 = local_b8;
  if ((DAT_026f3380 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    _DAT_027fadc8 = FUN_0006d940();
    _DAT_027fadb0 = "GNTextView";
    _DAT_027fadb8 = 0x1d8;
    _DAT_027fadc0 = FUN_001fc360;
    _DAT_027fadd0 = 0;
    uRam00000000027fadd8 = 0;
    _DAT_027fade0 = 0;
    uRam00000000027fade8 = 0;
    _DAT_027fadf0 = 0;
    uRam00000000027fadf8 = 0;
    _DAT_027fae00 = 0;
    uRam00000000027fae08 = 0;
    _DAT_027fae10 = 0;
    uRam00000000027fae18 = 0;
    _DAT_027fae20 = 0;
    uRam00000000027fae28 = 0;
    _DAT_027fae30 = 0;
    uRam00000000027fae38 = 0;
    _DAT_027fae40 = 0;
    uRam00000000027fae48 = 0;
    _DAT_027fae50 = 0;
    uRam00000000027fae58 = 0;
    _DAT_027fae60 = 0;
    uRam00000000027fae68 = 0;
    _DAT_027fae70 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_005136cb:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 == '\0') goto LAB_005136cb;
  }
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  if (((char)local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  local_f0 = plVar1;
  FUN_01f7e630();
  FUN_01f27fe0();
  FUN_01f2eb50();
  local_68 = local_b8;
  if ((char)local_b0 == '\0') {
    if (local_b8 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_b0 = local_b0 & 0xffffff00;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    iVar8 = FUN_000030b0();
    if (iVar8 == 2) {
      FUN_00d8ede0();
      local_d8 = local_b8;
      local_d0 = 0;
      if ((char)local_b0 == '\0') {
        if (local_b8 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = local_b0 & 0xffffff00;
      }
      local_d0 = '\x01';
      FUN_01e125e0();
      if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar11 = FUN_00003010();
      uVar11 = FUN_00d91a70(uVar11,1);
      FUN_00d97ce0(uVar11,8);
      iVar8 = FUN_000030b0();
      local_a8 = local_50;
      local_98 = "Alpha";
      if (iVar8 == 1) {
        local_98 = "Beta";
      }
      local_b0 = 2;
      local_b8 = &DAT_024c5048;
      local_a0 = 0;
      uVar11 = extraout_XMM0_Da;
      if (local_50 != (longlong *)0x0) {
        uVar11 = FUN_00d50b00();
      }
      local_a0 = '\x01';
      local_b8 = (longlong *)&DAT_024c59c8;
      FUN_00d8cb40(uVar11,&local_b8);
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      local_b8 = &DAT_024c5048;
      if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e53c20();
      (**(code **)(*local_50 + 0x640))();
      (**(code **)(*local_40 + 0x370))();
      local_e8 = local_b8;
      local_e0 = 0;
      if ((char)local_b0 == '\0') {
        if (local_b8 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = local_b0 & 0xffffff00;
      }
      local_e0 = '\x01';
      FUN_01e12b60();
      if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_198 = plVar1;
      local_190 = '\0';
      FUN_01e125e0();
      if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01e53c20();
  (**(code **)(*local_60 + 0x640))();
  uVar11 = (**(code **)(*local_50 + 0x370))();
  FUN_01d44a40(uVar11,1);
  plVar1 = local_b8;
  if ((char)local_b0 == '\0') {
    if (local_b8 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_b0 = local_b0 & 0xffffff00;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_f8 = plVar1;
  if (*(longlong **)(unaff_RDI + 0xa8) != (longlong *)0x0) {
    local_188 = plVar1;
    local_180 = '\0';
    (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x9d8))();
    if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x78) != 0) {
      FUN_01e40eb0();
      plVar10 = local_b8;
      if (((char)local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 != (longlong *)0x0) {
        uVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x4d8))();
        uVar12 = (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x4d8))();
        auVar2._8_4_ = extraout_XMM0_Dc;
        auVar2._0_8_ = uVar3;
        auVar2._12_4_ = extraout_XMM0_Dd;
        auVar13._4_4_ = (int)((ulonglong)uVar12 >> 0x20);
        auVar13._0_4_ = ((float)uVar12 - param_2) + DAT_02394248;
        auVar13._8_4_ = extraout_XMM0_Dc_00;
        auVar13._12_4_ = extraout_XMM0_Dd_00;
        auVar13 = blendps(auVar2,auVar13,1);
        (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x4d0))(auVar13._0_4_);
      }
    }
  }
  if (*(longlong *)(unaff_RDI + 0xb0) != 0) {
    local_178 = plVar1;
    local_170 = '\0';
    FUN_01e12b60();
    if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = DAT_0270b068;
  local_58 = '\0';
  local_60 = (longlong *)0x0;
  if (DAT_0270b068 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar11 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
      (uVar11 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  local_50 = plVar1;
  local_48 = '\0';
  FUN_000175c0(uVar11,&local_50);
  plVar6 = local_40;
  plVar10 = local_f0;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) {
    local_100 = '\0';
    local_108 = 0;
  }
  else {
    local_38 = '\0';
    local_40 = plVar6;
    FUN_00d97750();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar11 = FUN_00d50b20();
  local_168 = DAT_0270b070;
  if (DAT_0270b070 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_160 = '\x01';
  uVar11 = FUN_000175c0(uVar11,&local_168);
  local_158 = DAT_0270b078;
  if (DAT_0270b078 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_150 = '\x01';
  FUN_000175c0(uVar11,&local_158);
  uVar11 = FUN_00513530(&local_50,&local_40,&local_60);
  FUN_00d8cb40(uVar11,&local_b8);
  lVar5 = local_118;
  if (local_110 == '\0') {
    if (((local_118 != 0) && (FUN_00d50b00(), local_110 != '\0')) && (local_118 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_110 = '\0';
  }
  FUN_002d10d0();
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  local_148 = lVar5;
  local_140 = '\0';
  uVar11 = (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x958))();
  if ((local_140 != '\0') && (local_148 != 0)) {
    uVar11 = FUN_00d50b20();
  }
  lVar4 = DAT_026fbad8;
  if (DAT_026fbad8 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_138 = lVar4;
  local_130 = '\x01';
  pplVar9 = &local_b8;
  FUN_000175c0(uVar11,&local_138);
  plVar1 = local_b8;
  if ((DAT_026fd0c0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    _DAT_026d5e50 = FUN_0005d920;
    _DAT_026d5e60 = 0;
    uRam00000000026d5e68 = 0;
    _DAT_026d5e70 = 0;
    uRam00000000026d5e78 = 0;
    _DAT_026d5e80 = 0;
    uRam00000000026d5e88 = 0;
    _DAT_026d5e90 = 0;
    uRam00000000026d5e98 = 0;
    _DAT_026d5ea0 = 0;
    uRam00000000026d5ea8 = 0;
    _DAT_026d5eb0 = 0;
    uRam00000000026d5eb8 = 0;
    _DAT_026d5ec0 = 0;
    uRam00000000026d5ec8 = 0;
    _DAT_026d5ed0 = 0;
    uRam00000000026d5ed8 = 0;
    _DAT_026d5ee0 = 0;
    uRam00000000026d5ee8 = 0;
    _DAT_026d5ef0 = 0;
    uRam00000000026d5ef8 = 0;
    _DAT_026d5f00 = 0;
    ___cxa_guard_release();
    plVar10 = local_f0;
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 != '\0') goto LAB_00514048;
  }
  pplVar9 = (longlong **)&DAT_02802688;
LAB_00514048:
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  if (((char)local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    FUN_00d8ede0();
    local_c8 = local_b8;
    local_c0 = 0;
    if ((char)local_b0 == '\0') {
      if (local_b8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_b0 = local_b0 & 0xffffff00;
    }
    local_c0 = '\x01';
    FUN_01e125e0();
    if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_120 = '\0';
    local_128 = plVar1;
    FUN_01e125e0();
    if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_f8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_68 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


