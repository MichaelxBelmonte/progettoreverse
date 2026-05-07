// Function: FUN_00b78080
// Address: 00b78080
// Size: 2249 bytes
// Class: GNFilePath


void FUN_00b78080(int param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  undefined8 *unaff_RSI;
  longlong lVar11;
  longlong unaff_RDI;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if ((*(float *)(unaff_RDI + 0x90) != 0.0) || (NAN(*(float *)(unaff_RDI + 0x90)))) {
    iVar7 = FUN_00b33130();
    if ((iVar7 == 2) && (iVar7 = FUN_00b33120(), iVar7 == 2)) {
      pfVar14 = (float *)unaff_RSI[1];
      pfVar8 = (float *)param_2[1];
      fVar3 = DAT_02394298;
      fVar4 = DAT_023b1d84;
      dVar5 = DAT_023d5f50;
      dVar6 = DAT_023d8518;
    }
    else {
      iVar7 = FUN_00b33130();
      if (iVar7 != 1) {
        return;
      }
      iVar7 = FUN_00b33120();
      if (iVar7 != 1) {
        return;
      }
      pfVar14 = (float *)0x0;
      pfVar8 = (float *)0x0;
      fVar3 = DAT_02394298;
      fVar4 = DAT_023b1d84;
      dVar5 = DAT_023d5f50;
      dVar6 = DAT_023d8518;
    }
    DAT_02394298 = fVar3;
    DAT_023b1d84 = fVar4;
    DAT_023d5f50 = dVar5;
    DAT_023d8518 = dVar6;
    if (0 < param_1) {
      pfVar13 = (float *)*unaff_RSI;
      pfVar12 = (float *)*param_2;
      iVar7 = 0;
      do {
        fVar17 = *pfVar13;
        if (pfVar14 != (float *)0x0) {
          fVar17 = fVar17 + *pfVar14;
        }
        fVar24 = fVar3;
        if (fVar17 <= fVar3) {
          fVar24 = fVar17;
        }
        fVar17 = fVar4;
        if (fVar4 <= fVar24) {
          fVar17 = fVar24;
        }
        dVar23 = (double)fVar17;
        if (dVar23 <= dVar6) {
          fVar24 = fVar17;
          if (dVar23 < dVar5) goto LAB_00b785d1;
LAB_00b785fa:
          fVar24 = fVar17 * *(float *)(unaff_RDI + 0x90);
          if (pfVar8 == (float *)0x0) goto LAB_00b78140;
LAB_00b7860e:
          fVar17 = 0.0;
          lVar11 = -0x100;
          fVar21 = 0.0;
          do {
            lVar2 = *(longlong *)(unaff_RDI + 0x1c8 + lVar11);
            iVar1 = *(int *)(unaff_RDI + 0x1d4 + lVar11);
            fVar25 = *(float *)(lVar2 + (longlong)iVar1 * 4);
            fVar18 = *(float *)(unaff_RDI + 0x1bc + lVar11) * *(float *)(unaff_RDI + 0x1c0 + lVar11)
                     + *(float *)(unaff_RDI + 0x1c4 + lVar11) * fVar25;
            *(float *)(unaff_RDI + 0x1bc + lVar11) = fVar18;
            *(float *)(lVar2 + (longlong)iVar1 * 4) =
                 fVar18 * *(float *)(unaff_RDI + 0x1b8 + lVar11) + fVar24;
            iVar10 = 0;
            iVar9 = iVar1 + 1;
            if (*(int *)(unaff_RDI + 0x1d0 + lVar11) <= iVar1 + 1) {
              iVar9 = iVar10;
            }
            *(int *)(unaff_RDI + 0x1d4 + lVar11) = iVar9;
            lVar2 = *(longlong *)(unaff_RDI + 0x2c8 + lVar11);
            iVar1 = *(int *)(unaff_RDI + 0x2d4 + lVar11);
            fVar18 = *(float *)(lVar2 + (longlong)iVar1 * 4);
            fVar19 = *(float *)(unaff_RDI + 700 + lVar11) * *(float *)(unaff_RDI + 0x2c0 + lVar11) +
                     *(float *)(unaff_RDI + 0x2c4 + lVar11) * fVar18;
            *(float *)(unaff_RDI + 700 + lVar11) = fVar19;
            *(float *)(lVar2 + (longlong)iVar1 * 4) =
                 fVar19 * *(float *)(unaff_RDI + 0x2b8 + lVar11) + fVar24;
            iVar9 = iVar1 + 1;
            if (*(int *)(unaff_RDI + 0x2d0 + lVar11) <= iVar1 + 1) {
              iVar9 = iVar7;
            }
            fVar21 = fVar21 + fVar25;
            *(int *)(unaff_RDI + 0x2d4 + lVar11) = iVar9;
            fVar17 = fVar17 + fVar18;
            lVar11 = lVar11 + 0x20;
          } while (lVar11 != 0);
          iVar1 = *(int *)(unaff_RDI + 0x2cc);
          fVar24 = *(float *)(*(longlong *)(unaff_RDI + 0x2c0) + (longlong)iVar1 * 4);
          *(float *)(*(longlong *)(unaff_RDI + 0x2c0) + (longlong)iVar1 * 4) =
               *(float *)(unaff_RDI + 0x2b8) * fVar24 + fVar21;
          iVar9 = iVar1 + 1;
          if (*(int *)(unaff_RDI + 0x2c8) <= iVar1 + 1) {
            iVar9 = iVar10;
          }
          *(int *)(unaff_RDI + 0x2cc) = iVar9;
          iVar1 = *(int *)(unaff_RDI + 0x32c);
          fVar25 = *(float *)(*(longlong *)(unaff_RDI + 800) + (longlong)iVar1 * 4);
          *(float *)(*(longlong *)(unaff_RDI + 800) + (longlong)iVar1 * 4) =
               *(float *)(unaff_RDI + 0x318) * fVar25 + fVar17;
          iVar9 = iVar1 + 1;
          if (*(int *)(unaff_RDI + 0x328) <= iVar1 + 1) {
            iVar9 = iVar7;
          }
          fVar24 = fVar24 - fVar21;
          *(int *)(unaff_RDI + 0x32c) = iVar9;
          iVar1 = *(int *)(unaff_RDI + 0x2e4);
          fVar21 = *(float *)(*(longlong *)(unaff_RDI + 0x2d8) + (longlong)iVar1 * 4);
          *(float *)(*(longlong *)(unaff_RDI + 0x2d8) + (longlong)iVar1 * 4) =
               *(float *)(unaff_RDI + 0x2d0) * fVar21 + fVar24;
          fVar25 = fVar25 - fVar17;
          iVar9 = iVar1 + 1;
          if (*(int *)(unaff_RDI + 0x2e0) <= iVar1 + 1) {
            iVar9 = iVar10;
          }
          *(int *)(unaff_RDI + 0x2e4) = iVar9;
          iVar1 = *(int *)(unaff_RDI + 0x344);
          fVar17 = *(float *)(*(longlong *)(unaff_RDI + 0x338) + (longlong)iVar1 * 4);
          *(float *)(*(longlong *)(unaff_RDI + 0x338) + (longlong)iVar1 * 4) =
               *(float *)(unaff_RDI + 0x330) * fVar17 + fVar25;
          iVar9 = iVar1 + 1;
          if (*(int *)(unaff_RDI + 0x340) <= iVar1 + 1) {
            iVar9 = iVar7;
          }
          fVar21 = fVar21 - fVar24;
          *(int *)(unaff_RDI + 0x344) = iVar9;
          iVar1 = *(int *)(unaff_RDI + 0x2fc);
          fVar24 = *(float *)(*(longlong *)(unaff_RDI + 0x2f0) + (longlong)iVar1 * 4);
          *(float *)(*(longlong *)(unaff_RDI + 0x2f0) + (longlong)iVar1 * 4) =
               *(float *)(unaff_RDI + 0x2e8) * fVar24 + fVar21;
          fVar17 = fVar17 - fVar25;
          iVar9 = iVar1 + 1;
          if (*(int *)(unaff_RDI + 0x2f8) <= iVar1 + 1) {
            iVar9 = iVar10;
          }
          *(int *)(unaff_RDI + 0x2fc) = iVar9;
          iVar1 = *(int *)(unaff_RDI + 0x35c);
          fVar25 = *(float *)(*(longlong *)(unaff_RDI + 0x350) + (longlong)iVar1 * 4);
          *(float *)(*(longlong *)(unaff_RDI + 0x350) + (longlong)iVar1 * 4) =
               *(float *)(unaff_RDI + 0x348) * fVar25 + fVar17;
          iVar9 = iVar1 + 1;
          if (*(int *)(unaff_RDI + 0x358) <= iVar1 + 1) {
            iVar9 = iVar7;
          }
          fVar24 = fVar24 - fVar21;
          *(int *)(unaff_RDI + 0x35c) = iVar9;
          iVar1 = *(int *)(unaff_RDI + 0x314);
          fVar21 = *(float *)(*(longlong *)(unaff_RDI + 0x308) + (longlong)iVar1 * 4);
          *(float *)(*(longlong *)(unaff_RDI + 0x308) + (longlong)iVar1 * 4) =
               *(float *)(unaff_RDI + 0x300) * fVar21 + fVar24;
          fVar25 = fVar25 - fVar17;
          iVar9 = iVar1 + 1;
          if (*(int *)(unaff_RDI + 0x310) <= iVar1 + 1) {
            iVar9 = iVar10;
          }
          *(int *)(unaff_RDI + 0x314) = iVar9;
          iVar1 = *(int *)(unaff_RDI + 0x374);
          fVar17 = *(float *)(*(longlong *)(unaff_RDI + 0x368) + (longlong)iVar1 * 4);
          *(float *)(*(longlong *)(unaff_RDI + 0x368) + (longlong)iVar1 * 4) =
               *(float *)(unaff_RDI + 0x360) * fVar17 + fVar25;
          iVar9 = iVar1 + 1;
          if (*(int *)(unaff_RDI + 0x370) <= iVar1 + 1) {
            iVar9 = iVar7;
          }
          fVar21 = fVar21 - fVar24;
          *(int *)(unaff_RDI + 0x374) = iVar9;
          if (pfVar14 == (float *)0x0) goto LAB_00b78549;
          fVar17 = fVar17 - fVar25;
          *pfVar12 = *pfVar13 * *(float *)(unaff_RDI + 0xa0) +
                     *(float *)(unaff_RDI + 0xac) * fVar17 + *(float *)(unaff_RDI + 0xa8) * fVar21 +
                     *pfVar12;
          *pfVar8 = *pfVar14 * *(float *)(unaff_RDI + 0xa0) +
                    fVar21 * *(float *)(unaff_RDI + 0xac) + fVar17 * *(float *)(unaff_RDI + 0xa8) +
                    *pfVar8;
          bVar15 = true;
        }
        else {
          fVar24 = 0.0;
          if (dVar5 <= dVar23) goto LAB_00b785fa;
LAB_00b785d1:
          fVar24 = fVar24 * *(float *)(unaff_RDI + 0x90);
          if (pfVar8 != (float *)0x0) goto LAB_00b7860e;
LAB_00b78140:
          iVar1 = *(int *)(unaff_RDI + 0xd4);
          fVar17 = *(float *)(*(longlong *)(unaff_RDI + 200) + (longlong)iVar1 * 4);
          fVar21 = *(float *)(unaff_RDI + 0xbc) * *(float *)(unaff_RDI + 0xc0) +
                   *(float *)(unaff_RDI + 0xc4) * fVar17;
          *(float *)(unaff_RDI + 0xbc) = fVar21;
          *(float *)(*(longlong *)(unaff_RDI + 200) + (longlong)iVar1 * 4) =
               fVar21 * *(float *)(unaff_RDI + 0xb8) + fVar24;
          iVar9 = iVar1 + 1;
          if (*(int *)(unaff_RDI + 0xd0) <= iVar1 + 1) {
            iVar9 = iVar7;
          }
          *(int *)(unaff_RDI + 0xd4) = iVar9;
          iVar1 = *(int *)(unaff_RDI + 0xf4);
          fVar21 = *(float *)(*(longlong *)(unaff_RDI + 0xe8) + (longlong)iVar1 * 4);
          fVar25 = *(float *)(unaff_RDI + 0xdc) * *(float *)(unaff_RDI + 0xe0) +
                   *(float *)(unaff_RDI + 0xe4) * fVar21;
          *(float *)(unaff_RDI + 0xdc) = fVar25;
          *(float *)(*(longlong *)(unaff_RDI + 0xe8) + (longlong)iVar1 * 4) =
               fVar25 * *(float *)(unaff_RDI + 0xd8) + fVar24;
          iVar9 = iVar1 + 1;
          if (*(int *)(unaff_RDI + 0xf0) <= iVar1 + 1) {
            iVar9 = iVar7;
          }
          *(int *)(unaff_RDI + 0xf4) = iVar9;
          iVar1 = *(int *)(unaff_RDI + 0x114);
          fVar25 = *(float *)(*(longlong *)(unaff_RDI + 0x108) + (longlong)iVar1 * 4);
          fVar18 = *(float *)(unaff_RDI + 0xfc) * *(float *)(unaff_RDI + 0x100) +
                   *(float *)(unaff_RDI + 0x104) * fVar25;
          *(float *)(unaff_RDI + 0xfc) = fVar18;
          *(float *)(*(longlong *)(unaff_RDI + 0x108) + (longlong)iVar1 * 4) =
               fVar18 * *(float *)(unaff_RDI + 0xf8) + fVar24;
          iVar9 = iVar1 + 1;
          if (*(int *)(unaff_RDI + 0x110) <= iVar1 + 1) {
            iVar9 = iVar7;
          }
          *(int *)(unaff_RDI + 0x114) = iVar9;
          iVar1 = *(int *)(unaff_RDI + 0x134);
          fVar18 = *(float *)(*(longlong *)(unaff_RDI + 0x128) + (longlong)iVar1 * 4);
          fVar19 = *(float *)(unaff_RDI + 0x11c) * *(float *)(unaff_RDI + 0x120) +
                   *(float *)(unaff_RDI + 0x124) * fVar18;
          *(float *)(unaff_RDI + 0x11c) = fVar19;
          *(float *)(*(longlong *)(unaff_RDI + 0x128) + (longlong)iVar1 * 4) =
               fVar19 * *(float *)(unaff_RDI + 0x118) + fVar24;
          iVar10 = 0;
          iVar9 = iVar1 + 1;
          if (*(int *)(unaff_RDI + 0x130) <= iVar1 + 1) {
            iVar9 = iVar10;
          }
          *(int *)(unaff_RDI + 0x134) = iVar9;
          iVar1 = *(int *)(unaff_RDI + 0x154);
          fVar19 = *(float *)(*(longlong *)(unaff_RDI + 0x148) + (longlong)iVar1 * 4);
          fVar22 = *(float *)(unaff_RDI + 0x13c) * *(float *)(unaff_RDI + 0x140) +
                   *(float *)(unaff_RDI + 0x144) * fVar19;
          *(float *)(unaff_RDI + 0x13c) = fVar22;
          *(float *)(*(longlong *)(unaff_RDI + 0x148) + (longlong)iVar1 * 4) =
               fVar22 * *(float *)(unaff_RDI + 0x138) + fVar24;
          iVar9 = iVar1 + 1;
          if (*(int *)(unaff_RDI + 0x150) <= iVar1 + 1) {
            iVar9 = iVar10;
          }
          *(int *)(unaff_RDI + 0x154) = iVar9;
          iVar1 = *(int *)(unaff_RDI + 0x174);
          fVar22 = *(float *)(*(longlong *)(unaff_RDI + 0x168) + (longlong)iVar1 * 4);
          fVar16 = *(float *)(unaff_RDI + 0x15c) * *(float *)(unaff_RDI + 0x160) +
                   *(float *)(unaff_RDI + 0x164) * fVar22;
          *(float *)(unaff_RDI + 0x15c) = fVar16;
          *(float *)(*(longlong *)(unaff_RDI + 0x168) + (longlong)iVar1 * 4) =
               fVar16 * *(float *)(unaff_RDI + 0x158) + fVar24;
          iVar9 = iVar1 + 1;
          if (*(int *)(unaff_RDI + 0x170) <= iVar1 + 1) {
            iVar9 = iVar10;
          }
          *(int *)(unaff_RDI + 0x174) = iVar9;
          iVar1 = *(int *)(unaff_RDI + 0x194);
          fVar16 = *(float *)(*(longlong *)(unaff_RDI + 0x188) + (longlong)iVar1 * 4);
          fVar26 = *(float *)(unaff_RDI + 0x17c) * *(float *)(unaff_RDI + 0x180) +
                   *(float *)(unaff_RDI + 0x184) * fVar16;
          *(float *)(unaff_RDI + 0x17c) = fVar26;
          *(float *)(*(longlong *)(unaff_RDI + 0x188) + (longlong)iVar1 * 4) =
               fVar26 * *(float *)(unaff_RDI + 0x178) + fVar24;
          iVar9 = iVar1 + 1;
          if (*(int *)(unaff_RDI + 400) <= iVar1 + 1) {
            iVar9 = iVar7;
          }
          *(int *)(unaff_RDI + 0x194) = iVar9;
          iVar1 = *(int *)(unaff_RDI + 0x1b4);
          fVar26 = *(float *)(*(longlong *)(unaff_RDI + 0x1a8) + (longlong)iVar1 * 4);
          fVar20 = *(float *)(unaff_RDI + 0x19c) * *(float *)(unaff_RDI + 0x1a0) +
                   *(float *)(unaff_RDI + 0x1a4) * fVar26;
          *(float *)(unaff_RDI + 0x19c) = fVar20;
          *(float *)(*(longlong *)(unaff_RDI + 0x1a8) + (longlong)iVar1 * 4) =
               fVar20 * *(float *)(unaff_RDI + 0x198) + fVar24;
          iVar9 = iVar1 + 1;
          if (*(int *)(unaff_RDI + 0x1b0) <= iVar1 + 1) {
            iVar9 = iVar10;
          }
          *(int *)(unaff_RDI + 0x1b4) = iVar9;
          fVar26 = fVar17 + 0.0 + fVar21 + fVar25 + fVar18 + fVar19 + fVar22 + fVar16 + fVar26;
          iVar1 = *(int *)(unaff_RDI + 0x2cc);
          fVar17 = *(float *)(*(longlong *)(unaff_RDI + 0x2c0) + (longlong)iVar1 * 4);
          *(float *)(*(longlong *)(unaff_RDI + 0x2c0) + (longlong)iVar1 * 4) =
               *(float *)(unaff_RDI + 0x2b8) * fVar17 + fVar26;
          iVar9 = iVar1 + 1;
          if (*(int *)(unaff_RDI + 0x2c8) <= iVar1 + 1) {
            iVar9 = iVar10;
          }
          *(int *)(unaff_RDI + 0x2cc) = iVar9;
          fVar17 = fVar17 - fVar26;
          iVar1 = *(int *)(unaff_RDI + 0x2e4);
          fVar24 = *(float *)(*(longlong *)(unaff_RDI + 0x2d8) + (longlong)iVar1 * 4);
          *(float *)(*(longlong *)(unaff_RDI + 0x2d8) + (longlong)iVar1 * 4) =
               *(float *)(unaff_RDI + 0x2d0) * fVar24 + fVar17;
          iVar9 = iVar1 + 1;
          if (*(int *)(unaff_RDI + 0x2e0) <= iVar1 + 1) {
            iVar9 = iVar10;
          }
          *(int *)(unaff_RDI + 0x2e4) = iVar9;
          fVar24 = fVar24 - fVar17;
          iVar1 = *(int *)(unaff_RDI + 0x2fc);
          fVar17 = *(float *)(*(longlong *)(unaff_RDI + 0x2f0) + (longlong)iVar1 * 4);
          *(float *)(*(longlong *)(unaff_RDI + 0x2f0) + (longlong)iVar1 * 4) =
               *(float *)(unaff_RDI + 0x2e8) * fVar17 + fVar24;
          iVar9 = iVar1 + 1;
          if (*(int *)(unaff_RDI + 0x2f8) <= iVar1 + 1) {
            iVar9 = iVar10;
          }
          *(int *)(unaff_RDI + 0x2fc) = iVar9;
          fVar17 = fVar17 - fVar24;
          iVar1 = *(int *)(unaff_RDI + 0x314);
          fVar21 = *(float *)(*(longlong *)(unaff_RDI + 0x308) + (longlong)iVar1 * 4);
          *(float *)(*(longlong *)(unaff_RDI + 0x308) + (longlong)iVar1 * 4) =
               *(float *)(unaff_RDI + 0x300) * fVar21 + fVar17;
          iVar9 = iVar1 + 1;
          if (*(int *)(unaff_RDI + 0x310) <= iVar1 + 1) {
            iVar9 = iVar10;
          }
          *(int *)(unaff_RDI + 0x314) = iVar9;
          fVar21 = fVar21 - fVar17;
LAB_00b78549:
          bVar15 = pfVar8 != (float *)0x0;
          *pfVar12 = *pfVar13 * *(float *)(unaff_RDI + 0xa0) + fVar21 * *(float *)(unaff_RDI + 0xa8)
          ;
        }
        pfVar13 = pfVar13 + 1;
        if (pfVar14 != (float *)0x0) {
          pfVar14 = pfVar14 + 1;
        }
        pfVar12 = pfVar12 + 1;
        pfVar8 = pfVar8 + 1;
        if (!bVar15) {
          pfVar8 = (float *)0x0;
        }
        bVar15 = 1 < param_1;
        param_1 = param_1 + -1;
      } while (bVar15);
    }
  }
  return;
}


