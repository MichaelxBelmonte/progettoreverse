// Function: FUN_01dbac60
// Address: 01dbac60
// Size: 1087 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"


/* WARNING: Removing unreachable block (ram,0x01dbad45) */
/* WARNING: Removing unreachable block (ram,0x01dbad4e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbac60(void)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *unaff_RSI;
  longlong lVar8;
  bool bVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar10;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_48;
  char local_40;
  
  plVar6 = (longlong *)*unaff_RSI;
  if (plVar6 == (longlong *)0x0) {
    return;
  }
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
  (**(code **)(*plVar6 + 0x360))();
  cVar4 = FUN_00e85ea0();
  plVar6 = unaff_RSI;
  if (cVar4 == '\0') {
    plVar6 = &DAT_02802688;
  }
  if (*plVar6 == 0) {
    return;
  }
  lVar1 = *unaff_RSI;
  lVar3 = unaff_RSI[1];
  uVar10 = extraout_XMM0_Da;
  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
    uVar10 = FUN_00d50b00();
  }
  lVar8 = DAT_027f2350;
  if (DAT_027f2350 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_80 = lVar8;
  local_78 = '\x01';
  uVar10 = FUN_000175c0(uVar10,&local_80);
  lVar8 = local_48;
  if (local_48 == 0) {
    bVar9 = true;
    lVar8 = 0;
    bVar2 = false;
  }
  else if (local_40 == '\0') {
    uVar10 = FUN_00d50b00();
    bVar9 = false;
    bVar2 = true;
  }
  else {
    local_40 = '\0';
    bVar2 = true;
    bVar9 = false;
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  if (!bVar9) {
    FUN_00d459e0();
    uVar10 = FUN_01db96b0();
  }
  lVar7 = DAT_027f2358;
  if (DAT_027f2358 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_70 = lVar7;
  local_68 = '\x01';
  uVar10 = FUN_000175c0(uVar10,&local_70);
  if (local_48 == lVar8) {
    if ((bool)(bVar9 & local_48 != 0)) {
      if (local_40 != '\0') goto LAB_01dbadf3;
      bVar2 = true;
      uVar10 = FUN_00d50b00();
    }
LAB_01dbae47:
    if ((local_40 != '\0') && (local_48 != 0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != 0) {
        uVar10 = FUN_00d50b00();
      }
      bVar9 = (bool)(bVar2 & lVar8 != 0);
      bVar2 = true;
      lVar8 = local_48;
      if (bVar9) {
        uVar10 = FUN_00d50b20();
      }
      goto LAB_01dbae47;
    }
    bVar9 = lVar8 != 0;
    lVar8 = local_48;
    if ((bool)(bVar2 & bVar9)) {
      uVar10 = FUN_00d50b20();
    }
LAB_01dbadf3:
    local_40 = '\0';
    bVar2 = true;
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d45870();
    uVar10 = FUN_01db9d50();
  }
  lVar7 = DAT_027f2360;
  if (DAT_027f2360 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_60 = lVar7;
  local_58 = '\x01';
  FUN_000175c0(uVar10,&local_60);
  if (local_48 == lVar8) {
    lVar7 = lVar8;
    bVar9 = bVar2;
    if ((!bVar2) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_01dbaef7;
      FUN_00d50b00();
      bVar9 = true;
    }
  }
  else {
    lVar7 = local_48;
    if (local_40 != '\0') {
      if ((bVar2) && (lVar8 != 0)) {
        FUN_00d50b20();
      }
LAB_01dbaef7:
      bVar9 = true;
      goto LAB_01dbaf77;
    }
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    bVar9 = true;
    if ((bVar2) && (lVar8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_01dbaf77:
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d45ad0();
    FUN_01db9b10();
    if (bVar9) {
      FUN_00d50b20();
    }
  }
  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  return;
}


