// Function: FUN_0161e1a0
// Address: 0161e1a0
// Size: 619 bytes
// Class: Unknown

void FUN_0161e1a0(float param_1,float param_2)

{
  uint64_t uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  void*puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int iVar10;
  uint uVar11;
  int64_t *arg1;
  void*this_ptr;
  uint64_t uVar12;
  uint64_t uVar13;
  uint uVar14;
  int iVar15;
  uint64_t uVar16;
  uint64_t extraout_XMM0_Qa;
  double dVar17;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  lVar7 = *arg1;
  iVar15 = *(int *)(lVar7 + 0x18);
  iVar10 = iVar15 + 3;
  if (-1 < iVar15) {
    iVar10 = iVar15;
  }
  if (0xb < iVar15) {
    uVar11 = (iVar10 >> 2) - 1;
    uVar14 = 2;
    if (2 < (int)uVar11) {
      uVar14 = uVar11;
    }
    uVar16 = 0;
    uVar9 = 1;
    dVar17 = g_02391030;
    while( true ) {
      lVar7 = *(int64_t *)(lVar7 + 0x10);
      fVar3 = *(float *)(lVar7 + uVar9 * 4);
      uVar1 = uVar9 + 1;
      pfVar2 = (float *)(lVar7 + -4 + uVar9 * 4);
      if (((*pfVar2 <= fVar3 && fVar3 != *pfVar2) && (*(float *)(lVar7 + uVar1 * 4) <= fVar3)) &&
         (param_1 < fVar3)) {
        if (1 < uVar9) {
          uVar9 = uVar16;
          uVar12 = 0xffffffff;
          do {
            fVar4 = *(float *)(lVar7 + uVar9 * 4);
            uVar13 = uVar9 & 0xffffffff;
            if ((int)uVar12 != -1) {
              uVar13 = uVar12;
            }
            if (param_2 <= fVar4) {
              uVar13 = uVar12;
            }
          } while ((((*(float *)(lVar7 + 4 + uVar9 * 4) <= fVar4) ||
                    (*(float *)(lVar7 + (uint64_t)((int)uVar9 - 1) * 4) < fVar4)) ||
                   (fVar3 * g_0239011c <= fVar4)) &&
                  ((dVar17 <= (double)fVar4 &&
                   (bVar5 = 1 < (int64_t)uVar9, uVar9 = uVar9 - 1, uVar12 = uVar13, bVar5))));
        }
        if ((int64_t)uVar1 < (int64_t)(int)uVar11) {
          iVar15 = -1;
          uVar9 = uVar16;
          do {
            fVar3 = *(float *)(lVar7 + 8 + uVar9 * 4);
            iVar10 = (int)uVar9 + 2;
            if (iVar15 != -1) {
              iVar10 = iVar15;
            }
            if (param_2 <= fVar3) {
              iVar10 = iVar15;
            }
            iVar15 = iVar10;
          } while ((((*(float *)(lVar7 + 4 + uVar9 * 4) <= fVar3) ||
                    (*(float *)(lVar7 + 0xc + uVar9 * 4) < fVar3)) && (dVar17 <= (double)fVar3)) &&
                  (uVar9 = uVar9 + 1, (uint64_t)uVar11 - 2 != uVar9));
        }
        uVar8 = FUN_00e7b4e0();
        iVar15 = *(int *)(puVar6 + 3);
        FUN_00c8e340(extraout_XMM0_Qa,1);
        *(void*)(puVar6[2] + (int64_t)iVar15) = uVar8;
        dVar17 = g_02391030;
      }
      uVar16 = uVar16 + 1;
      if (uVar16 == uVar14 - 1) break;
      lVar7 = *arg1;
      uVar9 = uVar1;
    }
  }
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}

