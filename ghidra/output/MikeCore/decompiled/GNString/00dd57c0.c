// Function: FUN_00dd57c0
// Address: 00dd57c0
// Size: 528 bytes
// Class: GNString


void FUN_00dd57c0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x380))();
  lVar2 = DAT_027652d0;
  plVar1 = (longlong *)*unaff_RSI;
  if (cVar3 == '\0') {
    uVar4 = (**(code **)(*plVar1 + 0x420))();
    *(undefined1 *)(unaff_RDI + 0xc) = uVar4;
    iVar6 = FUN_00e82730();
    if (iVar6 < 9) {
      (**(code **)(*(longlong *)*unaff_RSI + 0x478))();
    }
    else {
      uVar7 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0x10) = uVar7;
      (**(code **)(*(longlong *)*unaff_RSI + 0x478))(*(longlong *)*unaff_RSI,iVar6);
    }
    FUN_00dd5a80();
    return;
  }
  if (DAT_027652d0 != 0) {
    FUN_00d50b00();
  }
  uVar5 = (**(code **)(*plVar1 + 0x518))();
  *(char *)(unaff_RDI + 0xc) = (char)uVar5;
  if (lVar2 != 0) {
    FUN_00d50b20(uVar5);
    uVar5 = (uint)*(byte *)(unaff_RDI + 0xc);
  }
  iVar6 = FUN_00e82730(uVar5);
  lVar2 = DAT_027648d0;
  if (iVar6 < 9) {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027648d0 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar2;
    local_58 = '\x01';
    (**(code **)(*plVar1 + 0x588))(&local_60,iVar6);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar7 = FUN_00e83010();
    *(undefined8 *)(unaff_RDI + 0x10) = uVar7;
    local_50 = DAT_027648d0;
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027648d0 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    (**(code **)(*plVar1 + 0x588))(&local_50,iVar6);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027815b8;
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027815b8 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar2;
    local_38 = '\x01';
    iVar6 = (**(code **)(*plVar1 + 0x520))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (iVar6 == 1) {
      FUN_00dd5a80();
    }
  }
  return;
}


