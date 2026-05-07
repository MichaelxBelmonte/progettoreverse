// Function: FUN_01524590
// Address: 01524590
// Size: 680 bytes
// Class: MUScalePitchSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01524590(void)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong *unaff_RDI;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  
  dVar12 = _UNK_0240e9c8;
  dVar11 = _DAT_0240e9c0;
  auVar10 = _DAT_0240d420;
  dVar27 = DAT_0240d1c0;
  uVar20 = _UNK_023908f8;
  uVar19 = _DAT_023908f0;
  dVar9 = DAT_0238fee8;
  lVar5 = *unaff_RDI;
  iVar4 = *(int *)(lVar5 + 0x18);
  iVar15 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar15 = iVar4;
  }
  uVar22 = iVar15 >> 5;
  if (0x11f < iVar4) {
    lVar6 = *(longlong *)(lVar5 + 0x10);
    uVar18 = (ulonglong)(uVar22 - 3);
    lVar24 = (longlong)(int)uVar22 * 0x20;
    uVar16 = uVar18 + 0xfffffffd;
    iVar15 = uVar22 - 4;
    lVar23 = uVar18 * 0x20;
    iVar13 = 0;
    dVar7 = (double)DAT_0240d420;
    dVar8 = DAT_0240d420._8_8_;
    lVar21 = lVar6;
    dVar30 = *(double *)(lVar6 + (ulonglong)(uVar22 - 1) * 0x20) -
             *(double *)(lVar6 + (ulonglong)(uVar22 - 2) * 0x20);
    do {
      dVar38 = *(double *)(lVar21 + 0x20 + lVar23);
      dVar31 = dVar38 - *(double *)(lVar21 + lVar23);
      dVar25 = dVar31 / dVar30;
      if (dVar25 < dVar9) {
        dVar25 = dVar9 / dVar25;
      }
      if (dVar25 < dVar27) {
        iVar13 = iVar13 + 1;
        iVar17 = iVar15 + 1;
      }
      else {
        if ((5 < iVar13) && (6 < iVar15 + 1)) {
          lVar14 = (uVar16 & 0xffffffff) * 0x20;
          dVar25 = *(double *)(lVar21 + -0x120 + lVar24);
          dVar2 = *(double *)(lVar21 + -0x100 + lVar24);
          dVar3 = *(double *)(lVar21 + -0xe0 + lVar24);
          dVar33 = dVar25 - *(double *)(lVar21 + -0x140 + lVar24);
          dVar25 = dVar2 - dVar25;
          auVar28._0_8_ = dVar3 - dVar2;
          auVar28._8_8_ = *(double *)(lVar21 + -0xc0 + lVar24) - dVar3;
          auVar32._8_8_ =
               *(double *)(lVar6 + (ulonglong)((int)uVar16 + 1) * 0x20) -
               *(double *)(lVar6 + lVar14);
          auVar32._0_8_ = auVar28._8_8_;
          auVar34._8_8_ = dVar25;
          auVar34._0_8_ = dVar33;
          auVar29._8_8_ = auVar28._0_8_;
          auVar29._0_8_ = dVar25;
          auVar35 = divpd(auVar34,auVar29);
          auVar29 = divpd(auVar28,auVar32);
          auVar36._8_8_ = -(ulonglong)(auVar35._8_8_ < dVar8);
          auVar36._0_8_ = -(ulonglong)(auVar35._0_8_ < dVar7);
          auVar37 = divpd(auVar10,auVar35);
          auVar36 = blendvpd(auVar35,auVar37,auVar36);
          auVar35 = divpd(auVar10,auVar29);
          auVar37._8_8_ = -(ulonglong)(auVar29._8_8_ < dVar8);
          auVar37._0_8_ = -(ulonglong)(auVar29._0_8_ < dVar7);
          auVar29 = blendvpd(auVar29,auVar35,auVar37);
          auVar26._8_8_ = -(ulonglong)(dVar12 <= auVar36._8_8_);
          auVar26._0_8_ = -(ulonglong)(dVar11 <= auVar36._0_8_);
          auVar35._8_8_ = -(ulonglong)(dVar12 <= auVar29._8_8_);
          auVar35._0_8_ = -(ulonglong)(dVar11 <= auVar29._0_8_);
          auVar29 = packssdw(auVar26,auVar35);
          iVar13 = movmskps((int)lVar14,auVar29);
          if (iVar13 == 0) {
            dVar38 = dVar38 - dVar30;
            pdVar1 = (double *)(lVar6 + (longlong)iVar15 * 0x20);
            if ((double)((ulonglong)((dVar38 - *pdVar1) - dVar33) & uVar19) <
                (double)((ulonglong)((*(double *)(lVar21 + lVar23) - *pdVar1) - dVar33) & uVar20)) {
              *(double *)(lVar21 + lVar23) = dVar38;
            }
          }
        }
        iVar17 = (int)uVar18;
        iVar13 = 0;
      }
      uVar18 = uVar18 - 1;
      uVar16 = uVar16 - 1;
      iVar15 = iVar15 + -1;
      lVar21 = lVar21 + -0x20;
      dVar30 = dVar31;
    } while (1 < iVar17);
  }
  dVar9 = DAT_023b4df8;
  if (0x1f < iVar4) {
    uVar19 = 0;
    pdVar1 = *(double **)(lVar5 + 0x10);
    dVar27 = DAT_02395720;
    do {
      uVar20 = uVar19 + 1;
      if ((longlong)uVar19 < (longlong)(int)(uVar22 - 1)) {
        dVar27 = ((pdVar1[5] - pdVar1[1]) * dVar9) / (pdVar1[4] - *pdVar1);
      }
      pdVar1[2] = dVar27;
      uVar19 = uVar20;
      pdVar1 = pdVar1 + 4;
    } while (uVar22 != uVar20);
  }
  return;
}


