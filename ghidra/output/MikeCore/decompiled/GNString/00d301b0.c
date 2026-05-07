// Function: FUN_00d301b0
// Address: 00d301b0
// Size: 737 bytes
// Class: GNString


void FUN_00d301b0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  
  lVar4 = DAT_0277d5a8;
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_0277d5a8 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0277d5b8;
    if (cVar3 == '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277d5b8 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar4 = DAT_0277d5e0;
      lVar2 = DAT_0277d5b0;
      if (cVar3 != '\0') {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        goto joined_r0x00d30290;
      }
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277d5b0 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar4 = DAT_0277d5e8;
      lVar2 = DAT_0277d5c0;
      if (cVar3 != '\0') {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        goto joined_r0x00d30290;
      }
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277d5c0 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar4 = DAT_0277d5f0;
      lVar2 = DAT_0277d5d0;
      if (cVar3 != '\0') {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        goto joined_r0x00d30290;
      }
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277d5d0 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar4 = DAT_0277d5f8;
      lVar2 = DAT_0277d5c8;
      if (cVar3 != '\0') {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        goto joined_r0x00d30290;
      }
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277d5c8 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar4 = DAT_0277d600;
      lVar2 = DAT_0277d5d8;
      if (cVar3 != '\0') {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        goto joined_r0x00d30290;
      }
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277d5d8 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar4 = DAT_0277d608;
      if (cVar3 != '\0') {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        goto joined_r0x00d30290;
      }
    }
  }
  lVar4 = DAT_0277d610;
  *(undefined1 *)(unaff_RDI + 1) = 0;
joined_r0x00d30290:
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


