// Function: FUN_012523c0
// Address: 012523c0
// Size: 681 bytes
// Class: GNNull


undefined8 * FUN_012523c0(double param_1,char param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *in_RCX;
  int iVar5;
  longlong unaff_RSI;
  int iVar6;
  undefined8 *unaff_RDI;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  
  if ((((*(int *)(*(longlong *)(unaff_RSI + 0x48) + 0x18) < 8) || (NAN(param_1))) ||
      (**(ulonglong **)(*(longlong *)(unaff_RSI + 0x48) + 0x10) >> 0x20 == 0)) ||
     (cVar2 = FUN_00e7c720(), cVar2 != '\0')) {
    iVar3 = 0;
  }
  else {
    FUN_00e7bcc0();
    uVar10 = FUN_00e7cd00(param_1);
    iVar3 = FUN_01251eb0(uVar10,param_4);
    if (iVar3 < 1) goto LAB_012524a0;
    while (uVar4 = *(ulonglong *)
                    (*(longlong *)(*(longlong *)(unaff_RSI + 0x48) + 0x10) +
                    (ulonglong)(iVar3 - 1) * 8), !NAN(param_1)) {
      while( true ) {
        if ((uVar4 >> 0x20 == 0) || (cVar2 = FUN_00e7c720(), cVar2 == '\0'))
        goto joined_r0x012524dc;
        iVar3 = iVar3 + -1;
        if (0 < iVar3) break;
LAB_012524a0:
        uVar4 = FUN_00e7bdb0();
        if (NAN(param_1)) goto joined_r0x012524dc;
      }
    }
  }
joined_r0x012524dc:
  if (((param_4 != (int *)0x0) && (*param_4 = iVar3, param_2 != '\0')) &&
     (*(longlong *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x50) + 0x10) + (longlong)iVar3 * 8) ==
      0)) {
    *param_4 = iVar3 + (uint)(iVar3 < 1) * 2 + -1;
  }
  iVar7 = *(int *)(*(longlong *)(unaff_RSI + 0x48) + 0x18);
  iVar6 = iVar7 + 7;
  if (-1 < iVar7) {
    iVar6 = iVar7;
  }
  iVar9 = iVar3;
  iVar5 = iVar3;
  if ((param_2 == '\0') || (iVar7 < 8)) goto joined_r0x0125257d;
  plVar1 = *(longlong **)(*(longlong *)(unaff_RSI + 0x50) + 0x10);
  if (plVar1[iVar3] == 0) {
    if (iVar3 == 0) {
      iVar3 = 1;
      iVar7 = 0;
    }
    else {
      iVar8 = iVar3 + -1;
      iVar7 = 1;
      if (iVar8 != 1) goto LAB_0125255d;
    }
LAB_012525a2:
    iVar5 = 0;
    if (*plVar1 != 0) {
      iVar5 = iVar7;
    }
    iVar8 = 1;
    iVar9 = 1;
    if (iVar6 >> 3 < 2) goto joined_r0x0125257d;
  }
  else {
    iVar7 = 1;
    iVar8 = iVar3;
    if (iVar3 == 1) goto LAB_012525a2;
LAB_0125255d:
    iVar5 = iVar8;
    iVar9 = iVar8;
    if (iVar6 >> 3 <= iVar8) goto joined_r0x0125257d;
  }
  iVar9 = iVar8;
  if (plVar1[(longlong)iVar8 + 1] == 0) {
    iVar3 = iVar8 + 1;
  }
joined_r0x0125257d:
  if (in_RCX != (undefined8 *)0x0) {
    if (iVar5 < 1) {
      uVar10 = FUN_00e7bdb0();
      *in_RCX = uVar10;
    }
    else {
      *in_RCX = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(unaff_RSI + 0x48) + 0x10) + (ulonglong)(iVar5 - 1) * 8
                 );
    }
  }
  if (param_3 != (undefined8 *)0x0) {
    iVar7 = *(int *)(*(longlong *)(unaff_RSI + 0x48) + 0x18);
    iVar6 = iVar7 + 7;
    if (-1 < iVar7) {
      iVar6 = iVar7;
    }
    if (iVar3 < iVar6 >> 3) {
      uVar10 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(unaff_RSI + 0x48) + 0x10) + (longlong)iVar3 * 8);
    }
    else {
      uVar10 = FUN_00e7bdb0();
    }
    *param_3 = uVar10;
  }
  *unaff_RDI = *(undefined8 *)
                (*(longlong *)(*(longlong *)(unaff_RSI + 0x50) + 0x10) + (longlong)iVar9 * 8);
  *(undefined1 *)(unaff_RDI + 1) = 0;
  return unaff_RDI;
}


