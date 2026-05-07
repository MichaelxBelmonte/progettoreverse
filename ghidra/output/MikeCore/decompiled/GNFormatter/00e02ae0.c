// Function: FUN_00e02ae0
// Address: 00e02ae0
// Size: 2803 bytes
// Class: GNFormatter
// String references:
//   "GNFormatter"
//   "{%@}"
//   "GNString"
//   "GNDictionary"


/* WARNING: Removing unreachable block (ram,0x00e02b20) */
/* WARNING: Removing unreachable block (ram,0x00e02b2c) */
/* WARNING: Removing unreachable block (ram,0x00e02d63) */
/* WARNING: Removing unreachable block (ram,0x00e02d6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e02ae0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong **pplVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_68;
  char local_60;
  longlong *local_58;
  uint local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  FUN_00e3ed30();
  lVar7 = *unaff_RSI;
  (**(code **)(*unaff_RDI + 0x370))();
  FUN_00d8c7a0();
  FUN_00e129a0();
  local_38 = lVar7;
  (**(code **)(*unaff_RDI + 0x370))();
  FUN_00d8c7a0();
  (**(code **)(*unaff_RDI + 0x378))();
  FUN_00d8c7a0();
  uVar6 = FUN_00e7b4e0();
  uVar9 = FUN_00d8e3d0(extraout_XMM0_Da,uVar6);
  plVar3 = local_58;
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar1 == local_58) {
    if (((char)unaff_RSI[1] == '\0') && (local_58 != (longlong *)0x0)) {
      if ((char)local_50 != '\0') goto LAB_00e02c1a;
      uVar9 = FUN_00d50b00();
      goto LAB_00e02c51;
    }
LAB_00e02c55:
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  else {
    lVar7 = unaff_RSI[1];
    if ((char)local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      *unaff_RSI = (longlong)plVar3;
      if (((char)lVar7 != '\0') && (plVar1 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
LAB_00e02c51:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      goto LAB_00e02c55;
    }
    *unaff_RSI = (longlong)local_58;
    if (((char)lVar7 != '\0') && (plVar1 != (longlong *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
LAB_00e02c1a:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    local_50 = local_50 & 0xffffff00;
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar7 = *unaff_RSI;
  local_50 = 1;
  local_58 = &DAT_024c5048;
  if (lVar7 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_40 = '\x01';
  local_48 = lVar7;
  uVar9 = FUN_00d8cb40(uVar9,&local_58);
  if (local_60 == '\0') {
    if (local_68 != 0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_58 = &DAT_024c5048;
  if ((local_40 != '\0') && (local_48 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  local_38 = local_68;
  FUN_00d8cbf0(uVar9,6);
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  uVar9 = FUN_00de3e90();
  plVar1 = local_58;
  lVar7 = local_68;
  if ((DAT_026fdd40 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Da_02, iVar5 != 0)) {
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
    uVar9 = ___cxa_guard_release();
    lVar7 = local_38;
  }
  pplVar8 = (longlong **)&DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar9 = extraout_XMM0_Da_00;
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
        lVar7 = local_38;
      }
      cVar4 = FUN_00e8db60();
      pplVar8 = &local_58;
      uVar9 = extraout_XMM0_Da_01;
      if (cVar4 == '\0') {
        pplVar8 = (longlong **)&DAT_02802688;
      }
    }
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if (local_68 != 0) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar2 = DAT_02704000;
  if (plVar1 == (longlong *)0x0) goto LAB_00e03165;
  if (DAT_02704000 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_d0 = lVar2;
  local_c8 = '\x01';
  pplVar8 = &local_58;
  FUN_000175c0(uVar9,&local_d0);
  plVar1 = local_58;
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
  if (plVar1 == (longlong *)0x0) {
LAB_00e02ee7:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00e02ee7;
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
  uVar9 = FUN_00e12860();
  if (plVar1 != (longlong *)0x0) {
    uVar9 = FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar7 = DAT_02784c30;
  if (DAT_02784c30 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_c0 = lVar7;
  local_b8 = '\x01';
  FUN_000175c0(uVar9,&local_c0);
  plVar1 = local_58;
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
      pplVar8 = &local_58;
      if (cVar4 == '\0') {
        pplVar8 = (longlong **)&DAT_02802688;
      }
    }
  }
  lVar7 = local_38;
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
    lVar7 = local_38;
  }
  if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    local_a8 = '\0';
    pplVar8 = &local_58;
    local_b0 = plVar1;
    FUN_00d1fcc0();
    plVar1 = local_58;
    if ((DAT_026d03d0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_02702048 = FUN_00d4fe50();
      DAT_02702030 = "GNFormatter";
      _DAT_02702038 = 0x10;
      _DAT_02702040 = FUN_00037b20;
      _DAT_02702050 = 0;
      uRam0000000002702058 = 0;
      _DAT_02702060 = 0;
      uRam0000000002702068 = 0;
      _DAT_02702070 = 0;
      uRam0000000002702078 = 0;
      _DAT_02702080 = 0;
      uRam0000000002702088 = 0;
      _DAT_02702090 = 0;
      uRam0000000002702098 = 0;
      _DAT_027020a0 = 0;
      uRam00000000027020a8 = 0;
      _DAT_027020b0 = 0;
      uRam00000000027020b8 = 0;
      _DAT_027020c0 = 0;
      uRam00000000027020c8 = 0;
      _DAT_027020d0 = 0;
      uRam00000000027020d8 = 0;
      _DAT_027020e0 = 0;
      uRam00000000027020e8 = 0;
      _DAT_027020f0 = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (longlong *)0x0) {
LAB_00e030c1:
      pplVar8 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_00e030c1;
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
    (**(code **)(*unaff_RDI + 0x390))();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    lVar7 = local_38;
  }
  FUN_00d50b20();
LAB_00e03165:
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  return;
}


