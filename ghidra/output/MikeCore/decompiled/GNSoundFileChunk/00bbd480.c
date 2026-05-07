// Function: FUN_00bbd480
// Address: 00bbd480
// Size: 1386 bytes
// Class: GNSoundFileChunk


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bbd480(int param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  ulonglong uVar11;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  float *pfVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  undefined1 auVar23 [16];
  longlong lVar24;
  undefined1 auVar25 [16];
  longlong lVar27;
  undefined1 auVar26 [16];
  double dVar28;
  float fVar29;
  undefined1 in_XMM5 [16];
  longlong local_98 [12];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  uVar8 = FUN_00b33120();
  uVar16 = (ulonglong)uVar8;
  if (0 < (int)uVar8) {
    plVar3 = *(longlong **)(unaff_RDI + 0x90);
    iVar10 = *(int *)(unaff_RDI + 0x9c);
    if ((uVar8 < 4) || ((local_98 < plVar3 + uVar16 && (plVar3 < local_98 + uVar16)))) {
      uVar11 = 0;
    }
    else {
      uVar11 = (ulonglong)(uVar8 & 0xfffffffc);
      uVar12 = (uVar11 - 4 >> 2) + 1;
      uVar14 = (ulonglong)((uint)uVar12 & 3);
      if (uVar11 - 4 < 0xc) {
        lVar15 = 0;
      }
      else {
        lVar13 = -(uVar12 & 0xfffffffffffffffc);
        lVar15 = 0;
        auVar25._0_8_ = (longlong)iVar10;
        auVar25._8_4_ = iVar10;
        auVar25._12_4_ = iVar10 >> 0x1f;
        lVar24 = auVar25._0_8_ * 4;
        lVar27 = auVar25._8_8_ * 4;
        do {
          lVar5 = (plVar3 + lVar15)[1];
          lVar6 = plVar3[lVar15 + 2];
          lVar7 = (plVar3 + lVar15 + 2)[1];
          local_98[lVar15] = plVar3[lVar15] + lVar24;
          local_98[lVar15 + 1] = lVar5 + lVar27;
          local_98[lVar15 + 2] = lVar6 + lVar24;
          local_98[lVar15 + 3] = lVar7 + lVar27;
          lVar5 = (plVar3 + lVar15 + 4)[1];
          lVar6 = plVar3[lVar15 + 6];
          lVar7 = (plVar3 + lVar15 + 6)[1];
          local_98[lVar15 + 4] = plVar3[lVar15 + 4] + lVar24;
          local_98[lVar15 + 5] = lVar5 + lVar27;
          local_98[lVar15 + 6] = lVar6 + lVar24;
          local_98[lVar15 + 7] = lVar7 + lVar27;
          lVar5 = (plVar3 + lVar15 + 8)[1];
          lVar6 = plVar3[lVar15 + 10];
          lVar7 = (plVar3 + lVar15 + 10)[1];
          local_98[lVar15 + 8] = plVar3[lVar15 + 8] + lVar24;
          local_98[lVar15 + 9] = lVar5 + lVar27;
          local_98[lVar15 + 10] = lVar6 + lVar24;
          local_98[lVar15 + 0xb] = lVar7 + lVar27;
          lVar5 = (plVar3 + lVar15 + 0xc)[1];
          lVar6 = plVar3[lVar15 + 0xe];
          lVar7 = (plVar3 + lVar15 + 0xe)[1];
          local_98[lVar15 + 0xc] = plVar3[lVar15 + 0xc] + lVar24;
          *(longlong *)(&stack0xffffffffffffffd0 + lVar15 * 8) = lVar5 + lVar27;
          *(longlong *)(&stack0xffffffffffffffd8 + lVar15 * 8) = lVar6 + lVar24;
          *(longlong *)(&stack0xffffffffffffffe0 + lVar15 * 8) = lVar7 + lVar27;
          lVar15 = lVar15 + 0x10;
          lVar13 = lVar13 + 4;
        } while (lVar13 != 0);
      }
      if (uVar14 != 0) {
        lVar13 = 0;
        auVar23._0_8_ = (longlong)iVar10;
        auVar23._8_4_ = iVar10;
        auVar23._12_4_ = iVar10 >> 0x1f;
        lVar24 = auVar23._8_8_ * 4;
        do {
          plVar2 = (longlong *)((longlong)plVar3 + lVar13 + lVar15 * 8);
          plVar1 = (longlong *)((longlong)plVar3 + lVar13 + lVar15 * 8 + 0x10);
          lVar27 = *plVar1;
          lVar5 = plVar1[1];
          auVar26._0_8_ = *plVar2 + auVar23._0_8_ * 4;
          auVar26._8_8_ = plVar2[1] + lVar24;
          *(undefined1 (*) [16])((longlong)local_98 + lVar13 + lVar15 * 8) = auVar26;
          plVar1 = (longlong *)((longlong)local_98 + lVar13 + lVar15 * 8 + 0x10);
          *plVar1 = lVar27 + auVar23._0_8_ * 4;
          plVar1[1] = lVar5 + lVar24;
          lVar13 = lVar13 + 0x20;
        } while (uVar14 << 5 != lVar13);
      }
      if (uVar11 == uVar16) goto LAB_00bbd6e2;
    }
    uVar14 = ~uVar11;
    uVar12 = uVar16 & 3;
    if ((uVar8 & 3) != 0) {
      do {
        local_98[uVar11] = plVar3[uVar11] + (longlong)iVar10 * 4;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    if (2 < uVar14 + uVar16) {
      lVar15 = (longlong)iVar10 * 4;
      do {
        local_98[uVar11] = plVar3[uVar11] + lVar15;
        local_98[uVar11 + 1] = plVar3[uVar11 + 1] + lVar15;
        local_98[uVar11 + 2] = plVar3[uVar11 + 2] + lVar15;
        local_98[uVar11 + 3] = plVar3[uVar11 + 3] + lVar15;
        uVar11 = uVar11 + 4;
      } while (uVar16 != uVar11);
    }
  }
LAB_00bbd6e2:
  (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x400))(param_1,local_98);
  if (0 < (int)uVar8) {
    uVar11 = 0;
    fVar21 = DAT_02390124;
    do {
      if (param_1 != 0) {
        pfVar9 = *(float **)(param_2 + uVar11 * 8);
        pfVar17 = *(float **)(unaff_RSI + uVar11 * 8);
        uVar12 = (ulonglong)*(uint *)(unaff_RDI + 0xa0);
        iVar10 = param_1;
        do {
          iVar18 = param_1 - iVar10;
          iVar10 = iVar10 + -1;
          fVar19 = (*pfVar17 -
                   *(float *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x90) + uVar11 * 8) +
                             (longlong)(*(int *)(unaff_RDI + 0x9c) + iVar18) * 4)) * DAT_02394298;
          if (0 < (int)uVar12) {
            lVar15 = 0;
            while ((uVar11 != 1 || (lVar15 != 2))) {
              dVar22 = *(double *)
                        (*(longlong *)(*(longlong *)(unaff_RDI + 0xa8) + 0x10) + lVar15 * 8) *
                       *(double *)
                        (*(longlong *)(*(longlong *)(unaff_RDI + 0xb0) + 0x10) + lVar15 * 8);
              lVar13 = *(longlong *)(*(longlong *)(unaff_RDI + 200) + 0x10);
              uVar12 = -(ulonglong)(*(double *)(lVar13 + lVar15 * 8) < 0.0);
              *(ulonglong *)(lVar13 + lVar15 * 8) =
                   ((ulonglong)dVar22 ^ _DAT_023945b0) & uVar12 | ~uVar12 & (ulonglong)dVar22;
              fVar20 = (float)*(int *)(unaff_RDI + 0x98);
              for (fVar29 = (float)((double)(*(int *)(unaff_RDI + 0x9c) + iVar18) -
                                   *(double *)
                                    (*(longlong *)(*(longlong *)(unaff_RDI + 0xc0) + 0x10) +
                                    lVar15 * 8)); fVar29 < fVar21; fVar29 = fVar29 + fVar20) {
              }
              for (; fVar20 < fVar29; fVar29 = fVar29 - fVar20) {
              }
              in_XMM5 = roundss(in_XMM5,ZEXT416((uint)fVar29),9);
              fVar21 = (float)FUN_00e838c0();
              lVar13 = *(longlong *)(*(longlong *)(unaff_RDI + 200) + 0x10);
              lVar24 = *(longlong *)(*(longlong *)(unaff_RDI + 0xc0) + 0x10);
              dVar28 = *(double *)(lVar13 + lVar15 * 8) + *(double *)(lVar24 + lVar15 * 8);
              *(double *)(lVar24 + lVar15 * 8) = dVar28;
              dVar22 = *(double *)(lVar13 + lVar15 * 8);
              if (((0.0 < dVar22) &&
                  (*(double *)(*(longlong *)(*(longlong *)(unaff_RDI + 0xa8) + 0x10) + lVar15 * 8) *
                   DAT_023934d0 <= dVar28)) || ((dVar22 < 0.0 && (dVar28 <= DAT_023b3bc0)))) {
                *(ulonglong *)(lVar13 + lVar15 * 8) = (ulonglong)dVar22 ^ _DAT_023945b0;
              }
              fVar19 = fVar19 + fVar21;
              uVar12 = (ulonglong)*(int *)(unaff_RDI + 0xa0);
              fVar21 = DAT_02390124;
              if (((longlong)uVar12 <= lVar15 + 1) ||
                 (bVar4 = lVar15 == 0, lVar15 = lVar15 + 1, bVar4 && uVar11 == 0)) break;
            }
          }
          pfVar17 = pfVar17 + 1;
          *pfVar9 = fVar19;
          pfVar9 = pfVar9 + 1;
        } while (iVar10 != 0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar16);
  }
  param_1 = param_1 + *(int *)(unaff_RDI + 0x9c);
  *(int *)(unaff_RDI + 0x9c) = param_1;
  if (*(int *)(unaff_RDI + 0x98) <= param_1) {
    *(int *)(unaff_RDI + 0x9c) = param_1 - *(int *)(unaff_RDI + 0x98);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


