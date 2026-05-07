// Function: FUN_01d1eef0
// Address: 01d1eef0
// Size: 1496 bytes
// Class: GNString
// String references:
//   "%@"
//   "GNString"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d1eef0(void)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  longlong **pplVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  uint local_48;
  longlong local_40;
  char local_38;
  
  local_90 = (longlong *)0x0;
  local_88 = '\x01';
  if (*(char *)((longlong)unaff_RDI + 0x51) == '\0') {
    *(undefined1 *)(unaff_RDI + 6) = 1;
    (**(code **)(*unaff_RDI + 0x520))();
    plVar3 = (longlong *)0x0;
    goto LAB_01d1f31c;
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  if (local_90 == plVar3) {
    plVar3 = local_90;
    if (local_88 == '\0') goto LAB_01d1ef87;
    FUN_00d50b20();
  }
  else {
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      local_90 = plVar3;
      FUN_00d50b20();
      plVar3 = local_90;
    }
LAB_01d1ef87:
    local_90 = plVar3;
    local_88 = '\x01';
  }
  FUN_01ccad60();
  plVar3 = local_50;
  if (local_50 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
joined_r0x01d1efbd:
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if ((char)local_48 == '\0') {
    FUN_00d50b00();
    goto joined_r0x01d1efbd;
  }
  FUN_01e10550();
  local_80 = local_50;
  local_78 = 0;
  local_c8 = DAT_027e7c20;
  if ((char)local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
      local_c8 = DAT_027e7c20;
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_78 = '\x01';
  DAT_027e7c20 = local_c8;
  if (local_c8 != 0) {
    local_78 = '\x01';
    FUN_00d50b00();
  }
  local_c0 = '\x01';
  cVar1 = (**(code **)(*unaff_RDI + 0x4d8))(&local_90,&local_c8);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    uVar7 = FUN_01e10550();
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (local_d8 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_40 = local_d8;
    local_38 = '\x01';
    uVar7 = FUN_00d8cb40(uVar7,&local_50);
    lVar4 = local_60;
    if (local_60 == 0) {
      lVar4 = 0;
    }
    else if (local_58 == '\0') {
      uVar7 = FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != 0)) {
        uVar7 = FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    local_98 = lVar4;
    FUN_00d8cbf0(uVar7,6);
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
    uVar7 = FUN_00de3e90();
    plVar6 = local_50;
    if ((DAT_026fdd40 == '\0') &&
       (iVar2 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_01, iVar2 != 0)) {
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
      uVar7 = ___cxa_guard_release();
    }
    pplVar5 = (longlong **)&DAT_02802688;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x360))();
      cVar1 = FUN_00e85ea0();
      uVar7 = extraout_XMM0_Da;
      if (cVar1 != '\0') {
        if ((DAT_026fd0c0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
        cVar1 = FUN_00e8db60();
        pplVar5 = &local_50;
        uVar7 = extraout_XMM0_Da_00;
        if (cVar1 == '\0') {
          pplVar5 = (longlong **)&DAT_02802688;
        }
      }
    }
    plVar6 = *pplVar5;
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else if (*(char *)(pplVar5 + 1) == '\0') {
      uVar7 = FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar5 + 1) = 0;
    }
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    lVar4 = DAT_027e7c20;
    local_b0 = '\0';
    local_b8 = plVar6;
    if (DAT_027e7c20 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_a8 = lVar4;
    local_a0 = '\x01';
    (**(code **)(*unaff_RDI + 0x4d0))(uVar7,&local_a8);
    lVar4 = local_98;
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_01d1f31c:
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


