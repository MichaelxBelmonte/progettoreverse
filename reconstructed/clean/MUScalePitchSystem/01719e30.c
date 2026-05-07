// Function: FUN_01719e30
// Address: 01719e30
// Size: 982 bytes
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


int FUN_01719e30(uint64_t param_1,int param_2)

{
  uint64_t uVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int unaff_ESI;
  int64_t this_ptr;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint32_t uVar21;
  int iVar22;
  uint32_t uVar28;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  int iVar38;
  int iVar43;
  int iVar44;
  uint8_t auVar39 [16];
  int iVar45;
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint8_t auVar46 [16];
  uint8_t auVar47 [16];
  uint8_t auVar48 [16];
  uint8_t auVar49 [16];
  uint8_t auVar50 [16];
  uint8_t auVar51 [16];
  uint8_t auVar52 [16];
  uint8_t auVar53 [16];
  uint8_t auVar54 [16];
  uint8_t auVar55 [16];
  uint8_t auVar56 [16];
  uint8_t auVar57 [16];
  uint8_t unaff_XMM8 [16];
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int64_t lVar66;
  int64_t lVar67;
  
  if (unaff_ESI == param_2) {
    return 0;
  }
  iVar13 = param_2;
  iVar14 = unaff_ESI;
  if (param_2 < unaff_ESI) {
    iVar13 = unaff_ESI;
    iVar14 = param_2;
  }
  iVar10 = *(int *)(this_ptr + 0xc) * 7;
  uVar16 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
  uVar9 = (int)uVar16 >> 0x1f & 0xfffffff4;
  uVar1 = *(uint64_t *)(this_ptr + 0x18);
  iVar10 = (iVar14 - uVar16) + uVar9;
  iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
  if ((~(uint)(uVar1 >> ((((byte)(iVar10 >> 0x1f) & 0xc) + (char)iVar10) * '\x04' & 0x3f)) & 0xf) ==
      0) {
    do {
      iVar10 = ~uVar16 + uVar9 + iVar14;
      iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
      iVar13 = iVar13 + -1;
      iVar14 = iVar14 + -1;
    } while ((~(uint)(uVar1 >> ((((byte)(iVar10 >> 0x1f) & 0xc) + (char)iVar10) * '\x04' & 0x3f)) &
             0xf) == 0);
  }
  iVar10 = 0;
  uVar11 = iVar13 - iVar14;
  if (uVar11 != 0 && iVar14 <= iVar13) {
    iVar10 = 0;
    iVar15 = iVar14;
    if (7 < uVar11) {
      iVar10 = uVar9 - uVar16;
      uVar17 = uVar11 & 0xfffffff8;
      iVar15 = iVar14 + uVar17;
      iVar18 = iVar14 + g_0238fcc0;
      iVar19 = iVar14 + _UNK_0238fcc4;
      iVar20 = iVar14 + _UNK_0238fcc8;
      iVar14 = iVar14 + _UNK_0238fccc;
      uVar21 = (uint32_t)uVar1;
      uVar28 = (uint32_t)(uVar1 >> 0x20);
      iVar22 = iVar10 + 4;
      iVar58 = 0;
      iVar59 = 0;
      iVar60 = 0;
      iVar61 = 0;
      iVar62 = 0;
      iVar63 = 0;
      iVar64 = 0;
      iVar65 = 0;
      uVar12 = uVar17;
      do {
        auVar39._0_4_ = iVar10 + iVar18;
        auVar39._4_4_ = iVar10 + iVar19;
        auVar39._8_4_ = iVar10 + iVar20;
        auVar39._12_4_ = iVar10 + iVar14;
        auVar23._0_4_ = iVar22 + iVar18;
        auVar23._4_4_ = iVar22 + iVar19;
        auVar23._8_4_ = iVar22 + iVar20;
        auVar23._12_4_ = iVar22 + iVar14;
        auVar30._4_4_ = auVar39._4_4_;
        auVar30._0_4_ = auVar39._4_4_;
        auVar30._8_4_ = auVar39._12_4_;
        auVar30._12_4_ = auVar39._12_4_;
        auVar31 = pmuldq(auVar30,g_02411a40);
        auVar46 = pmuldq(auVar39,g_02411a40);
        auVar47._4_4_ = auVar46._4_4_;
        auVar47._12_4_ = auVar46._12_4_;
        auVar47._0_4_ = auVar47._4_4_;
        auVar47._8_4_ = auVar47._12_4_;
        auVar31 = pblendw(auVar47,auVar31,0xcc);
        auVar48._0_4_ = (auVar31._0_4_ >> 1) - (auVar31._0_4_ >> 0x1f);
        auVar48._4_4_ = (auVar31._4_4_ >> 1) - (auVar31._4_4_ >> 0x1f);
        auVar48._8_4_ = (auVar31._8_4_ >> 1) - (auVar31._8_4_ >> 0x1f);
        auVar48._12_4_ = (auVar31._12_4_ >> 1) - (auVar31._12_4_ >> 0x1f);
        auVar31 = pmulld(auVar48,g_023de2c0);
        iVar38 = auVar39._0_4_ - auVar31._0_4_;
        iVar43 = auVar39._4_4_ - auVar31._4_4_;
        iVar44 = auVar39._8_4_ - auVar31._8_4_;
        iVar45 = auVar39._12_4_ - auVar31._12_4_;
        auVar32._4_4_ = auVar23._4_4_;
        auVar32._0_4_ = auVar23._4_4_;
        auVar32._8_4_ = auVar23._12_4_;
        auVar32._12_4_ = auVar23._12_4_;
        auVar31 = pmuldq(auVar32,g_02411a40);
        auVar46 = pmuldq(auVar23,g_02411a40);
        auVar49._4_4_ = auVar46._4_4_;
        auVar49._12_4_ = auVar46._12_4_;
        auVar49._0_4_ = auVar49._4_4_;
        auVar49._8_4_ = auVar49._12_4_;
        auVar31 = pblendw(auVar49,auVar31,0xcc);
        auVar50._0_4_ = (auVar31._0_4_ >> 1) - (auVar31._0_4_ >> 0x1f);
        auVar50._4_4_ = (auVar31._4_4_ >> 1) - (auVar31._4_4_ >> 0x1f);
        auVar50._8_4_ = (auVar31._8_4_ >> 1) - (auVar31._8_4_ >> 0x1f);
        auVar50._12_4_ = (auVar31._12_4_ >> 1) - (auVar31._12_4_ >> 0x1f);
        auVar31 = pmulld(auVar50,g_023de2c0);
        auVar24._0_4_ = auVar23._0_4_ - auVar31._0_4_;
        auVar24._4_4_ = auVar23._4_4_ - auVar31._4_4_;
        auVar24._8_4_ = auVar23._8_4_ - auVar31._8_4_;
        auVar24._12_4_ = auVar23._12_4_ - auVar31._12_4_;
        auVar33._0_4_ = iVar38 >> 0x1f;
        auVar33._4_4_ = iVar43 >> 0x1f;
        auVar33._8_4_ = iVar44 >> 0x1f;
        auVar33._12_4_ = iVar45 >> 0x1f;
        auVar33 = auVar33 & g_023de2c0;
        auVar51._0_4_ = auVar24._0_4_ >> 0x1f;
        auVar51._4_4_ = auVar24._4_4_ >> 0x1f;
        auVar51._8_4_ = auVar24._8_4_ >> 0x1f;
        auVar51._12_4_ = auVar24._12_4_ >> 0x1f;
        auVar51 = auVar51 & g_023de2c0;
        auVar34._0_4_ = (auVar33._0_4_ + iVar38) * 4;
        auVar34._4_4_ = (auVar33._4_4_ + iVar43) * 4;
        auVar34._8_4_ = (auVar33._8_4_ + iVar44) * 4;
        auVar34._12_4_ = (auVar33._12_4_ + iVar45) * 4;
        auVar52._0_4_ = (auVar51._0_4_ + auVar24._0_4_) * 4;
        auVar52._4_4_ = (auVar51._4_4_ + auVar24._4_4_) * 4;
        auVar52._8_4_ = (auVar51._8_4_ + auVar24._8_4_) * 4;
        auVar52._12_4_ = (auVar51._12_4_ + auVar24._12_4_) * 4;
        auVar25 = pmovzxdq(auVar24,auVar34);
        unaff_XMM8 = pmovzxdq(unaff_XMM8,auVar52);
        auVar31._8_4_ = uVar21;
        auVar31._0_8_ = uVar1;
        auVar31._12_4_ = uVar28;
        auVar56._0_8_ = uVar1 >> (uint64_t)auVar34._12_4_;
        auVar56._8_8_ = auVar31._8_8_ >> (uint64_t)auVar34._12_4_;
        auVar46._8_4_ = uVar21;
        auVar46._0_8_ = uVar1;
        auVar46._12_4_ = uVar28;
        auVar40._0_8_ = uVar1 >> (uint64_t)auVar34._8_4_;
        auVar40._8_8_ = auVar46._8_8_ >> (uint64_t)auVar34._8_4_;
        auVar41._8_4_ = uVar21;
        auVar41._0_8_ = uVar1;
        auVar41._12_4_ = uVar28;
        auVar35._0_8_ = uVar1 >> auVar25._0_8_;
        auVar35._8_8_ = auVar41._8_8_ >> auVar25._0_8_;
        auVar54._8_4_ = uVar21;
        auVar54._0_8_ = uVar1;
        auVar54._12_4_ = uVar28;
        auVar26._0_8_ = uVar1 >> auVar25._8_8_;
        auVar26._8_8_ = auVar54._8_8_ >> auVar25._8_8_;
        auVar41 = pblendw(auVar40,auVar56,0xf0);
        auVar25._8_4_ = uVar21;
        auVar25._0_8_ = uVar1;
        auVar25._12_4_ = uVar28;
        auVar57._0_8_ = uVar1 >> (uint64_t)auVar52._12_4_;
        auVar57._8_8_ = auVar25._8_8_ >> (uint64_t)auVar52._12_4_;
        auVar2._8_4_ = uVar21;
        auVar2._0_8_ = uVar1;
        auVar2._12_4_ = uVar28;
        auVar53._0_8_ = uVar1 >> (uint64_t)auVar52._8_4_;
        auVar53._8_8_ = auVar2._8_8_ >> (uint64_t)auVar52._8_4_;
        auVar3._8_4_ = uVar21;
        auVar3._0_8_ = uVar1;
        auVar3._12_4_ = uVar28;
        auVar29._0_8_ = uVar1 >> unaff_XMM8._0_8_;
        auVar29._8_8_ = auVar3._8_8_ >> unaff_XMM8._0_8_;
        auVar31 = pblendw(auVar26,auVar35,0xf);
        auVar4._8_4_ = uVar21;
        auVar4._0_8_ = uVar1;
        auVar4._12_4_ = uVar28;
        auVar36._0_8_ = uVar1 >> unaff_XMM8._8_8_;
        auVar36._8_8_ = auVar4._8_8_ >> unaff_XMM8._8_8_;
        auVar54 = pblendw(auVar53,auVar57,0xf0);
        auVar46 = pblendw(auVar36,auVar29,0xf);
        lVar66 = (int64_t)g_02411a30;
        auVar42._0_8_ = -(uint64_t)(SUB168(auVar41 & g_02411a30,0) == lVar66);
        lVar67 = g_02411a30._8_8_;
        auVar42._8_8_ = -(uint64_t)(SUB168(auVar41 & g_02411a30,8) == lVar67);
        auVar5._8_4_ = 0xffffffff;
        auVar5._0_8_ = 0xffffffffffffffff;
        auVar5._12_4_ = 0xffffffff;
        auVar27._0_8_ = -(uint64_t)(SUB168(auVar31 & g_02411a30,0) == lVar66);
        auVar27._8_8_ = -(uint64_t)(SUB168(auVar31 & g_02411a30,8) == lVar67);
        auVar6._8_4_ = 0xffffffff;
        auVar6._0_8_ = 0xffffffffffffffff;
        auVar6._12_4_ = 0xffffffff;
        auVar31 = packssdw(auVar27 ^ auVar6,auVar42 ^ auVar5);
        iVar58 = iVar58 - auVar31._0_4_;
        iVar59 = iVar59 - auVar31._4_4_;
        iVar60 = iVar60 - auVar31._8_4_;
        iVar61 = iVar61 - auVar31._12_4_;
        auVar55._0_8_ = -(uint64_t)(SUB168(auVar54 & g_02411a30,0) == lVar66);
        auVar55._8_8_ = -(uint64_t)(SUB168(auVar54 & g_02411a30,8) == lVar67);
        auVar7._8_4_ = 0xffffffff;
        auVar7._0_8_ = 0xffffffffffffffff;
        auVar7._12_4_ = 0xffffffff;
        auVar37._0_8_ = -(uint64_t)(SUB168(auVar46 & g_02411a30,0) == lVar66);
        auVar37._8_8_ = -(uint64_t)(SUB168(auVar46 & g_02411a30,8) == lVar67);
        auVar8._8_4_ = 0xffffffff;
        auVar8._0_8_ = 0xffffffffffffffff;
        auVar8._12_4_ = 0xffffffff;
        auVar31 = packssdw(auVar37 ^ auVar8,auVar55 ^ auVar7);
        iVar62 = iVar62 - auVar31._0_4_;
        iVar63 = iVar63 - auVar31._4_4_;
        iVar64 = iVar64 - auVar31._8_4_;
        iVar65 = iVar65 - auVar31._12_4_;
        iVar18 = iVar18 + g_023de2b0;
        iVar19 = iVar19 + _UNK_023de2b4;
        iVar20 = iVar20 + _UNK_023de2b8;
        iVar14 = iVar14 + _UNK_023de2bc;
        uVar12 = uVar12 - 8;
      } while (uVar12 != 0);
      iVar10 = iVar65 + iVar61 + iVar63 + iVar59 + iVar64 + iVar60 + iVar62 + iVar58;
      if (uVar11 == uVar17) goto LAB_0171a1f8;
    }
    iVar13 = iVar13 - iVar15;
    iVar14 = (uVar9 + iVar15) - uVar16;
    do {
      iVar15 = iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc;
      iVar10 = (iVar10 + 1) -
               (uint)((~(uint)(uVar1 >> ((((byte)(iVar15 >> 0x1f) & 0xc) + (char)iVar15) * '\x04' &
                                        0x3f)) & 0xf) == 0);
      iVar14 = iVar14 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
LAB_0171a1f8:
  iVar13 = -iVar10;
  if (param_2 < unaff_ESI) {
    iVar13 = iVar10;
  }
  return iVar13;
}

