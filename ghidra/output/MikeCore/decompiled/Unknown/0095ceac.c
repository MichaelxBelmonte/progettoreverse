// Function: FUN_0095ceac
// Address: 0095ceac
// Size: 565 bytes
// Class: Unknown


undefined8 FUN_0095ceac(undefined8 param_1,ulonglong param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar2 = *(ushort *)(unaff_RDI + 0xce);
  if (*(short *)(unaff_RDI + 0xcc) == 0) {
    FUN_0095cd98();
  }
  if (param_2 != 0) {
    uVar2 = uVar2 >> 3;
    uVar9 = (ulonglong)uVar2;
    uVar6 = 0;
    do {
      uVar5 = *(uint *)(unaff_RDI + 200);
      uVar11 = (uint)uVar2;
      if (uVar5 == uVar11) {
        if (param_2 < uVar6 + uVar9) {
          FUN_0095d2b2();
          *(undefined4 *)(unaff_RDI + 200) = 0;
          uVar5 = 0;
          goto LAB_0095cf5f;
        }
        uVar7 = param_2 - uVar6;
        if ((uVar2 & 7) == 0) {
          lVar8 = FUN_00960998(uVar7,unaff_RSI);
          uVar6 = uVar6 + lVar8;
          unaff_RSI = unaff_RSI + lVar8;
        }
        else {
          for (; uVar9 <= uVar7; uVar7 = uVar7 - uVar9) {
            FUN_0095d2b2();
            FUN_0095ea6d();
            FUN_0095ea0e(0,unaff_RSI + (ulonglong)(uVar2 & 0xfffffff8),uVar2 & 7);
            unaff_RSI = unaff_RSI + uVar9;
          }
          uVar6 = param_2 - uVar7;
        }
      }
      else {
LAB_0095cf5f:
        uVar4 = (int)param_2 - (int)uVar6;
        uVar1 = uVar5 + uVar4;
        uVar3 = uVar11 - uVar5;
        if (uVar1 <= uVar11) {
          uVar3 = uVar4;
        }
        uVar7 = (ulonglong)uVar3;
        if (uVar5 == 0) {
          FUN_0095ea6d(uVar1,uVar3 >> 3);
          FUN_0095ea0e(0,(ulonglong)(uVar3 & 0xfffffff8) + unaff_RSI,uVar3 & 7);
        }
        else if (uVar3 != 0) {
          uVar5 = uVar5 & 7;
          lVar8 = unaff_RSI;
          uVar12 = uVar7;
          do {
            uVar10 = (ulonglong)(8 - uVar5);
            if ((uint)uVar12 < 8 - uVar5) {
              uVar10 = uVar12;
            }
            FUN_0095ea0e(uVar5,lVar8,uVar10);
            lVar8 = lVar8 + uVar10;
            uVar5 = 0;
            uVar11 = (uint)uVar12 - (int)uVar10;
            uVar12 = (ulonglong)uVar11;
          } while (uVar11 != 0);
        }
        uVar6 = uVar6 + uVar7;
        unaff_RSI = unaff_RSI + uVar7;
        *(int *)(unaff_RDI + 200) = *(int *)(unaff_RDI + 200) + uVar3;
      }
    } while (uVar6 < param_2);
  }
  return 0;
}


