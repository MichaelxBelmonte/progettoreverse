// Function: FUN_01523ca0
// Address: 01523ca0
// Size: 1976 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void* FUN_01523ca0(void)

{
  size_t sVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint64_t uVar7;
  uint16_t uVar8;
  uint16_t uVar9;
  int iVar10;
  int64_t lVar11;
  uint8_t auVar12 [16];
  uint64_t uVar13;
  uint64_t uVar14;
  int iVar15;
  void*puVar16;
  int64_t lVar17;
  double *pdVar18;
  uint uVar19;
  int64_t lVar20;
  uint64_t uVar21;
  uint uVar22;
  int iVar23;
  int64_t arg1;
  void*this_ptr;
  int iVar24;
  void*puVar25;
  uint uVar26;
  int64_t lVar27;
  double dVar28;
  double dVar29;
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  int64_t local_68;
  char local_60;
  
  lVar11 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  FUN_00c8e710();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  iVar24 = *(int *)(arg1 + 0x18);
  if (1 < iVar24) {
    uVar26 = 1;
    do {
      lVar17 = *(int64_t *)
                (*(int64_t *)
                  (*(int64_t *)(*(int64_t *)(arg1 + 0x10) + 0x10) +
                  (uint64_t)(uVar26 >> 10) * 8) + 0x10);
      lVar20 = (uint64_t)(uVar26 & 0x3ff) * 0x20;
      lVar27 = (int64_t)*(int *)(local_68 + 0x18);
      if ((*(int *)(local_68 + 0x18) + 0x1fU < 0x3f) ||
         (dVar28 = *(double *)(lVar17 + 8 + lVar20),
         pdVar18 = (double *)(lVar27 + -0x18 + *(int64_t *)(local_68 + 0x10)),
         *pdVar18 <= dVar28 && dVar28 != *pdVar18)) {
        FUN_00c8e340(iVar24,1);
        puVar25 = (void*)(lVar17 + lVar20);
        lVar17 = *(int64_t *)(local_68 + 0x10);
        uVar7 = *puVar25;
        uVar13 = puVar25[1];
        uVar14 = puVar25[3];
        puVar16 = (void*)(lVar17 + 0x10 + lVar27);
        *puVar16 = puVar25[2];
        puVar16[1] = uVar14;
        puVar16 = (void*)(lVar17 + lVar27);
        *puVar16 = uVar7;
        puVar16[1] = uVar13;
        iVar24 = *(int *)(arg1 + 0x18);
      }
      uVar26 = uVar26 + 1;
    } while ((int)uVar26 < iVar24);
  }
  iVar24 = *(int *)(local_68 + 0x18);
  iVar15 = iVar24 + 0x1f;
  if (-1 < iVar24) {
    iVar15 = iVar24;
  }
  if (0x63f < iVar24) {
    iVar15 = iVar15 >> 5;
    pdVar18 = (double *)(((int64_t)iVar15 + -0x14) * 0x20 + *(int64_t *)(local_68 + 0x10) + 0x48);
    lVar17 = 0;
    do {
      if (lVar17 == -0x12) goto LAB_01523ecc;
      dVar28 = ((pdVar18[-4] - pdVar18[-8]) / (pdVar18[-5] - pdVar18[-9])) * g_023b4df8;
      auVar31._0_8_ = *pdVar18 - pdVar18[-4];
      auVar31._8_8_ = pdVar18[-8] - pdVar18[-0xc];
      auVar32._0_8_ = pdVar18[-1] - pdVar18[-5];
      auVar32._8_8_ = pdVar18[-9] - pdVar18[-0xd];
      auVar32 = divpd(auVar31,auVar32);
      dVar29 = (auVar32._8_8_ * _UNK_02411888 + auVar32._0_8_ * g_02411880) * g_023942d0;
      lVar17 = lVar17 + -1;
    } while ((dVar29 * g_023942d0 <= dVar28) && (pdVar18 = pdVar18 + 4, dVar28 <= dVar29 + dVar29)
            );
    iVar15 = (int)((int64_t)iVar15 + -0x14) - (int)lVar17;
LAB_01523ecc:
    uVar26 = iVar15 - 2;
    lVar17 = *(int64_t *)(local_68 + 0x10);
    pdVar18 = (double *)(lVar17 + 0x2c8);
    uVar21 = 0x13;
    do {
      if (uVar21 == 0xffffffffffffffff) {
        uVar19 = 0;
        uVar22 = uVar26;
        goto joined_r0x015242d5;
      }
      dVar28 = (pdVar18[-4] - pdVar18[-8]) / (pdVar18[-5] - pdVar18[-9]);
      lVar20 = (uVar21 & 0xffffffff) * 0x20;
      auVar33._0_8_ = *pdVar18 - pdVar18[-4];
      auVar33._8_8_ = pdVar18[-8] - *(double *)(lVar17 + 8 + lVar20);
      auVar30._0_8_ = pdVar18[-1] - pdVar18[-5];
      auVar30._8_8_ = pdVar18[-9] - *(double *)(lVar17 + lVar20);
      auVar32 = divpd(auVar33,auVar30);
      dVar29 = (auVar32._8_8_ + auVar32._0_8_) * g_023942d0;
      uVar21 = uVar21 - 1;
    } while ((dVar29 * g_023942d0 <= dVar28) &&
            (pdVar18 = pdVar18 + -4, dVar28 <= dVar29 + dVar29));
    uVar19 = (int)uVar21 + 3;
    uVar22 = uVar26 - uVar19;
joined_r0x015242d5:
    if (0x31 < (int)uVar22) {
      FUN_00c8e710();
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      dVar28 = (double)FUN_00c92170();
      if ((int)uVar19 <= (int)uVar26) {
        uVar21 = (uint64_t)uVar19;
        iVar24 = *(int *)(local_68 + 0x18);
        dVar29 = g_02395720;
        do {
          while( true ) {
            lVar17 = *(int64_t *)(local_68 + 0x10);
            FUN_00c8e340(dVar28,1);
            lVar20 = *(int64_t *)(local_68 + 0x10);
            pdVar18 = (double *)(lVar17 + uVar21 * 0x20);
            dVar28 = *pdVar18;
            dVar3 = pdVar18[1];
            puVar16 = (void*)(lVar17 + 0x10 + uVar21 * 0x20);
            uVar7 = puVar16[1];
            puVar25 = (void*)(lVar20 + 0x10 + (int64_t)iVar24);
            *puVar25 = *puVar16;
            puVar25[1] = uVar7;
            pdVar18 = (double *)(lVar20 + iVar24);
            *pdVar18 = dVar28;
            pdVar18[1] = dVar3;
            lVar17 = *(int64_t *)(local_68 + 0x10);
            iVar24 = *(int *)(local_68 + 0x18);
            lVar20 = (int64_t)iVar24;
            if (uVar21 == uVar26) break;
LAB_01524380:
            uVar21 = uVar21 + 1;
            pdVar18 = (double *)(*(int64_t *)(local_68 + 0x10) + uVar21 * 0x20);
            pdVar2 = (double *)(lVar17 + -0x20 + lVar20);
            dVar28 = *pdVar18 - *pdVar2;
            dVar29 = ((pdVar18[1] - pdVar2[1]) * g_023b4df8) / dVar28;
            *(double *)(lVar17 + -0x10 + lVar20) = dVar29;
            if (uVar21 == iVar15 - 1) goto LAB_01523fd1;
          }
          iVar10 = *(int *)(local_68 + 0x18);
          iVar23 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar23 = iVar10;
          }
          if ((int64_t)(uint64_t)uVar26 < (int64_t)((iVar23 >> 5) + -1)) goto LAB_01524380;
          uVar21 = uVar21 + 1;
          *(double *)(lVar17 + -0x10 + lVar20) = dVar29;
        } while (uVar21 != iVar15 - 1);
      }
LAB_01523fd1:
      puVar16 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar16 = &g_025683c0;
      (*g_025683d8)();
      FUN_00c92170();
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(double *)(*(int64_t *)(local_68 + 0x10) + 0x88) * g_0241c3f0;
      auVar32 = roundsd(ZEXT816(0),auVar12,10);
      dVar29 = auVar32._0_8_ * g_0240e9b8;
      uVar21 = (uint64_t)*(int *)(local_68 + 0x18);
      dVar28 = *(double *)((uVar21 - 0x18) + *(int64_t *)(local_68 + 0x10));
      if (dVar29 < dVar28) {
        uVar26 = 4;
        do {
          iVar24 = (int)uVar21;
          iVar15 = iVar24 + 0x1f;
          if (-1 < iVar24) {
            iVar15 = iVar24;
          }
          lVar27 = (int64_t)((iVar15 >> 5) + -1);
          lVar17 = (int64_t)(int)uVar26 + 5;
          lVar20 = lVar17;
          if (lVar17 < lVar27) {
            lVar20 = lVar27;
          }
          sVar1 = (size_t)lVar20;
          uVar19 = sVar1 - 5;
          lVar20 = (int64_t)(int)uVar26 * 0x20 + 0x28;
          uVar26 = uVar26 - 1;
          do {
            uVar22 = uVar26;
            uVar26 = uVar19;
            if (lVar27 <= lVar17) goto joined_r0x015240c6;
            uVar26 = uVar22 + 1;
            lVar17 = lVar17 + 1;
            pdVar18 = (double *)(*(int64_t *)(local_68 + 0x10) + lVar20);
            lVar20 = lVar20 + 0x20;
          } while (*pdVar18 <= dVar29);
          sVar1 = uVar22 + 6;
joined_r0x015240c6:
          if (iVar15 >> 5 <= (int)sVar1) break;
          lVar17 = *(int64_t *)(local_68 + 0x10);
          lVar20 = (int64_t)(int)uVar26 * 0x20;
          lVar27 = ((int64_t)(int)uVar26 + 1) * 0x20;
          dVar3 = *(double *)(lVar17 + -0x40 + lVar20);
          dVar4 = *(double *)(lVar17 + -0x38 + lVar20);
          dVar5 = *(double *)(lVar17 + 0x68 + lVar20);
          dVar6 = *(double *)(lVar17 + 0x60 + lVar20);
          _qsort(FUN_00e8b5f0,8,sVar1,(int *)(uint64_t)uVar19);
          lVar17 = *(int64_t *)(local_68 + 0x10);
          uVar7 = *(void*)(lVar17 + 0x10 + lVar27);
          uVar8 = *(void*)(lVar17 + 0x18 + lVar27);
          uVar9 = *(void*)(lVar17 + 0x1a + lVar27);
          lVar20 = (int64_t)*(int *)(puVar16 + 3);
          FUN_00c8e340(uVar7,1);
          lVar17 = puVar16[2];
          *(double *)(lVar17 + lVar20) =
               (dVar6 - dVar3) * ((dVar29 - dVar4) / (dVar5 - dVar4)) + dVar3;
          *(double *)(lVar17 + 8 + lVar20) = dVar29;
          *(void*)(lVar17 + 0x10 + lVar20) = uVar7;
          *(void*)(lVar17 + 0x18 + lVar20) = uVar8;
          *(void*)(lVar17 + 0x1a + lVar20) = uVar9;
          dVar29 = dVar29 + g_0240e9b8;
          if (dVar28 <= dVar29) break;
          uVar21 = (uint64_t)*(uint *)(local_68 + 0x18);
        } while( true );
      }
      FUN_01524590();
      *this_ptr = puVar16;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      goto LAB_0152432a;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_0152432a:
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar11) {
                        ___stack_chk_fail();
  }
  return this_ptr;
}

