// Function: FUN_01eb31c0
// Address: 01eb31c0
// Size: 599 bytes
// Class: GNData


void FUN_01eb31c0(void)

{
  int iVar1;
  bool bVar2;
  longlong *plVar3;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  longlong *plVar4;
  longlong lVar5;
  longlong local_48;
  char local_40;
  
  if ((int)unaff_RDI[0x39] == 1) {
    *(undefined4 *)(unaff_RDI + 0x29) = unaff_ESI;
    lVar5 = 0;
    bVar2 = false;
    plVar4 = (longlong *)0x0;
    while( true ) {
      (**(code **)(*unaff_RDI + 0x4a0))();
      iVar1 = *(int *)(local_48 + 0xc);
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (iVar1 <= lVar5) break;
      (**(code **)(*unaff_RDI + 0x4a0))();
      plVar3 = *(longlong **)(*(longlong *)(local_48 + 0x10) + lVar5 * 8);
      if (plVar4 == plVar3) {
        if ((!bVar2) && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b00();
          plVar3 = plVar4;
          goto LAB_01eb338c;
        }
      }
      else {
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01eb338c:
        bVar2 = true;
        plVar4 = plVar3;
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar4 + 0xa88))();
      (**(code **)(*plVar4 + 0x918))();
      lVar5 = lVar5 + 1;
    }
  }
  else {
    if ((int)unaff_RDI[0x39] != 2) {
      return;
    }
    *(undefined4 *)(unaff_RDI + 0x29) = unaff_ESI;
    lVar5 = 0;
    bVar2 = false;
    plVar4 = (longlong *)0x0;
    while( true ) {
      (**(code **)(*unaff_RDI + 0x4a0))();
      iVar1 = *(int *)(local_48 + 0xc);
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (iVar1 <= lVar5) break;
      (**(code **)(*unaff_RDI + 0x4a0))();
      plVar3 = *(longlong **)(*(longlong *)(local_48 + 0x10) + lVar5 * 8);
      if (plVar4 == plVar3) {
        if ((!bVar2) && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b00();
          plVar3 = plVar4;
          goto LAB_01eb328c;
        }
      }
      else {
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01eb328c:
        bVar2 = true;
        plVar4 = plVar3;
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar4 + 0xa88))();
      (**(code **)(*plVar4 + 0x918))();
      lVar5 = lVar5 + 1;
    }
  }
  if ((bVar2) && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


