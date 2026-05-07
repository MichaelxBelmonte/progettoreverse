// Function: FUN_01effce0
// Address: 01effce0
// Size: 518 bytes
// Class: GNPopUpButton


/* WARNING: Removing unreachable block (ram,0x01effe27) */
/* WARNING: Removing unreachable block (ram,0x01effe30) */
/* WARNING: Removing unreachable block (ram,0x01effd2b) */
/* WARNING: Removing unreachable block (ram,0x01effd34) */
/* WARNING: Removing unreachable block (ram,0x01effec4) */
/* WARNING: Removing unreachable block (ram,0x01effecd) */

void FUN_01effce0(void)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *unaff_RDI;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  
  if (DAT_028ba670 == (longlong *)*unaff_RDI) {
    return;
  }
  if (DAT_028ba670 != (longlong *)0x0) {
    if (((longlong *)*unaff_RDI != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*DAT_028ba670 + 0x50))(), cVar3 != '\0')) {
      return;
    }
    if ((DAT_028ba670 != (longlong *)0x0) && (DAT_028ba679 != '\0')) goto LAB_01effe06;
  }
  FUN_00e8cb50();
  if (DAT_028ba670 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar4 = (longlong)&DAT_02572358;
    (*DAT_02572370)();
    if (DAT_028ba670 == plVar4) {
      bVar2 = false;
      bVar7 = false;
    }
    else {
      bVar2 = true;
      bVar7 = true;
      bVar6 = DAT_028ba670 != (longlong *)0x0;
      DAT_028ba670 = plVar4;
      if (bVar6) {
        FUN_00d50b20();
      }
    }
    if (DAT_028ba678 == '\0') {
      DAT_028ba678 = '\x01';
      FUN_00e8cb90();
      bVar7 = bVar2;
    }
    if (!bVar7) {
      FUN_00d50b20();
    }
    DAT_028ba679 = '\x01';
    FUN_00e8cb70();
  }
  else {
    DAT_028ba679 = '\x01';
    FUN_00e8cb70();
  }
LAB_01effe06:
  FUN_00d243f0();
  if ((DAT_028ba660 != 0) && (0 < *(int *)(DAT_028ba660 + 0xc))) {
    lVar5 = 0;
    plVar4 = (longlong *)0x0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(DAT_028ba660 + 0x10) + lVar5 * 8);
      if (plVar4 != plVar1) {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar7 = plVar4 != (longlong *)0x0;
        plVar4 = plVar1;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*plVar4 + 0x5e8))();
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(DAT_028ba660 + 0xc));
    FUN_00d50b20();
  }
  return;
}


