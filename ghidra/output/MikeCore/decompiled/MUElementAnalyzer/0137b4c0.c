// Function: FUN_0137b4c0
// Address: 0137b4c0
// Size: 1517 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x0137bac0) */

void FUN_0137b4c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong unaff_RDI;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  FUN_013c8700(param_1,1);
  lVar4 = *(longlong *)(*(longlong *)(unaff_RDI + 0xb0) + 0x10);
  ___bzero();
  fVar25 = DAT_02390124;
  uVar3 = *(uint *)(unaff_RDI + 0xb8);
  uVar19 = (ulonglong)uVar3;
  if (1 < (int)uVar3) {
    uVar21 = uVar19 - 1;
    uVar13 = 1;
    if (uVar3 != 2) {
      uVar13 = 1;
      do {
        fVar26 = 0.0;
        fVar27 = 0.0;
        uVar12 = (uint)uVar13;
        if ((uVar13 < 0x81) &&
           (((uVar12 - 1 < 0x40 &&
             ((0x800000008000808bU >> ((ulonglong)(uVar12 - 1) & 0x3f) & 1) != 0)) ||
            (fVar27 = 0.0, uVar12 == 0x80)))) {
          fVar27 = fVar25 / (float)(int)uVar12;
          fVar27 = fVar27 * fVar27;
        }
        *(float *)(lVar4 + uVar13 * 4) = fVar27;
        if ((uVar13 < 0x80) &&
           (((uVar12 < 0x40 && ((0x800000008000808bU >> (uVar13 & 0x3f) & 1) != 0)) ||
            (uVar12 + 1 == 0x80)))) {
          fVar26 = fVar25 / (float)(int)(uVar12 + 1);
          fVar26 = fVar26 * fVar26;
        }
        *(float *)(lVar4 + 4 + uVar13 * 4) = fVar26;
        lVar18 = uVar13 - (uVar21 & 0xfffffffffffffffe);
        uVar13 = uVar13 + 2;
      } while (lVar18 != -1);
    }
    if ((uVar21 & 1) != 0) {
      fVar25 = 0.0;
      if (uVar13 < 0x81) {
        iVar5 = (int)uVar13;
        if (((iVar5 - 1U < 0x40) &&
            ((0x800000008000808bU >> ((ulonglong)(iVar5 - 1U) & 0x3f) & 1) != 0)) || (iVar5 == 0x80)
           ) {
          fVar25 = (DAT_02390124 / (float)iVar5) * (DAT_02390124 / (float)iVar5);
        }
      }
      *(float *)(lVar4 + uVar13 * 4) = fVar25;
    }
    uVar13 = (ulonglong)*(uint *)(unaff_RDI + 0xbc);
    if (1 < (int)*(uint *)(unaff_RDI + 0xbc)) {
      if (uVar21 < 8) {
        uVar9 = (ulonglong)((uint)uVar21 & 3);
        lVar18 = lVar4 + uVar19 * 4 + 0x10;
        uVar24 = 1;
        uVar22 = uVar19;
        do {
          lVar17 = 1;
          if (2 < uVar19 - 2) {
            uVar14 = 0;
            do {
              uVar11 = uVar14;
              *(undefined4 *)(lVar18 + -0xc + uVar11 * 4) = *(undefined4 *)(lVar4 + 4 + uVar11 * 4);
              *(undefined4 *)(lVar18 + -8 + uVar11 * 4) = *(undefined4 *)(lVar4 + 8 + uVar11 * 4);
              *(undefined4 *)(lVar18 + -4 + uVar11 * 4) = *(undefined4 *)(lVar4 + 0xc + uVar11 * 4);
              *(undefined4 *)(lVar18 + uVar11 * 4) = *(undefined4 *)(lVar4 + 0x10 + uVar11 * 4);
              uVar14 = uVar11 + 4;
            } while ((uVar21 & 0xfffffffffffffffc) != uVar11 + 4);
            lVar17 = uVar11 + 5;
          }
          if (uVar9 != 0) {
            uVar14 = 0;
            do {
              *(undefined4 *)(lVar4 + (lVar17 + uVar22) * 4 + uVar14 * 4) =
                   *(undefined4 *)(lVar4 + lVar17 * 4 + uVar14 * 4);
              uVar14 = uVar14 + 1;
            } while (uVar9 != uVar14);
          }
          uVar24 = uVar24 + 1;
          lVar18 = lVar18 + uVar19 * 4;
          uVar22 = uVar22 + uVar19;
        } while (uVar24 != uVar13);
      }
      else {
        uVar22 = lVar4 + uVar19 * 4;
        uVar9 = uVar21 & 0xfffffffffffffff8;
        if (uVar21 == uVar9) {
          uVar14 = (uVar9 - 8 >> 3) + 1;
          uVar11 = (ulonglong)((uint)uVar21 & 3);
          lVar18 = lVar4 + uVar19 * 4 + 0x34;
          lVar23 = lVar4 + uVar19 * 4 + 0x10;
          uVar20 = 1;
          lVar17 = 0;
          uVar24 = uVar19;
          do {
            if ((lVar4 + (uVar19 + 1 + lVar17 * uVar19) * 4 < uVar22) &&
               (lVar4 + 4U < lVar4 + (lVar17 * uVar19 + uVar19 * 2) * 4)) {
              lVar15 = 1;
              if (2 < uVar19 - 2) {
                uVar10 = 0;
                do {
                  uVar16 = uVar10;
                  *(undefined4 *)(lVar23 + -0xc + uVar16 * 4) =
                       *(undefined4 *)(lVar4 + 4 + uVar16 * 4);
                  *(undefined4 *)(lVar23 + -8 + uVar16 * 4) =
                       *(undefined4 *)(lVar4 + 8 + uVar16 * 4);
                  *(undefined4 *)(lVar23 + -4 + uVar16 * 4) =
                       *(undefined4 *)(lVar4 + 0xc + uVar16 * 4);
                  *(undefined4 *)(lVar23 + uVar16 * 4) = *(undefined4 *)(lVar4 + 0x10 + uVar16 * 4);
                  uVar10 = uVar16 + 4;
                } while ((uVar21 & 0xfffffffffffffffc) != uVar16 + 4);
                lVar15 = uVar16 + 5;
              }
              if (uVar11 != 0) {
                uVar10 = 0;
                do {
                  *(undefined4 *)(lVar4 + (lVar15 + uVar24) * 4 + uVar10 * 4) =
                       *(undefined4 *)(lVar4 + lVar15 * 4 + uVar10 * 4);
                  uVar10 = uVar10 + 1;
                } while (uVar11 != uVar10);
              }
            }
            else {
              if (uVar9 - 8 == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = 0;
                lVar15 = -(uVar14 & 0xfffffffffffffffe);
                do {
                  puVar1 = (undefined8 *)(lVar4 + 4 + uVar10 * 4);
                  uVar6 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar4 + 0x14 + uVar10 * 4);
                  uVar7 = *puVar2;
                  uVar8 = puVar2[1];
                  puVar2 = (undefined8 *)(lVar18 + -0x30 + uVar10 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar6;
                  puVar1 = (undefined8 *)(lVar18 + -0x20 + uVar10 * 4);
                  *puVar1 = uVar7;
                  puVar1[1] = uVar8;
                  puVar1 = (undefined8 *)(lVar4 + 0x24 + uVar10 * 4);
                  uVar6 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar4 + 0x34 + uVar10 * 4);
                  uVar7 = *puVar2;
                  uVar8 = puVar2[1];
                  puVar2 = (undefined8 *)(lVar18 + -0x10 + uVar10 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar6;
                  puVar1 = (undefined8 *)(lVar18 + uVar10 * 4);
                  *puVar1 = uVar7;
                  puVar1[1] = uVar8;
                  uVar10 = uVar10 + 0x10;
                  lVar15 = lVar15 + 2;
                } while (lVar15 != 0);
                if ((uVar14 & 1) == 0) goto LAB_0137b7c0;
              }
              uVar10 = uVar10 | 1;
              puVar1 = (undefined8 *)(lVar4 + uVar10 * 4);
              uVar6 = puVar1[1];
              puVar2 = (undefined8 *)(lVar4 + 0x10 + uVar10 * 4);
              uVar7 = *puVar2;
              uVar8 = puVar2[1];
              lVar15 = uVar10 + uVar20 * uVar19;
              puVar2 = (undefined8 *)(lVar4 + lVar15 * 4);
              *puVar2 = *puVar1;
              puVar2[1] = uVar6;
              puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar15 * 4);
              *puVar1 = uVar7;
              puVar1[1] = uVar8;
            }
LAB_0137b7c0:
            uVar20 = uVar20 + 1;
            lVar17 = lVar17 + 1;
            lVar18 = lVar18 + uVar19 * 4;
            lVar23 = lVar23 + uVar19 * 4;
            uVar24 = uVar24 + uVar19;
          } while (uVar20 != uVar13);
        }
        else {
          uVar14 = (uVar9 - 8 >> 3) + 1;
          lVar18 = lVar4 + uVar19 * 4 + 0x34;
          uVar24 = 1;
          lVar17 = 0;
          uVar21 = uVar22;
          do {
            if ((uVar22 <= lVar4 + (uVar19 + 1 + lVar17 * uVar19) * 4) ||
               (uVar11 = 1, lVar4 + (lVar17 * uVar19 + uVar19 * 2) * 4 <= lVar4 + 4U)) {
              uVar11 = uVar9 + 1;
              if (uVar9 - 8 == 0) {
                uVar20 = 0;
              }
              else {
                uVar20 = 0;
                lVar23 = -(uVar14 & 0xfffffffffffffffe);
                do {
                  puVar1 = (undefined8 *)(lVar4 + 4 + uVar20 * 4);
                  uVar6 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar4 + 0x14 + uVar20 * 4);
                  uVar7 = *puVar2;
                  uVar8 = puVar2[1];
                  puVar2 = (undefined8 *)(lVar18 + -0x30 + uVar20 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar6;
                  puVar1 = (undefined8 *)(lVar18 + -0x20 + uVar20 * 4);
                  *puVar1 = uVar7;
                  puVar1[1] = uVar8;
                  puVar1 = (undefined8 *)(lVar4 + 0x24 + uVar20 * 4);
                  uVar6 = puVar1[1];
                  puVar2 = (undefined8 *)(lVar4 + 0x34 + uVar20 * 4);
                  uVar7 = *puVar2;
                  uVar8 = puVar2[1];
                  puVar2 = (undefined8 *)(lVar18 + -0x10 + uVar20 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar6;
                  puVar1 = (undefined8 *)(lVar18 + uVar20 * 4);
                  *puVar1 = uVar7;
                  puVar1[1] = uVar8;
                  uVar20 = uVar20 + 0x10;
                  lVar23 = lVar23 + 2;
                } while (lVar23 != 0);
                if ((uVar14 & 1) == 0) goto LAB_0137ba2d;
              }
              uVar20 = uVar20 | 1;
              puVar1 = (undefined8 *)(lVar4 + uVar20 * 4);
              uVar6 = puVar1[1];
              puVar2 = (undefined8 *)(lVar4 + 0x10 + uVar20 * 4);
              uVar7 = *puVar2;
              uVar8 = puVar2[1];
              lVar23 = uVar20 + uVar24 * uVar19;
              puVar2 = (undefined8 *)(lVar4 + lVar23 * 4);
              *puVar2 = *puVar1;
              puVar2[1] = uVar6;
              puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar23 * 4);
              *puVar1 = uVar7;
              puVar1[1] = uVar8;
            }
LAB_0137ba2d:
            uVar12 = uVar3 - (int)uVar11;
            uVar10 = ~uVar11;
            uVar20 = (ulonglong)uVar12 & 3;
            if ((uVar12 & 3) != 0) {
              do {
                *(undefined4 *)(uVar21 + uVar11 * 4) = *(undefined4 *)(lVar4 + uVar11 * 4);
                uVar11 = uVar11 + 1;
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
            }
            if (2 < uVar10 + uVar19) {
              do {
                *(undefined4 *)(uVar21 + uVar11 * 4) = *(undefined4 *)(lVar4 + uVar11 * 4);
                *(undefined4 *)(uVar21 + 4 + uVar11 * 4) = *(undefined4 *)(lVar4 + 4 + uVar11 * 4);
                *(undefined4 *)(uVar21 + 8 + uVar11 * 4) = *(undefined4 *)(lVar4 + 8 + uVar11 * 4);
                *(undefined4 *)(uVar21 + 0xc + uVar11 * 4) =
                     *(undefined4 *)(lVar4 + 0xc + uVar11 * 4);
                uVar11 = uVar11 + 4;
              } while (uVar19 != uVar11);
            }
            uVar24 = uVar24 + 1;
            lVar17 = lVar17 + 1;
            lVar18 = lVar18 + uVar19 * 4;
            uVar21 = uVar21 + uVar19 * 4;
          } while (uVar24 != uVar13);
        }
      }
    }
  }
  return;
}


