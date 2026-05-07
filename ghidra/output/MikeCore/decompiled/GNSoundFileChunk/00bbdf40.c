// Function: FUN_00bbdf40
// Address: 00bbdf40
// Size: 2869 bytes
// Class: GNSoundFileChunk


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bbdf40(uint param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined4 *puVar18;
  longlong unaff_RSI;
  ulonglong uVar19;
  longlong unaff_RDI;
  ulonglong uVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  uint uVar23;
  undefined4 *puVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  longlong local_88;
  char local_80;
  
  uVar13 = FUN_00b33120();
  uVar27 = (ulonglong)uVar13;
  dVar31 = (double)FUN_00b335d0();
  if (((unaff_RSI != param_2) && (0 < (int)uVar13)) && (param_1 != 0)) {
    uVar13 = param_1 - 1;
    if (uVar13 < 7) {
      uVar16 = 0;
      do {
        puVar24 = *(undefined4 **)(unaff_RSI + uVar16 * 8);
        puVar21 = *(undefined4 **)(param_2 + uVar16 * 8);
        *puVar21 = *puVar24;
        if (((((param_1 != 1) && (puVar21[1] = puVar24[1], param_1 != 2)) &&
             (puVar21[2] = puVar24[2], param_1 != 3)) &&
            ((puVar21[3] = puVar24[3], param_1 != 4 && (puVar21[4] = puVar24[4], param_1 != 5)))) &&
           (puVar21[5] = puVar24[5], param_1 != 6)) {
          puVar21[6] = puVar24[6];
        }
        uVar16 = uVar16 + 1;
      } while (uVar27 != uVar16);
    }
    else {
      uVar16 = (ulonglong)uVar13 + 1;
      uVar25 = uVar16 & 0xfffffffffffffff8;
      if (uVar16 == uVar25) {
        uVar15 = (uVar25 - 8 >> 3) + 1;
        uVar20 = (ulonglong)((uint)uVar15 & 3);
        uVar19 = 0;
        do {
          puVar24 = *(undefined4 **)(unaff_RSI + uVar19 * 8);
          puVar21 = *(undefined4 **)(param_2 + uVar19 * 8);
          if ((puVar21 < puVar24 + uVar16) && (puVar24 < puVar21 + uVar16)) {
            uVar14 = param_1;
            if ((param_1 & 7) != 0) {
              uVar14 = 0;
              do {
                uVar4 = *puVar24;
                puVar24 = puVar24 + 1;
                *puVar21 = uVar4;
                puVar21 = puVar21 + 1;
                uVar14 = uVar14 + 1;
              } while ((param_1 & 7) != uVar14);
              uVar14 = param_1 - uVar14;
            }
            if (6 < uVar13) {
              lVar17 = 0;
              do {
                puVar21[lVar17] = puVar24[lVar17];
                puVar21[lVar17 + 1] = puVar24[lVar17 + 1];
                puVar21[lVar17 + 2] = puVar24[lVar17 + 2];
                puVar21[lVar17 + 3] = puVar24[lVar17 + 3];
                puVar21[lVar17 + 4] = puVar24[lVar17 + 4];
                puVar21[lVar17 + 5] = puVar24[lVar17 + 5];
                puVar21[lVar17 + 6] = puVar24[lVar17 + 6];
                puVar21[lVar17 + 7] = puVar24[lVar17 + 7];
                lVar17 = lVar17 + 8;
              } while (uVar14 != (uint)lVar17);
            }
          }
          else {
            if (uVar25 - 8 < 0x18) {
              lVar26 = 0;
            }
            else {
              lVar26 = 0;
              lVar17 = -(uVar15 & 0xfffffffffffffffc);
              do {
                uVar8 = *(undefined8 *)((longlong)(puVar24 + lVar26) + 8);
                uVar9 = *(undefined8 *)(puVar24 + lVar26 + 4);
                uVar10 = *(undefined8 *)((longlong)(puVar24 + lVar26 + 4) + 8);
                *(undefined8 *)(puVar21 + lVar26) = *(undefined8 *)(puVar24 + lVar26);
                *(undefined8 *)((longlong)(puVar21 + lVar26) + 8) = uVar8;
                *(undefined8 *)(puVar21 + lVar26 + 4) = uVar9;
                *(undefined8 *)((longlong)(puVar21 + lVar26 + 4) + 8) = uVar10;
                uVar8 = *(undefined8 *)((longlong)(puVar24 + lVar26 + 8) + 8);
                uVar9 = *(undefined8 *)(puVar24 + lVar26 + 0xc);
                uVar10 = *(undefined8 *)((longlong)(puVar24 + lVar26 + 0xc) + 8);
                *(undefined8 *)(puVar21 + lVar26 + 8) = *(undefined8 *)(puVar24 + lVar26 + 8);
                *(undefined8 *)((longlong)(puVar21 + lVar26 + 8) + 8) = uVar8;
                *(undefined8 *)(puVar21 + lVar26 + 0xc) = uVar9;
                *(undefined8 *)((longlong)(puVar21 + lVar26 + 0xc) + 8) = uVar10;
                uVar8 = *(undefined8 *)((longlong)(puVar24 + lVar26 + 0x10) + 8);
                uVar9 = *(undefined8 *)(puVar24 + lVar26 + 0x14);
                uVar10 = *(undefined8 *)((longlong)(puVar24 + lVar26 + 0x14) + 8);
                *(undefined8 *)(puVar21 + lVar26 + 0x10) = *(undefined8 *)(puVar24 + lVar26 + 0x10);
                *(undefined8 *)((longlong)(puVar21 + lVar26 + 0x10) + 8) = uVar8;
                *(undefined8 *)(puVar21 + lVar26 + 0x14) = uVar9;
                *(undefined8 *)((longlong)(puVar21 + lVar26 + 0x14) + 8) = uVar10;
                uVar8 = *(undefined8 *)((longlong)(puVar24 + lVar26 + 0x18) + 8);
                puVar18 = puVar24 + lVar26 + 0x1c;
                uVar4 = *puVar18;
                uVar5 = puVar18[1];
                uVar6 = puVar18[2];
                uVar7 = puVar18[3];
                *(undefined8 *)(puVar21 + lVar26 + 0x18) = *(undefined8 *)(puVar24 + lVar26 + 0x18);
                *(undefined8 *)((longlong)(puVar21 + lVar26 + 0x18) + 8) = uVar8;
                puVar18 = puVar21 + lVar26 + 0x1c;
                *puVar18 = uVar4;
                puVar18[1] = uVar5;
                puVar18[2] = uVar6;
                puVar18[3] = uVar7;
                lVar26 = lVar26 + 0x20;
                lVar17 = lVar17 + 4;
              } while (lVar17 != 0);
            }
            if (uVar20 != 0) {
              lVar17 = 0;
              do {
                puVar2 = (undefined8 *)((longlong)puVar24 + lVar17 + lVar26 * 4);
                uVar8 = puVar2[1];
                puVar18 = (undefined4 *)((longlong)puVar24 + lVar17 + lVar26 * 4 + 0x10);
                uVar4 = *puVar18;
                uVar5 = puVar18[1];
                uVar6 = puVar18[2];
                uVar7 = puVar18[3];
                puVar3 = (undefined8 *)((longlong)puVar21 + lVar17 + lVar26 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar8;
                puVar18 = (undefined4 *)((longlong)puVar21 + lVar17 + lVar26 * 4 + 0x10);
                *puVar18 = uVar4;
                puVar18[1] = uVar5;
                puVar18[2] = uVar6;
                puVar18[3] = uVar7;
                lVar17 = lVar17 + 0x20;
              } while (uVar20 << 5 != lVar17);
            }
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar27);
      }
      else {
        uVar13 = param_1 - (int)uVar25;
        uVar15 = (uVar25 - 8 >> 3) + 1;
        uVar20 = (ulonglong)((uint)uVar15 & 3);
        uVar19 = 0;
        do {
          puVar24 = *(undefined4 **)(unaff_RSI + uVar19 * 8);
          puVar21 = *(undefined4 **)(param_2 + uVar19 * 8);
          if ((puVar24 + uVar16 <= puVar21) ||
             (uVar14 = param_1, puVar18 = puVar24, puVar22 = puVar21, puVar21 + uVar16 <= puVar24))
          {
            if (uVar25 - 8 < 0x18) {
              lVar26 = 0;
            }
            else {
              lVar26 = 0;
              lVar17 = -(uVar15 & 0xfffffffffffffffc);
              do {
                uVar8 = *(undefined8 *)((longlong)(puVar24 + lVar26) + 8);
                uVar9 = *(undefined8 *)(puVar24 + lVar26 + 4);
                uVar10 = *(undefined8 *)((longlong)(puVar24 + lVar26 + 4) + 8);
                *(undefined8 *)(puVar21 + lVar26) = *(undefined8 *)(puVar24 + lVar26);
                *(undefined8 *)((longlong)(puVar21 + lVar26) + 8) = uVar8;
                *(undefined8 *)(puVar21 + lVar26 + 4) = uVar9;
                *(undefined8 *)((longlong)(puVar21 + lVar26 + 4) + 8) = uVar10;
                uVar8 = *(undefined8 *)((longlong)(puVar24 + lVar26 + 8) + 8);
                uVar9 = *(undefined8 *)(puVar24 + lVar26 + 0xc);
                uVar10 = *(undefined8 *)((longlong)(puVar24 + lVar26 + 0xc) + 8);
                *(undefined8 *)(puVar21 + lVar26 + 8) = *(undefined8 *)(puVar24 + lVar26 + 8);
                *(undefined8 *)((longlong)(puVar21 + lVar26 + 8) + 8) = uVar8;
                *(undefined8 *)(puVar21 + lVar26 + 0xc) = uVar9;
                *(undefined8 *)((longlong)(puVar21 + lVar26 + 0xc) + 8) = uVar10;
                uVar8 = *(undefined8 *)((longlong)(puVar24 + lVar26 + 0x10) + 8);
                uVar9 = *(undefined8 *)(puVar24 + lVar26 + 0x14);
                uVar10 = *(undefined8 *)((longlong)(puVar24 + lVar26 + 0x14) + 8);
                *(undefined8 *)(puVar21 + lVar26 + 0x10) = *(undefined8 *)(puVar24 + lVar26 + 0x10);
                *(undefined8 *)((longlong)(puVar21 + lVar26 + 0x10) + 8) = uVar8;
                *(undefined8 *)(puVar21 + lVar26 + 0x14) = uVar9;
                *(undefined8 *)((longlong)(puVar21 + lVar26 + 0x14) + 8) = uVar10;
                uVar8 = *(undefined8 *)((longlong)(puVar24 + lVar26 + 0x18) + 8);
                puVar18 = puVar24 + lVar26 + 0x1c;
                uVar4 = *puVar18;
                uVar5 = puVar18[1];
                uVar6 = puVar18[2];
                uVar7 = puVar18[3];
                *(undefined8 *)(puVar21 + lVar26 + 0x18) = *(undefined8 *)(puVar24 + lVar26 + 0x18);
                *(undefined8 *)((longlong)(puVar21 + lVar26 + 0x18) + 8) = uVar8;
                puVar18 = puVar21 + lVar26 + 0x1c;
                *puVar18 = uVar4;
                puVar18[1] = uVar5;
                puVar18[2] = uVar6;
                puVar18[3] = uVar7;
                lVar26 = lVar26 + 0x20;
                lVar17 = lVar17 + 4;
              } while (lVar17 != 0);
            }
            uVar14 = uVar13;
            puVar18 = puVar24 + uVar25;
            puVar22 = puVar21 + uVar25;
            if (uVar20 != 0) {
              lVar17 = 0;
              do {
                puVar2 = (undefined8 *)((longlong)puVar24 + lVar17 + lVar26 * 4);
                uVar8 = puVar2[1];
                puVar1 = (undefined4 *)((longlong)puVar24 + lVar17 + lVar26 * 4 + 0x10);
                uVar4 = *puVar1;
                uVar5 = puVar1[1];
                uVar6 = puVar1[2];
                uVar7 = puVar1[3];
                puVar3 = (undefined8 *)((longlong)puVar21 + lVar17 + lVar26 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar8;
                puVar1 = (undefined4 *)((longlong)puVar21 + lVar17 + lVar26 * 4 + 0x10);
                *puVar1 = uVar4;
                puVar1[1] = uVar5;
                puVar1[2] = uVar6;
                puVar1[3] = uVar7;
                lVar17 = lVar17 + 0x20;
              } while (uVar20 << 5 != lVar17);
            }
          }
          uVar11 = uVar14 - 1;
          if ((uVar14 & 7) != 0) {
            uVar23 = 0;
            do {
              uVar4 = *puVar18;
              puVar18 = puVar18 + 1;
              *puVar22 = uVar4;
              puVar22 = puVar22 + 1;
              uVar23 = uVar23 + 1;
            } while ((uVar14 & 7) != uVar23);
            uVar14 = uVar14 - uVar23;
          }
          if (6 < uVar11) {
            lVar17 = 0;
            do {
              puVar22[lVar17] = puVar18[lVar17];
              puVar22[lVar17 + 1] = puVar18[lVar17 + 1];
              puVar22[lVar17 + 2] = puVar18[lVar17 + 2];
              puVar22[lVar17 + 3] = puVar18[lVar17 + 3];
              puVar22[lVar17 + 4] = puVar18[lVar17 + 4];
              puVar22[lVar17 + 5] = puVar18[lVar17 + 5];
              puVar22[lVar17 + 6] = puVar18[lVar17 + 6];
              puVar22[lVar17 + 7] = puVar18[lVar17 + 7];
              lVar17 = lVar17 + 8;
            } while (uVar14 != (uint)lVar17);
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar27);
      }
    }
  }
  dVar31 = (double)(int)param_1 / dVar31;
  if (*(float *)(unaff_RDI + 0x90) < *(float *)(unaff_RDI + 0x94) ||
      *(float *)(unaff_RDI + 0x90) == *(float *)(unaff_RDI + 0x94)) {
    fVar35 = *(float *)(unaff_RDI + 0x9c);
    if ((fVar35 != 0.0) || (NAN(fVar35))) {
      fVar28 = *(float *)(unaff_RDI + 0x98);
      uVar13 = FUN_00b33120();
      dVar32 = (double)FUN_00b335d0();
      dVar32 = DAT_0238fee8 / dVar32;
      if (fVar35 <= fVar28) {
        if ((0 < (int)uVar13) && (0 < (int)param_1)) {
          fVar36 = DAT_02390124 / (float)(int)param_1;
          dVar33 = 0.0;
          uVar27 = 0;
          fVar35 = DAT_02390124;
          fVar28 = DAT_023d91e0;
          do {
            lVar17 = *(longlong *)(param_2 + uVar27 * 8);
            lVar26 = 0;
            fVar29 = fVar35;
            do {
              fVar30 = (float)_sinf(CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                             ((float)dVar33 + *(float *)(unaff_RDI + 0x98)) * fVar28
                                            ));
              fVar30 = fVar30 * DAT_02391090;
              uVar14 = FUN_00e7dff0();
              fVar28 = DAT_023d91e0;
              fVar35 = DAT_02390124;
              *(float *)(lVar17 + lVar26 * 4) =
                   ((float)(uVar14 % 1000) / DAT_023dbb10 + fVar30) * fVar29 * DAT_0239011c +
                   (DAT_02390124 - fVar29) * *(float *)(lVar17 + lVar26 * 4);
              dVar33 = dVar33 + dVar32;
              fVar29 = fVar29 - fVar36;
              lVar26 = lVar26 + 1;
            } while (param_1 != (uint)lVar26);
            uVar27 = uVar27 + 1;
          } while (uVar27 != uVar13);
        }
        *(undefined4 *)(unaff_RDI + 0x9c) = 0;
      }
      else if ((0 < (int)uVar13) && (0 < (int)param_1)) {
        dVar33 = 0.0;
        uVar27 = 0;
        fVar35 = DAT_023d91e0;
        do {
          lVar17 = *(longlong *)(param_2 + uVar27 * 8);
          lVar26 = 0;
          do {
            fVar28 = (float)_sinf(CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                           ((float)dVar33 + *(float *)(unaff_RDI + 0x98)) * fVar35))
            ;
            fVar28 = fVar28 * DAT_02391090;
            uVar14 = FUN_00e7dff0();
            fVar35 = DAT_023d91e0;
            *(float *)(lVar17 + lVar26 * 4) =
                 ((float)(uVar14 % 1000) / DAT_023dbb10 + fVar28) * DAT_0239011c +
                 *(float *)(lVar17 + lVar26 * 4) * 0.0;
            dVar33 = dVar33 + dVar32;
            lVar26 = lVar26 + 1;
          } while (param_1 != (uint)lVar26);
          uVar27 = uVar27 + 1;
        } while (uVar27 != uVar13);
      }
      goto LAB_00bbe9f8;
    }
  }
  else {
    *(undefined4 *)(unaff_RDI + 0x98) = 0;
    uVar13 = FUN_00b33120();
    dVar32 = (double)FUN_00b335d0();
    if ((0 < (int)uVar13) && (0 < (int)param_1)) {
      dVar32 = DAT_0238fee8 / dVar32;
      fVar28 = DAT_02390124 / (float)(int)param_1;
      dVar33 = 0.0;
      uVar27 = 0;
      fVar35 = DAT_023d91e0;
      do {
        lVar17 = *(longlong *)(param_2 + uVar27 * 8);
        fVar36 = 0.0;
        lVar26 = 0;
        do {
          fVar29 = (float)_sinf(((float)dVar33 + *(float *)(unaff_RDI + 0x98)) * fVar35);
          fVar29 = fVar29 * DAT_02391090;
          uVar14 = FUN_00e7dff0();
          fVar35 = DAT_023d91e0;
          *(float *)(lVar17 + lVar26 * 4) =
               ((float)(uVar14 % 1000) / DAT_023dbb10 + fVar29) * fVar36 * DAT_0239011c +
               (DAT_02390124 - fVar36) * *(float *)(lVar17 + lVar26 * 4);
          dVar33 = dVar33 + dVar32;
          fVar36 = fVar36 + fVar28;
          lVar26 = lVar26 + 1;
        } while (param_1 != (uint)lVar26);
        uVar27 = uVar27 + 1;
      } while (uVar27 != uVar13);
    }
    if (*(float *)(unaff_RDI + 0x90) <= *(float *)(unaff_RDI + 0xb0)) {
      dVar33 = (double)(*(float *)(unaff_RDI + 0x90) / *(float *)(unaff_RDI + 0xb0));
      fVar35 = *(float *)(unaff_RDI + 0xa0);
      fVar28 = *(float *)(unaff_RDI + 0xa4);
      uVar13 = FUN_00e7dff0();
      dVar34 = (double)uVar13 / _DAT_023934c0 + (double)uVar13 / _DAT_023934c0 + DAT_023b19a0;
      dVar32 = DAT_0238fee8 - dVar33;
      fVar36 = *(float *)(unaff_RDI + 0xa8);
      fVar29 = *(float *)(unaff_RDI + 0xac);
      uVar13 = FUN_00e7dff0();
      dVar32 = (((double)uVar13 / _DAT_023934c0 + (double)uVar13 / _DAT_023934c0 + DAT_023b19a0) *
                (double)fVar29 + (double)fVar36) * dVar33 +
               dVar32 * (dVar34 * (double)fVar28 + (double)fVar35);
    }
    else {
      fVar35 = *(float *)(unaff_RDI + 0xa8);
      fVar28 = *(float *)(unaff_RDI + 0xac);
      uVar13 = FUN_00e7dff0();
      dVar32 = ((double)uVar13 / _DAT_023934c0 + (double)uVar13 / _DAT_023934c0 + DAT_023b19a0) *
               (double)fVar28 + (double)fVar35;
    }
    *(float *)(unaff_RDI + 0x94) = (float)dVar32 + *(float *)(unaff_RDI + 0x94);
    *(undefined4 *)(unaff_RDI + 0x9c) = 0x3f800000;
LAB_00bbe9f8:
    *(float *)(unaff_RDI + 0x98) = (float)((double)*(float *)(unaff_RDI + 0x98) + dVar31);
  }
  if (*(int *)(unaff_RDI + 0xb4) < 0) {
    FUN_00b31a00();
    cVar12 = FUN_00bc4910();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (cVar12 != '\0') goto LAB_00bbea37;
  }
  else if (*(int *)(unaff_RDI + 0xb4) != 0) goto LAB_00bbea37;
  *(float *)(unaff_RDI + 0x94) = (float)((double)*(float *)(unaff_RDI + 0x94) + dVar31);
LAB_00bbea37:
  *(float *)(unaff_RDI + 0x90) = (float)(dVar31 + (double)*(float *)(unaff_RDI + 0x90));
  return;
}


