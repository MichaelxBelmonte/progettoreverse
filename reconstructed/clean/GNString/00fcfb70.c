// Function: FUN_00fcfb70
// Address: 00fcfb70
// Size: 891 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00fcfb70(uint64_t param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *this_ptr;
  uint uVar5;
  uint64_t uVar6;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar12;
  uint uVar13;
  uint8_t auVar11 [16];
  uint uVar14;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  uint uStack_3c;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  uVar6 = FUN_00fd1300();
  _gf_mul(uVar6,&local_b8);
  local_b8 = this_ptr[0x10] + *this_ptr;
  iStack_b4 = this_ptr[0x11] + this_ptr[1];
  iStack_b0 = this_ptr[0x12] + this_ptr[2];
  iStack_ac = this_ptr[0x13] + this_ptr[3];
  local_a8 = this_ptr[0x14] + this_ptr[4];
  iStack_a4 = this_ptr[0x15] + this_ptr[5];
  iStack_a0 = this_ptr[0x16] + this_ptr[6];
  iStack_9c = this_ptr[0x17] + this_ptr[7];
  local_98 = this_ptr[0x18] + this_ptr[8];
  iStack_94 = this_ptr[0x19] + this_ptr[9];
  iStack_90 = this_ptr[0x1a] + this_ptr[10];
  iStack_8c = this_ptr[0x1b] + this_ptr[0xb];
  auVar7 = *(uint8_t (*) [16])(this_ptr + 0xc);
  local_88 = this_ptr[0x1c] + auVar7._0_4_;
  iStack_84 = this_ptr[0x1d] + auVar7._4_4_;
  iStack_80 = this_ptr[0x1e] + auVar7._8_4_;
  iStack_7c = this_ptr[0x1f] + auVar7._12_4_;
  uVar6 = _gf_mul(auVar7._0_8_,&local_b8);
  _gf_mul(uVar6,this_ptr + 0x30);
  iVar1 = this_ptr[0x10];
  local_f8 = iVar1 + local_78;
  iStack_f4 = this_ptr[0x11] + iStack_74;
  iStack_f0 = this_ptr[0x12] + iStack_70;
  iStack_ec = this_ptr[0x13] + iStack_6c;
  local_e8 = this_ptr[0x14] + local_68;
  iStack_e4 = this_ptr[0x15] + iStack_64;
  iStack_e0 = this_ptr[0x16] + iStack_60;
  iStack_dc = this_ptr[0x17] + iStack_5c;
  local_d8 = this_ptr[0x18] + local_58;
  local_d4 = this_ptr[0x19] + iStack_54;
  local_d0 = this_ptr[0x1a] + iStack_50;
  iStack_cc = this_ptr[0x1b] + iStack_4c;
  iStack_c8 = this_ptr[0x1c] + iStack_48;
  iStack_c4 = this_ptr[0x1d] + iStack_44;
  local_c0 = this_ptr[0x1e] + iStack_40;
  local_bc = this_ptr[0x1f] + uStack_3c;
  auVar18._4_4_ = iVar1;
  auVar18._0_4_ = iVar1;
  auVar18._8_4_ = this_ptr[0x11];
  auVar18._12_4_ = this_ptr[0x12];
  auVar11 = pblendw(ZEXT416((uint)this_ptr[0x1f]),auVar18,0xfc);
  auVar16._4_4_ = local_78;
  auVar16._0_4_ = local_78;
  auVar16._8_4_ = iStack_74;
  auVar16._12_4_ = iStack_70;
  auVar16 = pblendw(ZEXT416(uStack_3c),auVar16,0xfc);
  uVar5 = (this_ptr[0x13] - iStack_6c) + 0x1ffffffe;
  auVar7._0_4_ = (this_ptr[0x14] - local_68) + g_023fa9d0;
  auVar7._4_4_ = (this_ptr[0x15] - iStack_64) + _UNK_023fa9d4;
  auVar7._8_4_ = (this_ptr[0x16] - iStack_60) + _UNK_023fa9d8;
  auVar7._12_4_ = (this_ptr[0x17] - iStack_5c) + _UNK_023fa9dc;
  uVar2 = (this_ptr[0x19] - iStack_54) + 0x1ffffffe;
  auVar8._0_4_ = (this_ptr[0x1a] - iStack_50) + g_023fa9d0;
  auVar8._4_4_ = (this_ptr[0x1b] - iStack_4c) + _UNK_023fa9d4;
  auVar8._8_4_ = (this_ptr[0x1c] - iStack_48) + _UNK_023fa9d8;
  auVar8._12_4_ = (this_ptr[0x1d] - iStack_44) + _UNK_023fa9dc;
  uVar4 = (this_ptr[0x1e] - iStack_40) + 0x1ffffffe;
  uVar9 = (auVar11._0_4_ - auVar16._0_4_) + g_023fa9d0;
  uVar12 = (auVar11._4_4_ - auVar16._4_4_) + _UNK_023fa9d4;
  uVar13 = (auVar11._8_4_ - auVar16._8_4_) + _UNK_023fa9d8;
  uVar14 = (auVar11._12_4_ - auVar16._12_4_) + _UNK_023fa9dc;
  auVar11._0_8_ = CONCAT44(uVar13,uVar12);
  auVar11._8_4_ = uVar14;
  auVar11._12_4_ = uVar14;
  uVar10 = uVar9 >> 0x1c;
  uVar3 = uVar10 + (this_ptr[0x18] - local_58) + 0x1ffffffc;
  iStack_7c = (uVar4 >> 0x1c) + (uVar9 & 0xfffffff);
  iStack_80 = (auVar8._12_4_ >> 0x1c) + (uVar4 & 0xfffffff);
  auVar19._4_4_ = auVar8._0_4_;
  auVar19._0_4_ = auVar8._0_4_;
  auVar19._8_4_ = auVar8._4_4_;
  auVar19._12_4_ = auVar8._8_4_;
  auVar8 = auVar8 & g_023fa9b0;
  auVar16 = pblendw(auVar19,ZEXT416(uVar2),3);
  iStack_90 = (auVar16._0_4_ >> 0x1c) + auVar8._0_4_;
  iStack_8c = (auVar16._4_4_ >> 0x1c) + auVar8._4_4_;
  local_88 = (auVar16._8_4_ >> 0x1c) + auVar8._8_4_;
  iStack_84 = (auVar16._12_4_ >> 0x1c) + auVar8._12_4_;
  iStack_94 = (uVar3 >> 0x1c) + (uVar2 & 0xfffffff);
  local_98 = (auVar7._12_4_ >> 0x1c) + (uVar3 & 0xfffffff);
  auVar17._4_4_ = auVar7._0_4_;
  auVar17._0_4_ = auVar7._0_4_;
  auVar17._8_4_ = auVar7._4_4_;
  auVar17._12_4_ = auVar7._8_4_;
  auVar7 = auVar7 & g_023fa9b0;
  auVar8 = pblendw(auVar17,ZEXT416(uVar5),3);
  local_a8 = (auVar8._0_4_ >> 0x1c) + auVar7._0_4_;
  iStack_a4 = (auVar8._4_4_ >> 0x1c) + auVar7._4_4_;
  iStack_a0 = (auVar8._8_4_ >> 0x1c) + auVar7._8_4_;
  iStack_9c = (auVar8._12_4_ >> 0x1c) + auVar7._12_4_;
  auVar15._8_8_ = auVar11._8_8_ & 0xffffffff | (uint64_t)uVar5 << 0x20;
  auVar15._0_8_ = auVar11._0_8_;
  auVar15 = auVar15 & g_023fa9b0;
  local_b8 = auVar15._0_4_ + uVar10;
  iStack_b4 = auVar15._4_4_ + (uVar12 >> 0x1c);
  iStack_b0 = auVar15._8_4_ + (uVar13 >> 0x1c);
  iStack_ac = auVar15._12_4_ + (uVar14 >> 0x1c);
  FUN_00fd1300();
  local_78 = this_ptr[0x20] + *this_ptr;
  iStack_74 = this_ptr[0x21] + this_ptr[1];
  iStack_70 = this_ptr[0x22] + this_ptr[2];
  iStack_6c = this_ptr[0x23] + this_ptr[3];
  local_68 = this_ptr[0x24] + this_ptr[4];
  iStack_64 = this_ptr[0x25] + this_ptr[5];
  iStack_60 = this_ptr[0x26] + this_ptr[6];
  iStack_5c = this_ptr[0x27] + this_ptr[7];
  local_58 = this_ptr[0x28] + this_ptr[8];
  iStack_54 = this_ptr[0x29] + this_ptr[9];
  iStack_50 = this_ptr[0x2a] + this_ptr[10];
  iStack_4c = this_ptr[0x2b] + this_ptr[0xb];
  auVar7 = *(uint8_t (*) [16])(this_ptr + 0xc);
  iStack_48 = this_ptr[0x2c] + auVar7._0_4_;
  iStack_44 = this_ptr[0x2d] + auVar7._4_4_;
  iStack_40 = this_ptr[0x2e] + auVar7._8_4_;
  uStack_3c = this_ptr[0x2f] + auVar7._12_4_;
  uVar6 = _gf_mul(auVar7._0_8_,this_ptr + 0x10);
  uVar6 = _gf_mul(uVar6,&local_b8);
  uVar6 = _gf_mul(uVar6,&local_f8);
  if (param_2 == 0) {
    _gf_mul(uVar6,&local_f8);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

