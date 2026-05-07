// Function: FUN_018fef80
// Address: 018fef80
// Size: 1287 bytes
// Class: Unknown


longlong * FUN_018fef80(int *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int iVar8;
  int iStack_3c;
  int iStack_34;
  
  iVar1 = *(int *)(*(longlong *)(unaff_RSI + 0x38) + 0xc);
  uVar5 = FUN_019079b0();
  iStack_34 = (int)(param_2 >> 0x20);
  if (((param_2 >> 0x20 != 0) && (uVar5 >> 0x20 != 0)) && (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
    iVar7 = 0;
joined_r0x018ff342:
    if (param_1 != (int *)0x0) {
      *param_1 = iVar7;
    }
    uVar5 = FUN_019079b0();
    if ((((uVar5 >> 0x20 == 0) || (param_2 >> 0x20 == 0)) || (cVar3 = FUN_00e7c000(), cVar3 == '\0')
        ) && (((iVar7 != 0 || (uVar5 = FUN_019079b0(), uVar5 >> 0x20 == 0)) ||
              ((iStack_34 == 0 || (cVar3 = FUN_00e7c020(), cVar3 != '\0')))))) {
      if ((((iVar7 + 1 == *(int *)(*(longlong *)(unaff_RSI + 0x38) + 0xc) + -1) &&
           (uVar5 = FUN_019079b0(), uVar5 >> 0x20 != 0)) && (iStack_34 != 0)) &&
         (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        return unaff_RDI;
      }
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(unaff_RSI + 0x38) + 0x10) + (longlong)(iVar7 + 1) * 8);
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    else {
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(unaff_RSI + 0x38) + 0x10) + (longlong)iVar7 * 8);
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  iVar7 = iVar1 + -2;
  uVar5 = FUN_019079b0();
  if (((iStack_34 != 0) && (uVar5 >> 0x20 != 0)) && (cVar3 = FUN_00e7c020(), cVar3 == '\0'))
  goto joined_r0x018ff342;
  iVar8 = 1;
  if ((param_1 == (int *)0x0) || (iVar6 = *param_1, iVar6 == -1)) {
LAB_018ff294:
    iVar4 = iVar7 - iVar8;
    iVar6 = iVar7;
  }
  else {
    iVar8 = iVar6;
    if (iVar7 < iVar6) {
      iVar8 = iVar7;
    }
    iVar4 = 1;
    if (0 < iVar6) {
      iVar4 = iVar8;
    }
    uVar5 = FUN_019079b0();
    if (((iStack_34 != 0) && (uVar5 >> 0x20 != 0)) && (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
      iVar7 = iVar4;
      if (0 < iVar4) {
        uVar5 = FUN_019079b0();
        if (((iStack_34 != 0) && (uVar5 >> 0x20 != 0)) &&
           (cVar3 = FUN_00e7c020(), iVar8 = iVar4 + -1, cVar3 == '\0')) goto LAB_018ff294;
      }
      if (1 < iVar4) {
        uVar5 = FUN_019079b0();
        if (((iStack_34 != 0) && (uVar5 >> 0x20 != 0)) &&
           (cVar3 = FUN_00e7c020(), iVar8 = iVar4 + -2, cVar3 == '\0')) goto LAB_018ff294;
      }
      iVar6 = iVar4;
      if (2 < iVar4) {
        iVar8 = iVar4 + -3;
        uVar5 = FUN_019079b0();
        if ((iStack_34 != 0) && (uVar5 >> 0x20 != 0)) {
          cVar3 = FUN_00e7c020();
          if (cVar3 != '\0') {
            iVar8 = 1;
          }
          iVar4 = iVar4 - iVar8;
          goto joined_r0x018ff29d;
        }
      }
      iVar4 = iVar4 + -1;
      iVar8 = 1;
      goto joined_r0x018ff29d;
    }
    iVar8 = iVar4;
    if (iVar4 < iVar1 + -1) {
      iVar6 = iVar4 + 1;
      uVar5 = FUN_019079b0();
      if (((iStack_34 == 0) || (uVar5 >> 0x20 == 0)) || (cVar3 = FUN_00e7c020(), cVar3 == '\0'))
      goto LAB_018ff1f2;
    }
    else {
LAB_018ff1f2:
      iVar6 = iVar4 + 2;
      if (((iVar1 <= iVar6) || (uVar5 = FUN_019079b0(), iStack_34 == 0)) ||
         ((uVar5 >> 0x20 == 0 || (cVar3 = FUN_00e7c020(), cVar3 == '\0')))) {
        if ((((iVar4 + 3 < iVar1) && (uVar5 = FUN_019079b0(), iStack_34 != 0)) &&
            (uVar5 >> 0x20 != 0)) && (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
          iVar7 = iVar4 + 3;
        }
        goto LAB_018ff294;
      }
    }
    iVar4 = iVar6 - iVar4;
  }
joined_r0x018ff29d:
  iVar7 = iVar8;
  if (iVar4 != 1) {
    do {
      iVar7 = iVar4 / 2 + iVar8;
      uVar5 = FUN_019079b0();
      if ((uVar5 >> 0x20 != 0) && (iStack_34 != 0)) {
        cVar3 = FUN_00e7c000();
        if (cVar3 != '\0') break;
        iStack_3c = (int)(uVar5 >> 0x20);
        if (((iStack_3c != 0) && (iStack_34 != 0)) && (cVar3 = FUN_00e7c020(), cVar3 != '\0'))
        goto code_r0x018ff31b;
      }
      iVar4 = iVar7 - iVar8;
      iVar6 = iVar7;
      iVar7 = iVar8;
      if (iVar4 == 1) break;
    } while( true );
  }
  goto joined_r0x018ff342;
code_r0x018ff31b:
  iVar4 = iVar6 - iVar7;
  iVar8 = iVar7;
  goto joined_r0x018ff29d;
}


