// Function: FUN_015c0b60
// Address: 015c0b60
// Size: 1709 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_015c0b60(float param_1,float param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  uint64_t uVar5;
  int in_ECX;
  uint uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint in_EDX;
  uint uVar10;
  uint uVar11;
  uint64_t uVar12;
  float *pfVar13;
  uint64_t uVar14;
  int iVar15;
  int64_t lVar16;
  int64_t *arg1;
  int64_t this_ptr;
  char in_R8B;
  uint uVar17;
  uint64_t uVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  
  if ((int)in_EDX < 1) {
    return;
  }
  uVar8 = (uint64_t)in_EDX;
  fVar20 = (float)_logf();
  uVar10 = (int)(g_02411070 / (double)fVar20);
  if ((int)(g_02411070 / (double)fVar20) < 1) {
    uVar10 = 1;
  }
  uVar7 = (uint64_t)uVar10;
  if (in_ECX == 5) {
    uVar7 = 1;
    in_ECX = 1;
  }
  uVar10 = (uint)uVar7;
  iVar15 = uVar10 * 2 + 1;
  if (*(int *)(this_ptr + 0x24) < iVar15) {
    if (*(int64_t *)(this_ptr + 0x18) != 0) {
      FUN_00e83070();
      *(void*)(this_ptr + 0x18) = 0;
    }
    pfVar3 = (float *)FUN_00e83010();
    *(float **)(this_ptr + 0x18) = pfVar3;
    *(int *)(this_ptr + 0x24) = iVar15;
  }
  else {
    pfVar3 = *(float **)(this_ptr + 0x18);
  }
  pfVar1 = pfVar3 + uVar7;
  switch(in_ECX) {
  case 0:
    ___bzero();
    break;
  case 1:
    param_2 = *(float *)*arg1;
    param_3 = ((float *)*arg1)[in_EDX - 1];
  case 4:
    uVar11 = uVar10 - 1;
    uVar5 = uVar7;
    pfVar4 = pfVar1;
    pfVar13 = pfVar3;
    if ((6 < uVar11) &&
       ((uVar14 = (uint64_t)uVar11 + 1, pfVar3 + uVar7 + uVar11 + 1 <= pfVar3 ||
        (pfVar3 + uVar14 <= pfVar1)))) {
      uVar18 = uVar14 & 0xfffffffffffffff8;
      uVar12 = (uVar18 - 8 >> 3) + 1;
      uVar5 = (uint64_t)((uint)uVar12 & 3);
      if (uVar18 - 8 < 0x18) {
        lVar9 = 0;
      }
      else {
        lVar16 = -(uVar12 & 0xfffffffffffffffc);
        lVar9 = 0;
        do {
          pfVar4 = pfVar3 + lVar9;
          *pfVar4 = param_2;
          pfVar4[1] = param_2;
          pfVar4[2] = param_2;
          pfVar4[3] = param_2;
          pfVar4 = pfVar3 + lVar9 + 4;
          *pfVar4 = param_2;
          pfVar4[1] = param_2;
          pfVar4[2] = param_2;
          pfVar4[3] = param_2;
          pfVar4 = pfVar3 + uVar7 + lVar9;
          *pfVar4 = param_3;
          pfVar4[1] = param_3;
          pfVar4[2] = param_3;
          pfVar4[3] = param_3;
          pfVar4 = pfVar3 + uVar7 + lVar9 + 4;
          *pfVar4 = param_3;
          pfVar4[1] = param_3;
          pfVar4[2] = param_3;
          pfVar4[3] = param_3;
          pfVar4 = pfVar3 + lVar9 + 8;
          *pfVar4 = param_2;
          pfVar4[1] = param_2;
          pfVar4[2] = param_2;
          pfVar4[3] = param_2;
          pfVar4 = pfVar3 + lVar9 + 0xc;
          *pfVar4 = param_2;
          pfVar4[1] = param_2;
          pfVar4[2] = param_2;
          pfVar4[3] = param_2;
          pfVar4 = pfVar3 + uVar7 + lVar9 + 8;
          *pfVar4 = param_3;
          pfVar4[1] = param_3;
          pfVar4[2] = param_3;
          pfVar4[3] = param_3;
          pfVar4 = pfVar3 + uVar7 + lVar9 + 0xc;
          *pfVar4 = param_3;
          pfVar4[1] = param_3;
          pfVar4[2] = param_3;
          pfVar4[3] = param_3;
          pfVar4 = pfVar3 + lVar9 + 0x10;
          *pfVar4 = param_2;
          pfVar4[1] = param_2;
          pfVar4[2] = param_2;
          pfVar4[3] = param_2;
          pfVar4 = pfVar3 + lVar9 + 0x14;
          *pfVar4 = param_2;
          pfVar4[1] = param_2;
          pfVar4[2] = param_2;
          pfVar4[3] = param_2;
          pfVar4 = pfVar3 + uVar7 + lVar9 + 0x10;
          *pfVar4 = param_3;
          pfVar4[1] = param_3;
          pfVar4[2] = param_3;
          pfVar4[3] = param_3;
          pfVar4 = pfVar3 + uVar7 + lVar9 + 0x14;
          *pfVar4 = param_3;
          pfVar4[1] = param_3;
          pfVar4[2] = param_3;
          pfVar4[3] = param_3;
          pfVar4 = pfVar3 + lVar9 + 0x18;
          *pfVar4 = param_2;
          pfVar4[1] = param_2;
          pfVar4[2] = param_2;
          pfVar4[3] = param_2;
          pfVar4 = pfVar3 + lVar9 + 0x1c;
          *pfVar4 = param_2;
          pfVar4[1] = param_2;
          pfVar4[2] = param_2;
          pfVar4[3] = param_2;
          pfVar4 = pfVar3 + uVar7 + lVar9 + 0x18;
          *pfVar4 = param_3;
          pfVar4[1] = param_3;
          pfVar4[2] = param_3;
          pfVar4[3] = param_3;
          pfVar4 = pfVar3 + uVar7 + lVar9 + 0x1c;
          *pfVar4 = param_3;
          pfVar4[1] = param_3;
          pfVar4[2] = param_3;
          pfVar4[3] = param_3;
          lVar9 = lVar9 + 0x20;
          lVar16 = lVar16 + 4;
        } while (lVar16 != 0);
      }
      if (uVar5 != 0) {
        pfVar4 = pfVar3 + lVar9 + 4;
        lVar16 = -uVar5;
        do {
          pfVar4[-4] = param_2;
          pfVar4[-3] = param_2;
          pfVar4[-2] = param_2;
          pfVar4[-1] = param_2;
          *pfVar4 = param_2;
          pfVar4[1] = param_2;
          pfVar4[2] = param_2;
          pfVar4[3] = param_2;
          pfVar13 = pfVar4 + (uVar7 - 4);
          *pfVar13 = param_3;
          pfVar13[1] = param_3;
          pfVar13[2] = param_3;
          pfVar13[3] = param_3;
          pfVar13 = pfVar4 + uVar7;
          *pfVar13 = param_3;
          pfVar13[1] = param_3;
          pfVar13[2] = param_3;
          pfVar13[3] = param_3;
          pfVar4 = pfVar4 + 8;
          lVar16 = lVar16 + 1;
        } while (lVar16 != 0);
      }
      if (uVar14 == uVar18) break;
      pfVar4 = pfVar1 + uVar18;
      pfVar13 = pfVar3 + uVar18;
      uVar5 = (uint64_t)(uVar10 - (int)uVar18);
    }
    uVar11 = (uint)uVar5;
    uVar17 = uVar11 - 1;
    if ((uVar5 & 7) != 0) {
      uVar6 = 0;
      do {
        *pfVar13 = param_2;
        pfVar13 = pfVar13 + 1;
        *pfVar4 = param_3;
        pfVar4 = pfVar4 + 1;
        uVar6 = uVar6 + 1;
      } while ((uVar11 & 7) != uVar6);
      uVar11 = uVar11 - uVar6;
    }
    if (6 < uVar17) {
      lVar16 = 0;
      do {
        pfVar13[lVar16] = param_2;
        pfVar4[lVar16] = param_3;
        pfVar13[lVar16 + 1] = param_2;
        pfVar4[lVar16 + 1] = param_3;
        pfVar13[lVar16 + 2] = param_2;
        pfVar4[lVar16 + 2] = param_3;
        pfVar13[lVar16 + 3] = param_2;
        pfVar4[lVar16 + 3] = param_3;
        pfVar13[lVar16 + 4] = param_2;
        pfVar4[lVar16 + 4] = param_3;
        pfVar13[lVar16 + 5] = param_2;
        pfVar4[lVar16 + 5] = param_3;
        pfVar13[lVar16 + 6] = param_2;
        pfVar4[lVar16 + 6] = param_3;
        pfVar13[lVar16 + 7] = param_2;
        pfVar4[lVar16 + 7] = param_3;
        lVar16 = lVar16 + 8;
      } while (uVar11 != (uint)lVar16);
    }
    break;
  case 2:
    uVar11 = in_EDX - 1;
    lVar16 = *arg1;
    lVar9 = -1;
    uVar5 = 1;
    do {
      uVar17 = (uint)uVar5;
      if (uVar8 <= uVar5) {
        uVar17 = uVar11;
      }
      uVar6 = (uint)((uint64_t)uVar11 + lVar9);
      if ((int64_t)((uint64_t)uVar11 + lVar9) < 1) {
        uVar6 = 0;
      }
      if ((int)in_EDX <= (int)uVar6) {
        uVar6 = uVar11;
      }
      pfVar1[lVar9] = *(float *)(lVar16 + (int64_t)(int)uVar17 * 4);
      pfVar1[uVar5 - 1] = *(float *)(lVar16 + (int64_t)(int)uVar6 * 4);
      lVar9 = lVar9 + -1;
      bVar19 = uVar5 != uVar7;
      uVar5 = uVar5 + 1;
    } while (bVar19);
    break;
  case 3:
    uVar11 = in_EDX - 1;
    pfVar4 = (float *)*arg1;
    lVar16 = -1;
    uVar5 = 1;
    do {
      uVar17 = (uint)uVar5;
      if (uVar8 <= uVar5) {
        uVar17 = uVar11;
      }
      pfVar1[lVar16] = (*pfVar4 - pfVar4[(int)uVar17]) + *pfVar4;
      lVar9 = (uint64_t)uVar11 + lVar16;
      uVar17 = (uint)lVar9;
      if (lVar9 < 1) {
        uVar17 = 0;
      }
      if ((int)in_EDX <= (int)uVar17) {
        uVar17 = uVar11;
      }
      pfVar1[uVar5 - 1] = (pfVar4[uVar11] - pfVar4[(int)uVar17]) + pfVar4[uVar11];
      lVar16 = lVar16 + -1;
      bVar19 = uVar5 != uVar7;
      uVar5 = uVar5 + 1;
    } while (bVar19);
  }
  fVar20 = *pfVar3;
  fVar20 = (fVar20 - fVar20) * param_1 + fVar20;
  if (uVar10 != 1) {
    uVar5 = (uint64_t)((uint)(uVar7 - 1) & 3);
    if (uVar7 - 2 < 3) {
      lVar16 = 1;
    }
    else {
      uVar14 = 0;
      do {
        uVar12 = uVar14;
        fVar20 = (((((((fVar20 - pfVar3[uVar12 + 1]) * param_1 + pfVar3[uVar12 + 1]) -
                     pfVar3[uVar12 + 2]) * param_1 + pfVar3[uVar12 + 2]) - pfVar3[uVar12 + 3]) *
                   param_1 + pfVar3[uVar12 + 3]) - pfVar3[uVar12 + 4]) * param_1 +
                 pfVar3[uVar12 + 4];
        uVar14 = uVar12 + 4;
      } while ((uVar7 - 1 & 0xfffffffffffffffc) != uVar12 + 4);
      lVar16 = uVar12 + 5;
    }
    if (uVar5 != 0) {
      uVar14 = 0;
      do {
        fVar20 = (fVar20 - pfVar3[lVar16 + uVar14]) * param_1 + pfVar3[lVar16 + uVar14];
        uVar14 = uVar14 + 1;
      } while (uVar5 != uVar14);
    }
  }
  if (0 < (int)in_EDX) {
    lVar16 = *arg1;
    if (in_EDX == 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        fVar21 = *(float *)(lVar16 + uVar5 * 4);
        fVar2 = *(float *)(lVar16 + 4 + uVar5 * 4);
        fVar21 = (fVar20 - fVar21) * param_1 + fVar21;
        *(float *)(lVar16 + uVar5 * 4) = fVar21;
        fVar20 = (fVar21 - fVar2) * param_1 + fVar2;
        *(float *)(lVar16 + 4 + uVar5 * 4) = fVar20;
        uVar5 = uVar5 + 2;
      } while ((in_EDX & 0xfffffffe) != uVar5);
    }
    if ((in_EDX & 1) != 0) {
      fVar21 = *(float *)(lVar16 + uVar5 * 4);
      fVar20 = (fVar20 - fVar21) * param_1 + fVar21;
      *(float *)(lVar16 + uVar5 * 4) = fVar20;
    }
  }
  if (uVar10 == 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      fVar20 = (fVar20 - pfVar3[uVar7 + uVar5]) * param_1 + pfVar3[uVar7 + uVar5];
      pfVar3[uVar7 + uVar5] = fVar20;
      fVar20 = (fVar20 - pfVar3[uVar7 + uVar5 + 1]) * param_1 + pfVar3[uVar7 + uVar5 + 1];
      pfVar3[uVar7 + uVar5 + 1] = fVar20;
      uVar5 = uVar5 + 2;
    } while ((uVar10 & 0x7ffffffe) != uVar5);
  }
  if ((uVar7 & 1) != 0) {
    fVar20 = (fVar20 - pfVar1[uVar5]) * param_1 + pfVar1[uVar5];
    pfVar1[uVar5] = fVar20;
  }
  if (in_R8B != '\0') {
    lVar16 = uVar7 + 1;
    do {
      fVar20 = (fVar20 - pfVar1[(int)lVar16 - 2]) * param_1 + pfVar1[(int)lVar16 - 2];
      lVar16 = lVar16 + -1;
    } while (1 < lVar16);
    if (0 < (int)in_EDX) {
      lVar16 = *arg1;
      uVar10 = in_EDX;
      if ((in_EDX & 1) != 0) {
        uVar10 = in_EDX - 1;
        fVar21 = *(float *)(lVar16 + (uint64_t)uVar10 * 4);
        fVar20 = (fVar20 - fVar21) * param_1 + fVar21;
        *(float *)(lVar16 + (uint64_t)uVar10 * 4) = fVar20;
        uVar8 = uVar8 - 1;
      }
      if (in_EDX != 1) {
        lVar9 = uVar8 + 2;
        do {
          uVar11 = uVar10 - 2;
          fVar21 = *(float *)(lVar16 + (uint64_t)(uVar10 - 1) * 4);
          fVar21 = (fVar20 - fVar21) * param_1 + fVar21;
          *(float *)(lVar16 + (uint64_t)(uVar10 - 1) * 4) = fVar21;
          fVar20 = *(float *)(lVar16 + (uint64_t)uVar11 * 4);
          fVar20 = (fVar21 - fVar20) * param_1 + fVar20;
          *(float *)(lVar16 + (uint64_t)uVar11 * 4) = fVar20;
          lVar9 = lVar9 + -2;
          uVar10 = uVar11;
        } while (2 < lVar9);
      }
    }
  }
  return;
}

