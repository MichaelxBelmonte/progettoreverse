// Function: FUN_014cdc80
// Address: 014cdc80
// Size: 1626 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


byte FUN_014cdc80(void* param_1)

{
  float *pfVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  void* pVar11;
  int iVar12;
  uint uVar13;
  uint64_t uVar14;
  int iVar15;
  int iVar16;
  int64_t *arg1;
  int iVar17;
  int64_t *this_ptr;
  int64_t *plVar18;
  bool bVar19;
  byte bVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint32_t uVar28;
  int64_t local_90;
  char local_88;
  int64_t *local_40;
  char local_38;
  
  if (*arg1 == 0) {
    return 0;
  }
  cVar3 = FUN_014bc070();
  if (cVar3 != '\0') {
    return 0;
  }
  if (*(int *)(this_ptr[0x21] + 0xc) == 0) {
    return 0;
  }
  FUN_014bc000();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_014cddb8;
    }
  }
  else if (local_40 != (int64_t *)0x0) goto LAB_014cddb8;
  (**(code **)(*this_ptr + 0x378))();
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  if (local_40 != (int64_t *)0x0) {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_38 = '\0';
    }
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
LAB_014cddb8:
  if (local_40 == (int64_t *)0x0) {
    return 0;
  }
  pvVar7 = _pthread_getspecific(param_1);
  plVar18 = local_40;
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    plVar18 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  dVar24 = (double)(**(code **)(*plVar18 + 0x370))();
  lVar8 = (**(code **)(*this_ptr + 0x380))();
  iVar4 = (**(code **)(*this_ptr + 0x3a0))();
  lVar9 = FUN_014bb590();
  fVar22 = (float)(**(code **)(*this_ptr + 0x3e0))();
  fVar25 = (float)dVar24;
  fVar22 = (float)_exp2f(fVar22 * g_023941f4);
  iVar5 = FUN_00e7d780((fVar25 / (fVar22 * g_023941f8)) * g_023b169c);
  iVar21 = iVar4 - (int)lVar8;
  if (lVar9 < (iVar5 + iVar21) + lVar8) {
    bVar20 = 0;
  }
  else {
    lVar9 = lVar8;
    FUN_00c8e690();
    pVar11 = (void*)lVar9;
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    lVar9 = local_40[2];
    pvVar7 = _pthread_getspecific(pVar11);
    plVar18 = local_40;
    if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar18 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar18 + 0x388))(0,g_0238fee8,1,lVar8);
    fVar22 = (float)(**(code **)(*this_ptr + 0x3e0))();
    fVar22 = (float)_exp2f(fVar22 * g_023941f4);
    fVar22 = fVar25 / (fVar22 * g_023941f8);
    iVar6 = FUN_00e7d780(g_0239011c * fVar22);
    uVar14 = (uint64_t)(uint)(iVar21 - iVar6);
    if (iVar21 - iVar6 < 0) {
      uVar14 = 0;
    }
    iVar6 = FUN_00e7d780(fVar22);
    iVar16 = iVar6 + (int)uVar14;
    if (iVar16 < iVar5 + iVar21) {
      iVar12 = iVar21;
      if (0 < iVar6) {
        iVar17 = 100000;
        iVar6 = iVar21;
        do {
          fVar22 = *(float *)(lVar9 + uVar14 * 4);
          if (((fVar22 <= 0.0) && (0.0 < *(float *)(lVar9 + 4 + uVar14 * 4))) ||
             ((0.0 <= fVar22 &&
              (pfVar1 = (float *)(lVar9 + 4 + uVar14 * 4), *pfVar1 <= 0.0 && *pfVar1 != 0.0)))) {
            iVar2 = (int)uVar14;
            iVar12 = ((int)lVar8 - iVar4) + iVar2;
            iVar15 = -iVar12;
            if (0 < iVar12) {
              iVar15 = iVar12;
            }
            iVar12 = iVar6;
            if (iVar15 < iVar17) {
              iVar12 = iVar2;
              iVar6 = iVar2;
              iVar17 = iVar15;
            }
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < iVar16);
      }
      iVar4 = *(int *)(*arg1 + 0x18);
      iVar6 = iVar4 + 3;
      if (-1 < iVar4) {
        iVar6 = iVar4;
      }
      uVar13 = iVar6 >> 2;
      if (iVar4 < 4) {
        bVar19 = false;
      }
      else {
        fVar22 = (float)iVar12;
        bVar19 = true;
        uVar14 = 0;
        do {
          iVar4 = FUN_00e7d780();
          if (iVar5 + iVar21 + -1 <= iVar4) goto LAB_014ce2b7;
          fVar23 = (float)FUN_014c3a00();
          fVar23 = (float)_exp2f(fVar23 * g_023941f4);
          fVar26 = fVar25 / (fVar23 * g_023941f8);
          fVar23 = (fVar22 - (float)iVar4) * *(float *)(lVar9 + 4 + (int64_t)iVar4 * 4) +
                   (g_02390124 - (fVar22 - (float)iVar4)) *
                   *(float *)(lVar9 + (int64_t)iVar4 * 4);
          if ((int64_t)(int)(uVar13 - 0x300) < (int64_t)uVar14) {
            fVar27 = fVar26;
            uVar28 = 0;
            if ((int64_t)(int)(uVar13 - 0x100) < (int64_t)uVar14) {
              fVar27 = (float)((uint)fVar26 ^ g_023945e0);
              uVar28 = _UNK_023945e4;
            }
            iVar6 = FUN_00e7d780(CONCAT44(uVar28,fVar27 + fVar22));
            fVar27 = (fVar27 + fVar22) - (float)iVar6;
            iVar16 = (0x100 - uVar13) + (int)uVar14;
            iVar4 = -iVar16;
            if (0 < iVar16) {
              iVar4 = iVar16;
            }
            fVar23 = (float)iVar4 * g_02411288 *
                     (fVar27 * *(float *)(lVar9 + 4 + (int64_t)iVar6 * 4) +
                     (g_02390124 - fVar27) * *(float *)(lVar9 + (int64_t)iVar6 * 4)) +
                     (g_02390124 - (float)iVar4 * g_02411288) * fVar23;
          }
          fVar27 = g_02411288;
          *(float *)(*(int64_t *)(*arg1 + 0x10) + uVar14 * 4) = fVar23;
          fVar22 = fVar22 + fVar26 * fVar27;
          uVar14 = uVar14 + 1;
          bVar19 = (int64_t)uVar14 < (int64_t)(int)uVar13;
        } while (uVar13 != uVar14);
      }
      fVar22 = (float)(**(code **)(g_02786500 + 0x10))();
      if (g_02394274 <= fVar22) {
        (**(code **)(g_02786500 + 0x20))(g_02390124 / fVar22);
      }
LAB_014ce2b7:
      bVar20 = bVar19 ^ 1;
    }
    else {
      bVar20 = 0;
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return bVar20;
}

