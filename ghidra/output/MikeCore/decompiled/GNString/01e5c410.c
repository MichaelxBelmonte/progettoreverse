// Function: FUN_01e5c410
// Address: 01e5c410
// Size: 563 bytes
// Class: GNString
// String references:
//   "frame"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e5c410(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  longlong lVar5;
  longlong unaff_RDI;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar9;
  float fVar11;
  undefined8 uVar10;
  undefined4 uVar12;
  float in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  float in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_a0;
  undefined8 uStack_80;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  
  fVar15 = (float)((ulonglong)param_2 >> 0x20);
  fVar13 = (float)param_2;
  fVar11 = (float)((ulonglong)param_1 >> 0x20);
  fVar7 = (float)param_1;
  fStack_30 = in_XMM1_Dc;
  local_38 = (undefined1  [8])param_2;
  fStack_2c = in_XMM1_Dd;
  fVar14 = fVar13;
  fVar20 = fVar15;
  fVar23 = in_XMM1_Dc;
  fVar18 = in_XMM1_Dd;
  uVar10 = FUN_01e5b880();
  fVar16 = (float)((ulonglong)uVar10 >> 0x20);
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
  fVar14 = (float)uVar10 + (float)local_58._0_4_ + DAT_02390d00;
  auVar3._8_4_ = in_XMM0_Dc;
  auVar3._0_8_ = param_1;
  auVar3._12_4_ = in_XMM0_Dd;
  auVar21._0_4_ = fVar13 + fVar7;
  auVar21._4_4_ = fVar15 + fVar11;
  auVar21._8_4_ = in_XMM1_Dc + in_XMM0_Dc;
  auVar21._12_4_ = in_XMM1_Dd + in_XMM0_Dd;
  if (DAT_02390d00 + auVar21._0_4_ < fVar14) {
    auVar19 = blendps(auVar19,ZEXT416((uint)((DAT_02390d00 + auVar21._0_4_) - (float)local_58._0_4_)
                                     ),1);
  }
  fVar18 = auVar26._4_4_;
  auVar1._4_4_ = fVar18 + auVar19._4_4_;
  auVar1._0_4_ = auVar26._0_4_ + auVar19._0_4_;
  auVar1._8_4_ = auVar26._8_4_ + auVar19._8_4_;
  auVar1._12_4_ = auVar26._12_4_ + auVar19._12_4_;
  auVar25 = insertps(auVar21,auVar1,0x4c);
  fVar20 = auVar25._0_4_ + _DAT_023b5de0;
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
      ((float)((ulonglong)uVar10 >> 0x20) != (float)local_38._4_4_)) ||
     ((((float)local_58._0_4_ != fVar14 || (NAN((float)local_58._0_4_) || NAN(fVar14))) ||
      (fVar16 != fVar18)))) {
    auVar19 = blendps(_local_58,auVar26,2);
    if (*(longlong *)(unaff_RDI + 0xa0) != 0) {
      uVar8 = (*(code *)PTR__objc_msgSend_024a9998)();
      lVar5 = (*(code *)puVar4)(uVar8,0);
      puVar4 = PTR_s_frame_026ca200;
      if (lVar5 == 0) {
        uVar8 = 0;
        uVar17 = 0;
      }
      else {
        _objc_msgSend_stret(extraout_XMM0_Da,PTR_s_frame_026ca200);
        uVar8 = (undefined4)uStack_a0;
        uVar17 = (undefined4)((ulonglong)uStack_a0 >> 0x20);
      }
      lVar5 = (*(code *)PTR__objc_msgSend_024a9998)();
      if (lVar5 == 0) {
        uVar9 = 0;
        uVar12 = 0;
      }
      else {
        _objc_msgSend_stret(extraout_XMM0_Da_00,puVar4);
        uVar9 = (undefined4)uStack_80;
        uVar12 = (undefined4)((ulonglong)uStack_80 >> 0x20);
      }
      (*(code *)PTR__objc_msgSend_024a9998)
                (SUB84((double)fVar7,0),
                 SUB84(((double)CONCAT44(uVar17,uVar8) - (double)(float)local_38._4_4_) -
                       (double)CONCAT44(uVar12,uVar9),0));
    }
    FUN_01e5a130(auVar19._0_4_);
  }
  return;
}


