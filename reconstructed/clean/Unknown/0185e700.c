// Function: FUN_0185e700
// Address: 0185e700
// Size: 1067 bytes
// Class: Unknown

int64_t * FUN_0185e700(int param_1,int param_2,char param_3,int64_t *param_4)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  uint64_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t *this_ptr;
  uint64_t uVar10;
  uint64_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  float fVar14;
  float fVar15;
  int64_t local_40;
  char local_38;
  
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (param_1 - param_2 == 0 || param_1 < param_2) {
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    FUN_018da560();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    iVar1 = *(int *)(local_40 + 0x18);
    iVar5 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar5 = iVar1;
    }
    if (iVar1 < 4) {
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      fVar14 = (float)(param_1 - param_2);
      uVar7 = iVar5 >> 2;
      lVar2 = *(int64_t *)(local_40 + 0x10);
      lVar3 = *(int64_t *)(local_40 + 0x10);
      uVar12 = param_1 - param_2;
      if (uVar12 == 0 || param_1 < param_2) {
        if (param_3 == '\0') {
          if ((uint64_t)uVar7 - 1 < 3) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            do {
              *(void*)(lVar3 + (int64_t)*(int *)(lVar2 + uVar10 * 4) * 4) = 0;
              *(void*)(lVar3 + (int64_t)*(int *)(lVar2 + 4 + uVar10 * 4) * 4) = 0;
              *(void*)(lVar3 + (int64_t)*(int *)(lVar2 + 8 + uVar10 * 4) * 4) = 0;
              *(void*)(lVar3 + (int64_t)*(int *)(lVar2 + 0xc + uVar10 * 4) * 4) = 0;
              uVar10 = uVar10 + 4;
            } while ((uVar7 & 0xfffffffc) != uVar10);
          }
          if ((uint64_t)(uVar7 & 3) != 0) {
            uVar11 = 0;
            do {
              *(void*)(lVar3 + (int64_t)*(int *)(lVar2 + uVar10 * 4 + uVar11 * 4) * 4) = 0;
              uVar11 = uVar11 + 1;
            } while ((uVar7 & 3) != uVar11);
          }
        }
        else {
          fVar14 = 0.0 / fVar14;
          if ((uint64_t)uVar7 - 1 < 3) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            do {
              *(float *)(lVar3 + (int64_t)*(int *)(lVar2 + uVar10 * 4) * 4) = fVar14;
              *(float *)(lVar3 + (int64_t)*(int *)(lVar2 + 4 + uVar10 * 4) * 4) = fVar14;
              *(float *)(lVar3 + (int64_t)*(int *)(lVar2 + 8 + uVar10 * 4) * 4) = fVar14;
              *(float *)(lVar3 + (int64_t)*(int *)(lVar2 + 0xc + uVar10 * 4) * 4) = fVar14;
              uVar10 = uVar10 + 4;
            } while ((uVar7 & 0xfffffffc) != uVar10);
          }
          if ((uint64_t)(uVar7 & 3) != 0) {
            uVar11 = 0;
            do {
              *(float *)(lVar3 + (int64_t)*(int *)(lVar2 + uVar10 * 4 + uVar11 * 4) * 4) = fVar14;
              uVar11 = uVar11 + 1;
            } while ((uVar7 & 3) != uVar11);
          }
        }
      }
      else {
        uVar11 = (uint64_t)param_2;
        lVar4 = *(int64_t *)(*param_4 + 0x10);
        uVar10 = (uint64_t)param_1;
        if (param_3 == '\0') {
          uVar13 = 0;
          do {
            lVar9 = (int64_t)*(int *)(lVar2 + uVar13 * 4);
            fVar14 = 0.0;
            uVar8 = uVar11;
            for (uVar6 = (uint64_t)(uVar12 & 3); uVar6 != 0; uVar6 = uVar6 - 1) {
              fVar14 = fVar14 + *(float *)(*(int64_t *)(*(int64_t *)(lVar4 + uVar8 * 8) + 0x10) +
                                          lVar9 * 4);
              uVar8 = uVar8 + 1;
            }
            if (2 < ~uVar11 + uVar10) {
              do {
                fVar14 = fVar14 + *(float *)(*(int64_t *)(*(int64_t *)(lVar4 + uVar8 * 8) + 0x10)
                                            + lVar9 * 4) +
                         *(float *)(*(int64_t *)(*(int64_t *)(lVar4 + 8 + uVar8 * 8) + 0x10) +
                                   lVar9 * 4) +
                         *(float *)(*(int64_t *)(*(int64_t *)(lVar4 + 0x10 + uVar8 * 8) + 0x10) +
                                   lVar9 * 4) +
                         *(float *)(*(int64_t *)(*(int64_t *)(lVar4 + 0x18 + uVar8 * 8) + 0x10) +
                                   lVar9 * 4);
                uVar8 = uVar8 + 4;
              } while (uVar10 != uVar8);
            }
            *(float *)(lVar3 + lVar9 * 4) = fVar14;
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar7);
        }
        else {
          uVar13 = 0;
          do {
            lVar9 = (int64_t)*(int *)(lVar2 + uVar13 * 4);
            fVar15 = 0.0;
            uVar8 = uVar11;
            for (uVar6 = (uint64_t)(uVar12 & 3); uVar6 != 0; uVar6 = uVar6 - 1) {
              fVar15 = fVar15 + *(float *)(*(int64_t *)(*(int64_t *)(lVar4 + uVar8 * 8) + 0x10) +
                                          lVar9 * 4);
              uVar8 = uVar8 + 1;
            }
            if (2 < ~uVar11 + uVar10) {
              do {
                fVar15 = fVar15 + *(float *)(*(int64_t *)(*(int64_t *)(lVar4 + uVar8 * 8) + 0x10)
                                            + lVar9 * 4) +
                         *(float *)(*(int64_t *)(*(int64_t *)(lVar4 + 8 + uVar8 * 8) + 0x10) +
                                   lVar9 * 4) +
                         *(float *)(*(int64_t *)(*(int64_t *)(lVar4 + 0x10 + uVar8 * 8) + 0x10) +
                                   lVar9 * 4) +
                         *(float *)(*(int64_t *)(*(int64_t *)(lVar4 + 0x18 + uVar8 * 8) + 0x10) +
                                   lVar9 * 4);
                uVar8 = uVar8 + 4;
              } while (uVar10 != uVar8);
            }
            *(float *)(lVar3 + lVar9 * 4) = fVar15 / fVar14;
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar7);
        }
      }
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
      if (local_40 == 0) {
        return this_ptr;
      }
    }
    FUN_00d50b20();
  }
  return this_ptr;
}

