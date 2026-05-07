// Function: FUN_017185b0
// Address: 017185b0
// Size: 910 bytes
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


void FUN_017185b0(void)

{
  uint64_t uVar1;
  int iVar2;
  uint uVar3;
  int64_t lVar4;
  void*puVar5;
  void*puVar6;
  int64_t lVar7;
  uint32_t unaff_ESI;
  uint64_t uVar8;
  void*this_ptr;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar14;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  uVar11 = FUN_00c92160();
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(void*)(puVar5[2] + (int64_t)iVar2) = 0;
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(void*)(puVar5[2] + (int64_t)iVar2) = 2;
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(void*)(puVar5[2] + (int64_t)iVar2) = 3;
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(void*)(puVar5[2] + (int64_t)iVar2) = 5;
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(void*)(puVar5[2] + (int64_t)iVar2) = 7;
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(void*)(puVar5[2] + (int64_t)iVar2) = 8;
  iVar2 = *(int *)(puVar5 + 3);
  FUN_00c8e340(uVar11,1);
  *(void*)(puVar5[2] + (int64_t)iVar2) = 10;
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_025fbbb0;
  *(void*)((int64_t)puVar6 + 0xc) = 0;
  puVar6[3] = 0;
  FUN_00d500e0();
  *(void*)((int64_t)puVar6 + 0xc) = unaff_ESI;
  uVar3 = *(uint *)(puVar5 + 3);
  if ((int)uVar3 < 4) {
LAB_01718902:
    FUN_01715d80();
    *this_ptr = puVar6;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    return;
  }
  lVar4 = puVar5[2];
  uVar10 = puVar6[3];
  if (uVar3 < 0x10) {
    uVar8 = 0;
    do {
      uVar10 = uVar10 & ~(0xfL << ((*(byte *)(lVar4 + uVar8 * 4) & 0xf) << 2));
      uVar8 = uVar8 + 1;
joined_r0x017188dd:
    } while (uVar8 != uVar3 >> 2);
    puVar6[3] = uVar10;
    goto LAB_01718902;
  }
  uVar8 = (uint64_t)(uVar3 >> 2 & 0xfffffffc);
  auVar13._8_8_ = _UNK_023d4b78;
  auVar13._0_8_ = uVar10;
  uVar10 = (uVar8 - 4 >> 2) + 1;
  if (uVar8 - 4 == 0) {
    auVar16._8_4_ = 0xffffffff;
    auVar16._0_8_ = 0xffffffffffffffff;
    auVar16._12_4_ = 0xffffffff;
    lVar7 = 0;
  }
  else {
    lVar9 = -(uVar10 & 0xfffffffffffffffe);
    auVar16._8_4_ = 0xffffffff;
    auVar16._0_8_ = 0xffffffffffffffff;
    auVar16._12_4_ = 0xffffffff;
    lVar7 = 0;
    do {
      uVar11 = *(void*)(lVar4 + lVar7 * 4);
      uVar1 = *(void*)(lVar4 + 8 + lVar7 * 4);
      auVar30._0_4_ = (int)uVar11 << 2;
      auVar30._4_4_ = (int)((uint64_t)uVar11 >> 0x20) << 2;
      auVar30._8_8_ = 0;
      auVar22 = pmovzxdq(auVar30,auVar30);
      auVar32._0_8_ = g_02411a30 << auVar22._0_8_;
      lVar14 = auVar22._8_8_;
      auVar32._8_8_ = _UNK_02411a38 << lVar14;
      auVar27._0_4_ = (int)uVar1 << 2;
      auVar27._4_4_ = (int)((uint64_t)uVar1 >> 0x20) << 2;
      auVar27._8_8_ = 0;
      auVar23._0_8_ = g_02411a30 << lVar14;
      auVar23._8_8_ = _UNK_02411a38 << lVar14;
      auVar28 = pmovzxdq(auVar27,auVar27);
      auVar24 = pblendw(auVar23,auVar32,0xf);
      auVar33._0_8_ = g_02411a30 << auVar28._0_8_;
      lVar14 = auVar28._8_8_;
      auVar33._8_8_ = _UNK_02411a38 << lVar14;
      auVar22._8_4_ = auVar28._8_4_;
      auVar22._0_8_ = lVar14;
      auVar22._12_4_ = auVar28._12_4_;
      auVar29._0_8_ = g_02411a30 << lVar14;
      auVar29._8_8_ = _UNK_02411a38 << auVar22._8_8_;
      auVar30 = pblendw(auVar29,auVar33,0xf);
      uVar11 = *(void*)(lVar4 + 0x10 + lVar7 * 4);
      uVar1 = *(void*)(lVar4 + 0x18 + lVar7 * 4);
      auVar28._0_4_ = (int)uVar11 << 2;
      auVar28._4_4_ = (int)((uint64_t)uVar11 >> 0x20) << 2;
      auVar28._8_8_ = 0;
      auVar22 = pmovzxdq(auVar28,auVar28);
      auVar34._0_8_ = g_02411a30 << auVar22._0_8_;
      lVar14 = auVar22._8_8_;
      auVar34._8_8_ = _UNK_02411a38 << lVar14;
      auVar15._0_4_ = (int)uVar1 << 2;
      auVar15._4_4_ = (int)((uint64_t)uVar1 >> 0x20) << 2;
      auVar15._8_8_ = 0;
      auVar12._0_8_ = g_02411a30 << lVar14;
      auVar12._8_8_ = _UNK_02411a38 << lVar14;
      auVar28 = pmovzxdq(auVar15,auVar15);
      auVar22 = pblendw(auVar12,auVar34,0xf);
      auVar35._0_8_ = g_02411a30 << auVar28._0_8_;
      lVar14 = auVar28._8_8_;
      auVar35._8_8_ = _UNK_02411a38 << lVar14;
      auVar13 = ~auVar22 & ~auVar24 & auVar13;
      auVar25._8_4_ = auVar28._8_4_;
      auVar25._0_8_ = lVar14;
      auVar25._12_4_ = auVar28._12_4_;
      auVar24._0_8_ = g_02411a30 << lVar14;
      auVar24._8_8_ = _UNK_02411a38 << auVar25._8_8_;
      auVar22 = pblendw(auVar24,auVar35,0xf);
      auVar16 = ~auVar22 & ~auVar30 & auVar16;
      lVar7 = lVar7 + 8;
      lVar9 = lVar9 + 2;
    } while (lVar9 != 0);
    if ((uVar10 & 1) == 0) goto LAB_017188c8;
  }
  uVar11 = *(void*)(lVar4 + 8 + lVar7 * 4);
  auVar19._0_4_ = (int)uVar11 << 2;
  auVar19._4_4_ = (int)((uint64_t)uVar11 >> 0x20) << 2;
  auVar19._8_8_ = 0;
  auVar22 = pmovzxdq(auVar19,auVar19);
  auVar31._0_8_ = g_02411a30 << auVar22._0_8_;
  lVar9 = auVar22._8_8_;
  auVar31._8_8_ = _UNK_02411a38 << lVar9;
  auVar20._8_4_ = auVar22._8_4_;
  auVar20._12_4_ = auVar22._12_4_;
  auVar20._0_8_ = lVar9;
  auVar36._0_8_ = g_02411a30 << lVar9;
  auVar36._8_8_ = _UNK_02411a38 << auVar20._8_8_;
  auVar22 = pblendw(auVar36,auVar31,0xf);
  auVar16 = ~auVar22 & auVar16;
  uVar11 = *(void*)(lVar4 + lVar7 * 4);
  auVar17._0_4_ = (int)uVar11 << 2;
  auVar17._4_4_ = (int)((uint64_t)uVar11 >> 0x20) << 2;
  auVar17._8_8_ = 0;
  auVar22 = pmovzxdq(auVar17,auVar17);
  auVar21._0_8_ = g_02411a30 << auVar22._0_8_;
  lVar7 = auVar22._8_8_;
  auVar21._8_8_ = _UNK_02411a38 << lVar7;
  auVar18._8_4_ = auVar22._8_4_;
  auVar18._12_4_ = auVar22._12_4_;
  auVar18._0_8_ = lVar7;
  auVar26._0_8_ = g_02411a30 << lVar7;
  auVar26._8_8_ = _UNK_02411a38 << auVar18._8_8_;
  auVar22 = pblendw(auVar26,auVar21,0xf);
  auVar13 = ~auVar22 & auVar13;
LAB_017188c8:
  uVar10 = SUB168(auVar13 & auVar16,8) & SUB168(auVar13 & auVar16,0);
  goto joined_r0x017188dd;
}

