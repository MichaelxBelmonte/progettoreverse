// Function: FUN_018fdaf0
// Address: 018fdaf0
// Size: 769 bytes
// Class: Unknown


undefined8 FUN_018fdaf0(double param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int *unaff_RSI;
  longlong unaff_RDI;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  undefined8 uVar9;
  
  iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc);
  dVar8 = (double)FUN_01907950();
  if (param_1 < dVar8) {
    iVar7 = 0;
    goto LAB_018fdd52;
  }
  iVar6 = iVar4 + -2;
  dVar8 = (double)FUN_01907950();
  iVar7 = iVar6;
  if (dVar8 <= param_1) goto LAB_018fdd52;
  iVar2 = 1;
  if ((unaff_RSI != (int *)0x0) && (iVar7 = *unaff_RSI, iVar7 != -1)) {
    iVar5 = iVar7;
    if (iVar6 < iVar7) {
      iVar5 = iVar6;
    }
    if (iVar7 < 1) {
      iVar5 = 1;
    }
    dVar8 = (double)FUN_01907950();
    if (dVar8 <= param_1) {
      iVar2 = iVar5;
      if (iVar5 < iVar4 + -1) {
        iVar7 = iVar5 + 1;
        dVar8 = (double)FUN_01907950();
        if (dVar8 <= param_1) goto LAB_018fdc85;
      }
      else {
LAB_018fdc85:
        iVar7 = iVar5 + 2;
        if (((iVar4 <= iVar7) || (dVar8 = (double)FUN_01907950(), dVar8 <= param_1)) &&
           ((iVar7 = iVar5 + 3, iVar4 <= iVar7 || (dVar8 = (double)FUN_01907950(), dVar8 <= param_1)
            ))) goto LAB_018fdd0b;
      }
      iVar6 = iVar7;
    }
    else {
      iVar2 = 1;
      iVar6 = iVar5;
      if (0 < iVar5) {
        dVar8 = (double)FUN_01907950();
        iVar2 = iVar5 + -1;
        if (param_1 < dVar8) {
          if (iVar5 < 2) {
            iVar2 = 1;
            iVar6 = 1;
          }
          else {
            dVar8 = (double)FUN_01907950();
            iVar2 = iVar5 + -2;
            if (param_1 < dVar8) {
              if (iVar5 < 3) {
                iVar2 = 1;
                iVar6 = 2;
              }
              else {
                dVar8 = (double)FUN_01907950();
                iVar2 = iVar5 + -3;
                if (param_1 < dVar8) {
                  iVar2 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_018fdd0b:
  do {
    iVar7 = iVar2;
    if (iVar6 - iVar7 == 1) break;
    iVar4 = (iVar6 - iVar7) / 2 + iVar7;
    dVar8 = (double)FUN_01907950();
    iVar2 = iVar4;
    if (param_1 <= dVar8) {
      iVar2 = iVar7;
      iVar6 = iVar4;
    }
  } while ((dVar8 != param_1) || (iVar7 = iVar4, NAN(dVar8) || NAN(param_1)));
LAB_018fdd52:
  if (unaff_RSI != (int *)0x0) {
    *unaff_RSI = iVar7;
  }
  lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
  lVar1 = *(longlong *)(lVar3 + (longlong)iVar7 * 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
    lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
  }
  lVar3 = *(longlong *)(lVar3 + 8 + (longlong)iVar7 * 8);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  uVar9 = FUN_019079d0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return uVar9;
}


