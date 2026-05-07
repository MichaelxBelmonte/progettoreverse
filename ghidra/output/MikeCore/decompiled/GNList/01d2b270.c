// Function: FUN_01d2b270
// Address: 01d2b270
// Size: 669 bytes
// Class: GNList


void FUN_01d2b270(void)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  plVar7 = *(longlong **)(unaff_RDI + 0x40);
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar7 + 0x68))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = *(longlong *)(unaff_RDI + 0x28);
  if (*(int *)(lVar5 + 0xc) < 1) {
    bVar3 = false;
    plVar7 = (longlong *)0x0;
  }
  else {
    lVar8 = 0;
    plVar7 = (longlong *)0x0;
    bVar3 = false;
    do {
      plVar2 = *(longlong **)(*(longlong *)(lVar5 + 0x10) + lVar8 * 8);
      if (plVar7 == plVar2) {
        if ((!bVar3) && (plVar7 != (longlong *)0x0)) {
          bVar3 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
          bVar3 = true;
          plVar7 = plVar2;
        }
        else {
          bVar3 = true;
          plVar7 = plVar2;
        }
      }
      cVar4 = (**(code **)(*plVar7 + 0x488))();
      if ((cVar4 != '\0') && ((char)plVar7[8] == '\0')) {
        *(undefined1 *)(plVar7 + 8) = 1;
        FUN_00d50b00();
        (**(code **)(*plVar7 + 0x498))();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
      }
      lVar8 = lVar8 + 1;
      lVar5 = *(longlong *)(unaff_RDI + 0x28);
    } while (lVar8 < *(int *)(lVar5 + 0xc));
  }
  uVar1 = *(uint *)(lVar5 + 0xc);
  if (0 < (int)uVar1) {
    lVar5 = *(longlong *)(lVar5 + 0x10);
    uVar6 = uVar1 & 3;
    if (uVar1 - 1 < 3) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      do {
        *(undefined1 *)(*(longlong *)(lVar5 + uVar9 * 8) + 0x40) = 0;
        *(undefined1 *)(*(longlong *)(lVar5 + 8 + uVar9 * 8) + 0x40) = 0;
        *(undefined1 *)(*(longlong *)(lVar5 + 0x10 + uVar9 * 8) + 0x40) = 0;
        *(undefined1 *)(*(longlong *)(lVar5 + 0x18 + uVar9 * 8) + 0x40) = 0;
        uVar9 = uVar9 + 4;
      } while ((uVar1 & 0xfffffffc) != (uint)uVar9);
    }
    if (uVar6 != 0) {
      uVar9 = uVar9 & 0xffffffff;
      do {
        *(undefined1 *)(*(longlong *)(lVar5 + uVar9 * 8) + 0x40) = 0;
        uVar9 = uVar9 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  FUN_01d300d0();
  plVar2 = *(longlong **)(unaff_RDI + 0x40);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x70))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  if ((bVar3) && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


