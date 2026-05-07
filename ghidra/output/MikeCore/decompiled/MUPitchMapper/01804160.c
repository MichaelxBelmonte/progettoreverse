// Function: FUN_01804160
// Address: 01804160
// Size: 635 bytes
// Class: MUPitchMapper


/* WARNING: Removing unreachable block (ram,0x018041da) */
/* WARNING: Removing unreachable block (ram,0x018041e6) */
/* WARNING: Removing unreachable block (ram,0x0180419e) */
/* WARNING: Removing unreachable block (ram,0x018041aa) */
/* WARNING: Removing unreachable block (ram,0x0180430c) */

void FUN_01804160(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_00d61ea0();
  FUN_017e1f30();
  lVar2 = DAT_027d51a0;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027d51a0 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027d51a0;
  if (cVar4 != '\0') {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027d51a0 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar1 + 0x510))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      *(undefined4 *)(unaff_RDI + 0x60) = 1;
    }
    lVar2 = DAT_027d51a8;
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027d51a8 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar1 + 0x590))();
    lVar3 = DAT_027d51a8;
    if (cVar4 == '\0') {
      cVar4 = '\0';
    }
    else {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_027d51a8 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*plVar1 + 0x510))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      *(byte *)(unaff_RDI + 0x60) = *(byte *)(unaff_RDI + 0x60) | 0x10;
    }
  }
  lVar2 = DAT_027d51b0;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027d51b0 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027d51b0;
  if (cVar4 != '\0') {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027d51b0 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar1 + 0x510))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      *(undefined4 *)(unaff_RDI + 100) = 0x11;
    }
  }
  return;
}


