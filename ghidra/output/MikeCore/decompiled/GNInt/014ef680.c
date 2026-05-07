// Function: FUN_014ef680
// Address: 014ef680
// Size: 500 bytes
// Class: GNInt


void FUN_014ef680(undefined4 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong lVar6;
  bool bVar7;
  
  if (*(int *)(*(longlong *)(unaff_RDI + 0x108) + 0xc) != 0) {
    lVar2 = FUN_00e83010();
    lVar3 = *(longlong *)(unaff_RDI + 0x108);
    if (*(int *)(lVar3 + 0xc) < 1) {
      bVar7 = false;
      lVar5 = 0;
    }
    else {
      lVar4 = 0;
      lVar5 = 0;
      bVar7 = false;
      do {
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar4 * 8);
        if (lVar5 == lVar3) {
          if ((!bVar7) && (lVar5 != 0)) {
            bVar7 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          if ((bVar7) && (lVar5 != 0)) {
            FUN_00d50b20();
            bVar7 = true;
            lVar5 = lVar3;
          }
          else {
            bVar7 = true;
            lVar5 = lVar3;
          }
        }
        *(undefined4 *)(lVar2 + lVar4 * 4) = *(undefined4 *)(lVar5 + 0x24);
        lVar4 = lVar4 + 1;
        lVar3 = *(longlong *)(unaff_RDI + 0x108);
      } while (lVar4 < *(int *)(lVar3 + 0xc));
    }
    FUN_015c1480(param_1);
    lVar3 = *(longlong *)(unaff_RDI + 0x108);
    if (0 < *(int *)(lVar3 + 0xc)) {
      lVar6 = 0;
      lVar4 = lVar5;
      do {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar6 * 8);
        if (lVar4 == lVar5) {
          lVar5 = lVar4;
          bVar1 = bVar7;
          if ((!bVar7) && (lVar4 != 0)) {
            FUN_00d50b00();
            bVar1 = true;
          }
        }
        else {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          bVar1 = true;
          if ((bVar7) && (lVar4 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar7 = bVar1;
        *(undefined4 *)(lVar5 + 0x24) = *(undefined4 *)(lVar2 + lVar6 * 4);
        lVar6 = lVar6 + 1;
        lVar3 = *(longlong *)(unaff_RDI + 0x108);
        lVar4 = lVar5;
      } while (lVar6 < *(int *)(lVar3 + 0xc));
    }
    FUN_00e83070();
    if ((bVar7) && (lVar5 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


