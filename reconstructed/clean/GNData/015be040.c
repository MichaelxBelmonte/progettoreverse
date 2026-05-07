// Function: FUN_015be040
// Address: 015be040
// Size: 937 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_015be040(void* param_1)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t this_ptr;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  float fVar13;
  int64_t local_30;
  char local_28;
  
  fVar13 = g_02390124;
  FUN_015bdbb0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017ed3a0();
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (local_30 != 0) {
    if ((*(int *)(this_ptr + 0x40) == 3) || (*(int *)(this_ptr + 0x40) == 0)) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017ed3a0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c6a90(0);
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017ed3a0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar13 = (float)FUN_012c6af0();
      fVar13 = (float)_exp2f(fVar13 * g_023941f4);
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if ((fVar13 != 0.0) || (NAN(fVar13))) {
    iVar3 = *(int *)(local_30 + 0x18);
    iVar4 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    if (3 < iVar3) {
      lVar6 = *(int64_t *)(local_30 + 0x10);
      uVar1 = (iVar4 >> 2) - 1;
      uVar12 = 0;
      if (6 < uVar1) {
        uVar11 = (uint64_t)uVar1 + 1;
        uVar12 = uVar11 & 0xfffffffffffffff8;
        uVar9 = (uVar12 - 8 >> 3) + 1;
        uVar8 = (uint64_t)((uint)uVar9 & 7);
        if (uVar12 - 8 < 0x38) {
          lVar7 = 0;
        }
        else {
          lVar10 = -(uVar9 & 0xfffffffffffffff8);
          lVar7 = 0;
          do {
            pfVar2 = (float *)(lVar6 + lVar7 * 4);
            *pfVar2 = fVar13;
            pfVar2[1] = fVar13;
            pfVar2[2] = fVar13;
            pfVar2[3] = fVar13;
            pfVar2 = (float *)(lVar6 + 0x10 + lVar7 * 4);
            *pfVar2 = fVar13;
            pfVar2[1] = fVar13;
            pfVar2[2] = fVar13;
            pfVar2[3] = fVar13;
            pfVar2 = (float *)(lVar6 + 0x20 + lVar7 * 4);
            *pfVar2 = fVar13;
            pfVar2[1] = fVar13;
            pfVar2[2] = fVar13;
            pfVar2[3] = fVar13;
            pfVar2 = (float *)(lVar6 + 0x30 + lVar7 * 4);
            *pfVar2 = fVar13;
            pfVar2[1] = fVar13;
            pfVar2[2] = fVar13;
            pfVar2[3] = fVar13;
            pfVar2 = (float *)(lVar6 + 0x40 + lVar7 * 4);
            *pfVar2 = fVar13;
            pfVar2[1] = fVar13;
            pfVar2[2] = fVar13;
            pfVar2[3] = fVar13;
            pfVar2 = (float *)(lVar6 + 0x50 + lVar7 * 4);
            *pfVar2 = fVar13;
            pfVar2[1] = fVar13;
            pfVar2[2] = fVar13;
            pfVar2[3] = fVar13;
            pfVar2 = (float *)(lVar6 + 0x60 + lVar7 * 4);
            *pfVar2 = fVar13;
            pfVar2[1] = fVar13;
            pfVar2[2] = fVar13;
            pfVar2[3] = fVar13;
            pfVar2 = (float *)(lVar6 + 0x70 + lVar7 * 4);
            *pfVar2 = fVar13;
            pfVar2[1] = fVar13;
            pfVar2[2] = fVar13;
            pfVar2[3] = fVar13;
            pfVar2 = (float *)(lVar6 + 0x80 + lVar7 * 4);
            *pfVar2 = fVar13;
            pfVar2[1] = fVar13;
            pfVar2[2] = fVar13;
            pfVar2[3] = fVar13;
            pfVar2 = (float *)(lVar6 + 0x90 + lVar7 * 4);
            *pfVar2 = fVar13;
            pfVar2[1] = fVar13;
            pfVar2[2] = fVar13;
            pfVar2[3] = fVar13;
            pfVar2 = (float *)(lVar6 + 0xa0 + lVar7 * 4);
            *pfVar2 = fVar13;
            pfVar2[1] = fVar13;
            pfVar2[2] = fVar13;
            pfVar2[3] = fVar13;
            pfVar2 = (float *)(lVar6 + 0xb0 + lVar7 * 4);
            *pfVar2 = fVar13;
            pfVar2[1] = fVar13;
            pfVar2[2] = fVar13;
            pfVar2[3] = fVar13;
            pfVar2 = (float *)(lVar6 + 0xc0 + lVar7 * 4);
            *pfVar2 = fVar13;
            pfVar2[1] = fVar13;
            pfVar2[2] = fVar13;
            pfVar2[3] = fVar13;
            pfVar2 = (float *)(lVar6 + 0xd0 + lVar7 * 4);
            *pfVar2 = fVar13;
            pfVar2[1] = fVar13;
            pfVar2[2] = fVar13;
            pfVar2[3] = fVar13;
            pfVar2 = (float *)(lVar6 + 0xe0 + lVar7 * 4);
            *pfVar2 = fVar13;
            pfVar2[1] = fVar13;
            pfVar2[2] = fVar13;
            pfVar2[3] = fVar13;
            pfVar2 = (float *)(lVar6 + 0xf0 + lVar7 * 4);
            *pfVar2 = fVar13;
            pfVar2[1] = fVar13;
            pfVar2[2] = fVar13;
            pfVar2[3] = fVar13;
            lVar7 = lVar7 + 0x40;
            lVar10 = lVar10 + 8;
          } while (lVar10 != 0);
        }
        if (uVar8 != 0) {
          lVar7 = lVar6 + lVar7 * 4;
          lVar10 = 0;
          do {
            pfVar2 = (float *)(lVar7 + lVar10);
            *pfVar2 = fVar13;
            pfVar2[1] = fVar13;
            pfVar2[2] = fVar13;
            pfVar2[3] = fVar13;
            pfVar2 = (float *)(lVar7 + 0x10 + lVar10);
            *pfVar2 = fVar13;
            pfVar2[1] = fVar13;
            pfVar2[2] = fVar13;
            pfVar2[3] = fVar13;
            lVar10 = lVar10 + 0x20;
          } while (uVar8 << 5 != lVar10);
        }
        if (uVar11 == uVar12) goto LAB_015be3bd;
        lVar6 = lVar6 + uVar12 * 4;
      }
      lVar7 = 0;
      do {
        *(float *)(lVar6 + lVar7 * 4) = fVar13;
        lVar7 = lVar7 + 1;
      } while ((iVar4 >> 2) - (int)uVar12 != (int)lVar7);
    }
  }
  else {
    ___bzero();
  }
LAB_015be3bd:
  FUN_015b9470();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  return;
}

