// Function: FUN_015c73a0
// Address: 015c73a0
// Size: 683 bytes
// Class: MUSpectralTimeSlice
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


void FUN_015c73a0(void)

{
  float *pfVar1;
  void*puVar2;
  double dVar3;
  uint uVar4;
  int64_t lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  int64_t arg1;
  int64_t lVar20;
  int64_t *this_ptr;
  int64_t lVar21;
  int64_t lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int64_t local_30;
  char local_28;
  
  lVar22 = *(int64_t *)(arg1 + 0x70);
  if (lVar22 != 0) goto LAB_015c760e;
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar22 = *(int64_t *)(arg1 + 0x70);
  if (lVar22 == local_30) {
    if (local_30 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(arg1 + 0x70) = local_30;
    if (lVar22 != 0) {
      FUN_00d50b20();
    }
  }
  iVar17 = _UNK_023de2dc;
  iVar16 = _UNK_023de2d8;
  iVar15 = _UNK_023de2d4;
  iVar14 = g_023de2d0;
  iVar13 = _UNK_023de2cc;
  iVar12 = _UNK_023de2c8;
  iVar11 = _UNK_023de2c4;
  iVar10 = g_023de2c0;
  iVar9 = _UNK_023de2bc;
  iVar8 = _UNK_023de2b8;
  iVar7 = _UNK_023de2b4;
  iVar6 = g_023de2b0;
  iVar26 = _UNK_0239418c;
  iVar25 = _UNK_02394188;
  iVar24 = _UNK_02394184;
  iVar23 = g_02394180;
  uVar4 = *(uint *)(arg1 + 0x24);
  if ((int)uVar4 < 1) {
    lVar22 = *(int64_t *)(arg1 + 0x70);
    goto LAB_015c760e;
  }
  dVar3 = *(double *)(arg1 + 0x50);
  lVar22 = *(int64_t *)(arg1 + 0x70);
  lVar5 = *(int64_t *)(lVar22 + 0x10);
  if (uVar4 < 8) {
    uVar18 = 0;
  }
  else {
    uVar18 = (uint64_t)(uVar4 & 0xfffffff8);
    uVar19 = (uVar18 - 8 >> 3) + 1;
    iVar27 = g_0238fcc0;
    iVar28 = _UNK_0238fcc4;
    iVar29 = _UNK_0238fcc8;
    iVar30 = _UNK_0238fccc;
    if (uVar18 - 8 == 0) {
      lVar20 = 0;
LAB_015c758e:
      iVar23 = g_02394180 + iVar27;
      iVar24 = _UNK_02394184 + iVar28;
      iVar25 = _UNK_02394188 + iVar29;
      iVar26 = _UNK_0239418c + iVar30;
      pfVar1 = (float *)(lVar5 + lVar20 * 4);
      *pfVar1 = (float)((double)iVar27 * dVar3);
      pfVar1[1] = (float)((double)iVar28 * dVar3);
      pfVar1[2] = (float)((double)iVar29 * dVar3);
      pfVar1[3] = (float)((double)iVar30 * dVar3);
      pfVar1 = (float *)(lVar5 + 0x10 + lVar20 * 4);
      *pfVar1 = (float)((double)iVar23 * dVar3);
      pfVar1[1] = (float)((double)iVar24 * dVar3);
      pfVar1[2] = (float)((double)iVar25 * dVar3);
      pfVar1[3] = (float)((double)iVar26 * dVar3);
    }
    else {
      lVar21 = -(uVar19 & 0xfffffffffffffffe);
      lVar20 = 0;
      do {
        pfVar1 = (float *)(lVar5 + lVar20 * 4);
        *pfVar1 = (float)((double)iVar27 * dVar3);
        pfVar1[1] = (float)((double)iVar28 * dVar3);
        pfVar1[2] = (float)((double)iVar29 * dVar3);
        pfVar1[3] = (float)((double)iVar30 * dVar3);
        pfVar1 = (float *)(lVar5 + 0x10 + lVar20 * 4);
        *pfVar1 = (float)((double)(iVar27 + iVar23) * dVar3);
        pfVar1[1] = (float)((double)(iVar28 + iVar24) * dVar3);
        pfVar1[2] = (float)((double)(iVar29 + iVar25) * dVar3);
        pfVar1[3] = (float)((double)(iVar30 + iVar26) * dVar3);
        pfVar1 = (float *)(lVar5 + 0x20 + lVar20 * 4);
        *pfVar1 = (float)((double)(iVar27 + iVar6) * dVar3);
        pfVar1[1] = (float)((double)(iVar28 + iVar7) * dVar3);
        pfVar1[2] = (float)((double)(iVar29 + iVar8) * dVar3);
        pfVar1[3] = (float)((double)(iVar30 + iVar9) * dVar3);
        puVar2 = (void*)(lVar5 + 0x30 + lVar20 * 4);
        *puVar2 = CONCAT44((float)((double)(iVar28 + iVar11) * dVar3),
                           (float)((double)(iVar27 + iVar10) * dVar3));
        puVar2[1] = CONCAT44((float)((double)(iVar30 + iVar13) * dVar3),
                             (float)((double)(iVar29 + iVar12) * dVar3));
        lVar20 = lVar20 + 0x10;
        iVar27 = iVar27 + iVar14;
        iVar28 = iVar28 + iVar15;
        iVar29 = iVar29 + iVar16;
        iVar30 = iVar30 + iVar17;
        lVar21 = lVar21 + 2;
      } while (lVar21 != 0);
      if ((uVar19 & 1) != 0) goto LAB_015c758e;
    }
    if (uVar18 == uVar4) goto LAB_015c760e;
  }
  do {
    *(float *)(lVar5 + uVar18 * 4) = (float)((double)(int)uVar18 * dVar3);
    uVar18 = uVar18 + 1;
  } while (uVar4 != uVar18);
LAB_015c760e:
  *(void*)(this_ptr + 1) = 0;
  if (lVar22 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar22;
  *(void*)(this_ptr + 1) = 1;
  return;
}

