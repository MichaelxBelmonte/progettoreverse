// Function: FUN_0135d2e0
// Address: 0135d2e0
// Size: 661 bytes
// Class: Unknown


longlong * FUN_0135d2e0(char param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  double local_60;
  double local_40;
  
  lVar8 = *(longlong *)(unaff_RSI + 0xd0);
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  if ((param_1 != '\0') && (lVar11 = *(longlong *)(unaff_RSI + 0x100), lVar8 != lVar11)) {
    if (lVar11 != 0) {
      FUN_00d50b00();
    }
    if (lVar8 == 0) {
      iVar1 = *(int *)(lVar11 + 0xc);
      lVar8 = lVar11;
      goto joined_r0x0135d536;
    }
    FUN_00d50b20();
    lVar8 = lVar11;
  }
  iVar1 = *(int *)(lVar8 + 0xc);
joined_r0x0135d536:
  if (iVar1 < 1) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar7 = 0;
    lVar11 = 0;
    bVar3 = false;
  }
  else {
    lVar9 = 0;
    bVar3 = false;
    lVar7 = 0;
    lVar10 = 0;
    local_40 = DAT_02411138;
    bVar4 = false;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar9 * 8);
      if (lVar10 == lVar2) {
        lVar11 = lVar10;
        bVar5 = bVar3;
        if ((!bVar3) && (lVar2 != 0)) {
          FUN_00d50b00();
          bVar5 = true;
        }
      }
      else {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        bVar5 = true;
        lVar11 = lVar2;
        if ((bVar3) && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar3 = bVar5;
      bVar6 = FUN_01366cc0(0,&local_60);
      bVar5 = bVar4;
      if ((bVar6 & local_60 < local_40) == 1) {
        if (lVar7 == lVar11) {
          lVar10 = lVar7;
          if (((bVar3) && (!bVar4)) && (lVar7 != 0)) {
            FUN_00d50b00();
            bVar5 = true;
          }
        }
        else {
          if ((bVar3) && (lVar11 != 0)) {
            FUN_00d50b00();
          }
          lVar10 = lVar11;
          bVar5 = bVar3;
          if ((bVar4) && (lVar7 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar7 = lVar10;
        local_40 = local_60;
      }
      lVar9 = lVar9 + 1;
      lVar10 = lVar11;
      bVar4 = bVar5;
    } while (lVar9 < *(int *)(lVar8 + 0xc));
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (!bVar5) {
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
  }
  *unaff_RDI = lVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  if ((bVar3) && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


