// Function: FUN_015c15e0
// Address: 015c15e0
// Size: 1531 bytes
// Class: GNData


void FUN_015c15e0(float param_1,uint param_2,char param_3,undefined4 *param_4)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
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
  uint uVar18;
  bool bVar19;
  bool bVar20;
  int iVar21;
  longlong lVar22;
  longlong *in_RCX;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  longlong *unaff_RSI;
  longlong lVar29;
  longlong unaff_RDI;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  undefined4 *puVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  if (param_1 < DAT_02390124) {
    return;
  }
  uVar32 = (int)(DAT_02411068 + param_1) * 2 + 1;
  iVar21 = ((int)(DAT_02411068 + param_1) * 2 - ((int)uVar32 >> 0x1f)) + 1 >> 1;
  if (*(int *)(unaff_RDI + 0x20) < (int)uVar32) {
    if (*(longlong *)(unaff_RDI + 0x10) != 0) {
      FUN_00e83070();
      *(undefined8 *)(unaff_RDI + 0x10) = 0;
    }
    lVar22 = FUN_00e83010();
    *(longlong *)(unaff_RDI + 0x10) = lVar22;
    *(uint *)(unaff_RDI + 0x20) = uVar32;
    *(undefined4 *)(lVar22 + (longlong)iVar21 * 4) = 0x3f800000;
    fVar35 = DAT_02394294;
  }
  else {
    lVar22 = *(longlong *)(unaff_RDI + 0x10);
    *(undefined4 *)(lVar22 + (longlong)iVar21 * 4) = 0x3f800000;
    fVar35 = DAT_02394294;
  }
  DAT_02394294 = fVar35;
  if (1 < (int)uVar32) {
    lVar31 = (longlong)iVar21;
    param_1 = fVar35 / param_1;
    uVar23 = (ulonglong)(iVar21 + 1U) - 1;
    lVar30 = 1;
    if (iVar21 + 1U != 2) {
      lVar29 = lVar22 + lVar31 * 4;
      puVar33 = (undefined4 *)(lVar29 + -4);
      lVar30 = 1;
      do {
        uVar34 = _sinf((float)(int)lVar30 * param_1 + fVar35);
        *(undefined4 *)(lVar29 + lVar30 * 4) = uVar34;
        *puVar33 = uVar34;
        uVar34 = _sinf((float)((int)lVar30 + 1) * param_1 + DAT_02394294);
        fVar35 = DAT_02394294;
        *(undefined4 *)(lVar29 + 4 + lVar30 * 4) = uVar34;
        puVar33[-1] = uVar34;
        puVar33 = puVar33 + -2;
        lVar26 = lVar30 - (uVar23 & 0xfffffffffffffffe);
        lVar30 = lVar30 + 2;
      } while (lVar26 != -1);
    }
    if ((uVar23 & 1) != 0) {
      uVar34 = _sinf(param_1 * (float)(int)lVar30 + DAT_02394294);
      *(undefined4 *)(lVar22 + (lVar30 + lVar31) * 4) = uVar34;
      *(undefined4 *)(lVar22 + (lVar31 - lVar30) * 4) = uVar34;
    }
  }
  if (0 < (int)param_2) {
    ___bzero();
  }
  lVar30 = *in_RCX;
  if (*(int *)(lVar30 + 0xc) < 1) {
    bVar19 = false;
    lVar31 = 0;
  }
  else if ((int)uVar32 < 1) {
    lVar29 = 0;
    lVar22 = 0;
    bVar20 = false;
    do {
      lVar31 = *(longlong *)(*(longlong *)(lVar30 + 0x10) + lVar29 * 8);
      if (lVar22 == lVar31) {
        lVar31 = lVar22;
        bVar19 = bVar20;
        if ((!bVar20) && (lVar22 != 0)) {
          FUN_00d50b00();
          bVar19 = true;
        }
      }
      else {
        if (lVar31 != 0) {
          FUN_00d50b00();
        }
        bVar19 = true;
        if ((bVar20) && (lVar22 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar29 = lVar29 + 1;
      lVar30 = *in_RCX;
      lVar22 = lVar31;
      bVar20 = bVar19;
    } while (lVar29 < *(int *)(lVar30 + 0xc));
  }
  else {
    lVar26 = 0;
    bVar19 = false;
    lVar29 = 0;
    do {
      lVar31 = *(longlong *)(*(longlong *)(lVar30 + 0x10) + lVar26 * 8);
      if (lVar29 == lVar31) {
        lVar31 = lVar29;
        bVar20 = bVar19;
        if ((!bVar19) && (lVar29 != 0)) {
          FUN_00d50b00();
          bVar20 = true;
        }
      }
      else {
        if (lVar31 != 0) {
          FUN_00d50b00();
        }
        bVar20 = true;
        if ((bVar19) && (lVar29 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar19 = bVar20;
      dVar3 = *(double *)(lVar31 + 0x18);
      dVar4 = *(double *)(lVar31 + 0x10) + DAT_023942d0;
      uVar23 = 0;
      do {
        uVar27 = (uint)((int)dVar4 - iVar21) + uVar23;
        iVar24 = (int)uVar27;
        if ((-1 < iVar24) && (iVar24 < (int)param_2)) {
          uVar27 = uVar27 & 0xffffffff;
          *(float *)(*unaff_RSI + uVar27 * 4) =
               *(float *)(lVar22 + uVar23 * 4) * (float)dVar3 + *(float *)(*unaff_RSI + uVar27 * 4);
        }
        uVar23 = uVar23 + 1;
      } while (uVar32 != uVar23);
      lVar26 = lVar26 + 1;
      lVar30 = *in_RCX;
      lVar29 = lVar31;
    } while (lVar26 < *(int *)(lVar30 + 0xc));
  }
  if ((param_3 != '\0') || (param_4 != (undefined4 *)0x0)) {
    if ((int)param_2 < 1) {
      fVar35 = 0.0;
      uVar34 = 0;
    }
    else {
      lVar22 = *unaff_RSI;
      uVar23 = (ulonglong)(param_2 & 3);
      if ((ulonglong)param_2 - 1 < 3) {
        uVar25 = 0;
        fVar35 = 0.0;
        uVar27 = 0;
      }
      else {
        uVar25 = 0;
        fVar35 = 0.0;
        uVar27 = 0;
        do {
          fVar36 = *(float *)(lVar22 + uVar25 * 4);
          uVar32 = (uint)uVar25;
          uVar28 = (uint)uVar27;
          if (fVar35 < fVar36) {
            uVar28 = uVar32;
          }
          fVar37 = *(float *)(lVar22 + 4 + uVar25 * 4);
          if (fVar36 <= fVar35) {
            fVar36 = fVar35;
          }
          uVar18 = uVar32 + 1;
          if (fVar37 <= fVar36) {
            fVar37 = fVar36;
            uVar18 = uVar28;
          }
          fVar36 = *(float *)(lVar22 + 8 + uVar25 * 4);
          uVar28 = uVar32 + 2;
          if (fVar36 <= fVar37) {
            fVar36 = fVar37;
            uVar28 = uVar18;
          }
          fVar35 = *(float *)(lVar22 + 0xc + uVar25 * 4);
          uVar32 = uVar32 + 3;
          if (fVar35 <= fVar36) {
            uVar32 = uVar28;
          }
          uVar27 = (ulonglong)uVar32;
          if (fVar35 <= fVar36) {
            fVar35 = fVar36;
          }
          uVar25 = uVar25 + 4;
        } while ((param_2 & 0xfffffffc) != uVar25);
      }
      uVar34 = (undefined4)uVar27;
      for (; uVar23 != 0; uVar23 = uVar23 - 1) {
        fVar36 = *(float *)(lVar22 + uVar25 * 4);
        uVar34 = (undefined4)uVar27;
        if (fVar35 < fVar36) {
          uVar27 = uVar25 & 0xffffffff;
          uVar34 = (undefined4)uVar25;
          fVar35 = fVar36;
        }
        uVar25 = uVar25 + 1;
      }
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar34;
    }
    if (((param_3 != '\0') && (0.0 < fVar35)) && (0 < (int)param_2)) {
      fVar35 = DAT_02390124 / fVar35;
      lVar22 = *unaff_RSI;
      if (param_2 < 8) {
        uVar23 = 0;
      }
      else {
        uVar23 = (ulonglong)(param_2 & 0xfffffff8);
        uVar27 = (uVar23 - 8 >> 3) + 1;
        if (uVar23 - 8 == 0) {
          lVar30 = 0;
        }
        else {
          lVar29 = -(uVar27 & 0xfffffffffffffffe);
          lVar30 = 0;
          do {
            pfVar1 = (float *)(lVar22 + lVar30 * 4);
            fVar36 = pfVar1[1];
            fVar37 = pfVar1[2];
            fVar5 = pfVar1[3];
            pfVar2 = (float *)(lVar22 + 0x10 + lVar30 * 4);
            fVar6 = *pfVar2;
            fVar7 = pfVar2[1];
            fVar8 = pfVar2[2];
            fVar9 = pfVar2[3];
            pfVar2 = (float *)(lVar22 + 0x20 + lVar30 * 4);
            fVar10 = *pfVar2;
            fVar11 = pfVar2[1];
            fVar12 = pfVar2[2];
            fVar13 = pfVar2[3];
            pfVar2 = (float *)(lVar22 + 0x30 + lVar30 * 4);
            fVar14 = *pfVar2;
            fVar15 = pfVar2[1];
            fVar16 = pfVar2[2];
            fVar17 = pfVar2[3];
            pfVar2 = (float *)(lVar22 + lVar30 * 4);
            *pfVar2 = *pfVar1 * fVar35;
            pfVar2[1] = fVar36 * fVar35;
            pfVar2[2] = fVar37 * fVar35;
            pfVar2[3] = fVar5 * fVar35;
            pfVar1 = (float *)(lVar22 + 0x10 + lVar30 * 4);
            *pfVar1 = fVar6 * fVar35;
            pfVar1[1] = fVar7 * fVar35;
            pfVar1[2] = fVar8 * fVar35;
            pfVar1[3] = fVar9 * fVar35;
            pfVar1 = (float *)(lVar22 + 0x20 + lVar30 * 4);
            *pfVar1 = fVar10 * fVar35;
            pfVar1[1] = fVar11 * fVar35;
            pfVar1[2] = fVar12 * fVar35;
            pfVar1[3] = fVar13 * fVar35;
            pfVar1 = (float *)(lVar22 + 0x30 + lVar30 * 4);
            *pfVar1 = fVar14 * fVar35;
            pfVar1[1] = fVar15 * fVar35;
            pfVar1[2] = fVar16 * fVar35;
            pfVar1[3] = fVar17 * fVar35;
            lVar30 = lVar30 + 0x10;
            lVar29 = lVar29 + 2;
          } while (lVar29 != 0);
        }
        if ((uVar27 & 1) != 0) {
          pfVar1 = (float *)(lVar22 + lVar30 * 4);
          fVar36 = pfVar1[1];
          fVar37 = pfVar1[2];
          fVar5 = pfVar1[3];
          pfVar2 = (float *)(lVar22 + 0x10 + lVar30 * 4);
          fVar6 = *pfVar2;
          fVar7 = pfVar2[1];
          fVar8 = pfVar2[2];
          fVar9 = pfVar2[3];
          pfVar2 = (float *)(lVar22 + lVar30 * 4);
          *pfVar2 = *pfVar1 * fVar35;
          pfVar2[1] = fVar36 * fVar35;
          pfVar2[2] = fVar37 * fVar35;
          pfVar2[3] = fVar5 * fVar35;
          pfVar1 = (float *)(lVar22 + 0x10 + lVar30 * 4);
          *pfVar1 = fVar6 * fVar35;
          pfVar1[1] = fVar7 * fVar35;
          pfVar1[2] = fVar8 * fVar35;
          pfVar1[3] = fVar9 * fVar35;
        }
        if (uVar23 == param_2) goto LAB_015c1be7;
      }
      do {
        *(float *)(lVar22 + uVar23 * 4) = *(float *)(lVar22 + uVar23 * 4) * fVar35;
        uVar23 = uVar23 + 1;
      } while (param_2 != uVar23);
    }
  }
LAB_015c1be7:
  if ((bVar19) && (lVar31 != 0)) {
    FUN_00d50b20();
  }
  return;
}


