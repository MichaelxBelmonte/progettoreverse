// Function: FUN_01cf85d0
// Address: 01cf85d0
// Size: 618 bytes
// Class: GNClipView
// === GNClipView properties ===
//   GNClipViewBorderType _rightBorderType
//   GNClipViewBorderType _bottomBorderType
//   GNClipViewBorderType _leftBorderType
//   GNClipViewBorderType _topBorderType
//                   _knobProportion
//                   _increaseButtonPressed
//                   _decreaseButtonPressed
//                   _column


void FUN_01cf85d0(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  char cVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  uint64_t in_XMM0_Qb;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  float fVar7;
  uint64_t uVar8;
  float fVar9;
  uint64_t in_XMM1_Qb;
  uint64_t uVar10;
  uint8_t auVar11 [16];
  float fVar13;
  uint8_t auVar12 [16];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  uint uStack_4c;
  uint8_t local_28 [16];
  
  if (this_ptr[0x27] == 0) {
    local_28._0_8_ = 0;
  }
  else {
    uVar10 = *(void*)(this_ptr[0x27] + 0x10c);
    param_2 = CONCAT44(0.0 - (float)((uint64_t)uVar10 >> 0x20),0.0 - (float)uVar10);
    in_XMM1_Qb = 0;
    local_28._0_8_ = param_2;
  }
  local_28._8_8_ = 0;
  FUN_01e3f820();
  uVar8 = param_2;
  uVar10 = in_XMM1_Qb;
  (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d8))();
  cVar3 = FUN_00d05410();
  local_68 = (float)param_2;
  fStack_64 = (float)(param_2 >> 0x20);
  fStack_60 = (float)in_XMM1_Qb;
  fStack_5c = (float)((uint64_t)in_XMM1_Qb >> 0x20);
  fVar13 = 0.0;
  auVar5 = ZEXT816(0);
  if (cVar3 == '\0') {
    local_58 = (float)param_1;
    fStack_54 = (float)((uint64_t)param_1 >> 0x20);
    uStack_4c = (uint)((uint64_t)in_XMM0_Qb >> 0x20);
    fVar13 = (float)(-(uint)(local_58 < 0.0) & (uint)local_58 |
                    ~-(uint)(local_58 < 0.0) &
                    -(uint)(local_68 < local_58) & (uint)(local_58 - local_68));
    auVar11._0_4_ =
         ~-(uint)(fStack_54 < 0.0) & -(uint)(fStack_64 < fStack_54) & (uint)(fStack_54 - fStack_64);
    auVar11._4_4_ = ~(uint)fStack_54 & (uint)fStack_64 & (uint)fStack_54;
    auVar11._8_4_ = ~uStack_4c & (uint)fStack_5c & uStack_4c;
    auVar11._12_4_ = ~uStack_4c & (uint)fStack_5c & uStack_4c;
    auVar5._0_4_ = -(uint)(fStack_54 < 0.0) & (uint)fStack_54;
    auVar5._4_4_ = fStack_54;
    auVar5._8_4_ = uStack_4c;
    auVar5._12_4_ = uStack_4c;
    auVar5 = auVar5 | auVar11;
  }
  local_88 = (float)uVar8;
  fStack_84 = (float)(uVar8 >> 0x20);
  fStack_80 = (float)uVar10;
  fStack_7c = (float)((uint64_t)uVar10 >> 0x20);
  local_88 = local_88 - local_68;
  fStack_84 = fStack_84 - fStack_64;
  if (local_88 < (float)local_28._0_8_ + fVar13) {
    auVar2._4_4_ = fStack_84;
    auVar2._0_4_ = local_88;
    auVar2._8_4_ = fStack_80 - fStack_60;
    auVar2._12_4_ = fStack_7c - fStack_5c;
    auVar12 = blendps(local_28,auVar2,0xd);
    fVar13 = auVar12._0_4_;
  }
  else {
    auVar12._0_4_ = (float)local_28._0_8_ + fVar13;
    auVar12._4_4_ = (int)((uint64_t)local_28._0_8_ >> 0x20);
    auVar12._8_8_ = 0;
    fVar13 = auVar12._0_4_;
  }
  if (fVar13 < 0.0) {
    auVar12 = blendps(auVar12,ZEXT816(0),1);
  }
  auVar6._4_12_ = auVar5._4_12_;
  auVar6._0_4_ = auVar5._0_4_ + auVar12._4_4_;
  if (fStack_84 < auVar6._0_4_) {
    auVar1._4_4_ = fStack_84;
    auVar1._0_4_ = local_88;
    auVar1._8_4_ = fStack_80 - fStack_60;
    auVar1._12_4_ = fStack_7c - fStack_5c;
    auVar5 = blendps(auVar12,auVar1,2);
    uVar10 = auVar5._0_8_;
    fVar13 = auVar5._4_4_;
  }
  else {
    auVar5 = insertps(auVar12,auVar6,0x10);
    uVar10 = auVar5._0_8_;
    fVar13 = auVar5._4_4_;
  }
  if (fVar13 < 0.0) {
    auVar5 = blendps(auVar5,ZEXT816(0),2);
    uVar10 = auVar5._0_8_;
  }
  if (cVar3 != '\0') {
    return;
  }
  plVar4 = (int64_t *)this_ptr[0x27];
  fVar13 = (float)uVar10;
  if (plVar4 == (int64_t *)0x0) {
joined_r0x01cf87a2:
    if (fVar13 == 0.0) {
      fVar9 = 0.0;
      plVar4 = (int64_t *)0x0;
      if (!NAN(fVar13)) goto LAB_01cf87b8;
    }
  }
  else {
    FUN_00d50b00();
    (**(code **)(*plVar4 + 0x830))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    plVar4 = (int64_t *)this_ptr[0x27];
    if (plVar4 == (int64_t *)0x0) goto joined_r0x01cf87a2;
    fVar7 = 0.0 - (float)*(void*)((int64_t)plVar4 + 0x10c);
    fVar9 = 0.0 - (float)((uint64_t)*(void*)((int64_t)plVar4 + 0x10c) >> 0x20);
    if ((fVar13 == fVar7) && (!NAN(fVar13) && !NAN(fVar7))) {
LAB_01cf87b8:
      if (fVar9 == (float)((uint64_t)uVar10 >> 0x20)) goto joined_r0x01cf87f7;
    }
  }
  FUN_01cf5d20();
  FUN_01cf5a00();
  (**(code **)(*this_ptr + 0x620))();
  plVar4 = (int64_t *)this_ptr[0x27];
joined_r0x01cf87f7:
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar4 + 0x838))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

