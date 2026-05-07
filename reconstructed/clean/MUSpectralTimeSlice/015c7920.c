// Function: FUN_015c7920
// Address: 015c7920
// Size: 672 bytes
// Class: MUSpectralTimeSlice
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


int64_t FUN_015c7920(void *param_1,uint64_t param_2,size_t param_3)

{
  void*puVar1;
  void*puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t this_ptr;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int iVar16;
  uint uVar17;
  void *pvVar18;
  uint uVar19;
  
  if (*(int64_t *)(this_ptr + 0x80) != 0) {
    return *(int64_t *)(this_ptr + 0x80);
  }
  uVar7 = FUN_00e83010();
  *(void*)(this_ptr + 0x80) = uVar7;
  iVar6 = (int)((float)*(int *)(this_ptr + 0x58) * g_02391094);
  iVar16 = 1;
  if (0 < iVar6) {
    iVar16 = iVar6;
  }
  uVar10 = 0;
  uVar8 = FUN_00e83da0();
  iVar6 = *(int *)(this_ptr + 0x58);
  uVar19 = (uint)((float)iVar6 * g_0239011c);
  if (0 < (int)uVar19) {
    ___bzero();
    uVar10 = (uint64_t)uVar19;
  }
  uVar17 = (iVar16 + uVar19) - (int)uVar10;
  pvVar18 = (void *)(uint64_t)uVar17;
  if (uVar17 != 0 && (int)uVar10 <= (int)(iVar16 + uVar19)) {
    lVar3 = *(int64_t *)(this_ptr + 0x80);
    if ((uVar17 < 8) ||
       ((lVar3 + uVar10 * 4 < uVar8 + (int64_t)pvVar18 * 4 &&
        (uVar8 < lVar3 + (uVar10 + (int64_t)pvVar18) * 4)))) {
      param_1 = (void *)0x0;
    }
    else {
      param_1 = (void *)(uint64_t)(uVar17 & 0xfffffff8);
      uVar9 = ((int64_t)param_1 - 8U >> 3) + 1;
      uVar11 = (uint64_t)((uint)uVar9 & 3);
      if ((int64_t)param_1 - 8U < 0x18) {
        lVar13 = 0;
      }
      else {
        lVar15 = lVar3 + uVar10 * 4;
        lVar12 = -(uVar9 & 0xfffffffffffffffc);
        lVar13 = 0;
        do {
          puVar1 = (void*)(uVar8 + lVar13 * 4);
          uVar7 = puVar1[1];
          puVar2 = (void*)(uVar8 + 0x10 + lVar13 * 4);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (void*)(lVar15 + lVar13 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (void*)(lVar15 + 0x10 + lVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (void*)(uVar8 + 0x20 + lVar13 * 4);
          uVar7 = puVar1[1];
          puVar2 = (void*)(uVar8 + 0x30 + lVar13 * 4);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (void*)(lVar15 + 0x20 + lVar13 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (void*)(lVar15 + 0x30 + lVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (void*)(uVar8 + 0x40 + lVar13 * 4);
          uVar7 = puVar1[1];
          puVar2 = (void*)(uVar8 + 0x50 + lVar13 * 4);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (void*)(lVar15 + 0x40 + lVar13 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (void*)(lVar15 + 0x50 + lVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (void*)(uVar8 + 0x60 + lVar13 * 4);
          uVar7 = puVar1[1];
          puVar2 = (void*)(uVar8 + 0x70 + lVar13 * 4);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (void*)(lVar15 + 0x60 + lVar13 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (void*)(lVar15 + 0x70 + lVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar13 = lVar13 + 0x20;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0);
      }
      lVar15 = 0;
      if (uVar11 != 0) {
        lVar12 = uVar8 + lVar13 * 4;
        lVar13 = lVar3 + (lVar13 + uVar10) * 4;
        lVar15 = uVar11 << 5;
        lVar14 = 0;
        do {
          puVar2 = (void*)(lVar12 + lVar14);
          uVar7 = puVar2[1];
          puVar1 = (void*)(lVar12 + 0x10 + lVar14);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          puVar1 = (void*)(lVar13 + lVar14);
          *puVar1 = *puVar2;
          puVar1[1] = uVar7;
          puVar1 = (void*)(lVar13 + 0x10 + lVar14);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar14 = lVar14 + 0x20;
        } while (lVar15 != lVar14);
      }
      param_3 = (size_t)lVar15;
      uVar10 = uVar10 + (int64_t)param_1;
      if (param_1 == pvVar18) goto LAB_015c7b77;
    }
    uVar9 = ~(uint64_t)param_1;
    uVar11 = (uint64_t)pvVar18 & 3;
    if ((uVar17 & 3) != 0) {
      do {
        lVar15 = (int64_t)param_1 * 4;
        param_1 = (void *)((int64_t)param_1 + 1);
        *(void*)(lVar3 + uVar10 * 4) = *(void*)(uVar8 + lVar15);
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (2 < uVar9 + (int64_t)pvVar18) {
      lVar3 = lVar3 + uVar10 * 4;
      pvVar18 = (void *)((int64_t)pvVar18 - (int64_t)param_1);
      lVar15 = uVar8 + (int64_t)param_1 * 4;
      param_1 = (void *)0x0;
      do {
        *(void*)(lVar3 + (int64_t)param_1 * 4) =
             *(void*)(lVar15 + (int64_t)param_1 * 4);
        *(void*)(lVar3 + 4 + (int64_t)param_1 * 4) =
             *(void*)(lVar15 + 4 + (int64_t)param_1 * 4);
        *(void*)(lVar3 + 8 + (int64_t)param_1 * 4) =
             *(void*)(lVar15 + 8 + (int64_t)param_1 * 4);
        *(void*)(lVar3 + 0xc + (int64_t)param_1 * 4) =
             *(void*)(lVar15 + 0xc + (int64_t)param_1 * 4);
        param_1 = (void *)((int64_t)param_1 + 4);
      } while (pvVar18 != param_1);
      uVar10 = uVar10 + (int64_t)param_1;
    }
  }
LAB_015c7b77:
  if ((int)(uint)uVar10 < iVar6) {
    _memset_pattern16(param_1,(void *)((uint64_t)(iVar6 + ~(uint)uVar10) * 4 + 4),param_3);
  }
  FUN_00e83070();
  return *(int64_t *)(this_ptr + 0x80);
}

