// Function: FUN_00481b90
// Address: 00481b90
// Size: 3553 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481b90(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong **pplVar8;
  undefined4 uVar9;
  longlong local_228;
  char local_220;
  longlong *local_218;
  char local_210;
  longlong local_208;
  char local_200;
  longlong local_1f8;
  char local_1f0;
  longlong local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  FUN_000b6bf0();
  lVar3 = DAT_02708680;
  if (DAT_02708680 == 0) {
    lVar7 = unaff_RDI[0x17];
    if (lVar7 != 0) goto LAB_00481be0;
  }
  else {
    FUN_00d50b00();
    lVar7 = unaff_RDI[0x17];
    if (lVar7 == lVar3) {
      FUN_00d50b20();
    }
    else {
LAB_00481be0:
      unaff_RDI[0x17] = lVar3;
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
  }
  lVar3 = DAT_02708688;
  if (DAT_02708688 != 0) {
    FUN_00d50b00();
  }
  FUN_00de4060();
  plVar1 = local_38;
  if ((DAT_026fdd40 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026cd0e8 = FUN_00d4fe50();
    DAT_026cd0d0 = "GNDictionary";
    _DAT_026cd0d8 = 0x28;
    _DAT_026cd0e0 = FUN_00022d20;
    _DAT_026cd0f0 = 0;
    uRam00000000026cd0f8 = 0;
    _DAT_026cd100 = 0;
    _DAT_026cd178 = 0;
    uRam00000000026cd180 = 0;
    _DAT_026cd188 = 0;
    DAT_026cd18a = 6;
    _DAT_026cd108 = 0;
    uRam00000000026cd110 = 0;
    _DAT_026cd118 = 0;
    uRam00000000026cd120 = 0;
    _DAT_026cd128 = 0;
    uRam00000000026cd130 = 0;
    _DAT_026cd138 = 0;
    uRam00000000026cd140 = 0;
    _DAT_026cd148 = 0;
    uRam00000000026cd150 = 0;
    _DAT_026cd158 = 0;
    uRam00000000026cd160 = 0;
    _DAT_026cd168 = 0;
    uRam00000000026cd170 = 0;
    DAT_026cd193 = 0;
    _DAT_026cd18b = 0;
    ___cxa_guard_release();
  }
  pplVar8 = (longlong **)&DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') {
      if ((DAT_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
      }
      cVar4 = FUN_00e8db60();
      pplVar8 = &local_38;
      if (cVar4 == '\0') {
        pplVar8 = (longlong **)&DAT_02802688;
      }
    }
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  (**(code **)(*unaff_RDI + 0x5f0))();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_02726c20;
  if (DAT_02726c20 != 0) {
    FUN_00d50b00();
  }
  lVar7 = DAT_027025e8;
  if (DAT_027025e8 != 0) {
    FUN_00d50b00();
  }
  local_228 = lVar7;
  local_220 = '\x01';
  FUN_00d46300();
  local_48 = local_c8;
  local_40 = 0;
  if (local_c0 == '\0') {
    if (local_c8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_c0 = '\0';
  }
  local_40 = '\x01';
  FUN_00d14780(&local_48,&local_228);
  plVar1 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != (longlong *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
       (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_220 != '\0') && (local_228 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  local_218 = plVar1;
  local_210 = '\0';
  (**(code **)(*unaff_RDI + 0x5e0))();
  if ((local_210 != '\0') && (local_218 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_208 = DAT_02708690;
  if (DAT_02708690 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026f6e70;
  local_200 = '\x01';
  if (DAT_026f6e70 != 0) {
    FUN_00d50b00();
  }
  local_1f8 = lVar3;
  local_1f0 = '\x01';
  local_1e8 = 0;
  local_1e0 = '\0';
  FUN_000bf690(&local_1f8,&local_208,&local_1e8);
  plVar2 = (longlong *)unaff_RDI[0x2c];
  plVar6 = plVar2;
  if (plVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        goto LAB_00481f27;
      }
      FUN_00d50b00();
      plVar2 = (longlong *)unaff_RDI[0x2c];
      unaff_RDI[0x2c] = (longlong)local_38;
      plVar6 = local_38;
    }
    else {
      local_30 = '\0';
      plVar6 = local_38;
LAB_00481f27:
      unaff_RDI[0x2c] = (longlong)plVar6;
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar6 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1e0 != '\0') && (local_1e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f0 != '\0') && (local_1f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_200 != '\0') && (local_208 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_1d8 = DAT_026d88e0;
  if (DAT_026d88e0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026f6cf0;
  local_1d0 = '\x01';
  if (DAT_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_1c8 = lVar3;
  local_1c0 = '\x01';
  local_1b8 = 0;
  local_1b0 = '\0';
  FUN_000bf690(&local_1c8,&local_1d8,&local_1b8);
  plVar2 = (longlong *)unaff_RDI[0x2d];
  plVar6 = plVar2;
  if (plVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        goto LAB_004820ce;
      }
      FUN_00d50b00();
      plVar2 = (longlong *)unaff_RDI[0x2d];
      unaff_RDI[0x2d] = (longlong)local_38;
      plVar6 = local_38;
    }
    else {
      local_30 = '\0';
      plVar6 = local_38;
LAB_004820ce:
      unaff_RDI[0x2d] = (longlong)plVar6;
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar6 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d0 != '\0') && (local_1d8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_1a8 = DAT_02708698;
  if (DAT_02708698 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026fce70;
  local_1a0 = '\x01';
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_198 = lVar3;
  local_190 = '\x01';
  local_188 = 0;
  local_180 = '\0';
  FUN_000bf690(&local_198,&local_1a8,&local_188);
  plVar2 = (longlong *)unaff_RDI[0x31];
  plVar6 = plVar2;
  if (plVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        goto LAB_00482243;
      }
      FUN_00d50b00();
      plVar2 = (longlong *)unaff_RDI[0x31];
      unaff_RDI[0x31] = (longlong)local_38;
      plVar6 = local_38;
    }
    else {
      local_30 = '\0';
      plVar6 = local_38;
LAB_00482243:
      unaff_RDI[0x31] = (longlong)plVar6;
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar6 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  if ((local_190 != '\0') && (local_198 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_178 = DAT_027086a0;
  if (DAT_027086a0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026f6d80;
  local_170 = '\x01';
  if (DAT_026f6d80 != 0) {
    FUN_00d50b00();
  }
  local_168 = lVar3;
  local_160 = '\x01';
  local_158 = 0;
  local_150 = '\0';
  uVar9 = FUN_000bf690(&local_168,&local_178,&local_158);
  plVar2 = (longlong *)unaff_RDI[0x2e];
  plVar6 = plVar2;
  if (plVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        goto LAB_004823ac;
      }
      uVar9 = FUN_00d50b00();
      plVar2 = (longlong *)unaff_RDI[0x2e];
      unaff_RDI[0x2e] = (longlong)local_38;
      plVar6 = local_38;
    }
    else {
      local_30 = '\0';
      plVar6 = local_38;
LAB_004823ac:
      unaff_RDI[0x2e] = (longlong)plVar6;
    }
    if (plVar2 != (longlong *)0x0) {
      uVar9 = FUN_00d50b20();
      plVar6 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar6 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    uVar9 = FUN_00d50b20();
  }
  lVar3 = DAT_027086a8;
  if (DAT_027086a8 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_148 = lVar3;
  local_140 = '\x01';
  local_138 = 0;
  local_130 = '\0';
  FUN_000bf780(uVar9,&local_138);
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_128 = DAT_027086b0;
  if (DAT_027086b0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027086b8;
  local_120 = '\x01';
  if (DAT_027086b8 != 0) {
    FUN_00d50b00();
  }
  local_118 = lVar3;
  local_110 = '\x01';
  local_108 = 0;
  local_100 = '\0';
  FUN_000bf690(&local_118,&local_128,&local_108);
  plVar2 = (longlong *)unaff_RDI[0x2f];
  plVar6 = plVar2;
  if (plVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        goto LAB_00482594;
      }
      FUN_00d50b00();
      plVar2 = (longlong *)unaff_RDI[0x2f];
      unaff_RDI[0x2f] = (longlong)local_38;
      plVar6 = local_38;
    }
    else {
      local_30 = '\0';
      plVar6 = local_38;
LAB_00482594:
      unaff_RDI[0x2f] = (longlong)plVar6;
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar6 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_f8 = DAT_027086c0;
  if (DAT_027086c0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_02702dc0;
  local_f0 = '\x01';
  if (DAT_02702dc0 != 0) {
    FUN_00d50b00();
  }
  local_e8 = lVar3;
  local_e0 = '\x01';
  local_d8 = 0;
  local_d0 = '\0';
  FUN_000bf690(&local_e8,&local_f8,&local_d8);
  plVar2 = (longlong *)unaff_RDI[0x32];
  plVar6 = plVar2;
  if (plVar2 == local_38) goto LAB_00482742;
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
      goto LAB_004826f7;
    }
    FUN_00d50b00();
    plVar2 = (longlong *)unaff_RDI[0x32];
    unaff_RDI[0x32] = (longlong)local_38;
    plVar6 = local_38;
  }
  else {
    local_30 = '\0';
    plVar6 = local_38;
LAB_004826f7:
    unaff_RDI[0x32] = (longlong)plVar6;
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar6 = local_38;
  }
LAB_00482742:
  if ((local_30 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


