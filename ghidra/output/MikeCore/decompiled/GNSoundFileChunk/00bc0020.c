// Function: FUN_00bc0020
// Address: 00bc0020
// Size: 1575 bytes
// Class: GNSoundFileChunk


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bc0020(void)

{
  double dVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  
  uVar9 = FUN_00b33120();
  dVar6 = (double)(longlong)unaff_RSI * *(double *)(unaff_RDI + 0xe8);
  uVar11 = (ulonglong)dVar6;
  uVar11 = ((longlong)(dVar6 - _DAT_023907c8) & (longlong)uVar11 >> 0x3f | uVar11) + 2;
  if (*(ulonglong *)(unaff_RDI + 0xb8) < uVar11) {
    uVar10 = FUN_00b33120();
    (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x400))();
    uVar17 = *(ulonglong *)(unaff_RDI + 0xb8);
    lVar16 = uVar11 - uVar17;
    if (uVar17 < uVar11) {
      if ((int)uVar10 < 1) {
        uVar13 = uVar17 + 1;
        if (uVar17 + 1 < uVar11) {
          uVar13 = uVar11;
        }
      }
      else {
        lVar4 = *(longlong *)(unaff_RDI + 0xb0);
        lVar5 = *(longlong *)(unaff_RDI + 200);
        iVar2 = *(int *)(unaff_RDI + 0xc4);
        lVar12 = 0;
        do {
          uVar13 = uVar17 & (longlong)iVar2;
          uVar11 = 0;
          if (2 < (ulonglong)uVar10 - 1) {
            do {
              *(undefined4 *)(*(longlong *)(lVar4 + uVar11 * 8) + uVar13 * 4) =
                   *(undefined4 *)(*(longlong *)(lVar5 + uVar11 * 8) + lVar12 * 4);
              *(undefined4 *)(*(longlong *)(lVar4 + 8 + uVar11 * 8) + uVar13 * 4) =
                   *(undefined4 *)(*(longlong *)(lVar5 + 8 + uVar11 * 8) + lVar12 * 4);
              *(undefined4 *)(*(longlong *)(lVar4 + 0x10 + uVar11 * 8) + uVar13 * 4) =
                   *(undefined4 *)(*(longlong *)(lVar5 + 0x10 + uVar11 * 8) + lVar12 * 4);
              *(undefined4 *)(*(longlong *)(lVar4 + 0x18 + uVar11 * 8) + uVar13 * 4) =
                   *(undefined4 *)(*(longlong *)(lVar5 + 0x18 + uVar11 * 8) + lVar12 * 4);
              uVar11 = uVar11 + 4;
            } while ((uVar10 & 0xfffffffc) != uVar11);
          }
          if ((ulonglong)(uVar10 & 3) != 0) {
            uVar14 = 0;
            do {
              *(undefined4 *)(*(longlong *)(lVar4 + uVar11 * 8 + uVar14 * 8) + uVar13 * 4) =
                   *(undefined4 *)(*(longlong *)(lVar5 + uVar11 * 8 + uVar14 * 8) + lVar12 * 4);
              uVar14 = uVar14 + 1;
            } while ((uVar10 & 3) != uVar14);
          }
          lVar12 = lVar12 + 1;
          uVar17 = uVar17 + 1;
          uVar13 = uVar17;
        } while (lVar12 != lVar16);
      }
      *(ulonglong *)(unaff_RDI + 0xb8) = uVar13;
    }
  }
  dVar6 = _DAT_023907c8;
  iVar2 = *(int *)(unaff_RDI + 0xf0);
  if (iVar2 == 0) {
    uVar11 = *(ulonglong *)(unaff_RDI + 0xa0);
    if (unaff_RSI <= uVar11) {
      return;
    }
    if ((int)uVar9 < 1) {
      uVar17 = uVar11 + 1;
      if (uVar11 + 1 < unaff_RSI) {
        uVar17 = unaff_RSI;
      }
    }
    else {
      dVar1 = *(double *)(unaff_RDI + 0xe8);
      lVar16 = *(longlong *)(unaff_RDI + 0x98);
      lVar4 = *(longlong *)(unaff_RDI + 0xb0);
      iVar2 = *(int *)(unaff_RDI + 0xc4);
      iVar3 = *(int *)(unaff_RDI + 0xac);
      do {
        dVar8 = (double)(longlong)uVar11 * dVar1;
        uVar17 = (ulonglong)dVar8;
        uVar13 = ((longlong)(dVar8 - dVar6) & (longlong)uVar17 >> 0x3f | uVar17) & (longlong)iVar2;
        uVar17 = uVar11 & (longlong)iVar3;
        uVar14 = 0;
        if (2 < (ulonglong)uVar9 - 1) {
          do {
            *(undefined4 *)(*(longlong *)(lVar16 + uVar14 * 8) + uVar17 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar4 + uVar14 * 8) + uVar13 * 4);
            *(undefined4 *)(*(longlong *)(lVar16 + 8 + uVar14 * 8) + uVar17 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar4 + 8 + uVar14 * 8) + uVar13 * 4);
            *(undefined4 *)(*(longlong *)(lVar16 + 0x10 + uVar14 * 8) + uVar17 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar4 + 0x10 + uVar14 * 8) + uVar13 * 4);
            *(undefined4 *)(*(longlong *)(lVar16 + 0x18 + uVar14 * 8) + uVar17 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar4 + 0x18 + uVar14 * 8) + uVar13 * 4);
            uVar14 = uVar14 + 4;
          } while ((uVar9 & 0xfffffffc) != uVar14);
        }
        if ((ulonglong)(uVar9 & 3) != 0) {
          uVar15 = 0;
          do {
            *(undefined4 *)(*(longlong *)(lVar16 + uVar14 * 8 + uVar15 * 8) + uVar17 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar4 + uVar14 * 8 + uVar15 * 8) + uVar13 * 4);
            uVar15 = uVar15 + 1;
          } while ((uVar9 & 3) != uVar15);
        }
        uVar11 = uVar11 + 1;
        uVar17 = uVar11;
      } while (uVar11 < unaff_RSI);
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        return;
      }
      uVar11 = *(ulonglong *)(unaff_RDI + 0xa0);
      if (unaff_RSI <= uVar11) {
        return;
      }
      if (0 < (int)uVar9) {
        do {
          dVar6 = (double)(longlong)uVar11 * *(double *)(unaff_RDI + 0xe8);
          uVar17 = (longlong)(dVar6 - _DAT_023907c8) & (longlong)dVar6 >> 0x3f | (longlong)dVar6;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = dVar6;
          roundsd(ZEXT816(0),auVar20,9);
          uVar13 = 0;
          do {
            lVar16 = *(longlong *)(*(longlong *)(unaff_RDI + 0xb0) + uVar13 * 8);
            uVar11 = uVar17 + 1 & (longlong)*(int *)(unaff_RDI + 0xc4);
            fVar18 = (float)FUN_00e838c0(*(undefined4 *)
                                          (lVar16 + (uVar17 - 1 &
                                                    (longlong)*(int *)(unaff_RDI + 0xc4)) * 4),
                                         uVar11,*(undefined4 *)(lVar16 + uVar11 * 4));
            fVar19 = DAT_02390124;
            if ((fVar18 <= DAT_02390124) && (fVar19 = fVar18, fVar18 < DAT_02390d00)) {
              fVar19 = DAT_02390d00;
            }
            uVar11 = *(ulonglong *)(unaff_RDI + 0xa0);
            *(float *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x98) + uVar13 * 8) +
                      ((longlong)*(int *)(unaff_RDI + 0xac) & uVar11) * 4) = fVar19;
            uVar13 = uVar13 + 1;
          } while (uVar9 != uVar13);
          uVar11 = uVar11 + 1;
          *(ulonglong *)(unaff_RDI + 0xa0) = uVar11;
        } while (uVar11 < unaff_RSI);
        return;
      }
      uVar9 = (int)unaff_RSI - (int)uVar11;
      uVar17 = ~uVar11;
      if ((uVar9 & 7) != 0) {
        lVar16 = 0;
        do {
          lVar16 = lVar16 + -1;
        } while (-lVar16 != ((ulonglong)uVar9 & 7));
        uVar11 = uVar11 - lVar16;
      }
      if (6 < uVar17 + unaff_RSI) {
        do {
          uVar11 = uVar11 + 8;
        } while (uVar11 < unaff_RSI);
      }
      *(ulonglong *)(unaff_RDI + 0xa0) = uVar11;
      return;
    }
    uVar11 = *(ulonglong *)(unaff_RDI + 0xa0);
    if (unaff_RSI <= uVar11) {
      return;
    }
    if ((int)uVar9 < 1) {
      uVar17 = uVar11 + 1;
      if (uVar11 + 1 < unaff_RSI) {
        uVar17 = unaff_RSI;
      }
    }
    else {
      dVar1 = *(double *)(unaff_RDI + 0xe8);
      lVar16 = *(longlong *)(unaff_RDI + 0x98);
      lVar4 = *(longlong *)(unaff_RDI + 0xb0);
      iVar2 = *(int *)(unaff_RDI + 0xc4);
      iVar3 = *(int *)(unaff_RDI + 0xac);
      do {
        dVar8 = (double)(longlong)uVar11 * dVar1;
        uVar17 = (longlong)(dVar8 - dVar6) & (longlong)dVar8 >> 0x3f | (longlong)dVar8;
        uVar14 = (longlong)iVar2 & uVar17;
        uVar13 = uVar17 + 1 & (longlong)iVar2;
        uVar17 = uVar11 & (longlong)iVar3;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = dVar8;
        auVar20 = roundsd(ZEXT816(0),auVar7,9);
        fVar19 = (float)(dVar8 - auVar20._0_8_);
        if (uVar9 == 1) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          do {
            lVar5 = *(longlong *)(lVar4 + uVar15 * 8);
            fVar18 = *(float *)(lVar5 + uVar14 * 4);
            *(float *)(*(longlong *)(lVar16 + uVar15 * 8) + uVar17 * 4) =
                 (*(float *)(lVar5 + uVar13 * 4) - fVar18) * fVar19 + fVar18;
            lVar5 = *(longlong *)(lVar4 + 8 + uVar15 * 8);
            fVar18 = *(float *)(lVar5 + uVar14 * 4);
            *(float *)(*(longlong *)(lVar16 + 8 + uVar15 * 8) + uVar17 * 4) =
                 (*(float *)(lVar5 + uVar13 * 4) - fVar18) * fVar19 + fVar18;
            uVar15 = uVar15 + 2;
          } while ((uVar9 & 0xfffffffe) != uVar15);
        }
        if ((uVar9 & 1) != 0) {
          lVar5 = *(longlong *)(lVar4 + uVar15 * 8);
          fVar18 = *(float *)(lVar5 + uVar14 * 4);
          *(float *)(*(longlong *)(lVar16 + uVar15 * 8) + uVar17 * 4) =
               (*(float *)(lVar5 + uVar13 * 4) - fVar18) * fVar19 + fVar18;
        }
        uVar11 = uVar11 + 1;
        uVar17 = uVar11;
      } while (uVar11 < unaff_RSI);
    }
  }
  *(ulonglong *)(unaff_RDI + 0xa0) = uVar17;
  return;
}


