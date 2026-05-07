// Function: FUN_01de0270
// Address: 01de0270
// Size: 975 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01de02c3) */
/* WARNING: Removing unreachable block (ram,0x01de02cf) */
/* WARNING: Removing unreachable block (ram,0x01de058d) */
/* WARNING: Removing unreachable block (ram,0x01de059a) */

ulonglong FUN_01de0270(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_d0;
  char local_c8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01d384c0();
  uVar9 = FUN_01e437f0();
  uVar9 = (**(code **)(*unaff_RDI + 0x9d8))(uVar9);
  if ((char)unaff_RDI[0x46] != '\0') {
    uVar10 = FUN_01d384d0();
    local_b0 = DAT_027f29d0;
    if (DAT_027f29d0 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_a8 = '\x01';
    FUN_01cacbe0(uVar10,&local_b0);
    lVar4 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027f2a38;
    if (lVar4 != 0) {
      if (DAT_027f2a38 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar2;
      local_38 = '\0';
      cVar5 = FUN_00c9ff50();
      uVar10 = extraout_XMM0_Da;
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar10 = FUN_00d50b20();
      }
      lVar3 = DAT_027f2a38;
      if (cVar5 == '\0') {
        uVar8 = 0;
      }
      else {
        if (DAT_027f2a38 != 0) {
          uVar10 = FUN_00d50b00();
        }
        local_a0 = lVar3;
        local_98 = '\x01';
        FUN_000175c0(uVar10,&local_a0);
        plVar7 = (longlong *)FUN_00dd6dc0();
        uVar8 = CONCAT71((int7)((ulonglong)lVar3 >> 8),plVar7 == unaff_RDI);
        uVar10 = extraout_XMM0_Da_00;
        if ((local_38 != '\0') && (local_40 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          uVar10 = FUN_00d50b20();
        }
      }
      if (lVar2 != 0) {
        uVar10 = FUN_00d50b20();
      }
      if ((char)uVar8 == '\0') {
        bVar1 = false;
      }
      else {
        local_90 = *unaff_RSI;
        local_88 = '\0';
        local_80 = lVar4;
        local_78 = '\0';
        uVar6 = (**(code **)(*unaff_RDI + 0x9d0))(uVar10,&local_80);
        uVar8 = (ulonglong)uVar6;
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        bVar1 = true;
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      if (bVar1) goto LAB_01de0628;
    }
  }
  if ((char)unaff_RDI[0x44] == '\0') {
    uVar6 = FUN_01d83480();
    uVar8 = (ulonglong)uVar6;
  }
  else {
    plVar7 = (longlong *)unaff_RDI[0x3e];
    if (plVar7 == (longlong *)0x0) {
      if (*(char *)((longlong)unaff_RDI + 0x221) == '\0') {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        FUN_01dd3ae0();
      }
    }
    else {
      FUN_00d50b00();
      FUN_01d384d0();
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      uVar6 = (**(code **)(*plVar7 + 0x28))(uVar9,&local_50);
      uVar8 = (ulonglong)uVar6;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
LAB_01de0628:
  return uVar8 & 0xffffff01;
}


