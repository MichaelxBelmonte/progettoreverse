// Function: FUN_01f57b80
// Address: 01f57b80
// Size: 1312 bytes
// Class: Unknown
// String references:
//   "bounds"


/* WARNING: Removing unreachable block (ram,0x01f57e03) */
/* WARNING: Removing unreachable block (ram,0x01f57e0f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f57b80(uint param_1,longlong param_2,char param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar7 [16];
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar8 [16];
  longlong local_c8;
  char local_c0;
  longlong local_90;
  char local_88;
  longlong local_68;
  char local_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  double dStack_40;
  
  plVar5 = (longlong *)*unaff_RSI;
  if (plVar5[5] == 0) {
    _objc_alloc();
    FUN_01f25900();
    puVar1 = PTR__objc_msgSend_024a9998;
    lVar4 = (*(code *)PTR__objc_msgSend_024a9998)();
    unaff_RDI[0xb] = lVar4;
    (*(code *)puVar1)(param_1 ^ 1,(param_1 ^ 1) & 0xff);
    plVar5 = (longlong *)*unaff_RSI;
  }
  (**(code **)(*plVar5 + 0x368))();
  FUN_01f26e70();
  uVar6 = (*(code *)PTR__objc_msgSend_024a9998)(local_48,SUB84(dStack_40,0));
  if ((char)param_1 != '\0') {
    plVar5 = (longlong *)*unaff_RSI;
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
    auVar7._4_4_ = (int)((ulonglong)dStack_40 >> 0x20);
    auVar7._8_8_ = 0;
    auVar7 = insertps(auVar7,auVar7,0x1d);
    (**(code **)(*plVar5 + 0x368))(auVar7._0_8_);
    (**(code **)(*(longlong *)*unaff_RSI + 0x380))();
  }
  puVar1 = PTR__objc_msgSend_024a9998;
  (*(code *)PTR__objc_msgSend_024a9998)();
  uVar6 = (*(code *)puVar1)();
  if (param_2 != 0) {
    _objc_msgSend_stret(uVar6,PTR_s_bounds_026ca300);
  }
  (*(code *)puVar1)();
  (*(code *)puVar1)();
  (*(code *)puVar1)();
  if (param_3 != '\0') {
    uVar6 = (*(code *)puVar1)();
    cVar2 = (*(code *)puVar1)(extraout_XMM0_Qa,uVar6);
    if (cVar2 != '\0') {
      if (param_2 != 0) {
        _objc_msgSend_stret(extraout_XMM0_Qa_00,PTR_s_bounds_026ca300);
      }
      FUN_01f26e60();
      (**(code **)(*unaff_RDI + 0x508))();
    }
  }
  if ((char)param_1 != '\0') {
    uVar6 = (**(code **)(*(longlong *)*unaff_RSI + 0x380))();
    plVar5 = (longlong *)*unaff_RSI;
    if (param_2 == 0) {
      local_48 = 0;
      dStack_40 = 0.0;
      local_58 = 0;
      uStack_50 = 0;
    }
    else {
      _objc_msgSend_stret(uVar6,PTR_s_bounds_026ca300);
    }
    auVar8._0_4_ = (uint)(float)dStack_40 ^ _DAT_023945e0;
    auVar8._4_4_ = (uint)((ulonglong)dStack_40 >> 0x20) ^ _UNK_023945e4;
    auVar8._8_4_ = _UNK_023945e8;
    auVar8._12_4_ = _UNK_023945ec;
    auVar7 = insertps(auVar8,auVar8,0x1d);
    (**(code **)(*plVar5 + 0x368))(auVar7._0_8_);
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
  if (*(longlong *)(*unaff_RSI + 0x28) == 0) {
    (*(code *)puVar1)();
    (*(code *)puVar1)();
    plVar5 = (longlong *)*unaff_RSI;
    (*(code *)puVar1)();
    uVar3 = (*(code *)puVar1)();
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
    (*(code *)PTR__objc_release_024a99a0)();
    unaff_RDI[0xb] = 0;
  }
  return;
}


