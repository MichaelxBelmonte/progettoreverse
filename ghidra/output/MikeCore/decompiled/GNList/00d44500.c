// Function: FUN_00d44500
// Address: 00d44500
// Size: 994 bytes
// Class: GNList


void FUN_00d44500(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  
  cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x380))();
  lVar2 = DAT_027c6f78;
  lVar6 = DAT_027652d0;
  plVar1 = (longlong *)*unaff_RSI;
  if (cVar3 != '\0') {
    if (DAT_027652d0 != 0) {
      FUN_00d50b00();
    }
    uVar4 = (**(code **)(*plVar1 + 0x518))();
    *(undefined1 *)(unaff_RDI + 0xc) = uVar4;
    if (lVar6 != 0) {
      FUN_00d50b20();
      uVar4 = *(undefined1 *)(unaff_RDI + 0xc);
    }
    lVar6 = DAT_027e7c20;
    switch(uVar4) {
    case 0x49:
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_027e7c20 != 0) {
        FUN_00d50b00();
      }
      uVar8 = (**(code **)(*plVar1 + 0x520))();
      *(undefined4 *)(unaff_RDI + 0x10) = uVar8;
      if (lVar6 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    default:
      return;
    case 0x62:
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_027e7c20 != 0) {
        FUN_00d50b00();
      }
      uVar4 = (**(code **)(*plVar1 + 0x510))();
      *(undefined1 *)(unaff_RDI + 0x10) = uVar4;
      if (lVar6 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    case 100:
      goto switchD_00d445a6_caseD_64;
    case 0x66:
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_027e7c20 != 0) {
        FUN_00d50b00();
      }
      uVar8 = (**(code **)(*plVar1 + 0x538))();
      *(undefined4 *)(unaff_RDI + 0x10) = uVar8;
      if (lVar6 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    case 0x69:
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_027e7c20 != 0) {
        FUN_00d50b00();
      }
      uVar8 = (**(code **)(*plVar1 + 0x528))();
      *(undefined4 *)(unaff_RDI + 0x10) = uVar8;
      if (lVar6 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    case 0x6c:
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_027e7c20 != 0) {
        FUN_00d50b00();
      }
      uVar7 = (**(code **)(*plVar1 + 0x530))();
      *(undefined8 *)(unaff_RDI + 0x10) = uVar7;
      if (lVar6 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  if (DAT_027c6f78 != 0) {
    FUN_00d50b00();
  }
  iVar5 = (**(code **)(*plVar1 + 0x598))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x420))();
  *(char *)(unaff_RDI + 0xc) = cVar3;
  if (iVar5 < 2) {
    if ((cVar3 == 'd') || (cVar3 == 'l')) {
      lVar6 = *(longlong *)*unaff_RSI;
      uVar7 = 8;
    }
    else {
      if (cVar3 != 'f') goto LAB_00d44892;
      lVar6 = *(longlong *)*unaff_RSI;
      uVar7 = 4;
    }
    (**(code **)(lVar6 + 0x478))(extraout_XMM0_Da,uVar7);
  }
  else if (cVar3 == 'd') {
    uVar7 = (**(code **)(*(longlong *)*unaff_RSI + 0x438))();
    *(undefined8 *)(unaff_RDI + 0x10) = uVar7;
  }
  else if (cVar3 == 'l') {
    uVar7 = (**(code **)(*(longlong *)*unaff_RSI + 0x440))();
    *(undefined8 *)(unaff_RDI + 0x10) = uVar7;
  }
  else {
    if (cVar3 != 'f') goto LAB_00d44892;
    uVar8 = (**(code **)(*(longlong *)*unaff_RSI + 0x430))();
    *(undefined4 *)(unaff_RDI + 0x10) = uVar8;
  }
  cVar3 = *(char *)(unaff_RDI + 0xc);
LAB_00d44892:
  if (cVar3 == 'I') {
    uVar8 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
    *(undefined4 *)(unaff_RDI + 0x10) = uVar8;
  }
  else if (cVar3 == 'b') {
    uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
    *(undefined1 *)(unaff_RDI + 0x10) = uVar4;
  }
  else if (cVar3 == 'i') {
    uVar8 = (**(code **)(*(longlong *)*unaff_RSI + 0x448))();
    *(undefined4 *)(unaff_RDI + 0x10) = uVar8;
  }
  return;
switchD_00d445a6_caseD_64:
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027e7c20 != 0) {
    FUN_00d50b00();
  }
  uVar7 = (**(code **)(*plVar1 + 0x540))();
  *(undefined8 *)(unaff_RDI + 0x10) = uVar7;
  if (lVar6 == 0) {
    return;
  }
  FUN_00d50b20();
  return;
}


