// Function: FUN_015c1c40
// Address: 015c1c40
// Size: 1605 bytes
// Class: GNData


void FUN_015c1c40(uint param_1,int param_2,undefined8 param_3,int *param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  int *piVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  
  uVar21 = param_1 * 2 + 1;
  if (*(int *)(unaff_RDI + 0x20) < (int)uVar21) {
    if (*(longlong *)(unaff_RDI + 0x10) != 0) {
      FUN_00e83070();
      *(undefined8 *)(unaff_RDI + 0x10) = 0;
    }
    uVar9 = FUN_00e83010();
    *(ulonglong *)(unaff_RDI + 0x10) = uVar9;
    *(uint *)(unaff_RDI + 0x20) = uVar21;
    iVar4 = *(int *)(unaff_RDI + 0x24);
  }
  else {
    uVar9 = *(ulonglong *)(unaff_RDI + 0x10);
    iVar4 = *(int *)(unaff_RDI + 0x24);
  }
  if (iVar4 < param_2) {
    if (*(longlong *)(unaff_RDI + 0x18) != 0) {
      FUN_00e83070();
      *(undefined8 *)(unaff_RDI + 0x18) = 0;
    }
    lVar10 = FUN_00e83010();
    *(longlong *)(unaff_RDI + 0x18) = lVar10;
    *(int *)(unaff_RDI + 0x24) = param_2;
  }
  else {
    lVar10 = *(longlong *)(unaff_RDI + 0x18);
  }
  iVar4 = param_2 - param_1;
  if ((int)param_1 < iVar4) {
    uVar24 = (ulonglong)(int)param_1;
    if ((int)uVar21 < 1) {
      lVar22 = 0;
      do {
        _qsort(FUN_00e8b5c0,4,(size_t)param_3,param_4);
        *(undefined4 *)(lVar10 + uVar24 * 4 + lVar22 * 4) = *(undefined4 *)(uVar9 + uVar24 * 4);
        lVar22 = lVar22 + 1;
      } while ((param_2 - uVar21) + 1 != (int)lVar22);
    }
    else {
      uVar23 = (ulonglong)uVar21;
      if (uVar21 < 8) {
        iVar8 = 0;
        uVar20 = uVar24;
        do {
          lVar22 = *unaff_RSI;
          if (uVar23 - 1 < 3) {
            uVar17 = 0;
          }
          else {
            lVar13 = lVar22 + (longlong)iVar8 * 4;
            uVar17 = 0;
            do {
              *(undefined4 *)(uVar9 + uVar17 * 4) = *(undefined4 *)(lVar13 + uVar17 * 4);
              *(undefined4 *)(uVar9 + 4 + uVar17 * 4) = *(undefined4 *)(lVar13 + 4 + uVar17 * 4);
              *(undefined4 *)(uVar9 + 8 + uVar17 * 4) = *(undefined4 *)(lVar13 + 8 + uVar17 * 4);
              *(undefined4 *)(uVar9 + 0xc + uVar17 * 4) = *(undefined4 *)(lVar13 + 0xc + uVar17 * 4)
              ;
              uVar17 = uVar17 + 4;
            } while ((uVar21 & 0xfffffffc) != uVar17);
          }
          lVar13 = 0;
          do {
            *(undefined4 *)(uVar9 + uVar17 * 4 + lVar13) =
                 *(undefined4 *)(lVar22 + (uVar17 + (longlong)iVar8) * 4 + lVar13);
            lVar13 = lVar13 + 4;
          } while ((ulonglong)(param_1 & 1) * 8 + 4 != lVar13);
          _qsort(FUN_00e8b5c0,4,(size_t)param_3,param_4);
          *(undefined4 *)(lVar10 + uVar20 * 4) = *(undefined4 *)(uVar9 + uVar24 * 4);
          uVar20 = uVar20 + 1;
          iVar8 = iVar8 + 1;
        } while (iVar4 != (int)uVar20);
      }
      else {
        piVar11 = (int *)(ulonglong)(uVar21 & 0xfffffff8);
        uVar17 = ((ulonglong)(piVar11 + -2) >> 3) + 1;
        uVar19 = (ulonglong)((uint)uVar17 & 3);
        iVar8 = 0;
        uVar20 = uVar24;
        do {
          lVar13 = (longlong)iVar8;
          lVar22 = *unaff_RSI;
          uVar1 = lVar22 + lVar13 * 4;
          if ((uVar9 < lVar22 + (lVar13 + uVar23) * 4) && (uVar1 < uVar9 + uVar23 * 4)) {
            piVar18 = (int *)0x0;
          }
          else {
            if ((int *)((longlong)&MACH_HEADER.sizeofcmds + 3) < piVar11 + -2) {
              lVar12 = lVar22 + lVar13 * 4;
              lVar15 = 0;
              lVar16 = -(uVar17 & 0xfffffffffffffffc);
              do {
                puVar3 = (undefined8 *)(lVar12 + lVar15 * 4);
                uVar5 = puVar3[1];
                puVar2 = (undefined8 *)(lVar12 + 0x10 + lVar15 * 4);
                uVar6 = *puVar2;
                uVar7 = puVar2[1];
                puVar2 = (undefined8 *)(uVar9 + lVar15 * 4);
                *puVar2 = *puVar3;
                puVar2[1] = uVar5;
                puVar2 = (undefined8 *)(uVar9 + 0x10 + lVar15 * 4);
                *puVar2 = uVar6;
                puVar2[1] = uVar7;
                puVar2 = (undefined8 *)(lVar12 + 0x20 + lVar15 * 4);
                uVar5 = puVar2[1];
                puVar3 = (undefined8 *)(lVar12 + 0x30 + lVar15 * 4);
                uVar6 = *puVar3;
                uVar7 = puVar3[1];
                puVar3 = (undefined8 *)(uVar9 + 0x20 + lVar15 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar5;
                puVar2 = (undefined8 *)(uVar9 + 0x30 + lVar15 * 4);
                *puVar2 = uVar6;
                puVar2[1] = uVar7;
                puVar2 = (undefined8 *)(lVar12 + 0x40 + lVar15 * 4);
                uVar5 = puVar2[1];
                puVar3 = (undefined8 *)(lVar12 + 0x50 + lVar15 * 4);
                uVar6 = *puVar3;
                uVar7 = puVar3[1];
                puVar3 = (undefined8 *)(uVar9 + 0x40 + lVar15 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar5;
                puVar2 = (undefined8 *)(uVar9 + 0x50 + lVar15 * 4);
                *puVar2 = uVar6;
                puVar2[1] = uVar7;
                puVar3 = (undefined8 *)(lVar12 + 0x60 + lVar15 * 4);
                uVar5 = puVar3[1];
                puVar2 = (undefined8 *)(lVar12 + 0x70 + lVar15 * 4);
                uVar6 = *puVar2;
                uVar7 = puVar2[1];
                puVar2 = (undefined8 *)(uVar9 + 0x60 + lVar15 * 4);
                *puVar2 = *puVar3;
                puVar2[1] = uVar5;
                puVar2 = (undefined8 *)(uVar9 + 0x70 + lVar15 * 4);
                *puVar2 = uVar6;
                puVar2[1] = uVar7;
                lVar15 = lVar15 + 0x20;
                lVar16 = lVar16 + 4;
              } while (lVar16 != 0);
            }
            else {
              lVar15 = 0;
            }
            piVar18 = piVar11;
            if (uVar19 != 0) {
              lVar12 = uVar9 + 0x10 + lVar15 * 4;
              lVar16 = lVar22 + (lVar15 + lVar13) * 4;
              lVar15 = 0;
              do {
                puVar3 = (undefined8 *)(lVar16 + lVar15);
                uVar5 = puVar3[1];
                puVar2 = (undefined8 *)(lVar16 + 0x10 + lVar15);
                uVar6 = *puVar2;
                uVar7 = puVar2[1];
                puVar2 = (undefined8 *)(lVar12 + -0x10 + lVar15);
                *puVar2 = *puVar3;
                puVar2[1] = uVar5;
                puVar2 = (undefined8 *)(lVar12 + lVar15);
                *puVar2 = uVar6;
                puVar2[1] = uVar7;
                lVar15 = lVar15 + 0x20;
              } while (uVar19 << 5 != lVar15);
            }
          }
          lVar12 = -(ulonglong)(uVar21 & 3);
          lVar16 = 1;
          piVar14 = piVar18;
          do {
            lVar15 = lVar16;
            *(undefined4 *)(uVar9 + (longlong)piVar14 * 4) =
                 *(undefined4 *)(uVar1 + (longlong)piVar14 * 4);
            piVar14 = (int *)((longlong)piVar14 + 1);
            lVar12 = lVar12 + 1;
            lVar16 = lVar15 + 1;
          } while (lVar12 != 0);
          if (2 < ~(ulonglong)piVar18 + uVar23) {
            lVar12 = uVar9 + 0xc + (longlong)piVar18 * 4;
            lVar13 = lVar22 + (lVar13 + (longlong)piVar18) * 4;
            do {
              *(undefined4 *)(lVar12 + -0xc + lVar15 * 4) = *(undefined4 *)(lVar13 + lVar15 * 4);
              *(undefined4 *)(lVar12 + -8 + lVar15 * 4) = *(undefined4 *)(lVar13 + 4 + lVar15 * 4);
              *(undefined4 *)(lVar12 + -4 + lVar15 * 4) = *(undefined4 *)(lVar13 + 8 + lVar15 * 4);
              *(undefined4 *)(lVar12 + lVar15 * 4) = *(undefined4 *)(lVar13 + 0xc + lVar15 * 4);
              lVar15 = lVar15 + 4;
            } while (uVar23 - (longlong)piVar18 != lVar15);
          }
          _qsort(FUN_00e8b5c0,4,(size_t)lVar22,piVar18);
          *(undefined4 *)(lVar10 + uVar20 * 4) = *(undefined4 *)(uVar9 + uVar24 * 4);
          uVar20 = uVar20 + 1;
          iVar8 = iVar8 + 1;
        } while (iVar4 != (int)uVar20);
      }
    }
    lVar22 = *unaff_RSI;
    uVar23 = (ulonglong)iVar4;
    uVar9 = uVar23 - uVar24;
    if ((7 < uVar9) &&
       ((lVar10 + uVar23 * 4 <= lVar22 + uVar24 * 4 || (lVar22 + uVar23 * 4 <= lVar10 + uVar24 * 4))
       )) {
      uVar17 = uVar9 & 0xfffffffffffffff8;
      uVar20 = (uVar17 - 8 >> 3) + 1;
      uVar19 = (ulonglong)((uint)uVar20 & 3);
      if (uVar17 - 8 < 0x18) {
        lVar16 = 0;
      }
      else {
        lVar13 = lVar22 + uVar24 * 4;
        lVar12 = lVar10 + uVar24 * 4;
        lVar15 = -(uVar20 & 0xfffffffffffffffc);
        lVar16 = 0;
        do {
          puVar2 = (undefined8 *)(lVar12 + lVar16 * 4);
          uVar5 = puVar2[1];
          puVar3 = (undefined8 *)(lVar12 + 0x10 + lVar16 * 4);
          uVar6 = *puVar3;
          uVar7 = puVar3[1];
          puVar3 = (undefined8 *)(lVar13 + lVar16 * 4);
          *puVar3 = *puVar2;
          puVar3[1] = uVar5;
          puVar2 = (undefined8 *)(lVar13 + 0x10 + lVar16 * 4);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          puVar2 = (undefined8 *)(lVar12 + 0x20 + lVar16 * 4);
          uVar5 = puVar2[1];
          puVar3 = (undefined8 *)(lVar12 + 0x30 + lVar16 * 4);
          uVar6 = *puVar3;
          uVar7 = puVar3[1];
          puVar3 = (undefined8 *)(lVar13 + 0x20 + lVar16 * 4);
          *puVar3 = *puVar2;
          puVar3[1] = uVar5;
          puVar2 = (undefined8 *)(lVar13 + 0x30 + lVar16 * 4);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          puVar2 = (undefined8 *)(lVar12 + 0x40 + lVar16 * 4);
          uVar5 = puVar2[1];
          puVar3 = (undefined8 *)(lVar12 + 0x50 + lVar16 * 4);
          uVar6 = *puVar3;
          uVar7 = puVar3[1];
          puVar3 = (undefined8 *)(lVar13 + 0x40 + lVar16 * 4);
          *puVar3 = *puVar2;
          puVar3[1] = uVar5;
          puVar2 = (undefined8 *)(lVar13 + 0x50 + lVar16 * 4);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          puVar3 = (undefined8 *)(lVar12 + 0x60 + lVar16 * 4);
          uVar5 = puVar3[1];
          puVar2 = (undefined8 *)(lVar12 + 0x70 + lVar16 * 4);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          puVar2 = (undefined8 *)(lVar13 + 0x60 + lVar16 * 4);
          *puVar2 = *puVar3;
          puVar2[1] = uVar5;
          puVar2 = (undefined8 *)(lVar13 + 0x70 + lVar16 * 4);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          lVar16 = lVar16 + 0x20;
          lVar15 = lVar15 + 4;
        } while (lVar15 != 0);
      }
      if (uVar19 != 0) {
        lVar13 = lVar22 + (lVar16 + uVar24) * 4;
        lVar12 = lVar10 + (lVar16 + uVar24) * 4;
        lVar16 = 0;
        do {
          puVar3 = (undefined8 *)(lVar12 + lVar16);
          uVar5 = puVar3[1];
          puVar2 = (undefined8 *)(lVar12 + 0x10 + lVar16);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          puVar2 = (undefined8 *)(lVar13 + lVar16);
          *puVar2 = *puVar3;
          puVar2[1] = uVar5;
          puVar2 = (undefined8 *)(lVar13 + 0x10 + lVar16);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          lVar16 = lVar16 + 0x20;
        } while (uVar19 << 5 != lVar16);
      }
      if (uVar9 == uVar17) {
        return;
      }
      uVar24 = uVar24 + uVar17;
    }
    uVar21 = iVar4 - (int)uVar24;
    uVar20 = ~uVar24;
    uVar9 = (ulonglong)uVar21 & 3;
    if ((uVar21 & 3) != 0) {
      do {
        *(undefined4 *)(lVar22 + uVar24 * 4) = *(undefined4 *)(lVar10 + uVar24 * 4);
        uVar24 = uVar24 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (2 < uVar20 + uVar23) {
      do {
        *(undefined4 *)(lVar22 + uVar24 * 4) = *(undefined4 *)(lVar10 + uVar24 * 4);
        *(undefined4 *)(lVar22 + 4 + uVar24 * 4) = *(undefined4 *)(lVar10 + 4 + uVar24 * 4);
        *(undefined4 *)(lVar22 + 8 + uVar24 * 4) = *(undefined4 *)(lVar10 + 8 + uVar24 * 4);
        *(undefined4 *)(lVar22 + 0xc + uVar24 * 4) = *(undefined4 *)(lVar10 + 0xc + uVar24 * 4);
        uVar24 = uVar24 + 4;
      } while (uVar23 != uVar24);
    }
  }
  return;
}


