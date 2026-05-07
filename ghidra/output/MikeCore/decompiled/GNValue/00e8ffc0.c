// Function: FUN_00e8ffc0
// Address: 00e8ffc0
// Size: 535 bytes
// Class: GNValue


longlong * FUN_00e8ffc0(int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar6;
  longlong *plVar7;
  
  lVar5 = *(longlong *)(unaff_RDI + (longlong)param_1 * 8);
  uVar4 = FUN_00e31390();
joined_r0x00e8fffa:
  if ((uVar4 & 0xfffe) != 0) goto LAB_00e90010;
  lVar5 = FUN_00e91580(1,param_1);
  *(longlong *)(unaff_RDI + (longlong)param_1 * 8) = lVar5;
  uVar4 = FUN_00e31390();
  cVar3 = FUN_00e314a0(0,uVar4 & 0xfffffffe);
  while (cVar3 == '\0') {
    cVar3 = FUN_00e314a0(0,uVar4 & 0xfffffffe);
  }
  uVar4 = FUN_00e31390();
  if ((uVar4 & 0xfffe) == 0) {
    return (longlong *)0x0;
  }
  while( true ) {
    lVar2 = *(longlong *)(lVar5 + 8);
    lVar6 = (ulonglong)(byte)(&DAT_028026ec)[(longlong)*(int *)(lVar5 + 4) * 0x38] * 0x10 +
            (ulonglong)(uVar4 >> 0x11) * (&DAT_028026d8)[(longlong)*(int *)(lVar5 + 4) * 7];
    cVar3 = FUN_00e314a0(0,uVar4 + 0xfffe & 0xfffe |
                           uVar4 & 0x10001 | *(int *)(lVar2 + 0x10 + lVar6) << 0x11);
    if (cVar3 != '\0') break;
    if ((uVar4 & 0xfffe) == 0) {
      return (longlong *)0x0;
    }
  }
  plVar1 = (longlong *)(lVar2 + lVar6);
  plVar7 = plVar1 + 2;
  if ((&DAT_028026ec)[(longlong)*(int *)(lVar5 + 4) * 0x38] != '\0') goto LAB_00e901bb;
  *plVar1 = lVar5;
  goto LAB_00e901af;
LAB_00e90010:
  lVar2 = *(longlong *)(lVar5 + 8);
  lVar6 = (ulonglong)(byte)(&DAT_028026ec)[(longlong)*(int *)(lVar5 + 4) * 0x38] * 0x10 +
          (ulonglong)(uVar4 >> 0x11) * (&DAT_028026d8)[(longlong)*(int *)(lVar5 + 4) * 7];
  cVar3 = FUN_00e314a0(0,uVar4 + 0xfffe & 0xfffe |
                         uVar4 & 0x10001 | *(int *)(lVar2 + 0x10 + lVar6) << 0x11);
  if (cVar3 != '\0') {
    plVar1 = (longlong *)(lVar2 + lVar6);
    plVar7 = plVar1 + 2;
    if ((&DAT_028026ec)[(longlong)*(int *)(lVar5 + 4) * 0x38] == '\0') {
      *plVar1 = lVar5;
LAB_00e901af:
      plVar7[-1] = unaff_RSI + 0x10;
    }
LAB_00e901bb:
    FUN_00e314f0();
    return plVar7;
  }
  goto joined_r0x00e8fffa;
}


