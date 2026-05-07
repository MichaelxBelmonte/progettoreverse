// Function: FUN_012b9d70
// Address: 012b9d70
// Size: 1431 bytes
// Class: MULSSComponentRenderer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012b9d70(float param_1,float param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  uint uVar9;
  float *in_RCX;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong in_RDX;
  longlong unaff_RSI;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  size_t in_R8D;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  *param_4 = 1.0;
  param_2 = param_2 / param_3;
  if (DAT_0239011c * (float)(int)in_R8D < param_2) {
    return;
  }
  _memcpy(in_RCX,(void *)((longlong)(int)in_R8D << 2),in_R8D);
  *in_RCX = 0.0;
  FUN_015c1480(param_2);
  fVar21 = _UNK_0241109c;
  fVar20 = _UNK_02411098;
  fVar22 = _UNK_02411094;
  fVar19 = DAT_02394274;
  uVar15 = (ulonglong)in_R8D;
  if (0 < (int)in_R8D) {
    if (in_R8D < 8) {
      uVar11 = 0;
    }
    else {
      uVar11 = (ulonglong)(in_R8D & 0xfffffff8);
      uVar10 = 0;
      do {
        pfVar8 = in_RCX + uVar10;
        fVar1 = pfVar8[1];
        fVar2 = pfVar8[2];
        fVar3 = pfVar8[3];
        if (*pfVar8 < fVar19) {
          in_RCX[uVar10] = 1.1754944e-38;
        }
        if (fVar1 < fVar22) {
          in_RCX[uVar10 + 1] = 1.1754944e-38;
        }
        if (fVar2 < fVar20) {
          in_RCX[uVar10 + 2] = 1.1754944e-38;
          if (fVar3 < fVar21) goto LAB_012b9f06;
LAB_012b9e95:
          pfVar8 = in_RCX + uVar10 + 4;
          fVar1 = *pfVar8;
          fVar2 = pfVar8[1];
          fVar3 = pfVar8[2];
          fVar4 = pfVar8[3];
        }
        else {
          if (fVar21 <= fVar3) goto LAB_012b9e95;
LAB_012b9f06:
          in_RCX[uVar10 + 3] = 1.1754944e-38;
          pfVar8 = in_RCX + uVar10 + 4;
          fVar1 = *pfVar8;
          fVar2 = pfVar8[1];
          fVar3 = pfVar8[2];
          fVar4 = pfVar8[3];
        }
        if (fVar1 < fVar19) {
          in_RCX[uVar10 + 4] = 1.1754944e-38;
        }
        if (fVar2 < fVar22) {
          in_RCX[uVar10 + 5] = 1.1754944e-38;
        }
        if (fVar3 < fVar20) {
          in_RCX[uVar10 + 6] = 1.1754944e-38;
        }
        if (fVar4 < fVar21) {
          in_RCX[uVar10 + 7] = 1.1754944e-38;
        }
        uVar10 = uVar10 + 8;
      } while (uVar11 != uVar10);
      fVar19 = DAT_02394274;
      if (uVar11 == uVar15) goto LAB_012b9f50;
    }
    do {
      if (in_RCX[uVar11] <= fVar19 && fVar19 != in_RCX[uVar11]) {
        in_RCX[uVar11] = 1.1754944e-38;
      }
      uVar11 = uVar11 + 1;
    } while (uVar15 != uVar11);
  }
LAB_012b9f50:
  fVar22 = DAT_0239011c;
  iVar17 = in_R8D - 1;
  fVar19 = *in_RCX;
  fVar20 = param_2;
  iVar5 = (int)(DAT_0239011c + param_2);
  iVar18 = 0;
  do {
    iVar6 = iVar5;
    uVar9 = iVar6 - iVar18;
    if (uVar9 != 0 && iVar18 <= iVar6) {
      uVar13 = (ulonglong)iVar6;
      fVar21 = (in_RCX[uVar13] - fVar19) / (float)(int)uVar9;
      uVar16 = (ulonglong)iVar18;
      uVar11 = ~uVar16;
      uVar10 = (ulonglong)uVar9 & 3;
      if ((uVar9 & 3) != 0) {
        do {
          fVar19 = fVar19 + fVar21;
          in_RCX[uVar16 + 1] = fVar19;
          uVar16 = uVar16 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (2 < uVar11 + uVar13) {
        do {
          in_RCX[uVar16 + 1] = fVar19 + fVar21;
          fVar19 = fVar19 + fVar21 + fVar21;
          in_RCX[uVar16 + 2] = fVar19;
          fVar19 = fVar19 + fVar21;
          in_RCX[uVar16 + 3] = fVar19;
          fVar19 = fVar19 + fVar21;
          in_RCX[uVar16 + 4] = fVar19;
          uVar16 = uVar16 + 4;
        } while (uVar13 != uVar16);
      }
    }
    fVar20 = fVar20 + param_2;
    iVar5 = (int)(fVar20 + fVar22);
    iVar18 = iVar6;
  } while ((int)(fVar20 + fVar22) < (int)in_R8D);
  if (iVar6 + 1 < (int)in_R8D) {
    lVar14 = (longlong)(iVar6 + 1);
    uVar9 = (in_R8D - iVar6) - 2;
    if (6 < uVar9) {
      uVar16 = (ulonglong)uVar9 + 1;
      uVar13 = uVar16 & 0xfffffffffffffff8;
      uVar11 = (uVar13 - 8 >> 3) + 1;
      uVar10 = (ulonglong)((uint)uVar11 & 3);
      if (uVar13 - 8 < 0x18) {
        lVar7 = 0;
      }
      else {
        lVar12 = -(uVar11 & 0xfffffffffffffffc);
        lVar7 = 0;
        do {
          pfVar8 = in_RCX + lVar14 + lVar7;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 4;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 8;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 0xc;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 0x10;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 0x14;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 0x18;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = in_RCX + lVar14 + lVar7 + 0x1c;
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          lVar7 = lVar7 + 0x20;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0);
      }
      if (uVar10 != 0) {
        lVar12 = 0;
        do {
          pfVar8 = (float *)((longlong)in_RCX + lVar12 + (lVar7 + lVar14) * 4);
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          pfVar8 = (float *)((longlong)in_RCX + lVar12 + (lVar7 + lVar14) * 4 + 0x10);
          *pfVar8 = fVar19;
          pfVar8[1] = fVar19;
          pfVar8[2] = fVar19;
          pfVar8[3] = fVar19;
          lVar12 = lVar12 + 0x20;
        } while (uVar10 << 5 != lVar12);
      }
      if (uVar16 == uVar13) goto LAB_012ba13e;
      lVar14 = lVar14 + uVar13;
    }
    do {
      in_RCX[lVar14] = fVar19;
      lVar14 = lVar14 + 1;
    } while (in_R8D != (size_t)lVar14);
  }
LAB_012ba13e:
  fVar19 = DAT_02394274;
  if (1 < (int)in_R8D) {
    uVar11 = 1;
    do {
      if (fVar19 <= in_RCX[uVar11]) {
        fVar22 = (float)(int)uVar11 * param_1;
        if ((float)iVar17 <= fVar22) {
          fVar22 = in_RCX[iVar17];
        }
        else {
          fVar22 = (in_RCX[(longlong)(int)fVar22 + 1] - in_RCX[(int)fVar22]) *
                   (fVar22 - (float)(int)fVar22) + in_RCX[(int)fVar22];
        }
        *(float *)(in_RDX + uVar11 * 4) =
             (fVar22 / in_RCX[uVar11]) * *(float *)(in_RDX + uVar11 * 4);
      }
      uVar11 = uVar11 + 1;
    } while (uVar15 != uVar11);
  }
  fVar22 = DAT_02390d00;
  fVar19 = DAT_02390124;
  fVar20 = DAT_02390124 / (float)(int)((float)(int)in_R8D * DAT_0239426c);
  pfVar8 = (float *)(in_RDX + (longlong)iVar17 * 4);
  fVar21 = 0.0;
  do {
    *pfVar8 = (*pfVar8 + fVar22) * fVar21 + fVar19;
    fVar21 = fVar21 + fVar20;
    pfVar8 = pfVar8 + -1;
  } while (fVar21 < fVar19);
  fVar22 = 0.0;
  fVar20 = 0.0;
  if (1 < (int)in_R8D) {
    uVar11 = (ulonglong)((uint)(uVar15 - 1) & 3);
    if (uVar15 - 2 < 3) {
      fVar20 = 0.0;
      lVar14 = 1;
      fVar22 = 0.0;
    }
    else {
      fVar20 = 0.0;
      fVar22 = 0.0;
      uVar10 = 0;
      do {
        uVar13 = uVar10;
        fVar21 = *(float *)(unaff_RSI + 4 + uVar13 * 4);
        fVar1 = *(float *)(unaff_RSI + 8 + uVar13 * 4);
        fVar2 = *(float *)(unaff_RSI + 0xc + uVar13 * 4);
        fVar3 = *(float *)(unaff_RSI + 0x10 + uVar13 * 4);
        fVar22 = fVar22 + fVar21 + fVar1 + fVar2 + fVar3;
        fVar20 = fVar3 * *(float *)(in_RDX + 0x10 + uVar13 * 4) +
                 fVar2 * *(float *)(in_RDX + 0xc + uVar13 * 4) +
                 fVar1 * *(float *)(in_RDX + 8 + uVar13 * 4) +
                 fVar21 * *(float *)(in_RDX + 4 + uVar13 * 4) + fVar20;
        uVar10 = uVar13 + 4;
      } while ((uVar15 - 1 & 0xfffffffffffffffc) != uVar13 + 4);
      lVar14 = uVar13 + 5;
    }
    if (uVar11 != 0) {
      uVar15 = 0;
      do {
        fVar21 = *(float *)(unaff_RSI + lVar14 * 4 + uVar15 * 4);
        fVar22 = fVar22 + fVar21;
        fVar20 = fVar20 + fVar21 * *(float *)(in_RDX + lVar14 * 4 + uVar15 * 4);
        uVar15 = uVar15 + 1;
      } while (uVar11 != uVar15);
    }
  }
  if (DAT_02394274 < fVar20) {
    fVar19 = fVar22 / fVar20;
  }
  *param_4 = fVar19;
  return;
}


