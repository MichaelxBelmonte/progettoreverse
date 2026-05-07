// Function: FUN_014c4220
// Address: 014c4220
// Size: 1724 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t FUN_014c4220(void* param_1)

{
  float fVar1;
  double dVar2;
  int iVar3;
  float fVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int64_t lVar9;
  int64_t lVar10;
  void *pvVar11;
  int64_t lVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t *plVar15;
  int64_t lVar16;
  uint uVar17;
  int64_t arg1;
  uint uVar18;
  int64_t *this_ptr;
  uint uVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  uint8_t auVar24 [16];
  float fVar25;
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  float fVar28;
  float fVar29;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  uint64_t uVar19;
  
  lVar9 = (**(code **)(*this_ptr + 0x380))();
  lVar10 = (**(code **)(*this_ptr + 0x388))();
  lVar10 = lVar10 + lVar9;
  cVar5 = (**(code **)(*this_ptr + 0x3c0))();
  if (cVar5 != '\0') {
    return lVar10;
  }
  FUN_014bc420();
  if (local_40 == 0) {
    cVar5 = '\0';
  }
  else {
    FUN_014bc420();
    pvVar11 = _pthread_getspecific(param_1);
    plVar15 = local_68;
    if ((pvVar11 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      plVar15 = (int64_t *)local_68[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
    cVar6 = (**(code **)(*plVar15 + 0x3c0))();
    cVar5 = '\x01';
    if (cVar6 == '\0') {
      FUN_014bc420();
      pvVar11 = _pthread_getspecific(param_1);
      plVar15 = local_58;
      if ((pvVar11 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        plVar15 = (int64_t *)local_58[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
      cVar5 = (**(code **)(*plVar15 + 0x3c8))();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    return lVar10;
  }
  FUN_014bc0d0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(param_1);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb920();
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00c8e4f0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00c92170();
  FUN_00c92160();
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x378))();
  pvVar11 = _pthread_getspecific(param_1);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar22 = (double)FUN_01327990();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar11 = _pthread_getspecific(param_1);
  lVar9 = local_40;
  if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
    lVar9 = *(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
  }
  dVar2 = *(double *)(lVar9 + 0x50);
  uVar7 = *(uint *)(local_40 + 0x18);
  uVar20 = uVar7 + 3;
  if (-1 < (int)uVar7) {
    uVar20 = uVar7;
  }
  lVar9 = (**(code **)(*this_ptr + 0x380))();
  fVar1 = g_023b4df0;
  fVar25 = g_02390124;
  uVar20 = (int)uVar20 >> 2;
  if (3 < (int)uVar7) {
    lVar12 = *(int64_t *)(local_40 + 0x10);
    fVar23 = g_02394274;
    if ((uVar7 & 0xfffffffc) == 4) {
      fVar21 = 0.0;
      uVar14 = 0;
    }
    else {
      fVar21 = 0.0;
      uVar14 = 0;
      do {
        fVar29 = *(float *)(lVar12 + uVar14 * 4);
        fVar28 = 0.0;
        if ((fVar29 < fVar1) || (fVar28 = fVar25, fVar25 < fVar29)) {
          fVar29 = fVar28;
          *(float *)(lVar12 + uVar14 * 4) = fVar29;
        }
        fVar28 = *(float *)(lVar12 + 4 + uVar14 * 4);
        fVar4 = 0.0;
        if ((fVar28 < fVar1) || (fVar4 = fVar25, fVar25 < fVar28)) {
          fVar28 = fVar4;
          *(float *)(lVar12 + 4 + uVar14 * 4) = fVar28;
        }
        fVar23 = fVar23 + fVar29 + fVar28;
        fVar21 = fVar21 + fVar29 * fVar29 + fVar28 * fVar28;
        uVar14 = uVar14 + 2;
      } while ((uVar20 & 0xfffffffe) != uVar14);
    }
    if ((uVar20 & 1) != 0) {
      fVar25 = *(float *)(lVar12 + uVar14 * 4);
      fVar1 = 0.0;
      if ((fVar25 < g_023b4df0) || (fVar1 = g_02390124, g_02390124 < fVar25)) {
        fVar25 = fVar1;
        *(float *)(lVar12 + uVar14 * 4) = fVar25;
      }
      fVar23 = fVar23 + fVar25;
      fVar21 = fVar21 + fVar25 * fVar25;
    }
    auVar26 = g_023b2d50;
    fVar21 = fVar21 / fVar23;
    if (g_02394274 < fVar21) {
      lVar12 = *(int64_t *)(local_40 + 0x10);
      if (uVar20 < 4) {
        uVar14 = 0;
        fVar25 = g_02390124;
      }
      else {
        uVar14 = (uint64_t)(uVar20 & 0xfffffffc);
        auVar24._4_4_ = fVar21;
        auVar24._0_4_ = fVar21;
        auVar24._8_4_ = fVar21;
        auVar24._12_4_ = fVar21;
        uVar19 = (uVar14 - 4 >> 2) + 1;
        if (uVar14 - 4 == 0) {
          lVar13 = 0;
        }
        else {
          lVar16 = -(uVar19 & 0xfffffffffffffffe);
          lVar13 = 0;
          do {
            auVar27 = divps(*(uint8_t (*) [16])(lVar12 + lVar13 * 4),auVar24);
            auVar27 = minps(auVar26,auVar27);
            *(uint8_t (*) [16])(lVar12 + lVar13 * 4) = auVar27;
            auVar27 = divps(*(uint8_t (*) [16])(lVar12 + 0x10 + lVar13 * 4),auVar24);
            auVar27 = minps(auVar26,auVar27);
            *(uint8_t (*) [16])(lVar12 + 0x10 + lVar13 * 4) = auVar27;
            lVar13 = lVar13 + 8;
            lVar16 = lVar16 + 2;
          } while (lVar16 != 0);
        }
        if ((uVar19 & 1) != 0) {
          auVar26 = divps(*(uint8_t (*) [16])(lVar12 + lVar13 * 4),auVar24);
          auVar26 = minps(g_023b2d50,auVar26);
          *(uint8_t (*) [16])(lVar12 + lVar13 * 4) = auVar26;
        }
        fVar25 = g_02390124;
        if (uVar14 == uVar20) goto LAB_014c476e;
      }
      do {
        fVar23 = *(float *)(lVar12 + uVar14 * 4) / fVar21;
        fVar1 = fVar25;
        if (fVar23 <= fVar25) {
          fVar1 = fVar23;
        }
        *(float *)(lVar12 + uVar14 * 4) = fVar1;
        uVar14 = uVar14 + 1;
      } while (uVar20 != uVar14);
    }
  }
LAB_014c476e:
  uVar7 = FUN_00e7d850(((double)(arg1 - lVar9) / dVar22) * dVar2);
  lVar12 = -1;
  if ((int)(uVar7 + 1) < (int)uVar20) {
    uVar14 = (uint64_t)(int)(uVar7 + 1);
    uVar17 = ~uVar7 + uVar20 & 3;
    fVar25 = g_0239109c;
    if ((uVar20 - uVar7) - 2 < 3) {
      uVar19 = 0xffffffff;
      uVar18 = 0xffffffff;
    }
    else {
      lVar13 = *(int64_t *)(local_40 + 0x10) + uVar14 * 4;
      uVar19 = 0xffffffff;
      lVar16 = 0;
      do {
        fVar1 = *(float *)(lVar13 + lVar16 * 4);
        iVar3 = (int)lVar16;
        uVar8 = uVar7 + 1 + iVar3;
        if (fVar25 <= fVar1) {
          uVar8 = (uint)uVar19;
        }
        fVar23 = *(float *)(lVar13 + 4 + lVar16 * 4);
        if (fVar25 <= fVar1) {
          fVar1 = fVar25;
        }
        uVar18 = uVar7 + 2 + iVar3;
        if (fVar1 <= fVar23) {
          fVar23 = fVar1;
          uVar18 = uVar8;
        }
        fVar1 = *(float *)(lVar13 + 8 + lVar16 * 4);
        uVar8 = uVar7 + 3 + iVar3;
        if (fVar23 <= fVar1) {
          fVar1 = fVar23;
          uVar8 = uVar18;
        }
        fVar25 = *(float *)(lVar13 + 0xc + lVar16 * 4);
        uVar18 = uVar7 + 4 + iVar3;
        if (fVar1 <= fVar25) {
          uVar18 = uVar8;
        }
        uVar19 = (uint64_t)uVar18;
        if (fVar1 <= fVar25) {
          fVar25 = fVar1;
        }
        lVar16 = lVar16 + 4;
      } while ((~uVar7 + uVar20 & 0xfffffffc) != (uint)lVar16);
      uVar14 = uVar14 + lVar16;
    }
    for (; uVar17 != 0; uVar17 = uVar17 - 1) {
      fVar1 = *(float *)(*(int64_t *)(local_40 + 0x10) + uVar14 * 4);
      uVar18 = (uint)uVar19;
      if (fVar1 < fVar25) {
        uVar19 = uVar14 & 0xffffffff;
        uVar18 = (uint)uVar14;
        fVar25 = fVar1;
      }
      uVar14 = uVar14 + 1;
    }
    if (uVar18 != 0xffffffff) {
      lVar13 = FUN_00e7dae0(dVar22 * ((double)(int)uVar18 / dVar2));
      lVar12 = lVar13 + lVar9;
      if (lVar10 < lVar13 + lVar9) {
        lVar12 = lVar10;
      }
    }
  }
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return lVar12;
}

