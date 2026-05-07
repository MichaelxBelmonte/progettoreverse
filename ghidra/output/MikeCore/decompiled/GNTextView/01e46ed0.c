// Function: FUN_01e46ed0
// Address: 01e46ed0
// Size: 778 bytes
// Class: GNTextView
// String references:
//   "convertRectToScreen:"
//   "frame"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e46ed0(undefined8 param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  longlong *unaff_RDI;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined8 local_78;
  float fStack_70;
  float fStack_6c;
  longlong local_68;
  char local_60;
  undefined7 uStack_5f;
  double local_50;
  undefined1 local_48 [8];
  undefined8 uStack_40;
  
  uStack_40 = in_XMM0_Qb;
  local_48 = (undefined1  [8])param_1;
  plVar3 = (longlong *)unaff_RDI[6];
  plVar7 = unaff_RDI;
  while (plVar1 = plVar3, plVar1 != (longlong *)0x0) {
    plVar3 = (longlong *)plVar1[6];
    plVar7 = plVar1;
    if ((longlong *)plVar1[6] == plVar1) {
      plVar3 = plVar1;
    }
  }
  cVar4 = (**(code **)(*plVar7 + 0x4b8))();
  if (cVar4 == '\0') {
    plVar7 = (longlong *)0x0;
  }
  else {
    FUN_00d50b00();
    FUN_01d8c6e0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_01d8c6e0();
      FUN_01e49300();
      FUN_01e5eed0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01e471b2;
    }
  }
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  while ((plVar3 = unaff_RDI, plVar3 != (longlong *)0x0 &&
         (cVar5 = (**(code **)(*plVar3 + 0x4b8))(), cVar5 == '\0'))) {
    uVar8 = (**(code **)(*plVar3 + 0x4d8))();
    uVar9 = (**(code **)(*plVar3 + 0x4d8))();
    local_78._0_4_ = (float)uVar8;
    local_78._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
    fStack_70 = (float)extraout_XMM0_Qb;
    fStack_6c = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
    auVar10._0_4_ = (float)uVar9 + (float)local_48._0_4_;
    auVar10._4_4_ = (float)((ulonglong)uVar9 >> 0x20) + (float)local_48._4_4_;
    auVar10._8_4_ = (float)extraout_XMM0_Qb_00 + (float)uStack_40;
    auVar10._12_4_ = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20) + uStack_40._4_4_;
    auVar11._4_4_ = local_78._4_4_ + (float)local_48._4_4_;
    auVar11._0_4_ = (float)local_78 + (float)local_48._0_4_;
    auVar11._8_4_ = fStack_70 + (float)uStack_40;
    auVar11._12_4_ = fStack_6c + uStack_40._4_4_;
    _local_48 = blendps(auVar10,auVar11,0xd);
    unaff_RDI = (longlong *)plVar3[6];
    if ((longlong *)plVar3[6] == plVar3) {
      unaff_RDI = plVar3;
    }
  }
  puVar2 = PTR_s_frame_026ca200;
  if (*(longlong *)plVar7[0x38] == 0) {
    fVar12 = 0.0;
  }
  else {
    _objc_msgSend_stret();
    fVar12 = (float)local_50;
  }
  auVar11 = insertps(_local_48,ZEXT416((uint)(fVar12 - (float)local_48._4_4_)),0x10);
  uVar8 = FUN_01f26e50(auVar11._0_8_);
  (*(code *)PTR__objc_msgSend_024a9998)(uVar8,0);
  lVar6 = (*(code *)PTR__objc_msgSend_024a9998)();
  if (lVar6 == 0) {
    local_78 = 0.0;
    local_48 = (undefined1  [8])0x0;
  }
  else {
    _objc_msgSend_stret();
    local_48 = (undefined1  [8])local_68;
    local_78 = (double)CONCAT71(uStack_5f,local_60);
  }
  uVar8 = (*(code *)PTR__objc_msgSend_024a9998)();
  lVar6 = (*(code *)PTR__objc_msgSend_024a9998)(uVar8,0);
  if (lVar6 == 0) {
    local_50 = 0.0;
  }
  else {
    _objc_msgSend_stret(extraout_XMM0_Qa,puVar2);
  }
  (*(code *)PTR__objc_release_024a99a0)();
  FUN_01f1bd80(local_48,SUB84(local_50 - local_78,0));
LAB_01e471b2:
  if ((cVar4 == '\x01') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


