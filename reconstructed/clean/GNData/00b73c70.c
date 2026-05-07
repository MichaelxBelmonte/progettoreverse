// Function: FUN_00b73c70
// Address: 00b73c70
// Size: 904 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_00b73c70(int param_1,void*param_2,size_t param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  byte bVar4;
  int64_t lVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int64_t lVar10;
  int64_t this_ptr;
  int iVar11;
  int64_t lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  
  if (*(byte *)(this_ptr + 0x90) == 0x80) {
    cVar3 = *(char *)(this_ptr + 0x96);
    dVar18 = g_0238fee8;
  }
  else {
    fVar17 = (float)_exp2f((*(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0xa8) + 0x90) + 0x100
                                      ) * g_02390d38 +
                           (float)*(byte *)(this_ptr + 0x90) * g_023908e0) / g_0239394c);
    cVar3 = *(char *)(this_ptr + 0x96);
    dVar18 = (double)(fVar17 * g_023941f8);
  }
  if (cVar3 != '\0') {
    iVar7 = *(int *)(this_ptr + 0x98);
    bVar4 = *(byte *)(this_ptr + 0x91);
    uVar6 = FUN_00e7dff0();
    dVar13 = (double)((float)uVar6 * g_023d4ff0) / g_023907c0 + g_0238fee8;
    pfVar8 = (float *)(uint64_t)*(byte *)(this_ptr + 0x94);
    lVar10 = *(int64_t *)(g_028a5378 + (int64_t)pfVar8 * 8);
    iVar11 = param_1;
    if (*(char *)(this_ptr + 0x95) != '\0') {
      *(void*)(this_ptr + 0x96) = 0;
      iVar11 = 0x20;
      if (param_1 < 0x20) {
        iVar11 = param_1;
      }
    }
    dVar18 = dVar18 * dVar13;
    fVar17 = ((float)bVar4 / g_023d5000) * g_0239429c;
    lVar12 = 0;
    do {
      if (0 < iVar11) {
        pfVar8 = (float *)*param_2;
        dVar14 = dVar18 * (double)iVar7;
        dVar15 = (double)*(int *)(this_ptr + 0x98);
        lVar5 = *(int64_t *)(*(int64_t *)(this_ptr + 0xa0) + 0x10);
        dVar13 = *(double *)(lVar5 + lVar12 * 8);
        if (*(char *)(this_ptr + 0x95) == '\0') {
          iVar9 = 0;
          do {
            fVar1 = *(float *)(lVar10 + (int64_t)(int)dVar13 * 4);
            fVar2 = *(float *)(lVar10 + 4 + (int64_t)(int)dVar13 * 4);
            dVar16 = dVar13 - (double)(int)dVar13;
            for (dVar13 = dVar14 / *(double *)(this_ptr + 0x18) + dVar13; dVar15 < dVar13;
                dVar13 = dVar13 - dVar15) {
            }
            *(double *)(lVar5 + lVar12 * 8) = dVar13;
            *pfVar8 = (float)((double)fVar1 + dVar16 * (double)(fVar2 - fVar1)) * fVar17 + *pfVar8;
            pfVar8 = pfVar8 + 1;
            iVar9 = iVar9 + 1;
          } while (iVar9 != iVar11);
        }
        else {
          iVar9 = 0;
          do {
            fVar1 = *(float *)(lVar10 + (int64_t)(int)dVar13 * 4);
            fVar2 = *(float *)(lVar10 + 4 + (int64_t)(int)dVar13 * 4);
            dVar16 = dVar13 - (double)(int)dVar13;
            for (dVar13 = dVar14 / *(double *)(this_ptr + 0x18) + dVar13; dVar15 < dVar13;
                dVar13 = dVar13 - dVar15) {
            }
            *(double *)(lVar5 + lVar12 * 8) = dVar13;
            *pfVar8 = ((float)(iVar11 - iVar9) *
                      (float)((double)fVar1 + dVar16 * (double)(fVar2 - fVar1)) * fVar17) /
                      (float)param_1 + *pfVar8;
            pfVar8 = pfVar8 + 1;
            iVar9 = iVar9 + 1;
          } while (iVar9 != iVar11);
        }
      }
      uVar6 = FUN_00e7dff0();
      dVar18 = dVar18 / ((double)((float)uVar6 * g_023d4ff0) / g_0241b248 + g_0238fee8);
      lVar12 = lVar12 + 1;
    } while (lVar12 != 3);
    iVar7 = FUN_00b33120();
    if (1 < iVar7) {
      lVar10 = 1;
      do {
        _memcpy(pfVar8,(void *)((int64_t)iVar11 << 2),param_3);
        lVar10 = lVar10 + 1;
        iVar7 = FUN_00b33120();
      } while (lVar10 < iVar7);
    }
  }
  return;
}

