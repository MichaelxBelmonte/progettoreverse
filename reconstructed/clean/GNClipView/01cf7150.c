// Function: FUN_01cf7150
// Address: 01cf7150
// Size: 622 bytes
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


void FUN_01cf7150(uint64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  float fVar3;
  uint32_t uVar4;
  uint32_t extraout_XMM0_Dc;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  float local_98;
  float fStack_94;
  float fStack_8c;
  int64_t *local_88;
  char local_80;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint8_t local_58 [16];
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x7b8))();
  if (local_40 != (int64_t *)0x0) {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    (**(code **)(*(int64_t *)this_ptr[0x27] + 0x828))();
    if (this_ptr[0x27] == 0) {
      local_58._0_8_ = 0;
    }
    else {
      uVar1 = *(void*)(this_ptr[0x27] + 0x10c);
      param_2 = CONCAT44(0.0 - (float)((uint64_t)uVar1 >> 0x20),0.0 - (float)uVar1);
      in_XMM1_Qb = 0;
      local_58._0_8_ = param_2;
    }
    local_58._8_8_ = 0;
    FUN_01e3f820();
    local_68 = (float)param_2;
    fStack_64 = (float)(param_2 >> 0x20);
    fStack_60 = (float)in_XMM1_Qb;
    fStack_5c = (float)((uint64_t)in_XMM1_Qb >> 0x20);
    (**(code **)(*this_ptr + 0x4d8))();
    FUN_01d97e80();
    plVar2 = (int64_t *)*arg1;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == local_40) {
      local_98 = (float)param_2;
      if (local_68 - local_98 <= 0.0) {
        local_58 = blendps(local_58,ZEXT816(0),0xd);
      }
      else {
        fVar3 = (float)(**(code **)(*(int64_t *)*arg1 + 0x930))();
        auVar8._0_4_ = (float)(int)((local_68 - local_98) * fVar3);
        auVar8._4_4_ = (float)(int)fStack_64;
        auVar8._8_4_ = (float)(int)fStack_60;
        auVar8._12_4_ = (float)(int)fStack_5c;
        local_58 = blendps(local_58,auVar8,1);
      }
    }
    FUN_01d97ec0();
    plVar2 = (int64_t *)*arg1;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == local_40) {
      fStack_94 = (float)(param_2 >> 0x20);
      fStack_8c = (float)((uint64_t)in_XMM1_Qb >> 0x20);
      fStack_64 = fStack_64 - fStack_94;
      if (fStack_64 <= 0.0) {
        local_58 = blendps(local_58,ZEXT816(0),2);
      }
      else {
        fVar3 = (float)(**(code **)(*(int64_t *)*arg1 + 0x930))();
        auVar5._0_4_ = (float)(int)(fStack_64 * fVar3);
        auVar5._4_4_ = (float)(int)fStack_64;
        auVar5._8_4_ = (float)(int)(fStack_5c - fStack_8c);
        auVar5._12_4_ = (float)(int)(fStack_5c - fStack_8c);
        local_58 = insertps(local_58,auVar5,0x10);
      }
    }
    FUN_01e42030();
    (**(code **)(*local_88 + 0x9a0))();
    uVar4 = (**(code **)(*local_40 + 0x448))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar7._4_4_ = uVar4;
    auVar7._0_4_ = uVar4;
    auVar7._8_4_ = extraout_XMM0_Dc;
    auVar7._12_4_ = extraout_XMM0_Dc;
    auVar8 = divps(local_58,auVar7);
    auVar6._0_4_ = (float)(g_023945e0 & (uint)auVar8._0_4_ | g_023945f0) + auVar8._0_4_;
    auVar6._4_4_ = (float)(_UNK_023945e4 & (uint)auVar8._4_4_ | _UNK_023945f4) + auVar8._4_4_;
    auVar6._8_4_ = (float)(_UNK_023945e8 & (uint)auVar8._8_4_ | _UNK_023945f8) + auVar8._8_4_;
    auVar6._12_4_ = (float)(_UNK_023945ec & (uint)auVar8._12_4_ | _UNK_023945fc) + auVar8._12_4_;
    roundps(auVar6,auVar6,0xb);
    FUN_01cf5ff0();
    FUN_00d50b20();
  }
  return;
}

