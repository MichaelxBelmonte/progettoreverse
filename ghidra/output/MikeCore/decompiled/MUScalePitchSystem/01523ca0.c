// Function: FUN_01523ca0
// Address: 01523ca0
// Size: 1976 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01523cfc) */
/* WARNING: Removing unreachable block (ram,0x01523d05) */
/* WARNING: Removing unreachable block (ram,0x01523fac) */
/* WARNING: Removing unreachable block (ram,0x01523fb5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01523ca0(void)

{
  size_t sVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  double *pdVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar24;
  undefined8 *puVar25;
  uint uVar26;
  longlong lVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  longlong local_68;
  char local_60;
  
  lVar11 = *(longlong *)PTR____stack_chk_guard_024a9898;
  FUN_00c8e710();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  iVar24 = *(int *)(unaff_RSI + 0x18);
  if (1 < iVar24) {
    uVar26 = 1;
    do {
      lVar17 = *(longlong *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(unaff_RSI + 0x10) + 0x10) +
                  (ulonglong)(uVar26 >> 10) * 8) + 0x10);
      lVar20 = (ulonglong)(uVar26 & 0x3ff) * 0x20;
      lVar27 = (longlong)*(int *)(local_68 + 0x18);
      if ((*(int *)(local_68 + 0x18) + 0x1fU < 0x3f) ||
         (dVar28 = *(double *)(lVar17 + 8 + lVar20),
         pdVar18 = (double *)(lVar27 + -0x18 + *(longlong *)(local_68 + 0x10)),
         *pdVar18 <= dVar28 && dVar28 != *pdVar18)) {
        FUN_00c8e340(iVar24,1);
        puVar25 = (undefined8 *)(lVar17 + lVar20);
        lVar17 = *(longlong *)(local_68 + 0x10);
        uVar7 = *puVar25;
        uVar13 = puVar25[1];
        uVar14 = puVar25[3];
        puVar16 = (undefined8 *)(lVar17 + 0x10 + lVar27);
        *puVar16 = puVar25[2];
        puVar16[1] = uVar14;
        puVar16 = (undefined8 *)(lVar17 + lVar27);
        *puVar16 = uVar7;
        puVar16[1] = uVar13;
        iVar24 = *(int *)(unaff_RSI + 0x18);
      }
      uVar26 = uVar26 + 1;
    } while ((int)uVar26 < iVar24);
  }
  iVar24 = *(int *)(local_68 + 0x18);
  iVar15 = iVar24 + 0x1f;
  if (-1 < iVar24) {
    iVar15 = iVar24;
  }
  if (0x63f < iVar24) {
    iVar15 = iVar15 >> 5;
    pdVar18 = (double *)(((longlong)iVar15 + -0x14) * 0x20 + *(longlong *)(local_68 + 0x10) + 0x48);
    lVar17 = 0;
    do {
      if (lVar17 == -0x12) goto LAB_01523ecc;
      dVar28 = ((pdVar18[-4] - pdVar18[-8]) / (pdVar18[-5] - pdVar18[-9])) * DAT_023b4df8;
      auVar31._0_8_ = *pdVar18 - pdVar18[-4];
      auVar31._8_8_ = pdVar18[-8] - pdVar18[-0xc];
      auVar32._0_8_ = pdVar18[-1] - pdVar18[-5];
      auVar32._8_8_ = pdVar18[-9] - pdVar18[-0xd];
      auVar32 = divpd(auVar31,auVar32);
      dVar29 = (auVar32._8_8_ * _UNK_02411888 + auVar32._0_8_ * _DAT_02411880) * DAT_023942d0;
      lVar17 = lVar17 + -1;
    } while ((dVar29 * DAT_023942d0 <= dVar28) && (pdVar18 = pdVar18 + 4, dVar28 <= dVar29 + dVar29)
            );
    iVar15 = (int)((longlong)iVar15 + -0x14) - (int)lVar17;
LAB_01523ecc:
    uVar26 = iVar15 - 2;
    lVar17 = *(longlong *)(local_68 + 0x10);
    pdVar18 = (double *)(lVar17 + 0x2c8);
    uVar21 = 0x13;
    do {
      if (uVar21 == 0xffffffffffffffff) {
        uVar19 = 0;
        uVar22 = uVar26;
        goto joined_r0x015242d5;
      }
      dVar28 = (pdVar18[-4] - pdVar18[-8]) / (pdVar18[-5] - pdVar18[-9]);
      lVar20 = (uVar21 & 0xffffffff) * 0x20;
      auVar33._0_8_ = *pdVar18 - pdVar18[-4];
      auVar33._8_8_ = pdVar18[-8] - *(double *)(lVar17 + 8 + lVar20);
      auVar30._0_8_ = pdVar18[-1] - pdVar18[-5];
      auVar30._8_8_ = pdVar18[-9] - *(double *)(lVar17 + lVar20);
      auVar32 = divpd(auVar33,auVar30);
      dVar29 = (auVar32._8_8_ + auVar32._0_8_) * DAT_023942d0;
      uVar21 = uVar21 - 1;
    } while ((dVar29 * DAT_023942d0 <= dVar28) &&
            (pdVar18 = pdVar18 + -4, dVar28 <= dVar29 + dVar29));
    uVar19 = (int)uVar21 + 3;
    uVar22 = uVar26 - uVar19;
joined_r0x015242d5:
    if (0x31 < (int)uVar22) {
      FUN_00c8e710();
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      dVar28 = (double)FUN_00c92170();
      if ((int)uVar19 <= (int)uVar26) {
        uVar21 = (ulonglong)uVar19;
        iVar24 = *(int *)(local_68 + 0x18);
        dVar29 = DAT_02395720;
        do {
          while( true ) {
            lVar17 = *(longlong *)(local_68 + 0x10);
            FUN_00c8e340(dVar28,1);
            lVar20 = *(longlong *)(local_68 + 0x10);
            pdVar18 = (double *)(lVar17 + uVar21 * 0x20);
            dVar28 = *pdVar18;
            dVar3 = pdVar18[1];
            puVar16 = (undefined8 *)(lVar17 + 0x10 + uVar21 * 0x20);
            uVar7 = puVar16[1];
            puVar25 = (undefined8 *)(lVar20 + 0x10 + (longlong)iVar24);
            *puVar25 = *puVar16;
            puVar25[1] = uVar7;
            pdVar18 = (double *)(lVar20 + iVar24);
            *pdVar18 = dVar28;
            pdVar18[1] = dVar3;
            lVar17 = *(longlong *)(local_68 + 0x10);
            iVar24 = *(int *)(local_68 + 0x18);
            lVar20 = (longlong)iVar24;
            if (uVar21 == uVar26) break;
LAB_01524380:
            uVar21 = uVar21 + 1;
            pdVar18 = (double *)(*(longlong *)(local_68 + 0x10) + uVar21 * 0x20);
            pdVar2 = (double *)(lVar17 + -0x20 + lVar20);
            dVar28 = *pdVar18 - *pdVar2;
            dVar29 = ((pdVar18[1] - pdVar2[1]) * DAT_023b4df8) / dVar28;
            *(double *)(lVar17 + -0x10 + lVar20) = dVar29;
            if (uVar21 == iVar15 - 1) goto LAB_01523fd1;
          }
          iVar10 = *(int *)(local_68 + 0x18);
          iVar23 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar23 = iVar10;
          }
          if ((longlong)(ulonglong)uVar26 < (longlong)((iVar23 >> 5) + -1)) goto LAB_01524380;
          uVar21 = uVar21 + 1;
          *(double *)(lVar17 + -0x10 + lVar20) = dVar29;
        } while (uVar21 != iVar15 - 1);
      }
LAB_01523fd1:
      puVar16 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar16 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(double *)(*(longlong *)(local_68 + 0x10) + 0x88) * DAT_0241c3f0;
      auVar32 = roundsd(ZEXT816(0),auVar12,10);
      dVar29 = auVar32._0_8_ * DAT_0240e9b8;
      uVar21 = (ulonglong)*(int *)(local_68 + 0x18);
      dVar28 = *(double *)((uVar21 - 0x18) + *(longlong *)(local_68 + 0x10));
      if (dVar29 < dVar28) {
        uVar26 = 4;
        do {
          iVar24 = (int)uVar21;
          iVar15 = iVar24 + 0x1f;
          if (-1 < iVar24) {
            iVar15 = iVar24;
          }
          lVar27 = (longlong)((iVar15 >> 5) + -1);
          lVar17 = (longlong)(int)uVar26 + 5;
          lVar20 = lVar17;
          if (lVar17 < lVar27) {
            lVar20 = lVar27;
          }
          sVar1 = (size_t)lVar20;
          uVar19 = sVar1 - 5;
          lVar20 = (longlong)(int)uVar26 * 0x20 + 0x28;
          uVar26 = uVar26 - 1;
          do {
            uVar22 = uVar26;
            uVar26 = uVar19;
            if (lVar27 <= lVar17) goto joined_r0x015240c6;
            uVar26 = uVar22 + 1;
            lVar17 = lVar17 + 1;
            pdVar18 = (double *)(*(longlong *)(local_68 + 0x10) + lVar20);
            lVar20 = lVar20 + 0x20;
          } while (*pdVar18 <= dVar29);
          sVar1 = uVar22 + 6;
joined_r0x015240c6:
          if (iVar15 >> 5 <= (int)sVar1) break;
          lVar17 = *(longlong *)(local_68 + 0x10);
          lVar20 = (longlong)(int)uVar26 * 0x20;
          lVar27 = ((longlong)(int)uVar26 + 1) * 0x20;
          dVar3 = *(double *)(lVar17 + -0x40 + lVar20);
          dVar4 = *(double *)(lVar17 + -0x38 + lVar20);
          dVar5 = *(double *)(lVar17 + 0x68 + lVar20);
          dVar6 = *(double *)(lVar17 + 0x60 + lVar20);
          _qsort(FUN_00e8b5f0,8,sVar1,(int *)(ulonglong)uVar19);
          lVar17 = *(longlong *)(local_68 + 0x10);
          uVar7 = *(undefined8 *)(lVar17 + 0x10 + lVar27);
          uVar8 = *(undefined2 *)(lVar17 + 0x18 + lVar27);
          uVar9 = *(undefined2 *)(lVar17 + 0x1a + lVar27);
          lVar20 = (longlong)*(int *)(puVar16 + 3);
          FUN_00c8e340(uVar7,1);
          lVar17 = puVar16[2];
          *(double *)(lVar17 + lVar20) =
               (dVar6 - dVar3) * ((dVar29 - dVar4) / (dVar5 - dVar4)) + dVar3;
          *(double *)(lVar17 + 8 + lVar20) = dVar29;
          *(undefined8 *)(lVar17 + 0x10 + lVar20) = uVar7;
          *(undefined2 *)(lVar17 + 0x18 + lVar20) = uVar8;
          *(undefined2 *)(lVar17 + 0x1a + lVar20) = uVar9;
          dVar29 = dVar29 + DAT_0240e9b8;
          if (dVar28 <= dVar29) break;
          uVar21 = (ulonglong)*(uint *)(local_68 + 0x18);
        } while( true );
      }
      FUN_01524590();
      *unaff_RDI = puVar16;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
      goto LAB_0152432a;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_0152432a:
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar11) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return unaff_RDI;
}


