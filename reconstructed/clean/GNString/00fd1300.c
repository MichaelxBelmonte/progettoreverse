// Function: FUN_00fd1300
// Address: 00fd1300
// Size: 517 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00fd1300(uint64_t param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  int *arg1;
  int *this_ptr;
  uint8_t auVar35 [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  uint8_t auVar45 [16];
  
  iVar1 = *arg1;
  iVar2 = *param_2;
  *this_ptr = iVar1 - iVar2;
  iVar3 = arg1[1];
  iVar4 = param_2[1];
  this_ptr[1] = iVar3 - iVar4;
  iVar5 = arg1[2];
  iVar6 = param_2[2];
  this_ptr[2] = iVar5 - iVar6;
  iVar7 = arg1[3];
  iVar8 = param_2[3];
  this_ptr[3] = iVar7 - iVar8;
  iVar9 = arg1[4];
  iVar10 = param_2[4];
  this_ptr[4] = iVar9 - iVar10;
  iVar11 = arg1[5];
  iVar12 = param_2[5];
  this_ptr[5] = iVar11 - iVar12;
  iVar13 = arg1[6];
  iVar14 = param_2[6];
  this_ptr[6] = iVar13 - iVar14;
  iVar15 = arg1[7];
  iVar16 = param_2[7];
  this_ptr[7] = iVar15 - iVar16;
  iVar17 = arg1[8];
  iVar18 = param_2[8];
  this_ptr[8] = iVar17 - iVar18;
  iVar19 = arg1[9];
  iVar20 = param_2[9];
  this_ptr[9] = iVar19 - iVar20;
  iVar21 = arg1[10];
  iVar22 = param_2[10];
  this_ptr[10] = iVar21 - iVar22;
  iVar23 = arg1[0xb];
  iVar24 = param_2[0xb];
  this_ptr[0xb] = iVar23 - iVar24;
  iVar25 = arg1[0xc];
  iVar26 = param_2[0xc];
  this_ptr[0xc] = iVar25 - iVar26;
  iVar27 = arg1[0xd];
  iVar28 = param_2[0xd];
  this_ptr[0xd] = iVar27 - iVar28;
  iVar29 = arg1[0xe];
  iVar30 = param_2[0xe];
  this_ptr[0xe] = iVar29 - iVar30;
  auVar41 = g_023fa9b0;
  auVar36._0_4_ = (arg1[0xf] - param_2[0xf]) + g_023fa9d0;
  uVar38 = (iVar1 - iVar2) + _UNK_023fa9d4;
  uVar39 = (iVar3 - iVar4) + _UNK_023fa9d8;
  uVar40 = (iVar5 - iVar6) + _UNK_023fa9dc;
  uVar33 = (iVar25 - iVar26) + 0x1ffffffe;
  auVar42._0_4_ = (iVar17 - iVar18) + 0x1ffffffc + (auVar36._0_4_ >> 0x1c);
  auVar42._4_4_ = _UNK_023fa9e4 + (iVar19 - iVar20);
  auVar42._8_4_ = _UNK_023fa9e8 + (iVar21 - iVar22);
  auVar42._12_4_ = _UNK_023fa9ec + (iVar23 - iVar24);
  uVar34 = (iVar27 - iVar28) + 0x1ffffffe;
  auVar43._4_4_ = uVar34;
  auVar43._0_4_ = uVar33;
  uVar31 = (iVar29 - iVar30) + 0x1ffffffe;
  auVar43._8_4_ = uVar31;
  auVar43._12_4_ = 0;
  auVar44._0_8_ = CONCAT44(uVar39,uVar38);
  auVar44._8_4_ = uVar40;
  auVar44._12_4_ = uVar40;
  uVar32 = (iVar7 - iVar8) + 0x1ffffffe;
  auVar45._8_8_ = auVar44._8_8_ & 0xffffffff | (uint64_t)uVar32 << 0x20;
  auVar45._0_8_ = auVar44._0_8_;
  auVar45 = auVar45 & g_023fa9b0;
  auVar36._4_4_ = auVar36._0_4_;
  auVar36._8_4_ = auVar36._0_4_;
  auVar36._12_4_ = auVar36._0_4_;
  auVar35._0_4_ = (iVar9 - iVar10) + g_023fa9d0;
  auVar35._4_4_ = (iVar11 - iVar12) + _UNK_023fa9d4;
  auVar35._8_4_ = (iVar13 - iVar14) + _UNK_023fa9d8;
  auVar35._12_4_ = (iVar15 - iVar16) + _UNK_023fa9dc;
  auVar37 = pblendw(auVar36,auVar43,0x3f);
  auVar37 = auVar37 & g_023fa9b0;
  this_ptr[0xc] = (auVar42._12_4_ >> 0x1c) + auVar37._0_4_;
  this_ptr[0xd] = (uVar33 >> 0x1c) + auVar37._4_4_;
  this_ptr[0xe] = (uVar34 >> 0x1c) + auVar37._8_4_;
  this_ptr[0xf] = (uVar31 >> 0x1c) + auVar37._12_4_;
  auVar37 = auVar42 & auVar41;
  this_ptr[8] = (auVar35._12_4_ >> 0x1c) + auVar37._0_4_;
  this_ptr[9] = (auVar42._0_4_ >> 0x1c) + auVar37._4_4_;
  this_ptr[10] = (auVar42._4_4_ >> 0x1c) + auVar37._8_4_;
  this_ptr[0xb] = (auVar42._8_4_ >> 0x1c) + auVar37._12_4_;
  auVar37._4_4_ = auVar35._0_4_;
  auVar37._0_4_ = auVar35._0_4_;
  auVar37._8_4_ = auVar35._4_4_;
  auVar37._12_4_ = auVar35._8_4_;
  auVar35 = auVar35 & auVar41;
  auVar41 = pblendw(ZEXT416(uVar32),auVar37,0xfc);
  this_ptr[4] = (auVar41._0_4_ >> 0x1c) + auVar35._0_4_;
  this_ptr[5] = (auVar41._4_4_ >> 0x1c) + auVar35._4_4_;
  this_ptr[6] = (auVar41._8_4_ >> 0x1c) + auVar35._8_4_;
  this_ptr[7] = (auVar41._12_4_ >> 0x1c) + auVar35._12_4_;
  *this_ptr = auVar45._0_4_ + (auVar36._0_4_ >> 0x1c);
  this_ptr[1] = auVar45._4_4_ + (uVar38 >> 0x1c);
  this_ptr[2] = auVar45._8_4_ + (uVar39 >> 0x1c);
  this_ptr[3] = auVar45._12_4_ + (uVar40 >> 0x1c);
  return;
}

