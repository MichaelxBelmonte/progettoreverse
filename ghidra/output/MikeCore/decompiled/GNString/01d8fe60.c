// Function: FUN_01d8fe60
// Address: 01d8fe60
// Size: 504 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01d8feb5) */
/* WARNING: Removing unreachable block (ram,0x01d8febe) */

longlong * FUN_01d8fe60(void)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  longlong *unaff_RSI;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong lVar5;
  byte bVar6;
  longlong local_48;
  char local_40;
  
  bVar1 = 1;
  lVar5 = local_48;
  if (((longlong *)unaff_RSI[0x29] == (longlong *)0x0) ||
     ((**(code **)(*(longlong *)unaff_RSI[0x29] + 0x3f8))(), local_48 == 0)) {
    lVar5 = 0;
    bVar6 = 0;
    bVar3 = false;
    plVar4 = (longlong *)unaff_RSI[0x2a];
    bVar2 = false;
    if (plVar4 == (longlong *)0x0) goto LAB_01d8fee9;
LAB_01d8ff1e:
    (**(code **)(*plVar4 + 0x3f8))();
    if (local_48 == lVar5) {
      if ((bool)(bVar1 & local_48 != 0)) {
        bVar3 = true;
        if (local_40 != '\0') goto LAB_01d8ffe4;
        bVar3 = true;
        FUN_00d50b00();
      }
LAB_01d8ffd0:
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      if ((bool)(bVar6 & lVar5 != 0)) {
        FUN_00d50b20();
        bVar3 = true;
        lVar5 = local_48;
        goto LAB_01d8ffd0;
      }
      bVar3 = true;
      lVar5 = local_48;
    }
    else if ((bool)(bVar6 & lVar5 != 0)) {
      FUN_00d50b20();
      bVar3 = true;
      lVar5 = local_48;
    }
    else {
      bVar3 = true;
      lVar5 = local_48;
    }
LAB_01d8ffe4:
    if (lVar5 != 0) goto LAB_01d8fff1;
LAB_01d8fefa:
    bVar2 = true;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
    bVar3 = true;
    if (*(int *)(local_48 + 0xc) == 0) {
      bVar3 = true;
      bVar1 = 0;
      bVar6 = 1;
      plVar4 = (longlong *)unaff_RSI[0x2a];
      bVar2 = true;
      if (plVar4 != (longlong *)0x0) goto LAB_01d8ff1e;
LAB_01d8fee9:
      bVar3 = bVar2;
      if (lVar5 == 0) goto LAB_01d8fefa;
    }
LAB_01d8fff1:
    if (*(int *)(lVar5 + 0xc) != 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar3) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar5;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return unaff_RDI;
    }
    bVar2 = false;
  }
  (**(code **)(*unaff_RSI + 0x3f8))();
  if (bVar3 && !bVar2) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


