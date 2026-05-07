// Function: FUN_0108e980
// Address: 0108e980
// Size: 3768 bytes
// Class: Unknown

void FUN_0108e980(uint64_t param_1,int64_t param_2)

{
  char *pcVar1;
  uint8_t (*pauVar2) [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint8_t (*arg1) [16];
  uint uVar8;
  uint *this_ptr;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint uVar20;
  uint uVar21;
  uint8_t auVar19 [16];
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  uint uVar35;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  uint8_t auVar45 [16];
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
  uint8_t auVar58 [16];
  uint8_t auVar59 [16];
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  
  pauVar2 = arg1 + param_2 * 4;
  uVar3 = *this_ptr;
  uVar6 = this_ptr[1];
  uVar4 = this_ptr[2];
  uVar5 = this_ptr[3];
  uVar15 = this_ptr[4];
  uVar14 = this_ptr[5];
  uVar13 = this_ptr[6];
  uVar12 = this_ptr[7];
  do {
    auVar16 = pshufb(*arg1,g_0108e580);
    auVar17 = pshufb(arg1[1],g_0108e580);
    auVar18 = pshufb(arg1[2],g_0108e580);
    local_c0 = g_0108e380 + auVar16._0_4_;
    iStack_bc = g_0108e384 + auVar16._4_4_;
    iStack_b8 = g_0108e388 + auVar16._8_4_;
    iStack_b4 = g_0108e38c + auVar16._12_4_;
    auVar19 = pshufb(arg1[3],g_0108e580);
    local_b0 = g_0108e3a0 + auVar17._0_4_;
    iStack_ac = g_0108e3a4 + auVar17._4_4_;
    iStack_a8 = g_0108e3a8 + auVar17._8_4_;
    iStack_a4 = g_0108e3ac + auVar17._12_4_;
    local_a0 = g_0108e3c0 + auVar18._0_4_;
    iStack_9c = g_0108e3c4 + auVar18._4_4_;
    iStack_98 = g_0108e3c8 + auVar18._8_4_;
    iStack_94 = g_0108e3cc + auVar18._12_4_;
    local_90 = g_0108e3e0 + auVar19._0_4_;
    iStack_8c = g_0108e3e4 + auVar19._4_4_;
    iStack_88 = g_0108e3e8 + auVar19._8_4_;
    iStack_84 = g_0108e3ec + auVar19._12_4_;
    uVar8 = uVar6 ^ uVar4;
    piVar7 = &g_0108e380;
    do {
      uVar10 = (uVar15 >> 0xe | uVar15 << 0x12) ^ uVar15;
      uVar11 = (uVar3 >> 9 | uVar3 << 0x17) ^ uVar3;
      uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar15;
      uVar23 = auVar16._4_4_;
      uVar24 = auVar16._8_4_;
      uVar25 = auVar16._12_4_;
      uVar26 = auVar17._0_4_;
      uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar3;
      iVar9 = uVar12 + local_c0 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) +
              (uVar10 >> 6 | uVar10 << 0x1a);
      uVar35 = auVar18._4_4_;
      uVar60 = auVar18._8_4_;
      uVar61 = auVar18._12_4_;
      uVar62 = auVar19._0_4_;
      uVar5 = uVar5 + iVar9;
      uVar20 = auVar19._4_4_;
      uVar21 = auVar19._8_4_;
      uVar22 = auVar19._12_4_;
      auVar36._0_8_ = CONCAT44(uVar21,uVar21);
      auVar36._8_4_ = uVar22;
      auVar36._12_4_ = uVar22;
      uVar12 = (uVar11 >> 2 | uVar11 << 0x1e) + iVar9 + (uVar8 & (uVar3 ^ uVar6) ^ uVar6);
      uVar8 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
      uVar10 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar5;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar12;
      auVar37._0_4_ = uVar21 >> 10;
      auVar37._4_4_ = 0;
      auVar37._8_4_ = uVar22 >> 10;
      auVar37._12_4_ = uVar22 >> 10;
      iVar9 = uVar13 + iStack_bc + ((uVar15 ^ uVar14) & uVar5 ^ uVar14) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      uVar4 = uVar4 + iVar9;
      auVar27._0_8_ = auVar36._0_8_ >> 0x11;
      auVar27._8_8_ = auVar36._8_8_ >> 0x11;
      uVar13 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar3 ^ uVar6) & (uVar12 ^ uVar3) ^ uVar3)
      ;
      auVar38._0_8_ = auVar36._0_8_ >> 0x13;
      auVar38._8_8_ = auVar36._8_8_ >> 0x13;
      uVar8 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
      auVar38 = auVar37 ^ auVar27 ^ auVar38;
      uVar10 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar4;
      auVar16._0_4_ =
           auVar16._0_4_ + uVar35 +
           (uVar23 >> 3 ^ uVar23 >> 7 ^ uVar23 << 0xe ^ uVar23 >> 0x12 ^ uVar23 << 0x19) +
           auVar38._0_4_;
      auVar16._4_4_ =
           uVar23 + uVar60 +
           (uVar24 >> 3 ^ uVar24 >> 7 ^ uVar24 << 0xe ^ uVar24 >> 0x12 ^ uVar24 << 0x19) +
           auVar38._8_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar13;
      iVar9 = uVar14 + iStack_b8 + ((uVar5 ^ uVar15) & uVar4 ^ uVar15) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      auVar39._0_8_ = CONCAT44(auVar16._0_4_,auVar16._0_4_);
      auVar39._8_4_ = auVar16._4_4_;
      auVar39._12_4_ = auVar16._4_4_;
      uVar6 = uVar6 + iVar9;
      auVar40._0_4_ = auVar16._0_4_ >> 10;
      auVar40._4_4_ = 0;
      auVar40._8_4_ = auVar16._4_4_ >> 10;
      auVar40._12_4_ = auVar16._4_4_ >> 10;
      uVar14 = (uVar10 >> 2 | uVar10 << 0x1e) +
               iVar9 + ((uVar12 ^ uVar3) & (uVar13 ^ uVar12) ^ uVar12);
      auVar28._0_8_ = auVar39._0_8_ >> 0x11;
      auVar28._8_8_ = auVar39._8_8_ >> 0x11;
      uVar8 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      uVar10 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
      auVar41._0_8_ = auVar39._0_8_ >> 0x13;
      auVar41._8_8_ = auVar39._8_8_ >> 0x13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar6;
      auVar41 = auVar40 ^ auVar28 ^ auVar41;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar14;
      iVar9 = uVar15 + iStack_b4 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + (uVar8 >> 6 | uVar8 << 0x1a);
      auVar16._8_4_ =
           uVar24 + uVar61 +
           (uVar25 >> 3 ^ uVar25 >> 7 ^ uVar25 << 0xe ^ uVar25 >> 0x12 ^ uVar25 << 0x19) +
           auVar41._0_4_;
      auVar16._12_4_ =
           uVar25 + uVar62 +
           (uVar26 >> 3 ^ uVar26 >> 7 ^ uVar26 << 0xe ^ uVar26 >> 0x12 ^ uVar26 << 0x19) +
           auVar41._8_4_;
      uVar3 = uVar3 + iVar9;
      local_c0 = piVar7[0x20] + auVar16._0_4_;
      iStack_bc = piVar7[0x21] + auVar16._4_4_;
      iStack_b8 = piVar7[0x22] + auVar16._8_4_;
      iStack_b4 = piVar7[0x23] + auVar16._12_4_;
      uVar15 = (uVar10 >> 2 | uVar10 << 0x1e) +
               iVar9 + ((uVar13 ^ uVar12) & (uVar14 ^ uVar13) ^ uVar13);
      uVar8 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
      uVar10 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar3;
      uVar11 = auVar17._4_4_;
      uVar23 = auVar17._8_4_;
      uVar24 = auVar17._12_4_;
      uVar25 = auVar18._0_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar15;
      iVar9 = uVar5 + local_b0 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + (uVar8 >> 6 | uVar8 << 0x1a);
      uVar12 = uVar12 + iVar9;
      auVar42._0_8_ = CONCAT44(auVar16._8_4_,auVar16._8_4_);
      auVar42._8_4_ = auVar16._12_4_;
      auVar42._12_4_ = auVar16._12_4_;
      uVar5 = (uVar10 >> 2 | uVar10 << 0x1e) +
              iVar9 + ((uVar14 ^ uVar13) & (uVar15 ^ uVar14) ^ uVar14);
      uVar8 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
      uVar10 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar12;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar5;
      auVar43._0_4_ = auVar16._8_4_ >> 10;
      auVar43._4_4_ = 0;
      auVar43._8_4_ = auVar16._12_4_ >> 10;
      auVar43._12_4_ = auVar16._12_4_ >> 10;
      iVar9 = uVar4 + iStack_ac + ((uVar3 ^ uVar6) & uVar12 ^ uVar6) + (uVar8 >> 6 | uVar8 << 0x1a);
      uVar13 = uVar13 + iVar9;
      auVar29._0_8_ = auVar42._0_8_ >> 0x11;
      auVar29._8_8_ = auVar42._8_8_ >> 0x11;
      uVar4 = (uVar10 >> 2 | uVar10 << 0x1e) +
              iVar9 + ((uVar15 ^ uVar14) & (uVar5 ^ uVar15) ^ uVar15);
      auVar44._0_8_ = auVar42._0_8_ >> 0x13;
      auVar44._8_8_ = auVar42._8_8_ >> 0x13;
      uVar8 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
      auVar44 = auVar43 ^ auVar29 ^ auVar44;
      uVar10 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar13;
      auVar17._0_4_ =
           uVar26 + uVar20 +
           (uVar11 >> 3 ^ uVar11 >> 7 ^ uVar11 << 0xe ^ uVar11 >> 0x12 ^ uVar11 << 0x19) +
           auVar44._0_4_;
      auVar17._4_4_ =
           uVar11 + uVar21 +
           (uVar23 >> 3 ^ uVar23 >> 7 ^ uVar23 << 0xe ^ uVar23 >> 0x12 ^ uVar23 << 0x19) +
           auVar44._8_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar4;
      iVar9 = uVar6 + iStack_a8 + ((uVar12 ^ uVar3) & uVar13 ^ uVar3) + (uVar8 >> 6 | uVar8 << 0x1a)
      ;
      auVar45._0_8_ = CONCAT44(auVar17._0_4_,auVar17._0_4_);
      auVar45._8_4_ = auVar17._4_4_;
      auVar45._12_4_ = auVar17._4_4_;
      uVar14 = uVar14 + iVar9;
      auVar46._0_4_ = auVar17._0_4_ >> 10;
      auVar46._4_4_ = 0;
      auVar46._8_4_ = auVar17._4_4_ >> 10;
      auVar46._12_4_ = auVar17._4_4_ >> 10;
      uVar6 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar5 ^ uVar15) & (uVar4 ^ uVar5) ^ uVar5);
      auVar30._0_8_ = auVar45._0_8_ >> 0x11;
      auVar30._8_8_ = auVar45._8_8_ >> 0x11;
      uVar8 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
      uVar10 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
      auVar47._0_8_ = auVar45._0_8_ >> 0x13;
      auVar47._8_8_ = auVar45._8_8_ >> 0x13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar14;
      auVar47 = auVar46 ^ auVar30 ^ auVar47;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar6;
      iVar9 = uVar3 + iStack_a4 + ((uVar13 ^ uVar12) & uVar14 ^ uVar12) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      auVar17._8_4_ =
           uVar23 + uVar22 +
           (uVar24 >> 3 ^ uVar24 >> 7 ^ uVar24 << 0xe ^ uVar24 >> 0x12 ^ uVar24 << 0x19) +
           auVar47._0_4_;
      auVar17._12_4_ =
           uVar24 + auVar16._0_4_ +
           (uVar25 >> 3 ^ uVar25 >> 7 ^ uVar25 << 0xe ^ uVar25 >> 0x12 ^ uVar25 << 0x19) +
           auVar47._8_4_;
      uVar15 = uVar15 + iVar9;
      local_b0 = piVar7[0x28] + auVar17._0_4_;
      iStack_ac = piVar7[0x29] + auVar17._4_4_;
      iStack_a8 = piVar7[0x2a] + auVar17._8_4_;
      iStack_a4 = piVar7[0x2b] + auVar17._12_4_;
      uVar3 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar4 ^ uVar5) & (uVar6 ^ uVar4) ^ uVar4);
      uVar8 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
      uVar10 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar15;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar3;
      iVar9 = uVar12 + local_a0 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      uVar5 = uVar5 + iVar9;
      auVar48._0_8_ = CONCAT44(auVar17._8_4_,auVar17._8_4_);
      auVar48._8_4_ = auVar17._12_4_;
      auVar48._12_4_ = auVar17._12_4_;
      uVar12 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar6 ^ uVar4) & (uVar3 ^ uVar6) ^ uVar6);
      uVar8 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
      uVar10 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar5;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar12;
      auVar49._0_4_ = auVar17._8_4_ >> 10;
      auVar49._4_4_ = 0;
      auVar49._8_4_ = auVar17._12_4_ >> 10;
      auVar49._12_4_ = auVar17._12_4_ >> 10;
      iVar9 = uVar13 + iStack_9c + ((uVar15 ^ uVar14) & uVar5 ^ uVar14) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      uVar4 = uVar4 + iVar9;
      auVar31._0_8_ = auVar48._0_8_ >> 0x11;
      auVar31._8_8_ = auVar48._8_8_ >> 0x11;
      uVar13 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar3 ^ uVar6) & (uVar12 ^ uVar3) ^ uVar3)
      ;
      auVar50._0_8_ = auVar48._0_8_ >> 0x13;
      auVar50._8_8_ = auVar48._8_8_ >> 0x13;
      uVar8 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
      auVar50 = auVar49 ^ auVar31 ^ auVar50;
      uVar10 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar4;
      auVar18._0_4_ =
           uVar25 + auVar16._4_4_ +
           (uVar35 >> 3 ^ uVar35 >> 7 ^ uVar35 << 0xe ^ uVar35 >> 0x12 ^ uVar35 << 0x19) +
           auVar50._0_4_;
      auVar18._4_4_ =
           uVar35 + auVar16._8_4_ +
           (uVar60 >> 3 ^ uVar60 >> 7 ^ uVar60 << 0xe ^ uVar60 >> 0x12 ^ uVar60 << 0x19) +
           auVar50._8_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar13;
      iVar9 = uVar14 + iStack_98 + ((uVar5 ^ uVar15) & uVar4 ^ uVar15) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      auVar51._0_8_ = CONCAT44(auVar18._0_4_,auVar18._0_4_);
      auVar51._8_4_ = auVar18._4_4_;
      auVar51._12_4_ = auVar18._4_4_;
      uVar6 = uVar6 + iVar9;
      auVar52._0_4_ = auVar18._0_4_ >> 10;
      auVar52._4_4_ = 0;
      auVar52._8_4_ = auVar18._4_4_ >> 10;
      auVar52._12_4_ = auVar18._4_4_ >> 10;
      uVar14 = (uVar10 >> 2 | uVar10 << 0x1e) +
               iVar9 + ((uVar12 ^ uVar3) & (uVar13 ^ uVar12) ^ uVar12);
      auVar32._0_8_ = auVar51._0_8_ >> 0x11;
      auVar32._8_8_ = auVar51._8_8_ >> 0x11;
      uVar8 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      uVar10 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
      auVar53._0_8_ = auVar51._0_8_ >> 0x13;
      auVar53._8_8_ = auVar51._8_8_ >> 0x13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar6;
      auVar53 = auVar52 ^ auVar32 ^ auVar53;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar14;
      iVar9 = uVar15 + iStack_94 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + (uVar8 >> 6 | uVar8 << 0x1a);
      auVar18._8_4_ =
           uVar60 + auVar16._12_4_ +
           (uVar61 >> 3 ^ uVar61 >> 7 ^ uVar61 << 0xe ^ uVar61 >> 0x12 ^ uVar61 << 0x19) +
           auVar53._0_4_;
      auVar18._12_4_ =
           uVar61 + auVar17._0_4_ +
           (uVar62 >> 3 ^ uVar62 >> 7 ^ uVar62 << 0xe ^ uVar62 >> 0x12 ^ uVar62 << 0x19) +
           auVar53._8_4_;
      uVar3 = uVar3 + iVar9;
      local_a0 = piVar7[0x30] + auVar18._0_4_;
      iStack_9c = piVar7[0x31] + auVar18._4_4_;
      iStack_98 = piVar7[0x32] + auVar18._8_4_;
      iStack_94 = piVar7[0x33] + auVar18._12_4_;
      uVar15 = (uVar10 >> 2 | uVar10 << 0x1e) +
               iVar9 + ((uVar13 ^ uVar12) & (uVar14 ^ uVar13) ^ uVar13);
      uVar8 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
      uVar10 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar3;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar15;
      iVar9 = uVar5 + local_90 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + (uVar8 >> 6 | uVar8 << 0x1a);
      uVar12 = uVar12 + iVar9;
      auVar54._0_8_ = CONCAT44(auVar18._8_4_,auVar18._8_4_);
      auVar54._8_4_ = auVar18._12_4_;
      auVar54._12_4_ = auVar18._12_4_;
      uVar5 = (uVar10 >> 2 | uVar10 << 0x1e) +
              iVar9 + ((uVar14 ^ uVar13) & (uVar15 ^ uVar14) ^ uVar14);
      uVar8 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
      uVar10 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar12;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar5;
      auVar55._0_4_ = auVar18._8_4_ >> 10;
      auVar55._4_4_ = 0;
      auVar55._8_4_ = auVar18._12_4_ >> 10;
      auVar55._12_4_ = auVar18._12_4_ >> 10;
      iVar9 = uVar4 + iStack_8c + ((uVar3 ^ uVar6) & uVar12 ^ uVar6) + (uVar8 >> 6 | uVar8 << 0x1a);
      uVar13 = uVar13 + iVar9;
      auVar33._0_8_ = auVar54._0_8_ >> 0x11;
      auVar33._8_8_ = auVar54._8_8_ >> 0x11;
      uVar4 = (uVar10 >> 2 | uVar10 << 0x1e) +
              iVar9 + ((uVar15 ^ uVar14) & (uVar5 ^ uVar15) ^ uVar15);
      auVar56._0_8_ = auVar54._0_8_ >> 0x13;
      auVar56._8_8_ = auVar54._8_8_ >> 0x13;
      uVar8 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
      auVar56 = auVar55 ^ auVar33 ^ auVar56;
      uVar10 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar13;
      auVar19._0_4_ =
           uVar62 + auVar17._4_4_ +
           (uVar20 >> 3 ^ uVar20 >> 7 ^ uVar20 << 0xe ^ uVar20 >> 0x12 ^ uVar20 << 0x19) +
           auVar56._0_4_;
      auVar19._4_4_ =
           uVar20 + auVar17._8_4_ +
           (uVar21 >> 3 ^ uVar21 >> 7 ^ uVar21 << 0xe ^ uVar21 >> 0x12 ^ uVar21 << 0x19) +
           auVar56._8_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar4;
      iVar9 = uVar6 + iStack_88 + ((uVar12 ^ uVar3) & uVar13 ^ uVar3) + (uVar8 >> 6 | uVar8 << 0x1a)
      ;
      auVar57._0_8_ = CONCAT44(auVar19._0_4_,auVar19._0_4_);
      auVar57._8_4_ = auVar19._4_4_;
      auVar57._12_4_ = auVar19._4_4_;
      uVar14 = uVar14 + iVar9;
      auVar58._0_4_ = auVar19._0_4_ >> 10;
      auVar58._4_4_ = 0;
      auVar58._8_4_ = auVar19._4_4_ >> 10;
      auVar58._12_4_ = auVar19._4_4_ >> 10;
      uVar6 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar5 ^ uVar15) & (uVar4 ^ uVar5) ^ uVar5);
      auVar34._0_8_ = auVar57._0_8_ >> 0x11;
      auVar34._8_8_ = auVar57._8_8_ >> 0x11;
      uVar8 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
      uVar11 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
      auVar59._0_8_ = auVar57._0_8_ >> 0x13;
      auVar59._8_8_ = auVar57._8_8_ >> 0x13;
      uVar10 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar14;
      auVar59 = auVar58 ^ auVar34 ^ auVar59;
      uVar8 = uVar6 ^ uVar4;
      uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar6;
      iVar9 = uVar3 + iStack_84 + ((uVar13 ^ uVar12) & uVar14 ^ uVar12) +
              (uVar10 >> 6 | uVar10 << 0x1a);
      auVar19._8_4_ =
           uVar21 + auVar17._12_4_ +
           (uVar22 >> 3 ^ uVar22 >> 7 ^ uVar22 << 0xe ^ uVar22 >> 0x12 ^ uVar22 << 0x19) +
           auVar59._0_4_;
      auVar19._12_4_ =
           uVar22 + auVar18._0_4_ +
           (auVar16._0_4_ >> 3 ^ auVar16._0_4_ >> 7 ^ auVar16._0_4_ * 0x4000 ^ auVar16._0_4_ >> 0x12
           ^ auVar16._0_4_ * 0x2000000) + auVar59._8_4_;
      uVar15 = uVar15 + iVar9;
      local_90 = piVar7[0x38] + auVar19._0_4_;
      iStack_8c = piVar7[0x39] + auVar19._4_4_;
      iStack_88 = piVar7[0x3a] + auVar19._8_4_;
      iStack_84 = piVar7[0x3b] + auVar19._12_4_;
      uVar3 = (uVar11 >> 2 | uVar11 << 0x1e) + iVar9 + ((uVar4 ^ uVar5) & uVar8 ^ uVar4);
      pcVar1 = (char *)((int64_t)piVar7 + 0x103);
      piVar7 = piVar7 + 0x20;
    } while (*pcVar1 != '\0');
    uVar10 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
    uVar11 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar15;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar3;
    iVar9 = uVar12 + local_c0 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) +
            (uVar10 >> 6 | uVar10 << 0x1a);
    uVar5 = uVar5 + iVar9;
    uVar12 = (uVar11 >> 2 | uVar11 << 0x1e) + iVar9 + (uVar8 & (uVar3 ^ uVar6) ^ uVar6);
    uVar8 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
    uVar10 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar5;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar12;
    iVar9 = uVar13 + iStack_bc + ((uVar15 ^ uVar14) & uVar5 ^ uVar14) + (uVar8 >> 6 | uVar8 << 0x1a)
    ;
    uVar4 = uVar4 + iVar9;
    uVar13 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar3 ^ uVar6) & (uVar12 ^ uVar3) ^ uVar3);
    uVar8 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
    uVar10 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar4;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar13;
    iVar9 = uVar14 + iStack_b8 + ((uVar5 ^ uVar15) & uVar4 ^ uVar15) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar6 = uVar6 + iVar9;
    uVar14 = (uVar10 >> 2 | uVar10 << 0x1e) +
             iVar9 + ((uVar12 ^ uVar3) & (uVar13 ^ uVar12) ^ uVar12);
    uVar8 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar10 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar6;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar14;
    iVar9 = uVar15 + iStack_b4 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar3 = uVar3 + iVar9;
    uVar15 = (uVar10 >> 2 | uVar10 << 0x1e) +
             iVar9 + ((uVar13 ^ uVar12) & (uVar14 ^ uVar13) ^ uVar13);
    uVar8 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
    uVar10 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar3;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar15;
    iVar9 = uVar5 + local_b0 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar12 = uVar12 + iVar9;
    uVar5 = (uVar10 >> 2 | uVar10 << 0x1e) +
            iVar9 + ((uVar14 ^ uVar13) & (uVar15 ^ uVar14) ^ uVar14);
    uVar8 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar10 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar12;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar5;
    iVar9 = uVar4 + iStack_ac + ((uVar3 ^ uVar6) & uVar12 ^ uVar6) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar13 = uVar13 + iVar9;
    uVar4 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar15 ^ uVar14) & (uVar5 ^ uVar15) ^ uVar15)
    ;
    uVar8 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
    uVar10 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar13;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar4;
    iVar9 = uVar6 + iStack_a8 + ((uVar12 ^ uVar3) & uVar13 ^ uVar3) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar14 = uVar14 + iVar9;
    uVar6 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar5 ^ uVar15) & (uVar4 ^ uVar5) ^ uVar5);
    uVar8 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
    uVar10 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar14;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar6;
    iVar9 = uVar3 + iStack_a4 + ((uVar13 ^ uVar12) & uVar14 ^ uVar12) + (uVar8 >> 6 | uVar8 << 0x1a)
    ;
    uVar15 = uVar15 + iVar9;
    uVar3 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar4 ^ uVar5) & (uVar6 ^ uVar4) ^ uVar4);
    uVar8 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
    uVar10 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar15;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar3;
    iVar9 = uVar12 + local_a0 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) + (uVar8 >> 6 | uVar8 << 0x1a)
    ;
    uVar5 = uVar5 + iVar9;
    uVar12 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar6 ^ uVar4) & (uVar3 ^ uVar6) ^ uVar6);
    uVar8 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
    uVar10 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar5;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar12;
    iVar9 = uVar13 + iStack_9c + ((uVar15 ^ uVar14) & uVar5 ^ uVar14) + (uVar8 >> 6 | uVar8 << 0x1a)
    ;
    uVar4 = uVar4 + iVar9;
    uVar13 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar3 ^ uVar6) & (uVar12 ^ uVar3) ^ uVar3);
    uVar8 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
    uVar10 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar4;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar13;
    iVar9 = uVar14 + iStack_98 + ((uVar5 ^ uVar15) & uVar4 ^ uVar15) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar6 = uVar6 + iVar9;
    uVar14 = (uVar10 >> 2 | uVar10 << 0x1e) +
             iVar9 + ((uVar12 ^ uVar3) & (uVar13 ^ uVar12) ^ uVar12);
    uVar8 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar10 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar6;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar14;
    iVar9 = uVar15 + iStack_94 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar3 = uVar3 + iVar9;
    uVar8 = (uVar10 >> 2 | uVar10 << 0x1e) +
            iVar9 + ((uVar13 ^ uVar12) & (uVar14 ^ uVar13) ^ uVar13);
    uVar15 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
    uVar10 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar3;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar8;
    iVar9 = uVar5 + local_90 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + (uVar15 >> 6 | uVar15 << 0x1a);
    uVar12 = uVar12 + iVar9;
    uVar5 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar14 ^ uVar13) & (uVar8 ^ uVar14) ^ uVar14)
    ;
    uVar15 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar10 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar12;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar5;
    iVar9 = uVar4 + iStack_8c + ((uVar3 ^ uVar6) & uVar12 ^ uVar6) + (uVar15 >> 6 | uVar15 << 0x1a);
    uVar13 = uVar13 + iVar9;
    uVar4 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar8 ^ uVar14) & (uVar5 ^ uVar8) ^ uVar8);
    uVar15 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
    uVar10 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar13;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar4;
    iVar9 = uVar6 + iStack_88 + ((uVar12 ^ uVar3) & uVar13 ^ uVar3) + (uVar15 >> 6 | uVar15 << 0x1a)
    ;
    uVar14 = uVar14 + iVar9;
    uVar6 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar5 ^ uVar8) & (uVar4 ^ uVar5) ^ uVar5);
    uVar15 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
    uVar10 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar14;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar6;
    iVar9 = uVar3 + iStack_84 + ((uVar13 ^ uVar12) & uVar14 ^ uVar12) +
            (uVar15 >> 6 | uVar15 << 0x1a);
    uVar3 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar4 ^ uVar5) & (uVar6 ^ uVar4) ^ uVar4) +
            *this_ptr;
    arg1 = arg1 + 4;
    uVar6 = uVar6 + this_ptr[1];
    uVar4 = uVar4 + this_ptr[2];
    uVar5 = uVar5 + this_ptr[3];
    uVar15 = uVar8 + iVar9 + this_ptr[4];
    uVar14 = uVar14 + this_ptr[5];
    uVar13 = uVar13 + this_ptr[6];
    uVar12 = uVar12 + this_ptr[7];
    *this_ptr = uVar3;
    this_ptr[1] = uVar6;
    this_ptr[2] = uVar4;
    this_ptr[3] = uVar5;
    this_ptr[4] = uVar15;
    this_ptr[5] = uVar14;
    this_ptr[6] = uVar13;
    this_ptr[7] = uVar12;
  } while (arg1 < pauVar2);
  return;
}

