// Function: FUN_016039b0
// Address: 016039b0
// Size: 2672 bytes
// Class: MUTempoAnalyzerEvent
// String references:
//   "filter2DimensionalMatrixHorizontallyWithFIRWithConstantSizeHannWindow: filterSize too big!"


/* WARNING: Removing unreachable block (ram,0x01603a5b) */
/* WARNING: Removing unreachable block (ram,0x01603a67) */
/* WARNING: Removing unreachable block (ram,0x016043b3) */

void FUN_016039b0(uint param_1,int param_2,int param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float fVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  ulonglong uVar45;
  int iVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  longlong lVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  longlong lVar53;
  longlong lVar54;
  uint unaff_ESI;
  ulonglong uVar55;
  longlong lVar56;
  ulonglong uVar57;
  longlong *unaff_RDI;
  ulonglong uVar58;
  int iVar59;
  longlong lVar60;
  longlong lVar61;
  uint uVar62;
  ulonglong uVar63;
  longlong lVar64;
  uint uVar65;
  ulonglong uVar66;
  uint uVar67;
  longlong local_a0;
  char local_98;
  longlong local_78;
  ulonglong local_40;
  int local_38;
  
  uVar63 = (ulonglong)unaff_ESI;
  param_4 = (~param_4 & 1) + param_4;
  uVar47 = (ulonglong)param_4;
  if (0xfe < (int)param_4) {
    FUN_00e828a0();
  }
  uVar66 = 0;
  if (-1 < (int)param_1) {
    uVar66 = (ulonglong)param_1;
  }
  uVar65 = (uint)uVar66;
  if (param_2 < param_3) {
    param_3 = param_2;
  }
  FUN_00c8e690();
  if ((local_98 == '\0') && (local_a0 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar13 = *(longlong *)(local_a0 + 0x10);
  lVar42 = FUN_00e84a00();
  if (param_3 - uVar65 != 0 && (int)uVar65 <= param_3) {
    if ((int)unaff_ESI < 1) {
      uVar62 = ~uVar65;
      uVar67 = param_3 - uVar65 & 3;
      if (uVar67 != 0) {
        iVar46 = 0;
        do {
          ___bzero();
          iVar46 = iVar46 + -1;
        } while (-uVar67 != iVar46);
        uVar65 = uVar65 - iVar46;
      }
      if (2 < uVar62 + param_3) {
        local_38 = param_3 - uVar65;
        do {
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          local_38 = local_38 + -4;
        } while (local_38 != 0);
      }
    }
    else {
      lVar60 = (longlong)(int)param_4;
      iVar46 = -((int)param_4 / 2);
      lVar61 = (longlong)param_2;
      uVar58 = (ulonglong)(param_4 & 0xfffffff8);
      uVar48 = (ulonglong)(unaff_ESI & 0xfffffff8);
      uVar1 = uVar58 - 8;
      uVar51 = (uVar1 >> 3) + 1;
      uVar49 = (uVar48 - 8 >> 3) + 1;
      local_78 = lVar61 * 0x20 + uVar66 * 4 + 0x10;
      uVar2 = lVar13 + lVar60 * 4;
      uVar3 = lVar42 + 4 + uVar47 * 4;
      lVar4 = lVar13 + 0x30 + lVar60 * 4;
      lVar43 = uVar66 * 4 + 0x10;
      lVar50 = 0;
      local_40 = uVar66;
      do {
        ___bzero();
        lVar64 = *(longlong *)(*unaff_RDI + 0x10);
        if (0 < (int)param_4) {
          if (param_4 < 8) {
            uVar55 = 0;
            uVar52 = local_40;
            iVar59 = iVar46;
            do {
              fVar12 = *(float *)(lVar64 + uVar52 * 4);
              if (uVar47 == 1) {
                uVar45 = 0;
              }
              else {
                lVar44 = uVar2 + (longlong)iVar59 * 4;
                uVar57 = 0;
                do {
                  *(float *)(lVar44 + uVar57 * 4) =
                       *(float *)(lVar42 + 4 + uVar57 * 4) * fVar12 +
                       *(float *)(lVar44 + uVar57 * 4);
                  uVar45 = uVar57 + 2;
                  *(float *)(lVar44 + 4 + uVar57 * 4) =
                       *(float *)(lVar42 + 8 + uVar57 * 4) * fVar12 +
                       *(float *)(lVar44 + 4 + uVar57 * 4);
                  uVar57 = uVar45;
                } while ((param_4 & 0xfffffffe) != uVar45);
              }
              if ((param_4 & 1) != 0) {
                lVar44 = (longlong)(iVar46 + (int)uVar55) + uVar45;
                *(float *)(uVar2 + lVar44 * 4) =
                     fVar12 * *(float *)(lVar42 + 4 + uVar45 * 4) + *(float *)(uVar2 + lVar44 * 4);
              }
              uVar52 = uVar52 + lVar61;
              uVar55 = uVar55 + 1;
              iVar59 = iVar59 + 1;
            } while (uVar55 != uVar63);
          }
          else if (uVar58 == uVar47) {
            uVar55 = 0;
            uVar52 = local_40;
            iVar59 = iVar46;
            do {
              lVar44 = (longlong)(iVar46 + (int)uVar55);
              fVar12 = *(float *)(lVar64 + uVar52 * 4);
              if (((ulonglong)(lVar13 + (lVar60 + lVar44) * 4) < uVar3) &&
                 (lVar42 + 4U < lVar13 + (lVar60 + uVar47 + lVar44) * 4)) {
                if (uVar47 == 1) {
                  uVar45 = 0;
                }
                else {
                  lVar54 = uVar2 + (longlong)iVar59 * 4;
                  uVar57 = 0;
                  do {
                    *(float *)(lVar54 + uVar57 * 4) =
                         *(float *)(lVar42 + 4 + uVar57 * 4) * fVar12 +
                         *(float *)(lVar54 + uVar57 * 4);
                    uVar45 = uVar57 + 2;
                    *(float *)(lVar54 + 4 + uVar57 * 4) =
                         *(float *)(lVar42 + 8 + uVar57 * 4) * fVar12 +
                         *(float *)(lVar54 + 4 + uVar57 * 4);
                    uVar57 = uVar45;
                  } while ((param_4 & 0xfffffffe) != uVar45);
                }
                if ((param_4 & 1) != 0) {
                  *(float *)(uVar2 + (lVar44 + uVar45) * 4) =
                       fVar12 * *(float *)(lVar42 + 4 + uVar45 * 4) +
                       *(float *)(uVar2 + (lVar44 + uVar45) * 4);
                }
              }
              else {
                if (uVar1 == 0) {
                  lVar54 = 0;
                }
                else {
                  lVar56 = lVar4 + (longlong)iVar59 * 4;
                  lVar54 = 0;
                  lVar53 = -(uVar51 & 0xfffffffffffffffe);
                  do {
                    pfVar5 = (float *)(lVar42 + 4 + lVar54 * 4);
                    fVar14 = pfVar5[1];
                    fVar15 = pfVar5[2];
                    fVar16 = pfVar5[3];
                    pfVar6 = (float *)(lVar42 + 0x14 + lVar54 * 4);
                    fVar17 = *pfVar6;
                    fVar18 = pfVar6[1];
                    fVar19 = pfVar6[2];
                    fVar20 = pfVar6[3];
                    pfVar7 = (float *)(lVar56 + -0x30 + lVar54 * 4);
                    fVar21 = pfVar7[1];
                    fVar22 = pfVar7[2];
                    fVar23 = pfVar7[3];
                    pfVar6 = (float *)(lVar56 + -0x20 + lVar54 * 4);
                    fVar24 = *pfVar6;
                    fVar25 = pfVar6[1];
                    fVar26 = pfVar6[2];
                    fVar27 = pfVar6[3];
                    pfVar6 = (float *)(lVar56 + -0x10 + lVar54 * 4);
                    fVar28 = *pfVar6;
                    fVar29 = pfVar6[1];
                    fVar30 = pfVar6[2];
                    fVar31 = pfVar6[3];
                    pfVar6 = (float *)(lVar56 + lVar54 * 4);
                    fVar32 = *pfVar6;
                    fVar33 = pfVar6[1];
                    fVar34 = pfVar6[2];
                    fVar35 = pfVar6[3];
                    pfVar6 = (float *)(lVar56 + -0x30 + lVar54 * 4);
                    *pfVar6 = *pfVar7 + *pfVar5 * fVar12;
                    pfVar6[1] = fVar21 + fVar14 * fVar12;
                    pfVar6[2] = fVar22 + fVar15 * fVar12;
                    pfVar6[3] = fVar23 + fVar16 * fVar12;
                    pfVar6 = (float *)(lVar56 + -0x20 + lVar54 * 4);
                    *pfVar6 = fVar24 + fVar17 * fVar12;
                    pfVar6[1] = fVar25 + fVar18 * fVar12;
                    pfVar6[2] = fVar26 + fVar19 * fVar12;
                    pfVar6[3] = fVar27 + fVar20 * fVar12;
                    pfVar6 = (float *)(lVar42 + 0x24 + lVar54 * 4);
                    fVar14 = pfVar6[1];
                    fVar15 = pfVar6[2];
                    fVar16 = pfVar6[3];
                    pfVar5 = (float *)(lVar42 + 0x34 + lVar54 * 4);
                    fVar17 = *pfVar5;
                    fVar18 = pfVar5[1];
                    fVar19 = pfVar5[2];
                    fVar20 = pfVar5[3];
                    pfVar5 = (float *)(lVar56 + -0x10 + lVar54 * 4);
                    *pfVar5 = *pfVar6 * fVar12 + fVar28;
                    pfVar5[1] = fVar14 * fVar12 + fVar29;
                    pfVar5[2] = fVar15 * fVar12 + fVar30;
                    pfVar5[3] = fVar16 * fVar12 + fVar31;
                    pfVar6 = (float *)(lVar56 + lVar54 * 4);
                    *pfVar6 = fVar17 * fVar12 + fVar32;
                    pfVar6[1] = fVar18 * fVar12 + fVar33;
                    pfVar6[2] = fVar19 * fVar12 + fVar34;
                    pfVar6[3] = fVar20 * fVar12 + fVar35;
                    lVar54 = lVar54 + 0x10;
                    lVar53 = lVar53 + 2;
                  } while (lVar53 != 0);
                  if ((uVar51 & 1) == 0) goto LAB_01603de0;
                }
                uVar45 = lVar54 * 4 | 4;
                pfVar6 = (float *)(lVar42 + uVar45);
                fVar14 = pfVar6[1];
                fVar15 = pfVar6[2];
                fVar16 = pfVar6[3];
                pfVar5 = (float *)(lVar42 + 0x10 + uVar45);
                fVar17 = *pfVar5;
                fVar18 = pfVar5[1];
                fVar19 = pfVar5[2];
                fVar20 = pfVar5[3];
                lVar44 = lVar44 + lVar54;
                pfVar5 = (float *)(uVar2 + lVar44 * 4);
                fVar21 = pfVar5[1];
                fVar22 = pfVar5[2];
                fVar23 = pfVar5[3];
                pfVar7 = (float *)(uVar2 + 0x10 + lVar44 * 4);
                fVar24 = *pfVar7;
                fVar25 = pfVar7[1];
                fVar26 = pfVar7[2];
                fVar27 = pfVar7[3];
                pfVar7 = (float *)(uVar2 + lVar44 * 4);
                *pfVar7 = *pfVar5 + *pfVar6 * fVar12;
                pfVar7[1] = fVar21 + fVar14 * fVar12;
                pfVar7[2] = fVar22 + fVar15 * fVar12;
                pfVar7[3] = fVar23 + fVar16 * fVar12;
                pfVar6 = (float *)(uVar2 + 0x10 + lVar44 * 4);
                *pfVar6 = fVar24 + fVar17 * fVar12;
                pfVar6[1] = fVar25 + fVar18 * fVar12;
                pfVar6[2] = fVar26 + fVar19 * fVar12;
                pfVar6[3] = fVar27 + fVar20 * fVar12;
              }
LAB_01603de0:
              uVar52 = uVar52 + lVar61;
              uVar55 = uVar55 + 1;
              iVar59 = iVar59 + 1;
            } while (uVar55 != uVar63);
          }
          else {
            uVar55 = 0;
            uVar52 = local_40;
            iVar59 = iVar46;
            do {
              lVar44 = (longlong)(iVar46 + (int)uVar55);
              fVar12 = *(float *)(lVar64 + uVar52 * 4);
              if (((ulonglong)(lVar13 + (lVar60 + lVar44) * 4) < uVar3) &&
                 (lVar42 + 4U < lVar13 + (lVar60 + uVar47 + lVar44) * 4)) {
                uVar57 = 0;
              }
              else {
                if (uVar1 == 0) {
                  lVar54 = 0;
                  uVar45 = 1;
                }
                else {
                  lVar56 = lVar4 + (longlong)iVar59 * 4;
                  lVar54 = 0;
                  lVar53 = -(uVar51 & 0xfffffffffffffffe);
                  do {
                    pfVar5 = (float *)(lVar42 + 4 + lVar54 * 4);
                    fVar14 = pfVar5[1];
                    fVar15 = pfVar5[2];
                    fVar16 = pfVar5[3];
                    pfVar6 = (float *)(lVar42 + 0x14 + lVar54 * 4);
                    fVar17 = *pfVar6;
                    fVar18 = pfVar6[1];
                    fVar19 = pfVar6[2];
                    fVar20 = pfVar6[3];
                    pfVar7 = (float *)(lVar56 + -0x30 + lVar54 * 4);
                    fVar21 = pfVar7[1];
                    fVar22 = pfVar7[2];
                    fVar23 = pfVar7[3];
                    pfVar6 = (float *)(lVar56 + -0x20 + lVar54 * 4);
                    fVar24 = *pfVar6;
                    fVar25 = pfVar6[1];
                    fVar26 = pfVar6[2];
                    fVar27 = pfVar6[3];
                    pfVar6 = (float *)(lVar56 + -0x10 + lVar54 * 4);
                    fVar28 = *pfVar6;
                    fVar29 = pfVar6[1];
                    fVar30 = pfVar6[2];
                    fVar31 = pfVar6[3];
                    pfVar6 = (float *)(lVar56 + lVar54 * 4);
                    fVar32 = *pfVar6;
                    fVar33 = pfVar6[1];
                    fVar34 = pfVar6[2];
                    fVar35 = pfVar6[3];
                    pfVar6 = (float *)(lVar56 + -0x30 + lVar54 * 4);
                    *pfVar6 = *pfVar7 + *pfVar5 * fVar12;
                    pfVar6[1] = fVar21 + fVar14 * fVar12;
                    pfVar6[2] = fVar22 + fVar15 * fVar12;
                    pfVar6[3] = fVar23 + fVar16 * fVar12;
                    pfVar6 = (float *)(lVar56 + -0x20 + lVar54 * 4);
                    *pfVar6 = fVar24 + fVar17 * fVar12;
                    pfVar6[1] = fVar25 + fVar18 * fVar12;
                    pfVar6[2] = fVar26 + fVar19 * fVar12;
                    pfVar6[3] = fVar27 + fVar20 * fVar12;
                    pfVar6 = (float *)(lVar42 + 0x24 + lVar54 * 4);
                    fVar14 = pfVar6[1];
                    fVar15 = pfVar6[2];
                    fVar16 = pfVar6[3];
                    pfVar5 = (float *)(lVar42 + 0x34 + lVar54 * 4);
                    fVar17 = *pfVar5;
                    fVar18 = pfVar5[1];
                    fVar19 = pfVar5[2];
                    fVar20 = pfVar5[3];
                    pfVar5 = (float *)(lVar56 + -0x10 + lVar54 * 4);
                    *pfVar5 = *pfVar6 * fVar12 + fVar28;
                    pfVar5[1] = fVar14 * fVar12 + fVar29;
                    pfVar5[2] = fVar15 * fVar12 + fVar30;
                    pfVar5[3] = fVar16 * fVar12 + fVar31;
                    pfVar6 = (float *)(lVar56 + lVar54 * 4);
                    *pfVar6 = fVar17 * fVar12 + fVar32;
                    pfVar6[1] = fVar18 * fVar12 + fVar33;
                    pfVar6[2] = fVar19 * fVar12 + fVar34;
                    pfVar6[3] = fVar20 * fVar12 + fVar35;
                    lVar54 = lVar54 + 0x10;
                    lVar53 = lVar53 + 2;
                  } while (lVar53 != 0);
                  uVar45 = uVar51 & 1;
                }
                uVar57 = uVar58;
                if (uVar45 != 0) {
                  uVar45 = lVar54 * 4 | 4;
                  pfVar6 = (float *)(lVar42 + uVar45);
                  fVar14 = pfVar6[1];
                  fVar15 = pfVar6[2];
                  fVar16 = pfVar6[3];
                  pfVar5 = (float *)(lVar42 + 0x10 + uVar45);
                  fVar17 = *pfVar5;
                  fVar18 = pfVar5[1];
                  fVar19 = pfVar5[2];
                  fVar20 = pfVar5[3];
                  lVar54 = lVar54 + lVar44;
                  pfVar5 = (float *)(uVar2 + lVar54 * 4);
                  fVar21 = pfVar5[1];
                  fVar22 = pfVar5[2];
                  fVar23 = pfVar5[3];
                  pfVar7 = (float *)(uVar2 + 0x10 + lVar54 * 4);
                  fVar24 = *pfVar7;
                  fVar25 = pfVar7[1];
                  fVar26 = pfVar7[2];
                  fVar27 = pfVar7[3];
                  pfVar7 = (float *)(uVar2 + lVar54 * 4);
                  *pfVar7 = *pfVar5 + *pfVar6 * fVar12;
                  pfVar7[1] = fVar21 + fVar14 * fVar12;
                  pfVar7[2] = fVar22 + fVar15 * fVar12;
                  pfVar7[3] = fVar23 + fVar16 * fVar12;
                  pfVar6 = (float *)(uVar2 + 0x10 + lVar54 * 4);
                  *pfVar6 = fVar24 + fVar17 * fVar12;
                  pfVar6[1] = fVar25 + fVar18 * fVar12;
                  pfVar6[2] = fVar26 + fVar19 * fVar12;
                  pfVar6[3] = fVar27 + fVar20 * fVar12;
                }
              }
              uVar45 = uVar57;
              if ((param_4 & 1) != 0) {
                *(float *)(uVar2 + (lVar44 + uVar57) * 4) =
                     *(float *)(lVar42 + (uVar57 | 1) * 4) * fVar12 +
                     *(float *)(uVar2 + (lVar44 + uVar57) * 4);
                uVar45 = uVar57 | 1;
              }
              if (uVar47 - 1 != uVar57) {
                lVar44 = uVar2 + (longlong)iVar59 * 4;
                do {
                  *(float *)(lVar44 + uVar45 * 4) =
                       *(float *)(lVar42 + 4 + uVar45 * 4) * fVar12 +
                       *(float *)(lVar44 + uVar45 * 4);
                  *(float *)(lVar44 + 4 + uVar45 * 4) =
                       *(float *)(lVar42 + 8 + uVar45 * 4) * fVar12 +
                       *(float *)(lVar44 + 4 + uVar45 * 4);
                  uVar45 = uVar45 + 2;
                } while (uVar47 != uVar45);
              }
              uVar52 = uVar52 + lVar61;
              uVar55 = uVar55 + 1;
              iVar59 = iVar59 + 1;
            } while (uVar55 != uVar63);
          }
        }
        uVar52 = local_40;
        if (param_2 == 1 && 7 < unaff_ESI) {
          if ((lVar64 + (uVar66 + lVar50) * 4 < lVar13 + (lVar60 + uVar63) * 4) &&
             (uVar2 < lVar64 + (uVar63 + uVar66 + lVar50) * 4)) {
            uVar55 = 0;
            goto LAB_016042f0;
          }
          if (uVar48 - 8 == 0) {
            lVar44 = 0;
LAB_016042ad:
            lVar54 = lVar44 * lVar61 + local_40;
            puVar10 = (undefined4 *)(uVar2 + lVar44 * 4);
            uVar36 = puVar10[1];
            uVar37 = puVar10[2];
            uVar38 = puVar10[3];
            puVar8 = (undefined8 *)(uVar2 + 0x10 + lVar44 * 4);
            uVar39 = *puVar8;
            uVar40 = puVar8[1];
            puVar11 = (undefined4 *)(lVar64 + lVar54 * 4);
            *puVar11 = *puVar10;
            puVar11[1] = uVar36;
            puVar11[2] = uVar37;
            puVar11[3] = uVar38;
            puVar8 = (undefined8 *)(lVar64 + 0x10 + lVar54 * 4);
            *puVar8 = uVar39;
            puVar8[1] = uVar40;
          }
          else {
            lVar44 = 0;
            lVar54 = -(uVar49 & 0xfffffffffffffffe);
            lVar56 = lVar64;
            do {
              puVar8 = (undefined8 *)(lVar4 + -0x30 + lVar44 * 4);
              uVar39 = puVar8[1];
              puVar9 = (undefined8 *)(lVar4 + -0x20 + lVar44 * 4);
              uVar40 = *puVar9;
              uVar41 = puVar9[1];
              puVar9 = (undefined8 *)(lVar56 + -0x10 + lVar43);
              *puVar9 = *puVar8;
              puVar9[1] = uVar39;
              *(undefined8 *)(lVar56 + lVar43) = uVar40;
              ((undefined8 *)(lVar56 + lVar43))[1] = uVar41;
              puVar10 = (undefined4 *)(lVar4 + -0x10 + lVar44 * 4);
              uVar36 = puVar10[1];
              uVar37 = puVar10[2];
              uVar38 = puVar10[3];
              puVar8 = (undefined8 *)(lVar4 + lVar44 * 4);
              uVar39 = *puVar8;
              uVar40 = puVar8[1];
              puVar11 = (undefined4 *)(lVar56 + -0x10 + local_78);
              *puVar11 = *puVar10;
              puVar11[1] = uVar36;
              puVar11[2] = uVar37;
              puVar11[3] = uVar38;
              *(undefined8 *)(lVar56 + local_78) = uVar39;
              ((undefined8 *)(lVar56 + local_78))[1] = uVar40;
              lVar44 = lVar44 + 0x10;
              lVar56 = lVar56 + lVar61 * 0x40;
              lVar54 = lVar54 + 2;
            } while (lVar54 != 0);
            if ((uVar49 & 1) != 0) goto LAB_016042ad;
          }
          if (uVar48 != uVar63) {
            uVar52 = local_40 + uVar48 * lVar61;
            uVar55 = uVar48;
            goto LAB_016042f0;
          }
        }
        else {
          uVar55 = 0;
LAB_016042f0:
          uVar57 = ~uVar55;
          for (uVar45 = (ulonglong)(unaff_ESI & 3); uVar45 != 0; uVar45 = uVar45 - 1) {
            *(undefined4 *)(lVar64 + uVar52 * 4) = *(undefined4 *)(uVar2 + uVar55 * 4);
            uVar52 = uVar52 + lVar61;
            uVar55 = uVar55 + 1;
          }
          if (2 < uVar57 + uVar63) {
            do {
              *(undefined4 *)(lVar64 + uVar52 * 4) = *(undefined4 *)(uVar2 + uVar55 * 4);
              *(undefined4 *)(lVar64 + (uVar52 + lVar61) * 4) =
                   *(undefined4 *)(uVar2 + 4 + uVar55 * 4);
              *(undefined4 *)(lVar64 + lVar61 * 8 + uVar52 * 4) =
                   *(undefined4 *)(uVar2 + 8 + uVar55 * 4);
              *(undefined4 *)(lVar64 + lVar61 * 0xc + uVar52 * 4) =
                   *(undefined4 *)(uVar2 + 0xc + uVar55 * 4);
              uVar55 = uVar55 + 4;
              lVar64 = lVar64 + lVar61 * 0x10;
            } while (uVar63 != uVar55);
          }
        }
        local_40 = local_40 + 1;
        lVar50 = lVar50 + 1;
        local_78 = local_78 + 4;
        lVar43 = lVar43 + 4;
      } while ((int)local_40 != param_3);
    }
  }
  if (local_a0 != 0) {
    FUN_00d50b20();
  }
  return;
}


