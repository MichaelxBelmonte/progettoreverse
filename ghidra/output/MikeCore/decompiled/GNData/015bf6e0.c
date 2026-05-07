// Function: FUN_015bf6e0
// Address: 015bf6e0
// Size: 5094 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x015bf816) */

void FUN_015bf6e0(float param_1,ulonglong param_2,char param_3,float *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint in_ECX;
  uint uVar17;
  ulonglong uVar18;
  float *pfVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  ulonglong *unaff_RSI;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  float *pfVar32;
  longlong unaff_RDI;
  ulonglong uVar33;
  float *pfVar34;
  longlong lVar35;
  int iVar36;
  longlong lVar37;
  float *pfVar38;
  float *pfVar39;
  longlong lVar40;
  uint uVar41;
  longlong lVar42;
  float *pfVar43;
  float *pfVar44;
  float *pfVar45;
  longlong lVar46;
  longlong lVar47;
  uint uVar48;
  undefined4 *puVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar53 [16];
  ulonglong local_48;
  
  uVar20 = (uint)param_2;
  if ((int)uVar20 < 1) {
    return;
  }
  if (param_1 < DAT_02390124) {
    return;
  }
  iVar14 = FUN_00e7d780();
  uVar48 = iVar14 * 2 + 1;
  uVar16 = (ulonglong)uVar48;
  uVar17 = (iVar14 * 2 - ((int)uVar48 >> 0x1f)) + 1 >> 1;
  local_48 = (ulonglong)uVar17;
  if (param_3 == '\0') {
    if (*(int *)(unaff_RDI + 0x20) < (int)uVar48) {
      if (*(longlong *)(unaff_RDI + 0x10) != 0) {
        FUN_00e83070();
        *(undefined8 *)(unaff_RDI + 0x10) = 0;
      }
      lVar15 = FUN_00e83010();
      *(longlong *)(unaff_RDI + 0x10) = lVar15;
      *(uint *)(unaff_RDI + 0x20) = uVar48;
    }
    else {
      lVar15 = *(longlong *)(unaff_RDI + 0x10);
    }
    lVar47 = (longlong)(int)uVar17;
    *(undefined4 *)(lVar15 + lVar47 * 4) = 0x3f800000;
    fVar52 = 0.0;
    if (1 < (int)uVar48) {
      param_1 = DAT_02394294 / param_1;
      uVar18 = (ulonglong)(uVar17 + 1) - 1;
      if (uVar17 + 1 == 2) {
        fVar52 = 0.0;
        lVar29 = 1;
      }
      else {
        lVar42 = lVar15 + lVar47 * 4;
        puVar49 = (undefined4 *)(lVar42 + -4);
        fVar52 = 0.0;
        lVar29 = 1;
        do {
          uVar50 = _sinf((float)(int)lVar29 * param_1 + DAT_02394294);
          *(undefined4 *)(lVar42 + lVar29 * 4) = uVar50;
          *puVar49 = uVar50;
          fVar51 = *(float *)(lVar42 + lVar29 * 4);
          uVar50 = _sinf((float)((int)lVar29 + 1) * param_1 + DAT_02394294);
          *(undefined4 *)(lVar42 + 4 + lVar29 * 4) = uVar50;
          puVar49[-1] = uVar50;
          fVar52 = fVar52 + fVar51 + *(float *)(lVar42 + 4 + lVar29 * 4);
          puVar49 = puVar49 + -2;
          lVar24 = lVar29 - (uVar18 & 0xfffffffffffffffe);
          lVar29 = lVar29 + 2;
        } while (lVar24 != -1);
        if ((uVar18 & 1) == 0) goto LAB_015bf955;
      }
      uVar50 = _sinf(param_1 * (float)(int)lVar29 + DAT_02394294);
      *(undefined4 *)(lVar15 + (lVar29 + lVar47) * 4) = uVar50;
      *(undefined4 *)(lVar15 + (lVar47 - lVar29) * 4) = uVar50;
      fVar52 = fVar52 + *(float *)(lVar15 + (lVar29 + lVar47) * 4);
    }
LAB_015bf955:
    if (0 < (int)uVar48) {
      fVar52 = fVar52 + fVar52 + DAT_02390124;
      if (uVar48 < 4) {
        uVar18 = 0;
      }
      else {
        uVar18 = (ulonglong)(uVar48 & 0xfffffffc);
        uVar23 = (uVar18 - 4 >> 2) + 1;
        if (uVar18 - 4 == 0) {
          lVar47 = 0;
        }
        else {
          lVar42 = -(uVar23 & 0xfffffffffffffffe);
          lVar47 = 0;
          do {
            auVar53._4_4_ = fVar52;
            auVar53._0_4_ = fVar52;
            auVar53._8_4_ = fVar52;
            auVar53._12_4_ = fVar52;
            auVar53 = divps(*(undefined1 (*) [16])(lVar15 + lVar47 * 4),auVar53);
            *(undefined1 (*) [16])(lVar15 + lVar47 * 4) = auVar53;
            auVar4._4_4_ = fVar52;
            auVar4._0_4_ = fVar52;
            auVar4._8_4_ = fVar52;
            auVar4._12_4_ = fVar52;
            auVar53 = divps(*(undefined1 (*) [16])(lVar15 + 0x10 + lVar47 * 4),auVar4);
            *(undefined1 (*) [16])(lVar15 + 0x10 + lVar47 * 4) = auVar53;
            lVar47 = lVar47 + 8;
            lVar42 = lVar42 + 2;
          } while (lVar42 != 0);
          if ((uVar23 & 1) == 0) goto LAB_015bfa00;
        }
        auVar5._4_4_ = fVar52;
        auVar5._0_4_ = fVar52;
        auVar5._8_4_ = fVar52;
        auVar5._12_4_ = fVar52;
        auVar53 = divps(*(undefined1 (*) [16])(lVar15 + lVar47 * 4),auVar5);
        *(undefined1 (*) [16])(lVar15 + lVar47 * 4) = auVar53;
      }
LAB_015bfa00:
      do {
        *(float *)(lVar15 + uVar18 * 4) = *(float *)(lVar15 + uVar18 * 4) / fVar52;
        uVar18 = uVar18 + 1;
      } while (uVar16 != uVar18);
    }
  }
  else {
    if ((int)uVar48 < 3) {
      return;
    }
    if (0xff < (int)uVar48) {
      local_48 = 0x7f;
    }
    uVar17 = 0xff;
    if ((int)uVar48 < 0x100) {
      uVar17 = uVar48;
    }
    lVar15 = FUN_00e84a00();
    lVar15 = lVar15 + 4;
    uVar16 = (ulonglong)uVar17;
  }
  uVar17 = (uint)uVar16;
  if ((int)(uVar17 + uVar20) < *(int *)(unaff_RDI + 0x24)) {
    lVar47 = *(longlong *)(unaff_RDI + 0x18);
  }
  else {
    if (*(longlong *)(unaff_RDI + 0x18) != 0) {
      FUN_00e83070();
      *(undefined8 *)(unaff_RDI + 0x18) = 0;
    }
    lVar47 = FUN_00e83010();
    *(longlong *)(unaff_RDI + 0x18) = lVar47;
    *(uint *)(unaff_RDI + 0x24) = uVar20 + uVar17 + 1;
  }
  uVar48 = (uint)local_48;
  lVar42 = (longlong)(int)uVar48;
  pfVar19 = (float *)(lVar42 * 4 + lVar47);
  if (0 < (int)uVar20) {
    uVar18 = *unaff_RSI;
    uVar23 = param_2 & 0xffffffff;
    if ((uVar20 < 8) ||
       ((pfVar19 < (float *)(uVar18 + uVar23 * 4) && (uVar18 < (lVar42 + uVar23) * 4 + lVar47)))) {
      uVar21 = 0;
    }
    else {
      uVar21 = (ulonglong)(uVar20 & 0xfffffff8);
      uVar33 = (uVar21 - 8 >> 3) + 1;
      uVar28 = (ulonglong)((uint)uVar33 & 3);
      if (uVar21 - 8 < 0x18) {
        lVar29 = 0;
      }
      else {
        lVar24 = lVar42 * 4 + 0x70 + lVar47;
        lVar30 = -(uVar33 & 0xfffffffffffffffc);
        lVar29 = 0;
        do {
          puVar1 = (undefined8 *)(uVar18 + lVar29 * 4);
          uVar11 = puVar1[1];
          puVar2 = (undefined8 *)(uVar18 + 0x10 + lVar29 * 4);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          puVar2 = (undefined8 *)(lVar24 + -0x70 + lVar29 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar11;
          puVar1 = (undefined8 *)(lVar24 + -0x60 + lVar29 * 4);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1 = (undefined8 *)(uVar18 + 0x20 + lVar29 * 4);
          uVar11 = puVar1[1];
          puVar2 = (undefined8 *)(uVar18 + 0x30 + lVar29 * 4);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          puVar2 = (undefined8 *)(lVar24 + -0x50 + lVar29 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar11;
          puVar1 = (undefined8 *)(lVar24 + -0x40 + lVar29 * 4);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar1 = (undefined8 *)(uVar18 + 0x40 + lVar29 * 4);
          uVar11 = puVar1[1];
          puVar2 = (undefined8 *)(uVar18 + 0x50 + lVar29 * 4);
          uVar12 = *puVar2;
          uVar13 = puVar2[1];
          puVar2 = (undefined8 *)(lVar24 + -0x30 + lVar29 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar11;
          puVar1 = (undefined8 *)(lVar24 + -0x20 + lVar29 * 4);
          *puVar1 = uVar12;
          puVar1[1] = uVar13;
          puVar49 = (undefined4 *)(uVar18 + 0x60 + lVar29 * 4);
          uVar50 = puVar49[1];
          uVar7 = puVar49[2];
          uVar8 = puVar49[3];
          auVar53 = *(undefined1 (*) [16])(uVar18 + 0x70 + lVar29 * 4);
          puVar3 = (undefined4 *)(lVar24 + -0x10 + lVar29 * 4);
          *puVar3 = *puVar49;
          puVar3[1] = uVar50;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          *(undefined1 (*) [16])(lVar24 + lVar29 * 4) = auVar53;
          lVar29 = lVar29 + 0x20;
          lVar30 = lVar30 + 4;
        } while (lVar30 != 0);
      }
      if (uVar28 != 0) {
        lVar30 = (lVar29 + lVar42) * 4 + 0x10 + lVar47;
        lVar29 = uVar18 + lVar29 * 4;
        lVar24 = 0;
        do {
          puVar49 = (undefined4 *)(lVar29 + lVar24);
          uVar50 = puVar49[1];
          uVar7 = puVar49[2];
          uVar8 = puVar49[3];
          auVar53 = *(undefined1 (*) [16])(lVar29 + 0x10 + lVar24);
          puVar3 = (undefined4 *)(lVar30 + -0x10 + lVar24);
          *puVar3 = *puVar49;
          puVar3[1] = uVar50;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          *(undefined1 (*) [16])(lVar30 + lVar24) = auVar53;
          lVar24 = lVar24 + 0x20;
        } while (uVar28 << 5 != lVar24);
      }
      if (uVar21 == uVar23) goto LAB_015bfc28;
    }
    uVar28 = ~uVar21;
    for (uVar33 = param_2 & 3; uVar33 != 0; uVar33 = uVar33 - 1) {
      pfVar19[uVar21] = *(float *)(uVar18 + uVar21 * 4);
      uVar21 = uVar21 + 1;
    }
    if (2 < uVar28 + uVar23) {
      lVar29 = lVar42 * 4 + 0xc + lVar47;
      do {
        *(undefined4 *)(lVar29 + -0xc + uVar21 * 4) = *(undefined4 *)(uVar18 + uVar21 * 4);
        *(undefined4 *)(lVar29 + -8 + uVar21 * 4) = *(undefined4 *)(uVar18 + 4 + uVar21 * 4);
        *(undefined4 *)(lVar29 + -4 + uVar21 * 4) = *(undefined4 *)(uVar18 + 8 + uVar21 * 4);
        *(undefined4 *)(lVar29 + uVar21 * 4) = *(undefined4 *)(uVar18 + 0xc + uVar21 * 4);
        uVar21 = uVar21 + 4;
      } while (uVar23 != uVar21);
    }
  }
LAB_015bfc28:
  if (param_4 == (float *)0x0) {
    lVar29 = 0;
    fVar52 = DAT_02390124;
  }
  else {
    lVar29 = FUN_00e83010();
    ___bzero();
    fVar52 = DAT_02390124;
  }
  DAT_02390124 = fVar52;
  if (in_ECX < 7) {
    switch(in_ECX) {
    case 0:
      if (0 < (int)uVar48) {
        lVar24 = 1;
        if (uVar48 != 1) {
          puVar49 = (undefined4 *)(lVar42 * 4 + -4 + lVar47);
          lVar47 = (lVar42 + (int)(uVar20 - 1)) * 4 + 4 + lVar47;
          lVar24 = 1;
          do {
            *puVar49 = 0;
            *(undefined4 *)(lVar47 + -4 + lVar24 * 4) = 0;
            puVar49[-1] = 0;
            *(undefined4 *)(lVar47 + lVar24 * 4) = 0;
            puVar49 = puVar49 + -2;
            lVar42 = lVar24 - (ulonglong)(uVar48 & 0xfffffffe);
            lVar24 = lVar24 + 2;
          } while (lVar42 != -1);
        }
        if ((local_48 & 1) != 0) {
          pfVar19[-lVar24] = 0.0;
          pfVar19[(int)(uVar20 - 1) + lVar24] = 0.0;
        }
      }
      break;
    default:
      if (0 < (int)uVar48) {
        uVar41 = uVar20 - 1;
        lVar24 = 1;
        if (uVar48 != 1) {
          pfVar34 = (float *)(lVar42 * 4 + -4 + lVar47);
          lVar47 = (lVar42 + (int)uVar41) * 4 + 4 + lVar47;
          lVar24 = 1;
          do {
            *pfVar34 = *pfVar19;
            *(float *)(lVar47 + -4 + lVar24 * 4) = pfVar19[uVar41];
            pfVar34[-1] = *pfVar19;
            *(float *)(lVar47 + lVar24 * 4) = pfVar19[uVar41];
            pfVar34 = pfVar34 + -2;
            lVar42 = lVar24 - (ulonglong)(uVar48 & 0xfffffffe);
            lVar24 = lVar24 + 2;
          } while (lVar42 != -1);
        }
        if ((local_48 & 1) != 0) {
          pfVar19[-lVar24] = *pfVar19;
          pfVar19[(int)uVar41 + lVar24] = pfVar19[uVar41];
        }
      }
      break;
    case 2:
      if (0 < (int)uVar48) {
        iVar14 = uVar20 - 1;
        uVar18 = local_48 + 1;
        uVar23 = 1;
        if (((uVar48 < 4) || ((int)((uVar48 - 1) + uVar20) < (int)uVar20)) ||
           ((pfVar34 = (float *)(uVar18 * 4 - 8), (float *)(lVar42 * 4 + -4 + lVar47) < pfVar34 ||
            (pfVar19 + (longlong)iVar14 + -1 < pfVar34)))) {
LAB_015c0304:
          uVar21 = ~uVar23;
        }
        else {
          pfVar44 = (float *)(((int)uVar20 + lVar42) * 4 + lVar47);
          pfVar39 = (float *)(((int)uVar20 + lVar42 + uVar18) * 4 + -4 + lVar47);
          pfVar38 = (float *)(lVar42 * 4 + 4 + lVar47);
          pfVar45 = (float *)((lVar42 + uVar18) * 4 + lVar47);
          pfVar43 = (float *)(((lVar42 + 1) - uVar18) * 4 + lVar47);
          lVar24 = iVar14 + lVar42;
          pfVar32 = (float *)(lVar24 * 4 + lVar47);
          pfVar34 = (float *)(lVar47 + 4 + (lVar24 - uVar18) * 4);
          if (pfVar45 <= pfVar44 || pfVar39 <= pfVar38) {
            if ((((pfVar19 <= pfVar44 || pfVar39 <= pfVar43) &&
                 (pfVar32 <= pfVar44 || pfVar39 <= pfVar34)) &&
                (pfVar19 <= pfVar38 || pfVar45 <= pfVar43)) &&
               (pfVar32 <= pfVar43 || pfVar19 <= pfVar34)) {
              uVar33 = (ulonglong)(uVar48 & 0xfffffffc);
              uVar23 = uVar33 + 1;
              iVar25 = uVar20 - 2;
              pfVar34 = (float *)(lVar42 * 4 + -0x10 + lVar47);
              uVar21 = 0;
              do {
                pfVar32 = pfVar19 + uVar21 + 1;
                fVar51 = *pfVar32;
                fVar9 = pfVar32[1];
                fVar10 = pfVar32[2];
                *pfVar34 = pfVar32[3];
                pfVar34[1] = fVar10;
                pfVar34[2] = fVar9;
                pfVar34[3] = fVar51;
                pfVar39 = pfVar19 + (longlong)iVar25 + -3;
                fVar51 = *pfVar39;
                fVar9 = pfVar39[1];
                fVar10 = pfVar39[2];
                pfVar32 = pfVar19 + (int)(uVar20 + (int)uVar21);
                *pfVar32 = pfVar39[3];
                pfVar32[1] = fVar10;
                pfVar32[2] = fVar9;
                pfVar32[3] = fVar51;
                uVar21 = uVar21 + 4;
                iVar25 = iVar25 + -4;
                pfVar34 = pfVar34 + -4;
              } while (uVar33 != uVar21);
              if (local_48 == uVar33) break;
            }
            goto LAB_015c0304;
          }
          uVar21 = 0xfffffffffffffffe;
        }
        if ((uVar18 & 1) == 0) {
          pfVar19[-uVar23] = pfVar19[uVar23];
          pfVar19[iVar14 + (int)uVar23] = pfVar19[iVar14 - (int)uVar23];
          uVar23 = uVar23 + 1;
        }
        if (uVar21 + uVar18 != 0) {
          lVar24 = (lVar42 - uVar23) * 4 + lVar47;
          iVar14 = uVar20 + (int)uVar23;
          iVar25 = uVar20 - (int)uVar23;
          puVar49 = (undefined4 *)((uVar23 + lVar42) * 4 + 4 + lVar47);
          lVar47 = 0;
          do {
            *(undefined4 *)(lVar24 + lVar47 * 4) = puVar49[-1];
            pfVar19[iVar14 + -1] = pfVar19[iVar25 + -1 + (int)lVar47];
            *(undefined4 *)(lVar24 + -4 + lVar47 * 4) = *puVar49;
            pfVar19[iVar14] = pfVar19[iVar25 + -2 + (int)lVar47];
            lVar47 = lVar47 + -2;
            iVar14 = iVar14 + 2;
            puVar49 = puVar49 + 2;
          } while (uVar23 - uVar18 != lVar47);
        }
      }
      break;
    case 3:
      if (0 < (int)uVar48) {
        pfVar34 = (float *)(lVar42 * 4 + -4 + lVar47);
        uVar18 = 0;
        do {
          *pfVar34 = (*pfVar19 - pfVar19[uVar18 + 1]) + *pfVar19;
          pfVar19[(int)(uVar20 + (int)uVar18)] =
               (pfVar19[uVar20 - 1] - pfVar34[(int)(uVar20 - 1)]) + pfVar19[uVar20 - 1];
          uVar18 = uVar18 + 1;
          pfVar34 = pfVar34 + -1;
        } while (local_48 != uVar18);
      }
      break;
    case 4:
      break;
    case 6:
      if (0 < (int)uVar48) {
        lVar24 = (longlong)(int)uVar20;
        lVar30 = (longlong)(int)(uVar20 - 1);
        uVar18 = local_48 + 1;
        uVar23 = 1;
        if (((3 < uVar48) &&
            (uVar21 = uVar18 * 4 - 8, uVar21 <= (ulonglong)(lVar42 * 4 + -4 + lVar47))) &&
           (uVar21 <= (lVar24 * 4 + lVar47 + lVar42 * 4) - 4U)) {
          pfVar45 = (float *)((lVar42 + lVar30) * 4 + 4 + lVar47);
          pfVar32 = (float *)((lVar42 + lVar30 + uVar18) * 4 + lVar47);
          pfVar44 = (float *)((lVar42 - uVar18) * 4 + 4 + lVar47);
          pfVar34 = (float *)(lVar47 + (lVar42 + lVar24) * 4);
          pfVar39 = (float *)(lVar47 + ((lVar42 + lVar24) - uVar18) * 4 + 4);
          if (((pfVar32 <= pfVar19 || (float *)((lVar42 + uVar18) * 4 + -4 + lVar47) <= pfVar45) &&
              (pfVar19 <= pfVar45 || pfVar32 <= pfVar44)) &&
             ((pfVar34 <= pfVar45 || pfVar32 <= pfVar39 &&
              (pfVar34 <= pfVar44 || pfVar19 <= pfVar39)))) {
            uVar23 = (ulonglong)(uVar48 & 0xfffffffc);
            uVar21 = (uVar23 - 4 >> 2) + 1;
            if (uVar23 - 4 == 0) {
              uVar33 = 0;
            }
            else {
              lVar22 = lVar42 * 4;
              lVar46 = lVar47 + lVar30 * 4 + 0x14;
              lVar35 = lVar47 + -0x10;
              lVar31 = lVar47 + lVar24 * 4 + -0x10;
              lVar37 = lVar47 + 0x10;
              lVar40 = -(uVar21 & 0xfffffffffffffffe);
              uVar33 = 0;
              do {
                uVar11 = ((undefined8 *)(lVar31 + lVar22))[1];
                *(undefined8 *)(lVar35 + lVar22) = *(undefined8 *)(lVar31 + lVar22);
                ((undefined8 *)(lVar35 + lVar22))[1] = uVar11;
                puVar1 = (undefined8 *)(lVar37 + -0x10 + lVar22);
                uVar11 = puVar1[1];
                puVar2 = (undefined8 *)(lVar46 + -0x10 + lVar22);
                *puVar2 = *puVar1;
                puVar2[1] = uVar11;
                puVar1 = (undefined8 *)(lVar31 + -0x10 + lVar22);
                uVar11 = puVar1[1];
                puVar2 = (undefined8 *)(lVar35 + -0x10 + lVar22);
                *puVar2 = *puVar1;
                puVar2[1] = uVar11;
                puVar49 = (undefined4 *)(lVar37 + lVar22);
                uVar50 = puVar49[1];
                uVar7 = puVar49[2];
                uVar8 = puVar49[3];
                puVar3 = (undefined4 *)(lVar46 + lVar22);
                *puVar3 = *puVar49;
                puVar3[1] = uVar50;
                puVar3[2] = uVar7;
                puVar3[3] = uVar8;
                uVar33 = uVar33 + 8;
                lVar46 = lVar46 + 0x20;
                lVar35 = lVar35 + -0x20;
                lVar31 = lVar31 + -0x20;
                lVar37 = lVar37 + 0x20;
                lVar40 = lVar40 + 2;
              } while (lVar40 != 0);
            }
            if ((uVar21 & 1) != 0) {
              uVar21 = uVar33 | 1;
              uVar11 = *(undefined8 *)(pfVar19 + (lVar24 - uVar21) + -3 + 2);
              *(undefined8 *)(pfVar19 + (-3 - uVar21)) =
                   *(undefined8 *)(pfVar19 + (lVar24 - uVar21) + -3);
              *(undefined8 *)(pfVar19 + (-3 - uVar21) + 2) = uVar11;
              pfVar34 = pfVar19 + uVar33;
              fVar51 = pfVar34[1];
              fVar9 = pfVar34[2];
              fVar10 = pfVar34[3];
              pfVar32 = pfVar19 + uVar21 + lVar30;
              *pfVar32 = *pfVar34;
              pfVar32[1] = fVar51;
              pfVar32[2] = fVar9;
              pfVar32[3] = fVar10;
            }
            if (local_48 == uVar23) break;
            uVar23 = uVar23 | 1;
          }
        }
        uVar21 = ~uVar23;
        if ((uVar18 & 1) == 0) {
          pfVar19[-uVar23] = pfVar19[lVar24 - uVar23];
          pfVar19[uVar23 + lVar30] = pfVar19[uVar23 - 1];
          uVar23 = uVar23 + 1;
        }
        if (uVar21 + uVar18 != 0) {
          lVar22 = uVar18 - uVar23;
          lVar31 = lVar42 - uVar23;
          lVar35 = uVar23 + lVar42;
          lVar30 = lVar30 + lVar35;
          lVar42 = (lVar24 + lVar42) - uVar23;
          do {
            *(undefined4 *)(lVar47 + lVar31 * 4) = *(undefined4 *)(lVar47 + lVar42 * 4);
            *(undefined4 *)(lVar47 + lVar30 * 4) = *(undefined4 *)(lVar47 + -4 + lVar35 * 4);
            *(undefined4 *)(lVar47 + -4 + lVar31 * 4) = *(undefined4 *)(lVar47 + -4 + lVar42 * 4);
            *(undefined4 *)(lVar47 + 4 + lVar30 * 4) = *(undefined4 *)(lVar47 + lVar35 * 4);
            lVar31 = lVar31 + -2;
            lVar35 = lVar35 + 2;
            lVar30 = lVar30 + 2;
            lVar42 = lVar42 + -2;
            lVar22 = lVar22 + -2;
          } while (lVar22 != 0);
        }
      }
    }
  }
  if (param_4 == (float *)0x0) {
    if (in_ECX == 5) {
      if (0 < (int)uVar20) {
        uVar18 = *unaff_RSI;
        if ((int)uVar17 < 1) {
          ___bzero();
          fVar52 = DAT_02390124;
        }
        else {
          uVar41 = -uVar48;
          uVar23 = 0;
          do {
            *(undefined4 *)(uVar18 + uVar23 * 4) = 0;
            fVar51 = 0.0;
            if (uVar17 == 1) {
              uVar21 = 0;
            }
            else {
              uVar21 = 0;
              uVar26 = uVar41;
              do {
                if ((-1 < (int)uVar26) && ((int)uVar26 < (int)uVar20)) {
                  fVar51 = fVar51 + pfVar19[uVar26] * *(float *)(lVar15 + uVar21 * 4);
                  *(float *)(uVar18 + uVar23 * 4) = fVar51;
                }
                uVar27 = uVar26 + 1;
                if ((-1 < (int)uVar27) && ((int)uVar27 < (int)uVar20)) {
                  fVar51 = fVar51 + pfVar19[uVar27] * *(float *)(lVar15 + 4 + uVar21 * 4);
                  *(float *)(uVar18 + uVar23 * 4) = fVar51;
                }
                uVar21 = uVar21 + 2;
                uVar26 = uVar26 + 2;
              } while ((uVar17 & 0xfffffffe) != uVar21);
            }
            if ((((uVar16 & 1) != 0) &&
                (uVar26 = (int)uVar21 + ((int)uVar23 - uVar48), -1 < (int)uVar26)) &&
               ((int)uVar26 < (int)uVar20)) {
              *(float *)(uVar18 + uVar23 * 4) =
                   fVar51 + pfVar19[uVar26] * *(float *)(lVar15 + uVar21 * 4);
            }
            uVar23 = uVar23 + 1;
            uVar41 = uVar41 + 1;
          } while (uVar23 != (param_2 & 0xffffffff));
        }
      }
      fVar51 = DAT_023b3e04;
      if (0 < (int)uVar48) {
        uVar18 = *unaff_RSI;
        if ((int)uVar17 < 1) {
          if (uVar48 == 1) {
            uVar16 = 0;
          }
          else {
            uVar16 = 0;
            uVar17 = uVar20;
            do {
              uVar41 = uVar17 - 2;
              *(float *)(uVar18 + uVar16 * 4) = *(float *)(uVar18 + uVar16 * 4) * fVar51;
              *(float *)(uVar18 + (longlong)(int)(uVar17 - 1) * 4) =
                   *(float *)(uVar18 + (longlong)(int)(uVar17 - 1) * 4) * fVar51;
              *(float *)(uVar18 + 4 + uVar16 * 4) = *(float *)(uVar18 + 4 + uVar16 * 4) * fVar51;
              *(float *)(uVar18 + (longlong)(int)uVar41 * 4) =
                   *(float *)(uVar18 + (longlong)(int)uVar41 * 4) * fVar51;
              uVar16 = uVar16 + 2;
              uVar17 = uVar41;
            } while ((uVar48 & 0xfffffffe) != uVar16);
          }
          fVar52 = DAT_023b3e04;
          if ((local_48 & 1) != 0) {
            *(float *)(uVar18 + uVar16 * 4) = *(float *)(uVar18 + uVar16 * 4) * DAT_023b3e04;
            lVar15 = (longlong)(int)(~(uint)uVar16 + uVar20);
            *(float *)(uVar18 + lVar15 * 4) = fVar52 * *(float *)(uVar18 + lVar15 * 4);
          }
        }
        else {
          iVar14 = 1;
          uVar23 = 0;
          do {
            fVar51 = 0.0;
            uVar21 = 0;
            uVar41 = (uint)uVar23;
            if (uVar17 != 1) {
              do {
                if ((int)uVar48 <= (int)(uVar41 + (int)uVar21)) {
                  fVar51 = fVar51 + *(float *)(lVar15 + uVar21 * 4);
                }
                if ((int)uVar48 <= iVar14 + (int)uVar21) {
                  fVar51 = fVar51 + *(float *)(lVar15 + 4 + uVar21 * 4);
                }
                uVar21 = uVar21 + 2;
              } while ((uVar17 & 0xfffffffe) != uVar21);
            }
            if (((uVar16 & 1) != 0) && ((int)uVar48 <= (int)((int)uVar21 + uVar41))) {
              fVar51 = fVar51 + *(float *)(lVar15 + uVar21 * 4);
            }
            *(float *)(uVar18 + uVar23 * 4) = *(float *)(uVar18 + uVar23 * 4) * (fVar52 / fVar51);
            *(float *)(uVar18 + (longlong)(int)(~uVar41 + uVar20) * 4) =
                 (fVar52 / fVar51) * *(float *)(uVar18 + (longlong)(int)(~uVar41 + uVar20) * 4);
            uVar23 = uVar23 + 1;
            iVar14 = iVar14 + 1;
          } while (uVar23 != local_48);
        }
      }
    }
    else if (0 < (int)uVar20) {
      uVar18 = *unaff_RSI;
      if ((int)uVar17 < 1) {
        ___bzero();
      }
      else {
        iVar14 = -uVar48;
        uVar23 = 0;
        do {
          *(undefined4 *)(uVar18 + uVar23 * 4) = 0;
          fVar52 = 0.0;
          if (uVar17 == 1) {
            uVar21 = 0;
          }
          else {
            uVar21 = 0;
            iVar25 = iVar14;
            do {
              fVar52 = pfVar19[iVar25] * *(float *)(lVar15 + uVar21 * 4) + fVar52;
              *(float *)(uVar18 + uVar23 * 4) = fVar52;
              fVar52 = pfVar19[iVar25 + 1] * *(float *)(lVar15 + 4 + uVar21 * 4) + fVar52;
              *(float *)(uVar18 + uVar23 * 4) = fVar52;
              uVar21 = uVar21 + 2;
              iVar25 = iVar25 + 2;
            } while ((uVar17 & 0xfffffffe) != uVar21);
          }
          if ((uVar16 & 1) != 0) {
            *(float *)(uVar18 + uVar23 * 4) =
                 fVar52 + pfVar19[(int)(((int)uVar23 - uVar48) + (int)uVar21)] *
                          *(float *)(lVar15 + uVar21 * 4);
          }
          uVar23 = uVar23 + 1;
          iVar14 = iVar14 + 1;
        } while (uVar23 != (param_2 & 0xffffffff));
      }
    }
  }
  else if (0 < (int)uVar20) {
    uVar18 = *unaff_RSI;
    if ((int)uVar17 < 1) {
      if ((param_2 & 0xffffffff) - 1 < 7) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        do {
          puVar1 = (undefined8 *)(uVar18 + uVar16 * 4);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(uVar18 + 0x10 + uVar16 * 4);
          *puVar1 = 0;
          puVar1[1] = 0;
          uVar16 = uVar16 + 8;
        } while ((uVar20 & 0xfffffff8) != uVar16);
      }
      if ((ulonglong)(uVar20 & 7) != 0) {
        uVar23 = 0;
        do {
          *(undefined4 *)(uVar18 + uVar16 * 4 + uVar23 * 4) = 0;
          uVar23 = uVar23 + 1;
        } while ((uVar20 & 7) != uVar23);
      }
    }
    else {
      uVar21 = (ulonglong)-uVar48;
      iVar14 = uVar20 + uVar48 * 2;
      uVar23 = 0;
      do {
        iVar14 = iVar14 + -1;
        *(undefined4 *)(uVar18 + uVar23 * 4) = 0;
        if (in_ECX == 5) {
          uVar33 = 0;
          do {
            fVar51 = 0.0;
            iVar25 = (int)(uVar21 + uVar33);
            if ((-1 < iVar25) && (iVar25 < (int)uVar20)) {
              fVar51 = *(float *)(lVar15 + uVar33 * 4) * param_4[uVar21 + uVar33 & 0xffffffff];
            }
            *(float *)(lVar29 + uVar23 * 4) = *(float *)(lVar29 + uVar23 * 4) + fVar51;
            *(float *)(uVar18 + uVar23 * 4) =
                 fVar51 * pfVar19[iVar25] + *(float *)(uVar18 + uVar23 * 4);
            uVar33 = uVar33 + 1;
          } while (uVar16 != uVar33);
        }
        else {
          uVar33 = uVar23 & 0xffffffff;
          lVar47 = 0;
          iVar25 = iVar14;
          do {
            iVar36 = (int)uVar33;
            uVar17 = -uVar48 + iVar36;
            if ((int)uVar17 < 0) {
              fVar51 = *(float *)(lVar15 + lVar47) * *param_4;
              iVar6 = iVar36;
LAB_015c0539:
              fVar51 = (float)iVar6 * (fVar52 / (float)(int)uVar48) * fVar51;
            }
            else {
              if ((int)uVar20 <= (int)uVar17) {
                fVar51 = *(float *)(lVar15 + lVar47) * param_4[uVar20 - 1];
                iVar6 = iVar25;
                goto LAB_015c0539;
              }
              fVar51 = *(float *)(lVar15 + lVar47) * param_4[uVar17];
            }
            *(float *)(lVar29 + uVar23 * 4) = *(float *)(lVar29 + uVar23 * 4) + fVar51;
            *(float *)(uVar18 + uVar23 * 4) =
                 fVar51 * pfVar19[(int)uVar17] + *(float *)(uVar18 + uVar23 * 4);
            lVar47 = lVar47 + 4;
            uVar33 = (ulonglong)(iVar36 + 1);
            iVar25 = iVar25 + -1;
          } while (uVar16 * 4 != lVar47);
        }
        uVar23 = uVar23 + 1;
        uVar21 = uVar21 + 1;
      } while (uVar23 != (param_2 & 0xffffffff));
    }
    fVar52 = DAT_02394274;
    if (uVar20 == 1) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      do {
        fVar51 = *(float *)(lVar29 + uVar16 * 4);
        if (fVar51 <= fVar52) {
          fVar51 = *(float *)(lVar29 + 4 + uVar16 * 4);
        }
        else {
          *(float *)(*unaff_RSI + uVar16 * 4) = *(float *)(*unaff_RSI + uVar16 * 4) / fVar51;
          fVar51 = *(float *)(lVar29 + 4 + uVar16 * 4);
        }
        if (fVar52 < fVar51) {
          *(float *)(*unaff_RSI + 4 + uVar16 * 4) = *(float *)(*unaff_RSI + 4 + uVar16 * 4) / fVar51
          ;
        }
        uVar16 = uVar16 + 2;
      } while ((uVar20 & 0xfffffffe) != uVar16);
    }
    if (((param_2 & 1) != 0) && (fVar52 = *(float *)(lVar29 + uVar16 * 4), DAT_02394274 < fVar52)) {
      *(float *)(*unaff_RSI + uVar16 * 4) = *(float *)(*unaff_RSI + uVar16 * 4) / fVar52;
    }
    goto LAB_015c0a92;
  }
  if (lVar29 == 0) {
    return;
  }
LAB_015c0a92:
  FUN_00e83070();
  return;
}


