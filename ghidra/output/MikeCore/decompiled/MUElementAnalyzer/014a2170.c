// Function: FUN_014a2170
// Address: 014a2170
// Size: 4750 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x014a3420) */
/* WARNING: Removing unreachable block (ram,0x014a33fa) */
/* WARNING: Removing unreachable block (ram,0x014a33e9) */
/* WARNING: Removing unreachable block (ram,0x014a340b) */
/* WARNING: Removing unreachable block (ram,0x014a3315) */
/* WARNING: Removing unreachable block (ram,0x014a3325) */
/* WARNING: Type propagation algorithm not settling */

void FUN_014a2170(double param_1,float *param_2,float param_3,longlong *param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 *puVar5;
  float fVar6;
  char cVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
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
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  bool bVar30;
  char cVar31;
  bool bVar32;
  bool bVar33;
  float *pfVar34;
  ulonglong in_RCX;
  ulonglong uVar35;
  uint uVar36;
  ulonglong uVar37;
  longlong lVar38;
  ulonglong uVar39;
  int iVar40;
  float *unaff_RSI;
  longlong lVar41;
  ulonglong uVar42;
  longlong *in_R8;
  uint uVar43;
  ulonglong uVar44;
  bool bVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  undefined8 local_b0;
  float local_a4;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  char local_88;
  float local_80;
  ulonglong local_78;
  longlong local_60;
  longlong local_58;
  longlong local_48;
  
  uVar44 = in_RCX & 0xffffffff;
  pfVar34 = (float *)FUN_00e83010();
  uVar43 = (uint)in_RCX;
  if (0 < (int)uVar43) {
    if ((uVar43 < 8) || ((pfVar34 < unaff_RSI + uVar44 && (unaff_RSI < pfVar34 + uVar44)))) {
      uVar35 = 0;
    }
    else {
      uVar35 = (ulonglong)(uVar43 & 0xfffffff8);
      uVar37 = (uVar35 - 8 >> 3) + 1;
      uVar42 = (ulonglong)((uint)uVar37 & 3);
      if (uVar35 - 8 < 0x18) {
        lVar41 = 0;
      }
      else {
        lVar38 = -(uVar37 & 0xfffffffffffffffc);
        lVar41 = 0;
        do {
          uVar27 = *(undefined8 *)(unaff_RSI + lVar41 + 2);
          uVar28 = *(undefined8 *)(unaff_RSI + lVar41 + 4);
          uVar29 = *(undefined8 *)(unaff_RSI + lVar41 + 4 + 2);
          *(undefined8 *)(pfVar34 + lVar41) = *(undefined8 *)(unaff_RSI + lVar41);
          *(undefined8 *)(pfVar34 + lVar41 + 2) = uVar27;
          *(undefined8 *)(pfVar34 + lVar41 + 4) = uVar28;
          *(undefined8 *)(pfVar34 + lVar41 + 4 + 2) = uVar29;
          uVar27 = *(undefined8 *)(unaff_RSI + lVar41 + 8 + 2);
          uVar28 = *(undefined8 *)(unaff_RSI + lVar41 + 0xc);
          uVar29 = *(undefined8 *)(unaff_RSI + lVar41 + 0xc + 2);
          *(undefined8 *)(pfVar34 + lVar41 + 8) = *(undefined8 *)(unaff_RSI + lVar41 + 8);
          *(undefined8 *)(pfVar34 + lVar41 + 8 + 2) = uVar27;
          *(undefined8 *)(pfVar34 + lVar41 + 0xc) = uVar28;
          *(undefined8 *)(pfVar34 + lVar41 + 0xc + 2) = uVar29;
          uVar27 = *(undefined8 *)(unaff_RSI + lVar41 + 0x10 + 2);
          uVar28 = *(undefined8 *)(unaff_RSI + lVar41 + 0x14);
          uVar29 = *(undefined8 *)(unaff_RSI + lVar41 + 0x14 + 2);
          *(undefined8 *)(pfVar34 + lVar41 + 0x10) = *(undefined8 *)(unaff_RSI + lVar41 + 0x10);
          *(undefined8 *)(pfVar34 + lVar41 + 0x10 + 2) = uVar27;
          *(undefined8 *)(pfVar34 + lVar41 + 0x14) = uVar28;
          *(undefined8 *)(pfVar34 + lVar41 + 0x14 + 2) = uVar29;
          uVar27 = *(undefined8 *)(unaff_RSI + lVar41 + 0x18 + 2);
          uVar28 = *(undefined8 *)(unaff_RSI + lVar41 + 0x1c);
          uVar29 = *(undefined8 *)(unaff_RSI + lVar41 + 0x1c + 2);
          *(undefined8 *)(pfVar34 + lVar41 + 0x18) = *(undefined8 *)(unaff_RSI + lVar41 + 0x18);
          *(undefined8 *)(pfVar34 + lVar41 + 0x18 + 2) = uVar27;
          *(undefined8 *)(pfVar34 + lVar41 + 0x1c) = uVar28;
          *(undefined8 *)(pfVar34 + lVar41 + 0x1c + 2) = uVar29;
          lVar41 = lVar41 + 0x20;
          lVar38 = lVar38 + 4;
        } while (lVar38 != 0);
      }
      if (uVar42 != 0) {
        lVar38 = 0;
        do {
          puVar5 = (undefined8 *)((longlong)unaff_RSI + lVar38 + lVar41 * 4);
          uVar27 = puVar5[1];
          puVar2 = (undefined8 *)((longlong)unaff_RSI + lVar38 + lVar41 * 4 + 0x10);
          uVar28 = *puVar2;
          uVar29 = puVar2[1];
          puVar2 = (undefined8 *)((longlong)pfVar34 + lVar38 + lVar41 * 4);
          *puVar2 = *puVar5;
          puVar2[1] = uVar27;
          puVar2 = (undefined8 *)((longlong)pfVar34 + lVar38 + lVar41 * 4 + 0x10);
          *puVar2 = uVar28;
          puVar2[1] = uVar29;
          lVar38 = lVar38 + 0x20;
        } while (uVar42 << 5 != lVar38);
      }
      if (uVar35 == uVar44) goto LAB_014a2374;
    }
    uVar42 = ~uVar35;
    for (uVar37 = in_RCX & 3; uVar37 != 0; uVar37 = uVar37 - 1) {
      pfVar34[uVar35] = unaff_RSI[uVar35];
      uVar35 = uVar35 + 1;
    }
    if (2 < uVar42 + uVar44) {
      do {
        pfVar34[uVar35] = unaff_RSI[uVar35];
        pfVar34[uVar35 + 1] = unaff_RSI[uVar35 + 1];
        pfVar34[uVar35 + 2] = unaff_RSI[uVar35 + 2];
        pfVar34[uVar35 + 3] = unaff_RSI[uVar35 + 3];
        uVar35 = uVar35 + 4;
      } while (uVar44 != uVar35);
    }
  }
LAB_014a2374:
  FUN_015c2d90(pfVar34,0,DAT_02390120);
  if (0 < (int)uVar43) {
    if ((uVar43 < 8) || ((unaff_RSI < pfVar34 + uVar44 && (pfVar34 < unaff_RSI + uVar44)))) {
      uVar35 = 0;
LAB_014a240c:
      uVar42 = ~uVar35;
      for (uVar37 = in_RCX & 3; uVar37 != 0; uVar37 = uVar37 - 1) {
        unaff_RSI[uVar35] = unaff_RSI[uVar35] - pfVar34[uVar35];
        uVar35 = uVar35 + 1;
      }
      if (2 < uVar42 + uVar44) {
        do {
          unaff_RSI[uVar35] = unaff_RSI[uVar35] - pfVar34[uVar35];
          unaff_RSI[uVar35 + 1] = unaff_RSI[uVar35 + 1] - pfVar34[uVar35 + 1];
          unaff_RSI[uVar35 + 2] = unaff_RSI[uVar35 + 2] - pfVar34[uVar35 + 2];
          unaff_RSI[uVar35 + 3] = unaff_RSI[uVar35 + 3] - pfVar34[uVar35 + 3];
          uVar35 = uVar35 + 4;
        } while (uVar44 != uVar35);
      }
    }
    else {
      uVar35 = (ulonglong)(uVar43 & 0xfffffff8);
      uVar37 = (uVar35 - 8 >> 3) + 1;
      if (uVar35 - 8 == 0) {
        lVar38 = 0;
LAB_014a2555:
        pfVar1 = pfVar34 + lVar38;
        fVar6 = pfVar1[1];
        fVar49 = pfVar1[2];
        fVar46 = pfVar1[3];
        pfVar3 = pfVar34 + lVar38 + 4;
        fVar8 = *pfVar3;
        fVar9 = pfVar3[1];
        fVar10 = pfVar3[2];
        fVar11 = pfVar3[3];
        pfVar3 = unaff_RSI + lVar38;
        fVar12 = pfVar3[1];
        fVar13 = pfVar3[2];
        fVar14 = pfVar3[3];
        pfVar4 = unaff_RSI + lVar38 + 4;
        fVar15 = *pfVar4;
        fVar16 = pfVar4[1];
        fVar17 = pfVar4[2];
        fVar18 = pfVar4[3];
        pfVar4 = unaff_RSI + lVar38;
        *pfVar4 = *pfVar3 - *pfVar1;
        pfVar4[1] = fVar12 - fVar6;
        pfVar4[2] = fVar13 - fVar49;
        pfVar4[3] = fVar14 - fVar46;
        pfVar1 = unaff_RSI + lVar38 + 4;
        *pfVar1 = fVar15 - fVar8;
        pfVar1[1] = fVar16 - fVar9;
        pfVar1[2] = fVar17 - fVar10;
        pfVar1[3] = fVar18 - fVar11;
      }
      else {
        lVar41 = -(uVar37 & 0xfffffffffffffffe);
        lVar38 = 0;
        do {
          pfVar1 = pfVar34 + lVar38;
          fVar6 = pfVar1[1];
          fVar49 = pfVar1[2];
          fVar46 = pfVar1[3];
          pfVar3 = pfVar34 + lVar38 + 4;
          fVar8 = *pfVar3;
          fVar9 = pfVar3[1];
          fVar10 = pfVar3[2];
          fVar11 = pfVar3[3];
          pfVar3 = unaff_RSI + lVar38;
          fVar12 = pfVar3[1];
          fVar13 = pfVar3[2];
          fVar14 = pfVar3[3];
          pfVar4 = unaff_RSI + lVar38 + 4;
          fVar15 = *pfVar4;
          fVar16 = pfVar4[1];
          fVar17 = pfVar4[2];
          fVar18 = pfVar4[3];
          pfVar4 = unaff_RSI + lVar38 + 8;
          fVar19 = *pfVar4;
          fVar20 = pfVar4[1];
          fVar21 = pfVar4[2];
          fVar22 = pfVar4[3];
          pfVar4 = unaff_RSI + lVar38 + 0xc;
          fVar23 = *pfVar4;
          fVar24 = pfVar4[1];
          fVar25 = pfVar4[2];
          fVar26 = pfVar4[3];
          pfVar4 = unaff_RSI + lVar38;
          *pfVar4 = *pfVar3 - *pfVar1;
          pfVar4[1] = fVar12 - fVar6;
          pfVar4[2] = fVar13 - fVar49;
          pfVar4[3] = fVar14 - fVar46;
          pfVar1 = unaff_RSI + lVar38 + 4;
          *pfVar1 = fVar15 - fVar8;
          pfVar1[1] = fVar16 - fVar9;
          pfVar1[2] = fVar17 - fVar10;
          pfVar1[3] = fVar18 - fVar11;
          pfVar1 = pfVar34 + lVar38 + 8;
          fVar6 = pfVar1[1];
          fVar49 = pfVar1[2];
          fVar46 = pfVar1[3];
          pfVar3 = pfVar34 + lVar38 + 0xc;
          fVar8 = *pfVar3;
          fVar9 = pfVar3[1];
          fVar10 = pfVar3[2];
          fVar11 = pfVar3[3];
          pfVar3 = unaff_RSI + lVar38 + 8;
          *pfVar3 = fVar19 - *pfVar1;
          pfVar3[1] = fVar20 - fVar6;
          pfVar3[2] = fVar21 - fVar49;
          pfVar3[3] = fVar22 - fVar46;
          pfVar1 = unaff_RSI + lVar38 + 0xc;
          *pfVar1 = fVar23 - fVar8;
          pfVar1[1] = fVar24 - fVar9;
          pfVar1[2] = fVar25 - fVar10;
          pfVar1[3] = fVar26 - fVar11;
          lVar38 = lVar38 + 0x10;
          lVar41 = lVar41 + 2;
        } while (lVar41 != 0);
        if ((uVar37 & 1) != 0) goto LAB_014a2555;
      }
      if (uVar35 != uVar44) goto LAB_014a240c;
    }
    if ((uVar43 < 8) || ((pfVar34 < param_2 + uVar44 && (param_2 < pfVar34 + uVar44)))) {
      uVar35 = 0;
    }
    else {
      uVar35 = (ulonglong)(uVar43 & 0xfffffff8);
      uVar42 = (uVar35 - 8 >> 3) + 1;
      uVar37 = (ulonglong)((uint)uVar42 & 3);
      if (uVar35 - 8 < 0x18) {
        lVar41 = 0;
      }
      else {
        lVar38 = -(uVar42 & 0xfffffffffffffffc);
        lVar41 = 0;
        do {
          uVar27 = *(undefined8 *)(param_2 + lVar41 + 2);
          uVar28 = *(undefined8 *)(param_2 + lVar41 + 4);
          uVar29 = *(undefined8 *)(param_2 + lVar41 + 4 + 2);
          *(undefined8 *)(pfVar34 + lVar41) = *(undefined8 *)(param_2 + lVar41);
          *(undefined8 *)(pfVar34 + lVar41 + 2) = uVar27;
          *(undefined8 *)(pfVar34 + lVar41 + 4) = uVar28;
          *(undefined8 *)(pfVar34 + lVar41 + 4 + 2) = uVar29;
          uVar27 = *(undefined8 *)(param_2 + lVar41 + 8 + 2);
          uVar28 = *(undefined8 *)(param_2 + lVar41 + 0xc);
          uVar29 = *(undefined8 *)(param_2 + lVar41 + 0xc + 2);
          *(undefined8 *)(pfVar34 + lVar41 + 8) = *(undefined8 *)(param_2 + lVar41 + 8);
          *(undefined8 *)(pfVar34 + lVar41 + 8 + 2) = uVar27;
          *(undefined8 *)(pfVar34 + lVar41 + 0xc) = uVar28;
          *(undefined8 *)(pfVar34 + lVar41 + 0xc + 2) = uVar29;
          uVar27 = *(undefined8 *)(param_2 + lVar41 + 0x10 + 2);
          uVar28 = *(undefined8 *)(param_2 + lVar41 + 0x14);
          uVar29 = *(undefined8 *)(param_2 + lVar41 + 0x14 + 2);
          *(undefined8 *)(pfVar34 + lVar41 + 0x10) = *(undefined8 *)(param_2 + lVar41 + 0x10);
          *(undefined8 *)(pfVar34 + lVar41 + 0x10 + 2) = uVar27;
          *(undefined8 *)(pfVar34 + lVar41 + 0x14) = uVar28;
          *(undefined8 *)(pfVar34 + lVar41 + 0x14 + 2) = uVar29;
          uVar27 = *(undefined8 *)(param_2 + lVar41 + 0x18 + 2);
          uVar28 = *(undefined8 *)(param_2 + lVar41 + 0x1c);
          uVar29 = *(undefined8 *)(param_2 + lVar41 + 0x1c + 2);
          *(undefined8 *)(pfVar34 + lVar41 + 0x18) = *(undefined8 *)(param_2 + lVar41 + 0x18);
          *(undefined8 *)(pfVar34 + lVar41 + 0x18 + 2) = uVar27;
          *(undefined8 *)(pfVar34 + lVar41 + 0x1c) = uVar28;
          *(undefined8 *)(pfVar34 + lVar41 + 0x1c + 2) = uVar29;
          lVar41 = lVar41 + 0x20;
          lVar38 = lVar38 + 4;
        } while (lVar38 != 0);
      }
      if (uVar37 != 0) {
        lVar38 = 0;
        do {
          puVar5 = (undefined8 *)((longlong)param_2 + lVar38 + lVar41 * 4);
          uVar27 = puVar5[1];
          puVar2 = (undefined8 *)((longlong)param_2 + lVar38 + lVar41 * 4 + 0x10);
          uVar28 = *puVar2;
          uVar29 = puVar2[1];
          puVar2 = (undefined8 *)((longlong)pfVar34 + lVar38 + lVar41 * 4);
          *puVar2 = *puVar5;
          puVar2[1] = uVar27;
          puVar2 = (undefined8 *)((longlong)pfVar34 + lVar38 + lVar41 * 4 + 0x10);
          *puVar2 = uVar28;
          puVar2[1] = uVar29;
          lVar38 = lVar38 + 0x20;
        } while (uVar37 << 5 != lVar38);
      }
      if (uVar35 == uVar44) goto LAB_014a2718;
    }
    uVar42 = ~uVar35;
    for (uVar37 = in_RCX & 3; uVar37 != 0; uVar37 = uVar37 - 1) {
      pfVar34[uVar35] = param_2[uVar35];
      uVar35 = uVar35 + 1;
    }
    if (2 < uVar42 + uVar44) {
      do {
        pfVar34[uVar35] = param_2[uVar35];
        pfVar34[uVar35 + 1] = param_2[uVar35 + 1];
        pfVar34[uVar35 + 2] = param_2[uVar35 + 2];
        pfVar34[uVar35 + 3] = param_2[uVar35 + 3];
        uVar35 = uVar35 + 4;
      } while (uVar44 != uVar35);
    }
  }
LAB_014a2718:
  FUN_015c2d90(pfVar34,0,DAT_02390120,(float)param_1);
  if (0 < (int)uVar43) {
    if ((uVar43 < 8) || ((param_2 < pfVar34 + uVar44 && (pfVar34 < param_2 + uVar44)))) {
      uVar35 = 0;
LAB_014a279d:
      uVar42 = ~uVar35;
      for (uVar37 = in_RCX & 3; uVar37 != 0; uVar37 = uVar37 - 1) {
        param_2[uVar35] = param_2[uVar35] - pfVar34[uVar35];
        uVar35 = uVar35 + 1;
      }
      if (2 < uVar42 + uVar44) {
        do {
          param_2[uVar35] = param_2[uVar35] - pfVar34[uVar35];
          param_2[uVar35 + 1] = param_2[uVar35 + 1] - pfVar34[uVar35 + 1];
          param_2[uVar35 + 2] = param_2[uVar35 + 2] - pfVar34[uVar35 + 2];
          param_2[uVar35 + 3] = param_2[uVar35 + 3] - pfVar34[uVar35 + 3];
          uVar35 = uVar35 + 4;
        } while (uVar44 != uVar35);
      }
    }
    else {
      uVar35 = (ulonglong)(uVar43 & 0xfffffff8);
      uVar37 = (uVar35 - 8 >> 3) + 1;
      if (uVar35 - 8 == 0) {
        lVar38 = 0;
LAB_014a28e5:
        pfVar1 = pfVar34 + lVar38;
        fVar6 = pfVar1[1];
        fVar49 = pfVar1[2];
        fVar46 = pfVar1[3];
        pfVar3 = pfVar34 + lVar38 + 4;
        fVar8 = *pfVar3;
        fVar9 = pfVar3[1];
        fVar10 = pfVar3[2];
        fVar11 = pfVar3[3];
        pfVar3 = param_2 + lVar38;
        fVar12 = pfVar3[1];
        fVar13 = pfVar3[2];
        fVar14 = pfVar3[3];
        pfVar4 = param_2 + lVar38 + 4;
        fVar15 = *pfVar4;
        fVar16 = pfVar4[1];
        fVar17 = pfVar4[2];
        fVar18 = pfVar4[3];
        pfVar4 = param_2 + lVar38;
        *pfVar4 = *pfVar3 - *pfVar1;
        pfVar4[1] = fVar12 - fVar6;
        pfVar4[2] = fVar13 - fVar49;
        pfVar4[3] = fVar14 - fVar46;
        pfVar1 = param_2 + lVar38 + 4;
        *pfVar1 = fVar15 - fVar8;
        pfVar1[1] = fVar16 - fVar9;
        pfVar1[2] = fVar17 - fVar10;
        pfVar1[3] = fVar18 - fVar11;
      }
      else {
        lVar41 = -(uVar37 & 0xfffffffffffffffe);
        lVar38 = 0;
        do {
          pfVar1 = pfVar34 + lVar38;
          fVar6 = pfVar1[1];
          fVar49 = pfVar1[2];
          fVar46 = pfVar1[3];
          pfVar3 = pfVar34 + lVar38 + 4;
          fVar8 = *pfVar3;
          fVar9 = pfVar3[1];
          fVar10 = pfVar3[2];
          fVar11 = pfVar3[3];
          pfVar3 = param_2 + lVar38;
          fVar12 = pfVar3[1];
          fVar13 = pfVar3[2];
          fVar14 = pfVar3[3];
          pfVar4 = param_2 + lVar38 + 4;
          fVar15 = *pfVar4;
          fVar16 = pfVar4[1];
          fVar17 = pfVar4[2];
          fVar18 = pfVar4[3];
          pfVar4 = param_2 + lVar38 + 8;
          fVar19 = *pfVar4;
          fVar20 = pfVar4[1];
          fVar21 = pfVar4[2];
          fVar22 = pfVar4[3];
          pfVar4 = param_2 + lVar38 + 0xc;
          fVar23 = *pfVar4;
          fVar24 = pfVar4[1];
          fVar25 = pfVar4[2];
          fVar26 = pfVar4[3];
          pfVar4 = param_2 + lVar38;
          *pfVar4 = *pfVar3 - *pfVar1;
          pfVar4[1] = fVar12 - fVar6;
          pfVar4[2] = fVar13 - fVar49;
          pfVar4[3] = fVar14 - fVar46;
          pfVar1 = param_2 + lVar38 + 4;
          *pfVar1 = fVar15 - fVar8;
          pfVar1[1] = fVar16 - fVar9;
          pfVar1[2] = fVar17 - fVar10;
          pfVar1[3] = fVar18 - fVar11;
          pfVar1 = pfVar34 + lVar38 + 8;
          fVar6 = pfVar1[1];
          fVar49 = pfVar1[2];
          fVar46 = pfVar1[3];
          pfVar3 = pfVar34 + lVar38 + 0xc;
          fVar8 = *pfVar3;
          fVar9 = pfVar3[1];
          fVar10 = pfVar3[2];
          fVar11 = pfVar3[3];
          pfVar3 = param_2 + lVar38 + 8;
          *pfVar3 = fVar19 - *pfVar1;
          pfVar3[1] = fVar20 - fVar6;
          pfVar3[2] = fVar21 - fVar49;
          pfVar3[3] = fVar22 - fVar46;
          pfVar1 = param_2 + lVar38 + 0xc;
          *pfVar1 = fVar23 - fVar8;
          pfVar1[1] = fVar24 - fVar9;
          pfVar1[2] = fVar25 - fVar10;
          pfVar1[3] = fVar26 - fVar11;
          lVar38 = lVar38 + 0x10;
          lVar41 = lVar41 + 2;
        } while (lVar41 != 0);
        if ((uVar37 & 1) != 0) goto LAB_014a28e5;
      }
      if (uVar35 != uVar44) goto LAB_014a279d;
    }
    if (uVar43 < 8) {
joined_r0x014a33b5:
      uVar35 = 0;
      uVar37 = 0xffffffffffffffff;
    }
    else {
      uVar35 = 0;
      if (pfVar34 < unaff_RSI + uVar44 && unaff_RSI < pfVar34 + uVar44) goto joined_r0x014a33b5;
      if (param_2 + uVar44 <= pfVar34 || pfVar34 + uVar44 <= param_2) {
        uVar35 = (ulonglong)(uVar43 & 0xfffffff8);
        uVar37 = (uVar35 - 8 >> 3) + 1;
        if (uVar35 - 8 == 0) {
          lVar38 = 0;
LAB_014a2a05:
          auVar47 = maxps(*(undefined1 (*) [16])(unaff_RSI + lVar38),
                          *(undefined1 (*) [16])(param_2 + lVar38));
          auVar48 = maxps(*(undefined1 (*) [16])(unaff_RSI + lVar38 + 4),
                          *(undefined1 (*) [16])(param_2 + lVar38 + 4));
          *(undefined1 (*) [16])(pfVar34 + lVar38) = auVar47;
          *(undefined1 (*) [16])(pfVar34 + lVar38 + 4) = auVar48;
        }
        else {
          lVar41 = -(uVar37 & 0xfffffffffffffffe);
          lVar38 = 0;
          do {
            auVar47 = maxps(*(undefined1 (*) [16])(unaff_RSI + lVar38),
                            *(undefined1 (*) [16])(param_2 + lVar38));
            auVar48 = maxps(*(undefined1 (*) [16])(unaff_RSI + lVar38 + 4),
                            *(undefined1 (*) [16])(param_2 + lVar38 + 4));
            *(undefined1 (*) [16])(pfVar34 + lVar38) = auVar47;
            *(undefined1 (*) [16])(pfVar34 + lVar38 + 4) = auVar48;
            auVar47 = maxps(*(undefined1 (*) [16])(unaff_RSI + lVar38 + 8),
                            *(undefined1 (*) [16])(param_2 + lVar38 + 8));
            auVar48 = maxps(*(undefined1 (*) [16])(unaff_RSI + lVar38 + 0xc),
                            *(undefined1 (*) [16])(param_2 + lVar38 + 0xc));
            *(undefined1 (*) [16])(pfVar34 + lVar38 + 8) = auVar47;
            *(undefined1 (*) [16])(pfVar34 + lVar38 + 0xc) = auVar48;
            lVar38 = lVar38 + 0x10;
            lVar41 = lVar41 + 2;
          } while (lVar41 != 0);
          if ((uVar37 & 1) != 0) goto LAB_014a2a05;
        }
        if (uVar35 == uVar44) goto LAB_014a2a8a;
      }
      uVar37 = ~uVar35;
    }
    if ((in_RCX & 1) != 0) {
      fVar6 = unaff_RSI[uVar35];
      if (unaff_RSI[uVar35] <= param_2[uVar35]) {
        fVar6 = param_2[uVar35];
      }
      pfVar34[uVar35] = fVar6;
      uVar35 = uVar35 | 1;
    }
    if (uVar37 + uVar44 != 0) {
      do {
        fVar6 = unaff_RSI[uVar35];
        if (unaff_RSI[uVar35] <= param_2[uVar35]) {
          fVar6 = param_2[uVar35];
        }
        pfVar34[uVar35] = fVar6;
        fVar6 = unaff_RSI[uVar35 + 1];
        if (unaff_RSI[uVar35 + 1] <= param_2[uVar35 + 1]) {
          fVar6 = param_2[uVar35 + 1];
        }
        pfVar34[uVar35 + 1] = fVar6;
        uVar35 = uVar35 + 2;
      } while (uVar44 != uVar35);
    }
  }
LAB_014a2a8a:
  FUN_015c2d90(pfVar34,0,DAT_02390120,(float)param_1);
  local_b0 = (double)CONCAT44(DAT_0238fee8._4_4_,(undefined4)DAT_0238fee8);
  if ((int)uVar43 < 1) goto LAB_014a2cab;
  if (uVar43 < 4) {
joined_r0x014a33d2:
    uVar35 = 0;
    uVar37 = 0xffffffffffffffff;
  }
  else {
    uVar35 = 0;
    if ((unaff_RSI < param_2 + uVar44 && param_2 < unaff_RSI + uVar44) ||
       (unaff_RSI < pfVar34 + uVar44 && pfVar34 < unaff_RSI + uVar44)) goto joined_r0x014a33d2;
    if (pfVar34 + uVar44 <= param_2 || param_2 + uVar44 <= pfVar34) {
      uVar35 = (ulonglong)(uVar43 & 0xfffffffc);
      uVar37 = (uVar35 - 4 >> 2) + 1;
      if (uVar35 - 4 == 0) {
        lVar38 = 0;
LAB_014a2bf9:
        pfVar1 = pfVar34 + lVar38;
        fVar6 = *pfVar1;
        fVar49 = pfVar1[1];
        fVar46 = pfVar1[2];
        fVar8 = pfVar1[3];
        pfVar1 = unaff_RSI + lVar38;
        fVar9 = pfVar1[1];
        fVar10 = pfVar1[2];
        fVar11 = pfVar1[3];
        pfVar3 = unaff_RSI + lVar38;
        *pfVar3 = *pfVar1 - fVar6;
        pfVar3[1] = fVar9 - fVar49;
        pfVar3[2] = fVar10 - fVar46;
        pfVar3[3] = fVar11 - fVar8;
        pfVar1 = param_2 + lVar38;
        fVar9 = pfVar1[1];
        fVar10 = pfVar1[2];
        fVar11 = pfVar1[3];
        pfVar3 = param_2 + lVar38;
        *pfVar3 = *pfVar1 - fVar6;
        pfVar3[1] = fVar9 - fVar49;
        pfVar3[2] = fVar10 - fVar46;
        pfVar3[3] = fVar11 - fVar8;
      }
      else {
        lVar41 = -(uVar37 & 0xfffffffffffffffe);
        lVar38 = 0;
        do {
          pfVar1 = pfVar34 + lVar38;
          fVar6 = *pfVar1;
          fVar49 = pfVar1[1];
          fVar46 = pfVar1[2];
          fVar8 = pfVar1[3];
          pfVar1 = unaff_RSI + lVar38;
          fVar9 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar11 = pfVar1[3];
          pfVar3 = unaff_RSI + lVar38;
          *pfVar3 = *pfVar1 - fVar6;
          pfVar3[1] = fVar9 - fVar49;
          pfVar3[2] = fVar10 - fVar46;
          pfVar3[3] = fVar11 - fVar8;
          pfVar1 = param_2 + lVar38;
          fVar9 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar11 = pfVar1[3];
          pfVar3 = param_2 + lVar38;
          *pfVar3 = *pfVar1 - fVar6;
          pfVar3[1] = fVar9 - fVar49;
          pfVar3[2] = fVar10 - fVar46;
          pfVar3[3] = fVar11 - fVar8;
          pfVar1 = pfVar34 + lVar38 + 4;
          fVar6 = *pfVar1;
          fVar49 = pfVar1[1];
          fVar46 = pfVar1[2];
          fVar8 = pfVar1[3];
          pfVar1 = unaff_RSI + lVar38 + 4;
          fVar9 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar11 = pfVar1[3];
          pfVar3 = unaff_RSI + lVar38 + 4;
          *pfVar3 = *pfVar1 - fVar6;
          pfVar3[1] = fVar9 - fVar49;
          pfVar3[2] = fVar10 - fVar46;
          pfVar3[3] = fVar11 - fVar8;
          pfVar1 = param_2 + lVar38 + 4;
          fVar9 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar11 = pfVar1[3];
          pfVar3 = param_2 + lVar38 + 4;
          *pfVar3 = *pfVar1 - fVar6;
          pfVar3[1] = fVar9 - fVar49;
          pfVar3[2] = fVar10 - fVar46;
          pfVar3[3] = fVar11 - fVar8;
          lVar38 = lVar38 + 8;
          lVar41 = lVar41 + 2;
        } while (lVar41 != 0);
        if ((uVar37 & 1) != 0) goto LAB_014a2bf9;
      }
      if (uVar35 == uVar44) goto LAB_014a2cab;
    }
    uVar37 = ~uVar35;
  }
  if ((in_RCX & 1) != 0) {
    unaff_RSI[uVar35] = unaff_RSI[uVar35] - pfVar34[uVar35];
    param_2[uVar35] = param_2[uVar35] - pfVar34[uVar35];
    uVar35 = uVar35 | 1;
  }
  if (uVar37 + uVar44 != 0) {
    do {
      unaff_RSI[uVar35] = unaff_RSI[uVar35] - pfVar34[uVar35];
      param_2[uVar35] = param_2[uVar35] - pfVar34[uVar35];
      unaff_RSI[uVar35 + 1] = unaff_RSI[uVar35 + 1] - pfVar34[uVar35 + 1];
      param_2[uVar35 + 1] = param_2[uVar35 + 1] - pfVar34[uVar35 + 1];
      uVar35 = uVar35 + 2;
    } while (uVar44 != uVar35);
  }
LAB_014a2cab:
  bVar30 = true;
  local_58 = 0;
  cVar31 = '\0';
  local_60 = 0;
  bVar32 = false;
  local_48 = 0;
  bVar33 = false;
  do {
    lVar38 = local_58;
    if (bVar30) {
      lVar38 = *in_R8;
      cVar7 = (char)in_R8[1];
      pfVar34 = unaff_RSI;
      if (lVar38 == local_58) {
        lVar38 = local_58;
        if (((cVar7 != '\0') && (cVar31 == '\0')) && (local_58 != 0)) {
          FUN_00d50b00();
          cVar31 = '\x01';
        }
      }
      else {
        if ((cVar7 != '\0') && (lVar38 != 0)) {
          FUN_00d50b00();
        }
        bVar45 = cVar31 != '\0';
        cVar31 = cVar7;
        if ((bVar45) && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      lVar41 = *param_4;
      cVar7 = (char)param_4[1];
      pfVar34 = param_2;
      if (lVar41 == local_58) {
        if (((cVar7 != '\0') && (cVar31 == '\0')) && (lVar41 != 0)) {
          FUN_00d50b00();
          cVar31 = '\x01';
        }
      }
      else {
        if ((cVar7 != '\0') && (lVar41 != 0)) {
          FUN_00d50b00();
        }
        bVar45 = cVar31 != '\0';
        lVar38 = lVar41;
        cVar31 = cVar7;
        if ((bVar45) && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    local_58 = lVar38;
    if (1 < (int)uVar43) {
      local_a0 = 0;
      uVar35 = 1;
      local_78 = 0;
      local_98 = 0;
      local_a4 = *pfVar34;
      do {
        fVar6 = pfVar34[uVar35];
        uVar37 = local_78;
        if (0.0 < fVar6) {
          uVar37 = uVar35;
        }
        if (0.0 < local_a4) {
          uVar37 = local_78;
        }
        local_78 = uVar37 & 0xffffffff;
        if (((0.0 < local_a4) && (fVar6 <= 0.0)) &&
           ((iVar40 = (int)uVar37,
            (longlong)((int)((double)param_3 * param_1) + iVar40) < (longlong)uVar35 &&
            (uVar37 = (ulonglong)iVar40, (longlong)uVar37 < (longlong)uVar35)))) {
          uVar36 = (int)(local_a0 + 1) - iVar40;
          uVar42 = local_a0 - uVar37;
          uVar39 = (ulonglong)uVar36 & 3;
          fVar46 = DAT_0240e30c;
          fVar49 = DAT_0240e30c;
          if ((uVar36 & 3) != 0) {
            do {
              fVar49 = pfVar34[uVar37];
              if (fVar49 <= fVar46) {
                fVar49 = fVar46;
              }
              uVar37 = uVar37 + 1;
              uVar39 = uVar39 - 1;
              fVar46 = fVar49;
            } while (uVar39 != 0);
          }
          if (2 < uVar42) {
            do {
              fVar46 = pfVar34[uVar37];
              if (pfVar34[uVar37] <= fVar49) {
                fVar46 = fVar49;
              }
              fVar49 = pfVar34[uVar37 + 1];
              if (pfVar34[uVar37 + 1] <= fVar46) {
                fVar49 = fVar46;
              }
              fVar46 = pfVar34[uVar37 + 2];
              if (pfVar34[uVar37 + 2] <= fVar49) {
                fVar46 = fVar49;
              }
              fVar49 = pfVar34[uVar37 + 3];
              if (pfVar34[uVar37 + 3] <= fVar46) {
                fVar49 = fVar46;
              }
              uVar37 = uVar37 + 4;
            } while (uVar37 != uVar35);
          }
          if (DAT_0239424c < fVar49) {
            if ((int)local_98 < *(int *)(local_58 + 0xc)) {
              local_98 = (longlong)(int)local_98;
              local_80 = DAT_0240e30c;
              do {
                lVar38 = *(longlong *)(*(longlong *)(local_58 + 0x10) + local_98 * 8);
                if (local_60 == lVar38) {
                  if ((!bVar32) && (local_60 != 0)) {
                    bVar32 = true;
                    FUN_00d50b00();
                  }
                }
                else {
                  if (lVar38 != 0) {
                    FUN_00d50b00();
                  }
                  if ((bVar32) && (local_60 != 0)) {
                    FUN_00d50b20();
                    bVar32 = true;
                    local_60 = lVar38;
                  }
                  else {
                    bVar32 = true;
                    local_60 = lVar38;
                  }
                }
                if ((double)(int)uVar35 * (local_b0 / param_1) < *(double *)(local_60 + 0x10))
                break;
                if (((double)iVar40 * (local_b0 / param_1) < *(double *)(local_60 + 0x10)) &&
                   ((double)local_80 < *(double *)(local_60 + 0x18))) {
                  local_80 = (float)*(double *)(local_60 + 0x18);
                }
                local_98 = local_98 + 1;
              } while (local_98 < *(int *)(local_58 + 0xc));
            }
            FUN_014ba9e0();
            if (local_48 == local_90) {
              lVar38 = local_48;
              bVar45 = bVar33;
              if ((bVar33) || (local_48 == 0)) goto joined_r0x014a32bc;
              bVar45 = true;
              if (local_88 == '\0') {
                FUN_00d50b00();
                goto LAB_014a32d6;
              }
            }
            else {
              lVar38 = local_90;
              if (local_88 == '\0') {
                if (local_90 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar33) && (local_48 != 0)) {
                  FUN_00d50b20();
                }
LAB_014a32d6:
                bVar45 = true;
joined_r0x014a32bc:
                if ((local_88 != '\0') && (local_90 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                bVar45 = true;
                if ((bVar33) && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
            }
            local_88 = '\0';
            FUN_00d21140();
            local_48 = lVar38;
            local_90 = lVar38;
            bVar33 = bVar45;
          }
        }
        uVar35 = uVar35 + 1;
        local_a4 = fVar6;
        local_a0 = local_a0 + 1;
      } while (uVar35 != uVar44);
    }
    bVar45 = !bVar30;
    bVar30 = false;
    if (bVar45) {
      FUN_00e83070();
      if ((bVar33) && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar32) && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((cVar31 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}


