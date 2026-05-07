// Function: FUN_018ffe60
// Address: 018ffe60
// Size: 1364 bytes
// Class: Unknown


longlong * FUN_018ffe60(double param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  
  iVar6 = *(int *)(*(longlong *)(unaff_RSI + 0x38) + 0xc);
  uVar3 = FUN_019079b0();
  if (((!NAN(param_1)) && (uVar3 >> 0x20 != 0)) && (cVar2 = FUN_00e7c720(), cVar2 != '\0')) {
    iVar5 = 0;
    goto joined_r0x019001eb;
  }
  iVar5 = iVar6 + -2;
  uVar3 = FUN_019079b0();
  if (((!NAN(param_1)) && (uVar3 >> 0x20 != 0)) && (cVar2 = FUN_00e7c720(), cVar2 == '\0'))
  goto joined_r0x019001eb;
  iVar9 = 1;
  iVar8 = iVar5;
  if ((param_2 != (int *)0x0) && (iVar1 = *param_2, iVar1 != -1)) {
    iVar9 = iVar1;
    if (iVar5 < iVar1) {
      iVar9 = iVar5;
    }
    iVar7 = 1;
    if (0 < iVar1) {
      iVar7 = iVar9;
    }
    uVar3 = FUN_019079b0();
    if (((NAN(param_1)) || (uVar3 >> 0x20 == 0)) || (cVar2 = FUN_00e7c720(), cVar2 == '\0')) {
      iVar9 = iVar7;
      if (iVar7 < iVar6 + -1) {
        uVar3 = FUN_019079b0();
        if (((!NAN(param_1)) && (uVar3 >> 0x20 != 0)) &&
           (cVar2 = FUN_00e7c720(), iVar8 = iVar7 + 1, cVar2 != '\0')) goto LAB_0190018b;
      }
      if ((((iVar6 <= iVar7 + 2) || (uVar3 = FUN_019079b0(), NAN(param_1))) ||
          ((uVar3 >> 0x20 == 0 || (cVar2 = FUN_00e7c720(), iVar8 = iVar7 + 2, cVar2 == '\0')))) &&
         ((((iVar8 = iVar5, iVar7 + 3 < iVar6 && (uVar3 = FUN_019079b0(), !NAN(param_1))) &&
           (uVar3 >> 0x20 != 0)) && (cVar2 = FUN_00e7c720(), cVar2 != '\0')))) {
        iVar8 = iVar7 + 3;
      }
    }
    else {
      iVar8 = iVar7;
      if (0 < iVar7) {
        uVar3 = FUN_019079b0();
        if (((!NAN(param_1)) && (uVar3 >> 0x20 != 0)) &&
           (cVar2 = FUN_00e7c720(), iVar9 = iVar7 + -1, cVar2 == '\0')) goto LAB_0190018b;
      }
      if (1 < iVar7) {
        uVar3 = FUN_019079b0();
        if (((!NAN(param_1)) && (uVar3 >> 0x20 != 0)) &&
           (cVar2 = FUN_00e7c720(), iVar9 = iVar7 + -2, cVar2 == '\0')) goto LAB_0190018b;
      }
      if (2 < iVar7) {
        iVar9 = iVar7 + -3;
        uVar3 = FUN_019079b0();
        if ((!NAN(param_1)) && (uVar3 >> 0x20 != 0)) {
          cVar2 = FUN_00e7c720();
          if (cVar2 != '\0') {
            iVar9 = 1;
          }
          goto LAB_0190018b;
        }
      }
      iVar9 = 1;
    }
  }
LAB_0190018b:
  do {
    iVar5 = iVar9;
    if (iVar8 - iVar9 == 1) break;
    iVar5 = (iVar8 - iVar9) / 2 + iVar9;
    FUN_019079b0();
    dVar10 = (double)FUN_00e7c860();
    iVar6 = iVar5;
    if (param_1 <= dVar10) {
      iVar6 = iVar9;
      iVar8 = iVar5;
    }
    iVar9 = iVar6;
  } while ((dVar10 != param_1) || (NAN(dVar10) || NAN(param_1)));
joined_r0x019001eb:
  if (param_2 != (int *)0x0) {
    *param_2 = iVar5;
  }
  FUN_019079b0();
  dVar10 = (double)FUN_00e7c860();
  if (((dVar10 == param_1) && (!NAN(dVar10) && !NAN(param_1))) ||
     ((iVar5 == 0 &&
      (((uVar3 = FUN_019079b0(), !NAN(param_1) && (uVar3 >> 0x20 != 0)) &&
       (cVar2 = FUN_00e7c720(), cVar2 != '\0')))))) {
    lVar4 = *(longlong *)
             (*(longlong *)(*(longlong *)(unaff_RSI + 0x38) + 0x10) + (longlong)iVar5 * 8);
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    iVar6 = iVar5 + 1;
    if (((iVar6 != *(int *)(*(longlong *)(unaff_RSI + 0x38) + 0xc) + -1) ||
        (uVar3 = FUN_019079b0(), uVar3 >> 0x20 == 0)) ||
       ((NAN(param_1) || (cVar2 = FUN_00e7c720(), cVar2 != '\0')))) {
      FUN_019079b0();
      dVar10 = (double)FUN_00e7c860();
      FUN_019079b0();
      dVar11 = (double)FUN_00e7c860();
      lVar4 = *(longlong *)(*(longlong *)(unaff_RSI + 0x38) + 0x10);
      if (param_1 - dVar10 < dVar11 - param_1) {
        lVar4 = *(longlong *)(lVar4 + (longlong)iVar5 * 8);
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      else {
        lVar4 = *(longlong *)(lVar4 + (longlong)iVar6 * 8);
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
    }
    else {
      lVar4 = *(longlong *)
               (*(longlong *)(*(longlong *)(unaff_RSI + 0x38) + 0x10) + (longlong)iVar6 * 8);
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
  }
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


