// Function: FUN_01f57b80
// Address: 01f57b80
// Size: 1312 bytes
// Class: Unknown
// String references:
//   "bounds"

void FUN_01f57b80(uint param_1,int64_t param_2,char param_3)

{
  void*puVar1;
  char cVar2;
  uint32_t uVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t extraout_XMM0_Qa_01;
  uint8_t auVar7 [16];
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint8_t auVar8 [16];
  int64_t local_c8;
  char local_c0;
  int64_t local_90;
  char local_88;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  uint64_t uStack_50;
  uint64_t local_48;
  double dStack_40;
  
  plVar5 = (int64_t *)*arg1;
  if (plVar5[5] == 0) {
    _objc_alloc();
    FUN_01f25900();
    puVar1 = PTR__objc_msgSend_024a9998;
    lVar4 = (*PTR__objc_msgSend_024a9998)();
    this_ptr[0xb] = lVar4;
    (*puVar1)(param_1 ^ 1,(param_1 ^ 1) & 0xff);
    plVar5 = (int64_t *)*arg1;
  }
  (**(code **)(*plVar5 + 0x368))();
  FUN_01f26e70();
  uVar6 = (*PTR__objc_msgSend_024a9998)(local_48,SUB84(dStack_40,0));
  if ((char)param_1 != '\0') {
    plVar5 = (int64_t *)*arg1;
    if (param_2 == 0) {
      local_48 = 0;
      dStack_40 = 0.0;
      local_58 = 0;
      uStack_50 = 0;
    }
    else {
      _objc_msgSend_stret(uVar6,PTR_s_bounds_026ca300);
    }
    auVar7._0_4_ = (float)dStack_40;
    auVar7._4_4_ = (int)((uint64_t)dStack_40 >> 0x20);
    auVar7._8_8_ = 0;
    auVar7 = insertps(auVar7,auVar7,0x1d);
    (**(code **)(*plVar5 + 0x368))(auVar7._0_8_);
    (**(code **)(*(int64_t *)*arg1 + 0x380))();
  }
  puVar1 = PTR__objc_msgSend_024a9998;
  (*PTR__objc_msgSend_024a9998)();
  uVar6 = (*puVar1)();
  if (param_2 != 0) {
    _objc_msgSend_stret(uVar6,PTR_s_bounds_026ca300);
  }
  (*puVar1)();
  (*puVar1)();
  (*puVar1)();
  if (param_3 != '\0') {
    uVar6 = (*puVar1)();
    cVar2 = (*puVar1)(extraout_XMM0_Qa,uVar6);
    if (cVar2 != '\0') {
      if (param_2 != 0) {
        _objc_msgSend_stret(extraout_XMM0_Qa_00,PTR_s_bounds_026ca300);
      }
      FUN_01f26e60();
      (**(code **)(*this_ptr + 0x508))();
    }
  }
  if ((char)param_1 != '\0') {
    uVar6 = (**(code **)(*(int64_t *)*arg1 + 0x380))();
    plVar5 = (int64_t *)*arg1;
    if (param_2 == 0) {
      local_48 = 0;
      dStack_40 = 0.0;
      local_58 = 0;
      uStack_50 = 0;
    }
    else {
      _objc_msgSend_stret(uVar6,PTR_s_bounds_026ca300);
    }
    auVar8._0_4_ = (uint)(float)dStack_40 ^ g_023945e0;
    auVar8._4_4_ = (uint)((uint64_t)dStack_40 >> 0x20) ^ _UNK_023945e4;
    auVar8._8_4_ = _UNK_023945e8;
    auVar8._12_4_ = _UNK_023945ec;
    auVar7 = insertps(auVar8,auVar8,0x1d);
    (**(code **)(*plVar5 + 0x368))(auVar7._0_8_);
  }
  (**(code **)(*(int64_t *)*arg1 + 0x368))();
  if (*(int64_t *)(*arg1 + 0x28) == 0) {
    (*puVar1)();
    (*puVar1)();
    plVar5 = (int64_t *)*arg1;
    (*puVar1)();
    uVar3 = (*puVar1)();
    FUN_00c8e2b0(extraout_XMM0_Qa_01,uVar3);
    lVar4 = local_58;
    if (((char)uStack_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
      if (((char)uStack_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    uVar6 = FUN_01ea09a0();
    local_68 = local_58;
    local_60 = 0;
    if ((char)uStack_50 == '\0') {
      if (local_58 != 0) {
        uVar6 = FUN_00d50b00();
      }
    }
    else {
      uStack_50 = uStack_50 & 0xffffffffffffff00;
    }
    local_60 = '\x01';
    uVar6 = FUN_01ea2ce0(uVar6,&local_68);
    FUN_01ea35c0(uVar6,0);
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    (**(code **)(*plVar5 + 0x400))();
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (((char)uStack_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    (*PTR__objc_release_024a99a0)();
    this_ptr[0xb] = 0;
  }
  return;
}

