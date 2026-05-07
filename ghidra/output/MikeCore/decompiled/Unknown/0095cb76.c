// Function: FUN_0095cb76
// Address: 0095cb76
// Size: 546 bytes
// Class: Unknown


undefined8 FUN_0095cb76(undefined8 param_1,ulonglong param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong unaff_RSI;
  ulonglong uVar10;
  longlong unaff_RDI;
  ulonglong uVar11;
  uint uVar12;
  
  uVar3 = 1;
  if (*(short *)(unaff_RDI + 0xcc) == 0) {
    if (param_2 != 0) {
      uVar1 = *(ushort *)(unaff_RDI + 0xce) >> 3;
      uVar8 = (ulonglong)uVar1;
      uVar10 = 0;
      do {
        uVar6 = *(uint *)(unaff_RDI + 200);
        uVar11 = param_2 - uVar10;
        if ((param_2 < uVar10 + uVar8) || (uVar6 != 0)) {
          uVar5 = (uint)uVar1;
          uVar7 = (ulonglong)(uVar5 - uVar6);
          if (uVar6 + (int)uVar11 <= uVar5) {
            uVar7 = uVar11 & 0xffffffff;
          }
          uVar2 = (uint)uVar7;
          if (uVar6 == 0) {
            FUN_0095d18d(uVar8,uVar7 >> 3);
            FUN_0095d128(0,(ulonglong)(uVar2 & 0xfffffff8) + unaff_RSI,uVar2 & 7);
          }
          else if (uVar2 != 0) {
            uVar6 = uVar6 & 7;
            lVar4 = unaff_RSI;
            uVar11 = uVar7;
            do {
              uVar9 = (ulonglong)(8 - uVar6);
              if ((uint)uVar11 < 8 - uVar6) {
                uVar9 = uVar11;
              }
              FUN_0095d128(uVar6,lVar4,uVar9);
              lVar4 = lVar4 + uVar9;
              uVar6 = 0;
              uVar12 = (uint)uVar11 - (int)uVar9;
              uVar11 = (ulonglong)uVar12;
            } while (uVar12 != 0);
          }
          uVar10 = uVar10 + uVar7;
          unaff_RSI = unaff_RSI + uVar7;
          uVar2 = uVar2 + *(int *)(unaff_RDI + 200);
          *(uint *)(unaff_RDI + 200) = uVar2;
          if (uVar2 == uVar5) {
            FUN_0095d2b2();
            *(undefined4 *)(unaff_RDI + 200) = 0;
          }
        }
        else if ((uVar1 & 7) == 0) {
          lVar4 = FUN_0095eacc(uVar11,unaff_RSI,0);
          uVar10 = uVar10 + lVar4;
          unaff_RSI = unaff_RSI + lVar4;
        }
        else {
          for (; uVar8 <= uVar11; uVar11 = uVar11 - uVar8) {
            FUN_0095d18d();
            FUN_0095d128(0,unaff_RSI + (ulonglong)(uVar1 & 0xfffffff8),uVar1 & 7);
            FUN_0095d2b2();
            unaff_RSI = unaff_RSI + uVar8;
          }
          uVar10 = param_2 - uVar11;
        }
      } while (uVar10 < param_2);
    }
    uVar3 = 0;
  }
  return uVar3;
}


