// Function: FUN_00b27ba0
// Address: 00b27ba0
// Size: 1256 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00b27ba0(double *param_1,double *param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  size_t sVar11;
  uint uVar12;
  double *pdVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  
  sVar11 = (size_t)param_1;
  uVar14 = (ulonglong)*(uint *)(unaff_RDI + 4);
  uVar9 = (uint)unaff_RSI;
  if (uVar14 == 0) {
    dVar24 = 0.0;
  }
  else {
    plVar8 = *(longlong **)(unaff_RDI + 0x10);
    lVar2 = uVar14 * 8;
    dVar24 = 0.0;
    lVar20 = 0;
    uVar21 = 0;
    do {
      uVar7 = *(uint *)(plVar8[4] + uVar21 * 4);
      if (uVar7 != 0) {
        uVar18 = plVar8[2];
        if (uVar18 >> 0x20 == 0) {
          uVar10 = (uVar18 & 0xffffffff) / uVar14;
          if (uVar18 < uVar14 * unaff_RSI) goto LAB_00b27c84;
LAB_00b27ce0:
          uVar18 = uVar10 - unaff_RSI;
          dVar23 = 0.0;
          if (uVar18 < uVar10) {
            lVar17 = *plVar8;
            dVar23 = 0.0;
            for (uVar16 = (ulonglong)(uVar9 & 3); uVar16 != 0; uVar16 = uVar16 - 1) {
              dVar4 = *(double *)(lVar17 + (uVar18 * uVar14 + uVar21) * 8);
              dVar23 = dVar23 + dVar4 * dVar4;
              uVar18 = uVar18 + 1;
            }
            param_1 = (double *)0x0;
            if (2 < unaff_RSI - 1U) {
              lVar19 = uVar18 + 3;
              lVar15 = uVar18 + 2;
              lVar1 = uVar18 + 1;
              param_1 = (double *)(uVar14 * uVar18 + uVar21);
              do {
                dVar4 = *(double *)(lVar17 + (longlong)param_1 * 8);
                dVar5 = *(double *)(lVar17 + lVar1 * lVar2 + lVar20);
                dVar6 = *(double *)(lVar17 + lVar15 * lVar2 + lVar20);
                dVar3 = *(double *)(lVar17 + lVar19 * lVar2 + lVar20);
                dVar23 = dVar3 * dVar3 + dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4 + dVar23;
                uVar18 = uVar18 + 4;
                lVar17 = lVar17 + uVar14 * 0x20;
              } while (uVar18 != uVar10);
            }
          }
        }
        else {
          uVar10 = uVar18 / uVar14;
          if (uVar14 * unaff_RSI <= uVar18) goto LAB_00b27ce0;
LAB_00b27c84:
          dVar23 = 0.0;
          if (uVar14 <= uVar18) {
            uVar18 = 1;
            if (1 < uVar10) {
              uVar18 = uVar10;
            }
            param_1 = (double *)(uVar18 - 1);
            uVar16 = (ulonglong)((uint)uVar18 & 3);
            if ((double *)((longlong)&MACH_HEADER.magic + 2) < param_1) {
              uVar18 = uVar18 & 0xfffffffffffffffc;
              param_1 = (double *)(*plVar8 + uVar21 * 8);
              dVar23 = 0.0;
              lVar17 = 0;
              do {
                dVar23 = param_1[uVar14 * 3] * param_1[uVar14 * 3] +
                         param_1[uVar14 * 2] * param_1[uVar14 * 2] +
                         param_1[uVar14] * param_1[uVar14] + *param_1 * *param_1 + dVar23;
                lVar17 = lVar17 + 4;
                param_1 = param_1 + uVar14 * 4;
                uVar18 = uVar18 - 4;
              } while (uVar18 != 0);
            }
            else {
              dVar23 = 0.0;
              lVar17 = 0;
            }
            if (uVar16 != 0) {
              param_1 = (double *)(*plVar8 + (lVar17 * uVar14 + uVar21) * 8);
              do {
                dVar23 = dVar23 + *param_1 * *param_1;
                param_1 = param_1 + uVar14;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
          }
          uVar18 = plVar8[1];
          lVar17 = (uVar10 - unaff_RSI) + uVar18;
          if (CARRY8(uVar10 - unaff_RSI,uVar18)) {
            lVar19 = *plVar8;
            uVar12 = uVar9 - (int)uVar10;
            pdVar13 = (double *)((ulonglong)uVar12 & 3);
            param_1 = pdVar13;
            if ((uVar12 & 3) != 0) {
              do {
                dVar4 = *(double *)(lVar19 + (lVar17 * uVar14 + uVar21) * 8);
                dVar23 = dVar23 + dVar4 * dVar4;
                lVar17 = lVar17 + 1;
                pdVar13 = (double *)((longlong)pdVar13 + -1);
                param_1 = (double *)0x0;
              } while (pdVar13 != (double *)0x0);
            }
            if (2 < ~uVar10 + unaff_RSI) {
              lVar15 = uVar18 - lVar17;
              param_1 = (double *)((lVar17 + 2) * lVar2 + lVar20);
              do {
                dVar4 = *(double *)(lVar19 + (lVar17 * uVar14 + uVar21) * 8);
                dVar5 = *(double *)(lVar19 + (lVar17 + 1) * lVar2 + lVar20);
                dVar6 = *(double *)(lVar19 + (lVar17 + 3) * lVar2 + lVar20);
                dVar23 = dVar6 * dVar6 +
                         *(double *)(lVar19 + (longlong)param_1) *
                         *(double *)(lVar19 + (longlong)param_1) +
                         dVar5 * dVar5 + dVar4 * dVar4 + dVar23;
                lVar19 = lVar19 + uVar14 * 0x20;
                lVar15 = lVar15 + -4;
              } while (lVar15 != 0);
            }
          }
        }
        if (uVar7 < 0xd) {
          if ((0x1e30U >> (uVar7 & 0x1f) & 1) == 0) {
            if (uVar7 == 6) {
              dVar23 = dVar23 + dVar23;
            }
          }
          else {
            dVar23 = dVar23 * DAT_023d5988;
          }
        }
        dVar24 = dVar24 + dVar23;
      }
      sVar11 = (size_t)param_1;
      uVar21 = uVar21 + 1;
      lVar20 = lVar20 + 8;
    } while (uVar21 != uVar14);
  }
  auVar22._8_4_ = (int)((ulonglong)unaff_RSI >> 0x20);
  auVar22._0_8_ = unaff_RSI;
  auVar22._12_4_ = _UNK_023e16c4;
  dVar24 = dVar24 / ((auVar22._8_8_ - _UNK_023e16d8) +
                    ((double)CONCAT44(_DAT_023e16c0,uVar9) - _DAT_023e16d0));
  if (param_2 == (double *)0x0) {
    if (_DAT_028a0eb0 <= dVar24) {
      lVar2 = *(longlong *)(unaff_RDI + 0x10);
      if (*(int *)(lVar2 + 200) == 0) {
        lVar20 = *(longlong *)(lVar2 + 0xa0);
        if (lVar20 == *(longlong *)(lVar2 + 0x98)) {
          pdVar13 = *(double **)(lVar2 + 0x88);
          dVar23 = pdVar13[1];
          *(double *)(lVar2 + 0x88) = dVar23;
          if (dVar23 == 0.0) {
            *(longlong *)(lVar2 + 0x90) = lVar2 + 0x88;
          }
        }
        else {
          pdVar13 = _malloc(sVar11);
          if (pdVar13 == (double *)0x0) {
            return 1;
          }
          *(longlong *)(lVar2 + 0xa0) = lVar20 + 1;
        }
        *pdVar13 = dVar24;
        pdVar13[1] = 0.0;
        **(undefined8 **)(lVar2 + 0x90) = pdVar13;
        *(double **)(*(longlong *)(unaff_RDI + 0x10) + 0x90) = pdVar13 + 1;
      }
      else {
        uVar14 = 1000;
        uVar21 = 0;
        do {
          while (uVar18 = uVar21 + uVar14 >> 1, *(double *)(&DAT_028a0eb0 + uVar18 * 8) <= dVar24) {
            uVar21 = uVar18;
            if (uVar14 - uVar18 == 1) goto LAB_00b27ffc;
          }
          lVar20 = uVar18 - uVar21;
          uVar14 = uVar18;
          uVar18 = uVar21;
        } while (lVar20 != 1);
LAB_00b27ffc:
        plVar8 = (longlong *)(*(longlong *)(lVar2 + 0xd0) + uVar18 * 8);
        *plVar8 = *plVar8 + 1;
      }
    }
  }
  else {
    *param_2 = dVar24;
  }
  return 0;
}


