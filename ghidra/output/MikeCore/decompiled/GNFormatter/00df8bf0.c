// Function: FUN_00df8bf0
// Address: 00df8bf0
// Size: 3755 bytes
// Class: GNFormatter
// String references:
//   "GNFormatter"
//   "{%@}"
//   "GNString"
//   "GNDictionary"


/* WARNING: Removing unreachable block (ram,0x00df8c30) */
/* WARNING: Removing unreachable block (ram,0x00df8c3c) */
/* WARNING: Removing unreachable block (ram,0x00df8ee4) */
/* WARNING: Removing unreachable block (ram,0x00df8eed) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00df8bf0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_60;
  char local_58;
  longlong *local_50;
  uint local_48;
  longlong local_40;
  char local_38;
  
  FUN_00e13120();
  (**(code **)(*unaff_RDI + 0x370))();
  local_c8 = local_50;
  local_c0 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_c0 = '\x01';
  FUN_00d90650();
  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x3a0))();
  local_b8 = local_50;
  local_b0 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_b0 = '\x01';
  FUN_00d90650();
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar7 = FUN_00e7b4e0();
  uVar9 = FUN_00d8e3d0(extraout_XMM0_Da,uVar7);
  plVar2 = local_50;
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar1 == local_50) {
    if (((char)unaff_RSI[1] == '\0') && (local_50 != (longlong *)0x0)) {
      if ((char)local_48 != '\0') goto LAB_00df8de4;
      uVar9 = FUN_00d50b00();
      goto LAB_00df8e17;
    }
LAB_00df8e1c:
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  else {
    lVar4 = unaff_RSI[1];
    if ((char)local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      *unaff_RSI = (longlong)plVar2;
      if (((char)lVar4 != '\0') && (plVar1 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
LAB_00df8e17:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      goto LAB_00df8e1c;
    }
    *unaff_RSI = (longlong)local_50;
    if (((char)lVar4 != '\0') && (plVar1 != (longlong *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
LAB_00df8de4:
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
  lVar4 = *unaff_RSI;
  local_48 = 1;
  local_50 = &DAT_024c5048;
  if (lVar4 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = lVar4;
  uVar9 = FUN_00d8cb40(uVar9,&local_50);
  if (local_58 == '\0') {
    if (local_60 != 0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_50 = &DAT_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  local_d0 = local_60;
  FUN_00d8cbf0(uVar9,6);
  local_a0 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_a0 = '\x01';
  local_a8 = local_60;
  uVar9 = FUN_00de3e90();
  plVar1 = local_50;
  if ((DAT_026fdd40 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Da_04, iVar6 != 0)) {
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
  }
  pplVar8 = &DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    uVar9 = extraout_XMM0_Da_00;
    if (cVar5 != '\0') {
      if ((DAT_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
      cVar5 = FUN_00e8db60();
      pplVar8 = &local_50;
      uVar9 = extraout_XMM0_Da_01;
      if (cVar5 == '\0') {
        pplVar8 = &DAT_02802688;
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
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar4 = DAT_02704000;
  if (DAT_02704000 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_110 = lVar4;
  local_108 = '\x01';
  pplVar8 = &local_50;
  FUN_000175c0(uVar9,&local_110);
  plVar2 = local_50;
  if ((DAT_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
  if (plVar2 == (longlong *)0x0) {
LAB_00df905d:
    pplVar8 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_00df905d;
  }
  local_90 = 0;
  plVar2 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  local_90 = '\x01';
  local_98 = plVar2;
  uVar9 = FUN_00e12860();
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar4 = DAT_02784938;
  if (DAT_02784938 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_100 = lVar4;
  local_f8 = '\x01';
  pplVar8 = &local_50;
  uVar9 = FUN_000175c0(uVar9,&local_100);
  plVar2 = local_50;
  if ((DAT_026fd0c0 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Da_05, iVar6 != 0)) {
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
    uVar9 = ___cxa_guard_release();
  }
  if (plVar2 == (longlong *)0x0) {
LAB_00df9171:
    pplVar8 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    uVar9 = extraout_XMM0_Da_02;
    if (cVar5 == '\0') goto LAB_00df9171;
  }
  plVar2 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      uVar9 = FUN_00d50b00();
      goto LAB_00df9196;
    }
    if (unaff_RDI[8] != 0) {
      unaff_RDI[8] = 0;
      goto LAB_00df91cf;
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
LAB_00df9196:
    plVar3 = (longlong *)unaff_RDI[8];
    if (plVar3 != plVar2) {
      if (plVar2 != (longlong *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      unaff_RDI[8] = (longlong)plVar2;
      if (plVar3 != (longlong *)0x0) {
LAB_00df91cf:
        uVar9 = FUN_00d50b20();
      }
    }
    if (plVar2 != (longlong *)0x0) {
      uVar9 = FUN_00d50b20();
    }
  }
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar4 = DAT_02784c30;
  if (DAT_02784c30 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_f0 = lVar4;
  local_e8 = '\x01';
  FUN_000175c0(uVar9,&local_f0);
  plVar2 = local_50;
  if ((DAT_026fdd40 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
  pplVar8 = &DAT_02802688;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 != '\0') {
      if ((DAT_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
      cVar5 = FUN_00e8db60();
      pplVar8 = &local_50;
      if (cVar5 == '\0') {
        pplVar8 = &DAT_02802688;
      }
    }
  }
  plVar2 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (longlong *)0x0) goto LAB_00df940e;
  local_d8 = '\0';
  pplVar8 = &local_50;
  local_e0 = plVar2;
  FUN_00d1fcc0();
  plVar2 = local_50;
  if ((DAT_026d03d0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
  if (plVar2 == (longlong *)0x0) {
    pplVar8 = &DAT_02802688;
    local_88 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_00df9376;
LAB_00df939e:
    local_80 = 0;
    if (local_88 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') {
      pplVar8 = &DAT_02802688;
    }
    local_88 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') goto LAB_00df939e;
LAB_00df9376:
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  local_80 = '\x01';
  (**(code **)(*unaff_RDI + 0x390))();
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00df940e:
  (**(code **)(*unaff_RDI + 0x380))();
  (**(code **)(*unaff_RDI + 0x378))();
  local_70 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_70 = '\x01';
  local_78 = local_60;
  FUN_00d90650();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x380))();
  uVar7 = FUN_00e7b4e0();
  FUN_00d8e3d0(extraout_XMM0_Da_03,uVar7);
  plVar2 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)unaff_RDI[7];
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    unaff_RDI[7] = (longlong)plVar2;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_d0 != 0) {
    FUN_00d50b20();
  }
  return;
}


