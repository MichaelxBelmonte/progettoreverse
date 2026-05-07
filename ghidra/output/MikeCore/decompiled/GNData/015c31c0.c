// Function: FUN_015c31c0
// Address: 015c31c0
// Size: 556 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x015c33e7) */

void FUN_015c31c0(float param_1,int param_2,int param_3)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
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
  float fVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  longlong lVar31;
  longlong *in_RCX;
  int iVar32;
  int unaff_ESI;
  longlong lVar33;
  longlong *unaff_RDI;
  longlong lVar34;
  longlong lVar35;
  int iVar36;
  ulonglong uVar37;
  longlong lVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  
  param_3 = param_3 / 2;
  iVar36 = param_2 - param_3;
  iVar30 = iVar36;
  if (iVar36 < 0) {
    iVar30 = 0;
  }
  iVar32 = param_2 + param_3 + 1;
  if (param_3 + param_2 < -1) {
    iVar32 = 0;
  }
  iVar7 = unaff_ESI + -1;
  if (iVar30 < unaff_ESI) {
    iVar7 = iVar30;
  }
  if (unaff_ESI < iVar32) {
    iVar32 = unaff_ESI;
  }
  if (iVar32 <= iVar7) {
    return;
  }
  lVar5 = *in_RCX;
  lVar6 = *unaff_RDI;
  uVar39 = (ulonglong)iVar7;
  lVar38 = (longlong)(iVar36 >> 0x1f & -iVar36);
  lVar31 = (longlong)iVar32;
  uVar41 = lVar31 - uVar39;
  if ((uVar41 < 8) ||
     ((lVar6 + uVar39 * 4 < lVar5 + ((lVar31 + lVar38) - uVar39) * 4 &&
      ((ulonglong)(lVar5 + lVar38 * 4) < (ulonglong)(lVar6 + lVar31 * 4))))) goto LAB_015c3354;
  uVar37 = uVar41 & 0xfffffffffffffff8;
  uVar40 = (uVar37 - 8 >> 3) + 1;
  if (uVar37 - 8 == 0) {
    lVar34 = 0;
LAB_015c3311:
    lVar35 = lVar34 + uVar39;
    pfVar3 = (float *)(lVar5 + (lVar34 + lVar38) * 4);
    fVar8 = pfVar3[1];
    fVar9 = pfVar3[2];
    fVar10 = pfVar3[3];
    pfVar2 = (float *)(lVar5 + 0x10 + (lVar34 + lVar38) * 4);
    fVar11 = *pfVar2;
    fVar12 = pfVar2[1];
    fVar13 = pfVar2[2];
    fVar14 = pfVar2[3];
    pfVar2 = (float *)(lVar6 + lVar35 * 4);
    fVar15 = pfVar2[1];
    fVar16 = pfVar2[2];
    fVar17 = pfVar2[3];
    pfVar4 = (float *)(lVar6 + 0x10 + lVar35 * 4);
    fVar18 = *pfVar4;
    fVar19 = pfVar4[1];
    fVar20 = pfVar4[2];
    fVar21 = pfVar4[3];
    pfVar4 = (float *)(lVar6 + lVar35 * 4);
    *pfVar4 = *pfVar2 + *pfVar3 * param_1;
    pfVar4[1] = fVar15 + fVar8 * param_1;
    pfVar4[2] = fVar16 + fVar9 * param_1;
    pfVar4[3] = fVar17 + fVar10 * param_1;
    pfVar3 = (float *)(lVar6 + 0x10 + lVar35 * 4);
    *pfVar3 = fVar18 + fVar11 * param_1;
    pfVar3[1] = fVar19 + fVar12 * param_1;
    pfVar3[2] = fVar20 + fVar13 * param_1;
    pfVar3[3] = fVar21 + fVar14 * param_1;
  }
  else {
    lVar35 = lVar5 + lVar38 * 4;
    lVar1 = lVar6 + uVar39 * 4;
    lVar33 = -(uVar40 & 0xfffffffffffffffe);
    lVar34 = 0;
    do {
      pfVar2 = (float *)(lVar35 + lVar34 * 4);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(lVar35 + 0x10 + lVar34 * 4);
      fVar11 = *pfVar3;
      fVar12 = pfVar3[1];
      fVar13 = pfVar3[2];
      fVar14 = pfVar3[3];
      pfVar4 = (float *)(lVar1 + lVar34 * 4);
      fVar15 = pfVar4[1];
      fVar16 = pfVar4[2];
      fVar17 = pfVar4[3];
      pfVar3 = (float *)(lVar1 + 0x10 + lVar34 * 4);
      fVar18 = *pfVar3;
      fVar19 = pfVar3[1];
      fVar20 = pfVar3[2];
      fVar21 = pfVar3[3];
      pfVar3 = (float *)(lVar1 + 0x20 + lVar34 * 4);
      fVar22 = *pfVar3;
      fVar23 = pfVar3[1];
      fVar24 = pfVar3[2];
      fVar25 = pfVar3[3];
      pfVar3 = (float *)(lVar1 + 0x30 + lVar34 * 4);
      fVar26 = *pfVar3;
      fVar27 = pfVar3[1];
      fVar28 = pfVar3[2];
      fVar29 = pfVar3[3];
      pfVar3 = (float *)(lVar1 + lVar34 * 4);
      *pfVar3 = *pfVar4 + *pfVar2 * param_1;
      pfVar3[1] = fVar15 + fVar8 * param_1;
      pfVar3[2] = fVar16 + fVar9 * param_1;
      pfVar3[3] = fVar17 + fVar10 * param_1;
      pfVar3 = (float *)(lVar1 + 0x10 + lVar34 * 4);
      *pfVar3 = fVar18 + fVar11 * param_1;
      pfVar3[1] = fVar19 + fVar12 * param_1;
      pfVar3[2] = fVar20 + fVar13 * param_1;
      pfVar3[3] = fVar21 + fVar14 * param_1;
      pfVar2 = (float *)(lVar35 + 0x20 + lVar34 * 4);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(lVar35 + 0x30 + lVar34 * 4);
      fVar11 = *pfVar3;
      fVar12 = pfVar3[1];
      fVar13 = pfVar3[2];
      fVar14 = pfVar3[3];
      pfVar3 = (float *)(lVar1 + 0x20 + lVar34 * 4);
      *pfVar3 = *pfVar2 * param_1 + fVar22;
      pfVar3[1] = fVar8 * param_1 + fVar23;
      pfVar3[2] = fVar9 * param_1 + fVar24;
      pfVar3[3] = fVar10 * param_1 + fVar25;
      pfVar3 = (float *)(lVar1 + 0x30 + lVar34 * 4);
      *pfVar3 = fVar11 * param_1 + fVar26;
      pfVar3[1] = fVar12 * param_1 + fVar27;
      pfVar3[2] = fVar13 * param_1 + fVar28;
      pfVar3[3] = fVar14 * param_1 + fVar29;
      lVar34 = lVar34 + 0x10;
      lVar33 = lVar33 + 2;
    } while (lVar33 != 0);
    if ((uVar40 & 1) != 0) goto LAB_015c3311;
  }
  if (uVar41 == uVar37) {
    return;
  }
  lVar38 = lVar38 + uVar37;
  uVar39 = uVar39 + uVar37;
LAB_015c3354:
  uVar41 = ~uVar39;
  if ((iVar32 - (int)uVar39 & 1U) != 0) {
    lVar34 = lVar38 * 4;
    lVar38 = lVar38 + 1;
    *(float *)(lVar6 + uVar39 * 4) =
         *(float *)(lVar5 + lVar34) * param_1 + *(float *)(lVar6 + uVar39 * 4);
    uVar39 = uVar39 + 1;
  }
  if (uVar41 + lVar31 != 0) {
    lVar5 = lVar5 + lVar38 * 4;
    lVar6 = lVar6 + uVar39 * 4;
    lVar38 = 0;
    do {
      *(float *)(lVar6 + lVar38 * 4) =
           *(float *)(lVar5 + lVar38 * 4) * param_1 + *(float *)(lVar6 + lVar38 * 4);
      *(float *)(lVar6 + 4 + lVar38 * 4) =
           *(float *)(lVar5 + 4 + lVar38 * 4) * param_1 + *(float *)(lVar6 + 4 + lVar38 * 4);
      lVar38 = lVar38 + 2;
    } while (lVar31 - uVar39 != lVar38);
  }
  return;
}


