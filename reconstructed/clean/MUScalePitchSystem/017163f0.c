// Function: FUN_017163f0
// Address: 017163f0
// Size: 831 bytes
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


void* FUN_017163f0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  uint32_t uVar7;
  void*puVar8;
  int64_t lVar9;
  int iVar10;
  uint32_t unaff_ESI;
  uint64_t uVar11;
  void*this_ptr;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t extraout_XMM0_Qa;
  int64_t lVar16;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
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
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  int64_t local_50;
  char local_48;
  
  iVar3 = *(int *)(param_2 + 8);
  FUN_00c8e710();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (0 < iVar3) {
    iVar10 = 0;
    do {
      uVar7 = FUN_00e8ce70();
      iVar4 = *(int *)(local_50 + 0x18);
      FUN_00c8e340(extraout_XMM0_Qa,1);
      *(void*)(*(int64_t *)(local_50 + 0x10) + (int64_t)iVar4) = uVar7;
      iVar10 = iVar10 + 1;
    } while (iVar3 != iVar10);
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_025fbbb0;
  *(void*)((int64_t)puVar8 + 0xc) = 0;
  puVar8[3] = 0;
  FUN_00d500e0();
  *(void*)((int64_t)puVar8 + 0xc) = unaff_ESI;
  if (local_50 == 0) {
    FUN_01715d80();
    *this_ptr = puVar8;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    uVar5 = *(uint *)(local_50 + 0x18);
    if (3 < (int)uVar5) {
      lVar6 = *(int64_t *)(local_50 + 0x10);
      uVar13 = puVar8[3];
      if (0xf < uVar5) {
        uVar11 = (uint64_t)(uVar5 >> 2 & 0xfffffffc);
        auVar15._8_8_ = _UNK_023d4b78;
        auVar15._0_8_ = uVar13;
        uVar13 = (uVar11 - 4 >> 2) + 1;
        if (uVar11 - 4 == 0) {
          auVar18._8_4_ = 0xffffffff;
          auVar18._0_8_ = 0xffffffffffffffff;
          auVar18._12_4_ = 0xffffffff;
          lVar9 = 0;
        }
        else {
          lVar12 = -(uVar13 & 0xfffffffffffffffe);
          auVar18._8_4_ = 0xffffffff;
          auVar18._0_8_ = 0xffffffffffffffff;
          auVar18._12_4_ = 0xffffffff;
          lVar9 = 0;
          do {
            uVar1 = *(void*)(lVar6 + lVar9 * 4);
            uVar2 = *(void*)(lVar6 + 8 + lVar9 * 4);
            auVar32._0_4_ = (int)uVar1 << 2;
            auVar32._4_4_ = (int)((uint64_t)uVar1 >> 0x20) << 2;
            auVar32._8_8_ = 0;
            auVar24 = pmovzxdq(auVar32,auVar32);
            auVar34._0_8_ = g_02411a30 << auVar24._0_8_;
            lVar16 = auVar24._8_8_;
            auVar34._8_8_ = _UNK_02411a38 << lVar16;
            auVar29._0_4_ = (int)uVar2 << 2;
            auVar29._4_4_ = (int)((uint64_t)uVar2 >> 0x20) << 2;
            auVar29._8_8_ = 0;
            auVar25._0_8_ = g_02411a30 << lVar16;
            auVar25._8_8_ = _UNK_02411a38 << lVar16;
            auVar30 = pmovzxdq(auVar29,auVar29);
            auVar26 = pblendw(auVar25,auVar34,0xf);
            auVar35._0_8_ = g_02411a30 << auVar30._0_8_;
            lVar16 = auVar30._8_8_;
            auVar35._8_8_ = _UNK_02411a38 << lVar16;
            auVar24._8_4_ = auVar30._8_4_;
            auVar24._0_8_ = lVar16;
            auVar24._12_4_ = auVar30._12_4_;
            auVar31._0_8_ = g_02411a30 << lVar16;
            auVar31._8_8_ = _UNK_02411a38 << auVar24._8_8_;
            auVar32 = pblendw(auVar31,auVar35,0xf);
            uVar1 = *(void*)(lVar6 + 0x10 + lVar9 * 4);
            uVar2 = *(void*)(lVar6 + 0x18 + lVar9 * 4);
            auVar30._0_4_ = (int)uVar1 << 2;
            auVar30._4_4_ = (int)((uint64_t)uVar1 >> 0x20) << 2;
            auVar30._8_8_ = 0;
            auVar24 = pmovzxdq(auVar30,auVar30);
            auVar36._0_8_ = g_02411a30 << auVar24._0_8_;
            lVar16 = auVar24._8_8_;
            auVar36._8_8_ = _UNK_02411a38 << lVar16;
            auVar17._0_4_ = (int)uVar2 << 2;
            auVar17._4_4_ = (int)((uint64_t)uVar2 >> 0x20) << 2;
            auVar17._8_8_ = 0;
            auVar14._0_8_ = g_02411a30 << lVar16;
            auVar14._8_8_ = _UNK_02411a38 << lVar16;
            auVar30 = pmovzxdq(auVar17,auVar17);
            auVar24 = pblendw(auVar14,auVar36,0xf);
            auVar37._0_8_ = g_02411a30 << auVar30._0_8_;
            lVar16 = auVar30._8_8_;
            auVar37._8_8_ = _UNK_02411a38 << lVar16;
            auVar15 = ~auVar24 & ~auVar26 & auVar15;
            auVar27._8_4_ = auVar30._8_4_;
            auVar27._0_8_ = lVar16;
            auVar27._12_4_ = auVar30._12_4_;
            auVar26._0_8_ = g_02411a30 << lVar16;
            auVar26._8_8_ = _UNK_02411a38 << auVar27._8_8_;
            auVar24 = pblendw(auVar26,auVar37,0xf);
            auVar18 = ~auVar24 & ~auVar32 & auVar18;
            lVar9 = lVar9 + 8;
            lVar12 = lVar12 + 2;
          } while (lVar12 != 0);
          if ((uVar13 & 1) == 0) goto LAB_017166b7;
        }
        uVar1 = *(void*)(lVar6 + 8 + lVar9 * 4);
        auVar21._0_4_ = (int)uVar1 << 2;
        auVar21._4_4_ = (int)((uint64_t)uVar1 >> 0x20) << 2;
        auVar21._8_8_ = 0;
        auVar24 = pmovzxdq(auVar21,auVar21);
        auVar33._0_8_ = g_02411a30 << auVar24._0_8_;
        lVar12 = auVar24._8_8_;
        auVar33._8_8_ = _UNK_02411a38 << lVar12;
        auVar22._8_4_ = auVar24._8_4_;
        auVar22._12_4_ = auVar24._12_4_;
        auVar22._0_8_ = lVar12;
        auVar38._0_8_ = g_02411a30 << lVar12;
        auVar38._8_8_ = _UNK_02411a38 << auVar22._8_8_;
        auVar24 = pblendw(auVar38,auVar33,0xf);
        auVar18 = ~auVar24 & auVar18;
        uVar1 = *(void*)(lVar6 + lVar9 * 4);
        auVar19._0_4_ = (int)uVar1 << 2;
        auVar19._4_4_ = (int)((uint64_t)uVar1 >> 0x20) << 2;
        auVar19._8_8_ = 0;
        auVar24 = pmovzxdq(auVar19,auVar19);
        auVar23._0_8_ = g_02411a30 << auVar24._0_8_;
        lVar9 = auVar24._8_8_;
        auVar23._8_8_ = _UNK_02411a38 << lVar9;
        auVar20._8_4_ = auVar24._8_4_;
        auVar20._12_4_ = auVar24._12_4_;
        auVar20._0_8_ = lVar9;
        auVar28._0_8_ = g_02411a30 << lVar9;
        auVar28._8_8_ = _UNK_02411a38 << auVar20._8_8_;
        auVar24 = pblendw(auVar28,auVar23,0xf);
        auVar15 = ~auVar24 & auVar15;
LAB_017166b7:
        uVar13 = SUB168(auVar15 & auVar18,8) & SUB168(auVar15 & auVar18,0);
        goto joined_r0x017166cc;
      }
      uVar11 = 0;
      do {
        uVar13 = uVar13 & ~(0xfL << ((*(byte *)(lVar6 + uVar11 * 4) & 0xf) << 2));
        uVar11 = uVar11 + 1;
joined_r0x017166cc:
      } while (uVar11 != uVar5 >> 2);
      puVar8[3] = uVar13;
    }
    FUN_01715d80();
    *this_ptr = puVar8;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  return this_ptr;
}

