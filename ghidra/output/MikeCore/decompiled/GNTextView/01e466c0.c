// Function: FUN_01e466c0
// Address: 01e466c0
// Size: 738 bytes
// Class: GNTextView
// String references:
//   "convertRectFromScreen:"
//   "frame"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e466c0(undefined8 param_1)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  longlong *plVar3;
  undefined *puVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  longlong lVar8;
  longlong *unaff_RDI;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar10;
  undefined8 in_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 in_XMM2 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float local_78;
  float fStack_74;
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
  plVar5 = (longlong *)unaff_RDI[6];
  plVar3 = unaff_RDI;
  while (plVar2 = plVar5, plVar2 != (longlong *)0x0) {
    plVar5 = (longlong *)plVar2[6];
    plVar3 = plVar2;
    if ((longlong *)plVar2[6] == plVar2) {
      plVar5 = plVar2;
    }
  }
  cVar6 = (**(code **)(*plVar3 + 0x4b8))();
  if (cVar6 != '\0') {
    FUN_00d50b00();
    FUN_01d8c6e0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 == 0) {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_024a9998)();
      uVar9 = (*(code *)PTR__objc_msgSend_024a9998)();
      lVar8 = (*(code *)PTR__objc_msgSend_024a9998)(uVar9,0);
      puVar4 = PTR_s_frame_026ca200;
      if (lVar8 == 0) {
        auVar11 = ZEXT816(0);
      }
      else {
        _objc_msgSend_stret(extraout_XMM0_Qa,PTR_s_frame_026ca200);
        auVar11._4_12_ = in_XMM2._4_12_;
        auVar11._0_4_ = (float)local_50;
      }
      auVar16._4_12_ = auVar11._4_12_;
      auVar16._0_4_ = auVar11._0_4_ - (float)((ulonglong)param_1 >> 0x20);
      auVar11 = insertps(_local_48,auVar16,0x10);
      FUN_01f26e50(auVar11._0_8_);
      lVar8 = (*(code *)PTR__objc_msgSend_024a9998)();
      if (lVar8 == 0) {
        uVar12 = 0;
        uVar14 = 0;
      }
      else {
        _objc_msgSend_stret();
        uVar12 = (undefined4)CONCAT71(uStack_5f,local_60);
        uVar14 = (undefined4)((uint7)uStack_5f >> 0x18);
      }
      uVar9 = (*(code *)PTR__objc_msgSend_024a9998)();
      if (*(longlong *)plVar3[0x38] == 0) {
        uVar13 = 0;
        uVar15 = 0;
      }
      else {
        _objc_msgSend_stret(uVar9,puVar4);
        uVar13 = SUB84(local_50,0);
        uVar15 = (undefined4)((ulonglong)local_50 >> 0x20);
      }
      local_48 = (undefined1  [8])
                 FUN_01f1bd80(uVar9,SUB84((double)CONCAT44(uVar15,uVar13) -
                                          (double)CONCAT44(uVar14,uVar12),0));
      uStack_40 = extraout_XMM0_Qb;
      while ((plVar5 = unaff_RDI, plVar5 != (longlong *)0x0 &&
             (cVar7 = (**(code **)(*plVar5 + 0x4b8))(), cVar7 == '\0'))) {
        uVar9 = (**(code **)(*plVar5 + 0x4d8))();
        uVar10 = (**(code **)(*plVar5 + 0x4d8))();
        local_78 = (float)uVar9;
        fStack_74 = (float)((ulonglong)uVar9 >> 0x20);
        fStack_70 = (float)extraout_XMM0_Qb_00;
        fStack_6c = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
        auVar17._0_4_ = (float)local_48._0_4_ - (float)uVar10;
        auVar17._4_4_ = (float)local_48._4_4_ - (float)((ulonglong)uVar10 >> 0x20);
        auVar17._8_4_ = (float)uStack_40 - (float)extraout_XMM0_Qb_01;
        auVar17._12_4_ = uStack_40._4_4_ - (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
        auVar1._4_4_ = (float)local_48._4_4_ - fStack_74;
        auVar1._0_4_ = (float)local_48._0_4_ - local_78;
        auVar1._8_4_ = (float)uStack_40 - fStack_70;
        auVar1._12_4_ = uStack_40._4_4_ - fStack_6c;
        _local_48 = blendps(auVar17,auVar1,0xd);
        unaff_RDI = (longlong *)plVar5[6];
        if ((longlong *)plVar5[6] == plVar5) {
          unaff_RDI = plVar5;
        }
      }
      (*(code *)PTR__objc_release_024a99a0)();
    }
    else {
      FUN_01d8c6e0();
      FUN_01e5cac0();
      FUN_01e491b0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    if (cVar6 == '\x01' && plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


