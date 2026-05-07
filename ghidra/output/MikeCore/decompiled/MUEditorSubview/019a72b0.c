// Function: FUN_019a72b0
// Address: 019a72b0
// Size: 543 bytes
// Class: MUEditorSubview


undefined8 * FUN_019a72b0(undefined4 param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar8;
  longlong **pplVar9;
  longlong *local_78;
  char local_70;
  longlong *local_40;
  
  lVar6 = *(longlong *)(unaff_RSI + 0x38);
  if (*(int *)(lVar6 + 0xc) < 1) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  uVar7 = (ulonglong)(*(int *)(lVar6 + 0xc) - 1);
  local_40 = (longlong *)0x0;
  bVar2 = false;
  do {
    plVar1 = *(longlong **)(*(longlong *)(lVar6 + 0x10) + uVar7 * 8);
    local_70 = '\0';
    local_78 = plVar1;
    FUN_0082d880();
    pplVar9 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar5 = FUN_00e85ea0();
      pplVar9 = &local_78;
      if (cVar5 == '\0') {
        pplVar9 = (longlong **)&DAT_02802688;
      }
    }
    plVar8 = *pplVar9;
    if (plVar8 == local_40) {
      plVar3 = local_40;
      bVar4 = bVar2;
      if ((!bVar2) && (plVar8 != (longlong *)0x0)) {
        plVar8 = local_40;
        if (*(char *)(pplVar9 + 1) != '\0') goto LAB_019a738a;
        FUN_00d50b00();
        bVar4 = true;
      }
    }
    else if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar4 = true;
      plVar3 = plVar8;
      if ((bVar2) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((bVar2) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_019a738a:
      *(undefined1 *)(pplVar9 + 1) = 0;
      plVar3 = plVar8;
      bVar4 = true;
    }
    bVar2 = bVar4;
    local_40 = plVar3;
    if ((local_70 != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      FUN_01e437f0(param_1);
      cVar5 = (**(code **)(*local_40 + 0x920))();
      if (unaff_RSI != 0) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (!bVar2) {
          FUN_00d50b00();
        }
        *unaff_RDI = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        return unaff_RDI;
      }
    }
    if ((longlong)uVar7 < 1) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      if (!bVar2) {
        return unaff_RDI;
      }
      if (local_40 == (longlong *)0x0) {
        return unaff_RDI;
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
    uVar7 = uVar7 - 1;
    lVar6 = *(longlong *)(unaff_RSI + 0x38);
  } while( true );
}


