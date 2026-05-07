// Function: FUN_01e5c1a0
// Address: 01e5c1a0
// Size: 533 bytes
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


void FUN_01e5c1a0(uint64_t param_1,uint64_t param_2)

{
  void*puVar1;
  int64_t lVar2;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint8_t auVar5 [16];
  uint64_t uVar6;
  uint64_t in_XMM1_Qb;
  uint64_t uVar7;
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  float fVar12;
  double dStack_b0;
  double dStack_90;
  float local_88;
  float fStack_84;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  int64_t local_40;
  char local_38;
  
  if (*arg1 != 0) {
    uVar3 = FUN_01e5b880();
    uVar6 = param_2;
    uVar7 = in_XMM1_Qb;
    FUN_01e5b880();
    if (*(int64_t *)(*arg1 + 0x18) == 0) {
      FUN_01f50d20();
    }
    else {
      FUN_01d907a0();
    }
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (*(int64_t *)(this_ptr + 0xa0) != 0) {
      uVar4 = (*PTR__objc_msgSend_024a9998)();
      lVar2 = (*PTR__objc_msgSend_024a9998)(uVar4,0);
      puVar1 = PTR_s_frame_026ca200;
      if (lVar2 == 0) {
        dStack_b0 = 0.0;
      }
      else {
        _objc_msgSend_stret(extraout_XMM0_Qa,PTR_s_frame_026ca200);
      }
      lVar2 = (*PTR__objc_msgSend_024a9998)();
      if (lVar2 == 0) {
        dStack_90 = 0.0;
      }
      else {
        _objc_msgSend_stret(extraout_XMM0_Qa_00,puVar1);
      }
      local_78 = (float)param_2;
      fStack_74 = (float)((uint64_t)param_2 >> 0x20);
      fStack_70 = (float)in_XMM1_Qb;
      fStack_6c = (float)((uint64_t)in_XMM1_Qb >> 0x20);
      local_68 = (float)uVar6;
      fStack_64 = (float)((uint64_t)uVar6 >> 0x20);
      fStack_60 = (float)uVar7;
      fStack_5c = (float)((uint64_t)uVar7 >> 0x20);
      fStack_74 = fStack_74 - fStack_64;
      fStack_6c = fStack_6c - fStack_5c;
      fVar12 = (local_78 - local_68) * g_0239011c;
      auVar10._0_4_ = (uint)fVar12 & g_023945e0;
      auVar10._4_4_ = (uint)fStack_74 & _UNK_023945e4;
      auVar10._8_4_ = (uint)(fStack_70 - fStack_60) & _UNK_023945e8;
      auVar10._12_4_ = (uint)fStack_6c & _UNK_023945ec;
      auVar9._0_4_ = g_023945e0 & (uint)(fStack_74 / g_02394298);
      auVar9._4_4_ = _UNK_023945e4 & (uint)fStack_74;
      auVar9._8_4_ = _UNK_023945e8 & (uint)fStack_6c;
      auVar9._12_4_ = _UNK_023945ec & (uint)fStack_6c;
      auVar11._4_12_ = SUB1612(auVar10 | ZEXT416(g_02394dc8),4);
      auVar11._0_4_ = SUB164(auVar10 | ZEXT416(g_02394dc8),0) + fVar12;
      auVar8._4_12_ = SUB1612(auVar9 | ZEXT416(g_02394dc8),4);
      auVar8._0_4_ = SUB164(auVar9 | ZEXT416(g_02394dc8),0) + fStack_74 / g_02394298;
      auVar5._0_12_ = ZEXT812(0);
      auVar5._12_4_ = 0;
      auVar5 = roundss(auVar5,auVar11,0xb);
      local_88 = (float)uVar3;
      fStack_84 = (float)((uint64_t)uVar3 >> 0x20);
      auVar9 = roundss(auVar8,auVar8,0xb);
      (*PTR__objc_msgSend_024a9998)
                ((double)(auVar5._0_4_ + local_88),
                 (dStack_b0 - (double)(auVar9._0_4_ + fStack_84)) - dStack_90);
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    return;
  }
  FUN_01e5bfa0();
  return;
}

