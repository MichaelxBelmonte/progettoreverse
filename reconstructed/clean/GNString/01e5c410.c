// Function: FUN_01e5c410
// Address: 01e5c410
// Size: 563 bytes
// Class: GNString
// String references:
//   "frame"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e5c410(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  void*puVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int iVar6;
  float fVar7;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar9;
  float fVar11;
  uint64_t uVar10;
  uint32_t uVar12;
  float in_XMM0_Dc;
  uint32_t extraout_XMM0_Dc;
  float in_XMM0_Dd;
  uint32_t extraout_XMM0_Dd;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint32_t uVar17;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar18;
  uint8_t auVar19 [16];
  float fVar20;
  float fVar23;
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint64_t uStack_a0;
  uint64_t uStack_80;
  uint8_t local_58 [8];
  float fStack_50;
  float fStack_4c;
  uint8_t local_38 [8];
  float fStack_30;
  float fStack_2c;
  
  fVar15 = (float)((uint64_t)param_2 >> 0x20);
  fVar13 = (float)param_2;
  fVar11 = (float)((uint64_t)param_1 >> 0x20);
  fVar7 = (float)param_1;
  fStack_30 = in_XMM1_Dc;
  local_38 = (uint8_t  [8])param_2;
  fStack_2c = in_XMM1_Dd;
  fVar14 = fVar13;
  fVar20 = fVar15;
  fVar23 = in_XMM1_Dc;
  fVar18 = in_XMM1_Dd;
  uVar10 = FUN_01e5b880();
  fVar16 = (float)((uint64_t)uVar10 >> 0x20);
  auVar19._8_4_ = extraout_XMM0_Dc;
  auVar19._0_8_ = uVar10;
  auVar19._12_4_ = extraout_XMM0_Dd;
  local_58._0_4_ = fVar13;
  local_58._4_4_ = fVar15;
  fStack_50 = in_XMM1_Dc;
  fStack_4c = in_XMM1_Dd;
  if (fVar14 <= fVar13) {
    local_58._0_4_ = fVar14;
    local_58._4_4_ = fVar20;
    fStack_50 = fVar23;
    fStack_4c = fVar18;
  }
  auVar24._4_4_ = local_58._4_4_;
  auVar24._0_4_ = local_58._0_4_;
  auVar24._8_4_ = fStack_50;
  auVar24._12_4_ = fStack_4c;
  auVar25._4_4_ = fVar20;
  auVar25._0_4_ = fVar14;
  auVar25._8_4_ = fVar23;
  auVar25._12_4_ = fVar18;
  auVar25 = blendps(auVar24,auVar25,2);
  iVar6 = -(uint)(fVar15 < fVar20);
  auVar26._4_4_ = iVar6;
  auVar26._0_4_ = iVar6;
  auVar26._8_4_ = iVar6;
  auVar26._12_4_ = iVar6;
  auVar26 = blendvps(auVar25,_local_38,auVar26);
  fVar14 = (float)uVar10 + (float)local_58._0_4_ + g_02390d00;
  auVar3._8_4_ = in_XMM0_Dc;
  auVar3._0_8_ = param_1;
  auVar3._12_4_ = in_XMM0_Dd;
  auVar21._0_4_ = fVar13 + fVar7;
  auVar21._4_4_ = fVar15 + fVar11;
  auVar21._8_4_ = in_XMM1_Dc + in_XMM0_Dc;
  auVar21._12_4_ = in_XMM1_Dd + in_XMM0_Dd;
  if (g_02390d00 + auVar21._0_4_ < fVar14) {
    auVar19 = blendps(auVar19,ZEXT416((uint)((g_02390d00 + auVar21._0_4_) - (float)local_58._0_4_)
                                     ),1);
  }
  fVar18 = auVar26._4_4_;
  auVar1._4_4_ = fVar18 + auVar19._4_4_;
  auVar1._0_4_ = auVar26._0_4_ + auVar19._0_4_;
  auVar1._8_4_ = auVar26._8_4_ + auVar19._8_4_;
  auVar1._12_4_ = auVar26._12_4_ + auVar19._12_4_;
  auVar25 = insertps(auVar21,auVar1,0x4c);
  fVar20 = auVar25._0_4_ + g_023b5de0;
  fVar23 = auVar25._4_4_ + _UNK_023b5de4;
  auVar22 = auVar19;
  if (fVar23 < fVar20) {
    auVar22._0_4_ = fVar20 - auVar26._0_4_;
    auVar22._4_4_ = fVar23 - fVar18;
    auVar22._8_4_ = (auVar25._8_4_ + _UNK_023b5de8) - auVar26._8_4_;
    auVar22._12_4_ = (auVar25._12_4_ + _UNK_023b5dec) - auVar26._12_4_;
  }
  auVar25 = blendps(auVar22,auVar19,0xd);
  if (fVar7 <= auVar19._0_4_) {
    fVar7 = auVar25._0_4_;
  }
  iVar6 = -(uint)(auVar25._4_4_ < fVar11);
  auVar2._4_4_ = iVar6;
  auVar2._0_4_ = iVar6;
  auVar2._8_4_ = iVar6;
  auVar2._12_4_ = iVar6;
  auVar19 = blendvps(auVar25,auVar3,auVar2);
  uVar10 = FUN_01e5b880();
  puVar4 = PTR__objc_msgSend_024a9998;
  local_38._4_4_ = auVar19._4_4_;
  if ((((fVar7 != (float)uVar10) || (NAN(fVar7) || NAN((float)uVar10))) ||
      ((float)((uint64_t)uVar10 >> 0x20) != (float)local_38._4_4_)) ||
     ((((float)local_58._0_4_ != fVar14 || (NAN((float)local_58._0_4_) || NAN(fVar14))) ||
      (fVar16 != fVar18)))) {
    auVar19 = blendps(_local_58,auVar26,2);
    if (*(int64_t *)(this_ptr + 0xa0) != 0) {
      uVar8 = (*PTR__objc_msgSend_024a9998)();
      lVar5 = (*puVar4)(uVar8,0);
      puVar4 = PTR_s_frame_026ca200;
      if (lVar5 == 0) {
        uVar8 = 0;
        uVar17 = 0;
      }
      else {
        _objc_msgSend_stret(extraout_XMM0_Da,PTR_s_frame_026ca200);
        uVar8 = (uint32_t)uStack_a0;
        uVar17 = (uint32_t)((uint64_t)uStack_a0 >> 0x20);
      }
      lVar5 = (*PTR__objc_msgSend_024a9998)();
      if (lVar5 == 0) {
        uVar9 = 0;
        uVar12 = 0;
      }
      else {
        _objc_msgSend_stret(extraout_XMM0_Da_00,puVar4);
        uVar9 = (uint32_t)uStack_80;
        uVar12 = (uint32_t)((uint64_t)uStack_80 >> 0x20);
      }
      (*PTR__objc_msgSend_024a9998)
                (SUB84((double)fVar7,0),
                 SUB84(((double)CONCAT44(uVar17,uVar8) - (double)(float)local_38._4_4_) -
                       (double)CONCAT44(uVar12,uVar9),0));
    }
    FUN_01e5a130(auVar19._0_4_);
  }
  return;
}

