// Function: FUN_01604630
// Address: 01604630
// Size: 2186 bytes
// Class: MUTempoAnalyzerEvent


/* WARNING: Removing unreachable block (ram,0x01604ed4) */
/* WARNING: Removing unreachable block (ram,0x016046a7) */
/* WARNING: Removing unreachable block (ram,0x016046b3) */
/* WARNING: Removing unreachable block (ram,0x01604ee8) */

void FUN_01604630(undefined4 param_1,int param_2,int param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint in_ECX;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint unaff_ESI;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong *unaff_RDI;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong local_a8;
  char local_a0;
  ulonglong local_38;
  
  uVar28 = (ulonglong)unaff_ESI;
  uVar20 = 0;
  if (-1 < (int)in_ECX) {
    uVar20 = (ulonglong)in_ECX;
  }
  if (param_2 < param_3) {
    param_3 = param_2;
  }
  FUN_00c8e690();
  if ((local_a0 == '\0') && (local_a8 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (*param_4 == 0) {
    puVar11 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar11 = &DAT_025f0d98;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    (*DAT_025f0db0)();
    puVar2 = (undefined8 *)*param_4;
    if (puVar2 == puVar11) {
      if ((char)param_4[1] != '\0') {
        FUN_00d50b20();
        goto joined_r0x01604764;
      }
    }
    else {
      *param_4 = (longlong)puVar11;
      if (((char)param_4[1] != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
joined_r0x01604764:
  if ((int)uVar20 < param_3) {
    if ((int)unaff_ESI < 1) {
      param_3 = param_3 - (int)uVar20;
      do {
        FUN_015c1480(param_1,uVar28);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    else {
      lVar27 = (longlong)param_2;
      if (unaff_ESI < 8) {
        do {
          lVar29 = *(longlong *)(*unaff_RDI + 0x10);
          puVar3 = *(undefined4 **)(local_a8 + 0x10);
          *puVar3 = *(undefined4 *)(lVar29 + uVar20 * 4);
          if ((((unaff_ESI != 1) &&
               (puVar3[1] = *(undefined4 *)(lVar29 + lVar27 * 4 + uVar20 * 4), unaff_ESI != 2)) &&
              (puVar3[2] = *(undefined4 *)(lVar27 * 8 + lVar29 + uVar20 * 4), unaff_ESI != 3)) &&
             (((puVar3[3] = *(undefined4 *)(lVar27 * 0xc + lVar29 + uVar20 * 4), unaff_ESI != 4 &&
               (puVar3[4] = *(undefined4 *)(lVar29 + lVar27 * 0x10 + uVar20 * 4), unaff_ESI != 5))
              && (puVar3[5] = *(undefined4 *)(lVar27 * 0x14 + lVar29 + uVar20 * 4), unaff_ESI != 6))
             )) {
            puVar3[6] = *(undefined4 *)(lVar29 + lVar27 * 0x18 + uVar20 * 4);
          }
          FUN_015c1480(param_1,uVar28);
          puVar3 = *(undefined4 **)(local_a8 + 0x10);
          lVar29 = *(longlong *)(*unaff_RDI + 0x10);
          *(undefined4 *)(lVar29 + uVar20 * 4) = *puVar3;
          if (((unaff_ESI != 1) &&
              (*(undefined4 *)(lVar29 + lVar27 * 4 + uVar20 * 4) = puVar3[1], unaff_ESI != 2)) &&
             ((*(undefined4 *)(lVar27 * 8 + lVar29 + uVar20 * 4) = puVar3[2], unaff_ESI != 3 &&
              (((*(undefined4 *)(lVar27 * 0xc + lVar29 + uVar20 * 4) = puVar3[3], unaff_ESI != 4 &&
                (*(undefined4 *)(lVar29 + lVar27 * 0x10 + uVar20 * 4) = puVar3[4], unaff_ESI != 5))
               && (*(undefined4 *)(lVar27 * 0x14 + lVar29 + uVar20 * 4) = puVar3[5], unaff_ESI != 6)
               ))))) {
            *(undefined4 *)(lVar29 + lVar27 * 0x18 + uVar20 * 4) = puVar3[6];
          }
          uVar20 = uVar20 + 1;
        } while (param_3 != (int)uVar20);
      }
      else {
        uVar12 = (ulonglong)(unaff_ESI & 0xfffffff8);
        uVar13 = uVar12 - 8;
        uVar16 = (uVar13 >> 3) + 1;
        lVar26 = lVar27 * 0x20 + uVar20 * 4 + 0x10;
        lVar29 = uVar20 * 4 + 0x10;
        lVar17 = 0;
        local_38 = uVar20;
        do {
          lVar15 = uVar28 + uVar20 + lVar17;
          lVar14 = *(longlong *)(*unaff_RDI + 0x10);
          uVar4 = *(ulonglong *)(local_a8 + 0x10);
          if ((param_2 == 1) &&
             (((ulonglong)(lVar14 + lVar15 * 4) <= uVar4 ||
              (uVar4 + uVar28 * 4 <= lVar14 + (lVar17 + uVar20) * 4)))) {
            if (uVar13 == 0) {
              lVar22 = 0;
LAB_01604c5f:
              puVar2 = (undefined8 *)(lVar14 + (lVar22 + local_38) * 4);
              uVar8 = puVar2[1];
              puVar11 = (undefined8 *)(lVar14 + 0x10 + (lVar22 + local_38) * 4);
              uVar9 = *puVar11;
              uVar10 = puVar11[1];
              puVar11 = (undefined8 *)(uVar4 + lVar22 * 4);
              *puVar11 = *puVar2;
              puVar11[1] = uVar8;
              puVar2 = (undefined8 *)(uVar4 + 0x10 + lVar22 * 4);
              *puVar2 = uVar9;
              puVar2[1] = uVar10;
            }
            else {
              lVar22 = 0;
              lVar25 = -(uVar16 & 0xfffffffffffffffe);
              lVar24 = lVar14;
              do {
                puVar11 = (undefined8 *)(lVar24 + -0x10 + lVar29);
                uVar8 = puVar11[1];
                uVar9 = *(undefined8 *)(lVar24 + lVar29);
                uVar10 = ((undefined8 *)(lVar24 + lVar29))[1];
                puVar2 = (undefined8 *)(uVar4 + lVar22 * 4);
                *puVar2 = *puVar11;
                puVar2[1] = uVar8;
                puVar2 = (undefined8 *)(uVar4 + 0x10 + lVar22 * 4);
                *puVar2 = uVar9;
                puVar2[1] = uVar10;
                puVar2 = (undefined8 *)(lVar24 + -0x10 + lVar26);
                uVar8 = puVar2[1];
                uVar9 = *(undefined8 *)(lVar24 + lVar26);
                uVar10 = ((undefined8 *)(lVar24 + lVar26))[1];
                puVar11 = (undefined8 *)(uVar4 + 0x20 + lVar22 * 4);
                *puVar11 = *puVar2;
                puVar11[1] = uVar8;
                puVar2 = (undefined8 *)(uVar4 + 0x30 + lVar22 * 4);
                *puVar2 = uVar9;
                puVar2[1] = uVar10;
                lVar22 = lVar22 + 0x10;
                lVar24 = lVar24 + 0x40;
                lVar25 = lVar25 + 2;
              } while (lVar25 != 0);
              if ((uVar16 & 1) != 0) goto LAB_01604c5f;
            }
            if (uVar12 != uVar28) {
              uVar18 = uVar12 * lVar27 + local_38;
              uVar21 = uVar12;
              goto LAB_01604b4d;
            }
          }
          else {
            uVar18 = local_38;
            uVar21 = 0;
LAB_01604b4d:
            uVar23 = ~uVar21;
            for (uVar19 = (ulonglong)(unaff_ESI & 3); uVar19 != 0; uVar19 = uVar19 - 1) {
              *(undefined4 *)(uVar4 + uVar21 * 4) = *(undefined4 *)(lVar14 + uVar18 * 4);
              uVar18 = uVar18 + lVar27;
              uVar21 = uVar21 + 1;
            }
            if (2 < uVar23 + uVar28) {
              do {
                *(undefined4 *)(uVar4 + uVar21 * 4) = *(undefined4 *)(lVar14 + uVar18 * 4);
                *(undefined4 *)(uVar4 + 4 + uVar21 * 4) =
                     *(undefined4 *)(lVar14 + (uVar18 + lVar27) * 4);
                *(undefined4 *)(uVar4 + 8 + uVar21 * 4) =
                     *(undefined4 *)(lVar14 + lVar27 * 8 + uVar18 * 4);
                *(undefined4 *)(uVar4 + 0xc + uVar21 * 4) =
                     *(undefined4 *)(lVar14 + lVar27 * 0xc + uVar18 * 4);
                uVar21 = uVar21 + 4;
                lVar14 = lVar14 + lVar27 * 0x10;
              } while (uVar28 != uVar21);
            }
          }
          FUN_015c1480(param_1,uVar28);
          uVar4 = *(ulonglong *)(local_a8 + 0x10);
          lVar14 = *(longlong *)(*unaff_RDI + 0x10);
          uVar18 = local_38;
          if (param_2 == 1) {
            if ((lVar14 + (lVar17 + uVar20) * 4 < uVar4 + uVar28 * 4) &&
               (uVar4 < (ulonglong)(lVar14 + lVar15 * 4))) {
              uVar21 = 0;
              goto LAB_01604de0;
            }
            if (uVar13 == 0) {
              lVar15 = 0;
LAB_01604d9f:
              puVar3 = (undefined4 *)(uVar4 + lVar15 * 4);
              uVar5 = puVar3[1];
              uVar6 = puVar3[2];
              uVar7 = puVar3[3];
              puVar2 = (undefined8 *)(uVar4 + 0x10 + lVar15 * 4);
              uVar8 = *puVar2;
              uVar9 = puVar2[1];
              puVar1 = (undefined4 *)(lVar14 + (lVar15 + local_38) * 4);
              *puVar1 = *puVar3;
              puVar1[1] = uVar5;
              puVar1[2] = uVar6;
              puVar1[3] = uVar7;
              puVar2 = (undefined8 *)(lVar14 + 0x10 + (lVar15 + local_38) * 4);
              *puVar2 = uVar8;
              puVar2[1] = uVar9;
            }
            else {
              lVar15 = 0;
              lVar22 = -(uVar16 & 0xfffffffffffffffe);
              lVar25 = lVar14;
              do {
                puVar2 = (undefined8 *)(uVar4 + lVar15 * 4);
                uVar8 = puVar2[1];
                puVar11 = (undefined8 *)(uVar4 + 0x10 + lVar15 * 4);
                uVar9 = *puVar11;
                uVar10 = puVar11[1];
                puVar11 = (undefined8 *)(lVar25 + -0x10 + lVar29);
                *puVar11 = *puVar2;
                puVar11[1] = uVar8;
                *(undefined8 *)(lVar25 + lVar29) = uVar9;
                ((undefined8 *)(lVar25 + lVar29))[1] = uVar10;
                puVar3 = (undefined4 *)(uVar4 + 0x20 + lVar15 * 4);
                uVar5 = puVar3[1];
                uVar6 = puVar3[2];
                uVar7 = puVar3[3];
                puVar2 = (undefined8 *)(uVar4 + 0x30 + lVar15 * 4);
                uVar8 = *puVar2;
                uVar9 = puVar2[1];
                puVar1 = (undefined4 *)(lVar25 + -0x10 + lVar26);
                *puVar1 = *puVar3;
                puVar1[1] = uVar5;
                puVar1[2] = uVar6;
                puVar1[3] = uVar7;
                *(undefined8 *)(lVar25 + lVar26) = uVar8;
                ((undefined8 *)(lVar25 + lVar26))[1] = uVar9;
                lVar15 = lVar15 + 0x10;
                lVar25 = lVar25 + 0x40;
                lVar22 = lVar22 + 2;
              } while (lVar22 != 0);
              if ((uVar16 & 1) != 0) goto LAB_01604d9f;
            }
            if (uVar12 != uVar28) {
              uVar18 = local_38 + uVar12 * lVar27;
              uVar21 = uVar12;
              goto LAB_01604de0;
            }
          }
          else {
            uVar21 = 0;
LAB_01604de0:
            uVar23 = ~uVar21;
            for (uVar19 = (ulonglong)(unaff_ESI & 3); uVar19 != 0; uVar19 = uVar19 - 1) {
              *(undefined4 *)(lVar14 + uVar18 * 4) = *(undefined4 *)(uVar4 + uVar21 * 4);
              uVar18 = uVar18 + lVar27;
              uVar21 = uVar21 + 1;
            }
            if (2 < uVar23 + uVar28) {
              do {
                *(undefined4 *)(lVar14 + uVar18 * 4) = *(undefined4 *)(uVar4 + uVar21 * 4);
                *(undefined4 *)(lVar14 + (uVar18 + lVar27) * 4) =
                     *(undefined4 *)(uVar4 + 4 + uVar21 * 4);
                *(undefined4 *)(lVar14 + lVar27 * 8 + uVar18 * 4) =
                     *(undefined4 *)(uVar4 + 8 + uVar21 * 4);
                *(undefined4 *)(lVar14 + lVar27 * 0xc + uVar18 * 4) =
                     *(undefined4 *)(uVar4 + 0xc + uVar21 * 4);
                uVar21 = uVar21 + 4;
                lVar14 = lVar14 + lVar27 * 0x10;
              } while (uVar28 != uVar21);
            }
          }
          local_38 = local_38 + 1;
          lVar17 = lVar17 + 1;
          lVar26 = lVar26 + 4;
          lVar29 = lVar29 + 4;
        } while ((int)local_38 != param_3);
      }
    }
  }
  if (local_a8 != 0) {
    FUN_00d50b20();
  }
  return;
}


