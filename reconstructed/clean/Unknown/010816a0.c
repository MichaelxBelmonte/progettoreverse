// Function: FUN_010816a0
// Address: 010816a0
// Size: 622 bytes
// Class: Unknown

void FUN_010816a0(uint64_t param_1,int64_t param_2)

{
  uint8_t (*arg1) [16];
  int *this_ptr;
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  
  auVar1._4_4_ = this_ptr[2];
  auVar1._0_4_ = this_ptr[3];
  auVar1._8_4_ = this_ptr[1];
  auVar1._12_4_ = *this_ptr;
  auVar2._0_12_ = ZEXT812(0);
  auVar2._12_4_ = this_ptr[4];
  auVar4 = pshufb(*arg1,g_01084ee0);
  auVar6 = pshufb(arg1[1],g_01084ee0);
  auVar8 = pshufb(arg1[2],g_01084ee0);
  auVar9 = pshufb(arg1[3],g_01084ee0);
  do {
    param_2 = param_2 + -1;
    auVar3._0_4_ = auVar2._0_4_ + auVar4._0_4_;
    auVar3._4_4_ = auVar2._4_4_ + auVar4._4_4_;
    auVar3._8_4_ = auVar2._8_4_ + auVar4._8_4_;
    auVar3._12_4_ = auVar2._12_4_ + auVar4._12_4_;
    if (param_2 != 0) {
      arg1 = arg1 + 4;
    }
    auVar5 = sha1msg1_sha(auVar4,auVar6);
    auVar4 = sha1rnds4_sha(auVar1,auVar3,0);
    auVar3 = sha1nexte_sha(auVar1,auVar6);
    auVar7 = sha1msg1_sha(auVar6,auVar8);
    auVar5 = sha1msg2_sha(auVar5 ^ auVar8,auVar9);
    auVar6 = sha1rnds4_sha(auVar4,auVar3,0);
    auVar4 = sha1nexte_sha(auVar4,auVar8);
    auVar3 = sha1msg2_sha(auVar7 ^ auVar9,auVar5);
    auVar8 = sha1msg1_sha(auVar8,auVar9);
    auVar4 = sha1rnds4_sha(auVar6,auVar4,0);
    auVar6 = sha1nexte_sha(auVar6,auVar9);
    auVar9 = sha1msg1_sha(auVar9,auVar5);
    auVar7 = sha1msg2_sha(auVar8 ^ auVar5,auVar3);
    auVar6 = sha1rnds4_sha(auVar4,auVar6,0);
    auVar4 = sha1nexte_sha(auVar4,auVar5);
    auVar10 = sha1msg2_sha(auVar9 ^ auVar3,auVar7);
    auVar8 = sha1msg1_sha(auVar5,auVar3);
    auVar4 = sha1rnds4_sha(auVar6,auVar4,0);
    auVar6 = sha1nexte_sha(auVar6,auVar3);
    auVar9 = sha1msg1_sha(auVar3,auVar7);
    auVar8 = sha1msg2_sha(auVar8 ^ auVar7,auVar10);
    auVar6 = sha1rnds4_sha(auVar4,auVar6,1);
    auVar4 = sha1nexte_sha(auVar4,auVar7);
    auVar9 = sha1msg2_sha(auVar9 ^ auVar10,auVar8);
    auVar3 = sha1msg1_sha(auVar7,auVar10);
    auVar4 = sha1rnds4_sha(auVar6,auVar4,1);
    auVar6 = sha1nexte_sha(auVar6,auVar10);
    auVar5 = sha1msg1_sha(auVar10,auVar8);
    auVar3 = sha1msg2_sha(auVar3 ^ auVar8,auVar9);
    auVar6 = sha1rnds4_sha(auVar4,auVar6,1);
    auVar4 = sha1nexte_sha(auVar4,auVar8);
    auVar5 = sha1msg2_sha(auVar5 ^ auVar9,auVar3);
    auVar8 = sha1msg1_sha(auVar8,auVar9);
    auVar4 = sha1rnds4_sha(auVar6,auVar4,1);
    auVar6 = sha1nexte_sha(auVar6,auVar9);
    auVar9 = sha1msg1_sha(auVar9,auVar3);
    auVar8 = sha1msg2_sha(auVar8 ^ auVar3,auVar5);
    auVar6 = sha1rnds4_sha(auVar4,auVar6,1);
    auVar4 = sha1nexte_sha(auVar4,auVar3);
    auVar9 = sha1msg2_sha(auVar9 ^ auVar5,auVar8);
    auVar3 = sha1msg1_sha(auVar3,auVar5);
    auVar4 = sha1rnds4_sha(auVar6,auVar4,2);
    auVar6 = sha1nexte_sha(auVar6,auVar5);
    auVar5 = sha1msg1_sha(auVar5,auVar8);
    auVar3 = sha1msg2_sha(auVar3 ^ auVar8,auVar9);
    auVar6 = sha1rnds4_sha(auVar4,auVar6,2);
    auVar4 = sha1nexte_sha(auVar4,auVar8);
    auVar5 = sha1msg2_sha(auVar5 ^ auVar9,auVar3);
    auVar8 = sha1msg1_sha(auVar8,auVar9);
    auVar4 = sha1rnds4_sha(auVar6,auVar4,2);
    auVar6 = sha1nexte_sha(auVar6,auVar9);
    auVar9 = sha1msg1_sha(auVar9,auVar3);
    auVar8 = sha1msg2_sha(auVar8 ^ auVar3,auVar5);
    auVar6 = sha1rnds4_sha(auVar4,auVar6,2);
    auVar4 = sha1nexte_sha(auVar4,auVar3);
    auVar9 = sha1msg2_sha(auVar9 ^ auVar5,auVar8);
    auVar3 = sha1msg1_sha(auVar3,auVar5);
    auVar4 = sha1rnds4_sha(auVar6,auVar4,2);
    auVar6 = sha1nexte_sha(auVar6,auVar5);
    auVar5 = sha1msg1_sha(auVar5,auVar8);
    auVar3 = sha1msg2_sha(auVar3 ^ auVar8,auVar9);
    auVar6 = sha1rnds4_sha(auVar4,auVar6,3);
    auVar4 = sha1nexte_sha(auVar4,auVar8);
    auVar5 = sha1msg2_sha(auVar5 ^ auVar9,auVar3);
    auVar8 = sha1rnds4_sha(auVar6,auVar4,3);
    auVar6 = sha1nexte_sha(auVar6,auVar9);
    auVar4 = pshufb(*arg1,g_01084ee0);
    auVar9 = sha1rnds4_sha(auVar8,auVar6,3);
    auVar8 = sha1nexte_sha(auVar8,auVar3);
    auVar6 = pshufb(arg1[1],g_01084ee0);
    auVar3 = sha1rnds4_sha(auVar9,auVar8,3);
    auVar9 = sha1nexte_sha(auVar9,auVar5);
    auVar8 = pshufb(arg1[2],g_01084ee0);
    auVar5 = sha1rnds4_sha(auVar3,auVar9,3);
    auVar2 = sha1nexte_sha(auVar3,auVar2);
    auVar9 = pshufb(arg1[3],g_01084ee0);
    auVar7._0_4_ = auVar5._0_4_ + auVar1._0_4_;
    auVar7._4_4_ = auVar5._4_4_ + auVar1._4_4_;
    auVar7._8_4_ = auVar5._8_4_ + auVar1._8_4_;
    auVar7._12_4_ = auVar5._12_4_ + auVar1._12_4_;
    auVar1 = auVar7;
  } while (param_2 != 0);
  *this_ptr = auVar7._12_4_;
  this_ptr[1] = auVar7._8_4_;
  this_ptr[2] = auVar7._4_4_;
  this_ptr[3] = auVar7._0_4_;
  this_ptr[4] = auVar2._12_4_;
  return;
}

