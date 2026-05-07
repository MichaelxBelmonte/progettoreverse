// Function: FUN_01835ec0
// Address: 01835ec0
// Size: 694 bytes
// Class: Unknown

void FUN_01835ec0(float param_1,int64_t *param_2,size_t param_3)

{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t lVar7;
  void *pvVar8;
  void *pvVar9;
  int64_t lVar10;
  void *pvVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  uint uVar12;
  uint uVar13;
  float *pfVar14;
  float fVar15;
  int64_t local_58;
  char local_50;
  
  uVar13 = *(uint *)(*this_ptr + 0xc);
  pvVar8 = (void *)(uint64_t)uVar13;
  uVar12 = *(uint *)(**(int64_t **)(*this_ptr + 0x10) + 0x18);
  uVar4 = uVar12 + 3;
  if (-1 < (int)uVar12) {
    uVar4 = uVar12;
  }
  pvVar9 = pvVar8;
  FUN_00c8e690();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (0 < (int)uVar13) {
    uVar13 = (int)uVar4 >> 2;
    uVar6 = 2;
    if (2 < (int)uVar13) {
      uVar6 = (uint64_t)uVar13;
    }
    if ((int)uVar12 < 8) {
      pvVar11 = (void *)0x0;
      do {
        if (*(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + (int64_t)pvVar11 * 8) != 0) {
          FUN_00d50b00();
        }
        _memcpy(pvVar9,(void *)(int64_t)(int)(uVar4 & 0xfffffffc),param_3);
        **(void**)(local_58 + 0x10) = 0;
        FUN_00d50b20();
        pvVar11 = (void *)((int64_t)pvVar11 + 1);
      } while (pvVar8 != pvVar11);
    }
    else {
      pvVar11 = (void *)0x0;
      pvVar9 = (void *)(2 - uVar6);
      do {
        lVar3 = *(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + (int64_t)pvVar11 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        _memcpy(pvVar9,(void *)(int64_t)(int)(uVar4 & 0xfffffffc),param_3);
        pfVar14 = *(float **)(local_58 + 0x10);
        *pfVar14 = 0.0;
        fVar1 = *(float *)(*(int64_t *)(*arg1 + 0x10) + (int64_t)pvVar11 * 4);
        fVar2 = *(float *)(*(int64_t *)(*param_2 + 0x10) + (int64_t)pvVar11 * 4);
        lVar10 = 1;
        while( true ) {
          fVar15 = (float)(int)lVar10 * ((fVar1 / fVar2) / param_1);
          uVar12 = (uint)fVar15;
          if ((int)uVar12 < 0) {
            fVar15 = *pfVar14;
          }
          else if ((int)uVar12 < (int)(uVar13 - 1)) {
            iVar5 = FUN_00e7d780((fVar15 - (float)(int)uVar12) * g_023d5f44);
            lVar7 = FUN_00e84280();
            pvVar9 = (void *)(int64_t)iVar5;
            fVar15 = (pfVar14[(uint64_t)uVar12 + 1] - pfVar14[uVar12]) *
                     *(float *)(lVar7 + (int64_t)pvVar9 * 4) + pfVar14[uVar12];
          }
          else {
            fVar15 = pfVar14[uVar13 - 1];
          }
          *(float *)(*(int64_t *)(lVar3 + 0x10) + lVar10 * 4) = fVar15;
          if ((int64_t)(2 - uVar6) + lVar10 == 1) break;
          pfVar14 = *(float **)(local_58 + 0x10);
          lVar10 = lVar10 + 1;
        }
        FUN_00d50b20();
        pvVar11 = (void *)((int64_t)pvVar11 + 1);
      } while (pvVar11 != pvVar8);
    }
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return;
}

