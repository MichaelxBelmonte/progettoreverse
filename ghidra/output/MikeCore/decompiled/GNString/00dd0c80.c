// Function: FUN_00dd0c80
// Address: 00dd0c80
// Size: 917 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00dd0f12) */

longlong * FUN_00dd0c80(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar8;
  undefined8 uVar9;
  double dVar10;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_70;
  char local_68;
  longlong local_48;
  char local_40;
  
  if ((DAT_028a8690 == (longlong *)0x0) || (DAT_028a8699 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a8690 == (longlong *)0x0) {
      plVar6 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar6 + 0x18))();
      if (DAT_028a8690 == plVar6) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar8 = DAT_028a8690 != (longlong *)0x0;
        DAT_028a8690 = plVar6;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a8698 == '\0') {
        DAT_028a8698 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      DAT_028a8699 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a8699 = '\x01';
      FUN_00e8cb70();
    }
  }
  uVar9 = FUN_00d99300();
  lVar5 = local_48;
  lVar1 = *unaff_RSI;
  if (lVar1 == local_48) {
    if (((char)unaff_RSI[1] != '\0') || (local_48 == 0)) goto LAB_00dd0de3;
    if (local_40 == '\0') {
      uVar9 = FUN_00d50b00();
      goto LAB_00dd0dde;
    }
LAB_00dd0daa:
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
  else {
    lVar4 = unaff_RSI[1];
    if (local_40 != '\0') {
      *unaff_RSI = local_48;
      if (((char)lVar4 != '\0') && (lVar1 != 0)) {
        uVar9 = FUN_00d50b20();
      }
      goto LAB_00dd0daa;
    }
    if (local_48 != 0) {
      uVar9 = FUN_00d50b00();
    }
    *unaff_RSI = lVar5;
    if (((char)lVar4 != '\0') && (lVar1 != 0)) {
      uVar9 = FUN_00d50b20();
    }
LAB_00dd0dde:
    *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_00dd0de3:
    if ((local_40 != '\0') && (local_48 != 0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  local_a0 = *unaff_RSI;
  local_98 = '\0';
  FUN_000175c0(uVar9,&local_a0);
  lVar1 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 == 0) {
    bVar2 = true;
  }
  else {
    dVar10 = (double)FUN_00c93980();
    if (0.0 <= dVar10) {
      *unaff_RDI = lVar1;
      goto LAB_00dd0fff;
    }
    local_48 = *unaff_RSI;
    local_40 = '\0';
    FUN_00ca13a0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    bVar2 = false;
  }
  plVar6 = (longlong *)0x0;
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00cfab40();
  (**(code **)(*plVar7 + 0x18))();
  if (plVar7 == (longlong *)0x0) {
    if (lVar1 == 0) {
      FUN_00d50b20();
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = true;
    plVar6 = plVar7;
  }
  local_90 = *unaff_RSI;
  local_88 = '\0';
  uVar9 = FUN_00dd1ab0();
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    local_68 = '\0';
    local_48 = *unaff_RSI;
    local_40 = '\0';
    local_70 = plVar6;
    FUN_00ca0840(uVar9,&local_48);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (!bVar2) {
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  *unaff_RDI = (longlong)plVar6;
LAB_00dd0fff:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


