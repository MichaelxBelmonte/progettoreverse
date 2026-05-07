// Function: FUN_00b86d20
// Address: 00b86d20
// Size: 732 bytes
// Class: GNFilePath

char FUN_00b86d20(double param_1,uint32_t param_2,int param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  char cVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t in_RCX;
  int64_t lVar7;
  int64_t lVar8;
  uint uVar9;
  uint64_t uVar10;
  float *arg1;
  int64_t this_ptr;
  int iVar11;
  int64_t lVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  
  dVar1 = *(double *)(this_ptr + 0x30);
  if ((dVar1 == param_1) && (!NAN(dVar1) && !NAN(param_1))) {
    cVar4 = FUN_00b87020(in_RCX);
    return cVar4;
  }
  iVar11 = (int)(((double)param_3 / param_1) * dVar1);
  uVar9 = iVar11 + 1;
  ___bzero();
  if (iVar11 < 0x100000) {
    iVar11 = (int)(((double)in_RCX / param_1) * dVar1);
    lVar12 = (int64_t)iVar11;
    if (*(int64_t *)(this_ptr + 0x38) < lVar12 + (int)uVar9) {
      uVar9 = (int)*(int64_t *)(this_ptr + 0x38) - iVar11;
    }
    lVar5 = FUN_00e83010();
    cVar4 = FUN_00b87020(lVar12,param_2);
    uVar3 = g_02390140;
    dVar2 = g_0238fee8;
    if (cVar4 == '\0') {
      return '\0';
    }
    if (0 < param_3) {
      dVar13 = g_0238fee8 / param_1;
      dVar14 = 0.0;
      iVar11 = 0;
      do {
        dVar16 = dVar14 / param_1 + (double)in_RCX / param_1;
        lVar7 = (int64_t)(dVar1 * dVar16) - lVar12;
        lVar6 = (int64_t)((dVar16 + dVar13) * dVar1) - lVar12;
        if (lVar7 < 0) {
          lVar7 = 0;
        }
        if ((int)uVar9 <= lVar7) {
          lVar7 = (int64_t)(int)(uVar9 - 1);
        }
        if (lVar6 < 0) {
          lVar6 = 0;
        }
        if ((int)uVar9 <= lVar6) {
          lVar6 = (int64_t)(int)(uVar9 - 1);
        }
        fVar15 = (float)(*(uint *)(lVar5 + lVar7 * 4) & uVar3);
        *arg1 = fVar15;
        if (lVar7 <= lVar6) {
          lVar8 = lVar7;
          if (((int)(lVar6 + 1) - (int)lVar7 & 1U) != 0) {
            fVar17 = (float)(*(uint *)(lVar5 + lVar7 * 4) & uVar3);
            if (fVar15 < fVar17) {
              *arg1 = fVar17;
              fVar15 = fVar17;
            }
            lVar8 = lVar7 + 1;
          }
          if (lVar6 != lVar7) {
            do {
              fVar17 = (float)(*(uint *)(lVar5 + lVar8 * 4) & uVar3);
              if (fVar15 < fVar17) {
                *arg1 = fVar17;
                fVar18 = (float)(*(uint *)(lVar5 + 4 + lVar8 * 4) & uVar3);
                fVar15 = fVar17;
                if (fVar17 < fVar18) goto LAB_00b86ff7;
              }
              else {
                fVar18 = (float)(*(uint *)(lVar5 + 4 + lVar8 * 4) & uVar3);
                if (fVar15 < fVar18) {
LAB_00b86ff7:
                  *arg1 = fVar18;
                  fVar15 = fVar18;
                }
              }
              lVar8 = lVar8 + 2;
            } while (lVar6 + 1 != lVar8);
          }
        }
        arg1 = arg1 + 1;
        dVar14 = dVar14 + dVar2;
        iVar11 = iVar11 + 1;
      } while (iVar11 != param_3);
    }
    FUN_00e83070();
  }
  else {
    iVar11 = 1;
    uVar10 = (uint64_t)uVar9;
    do {
      iVar11 = iVar11 * 2;
      uVar9 = (uint)uVar10;
      uVar10 = uVar10 >> 1;
    } while (0x200001 < uVar9);
    if (0 < (int)((int64_t)param_3 / (int64_t)iVar11)) {
      uVar10 = (int64_t)param_3 / (int64_t)iVar11 & 0xffffffff;
      iVar11 = 0;
      do {
        cVar4 = FUN_00b86d20(param_1,param_2,uVar10);
        if (cVar4 == '\0') {
          return '\0';
        }
        iVar11 = iVar11 + (int)uVar10;
        if (param_3 - (int)uVar10 < iVar11) {
          uVar10 = (uint64_t)(uint)(param_3 - iVar11);
        }
      } while (0 < (int)uVar10);
      return cVar4;
    }
  }
  return '\x01';
}

