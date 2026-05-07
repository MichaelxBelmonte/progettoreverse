// Function: FUN_00f52380
// Address: 00f52380
// Size: 1302 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00f52380(uint *param_1,int64_t param_2,uint8_t (*param_3) [16],int *param_4)

{
  uint8_t (*pauVar1) [16];
  uint uVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint8_t auVar9 [16];
  int64_t arg1;
  int64_t lVar10;
  uint *this_ptr;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
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
  uint8_t (*local_res8) [16];
  
  auVar9 = g_00f52310;
  uVar2 = param_1[0x3c];
  lVar10 = arg1 - (int64_t)this_ptr;
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  auVar15 = *param_3;
  uVar11 = param_1[4];
  uVar12 = param_1[5];
  uVar13 = param_1[6];
  uVar14 = param_1[7];
  pauVar1 = (uint8_t (*) [16])(param_1 + 0x1c);
  auVar21._4_4_ = param_4[2];
  auVar21._0_4_ = param_4[3];
  auVar21._8_4_ = param_4[1];
  auVar21._12_4_ = *param_4;
  auVar24._0_12_ = ZEXT812(0);
  auVar24._12_4_ = param_4[4];
  do {
    auVar17._0_4_ = auVar15._0_4_ ^ *this_ptr ^ uVar5;
    auVar17._4_4_ = auVar15._4_4_ ^ this_ptr[1] ^ uVar6;
    auVar17._8_4_ = auVar15._8_4_ ^ this_ptr[2] ^ uVar7;
    auVar17._12_4_ = auVar15._12_4_ ^ this_ptr[3] ^ uVar8;
    auVar15._4_4_ = uVar12;
    auVar15._0_4_ = uVar11;
    auVar15._8_4_ = uVar13;
    auVar15._12_4_ = uVar14;
    auVar15 = aesenc(auVar17,auVar15);
    auVar17 = pshufb(*local_res8,auVar9);
    auVar15 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 8));
    auVar18 = pshufb(local_res8[1],auVar9);
    auVar22._0_4_ = auVar24._0_4_ + auVar17._0_4_;
    auVar22._4_4_ = auVar24._4_4_ + auVar17._4_4_;
    auVar22._8_4_ = auVar24._8_4_ + auVar17._8_4_;
    auVar22._12_4_ = auVar24._12_4_ + auVar17._12_4_;
    auVar15 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0xc));
    auVar19 = pshufb(local_res8[2],auVar9);
    auVar22 = sha1rnds4_sha(auVar21,auVar22,0);
    auVar25 = sha1nexte_sha(auVar21,auVar18);
    auVar15 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0x10));
    auVar17 = sha1msg1_sha(auVar17,auVar18);
    auVar20 = pshufb(local_res8[3],auVar9);
    auVar15 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0x14));
    auVar25 = sha1rnds4_sha(auVar22,auVar25,0);
    auVar23 = sha1nexte_sha(auVar22,auVar19);
    auVar22 = sha1msg1_sha(auVar18,auVar19);
    auVar15 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0x18));
    auVar23 = sha1rnds4_sha(auVar25,auVar23,0);
    auVar25 = sha1nexte_sha(auVar25,auVar20);
    auVar15 = aesenc(auVar15,*pauVar1);
    auVar18 = sha1msg2_sha(auVar17 ^ auVar19,auVar20);
    auVar19 = sha1msg1_sha(auVar19,auVar20);
    auVar17 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0x20));
    auVar25 = sha1rnds4_sha(auVar23,auVar25,0);
    auVar23 = sha1nexte_sha(auVar23,auVar18);
    auVar15 = *(uint8_t (*) [16])(param_1 + 0x28);
    uVar11 = auVar15._0_4_;
    uVar12 = auVar15._4_4_;
    uVar13 = auVar15._8_4_;
    uVar14 = auVar15._12_4_;
    auVar17 = aesenc(auVar17,*(uint8_t (*) [16])(param_1 + 0x24));
    auVar22 = sha1msg2_sha(auVar22 ^ auVar20,auVar18);
    auVar20 = sha1msg1_sha(auVar20,auVar18);
    if (10 < uVar2) {
      auVar17 = aesenc(auVar17,auVar15);
      auVar15 = *(uint8_t (*) [16])(param_1 + 0x30);
      uVar11 = auVar15._0_4_;
      uVar12 = auVar15._4_4_;
      uVar13 = auVar15._8_4_;
      uVar14 = auVar15._12_4_;
      auVar17 = aesenc(auVar17,*(uint8_t (*) [16])(param_1 + 0x2c));
      if (uVar2 != 0xb) {
        auVar15 = aesenc(auVar17,auVar15);
        uVar11 = param_1[0x38];
        uVar12 = param_1[0x39];
        uVar13 = param_1[0x3a];
        uVar14 = param_1[0x3b];
        auVar17 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0x34));
      }
    }
    auVar26._4_4_ = uVar12;
    auVar26._0_4_ = uVar11;
    auVar26._8_4_ = uVar13;
    auVar26._12_4_ = uVar14;
    auVar17 = aesenclast(auVar17,auVar26);
    auVar15 = *(uint8_t (*) [16])(param_1 + 4);
    auVar23 = sha1rnds4_sha(auVar25,auVar23,0);
    auVar26 = sha1nexte_sha(auVar25,auVar22);
    uVar11 = this_ptr[4];
    uVar12 = this_ptr[5];
    uVar13 = this_ptr[6];
    uVar14 = this_ptr[7];
    *(uint8_t (*) [16])(lVar10 + (int64_t)this_ptr) = auVar17;
    auVar25._0_4_ = auVar17._0_4_ ^ uVar11 ^ uVar5;
    auVar25._4_4_ = auVar17._4_4_ ^ uVar12 ^ uVar6;
    auVar25._8_4_ = auVar17._8_4_ ^ uVar13 ^ uVar7;
    auVar25._12_4_ = auVar17._12_4_ ^ uVar14 ^ uVar8;
    auVar15 = aesenc(auVar25,auVar15);
    auVar19 = sha1msg2_sha(auVar19 ^ auVar18,auVar22);
    auVar17 = sha1msg1_sha(auVar18,auVar22);
    auVar15 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 8));
    auVar18 = sha1rnds4_sha(auVar23,auVar26,1);
    auVar25 = sha1nexte_sha(auVar23,auVar19);
    auVar15 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0xc));
    auVar20 = sha1msg2_sha(auVar20 ^ auVar22,auVar19);
    auVar22 = sha1msg1_sha(auVar22,auVar19);
    auVar15 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0x10));
    auVar25 = sha1rnds4_sha(auVar18,auVar25,1);
    auVar23 = sha1nexte_sha(auVar18,auVar20);
    auVar15 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0x14));
    auVar18 = sha1msg2_sha(auVar17 ^ auVar19,auVar20);
    auVar19 = sha1msg1_sha(auVar19,auVar20);
    auVar15 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0x18));
    auVar23 = sha1rnds4_sha(auVar25,auVar23,1);
    auVar25 = sha1nexte_sha(auVar25,auVar18);
    auVar15 = aesenc(auVar15,*pauVar1);
    auVar22 = sha1msg2_sha(auVar22 ^ auVar20,auVar18);
    auVar20 = sha1msg1_sha(auVar20,auVar18);
    auVar17 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0x20));
    auVar25 = sha1rnds4_sha(auVar23,auVar25,1);
    auVar23 = sha1nexte_sha(auVar23,auVar22);
    auVar15 = *(uint8_t (*) [16])(param_1 + 0x28);
    uVar11 = auVar15._0_4_;
    uVar12 = auVar15._4_4_;
    uVar13 = auVar15._8_4_;
    uVar14 = auVar15._12_4_;
    auVar17 = aesenc(auVar17,*(uint8_t (*) [16])(param_1 + 0x24));
    auVar19 = sha1msg2_sha(auVar19 ^ auVar18,auVar22);
    auVar18 = sha1msg1_sha(auVar18,auVar22);
    if (10 < uVar2) {
      auVar17 = aesenc(auVar17,auVar15);
      auVar15 = *(uint8_t (*) [16])(param_1 + 0x30);
      uVar11 = auVar15._0_4_;
      uVar12 = auVar15._4_4_;
      uVar13 = auVar15._8_4_;
      uVar14 = auVar15._12_4_;
      auVar17 = aesenc(auVar17,*(uint8_t (*) [16])(param_1 + 0x2c));
      if (uVar2 != 0xb) {
        auVar15 = aesenc(auVar17,auVar15);
        uVar11 = param_1[0x38];
        uVar12 = param_1[0x39];
        uVar13 = param_1[0x3a];
        uVar14 = param_1[0x3b];
        auVar17 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0x34));
      }
    }
    auVar3._4_4_ = uVar12;
    auVar3._0_4_ = uVar11;
    auVar3._8_4_ = uVar13;
    auVar3._12_4_ = uVar14;
    auVar17 = aesenclast(auVar17,auVar3);
    auVar15 = *(uint8_t (*) [16])(param_1 + 4);
    auVar26 = sha1rnds4_sha(auVar25,auVar23,1);
    auVar25 = sha1nexte_sha(auVar25,auVar19);
    uVar11 = this_ptr[8];
    uVar12 = this_ptr[9];
    uVar13 = this_ptr[10];
    uVar14 = this_ptr[0xb];
    *(uint8_t (*) [16])(lVar10 + 0x10 + (int64_t)this_ptr) = auVar17;
    auVar23._0_4_ = auVar17._0_4_ ^ uVar11 ^ uVar5;
    auVar23._4_4_ = auVar17._4_4_ ^ uVar12 ^ uVar6;
    auVar23._8_4_ = auVar17._8_4_ ^ uVar13 ^ uVar7;
    auVar23._12_4_ = auVar17._12_4_ ^ uVar14 ^ uVar8;
    auVar15 = aesenc(auVar23,auVar15);
    auVar20 = sha1msg2_sha(auVar20 ^ auVar22,auVar19);
    auVar22 = sha1msg1_sha(auVar22,auVar19);
    auVar15 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 8));
    auVar25 = sha1rnds4_sha(auVar26,auVar25,2);
    auVar23 = sha1nexte_sha(auVar26,auVar20);
    auVar15 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0xc));
    auVar17 = sha1msg2_sha(auVar18 ^ auVar19,auVar20);
    auVar18 = sha1msg1_sha(auVar19,auVar20);
    auVar15 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0x10));
    auVar19 = sha1rnds4_sha(auVar25,auVar23,2);
    auVar25 = sha1nexte_sha(auVar25,auVar17);
    auVar15 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0x14));
    auVar22 = sha1msg2_sha(auVar22 ^ auVar20,auVar17);
    auVar20 = sha1msg1_sha(auVar20,auVar17);
    auVar15 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0x18));
    auVar25 = sha1rnds4_sha(auVar19,auVar25,2);
    auVar23 = sha1nexte_sha(auVar19,auVar22);
    auVar15 = aesenc(auVar15,*pauVar1);
    auVar19 = sha1msg2_sha(auVar18 ^ auVar17,auVar22);
    auVar18 = sha1msg1_sha(auVar17,auVar22);
    auVar17 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0x20));
    auVar23 = sha1rnds4_sha(auVar25,auVar23,2);
    auVar25 = sha1nexte_sha(auVar25,auVar19);
    auVar15 = *(uint8_t (*) [16])(param_1 + 0x28);
    uVar11 = auVar15._0_4_;
    uVar12 = auVar15._4_4_;
    uVar13 = auVar15._8_4_;
    uVar14 = auVar15._12_4_;
    auVar17 = aesenc(auVar17,*(uint8_t (*) [16])(param_1 + 0x24));
    auVar20 = sha1msg2_sha(auVar20 ^ auVar22,auVar19);
    auVar22 = sha1msg1_sha(auVar22,auVar19);
    if (10 < uVar2) {
      auVar17 = aesenc(auVar17,auVar15);
      auVar15 = *(uint8_t (*) [16])(param_1 + 0x30);
      uVar11 = auVar15._0_4_;
      uVar12 = auVar15._4_4_;
      uVar13 = auVar15._8_4_;
      uVar14 = auVar15._12_4_;
      auVar17 = aesenc(auVar17,*(uint8_t (*) [16])(param_1 + 0x2c));
      if (uVar2 != 0xb) {
        auVar15 = aesenc(auVar17,auVar15);
        uVar11 = param_1[0x38];
        uVar12 = param_1[0x39];
        uVar13 = param_1[0x3a];
        uVar14 = param_1[0x3b];
        auVar17 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0x34));
      }
    }
    auVar4._4_4_ = uVar12;
    auVar4._0_4_ = uVar11;
    auVar4._8_4_ = uVar13;
    auVar4._12_4_ = uVar14;
    auVar17 = aesenclast(auVar17,auVar4);
    auVar15 = *(uint8_t (*) [16])(param_1 + 4);
    auVar25 = sha1rnds4_sha(auVar23,auVar25,2);
    auVar23 = sha1nexte_sha(auVar23,auVar20);
    uVar11 = this_ptr[0xc];
    uVar12 = this_ptr[0xd];
    uVar13 = this_ptr[0xe];
    uVar14 = this_ptr[0xf];
    *(uint8_t (*) [16])(lVar10 + 0x20 + (int64_t)this_ptr) = auVar17;
    auVar16._0_4_ = auVar17._0_4_ ^ uVar11 ^ uVar5;
    auVar16._4_4_ = auVar17._4_4_ ^ uVar12 ^ uVar6;
    auVar16._8_4_ = auVar17._8_4_ ^ uVar13 ^ uVar7;
    auVar16._12_4_ = auVar17._12_4_ ^ uVar14 ^ uVar8;
    auVar15 = aesenc(auVar16,auVar15);
    auVar17 = sha1msg2_sha(auVar18 ^ auVar19,auVar20);
    auVar19 = sha1msg1_sha(auVar19,auVar20);
    auVar15 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 8));
    auVar23 = sha1rnds4_sha(auVar25,auVar23,3);
    auVar25 = sha1nexte_sha(auVar25,auVar17);
    auVar15 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0xc));
    auVar18 = sha1msg2_sha(auVar22 ^ auVar20,auVar17);
    auVar22 = sha1msg1_sha(auVar20,auVar17);
    auVar15 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0x10));
    auVar20 = sha1rnds4_sha(auVar23,auVar25,3);
    auVar25 = sha1nexte_sha(auVar23,auVar18);
    auVar17 = sha1msg2_sha(auVar19 ^ auVar17,auVar18);
    auVar15 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0x14));
    auVar19 = sha1rnds4_sha(auVar20,auVar25,3);
    auVar20 = sha1nexte_sha(auVar20,auVar17);
    auVar17 = sha1msg2_sha(auVar22 ^ auVar18,auVar17);
    auVar15 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0x18));
    auVar18 = sha1rnds4_sha(auVar19,auVar20,3);
    auVar17 = sha1nexte_sha(auVar19,auVar17);
    auVar15 = aesenc(auVar15,*pauVar1);
    auVar22 = sha1rnds4_sha(auVar18,auVar17,3);
    auVar24 = sha1nexte_sha(auVar18,auVar24);
    auVar17 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0x20));
    auVar15 = *(uint8_t (*) [16])(param_1 + 0x28);
    uVar11 = auVar15._0_4_;
    uVar12 = auVar15._4_4_;
    uVar13 = auVar15._8_4_;
    uVar14 = auVar15._12_4_;
    auVar17 = aesenc(auVar17,*(uint8_t (*) [16])(param_1 + 0x24));
    if (10 < uVar2) {
      auVar17 = aesenc(auVar17,auVar15);
      auVar15 = *(uint8_t (*) [16])(param_1 + 0x30);
      uVar11 = auVar15._0_4_;
      uVar12 = auVar15._4_4_;
      uVar13 = auVar15._8_4_;
      uVar14 = auVar15._12_4_;
      auVar17 = aesenc(auVar17,*(uint8_t (*) [16])(param_1 + 0x2c));
      if (uVar2 != 0xb) {
        auVar15 = aesenc(auVar17,auVar15);
        uVar11 = param_1[0x38];
        uVar12 = param_1[0x39];
        uVar13 = param_1[0x3a];
        uVar14 = param_1[0x3b];
        auVar17 = aesenc(auVar15,*(uint8_t (*) [16])(param_1 + 0x34));
      }
    }
    auVar18._4_4_ = uVar12;
    auVar18._0_4_ = uVar11;
    auVar18._8_4_ = uVar13;
    auVar18._12_4_ = uVar14;
    auVar15 = aesenclast(auVar17,auVar18);
    uVar11 = param_1[4];
    uVar12 = param_1[5];
    uVar13 = param_1[6];
    uVar14 = param_1[7];
    param_2 = param_2 + -1;
    auVar19._0_4_ = auVar22._0_4_ + auVar21._0_4_;
    auVar19._4_4_ = auVar22._4_4_ + auVar21._4_4_;
    auVar19._8_4_ = auVar22._8_4_ + auVar21._8_4_;
    auVar19._12_4_ = auVar22._12_4_ + auVar21._12_4_;
    *(uint8_t (*) [16])(lVar10 + 0x30 + (int64_t)this_ptr) = auVar15;
    this_ptr = this_ptr + 0x10;
    local_res8 = local_res8 + 4;
    auVar21 = auVar19;
  } while (param_2 != 0);
  *param_3 = auVar15;
  *param_4 = auVar19._12_4_;
  param_4[1] = auVar19._8_4_;
  param_4[2] = auVar19._4_4_;
  param_4[3] = auVar19._0_4_;
  param_4[4] = auVar24._12_4_;
  return;
}

