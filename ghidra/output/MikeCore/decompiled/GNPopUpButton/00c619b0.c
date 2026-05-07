// Function: FUN_00c619b0
// Address: 00c619b0
// Size: 1110 bytes
// Class: GNPopUpButton
// String references:
//   "GNPopUpButton"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c619b0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong **pplVar8;
  longlong unaff_RDI;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  pplVar8 = &local_40;
  uVar10 = FUN_01ccad60();
  plVar1 = local_40;
  if ((DAT_027f94e0 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_01, iVar5 != 0)) {
    _DAT_026efe08 = FUN_000f5df0();
    _DAT_026efdf0 = "GNPopUpButton";
    _DAT_026efdf8 = 0x240;
    _DAT_026efe00 = FUN_001e3bf0;
    _DAT_026efe10 = 0;
    uRam00000000026efe18 = 0;
    _DAT_026efe20 = 0;
    uRam00000000026efe28 = 0;
    _DAT_026efe30 = 0;
    uRam00000000026efe38 = 0;
    _DAT_026efe40 = 0;
    uRam00000000026efe48 = 0;
    _DAT_026efe50 = 0;
    uRam00000000026efe58 = 0;
    _DAT_026efe60 = 0;
    uRam00000000026efe68 = 0;
    _DAT_026efe70 = 0;
    uRam00000000026efe78 = 0;
    _DAT_026efe80 = 0;
    uRam00000000026efe88 = 0;
    _DAT_026efe90 = 0;
    uRam00000000026efe98 = 0;
    _DAT_026efea0 = 0;
    uRam00000000026efea8 = 0;
    _DAT_026efeb0 = 0;
    uVar10 = ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_00c61a0c:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar10 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_00c61a0c;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar10 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  lVar2 = DAT_027e7c20;
  if (DAT_027e7c20 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_a8 = lVar2;
  local_a0 = '\x01';
  uVar10 = FUN_01ccaae0(uVar10,&local_a8);
  plVar9 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  lVar2 = DAT_027e7c20;
  local_68 = plVar9;
  if (DAT_027e7c20 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_98 = lVar2;
  local_90 = '\x01';
  FUN_01ccab60(uVar10,&local_98);
  local_48 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d836c0();
  local_58 = local_78;
  local_50 = 0;
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_50 = '\x01';
  local_88 = local_48;
  local_80 = '\0';
  pplVar8 = &local_40;
  FUN_01d26fb0(&local_88,&local_58);
  plVar3 = local_40;
  FUN_00053ac0();
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_00c61c08;
  }
  pplVar8 = (longlong **)&DAT_02802688;
LAB_00c61c08:
  local_60 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != (longlong *)0x0) {
    iVar5 = FUN_00d45870();
    for (iVar7 = 0; iVar6 = FUN_01d6fde0(), iVar7 < iVar6; iVar7 = iVar7 + 1) {
      FUN_01d701d0(extraout_XMM0_Da_00,iVar7);
      iVar6 = FUN_01d654a0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar9 = local_68;
      if (iVar6 == iVar5) {
        (**(code **)(*plVar1 + 0x918))();
        if (*(longlong *)(unaff_RDI + 0x78) != 0) {
          FUN_01dfe5c0();
        }
        break;
      }
    }
    FUN_00d50b20();
  }
  (**(code **)(*plVar1 + 0x998))();
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


