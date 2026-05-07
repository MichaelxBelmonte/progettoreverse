// Function: FUN_018fe5f0
// Address: 018fe5f0
// Size: 1170 bytes
// Class: Unknown


ulonglong FUN_018fe5f0(undefined8 param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  int iVar6;
  int iVar7;
  int iStack_3c;
  int iVar8;
  
  iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc);
  uVar4 = FUN_019079b0();
  iVar8 = (int)(unaff_RSI >> 0x20);
  if (((unaff_RSI >> 0x20 != 0) && (uVar4 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 != '\0'))
  {
    iVar7 = 0;
    if (param_2 != (int *)0x0) {
LAB_018fe9c6:
      *param_2 = iVar7;
LAB_018fe9c9:
      if (iVar7 != 0) goto LAB_018fea0a;
    }
    uVar4 = FUN_019079b0();
    if ((unaff_RSI >> 0x20 == 0) || (uVar4 >> 0x20 == 0)) {
      iVar7 = 0;
    }
    else {
      cVar2 = FUN_00e7c020();
      iVar7 = 0;
      if (cVar2 != '\0') {
        return uVar4;
      }
    }
LAB_018fea0a:
    uVar4 = FUN_019079b0();
    if (((iVar7 == *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc) + -2) && (uVar4 >> 0x20 != 0)) &&
       ((iVar8 != 0 && (cVar2 = FUN_00e7c020(), cVar2 == '\0')))) {
      uVar4 = FUN_00e7bdb0();
    }
    return uVar4;
  }
  iVar7 = iVar1 + -2;
  uVar4 = FUN_019079b0();
  if (((iVar8 != 0) && (uVar4 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 == '\0')) {
joined_r0x018fe9c4:
    if (param_2 != (int *)0x0) goto LAB_018fe9c6;
    goto LAB_018fe9c9;
  }
  iVar6 = 1;
  if ((param_2 == (int *)0x0) || (iVar5 = *param_2, iVar5 == -1)) {
LAB_018fe90b:
    iVar3 = iVar7 - iVar6;
    iVar5 = iVar7;
  }
  else {
    iVar6 = iVar5;
    if (iVar7 < iVar5) {
      iVar6 = iVar7;
    }
    iVar3 = 1;
    if (0 < iVar5) {
      iVar3 = iVar6;
    }
    uVar4 = FUN_019079b0();
    if (((iVar8 != 0) && (uVar4 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
      iVar7 = iVar3;
      if (0 < iVar3) {
        uVar4 = FUN_019079b0();
        if (((iVar8 != 0) && (uVar4 >> 0x20 != 0)) &&
           (cVar2 = FUN_00e7c020(), iVar6 = iVar3 + -1, cVar2 == '\0')) goto LAB_018fe90b;
      }
      if (1 < iVar3) {
        uVar4 = FUN_019079b0();
        if (((iVar8 != 0) && (uVar4 >> 0x20 != 0)) &&
           (cVar2 = FUN_00e7c020(), iVar6 = iVar3 + -2, cVar2 == '\0')) goto LAB_018fe90b;
      }
      iVar5 = iVar3;
      if (2 < iVar3) {
        iVar6 = iVar3 + -3;
        uVar4 = FUN_019079b0();
        if ((iVar8 != 0) && (uVar4 >> 0x20 != 0)) {
          cVar2 = FUN_00e7c020();
          if (cVar2 != '\0') {
            iVar6 = 1;
          }
          iVar3 = iVar3 - iVar6;
          goto joined_r0x018fe914;
        }
      }
      iVar3 = iVar3 + -1;
      iVar6 = 1;
      goto joined_r0x018fe914;
    }
    iVar6 = iVar3;
    if (iVar3 < iVar1 + -1) {
      iVar5 = iVar3 + 1;
      uVar4 = FUN_019079b0();
      if (((iVar8 == 0) || (uVar4 >> 0x20 == 0)) || (cVar2 = FUN_00e7c020(), cVar2 == '\0'))
      goto LAB_018fe869;
    }
    else {
LAB_018fe869:
      iVar5 = iVar3 + 2;
      if (((iVar1 <= iVar5) || (uVar4 = FUN_019079b0(), iVar8 == 0)) ||
         ((uVar4 >> 0x20 == 0 || (cVar2 = FUN_00e7c020(), cVar2 == '\0')))) {
        if ((((iVar3 + 3 < iVar1) && (uVar4 = FUN_019079b0(), iVar8 != 0)) && (uVar4 >> 0x20 != 0))
           && (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
          iVar7 = iVar3 + 3;
        }
        goto LAB_018fe90b;
      }
    }
    iVar3 = iVar5 - iVar3;
  }
joined_r0x018fe914:
  iVar7 = iVar6;
  if (iVar3 != 1) {
    do {
      iVar7 = iVar3 / 2 + iVar6;
      uVar4 = FUN_019079b0();
      if ((uVar4 >> 0x20 != 0) && (iVar8 != 0)) {
        cVar2 = FUN_00e7c000();
        if (cVar2 != '\0') break;
        iStack_3c = (int)(uVar4 >> 0x20);
        if (((iStack_3c != 0) && (iVar8 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 != '\0'))
        goto code_r0x018fe9a0;
      }
      iVar3 = iVar7 - iVar6;
      iVar5 = iVar7;
      iVar7 = iVar6;
      if (iVar3 == 1) break;
    } while( true );
  }
  goto joined_r0x018fe9c4;
code_r0x018fe9a0:
  iVar3 = iVar5 - iVar7;
  iVar6 = iVar7;
  goto joined_r0x018fe914;
}


