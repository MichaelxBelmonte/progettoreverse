// Function: FUN_00e9df10
// Address: 00e9df10
// Size: 580 bytes
// Class: Unknown


bool FUN_00e9df10(longlong param_1,longlong param_2,uint param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint unaff_ESI;
  uint uVar6;
  uint unaff_EDI;
  uint uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  
  if (*(byte *)(param_2 + (ulonglong)unaff_EDI) != *(byte *)(param_2 + (ulonglong)unaff_ESI)) {
    return *(byte *)(param_2 + (ulonglong)unaff_ESI) < *(byte *)(param_2 + (ulonglong)unaff_EDI);
  }
  bVar1 = *(byte *)(param_2 + (ulonglong)(unaff_ESI + 1));
  bVar2 = *(byte *)(param_2 + (ulonglong)(unaff_EDI + 1));
  bVar9 = bVar2 < bVar1;
  bVar10 = false;
  if (bVar2 == bVar1) {
    bVar1 = *(byte *)(param_2 + (ulonglong)(unaff_ESI + 2));
    bVar2 = *(byte *)(param_2 + (ulonglong)(unaff_EDI + 2));
    bVar9 = bVar2 < bVar1;
    bVar10 = false;
    if (bVar2 == bVar1) {
      bVar1 = *(byte *)(param_2 + (ulonglong)(unaff_ESI + 3));
      bVar2 = *(byte *)(param_2 + (ulonglong)(unaff_EDI + 3));
      bVar9 = bVar2 < bVar1;
      bVar10 = false;
      if (bVar2 == bVar1) {
        bVar1 = *(byte *)(param_2 + (ulonglong)(unaff_ESI + 4));
        bVar2 = *(byte *)(param_2 + (ulonglong)(unaff_EDI + 4));
        bVar9 = bVar2 < bVar1;
        bVar10 = false;
        if (bVar2 == bVar1) {
          bVar1 = *(byte *)(param_2 + (ulonglong)(unaff_ESI + 5));
          bVar2 = *(byte *)(param_2 + (ulonglong)(unaff_EDI + 5));
          bVar9 = bVar2 < bVar1;
          bVar10 = false;
          if (bVar2 == bVar1) {
            bVar1 = *(byte *)(param_2 + (ulonglong)(unaff_ESI + 6));
            bVar2 = *(byte *)(param_2 + (ulonglong)(unaff_EDI + 6));
            bVar9 = bVar2 < bVar1;
            bVar10 = false;
            if (bVar2 == bVar1) {
              bVar1 = *(byte *)(param_2 + (ulonglong)(unaff_ESI + 7));
              bVar2 = *(byte *)(param_2 + (ulonglong)(unaff_EDI + 7));
              bVar9 = bVar2 < bVar1;
              bVar10 = false;
              if (bVar2 == bVar1) {
                bVar1 = *(byte *)(param_2 + (ulonglong)(unaff_ESI + 8));
                bVar2 = *(byte *)(param_2 + (ulonglong)(unaff_EDI + 8));
                bVar9 = bVar2 < bVar1;
                bVar10 = false;
                if (bVar2 == bVar1) {
                  bVar1 = *(byte *)(param_2 + (ulonglong)(unaff_ESI + 9));
                  bVar2 = *(byte *)(param_2 + (ulonglong)(unaff_EDI + 9));
                  bVar9 = bVar2 < bVar1;
                  bVar10 = false;
                  if (bVar2 == bVar1) {
                    bVar1 = *(byte *)(param_2 + (ulonglong)(unaff_ESI + 10));
                    bVar2 = *(byte *)(param_2 + (ulonglong)(unaff_EDI + 10));
                    bVar9 = bVar2 < bVar1;
                    bVar10 = false;
                    if (bVar2 == bVar1) {
                      bVar1 = *(byte *)(param_2 + (ulonglong)(unaff_ESI + 0xb));
                      bVar2 = *(byte *)(param_2 + (ulonglong)(unaff_EDI + 0xb));
                      bVar9 = bVar2 < bVar1;
                      bVar10 = false;
                      if (bVar2 == bVar1) {
                        uVar7 = unaff_EDI + 0xc;
                        uVar6 = unaff_ESI + 0xc;
                        iVar8 = param_3 + 0x10;
                        while( true ) {
                          bVar1 = *(byte *)(param_2 + (ulonglong)uVar6);
                          bVar2 = *(byte *)(param_2 + (ulonglong)uVar7);
                          bVar9 = bVar2 < bVar1;
                          bVar10 = bVar2 == bVar1;
                          if (!bVar10) break;
                          uVar3 = *(ushort *)(param_1 + (ulonglong)uVar6 * 2);
                          uVar4 = *(ushort *)(param_1 + (ulonglong)uVar7 * 2);
                          bVar9 = uVar4 < uVar3;
                          bVar10 = uVar4 == uVar3;
                          if (!bVar10) break;
                          bVar1 = *(byte *)(param_2 + (ulonglong)(uVar6 + 1));
                          bVar2 = *(byte *)(param_2 + (ulonglong)(uVar7 + 1));
                          bVar9 = bVar2 < bVar1;
                          bVar10 = bVar2 == bVar1;
                          if (!bVar10) break;
                          uVar3 = *(ushort *)(param_1 + (ulonglong)(uVar6 + 1) * 2);
                          uVar4 = *(ushort *)(param_1 + (ulonglong)(uVar7 + 1) * 2);
                          bVar9 = uVar4 < uVar3;
                          bVar10 = uVar4 == uVar3;
                          if (!bVar10) break;
                          bVar1 = *(byte *)(param_2 + (ulonglong)(uVar6 + 2));
                          bVar2 = *(byte *)(param_2 + (ulonglong)(uVar7 + 2));
                          bVar9 = bVar2 < bVar1;
                          bVar10 = bVar2 == bVar1;
                          if (!bVar10) break;
                          uVar3 = *(ushort *)(param_1 + (ulonglong)(uVar6 + 2) * 2);
                          uVar4 = *(ushort *)(param_1 + (ulonglong)(uVar7 + 2) * 2);
                          bVar9 = uVar4 < uVar3;
                          bVar10 = uVar4 == uVar3;
                          if (!bVar10) break;
                          bVar1 = *(byte *)(param_2 + (ulonglong)(uVar6 + 3));
                          bVar2 = *(byte *)(param_2 + (ulonglong)(uVar7 + 3));
                          bVar9 = bVar2 < bVar1;
                          bVar10 = bVar2 == bVar1;
                          if (!bVar10) break;
                          uVar3 = *(ushort *)(param_1 + (ulonglong)(uVar6 + 3) * 2);
                          uVar4 = *(ushort *)(param_1 + (ulonglong)(uVar7 + 3) * 2);
                          bVar9 = uVar4 < uVar3;
                          bVar10 = uVar4 == uVar3;
                          if (!bVar10) break;
                          bVar1 = *(byte *)(param_2 + (ulonglong)(uVar6 + 4));
                          bVar2 = *(byte *)(param_2 + (ulonglong)(uVar7 + 4));
                          bVar9 = bVar2 < bVar1;
                          bVar10 = bVar2 == bVar1;
                          if (!bVar10) break;
                          uVar3 = *(ushort *)(param_1 + (ulonglong)(uVar6 + 4) * 2);
                          uVar4 = *(ushort *)(param_1 + (ulonglong)(uVar7 + 4) * 2);
                          bVar9 = uVar4 < uVar3;
                          bVar10 = uVar4 == uVar3;
                          if (!bVar10) break;
                          bVar1 = *(byte *)(param_2 + (ulonglong)(uVar6 + 5));
                          bVar2 = *(byte *)(param_2 + (ulonglong)(uVar7 + 5));
                          bVar9 = bVar2 < bVar1;
                          bVar10 = bVar2 == bVar1;
                          if (!bVar10) break;
                          uVar3 = *(ushort *)(param_1 + (ulonglong)(uVar6 + 5) * 2);
                          uVar4 = *(ushort *)(param_1 + (ulonglong)(uVar7 + 5) * 2);
                          bVar9 = uVar4 < uVar3;
                          bVar10 = uVar4 == uVar3;
                          if (!bVar10) break;
                          bVar1 = *(byte *)(param_2 + (ulonglong)(uVar6 + 6));
                          bVar2 = *(byte *)(param_2 + (ulonglong)(uVar7 + 6));
                          bVar9 = bVar2 < bVar1;
                          bVar10 = bVar2 == bVar1;
                          if (!bVar10) break;
                          uVar3 = *(ushort *)(param_1 + (ulonglong)(uVar6 + 6) * 2);
                          uVar4 = *(ushort *)(param_1 + (ulonglong)(uVar7 + 6) * 2);
                          bVar9 = uVar4 < uVar3;
                          bVar10 = uVar4 == uVar3;
                          if (!bVar10) break;
                          bVar1 = *(byte *)(param_2 + (ulonglong)(uVar6 + 7));
                          bVar2 = *(byte *)(param_2 + (ulonglong)(uVar7 + 7));
                          bVar9 = bVar2 < bVar1;
                          bVar10 = bVar2 == bVar1;
                          if (!bVar10) break;
                          uVar3 = *(ushort *)(param_1 + (ulonglong)(uVar6 + 7) * 2);
                          uVar4 = *(ushort *)(param_1 + (ulonglong)(uVar7 + 7) * 2);
                          bVar9 = uVar4 < uVar3;
                          bVar10 = uVar4 == uVar3;
                          if (!bVar10) break;
                          uVar5 = param_3;
                          if (uVar7 + 8 < param_3) {
                            uVar5 = 0;
                          }
                          uVar7 = (uVar7 + 8) - uVar5;
                          uVar5 = param_3;
                          if (uVar6 + 8 < param_3) {
                            uVar5 = 0;
                          }
                          *param_4 = *param_4 + -1;
                          uVar6 = (uVar6 + 8) - uVar5;
                          iVar8 = iVar8 + -8;
                          if (iVar8 < 8) {
                            return false;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return !bVar9 && !bVar10;
}


