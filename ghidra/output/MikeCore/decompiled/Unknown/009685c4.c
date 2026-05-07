// Function: FUN_009685c4
// Address: 009685c4
// Size: 1112 bytes
// Class: Unknown


void FUN_009685c4(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  uint *unaff_RSI;
  ulonglong uVar15;
  uint *unaff_RDI;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  if (unaff_RDI[0x5a] != 0) {
    return;
  }
  uVar1 = *param_2;
  if ((ulonglong)uVar1 != 0) {
    uVar2 = *unaff_RSI;
    if ((ulonglong)uVar2 != 0) {
      puVar4 = *(uint **)(unaff_RDI + 0x40);
      if (((puVar4 != param_1) || (puVar4 == param_2)) || (puVar4 == unaff_RSI)) {
        param_1 = *(uint **)(unaff_RDI + 0x36);
      }
      uVar12 = (ulonglong)uVar2 & 0x7fffffff;
      uVar19 = (ulonglong)uVar1 & 0x7fffffff;
      FUN_00969412();
      uVar6 = (uint)uVar12;
      iVar7 = (int)uVar19;
      if ((unaff_RDI[5] != 0) && ((int)unaff_RDI[4] < (int)(uVar6 + iVar7))) {
        FUN_0096936d();
        return;
      }
      if (*unaff_RDI == 0) {
        if (uVar6 < 6 || unaff_RSI != param_2) {
          if (uVar6 != 0) {
            lVar5 = *(longlong *)(param_1 + 2);
            uVar17 = 0;
            lVar14 = lVar5;
            do {
              uVar11 = 0;
              if (iVar7 != 0) {
                lVar13 = *(longlong *)(unaff_RSI + 2);
                lVar16 = *(longlong *)(param_2 + 2);
                uVar10 = 0;
                uVar11 = 0;
                do {
                  uVar11 = (ulonglong)*(uint *)(lVar14 + uVar10 * 4) +
                           (ulonglong)*(uint *)(lVar16 + uVar10 * 4) *
                           (ulonglong)*(uint *)(lVar13 + uVar17 * 4) + uVar11;
                  *(int *)(lVar14 + uVar10 * 4) = (int)uVar11;
                  uVar11 = uVar11 >> 0x20;
                  uVar10 = uVar10 + 1;
                } while (uVar19 != uVar10);
              }
              *(int *)(lVar5 + (uVar17 + uVar19) * 4) = (int)uVar11;
              uVar17 = uVar17 + 1;
              lVar14 = lVar14 + 4;
            } while (uVar17 != uVar12);
          }
        }
        else {
          lVar5 = *(longlong *)(param_1 + 2);
          lVar14 = *(longlong *)(param_2 + 2);
          uVar19 = 0;
          lVar13 = lVar14;
          lVar16 = lVar5;
          uVar17 = uVar12;
          do {
            uVar11 = uVar19 + 1;
            uVar10 = 1;
            uVar18 = 0;
            do {
              uVar15 = (ulonglong)*(uint *)(lVar16 + uVar10 * 4) +
                       (ulonglong)*(uint *)(lVar13 + uVar10 * 4) *
                       (ulonglong)*(uint *)(lVar14 + uVar19 * 4) + uVar18;
              *(int *)(lVar16 + uVar10 * 4) = (int)uVar15;
              uVar18 = uVar15 >> 0x20;
              uVar10 = uVar10 + 1;
            } while (uVar17 != uVar10);
            *(int *)(lVar5 + (uVar19 + uVar12) * 4) = (int)(uVar15 >> 0x20);
            lVar13 = lVar13 + 4;
            lVar16 = lVar16 + 8;
            uVar17 = uVar17 - 1;
            uVar19 = uVar11;
          } while (uVar11 != uVar6 - 1);
          *param_1 = uVar6 * 2 - 1;
          FUN_00967b0c();
          if (uVar6 != 0) {
            lVar5 = *(longlong *)(param_2 + 2);
            lVar14 = *(longlong *)(param_1 + 2);
            uVar19 = 0;
            uVar17 = 0;
            do {
              uVar11 = (ulonglong)*(uint *)(lVar5 + uVar19 * 4);
              lVar13 = (ulonglong)*(uint *)(lVar14 + uVar19 * 8) + uVar11 * uVar11 + uVar17;
              *(int *)(lVar14 + uVar19 * 8) = (int)lVar13;
              puVar4 = (uint *)(lVar14 + 4 + uVar19 * 8);
              uVar3 = *puVar4;
              uVar8 = (uint)((ulonglong)lVar13 >> 0x20);
              *puVar4 = *puVar4 + uVar8;
              uVar17 = (ulonglong)CARRY4(uVar3,uVar8);
              uVar19 = uVar19 + 1;
            } while (uVar12 != uVar19);
          }
        }
      }
      else if (uVar6 < 6 || unaff_RSI != param_2) {
        if (uVar6 != 0) {
          lVar5 = *(longlong *)(param_1 + 2);
          uVar17 = 0;
          lVar14 = lVar5;
          do {
            iVar9 = 0;
            if (iVar7 != 0) {
              lVar13 = *(longlong *)(unaff_RSI + 2);
              lVar16 = *(longlong *)(param_2 + 2);
              uVar10 = 0;
              uVar11 = 0;
              do {
                uVar18 = (uVar11 & 0xffffffff) +
                         (ulonglong)*(uint *)(lVar16 + uVar10 * 4) *
                         (ulonglong)*(uint *)(lVar13 + uVar17 * 4) +
                         (ulonglong)*(uint *)(lVar14 + uVar10 * 4);
                uVar3 = *unaff_RDI;
                if (uVar3 == unaff_RDI[3]) {
                  uVar11 = uVar18 >> ((byte)unaff_RDI[2] & 0x3f);
                }
                else {
                  uVar11 = uVar18 / uVar3;
                }
                iVar9 = (int)uVar11;
                *(uint *)(lVar14 + uVar10 * 4) = (int)uVar18 - uVar3 * iVar9;
                uVar10 = uVar10 + 1;
              } while (uVar19 != uVar10);
            }
            *(int *)(lVar5 + (uVar17 + uVar19) * 4) = iVar9;
            uVar17 = uVar17 + 1;
            lVar14 = lVar14 + 4;
          } while (uVar17 != uVar12);
        }
      }
      else {
        lVar5 = *(longlong *)(param_1 + 2);
        lVar14 = *(longlong *)(param_2 + 2);
        lVar13 = lVar14;
        lVar16 = lVar5;
        uVar19 = uVar12;
        uVar17 = 0;
        do {
          uVar11 = uVar17 + 1;
          uVar18 = 1;
          uVar10 = 0;
          do {
            uVar15 = (uVar10 & 0xffffffff) +
                     (ulonglong)*(uint *)(lVar13 + uVar18 * 4) *
                     (ulonglong)*(uint *)(lVar14 + uVar17 * 4) +
                     (ulonglong)*(uint *)(lVar16 + uVar18 * 4);
            uVar3 = *unaff_RDI;
            if (uVar3 == unaff_RDI[3]) {
              uVar10 = uVar15 >> ((byte)unaff_RDI[2] & 0x3f);
            }
            else {
              uVar10 = uVar15 / uVar3;
            }
            *(uint *)(lVar16 + uVar18 * 4) = (int)uVar15 - uVar3 * (int)uVar10;
            uVar18 = uVar18 + 1;
          } while (uVar19 != uVar18);
          *(int *)(lVar5 + (uVar17 + uVar12) * 4) = (int)uVar10;
          lVar13 = lVar13 + 4;
          lVar16 = lVar16 + 8;
          uVar19 = uVar19 - 1;
          uVar17 = uVar11;
        } while (uVar11 != uVar6 - 1);
        *param_1 = uVar6 * 2 - 1;
        FUN_00967b0c();
        if (uVar6 != 0) {
          lVar5 = *(longlong *)(param_2 + 2);
          lVar14 = *(longlong *)(param_1 + 2);
          uVar17 = 0;
          uVar19 = 0;
          do {
            uVar11 = (ulonglong)*(uint *)(lVar5 + uVar17 * 4);
            uVar19 = (ulonglong)*(uint *)(lVar14 + uVar17 * 8) + uVar11 * uVar11 + uVar19;
            uVar3 = *unaff_RDI;
            if (uVar3 == unaff_RDI[3]) {
              iVar9 = (int)(uVar19 >> ((byte)unaff_RDI[2] & 0x3f));
            }
            else {
              iVar9 = (int)(uVar19 / uVar3);
            }
            *(uint *)(lVar14 + uVar17 * 8) = (int)uVar19 - uVar3 * iVar9;
            uVar8 = iVar9 + *(int *)(lVar14 + 4 + uVar17 * 8);
            *(uint *)(lVar14 + 4 + uVar17 * 8) = uVar8;
            uVar3 = *unaff_RDI;
            if (uVar3 <= uVar8) {
              *(uint *)(lVar14 + 4 + uVar17 * 8) = uVar8 - *unaff_RDI;
            }
            uVar19 = (ulonglong)(uVar3 <= uVar8);
            uVar17 = uVar17 + 1;
          } while (uVar12 != uVar17);
        }
      }
      *param_1 = (uVar1 ^ uVar2) & 0x80000000 | uVar6 + iVar7;
      FUN_0096959f();
      FUN_00969bc3();
      return;
    }
  }
  FUN_00969412();
  return;
}


