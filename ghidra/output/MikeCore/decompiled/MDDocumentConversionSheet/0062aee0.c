// Function: FUN_0062aee0
// Address: 0062aee0
// Size: 885 bytes
// Class: MDDocumentConversionSheet


void FUN_0062aee0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong unaff_RDI;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  
  if (*(longlong *)(unaff_RDI + 0x140) != 0) {
    return;
  }
  FUN_01f27fe0();
  (**(code **)(*local_40 + 0x778))();
  plVar1 = *(longlong **)(unaff_RDI + 0x140);
  plVar4 = plVar1;
  if (plVar1 == local_30) goto LAB_0062af80;
  plVar4 = local_30;
  if (local_28 == '\0') {
    if (local_30 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      goto LAB_0062af35;
    }
    FUN_00d50b00();
    plVar1 = *(longlong **)(unaff_RDI + 0x140);
    *(longlong **)(unaff_RDI + 0x140) = local_30;
  }
  else {
    local_28 = '\0';
LAB_0062af35:
    *(longlong **)(unaff_RDI + 0x140) = plVar4;
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar4 = local_30;
  }
LAB_0062af80:
  if ((local_28 != '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x140);
  lVar2 = *(longlong *)(unaff_RDI + 0x88);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x4c8))(DAT_023dccec,DAT_023dccf4);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_30 + 0x450))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_00465c80();
  }
  else {
    FUN_004b4d40();
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_40 + 0x450))();
    uVar5 = DAT_02394298;
    if (cVar3 == '\0') {
      uVar5 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_90 + 0x450))();
    uVar6 = DAT_02394298;
    if (cVar3 == '\0') {
      uVar6 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_80 + 0x450))();
    uVar7 = DAT_02394298;
    if (cVar3 == '\0') {
      uVar7 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_70 + 0x450))();
    uVar8 = DAT_02394298;
    if (cVar3 == '\0') {
      uVar8 = DAT_02390124;
    }
    auVar11 = insertps(ZEXT416(uVar7),ZEXT416(uVar8),0x10);
    auVar10 = insertps(ZEXT416(uVar5),uVar6,0x10);
    (**(code **)(*local_30 + 0x940))(auVar10._0_8_,auVar11._0_8_);
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (*(char *)(unaff_RDI + 0xa8) == '\0') {
    plVar1 = *(longlong **)(unaff_RDI + 0x88);
    uVar9 = FUN_01e53c20();
    if (local_28 == '\0') {
      if (local_30 != (longlong *)0x0) {
        uVar9 = FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    (**(code **)(*plVar1 + 0x9e8))(uVar9,0);
    if (local_30 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}


