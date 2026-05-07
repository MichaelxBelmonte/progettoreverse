// Function: FUN_013ec060
// Address: 013ec060
// Size: 1563 bytes
// Class: Unknown

double FUN_013ec060(double param_1,double param_2)

{
  uint uVar1;
  float fVar2;
  uint64_t uVar3;
  int64_t lVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  byte in_CL;
  int iVar11;
  uint *in_RDX;
  uint uVar12;
  int *arg1;
  uint uVar13;
  int64_t this_ptr;
  uint uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  lVar4 = *(int64_t *)(this_ptr + 0x48);
  if (lVar4 == 0) {
    return 0.0;
  }
  uVar13 = *(uint *)(lVar4 + 0x18);
  uVar8 = uVar13;
  if ((int)uVar13 < 0) {
    uVar8 = uVar13 + 3;
  }
  if (uVar13 + 3 < 7) {
    return 0.0;
  }
  dVar16 = g_0238fee8 / *(double *)(this_ptr + 0x50);
  iVar7 = *arg1;
  if (*arg1 < 1) {
    iVar7 = 1;
  }
  dVar15 = (double)iVar7 * param_2;
  if (param_1 < 0.0) {
    *in_RDX = 0;
    iVar6 = 1;
    if ((param_2 <= 0.0) || (iVar6 = iVar7, dVar15 + param_1 < 0.0)) {
      if (in_CL == 0) {
        fVar2 = **(float **)(lVar4 + 0x10);
        *arg1 = iVar6;
        return (double)fVar2;
      }
    }
    else {
      iVar7 = (int)((0.0 - param_1) / param_2);
      iVar6 = 1;
      if (-1 < iVar7) {
        iVar6 = iVar7 + 1;
      }
    }
    uVar3 = **(void**)(lVar4 + 0x10);
    dVar15 = (double)(float)uVar3;
    *arg1 = iVar6;
    return (((double)iVar6 * param_2 + param_1) - dVar16 * 0.0) *
           (((double)(float)((uint64_t)uVar3 >> 0x20) - dVar15) / (dVar16 - dVar16 * 0.0)) + dVar15
    ;
  }
  iVar6 = (int)uVar8 >> 2;
  uVar13 = iVar6 - 1;
  dVar17 = (double)(int)uVar13 * dVar16;
  if (param_1 <= dVar17) {
    uVar8 = *in_RDX;
    if ((-1 < (int)uVar8) && ((int)uVar8 < iVar6)) {
      dVar17 = (double)(int)uVar8 * dVar16;
      if (dVar17 <= param_1) {
        if (((int)uVar8 < (int)uVar13) &&
           ((((uVar12 = uVar8 + 1, dVar17 <= param_1 &&
              (uVar14 = uVar8, param_1 < (double)(int)uVar12 * dVar16)) ||
             (((int)uVar12 < (int)uVar13 &&
              (((uVar1 = uVar8 + 2, (double)(int)uVar12 * dVar16 <= param_1 &&
                (uVar14 = uVar12, param_1 < (double)(int)uVar1 * dVar16)) ||
               (((int)uVar1 < (int)uVar13 &&
                (((double)(int)uVar1 * dVar16 <= param_1 &&
                 (uVar14 = uVar1, param_1 < (double)(int)(uVar8 + 3) * dVar16)))))))))) &&
            (uVar14 != 0xffffffff)))) goto LAB_013ec383;
      }
      else if (0 < (int)uVar8) {
        dVar19 = (double)(int)(uVar8 - 1) * dVar16;
        if ((dVar19 <= param_1) && (uVar14 = uVar8 - 1, param_1 < dVar17)) goto LAB_013ec383;
        if (1 < (int)uVar8) {
          dVar17 = (double)(int)(uVar8 - 2) * dVar16;
          if (((dVar17 <= param_1) && (uVar14 = uVar8 - 2, param_1 < dVar19)) ||
             ((2 < (int)uVar8 &&
              ((uVar14 = uVar8 - 3, (double)(int)uVar14 * dVar16 <= param_1 && (param_1 < dVar17))))
             )) goto LAB_013ec383;
        }
      }
    }
    if ((param_1 != 0.0) || (uVar14 = 0, NAN(param_1))) {
      uVar14 = 0;
      if ((int)(param_1 / dVar16) != 0xffffffff) {
        uVar14 = (int)(param_1 / dVar16);
      }
    }
LAB_013ec383:
    uVar8 = iVar6 - 2;
    uVar12 = uVar13;
    if ((int)uVar14 < (int)uVar13) {
      uVar8 = uVar14;
      uVar12 = uVar14 + 1;
    }
    uVar9 = (uint64_t)uVar8;
    dVar17 = (double)(int)uVar8 * dVar16;
    pfVar5 = *(float **)(lVar4 + 0x10);
    dVar21 = (double)pfVar5[(int)uVar8];
    dVar19 = (double)(int)uVar12 * dVar16;
    dVar20 = (double)pfVar5[(int)uVar12];
    if ((param_2 == 0.0) && (!NAN(param_2))) {
      *arg1 = iVar7;
      *in_RDX = uVar8;
      return (param_1 - dVar17) * ((dVar20 - dVar21) / (dVar19 - dVar17)) + dVar21;
    }
    dVar15 = dVar15 + param_1;
    dVar18 = param_1 + param_2;
    if (param_2 <= 0.0) {
      iVar6 = 0;
      if (dVar18 < dVar17) {
        uVar13 = 0;
        if ((int)uVar8 < 0) {
          uVar13 = uVar8;
        }
        uVar9 = (uint64_t)uVar8;
        do {
          uVar10 = uVar9;
          if ((int)uVar10 < 1) {
            if (in_CL == 0) {
              dVar15 = (double)*pfVar5;
            }
            else {
              dVar15 = (double)(float)*(void*)(pfVar5 + (int)uVar13);
              dVar15 = (dVar18 - (double)(int)uVar13 * dVar16) *
                       (((double)(float)((uint64_t)*(void*)(pfVar5 + (int)uVar13) >> 0x20) -
                        dVar15) /
                       ((double)(int)(uVar13 + 1) * dVar16 - (double)(int)uVar13 * dVar16)) + dVar15
              ;
            }
            *arg1 = 1;
            *in_RDX = 0;
            return dVar15;
          }
          uVar9 = uVar10 - 1;
          dVar17 = (double)(int)uVar9 * dVar16;
        } while (dVar18 < dVar17);
        dVar21 = (double)pfVar5[uVar9 & 0xffffffff];
        dVar19 = dVar16 * (double)(int)uVar10;
        dVar20 = (double)pfVar5[uVar10];
        iVar6 = 1;
      }
      uVar8 = (uint)uVar9;
      if (dVar15 < dVar17) {
        iVar11 = (uint)(uVar8 == 0 & in_CL) +
                 (int)((param_1 - dVar17) / (double)(g_023945b0 ^ (uint64_t)param_2));
        iVar7 = 1;
        if (0 < iVar11) {
          iVar7 = iVar11;
        }
        dVar15 = (double)iVar7 * param_2 + param_1;
        iVar7 = iVar7 + iVar6;
      }
    }
    else {
      iVar6 = 0;
      if (dVar19 < dVar18) {
        uVar8 = uVar13;
        if ((int)uVar13 < (int)uVar12) {
          uVar8 = uVar12;
        }
        uVar14 = -uVar12;
        do {
          uVar12 = uVar12 + 1;
          if (-uVar8 == uVar14) {
            if (in_CL == 0) {
              dVar15 = (double)pfVar5[(int)uVar13];
            }
            else {
              dVar17 = (double)(int)(uVar8 - 1) * dVar16;
              dVar15 = (double)(float)*(void*)(pfVar5 + (int64_t)(int)uVar8 + -1);
              dVar15 = (dVar18 - dVar17) *
                       (((double)(float)((uint64_t)
                                         *(void*)(pfVar5 + (int64_t)(int)uVar8 + -1) >> 0x20
                                        ) - dVar15) / ((double)(int)uVar8 * dVar16 - dVar17)) +
                       dVar15;
            }
            *arg1 = 1;
            *in_RDX = uVar13;
            return dVar15;
          }
          dVar19 = (double)(int)uVar12 * dVar16;
          uVar14 = uVar14 - 1;
        } while (dVar19 < dVar18);
        uVar8 = ~uVar14;
        dVar17 = dVar16 * (double)(int)uVar8;
        dVar21 = (double)pfVar5[(int)uVar8];
        uVar12 = -uVar14;
        dVar20 = (double)pfVar5[(int)uVar12];
        iVar6 = 1;
      }
      if (dVar19 < dVar15) {
        iVar11 = (uint)(uVar12 == uVar13 & in_CL) + (int)((dVar19 - param_1) / param_2);
        iVar7 = 1;
        if (0 < iVar11) {
          iVar7 = iVar11;
        }
        dVar15 = (double)iVar7 * param_2 + param_1;
        iVar7 = iVar7 + iVar6;
      }
    }
    *arg1 = iVar7;
    *in_RDX = uVar8;
    return (dVar15 - dVar17) * ((dVar20 - dVar21) / (dVar19 - dVar17)) + dVar21;
  }
  *in_RDX = uVar13;
  iVar11 = 1;
  if ((0.0 <= param_2) || (iVar11 = iVar7, dVar17 < dVar15 + param_1)) {
    if (in_CL == 0) {
      dVar15 = (double)*(float *)(*(int64_t *)(lVar4 + 0x10) + (int64_t)(int)uVar13 * 4);
      goto LAB_013ec2d6;
    }
  }
  else {
    iVar7 = (int)((param_1 - dVar17) / (double)(g_023945b0 ^ (uint64_t)param_2));
    iVar11 = 1;
    if (-1 < iVar7) {
      iVar11 = iVar7 + 1;
    }
  }
  dVar16 = dVar16 * (double)(iVar6 + -2);
  uVar3 = *(void*)(*(int64_t *)(lVar4 + 0x10) + -8 + (int64_t)iVar6 * 4);
  dVar15 = (double)(float)uVar3;
  dVar15 = (((double)iVar11 * param_2 + param_1) - dVar16) *
           (((double)(float)((uint64_t)uVar3 >> 0x20) - dVar15) / (dVar17 - dVar16)) + dVar15;
LAB_013ec2d6:
  *arg1 = iVar11;
  return dVar15;
}

