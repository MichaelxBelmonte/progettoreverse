// Function: FUN_015c33f0
// Address: 015c33f0
// Size: 506 bytes
// Class: GNData


void FUN_015c33f0(float param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  longlong lVar8;
  int iVar9;
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
  int in_ECX;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong in_RDX;
  int iVar34;
  longlong lVar35;
  int unaff_ESI;
  longlong *unaff_RDI;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong lVar38;
  float fVar39;
  
  iVar31 = (int)param_1 - in_ECX / 2;
  iVar30 = in_ECX / 2 + (int)param_1;
  iVar34 = iVar31 + 1;
  if (iVar31 < -1) {
    iVar34 = 0;
  }
  if (iVar30 < 0) {
    iVar30 = 0;
  }
  iVar9 = unaff_ESI + -1;
  if (iVar34 < unaff_ESI) {
    iVar9 = iVar34;
  }
  if (unaff_ESI < iVar30) {
    iVar30 = unaff_ESI;
  }
  if (iVar9 < iVar30) {
    fVar39 = ((float)(int)param_1 - param_1) + DAT_02390124;
    iVar34 = 1;
    if (iVar31 < -1) {
      iVar34 = -iVar31;
    }
    lVar8 = *unaff_RDI;
    uVar32 = (ulonglong)iVar9;
    lVar35 = (longlong)iVar34;
    lVar38 = (longlong)iVar30;
    uVar37 = lVar38 - uVar32;
    if ((7 < uVar37) &&
       ((in_RDX + ((lVar38 + lVar35) - uVar32) * 4 <= lVar8 + uVar32 * 4 ||
        ((ulonglong)(lVar8 + lVar38 * 4) <= (in_RDX + lVar35 * 4) - 4U)))) {
      uVar36 = uVar37 & 0xfffffffffffffff8;
      lVar1 = lVar8 + uVar32 * 4;
      lVar2 = in_RDX + lVar35 * 4;
      uVar33 = 0;
      do {
        pfVar4 = (float *)(lVar2 + -4 + uVar33 * 4);
        fVar7 = pfVar4[1];
        fVar10 = pfVar4[2];
        fVar11 = pfVar4[3];
        pfVar3 = (float *)(lVar2 + uVar33 * 4);
        fVar12 = pfVar3[1];
        fVar13 = pfVar3[2];
        fVar14 = pfVar3[3];
        pfVar5 = (float *)(lVar2 + 0xc + uVar33 * 4);
        fVar15 = *pfVar5;
        fVar16 = pfVar5[1];
        fVar17 = pfVar5[2];
        fVar18 = pfVar5[3];
        pfVar5 = (float *)(lVar2 + 0x10 + uVar33 * 4);
        fVar19 = *pfVar5;
        fVar20 = pfVar5[1];
        fVar21 = pfVar5[2];
        fVar22 = pfVar5[3];
        pfVar6 = (float *)(lVar1 + uVar33 * 4);
        fVar23 = pfVar6[1];
        fVar24 = pfVar6[2];
        fVar25 = pfVar6[3];
        pfVar5 = (float *)(lVar1 + 0x10 + uVar33 * 4);
        fVar26 = *pfVar5;
        fVar27 = pfVar5[1];
        fVar28 = pfVar5[2];
        fVar29 = pfVar5[3];
        pfVar5 = (float *)(lVar1 + uVar33 * 4);
        *pfVar5 = *pfVar6 + ((*pfVar3 - *pfVar4) * fVar39 + *pfVar4) * param_2;
        pfVar5[1] = fVar23 + ((fVar12 - fVar7) * fVar39 + fVar7) * param_2;
        pfVar5[2] = fVar24 + ((fVar13 - fVar10) * fVar39 + fVar10) * param_2;
        pfVar5[3] = fVar25 + ((fVar14 - fVar11) * fVar39 + fVar11) * param_2;
        pfVar3 = (float *)(lVar1 + 0x10 + uVar33 * 4);
        *pfVar3 = fVar26 + ((fVar19 - fVar15) * fVar39 + fVar15) * param_2;
        pfVar3[1] = fVar27 + ((fVar20 - fVar16) * fVar39 + fVar16) * param_2;
        pfVar3[2] = fVar28 + ((fVar21 - fVar17) * fVar39 + fVar17) * param_2;
        pfVar3[3] = fVar29 + ((fVar22 - fVar18) * fVar39 + fVar18) * param_2;
        uVar33 = uVar33 + 8;
      } while (uVar36 != uVar33);
      lVar35 = uVar36 + lVar35;
      uVar32 = uVar36 + uVar32;
      if (uVar37 == uVar36) {
        return;
      }
    }
    uVar37 = ~uVar32;
    if ((iVar30 - (int)uVar32 & 1U) != 0) {
      fVar7 = *(float *)(in_RDX + -4 + lVar35 * 4);
      *(float *)(lVar8 + uVar32 * 4) =
           ((*(float *)(in_RDX + lVar35 * 4) - fVar7) * fVar39 + fVar7) * param_2 +
           *(float *)(lVar8 + uVar32 * 4);
      lVar35 = lVar35 + 1;
      uVar32 = uVar32 + 1;
    }
    if (uVar37 + lVar38 != 0) {
      in_RDX = in_RDX + lVar35 * 4;
      lVar8 = lVar8 + uVar32 * 4;
      lVar35 = 0;
      do {
        fVar7 = *(float *)(in_RDX + -4 + lVar35 * 4);
        *(float *)(lVar8 + lVar35 * 4) =
             ((*(float *)(in_RDX + lVar35 * 4) - fVar7) * fVar39 + fVar7) * param_2 +
             *(float *)(lVar8 + lVar35 * 4);
        fVar7 = *(float *)(in_RDX + lVar35 * 4);
        *(float *)(lVar8 + 4 + lVar35 * 4) =
             ((*(float *)(in_RDX + 4 + lVar35 * 4) - fVar7) * fVar39 + fVar7) * param_2 +
             *(float *)(lVar8 + 4 + lVar35 * 4);
        lVar35 = lVar35 + 2;
      } while (lVar38 - uVar32 != lVar35);
    }
  }
  return;
}


