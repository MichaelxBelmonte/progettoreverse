// Function: FUN_00dd28a0
// Address: 00dd28a0
// Size: 1816 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dd28a0(undefined4 param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  longlong *local_40;
  char local_38;
  
  lVar1 = DAT_02787890;
  if (*unaff_RSI == 0) {
    return;
  }
  if (DAT_02787890 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_d0 = lVar1;
  local_c8 = '\x01';
  pplVar7 = &local_40;
  FUN_000175c0(param_1,&local_d0);
  plVar6 = local_40;
  if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar6 == (longlong *)0x0) {
LAB_00dd2936:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_00dd2936;
  }
  plVar6 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02783f20;
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  if (DAT_02783f20 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar1;
  local_b8 = '\x01';
  cVar2 = (**(code **)(*plVar6 + 0x50))();
  uVar8 = extraout_XMM0_Da;
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar1 = DAT_02783f28;
  if (cVar2 == '\0') goto LAB_00dd2d8e;
  if (DAT_02783f28 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_b0 = lVar1;
  local_a8 = '\x01';
  FUN_000175c0(uVar8,&local_b0);
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) goto LAB_00dd2d8e;
  local_a0 = plVar6;
  local_98 = '\0';
  local_50 = plVar6;
  uVar3 = FUN_00c70bc0();
  *(undefined1 *)(unaff_RDI + 0x68) = uVar3;
  uVar8 = extraout_XMM0_Da_00;
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar1 = DAT_027855f0;
  if (DAT_027855f0 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_90 = lVar1;
  local_88 = '\x01';
  pplVar7 = &local_40;
  uVar8 = FUN_000175c0(uVar8,&local_90);
  plVar6 = local_40;
  if ((DAT_026fd0c0 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_02, iVar4 != 0)) {
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
    uVar8 = ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_00dd2b05:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da_01;
    if (cVar2 == '\0') goto LAB_00dd2b05;
  }
  plVar6 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar6 != (longlong *)0x0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    local_78 = '\0';
    local_80 = plVar6;
    FUN_00db9a70();
    plVar6 = *(longlong **)(unaff_RDI + 0x70);
    plVar5 = plVar6;
    if (plVar6 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          FUN_00d50b00();
          plVar6 = *(longlong **)(unaff_RDI + 0x70);
          plVar5 = local_40;
        }
      }
      else {
        local_38 = '\0';
        plVar5 = local_40;
      }
      *(longlong **)(unaff_RDI + 0x70) = plVar5;
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar5 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar8 = FUN_00d50b20();
  }
  lVar1 = DAT_027878a0;
  if (DAT_027878a0 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_70 = lVar1;
  local_68 = '\x01';
  pplVar7 = &local_40;
  FUN_000175c0(uVar8,&local_70);
  plVar6 = local_40;
  if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar6 == (longlong *)0x0) {
LAB_00dd2c96:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_00dd2c96;
  }
  plVar6 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    local_58 = '\0';
    local_60 = plVar6;
    FUN_00db9a70();
    plVar6 = *(longlong **)(unaff_RDI + 0x78);
    plVar5 = plVar6;
    if (plVar6 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          FUN_00d50b00();
          plVar6 = *(longlong **)(unaff_RDI + 0x78);
          plVar5 = local_40;
        }
      }
      else {
        local_38 = '\0';
        plVar5 = local_40;
      }
      *(longlong **)(unaff_RDI + 0x78) = plVar5;
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar5 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00dd2d8e:
  FUN_00d50b20();
  return;
}


