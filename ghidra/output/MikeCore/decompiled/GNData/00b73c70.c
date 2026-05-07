// Function: FUN_00b73c70
// Address: 00b73c70
// Size: 904 bytes
// Class: GNData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b73c70(int param_1,undefined8 *param_2,size_t param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  longlong unaff_RDI;
  int iVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  
  if (*(byte *)(unaff_RDI + 0x90) == 0x80) {
    cVar3 = *(char *)(unaff_RDI + 0x96);
    dVar18 = DAT_0238fee8;
  }
  else {
    fVar17 = (float)_exp2f((*(float *)(*(longlong *)(*(longlong *)(unaff_RDI + 0xa8) + 0x90) + 0x100
                                      ) * DAT_02390d38 +
                           (float)*(byte *)(unaff_RDI + 0x90) * DAT_023908e0) / DAT_0239394c);
    cVar3 = *(char *)(unaff_RDI + 0x96);
    dVar18 = (double)(fVar17 * DAT_023941f8);
  }
  if (cVar3 != '\0') {
    iVar7 = *(int *)(unaff_RDI + 0x98);
    bVar4 = *(byte *)(unaff_RDI + 0x91);
    uVar6 = FUN_00e7dff0();
    dVar13 = (double)((float)uVar6 * DAT_023d4ff0) / DAT_023907c0 + DAT_0238fee8;
    pfVar8 = (float *)(ulonglong)*(byte *)(unaff_RDI + 0x94);
    lVar10 = *(longlong *)(DAT_028a5378 + (longlong)pfVar8 * 8);
    iVar11 = param_1;
    if (*(char *)(unaff_RDI + 0x95) != '\0') {
      *(undefined1 *)(unaff_RDI + 0x96) = 0;
      iVar11 = 0x20;
      if (param_1 < 0x20) {
        iVar11 = param_1;
      }
    }
    dVar18 = dVar18 * dVar13;
    fVar17 = ((float)bVar4 / DAT_023d5000) * DAT_0239429c;
    lVar12 = 0;
    do {
      if (0 < iVar11) {
        pfVar8 = (float *)*param_2;
        dVar14 = dVar18 * (double)iVar7;
        dVar15 = (double)*(int *)(unaff_RDI + 0x98);
        lVar5 = *(longlong *)(*(longlong *)(unaff_RDI + 0xa0) + 0x10);
        dVar13 = *(double *)(lVar5 + lVar12 * 8);
        if (*(char *)(unaff_RDI + 0x95) == '\0') {
          iVar9 = 0;
          do {
            fVar1 = *(float *)(lVar10 + (longlong)(int)dVar13 * 4);
            fVar2 = *(float *)(lVar10 + 4 + (longlong)(int)dVar13 * 4);
            dVar16 = dVar13 - (double)(int)dVar13;
            for (dVar13 = dVar14 / *(double *)(unaff_RDI + 0x18) + dVar13; dVar15 < dVar13;
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
            fVar1 = *(float *)(lVar10 + (longlong)(int)dVar13 * 4);
            fVar2 = *(float *)(lVar10 + 4 + (longlong)(int)dVar13 * 4);
            dVar16 = dVar13 - (double)(int)dVar13;
            for (dVar13 = dVar14 / *(double *)(unaff_RDI + 0x18) + dVar13; dVar15 < dVar13;
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
      dVar18 = dVar18 / ((double)((float)uVar6 * DAT_023d4ff0) / _DAT_0241b248 + DAT_0238fee8);
      lVar12 = lVar12 + 1;
    } while (lVar12 != 3);
    iVar7 = FUN_00b33120();
    if (1 < iVar7) {
      lVar10 = 1;
      do {
        _memcpy(pfVar8,(void *)((longlong)iVar11 << 2),param_3);
        lVar10 = lVar10 + 1;
        iVar7 = FUN_00b33120();
      } while (lVar10 < iVar7);
    }
  }
  return;
}


