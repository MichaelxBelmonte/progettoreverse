// Function: FUN_00b31d20
// Address: 00b31d20
// Size: 501 bytes
// Class: GNAudioProcessor


/* WARNING: Removing unreachable block (ram,0x00b31e7a) */
/* WARNING: Removing unreachable block (ram,0x00b31e01) */
/* WARNING: Removing unreachable block (ram,0x00b31df8) */
/* WARNING: Removing unreachable block (ram,0x00b31e83) */

void FUN_00b31d20(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  
  lVar2 = DAT_0275e470;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_0275e470 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x5a0))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*unaff_RDI + 0x548))();
  plVar1 = (longlong *)*unaff_RSI;
  if (cVar3 == '\0') {
    (**(code **)(*plVar1 + 0x400))();
  }
  else {
    lVar2 = unaff_RDI[6];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x400))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  cVar3 = (**(code **)(*unaff_RDI + 0x550))();
  plVar1 = (longlong *)*unaff_RSI;
  if (cVar3 == '\0') {
    (**(code **)(*plVar1 + 0x400))();
  }
  else {
    lVar2 = unaff_RDI[7];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x400))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  plVar1 = (longlong *)*unaff_RSI;
  (**(code **)(*unaff_RDI + 0x558))();
  (**(code **)(*plVar1 + 0x3a8))();
  cVar3 = (**(code **)(*unaff_RDI + 0x558))();
  if (cVar3 != '\0') {
    iVar4 = (**(code **)(*unaff_RDI + 0x448))();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b8))();
    if (0 < iVar4) {
      iVar5 = 0;
      do {
        plVar1 = (longlong *)*unaff_RSI;
        (**(code **)(*unaff_RDI + 0x458))();
        (**(code **)(*plVar1 + 0x3c0))();
        iVar5 = iVar5 + 1;
      } while (iVar4 != iVar5);
    }
  }
  return;
}


